// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class FACADE_ES_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	// M�todos virtuales puros para crear, mover, disparar y habilidades de la nave enemiga
	

public:
	void RealizarOperacion();




public:

	virtual void CreateEnemy() PURE_VIRTUAL(ANaveEnemiga::CreateEnemy;);
	virtual void MovimientoEstrategico() PURE_VIRTUAL(ANaveEnemiga::MovimientoEstrategico;);
	virtual void DisparoEstrategico() PURE_VIRTUAL(ANaveEnemiga::DisparoEstrategico;);
	virtual void Habilidad() PURE_VIRTUAL(ANaveEnemiga::Habilidad;);


};
