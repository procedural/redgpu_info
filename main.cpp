#ifdef _WIN32
#include "C:/RedGpuSDK/redgpu.h"
#endif
#ifdef __linux__
#include "/opt/RedGpuSDK/redgpu.h"
#endif

#include <stdlib.h> // For malloc, free

int main() {
  RedContext context = 0;
  redCreateContext(malloc, free, 0, 0, 0, RED_SDK_VERSION_1_0_135, 0, 0, 0, 0, 0, 0, 0, &context, 0, 0, 0, 0);
}