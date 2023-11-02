#include "imports.h"

//sort a 2D vector according to it first element
sort(vec.begin(), vec.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0];});

//sort a 2D vector according to it second element
sort(events.begin(), events.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });