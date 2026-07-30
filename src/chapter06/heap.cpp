#include "clrs/heap.hpp"
#include "clrs/util.hpp"

int main()
{
    std::vector<int> A = {5, 4, 3, 2, 1, 12312312};
    clrs::heap_sort(A);
    clrs::print_vector(A, "Heap Sort");
}
