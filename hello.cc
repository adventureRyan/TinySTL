#include <iostream>

namespace Mystl
{
  template<typename InputIter, typename UnaryPredicate>
  bool all_of(InputIter first, InputIter last, UnaryPredicate pred) {
    for (; first != last; ++first) {
      if (!pred(*first)) {
        return false;
      }
    }
    return true;
  }

  template<typename InputIter, typename T>
  auto count(InputIter first, InputIter last, const T &value) -> size_t
  {
    auto count = 0ZU;//auto会强制将类型写到后面
    for (; first != last; ++first) {
      if (*first == value)
        count++;
    }
    return count;
  }

  //const能传递右值
  //引用是避免开销
  template<typename InputIter, typename T>
  InputIter find(InputIter first, InputIter last, const T &value)
  {
    while (first != last && *first == value)
      first++;
    return first;
  }
}
