#include "booPCH.h"
#include "Engine.h"
#include "Events\AppEvent.h"

#include <glad\glad.h>

namespace boo
{
#define BIND_EVENT_FN(x) std::bind(&Engine::x, this, std::placeholders::_1)

    Engine::Engine()
        :m_Running(true)
    {
        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window->SetEventCallBack(BIND_EVENT_FN(OnEvent));
    }

    Engine::~Engine()
    {
    }

    void Engine::Begin()
    {
        EventInCategory();

        while (m_Running)
        {
            glClearColor(0.0f, 0.0f, 0.4f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            m_Window->OnUpdate();
        }
    }

    void Engine::OnEvent(Event & onEvent)
    {
        EventDispatcher distpatcher(onEvent);
        distpatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClosed));

        //ToPrintEvent(onEvent);
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

    void Engine::ToPrintEvent(Event & onEvent)
    {
        BOO_ENGINE_TRACE("{0}", onEvent);
    }

    bool Engine::OnWindowClosed(WindowCloseEvent & closeEvent)
    {
        m_Running = false;
        return true;
    }
}