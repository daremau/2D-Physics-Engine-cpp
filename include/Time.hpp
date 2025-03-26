#pragma once
#include <chrono>

class Time {
    public:
        static void init();
        static void update();
        static float deltaTime();
    
    private:
        static std::chrono::steady_clock::time_point lastTime;
        static float dt;
};
