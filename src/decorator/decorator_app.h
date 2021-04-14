#pragma once

#include "../base_def.h"
#include "decorator_lib.h"


void Process()
{
    // 运行时装配
    FileStream* s1 = new FileStream();

    CryptoStream* s2 = new CryptoStream(s1);

    BufferedStream* s3 = new BufferedStream(s2);
}
