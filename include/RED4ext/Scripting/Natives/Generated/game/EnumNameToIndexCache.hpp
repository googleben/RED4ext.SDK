#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct EnumNameToIndexCache
{
    static constexpr const char* NAME = "gameEnumNameToIndexCache";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EnumNameToIndexCache, 0x30);
} // namespace game
} // namespace RED4ext