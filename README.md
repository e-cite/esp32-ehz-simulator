# EHZ EDL-21 Simulator für ESP32
Schaltplan und Software für einen Smart-Meter (EHZ EDL-21) Simulator.

Mittels eines PNP-Transistors wird eine Infrarot (IR) LED am
TX2 Port eines ESP32 geschalten. Die IR-Signale können damit beim
Debugging anderer Schaltungen und Software zur Simulation von
Smart-Meter SML Messages genutzt werden.

Die Demo-Message `esp32-ehz-simulator/demo.h` ist eine selbst
aufgezeichnete SML message, in der Teile der Zählernummer
(Geräteidentifikation) durch `0x11` ersetzt wurde.
