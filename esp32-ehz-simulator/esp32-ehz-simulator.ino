#include "demo.h"
// #define SOFTWARE_SERIAL  // Uncomment this for Software Serial

// Serial 2: UART interface for writing to the IR diode
#define RXD2 16
#define TXD2 17

#ifdef SOFTWARE_SERIAL
#include <SoftwareSerial.h>
SoftwareSerial Serial2(RXD2, TXD2);
#endif

void setup() {
  Serial.begin(57600);
#ifdef SOFTWARE_SERIAL
  Serial2.begin(9600);
#else
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
#endif

  Serial.println("Simulator started.");
}

void loop() {
  unsigned int bytes_tot = 0;
  unsigned int bytes_cur = 0;
  while(bytes_tot < sizeof(msg_buf_debugtemplate)){
#ifdef SOFTWARE_SERIAL
    if (Serial2.overflow() == false){
#else
    if (Serial2.availableForWrite() > 64){
#endif
      unsigned int bytes_to_write = sizeof(msg_buf_debugtemplate) - bytes_tot;
      if (bytes_to_write > 64){
        bytes_to_write = 64;
      }
      bytes_cur = Serial2.write(msg_buf_debugtemplate+bytes_tot, bytes_to_write);
      bytes_tot = bytes_tot + bytes_cur;
    }
  }
  Serial.println("Message sent successfully.");
  bytes_tot = 0;
  delay(5000);
}
