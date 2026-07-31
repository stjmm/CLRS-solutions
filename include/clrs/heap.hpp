#include <vector>
#include <algorithm>
#include <stdexcept>

namespace clrs {
template<typename T>
void max_heapify(std::vector<T> &A, int i, int heap_size)
{
    const int l = 2 * i + 1;
    const int r = 2 * i + 2;
    int largest = i;

    if (l <= heap_size && A[l] > A[i])
        largest = l;

    if (r <= heap_size && A[r] > A[largest])
        largest = r;

    if (largest != i) {
        std::swap(A[i], A[largest]);
        max_heapify(A, largest, heap_size);
    }
}

template<typename T>
void build_max_heap(std::vector<T> &A)
{
    const int heap_size = static_cast<int>(A.size()) - 1;

    for (int i = heap_size / 2; i >= 0; i--)
        max_heapify(A, i, heap_size);
}

template<typename T>
T max_heap_maximum(std::vector<T> &A)
{
    if (A.empty())
        throw std::underflow_error("Priority queue is empty.");

    return A[0];
}

template<typename T>
void heap_sort(std::vector<T> &A)
{
    if (A.size() < 2)
        return;

    build_max_heap(A);

    for (int i = A.size() - 1; i > 0; i--) {
        std::swap(A[0], A[i]);
        max_heapify(A, 0, i - 1);
    }
}
}
