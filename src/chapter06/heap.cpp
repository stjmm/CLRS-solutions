#include "clrs/heap.hpp"
#include "clrs/util.hpp"

int main()
{
    std::vector<int> A = {5, 4, 3, 2, 1, 12312312};
    clrs::heap_sort(A);
    clrs::print_vector(A, "Heap Sort");

    A = {};
    clrs::max_heap_insert(A, 1);
    clrs::max_heap_insert(A, 2);
    clrs::max_heap_insert(A, 3);
    clrs::max_heap_insert(A, 4);
    clrs::print_vector(A, "Priority queue");
    clrs::max_heap_extract_max(A);
    clrs::print_vector(A, "Priority queue");
}
