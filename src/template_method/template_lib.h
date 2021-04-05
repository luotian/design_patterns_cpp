#ifndef __TEMPLATE_LIB_H__
#define __TEMPLATE_LIB_H__

class Library
{
public:
    virtual ~Library() {}

    void Run()
    {
        Step1();

        if (Step2())
        {
            Step3();
        }

        for (int i = 0; i < 4; ++i)
        {
            Step4();
        }

        Step5();
    }

protected:
    // ±ä»¯
    virtual bool Step2() = 0;
    virtual void Step4() = 0;

private:
    // ÎÈ¶¨
    void Step1() {}
    void Step3() {}
    void Step5() {}
};


#endif