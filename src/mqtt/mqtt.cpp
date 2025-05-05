#include "mqtt.hpp"
#include <iostream>
#include <stdexcept>

MqttClient::MqttClient(const std::string& serverURI, const std::string& clientId)
    : client(serverURI, clientId) {}

void MqttClient::connect() {
    try {
        mqtt::token_ptr conntok = client.connect();
        conntok->wait();
        std::cout << "Connected to the MQTT broker." << std::endl;
    } catch (const mqtt::exception& e) {
        std::cerr << "Error connecting to the MQTT broker: " << e.what() << std::endl;
        throw;
    }
}

void MqttClient::disconnect() {
    try {
        mqtt::token_ptr disconntok = client.disconnect();
        disconntok->wait();
        std::cout << "Disconnected from the MQTT broker." << std::endl;
    } catch (const mqtt::exception& e) {
        std::cerr << "Error disconnecting from the MQTT broker: " << e.what() << std::endl;
        throw;
    }
}

void MqttClient::publish(const std::string& topic, const std::string& payload, int qos, bool retained) {
    try {
        mqtt::message_ptr pubmsg = mqtt::make_message(topic, payload);
        pubmsg->set_qos(qos);
        pubmsg->set_retained(retained);
        client.publish(pubmsg)->wait();
        std::cout << "Message published to topic: " << topic << std::endl;
    } catch (const mqtt::exception& e) {
        std::cerr << "Error publishing message: " << e.what() << std::endl;
        throw;
    }
}

void MqttClient::subscribe(const std::string& topic, int qos) {
    try {
        client.subscribe(topic, qos)->wait();
        std::cout << "Subscribed to topic: " << topic << std::endl;
    } catch (const mqtt::exception& e) {
        std::cerr << "Error subscribing to topic: " << e.what() << std::endl;
        throw;
    }
}