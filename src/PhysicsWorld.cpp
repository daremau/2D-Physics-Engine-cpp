#include "PhysicsWorld.hpp"

void PhysicsWorld::addBody(RigidBody* body) {
    bodies.push_back(body);
}

void PhysicsWorld::update(float dt) {
    for (auto* body : bodies) {
        body->integrate(dt);
    }
}