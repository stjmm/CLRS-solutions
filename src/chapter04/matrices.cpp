#include "clrs/matrices.hpp"
#include "clrs/util.hpp"

int main()
{
    std::vector<std::vector<int>> A {{2, 4}, {5, 6}};
    std::vector<std::vector<int>> B {{2, 4}, {5, 6}};

    clrs::Matrix C = clrs::matrix_multiply(A, B, 2);
    clrs::print_matrix(C, 2);

    return 0;
}
