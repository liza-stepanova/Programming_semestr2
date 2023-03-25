#include <string>
#include <exception>

using namespace std;

class MyException : public exception {
public:
    MyException(const string &message) : message{message} {}

    const char *what() const noexcept override {
        return message.c_str();
    }

private:
    string message;
};