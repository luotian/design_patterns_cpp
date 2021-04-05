#pragma once

#include "../base_def.h"
#include "strategy_lib.h"

class SalesOrder
{
public:
    SalesOrder(StrategyFactory* strategyFactory)
    {
        strategy_ = strategyFactory->NewStrategy();
    }

    virtual ~SalesOrder()
    {
        delete strategy_;
    }

    double CalculateTax()
    {
        Context context;
        return strategy_->Calculate(context);
    }

private:
    TaxStrategy* strategy_;
};

