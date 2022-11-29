# include "Handler.hpp"
#define stringify( name ) #name

namespace project{
    Task Handler::getTaskFromMessage(Message message){
        Task task = Task::NONE;
        std::string requestTask = message.GetHeader();
        for (int t = Task::ADDORDER; Task::NONE; ++t){
            Task temp = static_cast<Task>(t);
            if (stringify(temp) == requestTask) task = temp;
        }
            
        return task;
    }
}