#include <iostream>
#include <vector>

#include "clrs/sorting.hpp"
#include "clrs/util.hpp"

int main()
{

    std::vector arr = {5,2,4,6,1,3};
    clrs::insertion_sort(arr);
    clrs::print_vector(arr, "insertion sort");

    arr = {5,2,4,6,1,3};
    clrs::selection_sort(arr);
    clrs::print_vector(arr, "selection sort");

    return 0;
}
