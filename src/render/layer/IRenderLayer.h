//
// Created by jkirc on 6/2/2025.
//

#ifndef IRENDERLAYER_H
#define IRENDERLAYER_H
#include <string>
#include <typeinfo>
#include <vector>


class IRenderLayer {
public:
    virtual ~IRenderLayer() = default;

    [[nodiscard]] virtual int getPriority() const = 0;
    [[nodiscard]] virtual std::string getLayerName() const = 0;
    [[nodiscard]] virtual const std::type_info& getType() const = 0;
    //Does not return reference, return by value.
    [[nodiscard]] virtual std::vector<const void*>& getRenderItems() = 0;
};



#endif //IRENDERLAYER_H
