#pragma once
#include "imageio.h"

void invert(int img[MAX_H][MAX_W],int h, int w);
void invertHalf(int img[MAX_H][MAX_W],int h, int w);
void box(int img[MAX_H][MAX_W],int h, int w);
void frame(int img[MAX_H][MAX_W],int h, int w);
void scale(int img[MAX_H][MAX_W], int imgScaled[MAX_H*2][MAX_W*2], int h, int w);
void pixelate(int img[MAX_H][MAX_W],int h, int w);
