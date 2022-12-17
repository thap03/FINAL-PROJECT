//FINAL PROJECT
#include <WiFI.h>
#include <MQTT.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LED_RED1 0
#define LED_RED2 15
#define LED_RED3 5

#define LED_BLUE1 2
#define LED_BLUE2 18
#define LED_BLUE3 19

#define LED_GREEN1 12
#define LED_GREEN2 14
#define LED_GREEN3 32

const char *ssid = "gen2"; // Enter your WiFi name
const char *password = "substitute";  // Enter WiFi password
const char *mqtt_broker = "broker.emqx.io";
const char *topic = "esp32/TicTacToe2";
const char *mqtt_username = "emqx";
const char *mqtt_password = "public";
const int mqtt_port = 1883;

WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  pinMode(LED_RED1, OUTPUT);
  pinMode(LED_RED2, OUTPUT);
  pinMode(LED_RED3, OUTPUT);

  pinMode(LED_BLUE1, OUTPUT);
  pinMode(LED_BLUE2, OUTPUT);
  pinMode(LED_BLUE3, OUTPUT);

  pinMode(LED_GREEN1, OUTPUT);
  pinMode(LED_GREEN2, OUTPUT);
  pinMode(LED_GREEN3, OUTPUT);

}

    client.setServer(mqtt_broker, mqtt_port);
    client.setCallback(callback);
    while (!client.connected()){
        String client_id = "esp32-client-";
        client_id += String(WiFi.macAddress());
        Serial.printf("The client %s connects to the public mqtt broker\n", client_id.c_str());
        if (client.connect(client_id.c_str(), NULL, NULL)){
            Serial.println("Public emqx mqtt broker connected");
        }
        else{
            Serial.print("Failed");
            Serial.print(client.state());
        }
    }
    client.publish(topic, "Testing");
    client.subscribe(topic);

 
 Serial.begin(115200);
 WiFi.begin(ssid, password);
 while (WiFi.status() != WL_CONNECTED) {
     delay(500);
     Serial.println("Connecting to WiFi..");
   
client.setServer(mqtt_broker, mqtt_port);
client.setCallback(callback);
while (!client.connected()) {
    String client_id = "esp32-client-";
    client_id += String(WiFi.macAddress());
    Serial.printf("The client %s connects to the public mqtt broker\n", client_id.c_str());
    if (client.connect(client_id.c_str(), mqtt_username, mqtt_password)) {
         Serial.println("Public emqx mqtt broker connected");
     } else {
         Serial.print("failed with state ");
         Serial.print(client.state());
         delay(2000);

void loop() {
  digitalWrite(LED_RED1, HIGH); 
  digitalWrite(LED_RED2, HIGH);
  digitalWrite(LED_RED3, HIGH);
  
  digitalWrite(LED_BLUE1, HIGH); 
  digitalWrite(LED_BLUE2, HIGH);
  digitalWrite(LED_BLUE3, HIGH);

  digitalWrite(LED_GREEN1, HIGH); 
  digitalWrite(LED_GREEN2, HIGH);
  digitalWrite(LED_GREEN3, HIGH);

  delay(1000);  

  digitalWrite(LED_RED1, LOW);   
  digitalWrite(LED_RED2, LOW);
  digitalWrite(LED_RED3, LOW);

  digitalWrite(LED_BLUE1, LOW);   
  digitalWrite(LED_BLUE2, LOW);
  digitalWrite(LED_BLUE3, LOW);

  digitalWrite(LED_GREEN1, LOW); 
  digitalWrite(LED_GREEN2, LOW);
  digitalWrite(LED_GREEN3, LOW);

  delay(1000);                       
}
