// router.cpp — part of free-llm-router.

#include "freellmrouter/router.h"

#include <cstdio>

namespace freellmrouter {

Router::Router(const std::string& config_path)
    : config_path_(config_path) {}

void Router::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Router::run() {
    if (verbose_) std::fprintf(stderr, "[free-llm-router] router: run\n");
    // core logic lives here
    return true;
}

}  // namespace freellmrouter
