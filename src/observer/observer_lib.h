#pragma once
#include "../base_def.h"

class IProgress
{
public:
    virtual void DoProgress(float value) = 0;
    virtual ~IProgress() {}
};

class FileSplitter
{
private:
    string m_filePath;
    int m_fileNumber;

    //ProgressBar* progressBar; //具体通知控件
    list<IProgress*> m_iprogressList; //抽象通知机制，支持多个观察者

public:
    FileSplitter(const string& file, int fileNumber)
        : m_filePath(file)
        , m_fileNumber(fileNumber)
    {}

    void Split()
    {
        //1. 读取大文件

        //2. 分批次向小文件中写入
        for (int i = 0; i < m_fileNumber; ++i)
        {
            // ...
            float value = 1.0;
            on_progress(value);
        }
    }

    void AddIProgress(IProgress* iprogress)
    {
        m_iprogressList.add(iprogress);
    }

    void RemoveIProgress(IProgress* iprogress)
    {
        m_iprogressList.remove(iprogress);
    }

protected:
    virtual void on_progress(float value)
    {
        for (auto& iprogress : m_iprogressList)
        {
            iprogress->DoProgress(value);
        }
    }
};