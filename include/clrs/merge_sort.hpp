#pragma once

#include <vector>

namespace clrs {
    template<typename T>
    void merge(std::vector<T> &A, int p, int q, int r) {
        int nl = q - p + 1;
        int nr = r - q;

        std::vector<T> L(nl), R(nr);
        for (int i = 0; i < nl; i++) // Copy A[p:q] into L[0:nl]
            L[i] = A[p + i];
        for (int i = 0; i < nr; i++) // Copy A[q+1:r] to R[0:nr]
            R[i] = A[q + 1 + i];

        int i = 0; // indexes smallest remaining element in L
        int j = 0; // indexes smallest remaining element in R
        int k = p; // k indexes location in A to fill
        
        while (i < nl && j < nr) {
            if (L[i] <= R[j]) {
                A[k] = L[i];
                i++;
            } else {
                A[k] = R[j];
                j++;
            }
            k++;
        }

        // one always finished
        while (i < nl) {
            A[k] = L[i];
            i++;
            k++;
        }
        while (j < nr) {
            A[k] = R[j];
            j++;
            k++;
        }
    }

    template<typename T>
    void merge_sort(std::vector<T> &A, int p, int r) {
        if (p >= r)
            return;
        int q = p + (r - p) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}
