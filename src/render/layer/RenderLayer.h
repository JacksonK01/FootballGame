//
// Created by jkirc on 6/1/2025.
//

#ifndef RENDERLAYER_H
#define RENDERLAYER_H
#include <string>
#include <unordered_map>
#include <vector>

//Mother class for all renderlayers
template<typename T>
class RenderLayer {
public:
    virtual ~RenderLayer() = default;
    virtual std::vector<T&>& getRenderables() = 0;

    RenderLayer(int priority, std::string layerName);
    int getPriority() const;
    std::string getLayerName() const;
private:
    //Priority is when the layer gets rendered. Lower values get rendered first.
    std::string layerName;
    int priority;
    std::vector<T*> renderables;
};



#endif //RENDERLAYER_H
