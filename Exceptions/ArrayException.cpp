#include <string>
#include <exception>

using namespace std;

namespace Exceptions {
    class ExceptionArray : public exception {
    public:
        ExceptionArray(const string &message) : message{message} {}

        const char *what() const noexcept override {
            return message.c_str();
        }

    private:
        string message;
    };
}