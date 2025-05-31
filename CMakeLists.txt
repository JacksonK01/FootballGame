cmake_minimum_required(VERSION 3.30)
project(FlagFootballSim)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.1
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(main src/main.cpp
        src/entity/Entity.cpp
        src/entity/Entity.h
        src/core/GameEngine.cpp
        src/core/GameEngine.h
        src/game/Scene.cpp
        src/game/Scene.h
        src/render/RenderEngine.cpp
        src/render/RenderEngine.h
        src/input/InputManager.cpp
        src/input/InputManager.h
        src/Game.cpp
        src/Game.h)
target_compile_features(main PRIVATE cxx_std_17)
target_link_libraries(main PRIVATE SFML::Graphics)
