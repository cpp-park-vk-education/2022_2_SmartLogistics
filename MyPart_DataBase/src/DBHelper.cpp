// DBHelper.cpp
// реализация всех функций и методов взаимодействия с БД
#include <DBHelper.hpp>


bool DBHelper::mysql_real_connect() {
	// устанавливает соединение с сервером
	return 1;
}
bool DBHelper::mysql_close() {
	// закрывает соединение с сервером
	return 1;
}
void DBHelper::mysql_real_query(std::string connection, std::string query) {
	// делает запрос в БД
}