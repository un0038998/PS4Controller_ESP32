#include <PS4Controller.h>
#include <esp_bt_main.h>
#include <esp_bt_device.h>

void setup()
{
  Serial.begin(115200);
  PS4.begin();
  const uint8_t* address = esp_bt_dev_get_address();
  char str[100];
  sprintf(str, "ESP32's Bluetooth MAC address is - %02x:%02x:%02x:%02x:%02x:%02x", address[0],address[1],address[2],address[3],address[4],address[5]);
  Serial.println(str);
}

void loop()
{

}
