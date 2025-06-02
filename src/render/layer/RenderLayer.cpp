//
// Created by jkirc on 6/1/2025.
//

#include "RenderLayer.h"

template<typename T>
RenderLayer<T>::RenderLayer(int priority, std::string layerName) {
    this->priority = priority;
    this->layerName = layerName;
}

template<typename T>
int RenderLayer<T>::getPriority() const {
    return this->priority;
}

template<typename T>
std::string RenderLayer<T>::getLayerName() const {
    return this->layerName;
}


