// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class ArchiveMystery : ModuleRules
{
	public ArchiveMystery(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG", "Niagara", "Json", "JsonUtilities", "Slate", "SlateCore", "LevelSequence", "MovieScene" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        // Legg til følgende linje for å definere din API-makro
        PublicDefinitions.Add("YOURGAME_API=__declspec(dllexport)");

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
