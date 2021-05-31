#pragma once
#include "../base_def.h"

// 数据库访问有关的基类
class IDBConnection {};

class IDBCommand {
public:
    virtual void SetConnection(IDBConnection*);
};

class IDataReader {};

// 接口工厂
class IDBFactory
{
public:
    virtual IDBConnection* CreateConnection() = 0;
    virtual IDBCommand* CreateCommand() = 0;
    virtual IDataReader* CreateDataReader() = 0;
};

// 支持SQL Server
class SqlConnection : public IDBConnection {};

class SqlCommand : public IDBCommand {};

class SqlDataReader : public IDataReader {};

class SqlFactory : public IDBFactory{};

// 支持Oracle
class OracleConnection : public IDBConnection {};

class OracleCommand : public IDBCommand {};

class OracleDataReader : public IDataReader {};

class OracleFactory : public IDBFactory {};

