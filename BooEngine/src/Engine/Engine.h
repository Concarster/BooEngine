#pragma once
#include "Define.h"
#include "Window.h"
#include "Events\Event.h"
#include "Events\AppEvent.h"
#include "Engine\Layers\LayerStack.h"

namespace boo
{
    class BOO_API Engine
    {
    private:
        bool m_Running;
        /* uqPtr Platform Indepedent */
        std::unique_ptr<Window> m_Window;

        LayerStack m_LayerStack;

    public:
        Engine();
        ~Engine();

        void Begin();

        void OnEvent(Event& onEvent);

        void EventInCategory();

        void PushLayer(Layer* layer);

        void PushOverLay(Layer* overlay);

        /* Helper Fuction to get Events*/
        void ToPrintEvent(Event & onEvent);

    private:
        bool OnWindowClosed(WindowCloseEvent& closeEvent);
    };

    /*For Clients */
    Engine* Generate();
}
