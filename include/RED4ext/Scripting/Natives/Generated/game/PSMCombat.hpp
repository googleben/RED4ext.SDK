#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PSMCombat : uint32_t
{
    Default = 0,
    InCombat = 1,
    OutOfCombat = 2,
    Stealth = 3,
    Any = 4294967295,
};
} // namespace game
using gamePSMCombat = game::PSMCombat;
} // namespace RED4ext

// clang-format on
