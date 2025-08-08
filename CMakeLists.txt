cmake_minimum_required(VERSION 3.29)
project(FootballGame)

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
        src/scenes/Scene.cpp
        src/scenes/Scene.h
        src/render/RenderEngine.cpp
        src/render/RenderEngine.h
        src/input/InputManager.cpp
        src/input/InputManager.h
        src/Game.cpp
        src/Game.h
        src/scenes/test/TestScene.cpp
        src/scenes/test/TestScene.h
        src/render/layer/IRenderLayer.h
        src/render/renderers/IRenderer.h
        src/render/RenderDispatcher.cpp
        src/render/RenderDispatcher.h
        src/render/Renderers/Renderer.h
        src/render/renderers/implemented/EntityRenderer.cpp
        src/render/renderers/implemented/EntityRenderer.h
        src/render/layer/RenderLayer.h
        src/render/layer/implemented/EntityRenderLayer.cpp
        src/render/layer/implemented/EntityRenderLayer.h
        src/render/layer/LayerPriorities.cpp
        src/render/layer/LayerPriorities.h
        src/utils/Logger.cpp
        src/utils/Logger.h
        src/scenes/menus/StartMenu.cpp
        src/scenes/menus/StartMenu.h
        src/render/layer/implemented/ButtonRenderLayer.cpp
        src/render/layer/implemented/ButtonRenderLayer.h
        src/ui/Button.cpp
        src/ui/Button.h
        src/ui/IUIElement.h
        src/utils/Rectangle.cpp
        src/utils/Rectangle.h
        src/entity/Player.cpp
        src/entity/Player.h
        src/scenes/football/FootballFieldScene.cpp
        src/scenes/football/FootballFieldScene.h
        src/scenes/football/positions/QB.cpp
        src/scenes/football/positions/QB.h
        src/utils/math/Vector2D.cpp
        src/utils/math/Vector2D.h
        src/utils/Directions.cpp
        src/scenes/football/objects/Football.cpp
        src/scenes/football/objects/Football.h)

target_compile_features(main PRIVATE cxx_std_17)
target_link_libraries(main PRIVATE SFML::Graphics)
