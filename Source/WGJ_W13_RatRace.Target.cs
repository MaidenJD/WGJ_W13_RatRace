// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class WGJ_W13_RatRaceTarget : TargetRules
{
	public WGJ_W13_RatRaceTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "WGJ_W13_RatRace" } );
	}
}
