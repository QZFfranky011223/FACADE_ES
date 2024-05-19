// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemiga_Basic.generated.h"


UCLASS()
class FACADE_ES_API ANaveEnemiga_Basic : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANaveEnemiga_Basic();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

public:

	void MovimientoEstrategico() override;
	void DisparoEstrategico() override;
	void Habilidad() override;
	void CreateEnemy() override;
};
