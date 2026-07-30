#include <algorithm>
#include <vector>

namespace clrs {

template <typename T>
void max_heapify(std::vector<T>& A, int heap_size, int root) {
  const int left = 2 * root + 1;
  const int right = 2 * root + 2;

  int largest = root;

  if (left <= heap_size && A[left] > A[largest]) {
    largest = left;
  }

  if (right <= heap_size && A[right] > A[largest]) {
    largest = right;
  }

  if (largest != root) {
    std::swap(A[root], A[largest]);
    max_heapify(A, heap_size, largest);
  }
}

template <typename T>
void build_max_heap(std::vector<T>& A) {
  const int size = static_cast<int>(A.size());

  for (int i = size / 2 - 1; i >= 0; --i) {
    max_heapify(A, size - 1, i);
  }
}

template <typename T>
void heap_sort(std::vector<T>& A) {
  if (A.size() < 2) {
    return;
  }

  build_max_heap(A);

  for (int i = static_cast<int>(A.size()) - 1; i >= 1; --i) {
    std::swap(A[0], A[i]);
    max_heapify(A, i - 1, 0);
  }
}

}
