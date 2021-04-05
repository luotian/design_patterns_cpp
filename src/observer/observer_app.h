#pragma once

#include "../base_def.h"
#include "observer_lib.h"

class MainForm : public IProgress
{
private:
    TextBox* txtFilePath;
    TextBox* txtFileNumber;

public:
    void Button1Click()
    {
        string filePath = txtFilePath->getText();
        int number = atoi(txtFileNumber->getText().c_str());

        FileSplitter splitter(filePath, number);
        splitter.addIProgress(this);

        ConsoleNotifier cn;
        splitter.addIProgress(&cn);

        splitter.Split();

        splitter.RemoveIProgress(&cn);
    }

    virtual void DoProgress(float value)
    {
        cout << "MainForm:DoProgress" << endl;
    }

};

class ConsoleNotifier : public IProgress
{
    virtual void DoProgress(float value)
    {
        cout << "ConsoleNotifier:DoProgress" << endl;
    }
};