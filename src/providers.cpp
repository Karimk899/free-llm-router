// providers.cpp — part of free-llm-router.

#include "freellmrouter/providers.h"

#include <cstdio>

namespace freellmrouter {

Providers::Providers(const std::string& config_path)
    : config_path_(config_path) {}

void Providers::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Providers::run() {
    if (verbose_) std::fprintf(stderr, "[free-llm-router] providers: run\n");
    // core logic lives here
    return true;
}

}  // namespace freellmrouter
