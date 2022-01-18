#include "client.hpp"

#include <iostream>
#include <map>
#include <string>

auto main() -> int
{
    Uranus::Client cl("127.0.0.1:2379");
    cl.put("fusu", "hello");
    std::map<std::string, std::string> ret;
    std::cout << cl.Get(ret, "fusu") << std::endl;
    for (const auto &it : ret) {
        std::cout << it.first << ":" << it.second << std::endl;
    }

    return 0;
}
