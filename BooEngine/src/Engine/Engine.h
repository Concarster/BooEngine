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
    };

    /*For Clients */
    Engine* Generate();
}
