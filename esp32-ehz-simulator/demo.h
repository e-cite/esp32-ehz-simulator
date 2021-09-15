// This is a demo SML message
// Generate your own SML simulator messages from an SML file by
// xxd -i FILE.SML
unsigned char msg_buf_debugtemplate[] = {
  0x1b, 0x1b, 0x1b, 0x1b, 0x01, 0x01, 0x01, 0x01, 0x76, 0x05, 0x09, 0x1a,
  0xc5, 0xd8, 0x62, 0x00, 0x62, 0x00, 0x72, 0x63, 0x01, 0x01, 0x76, 0x01,
  0x01, 0x05, 0x03, 0x08, 0xec, 0x9e, 0x0b, 0x09, 0x01, 0x49, 0x53, 0x4b,
  0x00, 0x11, 0x11, 0x11, 0x11, 0x01, 0x01, 0x63, 0x24, 0x36, 0x00, 0x76,
  0x05, 0x09, 0x1a, 0xc5, 0xd9, 0x62, 0x00, 0x62, 0x00, 0x72, 0x63, 0x07,
  0x01, 0x77, 0x01, 0x0b, 0x09, 0x01, 0x49, 0x53, 0x4b, 0x00, 0x11, 0x11,
  0x11, 0x11, 0x07, 0x01, 0x00, 0x62, 0x0a, 0xff, 0xff, 0x72, 0x62, 0x01,
  0x65, 0x08, 0x5b, 0x02, 0x5b, 0x7d, 0x77, 0x07, 0x81, 0x81, 0xc7, 0x82,
  0x03, 0xff, 0x01, 0x01, 0x01, 0x01, 0x04, 0x49, 0x53, 0x4b, 0x01, 0x77,
  0x07, 0x01, 0x00, 0x00, 0x00, 0x09, 0xff, 0x01, 0x01, 0x01, 0x01, 0x0b,
  0x09, 0x01, 0x49, 0x53, 0x4b, 0x00, 0x11, 0x11, 0x11, 0x11, 0x01, 0x77,
  0x07, 0x01, 0x00, 0x01, 0x08, 0x00, 0xff, 0x65, 0x00, 0x01, 0x01, 0x82,
  0x01, 0x62, 0x1e, 0x52, 0xff, 0x59, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c,
  0x4a, 0xf2, 0x01, 0x77, 0x07, 0x01, 0x00, 0x01, 0x08, 0x01, 0xff, 0x01,
  0x01, 0x62, 0x1e, 0x52, 0xff, 0x59, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c,
  0x4a, 0xf2, 0x01, 0x77, 0x07, 0x01, 0x00, 0x01, 0x08, 0x02, 0xff, 0x01,
  0x01, 0x62, 0x1e, 0x52, 0xff, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x77, 0x07, 0x01, 0x00, 0x02, 0x08, 0x00, 0xff, 0x65,
  0x00, 0x01, 0x01, 0x82, 0x01, 0x62, 0x1e, 0x52, 0xff, 0x59, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x77, 0x07, 0x01, 0x00, 0x02,
  0x08, 0x01, 0xff, 0x01, 0x01, 0x62, 0x1e, 0x52, 0xff, 0x59, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x77, 0x07, 0x01, 0x00, 0x02,
  0x08, 0x02, 0xff, 0x01, 0x01, 0x62, 0x1e, 0x52, 0xff, 0x59, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x77, 0x07, 0x01, 0x00, 0x10,
  0x07, 0x00, 0xff, 0x01, 0x01, 0x62, 0x1b, 0x52, 0x00, 0x55, 0x00, 0x00,
  0x00, 0xb0, 0x01, 0x77, 0x07, 0x01, 0x00, 0x24, 0x07, 0x00, 0xff, 0x01,
  0x01, 0x62, 0x1b, 0x52, 0x00, 0x55, 0x00, 0x00, 0x00, 0x56, 0x01, 0x77,
  0x07, 0x01, 0x00, 0x38, 0x07, 0x00, 0xff, 0x01, 0x01, 0x62, 0x1b, 0x52,
  0x00, 0x55, 0x00, 0x00, 0x00, 0x54, 0x01, 0x77, 0x07, 0x01, 0x00, 0x4c,
  0x07, 0x00, 0xff, 0x01, 0x01, 0x62, 0x1b, 0x52, 0x00, 0x55, 0x00, 0x00,
  0x00, 0x05, 0x01, 0x77, 0x07, 0x81, 0x81, 0xc7, 0x82, 0x05, 0xff, 0x01,
  0x01, 0x01, 0x01, 0x83, 0x02, 0x48, 0xe3, 0x7b, 0x5f, 0x3a, 0x1e, 0x34,
  0x70, 0x7c, 0x12, 0x77, 0x68, 0x0a, 0x4c, 0x58, 0x2f, 0x67, 0x1b, 0x19,
  0xa7, 0xb4, 0x49, 0x42, 0x2c, 0x10, 0x1f, 0x42, 0xf4, 0xd8, 0x6b, 0xe8,
  0x4a, 0x20, 0xfc, 0x41, 0xec, 0x08, 0x30, 0x69, 0x12, 0xfc, 0xac, 0x4e,
  0xea, 0x17, 0x87, 0xfd, 0x12, 0x01, 0x01, 0x01, 0x63, 0xf7, 0xb9, 0x00,
  0x76, 0x05, 0x09, 0x1a, 0xc5, 0xda, 0x62, 0x00, 0x62, 0x00, 0x72, 0x63,
  0x02, 0x01, 0x71, 0x01, 0x63, 0x20, 0xb5, 0x00, 0x1b, 0x1b, 0x1b, 0x1b,
  0x1a, 0x00, 0x5f, 0x4a, 0x00
};