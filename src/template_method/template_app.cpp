#include "template_app.h"
#include "template_lib.h"

void invoke_template_method_app()
{
    std::unique_ptr<LibraryApp> app(new LibraryApp());

    app->Run();
}

