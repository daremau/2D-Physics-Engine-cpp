#pragma once
#include "Vector2D.hpp"

class RigidBody {
    public: 
        Vector2D position;
        Vector2D velocity;
        Vector2D acceleration;
        float mass;
        bool isStatic;

        RigidBody(Vector2D pos, float m, bool isStatic = false);

        void applyForce(const Vector2D& force);
        void integrate(float dt);

    private:
        Vector2D forceAccumulator;
};