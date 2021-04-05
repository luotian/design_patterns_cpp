#ifndef __TEMPLATE_APP_H__
#define __TEMPLATE_APP_H__

#include "../base_def.h"
#include "template_lib.h"

class LibraryApp : public Library
{
public:
    virtual ~LibraryApp() {}

protected:
    virtual bool Step2() { return true; }
    virtual void Step4() { std::cout << "LibraryApp Step4" << std::endl; }
};




void invoke_template_method_app();

#endif