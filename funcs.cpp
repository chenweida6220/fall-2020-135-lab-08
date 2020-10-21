#include <iostream>
#include "imageio.h"
#include "funcs.h"
using namespace std;

// Task A. Invert jors
void invert(int img[MAX_H][MAX_W],int h, int w) {
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      img[i][j] = 255 - img[i][j];
    }
  }
}

// Task B. Invert jors in the right half
void invertHalf(int img[MAX_H][MAX_W],int h, int w) {
  for (int i = 0; i < h; i++) {
    for (int j = w/2; j < w; j++) {
      img[i][j] = 255 - img[i][j];
    }
  }
}

// Task C. Add a white box
void box(int img[MAX_H][MAX_W],int h, int w) {
  for (int i = h/4; i <= h/4 * 3; i++) {
    for (int j = w/4; j <= w/4 * 3; j++) {
      img[i][j] = 255;
    }
  }
}

// Task D. One-pixel-thick frame
void frame(int img[MAX_H][MAX_W],int h, int w) {
  for (int i = h/4; i <= h/4 * 3; i++) {
    for (int j = w/4; j <= w/4 * 3; j++) {
      if (i == h/4 || i == h/4 * 3 || j == w/4 || j == w/4 * 3) {
        img[i][j] = 255;
      }
    }
  }
}

// Task E. Scale 200%
void scale(int img[MAX_H][MAX_W], int imgScaled[MAX_H*2][MAX_W*2], int h, int w) {
  int scaledH = 0;
  int scaledW = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      scaledH = i * 2;
      scaledW = j * 2;
      imgScaled[scaledH][scaledW] = img[i][j];
      imgScaled[scaledH+1][scaledW] = img[i][j];
      imgScaled[scaledH][scaledW+1] = img[i][j];
      imgScaled[scaledH+1][scaledW+1] = img[i][j];
    }
  }
}

// Task F. Pixelate
void pixelate(int img[MAX_H][MAX_W],int h, int w) {
  for (int i = 0; i < h; i += 2) {
    for (int j = 0; j < w; j += 2) {
      int average = (img[i][j] + img[i+1][j] + img[i][j+1] + img[i+1][j+1]) / 4;
      img[i][j] = average;
      img[i+1][j] = average;
      img[i][j+1] = average;
      img[i+1][j+1] = average;
    }
  }
}
