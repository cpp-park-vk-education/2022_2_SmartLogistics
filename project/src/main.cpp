#include <server.hpp>
#include <client.hpp>

int main(int argc, char* argv[]) {
    std::cout << "Program starts" << std::endl;
    project::Server *server = new project::Server();
    server->run();

    project::Client *client = new project::Client();
    client->connectToServer();
    
    delete client;
    delete server;

    return 0;
}