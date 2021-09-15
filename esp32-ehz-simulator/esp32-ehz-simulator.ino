#include "demo.h"

// Serial 2: UART interface for writing to the IR diode
#define RXD2 16
#define TXD2 17

void setup() {
  Serial.begin(57600);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
}

void loop() {
  unsigned int bytes_tot = 0;
  unsigned int bytes_cur = 0;
  while(bytes_tot < sizeof(msg_buf_debugtemplate)){
    if (Serial2.availableForWrite() > 64){
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
