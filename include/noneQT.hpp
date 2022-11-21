#include<vector>
#include<string>

struct Order{
    public:
    Order(std::vector<std::string>& vector);
    std::string id;
    std::string user_id;
    std::string carrier_id;
    std::string place_from;
    std::string size_of_cargo;
    std::string status;
};

class QTClient{
    public:
    QTClient(std::vector<std::string>& vector);
    std::string login;
    std::string password;
    std::string nickname;
    std::string id;
    std::vector<Order>& current_orders;
    std::vector<Order>& orders;
};

class QTUser:QTClient{
    public:
    QTUser(std::vector<std::string>& vector);
    bool showOrders();
    std::string createOrder(std::vector<std::string>& vector);
    bool showCurrentOreders();
};

class QTCarrier:QTClient{
    public:
    QTCarrier(std::vector<std::string>& vector);
    bool showOrders();
    bool takeAnOrder(std::string id_order);
    bool showFreeOreders();
    bool finishOrder();
};