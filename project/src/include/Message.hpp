
#include <iostream>

namespace project {
    class Message{
        public:
            Message(std::string header, std::string body){
                header = header;
                body = body;
            }
            ~Message();
        private:
            std::string header;
            std::string body;
    };
}