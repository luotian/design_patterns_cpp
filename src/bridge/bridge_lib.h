#pragma once
#include "../base_def.h"

class MessagerImpl
{
public:
    virtual void PlaySound() = 0;
    virtual void DrawShape() = 0;
    virtual void WriteText() = 0;
    virtual void Connect() = 0;

    virtual ~MessagerImpl() {}
};

class Messager
{
protected:
    MessagerImpl* messagerImpl;
public:
    virtual void Login(string username, string passowrd) = 0;
    virtual void SendMessage(string message) = 0;
    virtual void SendPicture(string image) = 0;

    Messager(MessagerImpl* imp) { messagerImpl = imp; }
    virtual ~Messager() {}
};

// 平台实现
class PCMessageImpl : public MessagerImpl
{
    virtual void PlaySound()
    {
        // do...
    }

    virtual void DrawShape()
    {
        // do...
    }

    virtual void WriteText()
    {
        // do...
    }

    virtual void Connect()
    {
        // do...
    }
};

class MobileMessageImpl : public MessagerImpl
{
    virtual void PlaySound()
    {
        // do...
    }

    virtual void DrawShape()
    {
        // do...
    }

    virtual void WriteText()
    {
        // do...
    }

    virtual void Connect()
    {
        // do...
    }
};

// 业务功能
class MessagerLite : public Messager
{
public:
    virtual void Login(string username, string passowrd)
    {
        messagerImpl->Connect();
    }

    virtual void SendMessage(string message)
    {
        messagerImpl->WriteText();
    }

    virtual void SendPicture(string image)
    {
        messagerImpl->DrawShape();
    }
};

class MessagerPerfect : public Messager
{
public:
    virtual void Login(string username, string passowrd)
    {
        messagerImpl->PlaySound();

        messagerImpl->Connect();
    }

    virtual void SendMessage(string message)
    {
        messagerImpl->WriteText();
    }

    virtual void SendPicture(string image)
    {
        messagerImpl->DrawShape();
    }
};
