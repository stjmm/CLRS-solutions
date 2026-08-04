#include <vector>

namespace {

template<typename T>
int partition(std::vector<T> &A, int p, int r)
{
    const T pivot = A[r];
    int i = p - 1;

    for (int j = p; j <= r - 1; j++) {
        if (A[j] <= pivot) {
            i++;
            std::swap(A[i], A[j]);
        }
    }

    std::swap(A[i + 1], A[r]);

    return i + 1;
}

}

namespace clrs {

template<typename T>
void quicksort(std::vector<T> &A, int p, int r)
{
    if (p >= r)
        return;

    const int q = partition(A, p, r);
    quicksort(A, p, q - 1);
    quicksort(A, q + 1, r);
}

template <typename T>
void quicksort(std::vector<T> &A)
{
    if (!A.empty())
        quicksort(A, 0, A.size() - 1);
}

}
