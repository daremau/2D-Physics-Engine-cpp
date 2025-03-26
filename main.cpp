#include <iostream>
#include <thread>
#include "Time.hpp"

int main() {
    Time::init();

    bool running = true;

    while (running)
    {
        Time::update();
        float dt = Time::deltaTime();

        //Update physics world
        std::cout << "Delta Time" << dt << "s\n";

        //Simulate fram cap
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }
    
    return 0;
}