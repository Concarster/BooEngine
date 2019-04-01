#pragma once
#include "Define.h"

namespace boo
{
    class BOO_API Engine
    {
    public:
        Engine();
        ~Engine();

        void Begin();

        void EventInCategory();
    };

    /*For Clients */
    Engine* Generate();
}
