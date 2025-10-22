#include <WiFi.h>

const char* ssid = "VJU Student";
const char* password = "studentVJU@2022";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("Kết nối Wi-Fi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nĐã kết nối!");
}

void loop() {
  Serial.println("----- Wi-Fi Status -----");
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
  Serial.print("MAC: ");
  Serial.println(WiFi.macAddress());
  Serial.print("Cường độ tín hiệu RSSI: ");
  Serial.print(WiFi.RSSI());
  Serial.println(" dBm");
  Serial.println("------------------------");
  delay(5000);
}