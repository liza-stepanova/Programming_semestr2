#include <iostream>
#include "buffer/cbuffer.h"

int main() {
    CRing_buffer<int> buffer;
 
    buffer.push_back(3);
    buffer.push_back(1);
    buffer.push_back(4);
    buffer.push_back(1);
    buffer.push_back(5);
    buffer.push_front(2);
    buffer.pop_front();
 
    for (auto it = buffer.begin(); it != buffer.end(); ++it) {
        std::cout << *it << " ";
    }
 
    return 0;
}