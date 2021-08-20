#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubAction_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAISubAction_Record";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AISubAction_Record, 0x48);
} // namespace game::data
} // namespace RED4ext