//
// Created by jkirc on 6/1/2025.
//

#ifndef ENTITYRENDERLAYER_H
#define ENTITYRENDERLAYER_H
#include "../RenderLayer.h"
#include "../../../entity/Entity.h"


class EntityRenderLayer : public RenderLayer<Entity> {
public:
    EntityRenderLayer();
    void addEntityToRender(Entity entity);
};



#endif //ENTITYRENDERLAYER_H
