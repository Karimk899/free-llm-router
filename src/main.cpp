// main.cpp — entry point. Wires config and subsystems together.

#include "freellmrouter/settings.h"
#include "freellmrouter/router.h"
#include "freellmrouter/providers.h"
#include "freellmrouter/fallback.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    freellmrouter::Settings settings = freellmrouter::Settings::load_default();
    freellmrouter::Router router(settings.store_path);
    freellmrouter::Providers providers(settings.store_path);
    freellmrouter::Fallback fallback(settings.store_path);
    std::fprintf(stderr, "[free-llm-router] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
