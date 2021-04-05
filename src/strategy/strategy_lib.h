#pragma once

class TaxStrategy
{
public:
    virtual double Calculate(const Context& context) = 0;
    virtual ~TaxStrategy() {}
};

class CNTax : public TaxStrategy
{
public:
    virtual double Calculate(const Context& context)
    {
        std::cout << "CNTax:Calculate" << std::endl;
    }
};

class USTax : public TaxStrategy
{
public:
    virtual double Calculate(const Context& context)
    {
        std::cout << "USTax:Calculate" << std::endl;
    }
};

class DETax : public TaxStrategy
{
public:
    virtual double Calculate(const Context& context)
    {
        std::cout << "DETax:Calculate" << std::endl;
    }
};

////ÐÂµÄÀ©Õ¹
class FRTax : public TaxStrategy
{
public:
    virtual double Calculate(const Context& context)
    {
        std::cout << "FRTax:Calculate" << std::endl;
    }
};



