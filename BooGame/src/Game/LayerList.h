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

