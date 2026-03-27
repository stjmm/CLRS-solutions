#pragma once

#include <vector>

namespace clrs {
    template<typename T>
    void selection_sort(std::vector<T> &A) {
        for (int i = 0; i < A.size() - 1; i++) {
            int min = i;
            for (int j = i + 1; j < A.size(); j++) {
                if (A[min] > A[j]) min = j;
            }
            // T temp = A[i];
            // A[i] = A[min];
            // A[min] = temp;
            std::swap(A[i], A[min]);
        }
    }
}
