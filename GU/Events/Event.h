#pragma once
#include"Core/Core.h"
namespace GU
{
    enum class GU_API EventType
    {
        None = 0,
        WindowsCloseEvent,
        MouseScrolledEvent
    };

    #define GU_EVENT_GET_TYPE_OVERRIDE(et) EventType GetEventType() override { return EventType::et;}
    class GU_API Event
    {
    public:
        bool Handled = false;
        virtual EventType GetEventType() = 0;
    };
}