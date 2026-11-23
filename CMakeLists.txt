cmake_minimum_required(VERSION 3.16)
project(free-llm-router CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(freellmrouter
    src/main.cpp
    src/router.cpp
    src/providers.cpp
    src/fallback.cpp
)

target_include_directories(freellmrouter PRIVATE include)

if(WIN32)
    target_link_libraries(freellmrouter PRIVATE userenv)
endif()
