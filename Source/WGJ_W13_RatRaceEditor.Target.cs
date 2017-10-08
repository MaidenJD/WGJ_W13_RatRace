// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class WGJ_W13_RatRaceEditorTarget : TargetRules
{
	public WGJ_W13_RatRaceEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "WGJ_W13_RatRace" } );
	}
}
