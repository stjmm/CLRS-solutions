#pragma once

#include <vector>

namespace clrs {
    template <typename T>
    void bubble_sort(std::vector<T> &A) {
        for (int i = 0; i < A.size() - 1; i++) {
            for (int j = A.size() - 1; j >= i + 1; j--)
                if (A[j] < A[j - 1]) {
                    T temp = A[j - 1];
                    A[j - 1] = A[j];
                    A[j] = temp;
                }
                    
        }
    }
}
