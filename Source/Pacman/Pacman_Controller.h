// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PacmanPawn.h"
#include "GameFramework/PlayerController.h"
#include "Pacman_Controller.generated.h"

/**
 * 
 */
UCLASS()
class PACMAN_API APacman_Controller : public APlayerController
{
	GENERATED_BODY()

public:
	APacman_Controller();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Controls)
		bool bUseTapControls;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Controls)
		float SwipeSensitivity;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Controls)
		float LowSwipeSensitivity;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Controls)
		float MediumSwipeSensitivity;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Controls)
		float HighSwipeSensitivity;

	UFUNCTION(BlueprintCallable)
		void MoveUp();
	UFUNCTION(BlueprintCallable)
		void MoveDown();
	UFUNCTION(BlueprintCallable)
		void MoveLeft();
	UFUNCTION(BlueprintCallable)
		void MoveRight();

protected:
	APacmanPawn* GetPacmanPawn() const;

	virtual void SetupInputComponent() override;

	
};
