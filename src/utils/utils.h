#pragma once

#include <print>
#include <format>
#include <utility>

// --- Print ---

// Text
void print(const char* message);

// Single value
template<typename T>
void print(T value)
{
    std::println("{}", value);
}

// Format (number)
template<typename... Args>
void print(std::format_string<Args...> format, Args&&... args)
{
    std::println(format, std::forward<Args>(args)...);
};