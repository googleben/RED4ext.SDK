#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ChoiceCaptionPart_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ChoiceCaptionTagPart_Record : game::data::ChoiceCaptionPart_Record
{
    static constexpr const char* NAME = "gamedataChoiceCaptionTagPart_Record";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ChoiceCaptionTagPart_Record, 0x58);
} // namespace game::data
} // namespace RED4ext