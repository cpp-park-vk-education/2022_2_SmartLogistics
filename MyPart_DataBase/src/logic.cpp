#include <DBHelper.hpp>
#include <string>
#include <vector>

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
	bool AddOrder(Order) {
		// добавляеь новый заказ
		return 1;
	}
	bool ChangeStatus(std::string id_order, std::string NewStatus) {
		// меняет статус
		return 1;
	}
	bool TakeOrder(std::string id_order, std::string carrier_id) {
		// грузоперевозчик берет заказ
		return 1;
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

int main(){
    return 1;
}