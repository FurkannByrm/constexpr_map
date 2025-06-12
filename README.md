# constexpr_map

A tiny, header-only C++17/C++20 library that provides a `constexpr` key-value map replacement for compile-time lookup use cases.

- Compile-time key-value lookup using `std::array`
- `constexpr` API: `at()`, `get_or_default()`, `contains()`
- Header-only, no dependencies
- Perfect for embedded systems, config tables, enum-string mapping, etc.

## Installation

Just copy [`constexpr_map.hpp`](include/constexpr_map.hpp) into your project and include it:

```cpp
#include "constexpr_map.hpp"
