#include "Time.hpp"

std::chrono::steady_clock::time_point Time::lastTime;
float Time::dt = 0.0f;

void Time::init() {
    lastTime = std::chrono::steady_clock::now();
}

void Time::update() {
    auto now = std::chrono::steady_clock::now();
    dt = std::chrono::duration<float>(now - lastTime).count();
    lastTime = now;
}

float Time::deltaTime() {
    return dt;
}
