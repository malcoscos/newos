#pragma once


enum PixelFormat {
  kPixelRGBResv8BitPerColor,
  kPixelBGRResv8BitPerColor,
};

struct FrameBufferConfig {
  unsigned char* frame_buffer;
  unsigned int pixels_per_scan_line;
  unsigned int horizontal_resolution;
  unsigned int vertical_resolution;
  enum PixelFormat pixel_format;
};
