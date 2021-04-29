#pragma once

#include "../base_def.h"
#include "bridge_lib.h"


void Process()
{
    // 运行时装配
    MessagerImpl* mImp = new PCMessageImpl();

    Messager* m = new MessagerLite(mImp);
}
