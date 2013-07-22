/*
  Mouthio.h - Library for reading and writing to a mouthio tongue board from a brain shield
  Created by Alex Hornstein and Zach Smith, July 2013
  Released into the public domain.
*/
#ifndef mouthio_h
#define mouthio_h

#include "Arduino.h"
#define ROW1_4_SELECT 6 
#define ROW5_8_SELECT 5 
#define ROW9_12_SELECT 4 
#define ROW13_16_SELECT 3 
#define SCK 7
#define SI 8
#define SO 9
#define COL1 22
#define COL2 24
#define COL3 26
#define COL4 28
#define COL5 30
#define COL6 32
#define COL7 34
#define COL1 36
#define COL8 38
#define COL9 40
#define COL10 42
#define COL11 44
#define COL12 46
#define COL13 48
#define COL14 50
#define COL15 52
#define COL16 52


#define 

class Mouthio
{
 public:
  Mouthio();
  void refresh();
  unsigned char[] display;
  int[] read;
 private:
  void readTongue();
};

#endif
