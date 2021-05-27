#pragma once
#include "../base_def.h"

// 抽象类
class ISplitter
{
public:
    virtual void split() = 0;
	virtual ~ISplitter() { }
};

// 工厂基类
class SplitterFactory
{
public:
    virtual ISplitter* CreateSplitter() = 0;
    virtual ~SplitterFactory() {}
};

// move to ConcreteProduct.h
// 具体对象
class BinarySplitter : public ISplitter
{
public:
    virtual void split() {}
};

class TxtSplitter : public ISplitter
{
public:
    virtual void split() {}
};


// move to Concretefactory.h
// 具体工厂
class BinarySplitterFactory : public SplitterFactory
{
public:
    virtual ISplitter* CreateSplitter()
    {
        return new BinarySplitter();
    }
};

class TxtSplitterFactory : public SplitterFactory
{
public:
    virtual ISplitter* CreateSplitter()
    {
        return new TxtSplitter();
    }
};