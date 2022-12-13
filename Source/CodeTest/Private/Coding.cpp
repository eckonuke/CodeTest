// Fill out your copyright notice in the Description page of Project Settings.


#include "Coding.h"

// Sets default values
ACoding::ACoding()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
// 블루프린트 event graph 
void ACoding::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello, World"));

	int32 number1 = 10;
	UE_LOG(LogTemp, Warning, TEXT("%d, %d"), number1, number2);

	float number3 = 3.14f;
	UE_LOG(LogTemp, Warning, TEXT("%f"), number3);

	FString myName = TEXT("김용일");
	UE_LOG(LogTemp, Warning, TEXT("%s"), *myName);


	Add_Yong();
	AddInt_Yong(10, 20);
	int32 result = AddRetInt_Yong(200, 300);
	UE_LOG(LogTemp, Warning, TEXT("AddInt: %d"), result);
	result = SubInt_Yong(300, 200);
	UE_LOG(LogTemp, Warning, TEXT("AddInt: %d"), result);
	result = ProdInt_Yong(100, 200);
	UE_LOG(LogTemp, Warning, TEXT("AddInt: %d"), result);
	result = DivInt_Yong(300, 60);
	UE_LOG(LogTemp, Warning, TEXT("AddInt: %d"), result);

	//만약에 height 가 weight 보다 크다면 "키가 크네"를 출력한다

	if (height > weight) {
		UE_LOG(LogTemp, Warning, TEXT("키가크네"));
	}
	else if (height == weight) {
		UE_LOG(LogTemp, Warning, TEXT("키가 같네"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("키가 작네"));
	}

	for (int32 i = 0; i < 10; i++) {
		UE_LOG(LogTemp, Warning, TEXT("%d"), i);
	}

	timesTable_Yong(times);
	int32 number4 = 100;
	int32* pnumber4 = &number4;
	int32 number5 = *pnumber4;
	UE_LOG(LogTemp, Warning, TEXT("%d, %d, %d"), number4, pnumber4, number5);

	int32 temp = 0;
	TestPrint(11, 12, &temp);
	UE_LOG(LogTemp, Warning, TEXT("함수 밖 temp : %d"), temp);
}

void ACoding::TestPrint(int32 num1, int32 num2, int32* result) {
	*result = num1 + num2;
	UE_LOG(LogTemp, Warning, TEXT("함수안 result : %d"), *result);
}

// Called every frame
// 블루프린트 event graph
void ACoding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACoding::Add_Yong() {
	int32 num1 = 123, num2 = 456;
	int32 result = num1 + num2;
	UE_LOG(LogTemp, Warning, TEXT("Add: %d"), result);
}

void ACoding::AddInt_Yong(int32 num1, int32 num2) {
	int32 sum = num1 + num2;
	UE_LOG(LogTemp, Warning, TEXT("AddInt: %d"), sum);
}

int32 ACoding::AddRetInt_Yong(int32 num1, int32 num2) {
	int32 sum = num1 + num2;
	return sum;
}

int32 ACoding::SubInt_Yong(int32 num1, int32 num2) {
	return num1 - num2;
}
int32 ACoding::ProdInt_Yong(int32 num1, int32 num2) {
	return num1 * num2;
}
int32 ACoding::DivInt_Yong(int32 num1, int32 num2) {
	return num1 / num2;
}

/*
	* 1. 멤버변수 int32 -> 언리얼에서도 수정가능하게
	* 2. 플레이를 누르면 멤버변수에 들어있는 값에 해당되는 구구단 출력되게하라
	*/
void ACoding::timesTable_Yong(int32 num) {
	for (int32 i = 1; i < 10; i++) {
		UE_LOG(LogTemp, Warning, TEXT("%d * %d = %d"), num, i, num * i);
	}
}

