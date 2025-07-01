// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DatabaseWidget.generated.h"

/**
 * 
 */

class UEditableTextBox;
class UButton;
class UTextBlock;


UCLASS()
class ARCHIVEMYSTERY_API UDatabaseWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	FReply NativeOnPreviewKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent);



	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* SelectInputBox;

	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* FromInputBox;

	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* WhereInputBox;
	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* LikeInputBox;
	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* AndInputBox;

	UPROPERTY(meta = (BindWidget))
	UButton* SubmitButton;

	// Optional feedback message
	/*UPROPERTY(meta = (BindWidgetOptional))
	UTextBlock* FeedbackText;*/

	// Husk å eksponere til Blueprint hvis du vil tilordne widget i editoren
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> ResultWidgetClass;

	UFUNCTION()
	void OnSubmitClicked();

	UFUNCTION()
	void OnSelectTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

	UFUNCTION()
	void OnFromTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

	UFUNCTION()
	void OnWhereTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

	UFUNCTION()
	void OnLikeTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

	UFUNCTION()
	void OnAndTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnOpenInfoClicked();

	UPROPERTY(meta = (BindWidget))
	UButton* OpenInfoButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> InfoWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> ErrorWidgetClass;

public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PlayerName_Database;
};
