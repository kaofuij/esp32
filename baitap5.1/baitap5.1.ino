#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("Đang quét mạng Wi-Fi...");

  int n = WiFi.scanNetworks();
  Serial.println("Hoàn tất scan!");
  if (n == 0) {
    Serial.println("Không tìm thấy mạng Wi-Fi nào.");
  } else {
    Serial.printf("Tìm thấy %d mạng:\n", n);
    for (int i = 0; i < n; ++i) {
      Serial.printf("%d: %s (RSSI: %d dBm) %s\n", 
        i + 1, 
        WiFi.SSID(i).c_str(),
        WiFi.RSSI(i),
        (WiFi.encryptionType(i) == WIFI_AUTH_OPEN) ? "Open" : "Encrypted"
      );
    }
  }
}

void loop() {}