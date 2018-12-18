// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Proto.h"
#include "AIController.h"
#include "DRController.generated.h"

/**
 * 
 */
UCLASS()
class PROTO_API ADRController : public AAIController
{
	GENERATED_BODY()
	
public:
	ADRController();
	virtual void Possess(APawn * InPawn)override;

	static const FName TargetKey;
	static const FName NeedMoveKey;
	static const FName GoPosKey;

private:
	UPROPERTY()
	class UBehaviorTree * BT;

	UPROPERTY()
	class UBlackboardData * BB;
};
