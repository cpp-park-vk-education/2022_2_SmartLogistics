// DBHelper.hpp
// заголовочный файл, где содержатся объявления методов взаимосвязи с БД
#pragma once
#include <mysql/mysql.h>
#include <string>
#include <vector>

class DBHelper {
private:
	std::string connection;
	std::string query;
public:
	bool mysql_real_connect();
	bool mysql_close();
	void mysql_real_query(std::string connection, std::string query);
};
