#pragma once
#include "../base_def.h"

// 抽象类
class ISplitter
{
public:
    virtual void split() {}
    virtual ISplitter* clone() = 0; // 通过克隆自己来创建对象

    virtual ~ISplitter() { }
};

//////////////////////////////////////////////////////////


// 具体对象
class BinarySplitter : public ISplitter
{
public:
    virtual ISplitter* clone() {
        return new BinarySplitter(*this);
    }
};

class TxtSplitter : public ISplitter
{
public:
    virtual ISplitter* clone() {
        return new TxtSplitter(*this);
    }
};

