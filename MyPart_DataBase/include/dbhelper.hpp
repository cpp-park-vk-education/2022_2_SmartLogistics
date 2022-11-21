// файл dbhelper.hpp
// каркас класса, работающего с БД


#include <mysql/mysql.h>
#include <string>
#include <vector>

struct Cargo {
		
};

class DBHelper {
private:
	std::string User;
	std::string password;
	std::string port;
	std::string databade;
	std::vector<std::vector<std::string>> SendQuery(std::string query);


public:
	std::vector<Cargo> GetCargobyUser(size_t user_id);
	std::vector<Cargo> GetCargobyCarrier(size_t user_id);
	void ChangeStatus(std::string cargo_id, std::string new_status);
	void SendNewGargo(Cargo c);
	std::vector<Cargo> GetNewCargos();

};