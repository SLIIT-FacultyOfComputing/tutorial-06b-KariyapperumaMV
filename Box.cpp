#include "Box.h"
#include<iostream>
using namespace std;

// Implement setters and getters
int Box::getLength(){
  return length;
}
void Box::setLength(int L){
  length= L;
}
int Box::getWidth(){
  return width;
}
void Box::setWidth (int W){
  width= W;
}
int Box::getHeight(){
  return height;
}
void Box::setHeight(int H){
  height=H;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return width*length*height;
}
