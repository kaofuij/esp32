#include <WiFi.h>

const char* ssid = "VJU Student";
const char* password = "studentVJU@2022";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.print("Đang kết nối Wi-Fi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nKết nối thành công!");
}

void loop() {
  // Nếu mất kết nối, tự reconnect
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("Mất kết nối! Đang thử kết nối lại...");
    WiFi.disconnect();
    WiFi.reconnect();
    delay(5000);
  } else {
    Serial.println("Đã kết nối: " + WiFi.localIP().toString());
    delay(3000);
  }
}