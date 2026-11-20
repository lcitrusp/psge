#pragma once

#include <format>
#include <print>
#include <functional>

#include "structs.h"

#define Ver 27
#define Engine "PSGE"

#define ENGINE_LOG(code) \
    std::println("[LOG] {}", code)

#define ENGINE_WARNING(code) \
    std::println("[WARNING] {}", code)

#define ENGINE_ERR(code) \
    std::println("[ERROR] {}", code)

#define EXECUTE(callback) \
    callback();

#define function auto

#define END return 0;
