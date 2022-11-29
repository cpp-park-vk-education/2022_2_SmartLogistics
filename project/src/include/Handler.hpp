#include <vector>
#include <sys/types.h>
#include "Task.hpp"
#include "Logic.hpp"
#include <Message.hpp>
#include <Answer.hpp>

namespace project{
    class Handler{
        public:
            bool GetRequest(Message mes);
            Answer SentResponse();
        private:
            static Task task;
            std::vector<pid_t> processes;
            static Logic logic;
            Task getTaskFromMessage(Message message);
            Answer createAnswer(std::string code, std::string body);
    };
}