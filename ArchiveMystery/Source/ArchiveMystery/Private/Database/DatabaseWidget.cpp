// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/DatabaseWidget.h"
#include "Components/EditableTextBox.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "Character/ArchiveGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UDatabaseWidget::NativeConstruct()
{
	Super::NativeConstruct();
	UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
	const bool bIsEnglish = GameInstance && GameInstance->bIsEnglish;
	UE_LOG(LogTemp, Warning, TEXT("bIsEnglish = %s"), bIsEnglish ? TEXT("true") : TEXT("false"));


	if (OpenInfoButton)
	{
		OpenInfoButton->OnClicked.AddDynamic(this, &UDatabaseWidget::OnOpenInfoClicked);
	}

	if (SubmitButton)
	{
		SubmitButton->OnClicked.AddDynamic(this, &UDatabaseWidget::OnSubmitClicked);
	}

	if (SelectComboBox)
	{
		SelectComboBox->ClearOptions();
		SelectComboBox->AddOption(bIsEnglish ? TEXT("Select columns...") : TEXT("Velg kolonner..."));

		if (bIsEnglish)
		{
			SelectComboBox->AddOption(TEXT("name, content"));

			SelectComboBox->AddOption(TEXT("doc_name, doc_content")); //Wrong answer
			SelectComboBox->AddOption(TEXT("title, description")); //Wrong answer
			SelectComboBox->AddOption(TEXT("id, description")); //Wrong answer
		}
		else
		{
			SelectComboBox->AddOption(TEXT("navn, innhold"));

			SelectComboBox->AddOption(TEXT("dok_navn, dok_innhold")); //Wrong answer
			SelectComboBox->AddOption(TEXT("tittel, beskrivelse")); //Wrong answer
			SelectComboBox->AddOption(TEXT("id, beskrivelse")); //Wrong answer

		}

		SelectComboBox->SetSelectedIndex(0);
	}

	if (FromComboBox)
	{
		FromComboBox->ClearOptions();
		FromComboBox->AddOption(bIsEnglish ? TEXT("Choose table...") : TEXT("Velg en tabell..."));

		if (bIsEnglish)
		{
			FromComboBox->AddOption(TEXT("documents"));

			FromComboBox->AddOption(TEXT("archive")); //Wrong answer      
			FromComboBox->AddOption(TEXT("files")); //Wrong answer           
			FromComboBox->AddOption(TEXT("doc")); //Wrong answer
		}
		else
		{
			FromComboBox->AddOption(TEXT("dokumenter"));

			FromComboBox->AddOption(TEXT("arkiv")); //Wrong answer             
			FromComboBox->AddOption(TEXT("filer")); //Wrong answer            
			FromComboBox->AddOption(TEXT("dok")); //Wrong answer
		}

		FromComboBox->SetSelectedIndex(0);
	}

	if (WhereComboBox)
	{
		WhereComboBox->ClearOptions();
		WhereComboBox->AddOption(bIsEnglish ? TEXT("Choose column...") : TEXT("Velg kolonne..."));

		if (bIsEnglish)
		{
			WhereComboBox->AddOption(TEXT("documentname"));
			WhereComboBox->AddOption(TEXT("document_id"));      // annen kolonne
			WhereComboBox->AddOption(TEXT("title"));            // feil felt
			WhereComboBox->AddOption(TEXT("name"));             // for generelt
		}
		else
		{
			WhereComboBox->AddOption(TEXT("dokumentnavn"));
			WhereComboBox->AddOption(TEXT("dokument_id"));      // annen kolonne
			WhereComboBox->AddOption(TEXT("tittel"));           // feil kolonne
			WhereComboBox->AddOption(TEXT("navn"));             // for generelt
		}

		WhereComboBox->SetSelectedIndex(0);
	}

	if (LikeComboBox)
	{
		LikeComboBox->ClearOptions();
		LikeComboBox->AddOption(bIsEnglish ? TEXT("Choose keyword...") : TEXT("Velg soekeord..."));

		if (bIsEnglish)
		{
			LikeComboBox->AddOption(TEXT("%building specifications%"));
			LikeComboBox->AddOption(TEXT("%blueprints%"));                 // feil innhold
			LikeComboBox->AddOption(TEXT("%structure%"));                  // annet tema
			LikeComboBox->AddOption(TEXT("building specifications"));      // mangler %
		}
		else
		{
			LikeComboBox->AddOption(TEXT("%bygning spesifikasjoner%"));
			LikeComboBox->AddOption(TEXT("%blåkopi%"));                    // feil dokumenttype
			LikeComboBox->AddOption(TEXT("%struktur%"));                   // annet tema
			LikeComboBox->AddOption(TEXT("bygning spesifikasjoner"));      // mangler %
		}

		LikeComboBox->SetSelectedIndex(0);
	}

	if (AndComboBox)
	{
		AndComboBox->ClearOptions();
		AndComboBox->AddOption(bIsEnglish ? TEXT("Choose condition...") : TEXT("Velg betingelse..."));

		if (bIsEnglish)
		{
			AndComboBox->AddOption(TEXT("Company= Treplanken AS"));
			AndComboBox->AddOption(TEXT("Company= Treewood AS"));          // feil firmanavn
			AndComboBox->AddOption(TEXT("firm= Treplanken AS"));          // feil kolonnenavn
			AndComboBox->AddOption(TEXT("company_name= Treplanken AS"));  // ikke riktig felt
		}
		else
		{
			AndComboBox->AddOption(TEXT("Bedrift= Treplanken AS"));
			AndComboBox->AddOption(TEXT("Bedrift= TreTømmer AS"));         // feil firmanavn
			AndComboBox->AddOption(TEXT("firma= Treplanken AS"));          // feil kolonnenavn
			AndComboBox->AddOption(TEXT("bedriftsnavn= Treplanken AS"));   // ikke riktig felt
		}

		AndComboBox->SetSelectedIndex(0);
	}


	if (Text_PlayerName_Database)
	{
		if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
		{
			FString Message = FString::Printf(TEXT("You are logged in as: %s"), *GI->PlayerName);
			Text_PlayerName_Database->SetText(FText::FromString(Message));
		}
	}

	if (GameInstance)
	{
		if (SelectComboBox) SelectComboBox->SetSelectedOption(GameInstance->SavedSelect);
		if (FromComboBox)   FromComboBox->SetSelectedOption(GameInstance->SavedFrom);
		if (WhereComboBox)  WhereComboBox->SetSelectedOption(GameInstance->SavedWhere);
		if (LikeComboBox)   LikeComboBox->SetSelectedOption(GameInstance->SavedLike);
		if (AndComboBox)    AndComboBox->SetSelectedOption(GameInstance->SavedAnd);
	}

	if (BackgroundMusic)
	{
		UGameplayStatics::PlaySound2D(this, BackgroundMusic);
	}
}

void UDatabaseWidget::OnSubmitClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("OnOpenInfoClicked called"));
	if (!SelectComboBox || !FromComboBox || !WhereComboBox || !LikeComboBox || !AndComboBox)
		return;

	auto CleanText = [](const FString& In)
		{
			FString Out = In.TrimStartAndEnd().ToLower();
			Out = Out.Replace(TEXT(" "), TEXT(""));
			Out = Out.Replace(TEXT("'"), TEXT(""));
			Out = Out.Replace(TEXT("\""), TEXT(""));
			return Out;
		};

	// Hent og rens input
	const FString SelectText = CleanText(SelectComboBox ? SelectComboBox->GetSelectedOption() : TEXT(""));
	const FString FromText = CleanText(FromComboBox ? FromComboBox->GetSelectedOption() : TEXT(""));
	const FString WhereText = CleanText(WhereComboBox ? WhereComboBox->GetSelectedOption() : TEXT(""));
	const FString LikeText = CleanText(LikeComboBox ? LikeComboBox->GetSelectedOption() : TEXT(""));
	const FString AndText = CleanText(AndComboBox ? AndComboBox->GetSelectedOption() : TEXT(""));

	// Korrekte svar – også renset for mellomrom
	/*const TArray<FString> ExpectedSelectOptions = { TEXT("document_name,document_content"), TEXT("dokument_navn,dokument_innhold") };
	const TArray<FString> ExpectedFromOptions = { TEXT("documents"), TEXT("dokumenter") };
	const TArray<FString> ExpectedWhereOptions = { TEXT("documentname"), TEXT("dokumentnavn") };
	const TArray<FString> ExpectedLikeOptions = { TEXT("%buildingspecifications%"), TEXT("%bygningspesifikasjoner%") };
	const TArray<FString> ExpectedAndOptions = { TEXT("company=treplankenas"), TEXT("bedrift=treplankenas") };*/

	TArray<FString> ExpectedSelectOptions;
	TArray<FString> ExpectedFromOptions;
	TArray<FString> ExpectedWhereOptions;
	TArray<FString> ExpectedLikeOptions;
	TArray<FString> ExpectedAndOptions;

	if (UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance()))
	{
		if (GameInstance->bIsEnglish)
		{
			ExpectedSelectOptions = { TEXT("name,content") };
			ExpectedFromOptions = { TEXT("documents") };
			ExpectedWhereOptions = { TEXT("documentname") };
			ExpectedLikeOptions = { TEXT("%buildingspecifications%") };
			ExpectedAndOptions = { TEXT("company=treplankenas") };
		}
		else
		{
			ExpectedSelectOptions = { TEXT("navn,innhold") };
			ExpectedFromOptions = { TEXT("dokumenter") };
			ExpectedWhereOptions = { TEXT("dokumentnavn") };
			ExpectedLikeOptions = { TEXT("%bygningspesifikasjoner%") };
			ExpectedAndOptions = { TEXT("bedrift=treplankenas") };
		}
	}

	// Sammenlign
	const bool bSelectOK = ExpectedSelectOptions.Contains(SelectText) && !SelectText.Contains("velg");
	const bool bFromOK = ExpectedFromOptions.Contains(FromText) && !FromText.Contains("velg");
	const bool bWhereOK = ExpectedWhereOptions.Contains(WhereText) && !WhereText.Contains("velg");
	const bool bLikeOK = ExpectedLikeOptions.Contains(LikeText) && !LikeText.Contains("velg");
	const bool bAndOK = ExpectedAndOptions.Contains(AndText) && !AndText.Contains("velg");


	if (bSelectOK && bFromOK && bWhereOK && bLikeOK && bAndOK)
	{

		// Eventuelt: vis neste widget
		if (ResultWidgetClass)
		{
			APlayerController* PC = GetWorld()->GetFirstPlayerController();
			if (PC)
			{
				UUserWidget* ResultWidget = CreateWidget<UUserWidget>(PC, ResultWidgetClass);
				if (ResultWidget)
				{
					ResultWidget->AddToViewport();
					this->RemoveFromParent();
				}
			}
		}
	}
	else
	{
		UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
		if (GameInstance && SelectComboBox && FromComboBox && WhereComboBox && LikeComboBox && AndComboBox)
		{
			GameInstance->SavedSelect = SelectComboBox->GetSelectedOption();
			GameInstance->SavedFrom = FromComboBox->GetSelectedOption();
			GameInstance->SavedWhere = WhereComboBox->GetSelectedOption();
			GameInstance->SavedLike = LikeComboBox->GetSelectedOption();
			GameInstance->SavedAnd = AndComboBox->GetSelectedOption();
		}

		if (ErrorWidgetClass)
		{

			APlayerController* PC = GetWorld()->GetFirstPlayerController();
			if (PC)
			{
				UUserWidget* ErrorWidget = CreateWidget<UUserWidget>(PC, ErrorWidgetClass);
				if (ErrorWidget)
				{
					ErrorWidget->AddToViewport();
					this->RemoveFromParent();
				}
			}
		}
	}
}

void UDatabaseWidget::OnOpenInfoClicked()
{
	UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
	if (GameInstance && SelectComboBox && FromComboBox && WhereComboBox && LikeComboBox && AndComboBox)
	{
		GameInstance->SavedSelect = SelectComboBox->GetSelectedOption();
		GameInstance->SavedFrom = FromComboBox->GetSelectedOption();
		GameInstance->SavedWhere = WhereComboBox->GetSelectedOption();
		GameInstance->SavedLike = LikeComboBox->GetSelectedOption();
		GameInstance->SavedAnd = AndComboBox->GetSelectedOption();
	}

	if (InfoWidgetClass)
	{
		APlayerController* PC = GetWorld()->GetFirstPlayerController();
		if (PC)
		{
			UUserWidget* InfoWidget = CreateWidget<UUserWidget>(PC, InfoWidgetClass);
			if (InfoWidget)
			{
				InfoWidget->AddToViewport();
				this->RemoveFromParent();

			}

		}

	}

}

