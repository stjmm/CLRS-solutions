#include <vector>

#include "clrs/insertion_sort.hpp"
#include "clrs/selection_sort.hpp"
#include "clrs/merge_sort.hpp"
#include "clrs/util.hpp"

int main()
{

    std::vector arr = {5,2,4,6,1,3};
    clrs::insertion_sort(arr);
    clrs::print_vector(arr, "insertion sort");

    arr = {5,2,4,6,1,3};
    clrs::selection_sort(arr);
    clrs::print_vector(arr, "selection sort");

    arr = {5,2,4,6,1,3};
    clrs::merge_sort(arr, 0, arr.size() - 1);
    clrs::print_vector(arr, "merge sort");


    arr = {5,2,4,6,1,3};
    clrs::insertion_sort_recursive(arr, arr.size() - 1);
    clrs::print_vector(arr, "recursive insertion sort");

    return 0;
}
