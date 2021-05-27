#pragma once

#include "../base_def.h"
#include "factory_lib.h"

class MainForm
{
public:
	MainForm(SplitterFactory *factory) : factory_(factory_)
    {}

    void OnResponse()
    {
        ISplitter* splitter = factory_->CreateSplitter();

        splitter->split();
    }

private:
    SplitterFactory* factory_;

};

