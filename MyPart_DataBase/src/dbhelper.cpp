// dbhelper.cpp содержит описание всех действий, связанных с БД

#include <dbhelper.hpp>
#include <string>
#include <gtest/gtest.h>

std::vector<std::vector<std::string>>
DBHelper::SendQuery(std::string query)
{
    MYSQL* connection;
    connection = mysql_init(NULL);
    if (!connection) {
        throw std::runtime_error("Невозможно подключиться к серверу!");
    }
}

int main()
{
    return 0;
}