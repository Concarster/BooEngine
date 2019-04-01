#include "booPCH.h"
#include "Engine.h"
#include "Events\AppEvent.h"

namespace boo
{
    Engine::Engine()
    {
    }

    Engine::~Engine()
    {
    }

    void Engine::Begin()
    {
        EventInCategory();

        while (true)
        {

        }
    }

    void Engine::EventInCategory()
    {
        WindowResizeEvent winEvent(1440, 900);

        if (winEvent.IsInCategory(EventCategoryApp))
        {
            BOO_ENGINE_TRACE(winEvent);
        }

        if (winEvent.IsInCategory(EventCategoryInput))
        {
            BOO_ENGINE_TRACE(winEvent);
        }
        
    }
}