// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NCEGameMode.generated.h"

/**
 * 
 */
UCLASS()
class NETCODEEXAMPLE_API ANCEGameMode : public AGameModeBase
{
	GENERATED_BODY()


	virtual void RestartPlayer(AController* NewPlayer) override;
	
public:
	ANCEGameMode();

	void PlayerDied(ACharacter* Character);
};
