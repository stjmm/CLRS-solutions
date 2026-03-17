#include <iostream>
#include <vector>

#include "clrs/sorting.hpp"

int main()
{
    std::vector arr = {5,2,4,6,1,3};

    clrs::insertion_sort_decreasing(arr);

    for (auto x : arr) {
        std::cout << x << ' ' << '\n';
    }

    return 0;
}
