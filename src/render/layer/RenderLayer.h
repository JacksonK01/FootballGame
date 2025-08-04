//
// Created by jkirc on 6/1/2025.
//

#ifndef RENDERLAYER_H
#define RENDERLAYER_H
#include <vector>
#include <iostream>

#include "IRenderLayer.h"
#include "../../utils/Logger.h"

//Mother class for all render layers
//Possibly change this to only store void* instead of T vectors.
template<typename T>
class RenderLayer : public IRenderLayer{
public:
    RenderLayer(int priority, std::string layerName) {
        this->priority = priority;
        this->layerName = std::move(layerName);

        Logger::initialize("(" + this->layerName + " Layer) Created");
    };

    [[nodiscard]] int getPriority() const override {
        return this->priority;
    };

    [[nodiscard]] std::string getLayerName() const override {
        return this->layerName;
    };

    [[nodiscard]] const std::type_info& getType() const override {
        return typeid(T);
    };

    [[nodiscard]] std::vector<const void*>& getRenderItems() override {
        cachedItems.clear();

        for (const T* item : renderItems) {
            cachedItems.push_back(static_cast<const void*>(item));
        }

        return cachedItems;
    };

    std::vector<const T*>& getRenderItemsTyped() {
        return &this->renderItems;
    };

protected:
    //Priority is when the layer gets rendered. Lower values get rendered first.
    std::string layerName;
    int priority;
    std::vector<const T*> renderItems;
    std::vector<const void*> cachedItems;
};



#endif //RENDERLAYER_H
