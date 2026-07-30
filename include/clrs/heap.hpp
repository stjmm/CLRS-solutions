#include <algorithm>
#include <cstddef>
#include <vector>

namespace clrs {

template <typename T>
void max_heapify(std::vector<T>& values, std::size_t heap_size,
                 std::size_t root) {
  const std::size_t left = 2 * root + 1;
  const std::size_t right = 2 * root + 2;

  std::size_t largest = root;

  if (left < heap_size && values[left] > values[largest]) {
    largest = left;
  }

  if (right < heap_size && values[right] > values[largest]) {
    largest = right;
  }

  if (largest != root) {
    std::swap(values[root], values[largest]);
    max_heapify(values, heap_size, largest);
  }
}

template <typename T>
void build_max_heap(std::vector<T>& values) {
  if (values.size() < 2) {
    return;
  }

  for (std::size_t i = values.size() / 2; i > 0; --i) {
    max_heapify(values, values.size(), i - 1);
  }
}

template <typename T>
void heap_sort(std::vector<T>& values) {
  build_max_heap(values);

  for (std::size_t heap_size = values.size(); heap_size > 1; --heap_size) {
    std::swap(values[0], values[heap_size - 1]);
    max_heapify(values, heap_size - 1, 0);
  }
}

}
