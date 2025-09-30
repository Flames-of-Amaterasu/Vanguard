// Copyright Flames of Amaterasu

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VanguardCharacterBase.generated.h"

UCLASS(Abstract)
class VANGUARD_API AVanguardCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AVanguardCharacterBase();

protected:
	virtual void BeginPlay() override;

};
