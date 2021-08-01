#pragma once

#include "../base_def.h"
#include "prototype_lib.h"


class MainForm
{
public:
    MainForm(ISplitter* prototype) : prototype_(prototype)
    {}

    void OnResponse()
    {
        ISplitter* splitter = prototype_->clone();

        splitter->split();
    }

private:
    ISplitter* prototype_;

};