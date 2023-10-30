#pragma once


enum PixelFormat {
  kPixelRGBResv8BitPerColor,
  kPixelBGRResv8BitPerColor,
};

struct FrameBufferConfig {
  int* frame_buffer;
  int pixels_per_scan_line;
  int horizontal_resolution;
  int vertical_resolution;
  enum PixelFormat pixel_format;
};
