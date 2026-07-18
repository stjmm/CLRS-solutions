// Counts inversions in a vector
#include <iostream>
#include <vector>

namespace clrs {
    template<typename T>
    int count_merge(std::vector<T> &A, int p, int q, int r)
    {
        int inversions = 0;
        int n_l = q - p + 1;
        int n_r = r - q;

        std::vector<T> L(n_l), R(n_r);
        
        for (int i = 0; i < n_l; i++)
            L[i] = A[p + i];
        for (int i = 0; i < n_r; i++)
            R[i] = A[q + i + 1];

        int i = 0;
        int j = 0;
        int k = p;

        while (i < n_l && j < n_r) {
            if (L[i] < R[j]) {
                A[k] = L[i];
                i++;
            } else {
                A[k] = R[j];
                j++;
                inversions += n_l - i;
            }
            k++;
        }

        return inversions;
    }

    template<typename T>
    int count_inversions_merge_sort(std::vector<T> &A, int p, int r)
    {
        if (p >= r)
            return 0;

        int q = p + (r - p) / 2;
        int left = count_inversions_merge_sort(A, p, q);
        int right = count_inversions_merge_sort(A, q + 1, r);
        int inv = count_merge(A, p, q, r) + left + right;
        return inv;
    }
}
