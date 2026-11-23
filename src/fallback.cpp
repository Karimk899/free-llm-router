// fallback.cpp — part of free-llm-router.

#include "freellmrouter/fallback.h"

#include <cstdio>

namespace freellmrouter {

Fallback::Fallback(const std::string& config_path)
    : config_path_(config_path) {}

void Fallback::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Fallback::run() {
    if (verbose_) std::fprintf(stderr, "[free-llm-router] fallback: run\n");
    // core logic lives here
    return true;
}

}  // namespace freellmrouter
