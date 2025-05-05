#include <iostream>
#include <thread>
#include <chrono>
#include "logger.hpp"
#include "mqtt.hpp"

int x = 10;

void delay(int ms) {
    auto start = std::chrono::high_resolution_clock::now();
    while (std::chrono::duration_cast<std::chrono::milliseconds>(
               std::chrono::high_resolution_clock::now() - start).count() < ms) {
        // Do nothing, just wait
    }
}


int main() {
    Logger::getInstance().log("Application started.");

    MqttClient mqttClient("tcp://localhost:1883", "test_client");
    try {
        mqttClient.connect();
        mqttClient.subscribe("test/topic", 1);
        mqttClient.publish("test/topic", "Hello, MQTT!", 1, false);
    } catch (const std::exception& e) {
        Logger::getInstance().log(std::string("Error: ") + e.what());
    }

    return 0;
}
