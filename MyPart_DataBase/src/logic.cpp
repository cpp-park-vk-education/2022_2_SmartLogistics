// logic.cpp
// реализаций методов, которые вызываются сервером и используются для получения/записи данных в БД
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include <mysql/mysql.h>




struct Order {
	std::string id;
	std::string user_id;
	std::string carrier_id;
	std::string place_from;
	std::string place_to;
	std::string size_of_cargo;
	std::string type_of_vehicle;
	std::string status;
	
};
class Logic
{
public:
	//bool AddOrder(Order, std::string query)
	std::vector<std::vector<std::string>> AddOrder(Order, std::string query) {
		// добавляет новый заказ
		std::string query1 = "add new order";
		
		std::string db_adress = "localhost";
		std::string db_username = "root";
		std::string db_pass = "1212";
		std::string db_database = "SmartLogistics";
		// устанавливает соединение с сервером
		MYSQL* connection;
		connection = mysql_init(NULL);
		if (!connection) {
			throw std::runtime_error("Descriptor has not been obtained");
		}
		if (!mysql_real_connect(connection, db_adress.c_str(), db_username.c_str(),
			db_pass.c_str(), db_database.c_str(), 0, NULL,
			0)) {
			throw std::runtime_error("Unable to connect to DB");
		}
		else
		{
			std::cout << "Connected to database!";
		}
		
		MYSQL_RES* result = 0; // Указатель на результат запроса
		MYSQL_ROW row;            // Переменная, из которой будем читать результат
		std::string  query3 = "show tables;";
		mysql_query(connection, query3.c_str()); 

		// Проведение запроса
		if (mysql_query(connection, query3.c_str()) != 0)
		{
			std::cout << "Невозможно провести запрос!" << std::endl;
			mysql_close(connection);
			system("PAUSE");
			//return 1;
		}
		result = mysql_store_result(connection);
		std::vector<std::vector<std::string>> result1 = {};
		if (result)
		{
			while ((row = mysql_fetch_row(result)) != NULL)
			{
				size_t col_count = mysql_num_fields(result);
				for (size_t i = 0; i < col_count; ++i) {
        			result1.back().push_back(row[i]);
     			}
			}
		}
		else
		{
			std::cout << "Не найдено данных" << std::endl;
		}
		// закрываем соединение
		mysql_close(connection);
		system("PAUSE");
		return result1;
	}
	bool ChangeStatus(std::string id_order, std::string NewStatus) {
		// меняет статус
		return 0;
	}
	bool TakeOrder(std::string id_order, std::string carrier_id) {
		// грузоперевозчик берет заказ
		return 0;
	}
	std::vector<std::vector<std::string>> GetOrdersToCarrier(std::string id_carrier) {
		// выдает заказы по грузоперевозчику
		std::vector<std::vector<std::string>> OrdersToCarrier;
		return OrdersToCarrier;
	}
	std::vector<std::vector<std::string>> GetFreeOrders() {
		// выдает все свободные заказы
		std::vector<std::vector<std::string>> FreeOrders;
		return FreeOrders;
	}
	std::vector<std::vector<std::string>> GetOrdersToClient(std::string client_id) {
		// выдает все заказы клиента
		std::vector<std::vector<std::string>> ClientOrders;
		return ClientOrders;
	}
	std::vector<std::vector<std::string>> GetMessages(std::string id_user) {
		// клиент получает новые уведомления
		std::vector<std::vector<std::string>> NewMessages;
		return NewMessages;
	}
};

// метод получения запроса с сервера
std::string GetQueryFromServer(std::string query) {
	return query;
}

// метод преобразования данных о заказе в структуру
Order GetOrderInfo(std::vector<std::string>& OrderInfo)
{
	
	Order neworder;
	neworder.id = OrderInfo[0];
	neworder.user_id = OrderInfo[1];
	neworder.carrier_id = OrderInfo[2];
	neworder.place_from = OrderInfo[3];
	neworder.place_to = OrderInfo[4];
	neworder.size_of_cargo = OrderInfo[5];
	neworder.type_of_vehicle = OrderInfo[6];
	neworder.status = OrderInfo[7];
	return neworder;
}

int main() {
	
	setlocale(LC_ALL, ".1251");
	std::cout << "ок" << std::endl;

	//std::string query = GetQueryFromServer();
	std::vector<std::string> OrderInfo;
	Order neworder;
	//Order neworder = GetOrderInfo(OrderInfo);
	std::string query = "1";
	Logic newquery;
	bool result = 1;
	std::vector<std::vector<std::string>> tableresult;
	if (query == "1")
	{
		std::cout << "ок" << std::endl;
		query = "INSERT INTO Orders (id_order, user_id, carrier_id, place_from, place_to, size_of_cargo, type_of_vehicle, status) VALUES ('6', '5', '5', 'Moscow', 'USA', '120', 'car', 'not complete')";
		std::cout << "ок" << std::endl;
		tableresult = newquery.AddOrder(neworder, query);
		std::cout << "ок" << std::endl;
	}
	else if (query == "2")
	{
		std::string newstatus = "comlete";
		result = newquery.ChangeStatus(neworder.id, newstatus);
	}
	else if (query == "3")
	{
		result = newquery.TakeOrder(neworder.id, neworder.carrier_id);
	}
	else if (query == "4")
	{
		tableresult = newquery.GetOrdersToCarrier(neworder.carrier_id);
	}
	else if (query == "5")
	{
		tableresult = newquery.GetFreeOrders();
	}
	else if (query == "6")
	{
		tableresult = newquery.GetOrdersToClient(neworder.user_id);
	}
	else if (query == "7")
	{
		tableresult = newquery.GetMessages(neworder.user_id);
	}
	std::cout << result;
	
	return 0;
}