#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

using num = int;
using dot = double;
using str = std::string;
using tof = bool;
using byte = std::uint8_t;

using f32 = float;
using f64 = double;

using i32 = std::int32_t;
using i64 = std::int64_t;

template<typename A, typename B>
using table = std::unordered_map<A, B>;
