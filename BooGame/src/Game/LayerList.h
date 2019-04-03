#pragma once
#include "ForClient.h"


class ImgLayer : public boo::Layer
{
public:
    ImgLayer()
        : Layer("ImgLayer")
    {
    }

    void OnUpdate() override
    {
        BOO_CLIENT_INFO("ImgLayer::Update");
    }

    void OnEvent(boo::Event& onEvent) override
    {
        BOO_CLIENT_TRACE("{0}", onEvent);

        if (onEvent.GetEventType() == boo::EventType::KeyPressed)
        {
           
        }
    }
};

/* Helper Class to Test Key & Mouse Code BOO_ApiCode*/
class KeyCodeLayer : public boo::Layer
{
public:
    KeyCodeLayer()
        : Layer("KeyCodeLayer")
    {
    }

    void OnUpdate() override
    {
       // BOO_CLIENT_INFO("KeyCodeLayer::Update");

        if (boo::InputMgr::IsKeyPressed(BOO_KEY_TAB))
        {
            BOO_CLIENT_TRACE("Tab key Pressed");
        }

        if (boo::InputMgr::IsMouseButtonPressed(BOO_MOUSE_BUTTON_1))
        {
            BOO_CLIENT_TRACE("Button Pressed");
        }
    }

    void OnEvent(boo::Event& onEvent) override
    {
       // BOO_CLIENT_TRACE("{0}", onEvent);

        if (onEvent.GetEventType() == boo::EventType::KeyPressed)
        {
            boo::KeyPressedEvent& keyEvent = (boo::KeyPressedEvent&)onEvent;
            
            /*Comparison*/
            if (keyEvent.GetKeyCode() == BOO_KEY_W)
            {
                BOO_CLIENT_TRACE("Player Walking UP");
            }
            else if (keyEvent.GetKeyCode() == BOO_KEY_S)
            {
                BOO_CLIENT_TRACE("Player Walking Down");
            }
            else
            {
                BOO_CLIENT_TRACE("Player Is Not Moving!");
            }
            
            
            BOO_CLIENT_TRACE(" {0} ", (char)keyEvent.GetKeyCode());
        }
    }
};

