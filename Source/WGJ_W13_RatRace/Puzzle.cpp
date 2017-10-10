// Fill out your copyright notice in the Description page of Project Settings.

#include "Puzzle.h"

void UPuzzle::GetLaneData(TMap<int, FLaneData> &LaneData)
{
    LaneData = TMap<int, FLaneData>(this->Lanes);
}

void UPuzzle::GetBikeData(TMap<int, FBikeData>& BikeData)
{
    BikeData = TMap<int, FBikeData>(this->Bikes);
}