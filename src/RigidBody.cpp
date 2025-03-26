#include "RigidBody.hpp"

RigidBody::RigidBody(Vector2D pos, float m, bool isStatic)
    : position(pos), mass(m), isStatic(isStatic),
    velocity(0, 0), acceleration(0, 0), forceAccumulator(0, 0) {}

void RigidBody::applyForce(const Vector2D& force) {
    if (!isStatic)
        forceAccumulator = forceAccumulator + force;
}

void RigidBody::integrate(float dt) {
    if (isStatic) return;

    acceleration = forceAccumulator * (1.0f / mass);
    velocity = velocity + acceleration * dt;
    position = position + velocity * dt;

    forceAccumulator = Vector2D(); //clear forces
}