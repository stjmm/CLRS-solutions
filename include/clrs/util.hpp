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
}
