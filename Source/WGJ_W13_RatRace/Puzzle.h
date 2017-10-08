// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Puzzle.generated.h"

UENUM(BlueprintType)
enum class EVehicleType : uint8
{
    VT_None,
    VT_Car,
    VT_Truck,
    VT_Bus
};

USTRUCT()
struct FLaneData
{
    GENERATED_BODY()

        UPROPERTY(EditAnywhere)
        TArray<EVehicleType> Vehicles;
};

USTRUCT()
struct FBikeData
{
    GENERATED_BODY()

        UPROPERTY(EditAnywhere)
        TArray<int> Positions;
};

/**
 *
 */
UCLASS()
class WGJ_W13_RATRACE_API UPuzzle : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
        TMap<int, FLaneData> Lanes;

    UPROPERTY(EditAnywhere)
        TMap<int, FBikeData> Bikes;
};
