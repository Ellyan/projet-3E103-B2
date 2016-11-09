#include <stdio.h>
#include <stdlib.h>
#include "myLibBmp.h"

int main() {
  int i,j;
  BmpImg img = createBmpImg(11,11);
  int clr1[3]= {255,255,255};
  int clr0[3]= {0,0,0};
  for (i=0; i<11; i++) {
    for (j=0; j<11; j++) {
      setPixel(img,clr1,i,j);
    }
  }
  setPixel(img,clr0,5,5);
  writeBmpImage("test.bmp",&img);
}
