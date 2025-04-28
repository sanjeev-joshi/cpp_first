#include <iostream>
#include <thread>
#include <chrono>
#include "logger.hpp"


void delay(int ms) {
    auto start = std::chrono::high_resolution_clock::now();
    while (std::chrono::duration_cast<std::chrono::milliseconds>(
               std::chrono::high_resolution_clock::now() - start).count() < ms) {
        // Do nothing, just wait
    }
}


int main() {
    Logger::getInstance().log("Application started.");

    return 0;
}
