#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior { 
struct InfluenceExcludeObstaclePointTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorInfluenceExcludeObstaclePointTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> workspotData; // 38
    Handle<AI::ArgumentMapping> mountData; // 48
};
RED4EXT_ASSERT_SIZE(InfluenceExcludeObstaclePointTaskDefinition, 0x58);
} // namespace AI::behavior
} // namespace RED4ext