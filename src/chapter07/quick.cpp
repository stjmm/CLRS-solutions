#include <vector>
#include "clrs/quick_sort.hpp"
#include "clrs/util.hpp"

int main()
{
    std::vector<int> A = {5, 123, 1, 231, 32, 2, 3, 1, 555, 123312312, 1};

    clrs::quicksort(A);
    clrs::print_vector(A, "Quicksort");
}
