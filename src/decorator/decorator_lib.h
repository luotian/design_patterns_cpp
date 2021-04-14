#pragma once

class Stream 
{
public:
    virtual ~Stream() {}

    virtual char Read(int number) = 0;
    virtual void Write(char data[]) = 0;
};

class FileStream : public Stream
{
public:
    virtual char Read(int number) 
    {
        // 文件读
    }

    virtual void Write(char data[]) 
    {
        // 文件写
    }
};

class NetworkStream : public Stream
{
public:
    virtual char Read(int number) 
    {
        // 网络读
    }

    virtual void Write(char data[])
    {
        // 网络写
    }
};

class MemoryStream : public Stream
{
public:
    virtual char Read(int number)
    {
        // 内存读
    }

    virtual void Write(char data[])
    {
        // 内存写
    }
};

//===============****************===============//
// 扩展操作

class DecoratorStream : public Stream
{
protected:
    Stream* stream_;

    DecoratorStream(Stream *stream) : stream_(stream) {}
};

class CryptoStream : public DecoratorStream
{
public:
    CryptoStream(Stream *stream) : DecoratorStream(stream) {}

    virtual char Read(int number)
    {
        // Do 加密操作...
        stream_->Read(number);
    }

    virtual void Write(char data[])
    {
        // Do 加密操作...
        stream_->Write(data);
    }
};

class BufferedStream : public DecoratorStream
{
public:
    BufferedStream(Stream* stream) : DecoratorStream(stream) {}

    virtual char Read(int number)
    {
        // Do 缓冲操作...
        stream_->Read(number);
    }

    virtual void Write(char data[])
    {
        // Do 缓冲操作...
        stream_->Write(data);
    }
};
