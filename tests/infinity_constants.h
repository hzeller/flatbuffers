#ifndef TESTS_INFINITY_CONSTANTS_H
#define TESTS_INFINITY_CONSTANTS_H

#include <limits>

namespace flatbuffers {
namespace tests {
  // Shortcuts for the infinity.
  inline constexpr auto infinity_f = std::numeric_limits<float>::infinity();
  inline constexpr auto infinity_d = std::numeric_limits<double>::infinity();
}  // namespace tests
}  // namespace flatbuffers

#endif  // TESTS_INFINITY_CONSTANTS_H
