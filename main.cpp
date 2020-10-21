#include <iostream>
#include "imageio.h"
#include "funcs.h"
using namespace std;

int main() {
  int image[MAX_H][MAX_W];
  int h,w;
  string input = "cat.pgm";

  // Task A. Invert colors
  readImage(input, image, h, w);
  invert(image,h,w);
  writeImage("taskA.pgm",image,h,w);

  // Task B. Invert colors in the right half
  readImage(input, image, h, w);
  invertHalf(image,h,w);
  writeImage("taskB.pgm",image,h,w);

  // Task C. Add a white box
  readImage(input, image, h, w);
  box(image,h,w);
  writeImage("taskC.pgm",image,h,w);

  // Task D. One-pixel-thick frame
  readImage(input, image, h, w);
  frame(image,h,w);
  writeImage("taskD.pgm",image,h,w);

  // Task E. Scale 200%
  int imgScaled[MAX_H * 2][MAX_W * 2];
  readImage(input, image, h, w);
  scale(image,imgScaled,h,w);
  writeImage2("taskE.pgm",imgScaled, h * 2, w * 2);

  // Task F. Pixelate
  readImage(input, image, h, w);
  pixelate(image,h,w);
  writeImage("taskF.pgm",image,h,w);
}
