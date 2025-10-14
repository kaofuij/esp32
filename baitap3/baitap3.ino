#include <WiFi.h>

// --- Thông tin mạng Wi-Fi mà ESP32 sẽ KẾT NỐI (chế độ STA) ---
const char* ssid_STA = "wifi cong cong";
const char* password_STA = "12345679";

// --- Thông tin Wi-Fi mà ESP32 sẽ PHÁT RA (chế độ AP) ---
const char* ssid_AP = "ESP32-DualMode";
const char* password_AP = "12345678";

void setup() {
  Serial.begin(115200);
  delay(1000);

  // Bật chế độ kép: vừa STA vừa AP
  WiFi.mode(WIFI_AP_STA);

  // Bắt đầu phát Wi-Fi AP
  WiFi.softAP(ssid_AP, password_AP);
  Serial.println("Access Point started.");
  Serial.print("AP SSID: ");
  Serial.println(ssid_AP);
  Serial.print("AP Password: ");
  Serial.println(password_AP);
  Serial.print("AP IP address: ");
  Serial.println(WiFi.softAPIP()); // IP của mạng do ESP32 phát ra

  // Kết nối tới Wi-Fi STA
  Serial.print("Connecting to Wi-Fi network: ");
  Serial.println(ssid_STA);
  WiFi.begin(ssid_STA, password_STA);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected to external Wi-Fi!");
  Serial.print("STA IP address: ");
  Serial.println(WiFi.localIP()); // IP mà router cấp cho ESP32
}

void loop() {
  // Không cần làm gì thêm, chỉ để in IP ra 1 lần
}
