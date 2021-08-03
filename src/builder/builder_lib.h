#pragma once
#include "../base_def.h"

class House
{
public:
    void Init()
    {
        this->BuildPart1();

        for (int i = 0; i < 4; ++i)
        {
            this->BuildPart2();
        }

        bool flag = this->BuildPart3();

        if (flag)
        {
            this->BuildPart4();
        }
    }

    virtual ~House() {}
protected:
    virtual void BuildPart1();
    virtual void BuildPart2();
    virtual bool BuildPart3();
    virtual void BuildPart4();
};

class StoneHouse : public House
{
protected:
    virtual void BuildPart1();
    virtual void BuildPart2();
    virtual bool BuildPart3();
    virtual void BuildPart4();
};