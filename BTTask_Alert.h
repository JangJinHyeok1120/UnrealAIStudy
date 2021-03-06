// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Proto.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_Alert.generated.h"

/**
 * 
 */
UCLASS()
class PROTO_API UBTTask_Alert : public UBTTaskNode
{
	GENERATED_BODY()
	
	
public:
	UBTTask_Alert();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)override;

protected:
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)override;

private:
	bool IsAlert = false;
};
