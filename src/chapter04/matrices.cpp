#include "clrs/matrices.hpp"
#include "clrs/util.hpp"

int main()
{
    clrs::Matrix A {{2, 4}, {5, 6}};
    clrs::Matrix B {{2, 4}, {5, 6}};

    clrs::Matrix C = clrs::matrix_multiply(A, B, 2);
    // clrs::print_matrix(C, 2);

    clrs::Matrix D (2, std::vector<int>(2, 0));
    clrs::matrix_multiply_recursive(A, B, D, 0, 0, 0, 0, 0, 0, 2);
    clrs::print_matrix(D, 2);

    return 0;
}
