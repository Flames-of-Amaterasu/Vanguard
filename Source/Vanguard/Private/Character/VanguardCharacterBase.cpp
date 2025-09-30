// Copyright Flames of Amaterasu


#include "Character/VanguardCharacterBase.h"

AVanguardCharacterBase::AVanguardCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AVanguardCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}
