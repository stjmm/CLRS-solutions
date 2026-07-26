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

    void matrix_multiply_recursive(const Matrix &A, const Matrix &B,
            Matrix &C, int aRow, int aCol, int bRow, int bCol,
            int cRow, int cCol, int n)
    {
        if (n == 1) {
            C[cRow][cCol] += A[aRow][aCol] * B[bRow][bCol];
            return;
        }

        const int half = n / 2;

        // C11 = A11*B11 + A12*B21
        matrix_multiply_recursive(A, B, C, aRow, aCol, bRow, bCol, cRow, cCol, half);
        matrix_multiply_recursive(A, B, C, aRow, aCol + half, bRow + half, bCol, cRow, cCol, half);

        // C12 = A11*B12 + A12*B22
        matrix_multiply_recursive(A, B, C, aRow, aCol, bRow, bCol + half, cRow, cCol + half, half);
        matrix_multiply_recursive(A, B, C, aRow, aCol + half, bRow + half, bCol + half, cRow, cCol + half, half);

        // C21 = A21*B11 + A22*B21
        matrix_multiply_recursive(A, B, C, aRow + half, aCol, bRow, bCol, cRow + half, cCol, half);
        matrix_multiply_recursive(A, B, C, aRow + half, aCol + half, bRow + half, bCol, cRow + half, cCol, half);

        // C22 = A21*B12 + A22*B22
        matrix_multiply_recursive(A, B, C, aRow + half, aCol, bRow, bCol + half, cRow + half, cCol + half, half);
        matrix_multiply_recursive(A, B, C, aRow + half, aCol + half, bRow + half, bCol + half, cRow + half, cCol + half, half);
    }
}
