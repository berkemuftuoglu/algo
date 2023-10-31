#include "imports.h"


    std::unordered_map<int, std::string> mymap;

    // 1. Element Access
    mymap[5] = "five";
    std::string value = mymap.at(5);

    // 2. Modifiers
    mymap.insert({7, "seven"});
    mymap.erase(7);
    mymap.emplace(8, "eight");
    mymap.clear();  // Clears the map

    // 3. Iterators
    for (auto it = mymap.begin(); it != mymap.end(); ++it) {}

    // 4. Capacity
    bool isEmpty = mymap.empty();
    size_t size = mymap.size();

    // 8. Lookup
    auto it = mymap.find(5);
    int count = mymap.count(5);

    return 0;

