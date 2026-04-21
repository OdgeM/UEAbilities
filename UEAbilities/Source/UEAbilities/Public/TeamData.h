#pragma once

#include "CoreMinimal.h"
#include "TeamData.generated.h"

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class ETeam : uint8
{
    None = 0    UMETA(Hidden),
    Player = 1 << 0,
    Enemy = 1 << 1,
    Neutral = 1 << 2,
    Friendly = 1 << 3,
    Interactable = 1 << 4
};
ENUM_CLASS_FLAGS(ETeam)