#pragma once

#include <iostream>
#include <vector>
#include <chrono>

namespace clrs {
    template<typename T>
    void print_vector(const std::vector<T> &A, const std::string &name = "") {
        if (!name.empty()) {
            std::cout << name << ": ";
        }
        std::cout << "[";
        for (size_t i = 0; i < A.size(); i++) {
            std::cout << A[i] << (i < A.size() - 1 ? ", " : "");
        }
        std::cout << "]\n";
    }

    template<typename T>
    void print_matrix(const std::vector<std::vector<T>> &A, int n)
    {
        std::cout << "[\n";

        for (int i = 0; i < n; i++) {
            std::cout << '[';
            for (int j = 0; j < n; j++) {
                std::cout << A[i][j];

                if (j + 1 < n)
                    std::cout << ", ";
            }

            std::cout << ']';

            if (i + 1 < n)
                std::cout << ',';

            std::cout << '\n';
        }

        std::cout << "]\n";
    }
}
