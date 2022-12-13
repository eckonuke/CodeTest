// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Coding.generated.h"

UCLASS()
class CODETEST_API ACoding : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 number2 = 100;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 age = 20;

	UPROPERTY(EditInstanceOnly)
	float height = 180.0f;
	
	UPROPERTY(EditInstanceOnly)
	float weight = 70;

	UFUNCTION(BlueprintCallable)
	void Add_Yong();
	UFUNCTION(BlueprintCallable)
	void AddInt_Yong(int32 num1, int32 num2);
	UFUNCTION(BlueprintPure)
	int32 AddRetInt_Yong(int32 num1, int32 num2);
	UFUNCTION(BlueprintPure)
	int32 SubInt_Yong(int32 num1, int32 num2);
	UFUNCTION(BlueprintPure)
	int32 ProdInt_Yong(int32 num1, int32 num2);
	UFUNCTION(BlueprintPure)
	int32 DivInt_Yong(int32 num1, int32 num2);

	UPROPERTY(EditAnywhere)
	int32 times = 1;
	void timesTable_Yong(int32 num);

	//reference, value
	void TestPrint(int32 num1, int32 num2, int32* result);
};
