// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TP2_Unreal : ModuleRules
{
	public TP2_Unreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
