#include "template_app.h"
#include "template_lib.h"

void InvokeTemplateMethodApp()
{
    std::unique_ptr<LibraryApp> app(new LibraryApp());

    app->Run();
}

