# Bài tập ESP32

Repo này gồm 2 ví dụ dùng **ESP32 + WiFi.h** để tạo web server đơn giản.

---

## 1. ESP32 Station Mode (Kết nối WiFi có sẵn)

- ESP32 kết nối vào mạng WiFi có sẵn (dùng SSID và mật khẩu).  
- Tạo web server cổng **80**.  
- Dùng trình duyệt truy cập địa chỉ IP của ESP32 để bật/tắt LED (chân GPIO 2):  
  - `/H` → Bật LED  
  - `/L` → Tắt LED  

---

## 2. ESP32 Access Point (AP Mode)

- ESP32 tự phát WiFi (SSID mặc định: **ESP32-Access-Point**, mật khẩu: **123456789**).  
- Tạo web server cổng **80**.  

---

## Cách chạy

1. Cài **Arduino IDE** và thêm board ESP32.  
2. Mở code `.ino`, chỉnh lại SSID/mật khẩu nếu cần.  
3. Kết nối ESP32 với máy tính, chọn đúng board và cổng COM.  
4. Upload code và mở **Serial Monitor** (115200 baud) để xem địa chỉ IP.  
5. Dùng trình duyệt truy cập IP đó để kiểm tra.  

---
