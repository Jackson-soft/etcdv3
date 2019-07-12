#include "Client.hpp"
#include <grpcpp/grpcpp.h>
#include <iostream>
#include <string>

void test()
{
    std::string range_end{"abcd"};
    int ascii = static_cast<int>(range_end.at(range_end.length() - 1));
    char end  = static_cast<char>(ascii + 1);
    std::cout << ascii << ":" << end << std::endl;
    range_end.back() = end;
    // range_end.replace(range_end.length() - 1, 1, 1, end);
    std::cout << range_end << std::endl;
}

int main()
{
    test();
    Client cl("10.1.22.0:2379");
    cl.Put("fusu", "hello");
    cl.Get("fusu");
    return 0;
}
