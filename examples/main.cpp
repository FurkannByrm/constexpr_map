#include <iostream>
#include "constexpr_map.hpp"

constexpr auto my_map = cxmap::ConstexprMap<std::string_view, int, 3>({
    {
        {"STOP", 1},
        {"READY", 2},
        {"START", 3}
    }
});


int main() {
    std::cout << my_map.at("STOP") << "\n";        
    std::cout << my_map.contains("WAIT") << "\n";     
    std::cout << my_map.get_or_default("WAIT", -1);   

}