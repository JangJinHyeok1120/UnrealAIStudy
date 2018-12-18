// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Proto.h"
#include "BehaviorTree/BTService.h"
#include "BTService_FindTarget.generated.h"

/**
 * 
 */
UCLASS()
class PROTO_API UBTService_FindTarget : public UBTService
{
	GENERATED_BODY()
	
public:
	UBTService_FindTarget();

	virtual void TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)override;
};
