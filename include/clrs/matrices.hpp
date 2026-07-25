#include <iostream>
#include <vector>

namespace clrs {
    using Matrix = std::vector<std::vector<int>>;

    Matrix matrix_multiply(Matrix &A, Matrix &B, int n)
    {
        Matrix C (n, std::vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        return C;
    }
}
