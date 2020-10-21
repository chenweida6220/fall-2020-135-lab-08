#include <iostream>
#include "imageio.h"
#include "funcs.h"
using namespace std;

int main() {
  // If segmentation fault due to stack overflowing, use ulimit -s unlimited
  // Task A. Invert colors
  string input = "cat.pgm";
  int img_TaskA[MAX_H][MAX_W];
  int h, w;
  readImage(input, img_TaskA, h, w);
  invert(img_TaskA,h,w);
  writeImage("taskA.pgm",img_TaskA,h,w);

  // Task B. Invert colors in the right half
  input = "cat.pgm";
  int img_TaskB[MAX_H][MAX_W];
  readImage(input, img_TaskB, h, w);
  invertHalf(img_TaskB,h,w);
  writeImage("taskB.pgm",img_TaskB,h,w);

  // Task C. Add a white box
  input = "cat.pgm";
  int img_TaskC[MAX_H][MAX_W];
  readImage(input, img_TaskC, h, w);
  box(img_TaskC,h,w);
  writeImage("taskC.pgm",img_TaskC,h,w);

  // Task D. One-pixel-thick frame
  input = "cat.pgm";
  int img_TaskD[MAX_H][MAX_W];
  readImage(input, img_TaskD, h, w);
  frame(img_TaskD,h,w);
  writeImage("taskD.pgm",img_TaskD,h,w);

  // Task E. Scale 200%
  input = "cat.pgm";
  int img_TaskE[MAX_H][MAX_W];
  int imgScaled[MAX_H * 2][MAX_W * 2];
  readImage(input, img_TaskE, h, w);
  scale(img_TaskE,imgScaled,h,w);
  writeImage2("taskE.pgm",imgScaled, h * 2, w * 2);
}
