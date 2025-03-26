#pragma once

#include <vector>
#include "RigidBody.hpp"

class PhysicsWorld {
    public:
        void addBody(RigidBody* body);
        void update(float dt); //integrate all bodies

    private:
        std::vector<RigidBody*> bodies;
};