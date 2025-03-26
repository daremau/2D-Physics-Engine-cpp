#include <iostream>
#include <thread>
#include "Time.hpp"
#include "PhysicsWorld.hpp"

int main() {
    Time::init();
    PhysicsWorld world;
    
    RigidBody ball(Vector2D(0, 0), 1.0f);
    world.addBody(&ball);

    while (true)
    {
        Time::update();
        float dt = Time::deltaTime();

        //apply gravity
        ball.applyForce(Vector2D(0, 9.8f * ball.mass));

        //update world physics
        world.update(dt);
        
        std::cout << "Ball Y:" << ball.position.y << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }
    
    return 0;
}