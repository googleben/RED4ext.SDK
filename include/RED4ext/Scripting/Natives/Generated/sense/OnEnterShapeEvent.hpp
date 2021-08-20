#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/VisibilityEvent.hpp>

namespace RED4ext
{
namespace sense { 
struct OnEnterShapeEvent : sense::VisibilityEvent
{
    static constexpr const char* NAME = "senseOnEnterShapeEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(OnEnterShapeEvent, 0x68);
} // namespace sense
} // namespace RED4ext