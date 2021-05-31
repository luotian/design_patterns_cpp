#pragma once

#include "../base_def.h"
#include "abstract_factory_lib.h"


// 
class EmployeeDAO : public IDBConnection
{
    IDBFactory* db_factory_;
public:
    vector<EmployeeDAO> GetEmployees()
    {
        IDBConnection* connection = db_factory_->CreateConnection();

        IDBCommand* command = db_factory_->CreateCommand();
        command->SetConnection(connection);

        IDataReader* data_reader = db_factory_->CreateDataReader();
    }
};
