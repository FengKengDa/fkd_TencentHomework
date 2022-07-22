// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class txHomework1 : ModuleRules
{
	public txHomework1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
