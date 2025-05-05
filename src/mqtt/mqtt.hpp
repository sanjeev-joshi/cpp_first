#ifndef MQTT_HPP
#define MQTT_HPP

#include <mqtt/async_client.h>


class MqttClient {
public:
    MqttClient(const std::string& serverURI, const std::string& clientId);

    void connect();
    void disconnect();
    void publish(const std::string& topic, const std::string& payload, int qos = 1, bool retained = false);
    void subscribe(const std::string& topic, int qos = 1);

private:
    mqtt::async_client client;
};
