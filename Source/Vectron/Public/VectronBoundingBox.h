// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "VectronBoundingBox.generated.h"

struct FFGAContents
{
	int32 GridX;
	int32 GridY;
	int32 GridZ;
	FBox Bounds;
	TArray<FVector> Vectors;
};

UCLASS()
class UE4VECTRON_API AVectronBoundingBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVectronBoundingBox();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	FFGAContents* m_bbContents;
	
	void setFFGAContents(FFGAContents* importedValue);

	UFUNCTION(BlueprintCallable, Category="Voxel Data")
	FVector getVoxelPosition(int32 x, int32 y, int32 z);
};
