//
// Created by jkirc on 5/31/2025.
//

#ifndef RENDERDISPATCHER_H
#define RENDERDISPATCHER_H

#include <functional>
#include <typeindex>
#include <unordered_map>

#include "Renderers/Renderer.h"


class RenderDispatcher {
public:
    RenderDispatcher();
    void registerRenderer(std::type_index type, std::function<Renderer*()>& constructor);
    Renderer* getRenderer(Entity* entity);
private:
    std::unordered_map<std::type_index, std::function<Renderer*()>> rendererRegistry;
};



#endif //RENDERDISPATCHER_H
