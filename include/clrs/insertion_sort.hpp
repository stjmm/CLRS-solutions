#pragma once

#include <vector>

namespace clrs {
    template<typename T>
    void insertion_sort(std::vector<T> &A) {
        for (int i = 1; i < A.size(); i++) {
            T key = A[i];
            
            int j = i - 1;
            while (j >= 0 && A[j] > key) {
                A[j + 1] = A[j];
                j--;
            }
            A[j + 1] = key;
        }
    }

    template<typename T>
    void insertion_sort_decreasing(std::vector<T> &A) {
        for (int i = 1; i < A.size(); i++) {
            T key = A[i];

            int j = i - 1;
            while (j >= 0 && A[j] < key) {
                A[j + 1] = A[j];
                j--;
            }

            A[j + 1] = key;
        }
    }

    template<typename T>
    void insertion_sort_recursive(std::vector<T> &A, int n) {
        if (n == 0)
            return;
        insertion_sort_recursive(A, n - 1);

        int j = n - 1;
        T key = A[n];
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = key;
    }
}
