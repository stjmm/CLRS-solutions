#pragma once

#include <utility>
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
