#include <esp_now.h>
#include <WiFi.h>

// WIRING
#define IN1 26
#define IN2 27
#define IN3 14
#define IN4 12

#define ENA 25   // 
#define ENB 13   // 

typedef struct {
  int command;
} Message;

Message data;

// RECEIVE FUNCTION
void OnReceive(const esp_now_recv_info_t *info, const uint8_t *incomingData, int len) {
  memcpy(&data, incomingData, sizeof(data));

  Serial.print("Command: ");
  Serial.println(data.command);

  switch (data.command) {
    case 1: forward(); break;
    case 2: back(); break;
    case 3: right(); break;
    case 4: left(); break;
    default: stopCar(); break;
  }
}

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  //  MOTOR ENABLE
  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);

  stopCar();

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW init failed");
    return;
  }

  esp_now_register_recv_cb(OnReceive);

  Serial.println("Receiver Ready...");
}

void loop() {}

//  MOVEMENT

void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void back() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void left() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void right() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopCar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
