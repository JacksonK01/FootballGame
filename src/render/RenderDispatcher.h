//
// Created by jkirc on 5/31/2025.
//

#ifndef RENDERDISPATCHER_H
#define RENDERDISPATCHER_H

#include <functional>
#include <typeindex>
#include <unordered_map>

#include "renderers/Renderer.h"


class RenderDispatcher {
public:
    RenderDispatcher();
    void registerRenderer(const std::type_index& type, IRenderer* constructor);
    IRenderer* getRenderer(const std::type_info& type);
private:
    std::unordered_map<std::type_index, IRenderer*> rendererRegistry;

};



#endif //RENDERDISPATCHER_H
