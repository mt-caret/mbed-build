#include "mbed.h"

Serial pc(USBTX, USBRX);
int main() {
  pc.baud(19200);
  pc.printf("Initialized.\n\r");

  while(true);
}

