
#include <iostream>

namespace project {
    class Answer{
        public:
            Answer(std::string header, std::string body){
                header = header;
                body = body;
            }
            ~Answer();
            std::string GetHeader();
            std::string GetBody();
        private:
            std::string header;
            std::string body;
    };
}