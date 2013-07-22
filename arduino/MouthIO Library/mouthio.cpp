/*
  Mouthio.h - Library for reading and writing to a mouthio tongue board from a brain shield
  Created by Alex Hornstein and Zach Smith, July 2013
  Released into the public domain.
*/

#include "Arduino.h"
#include "Mouthio.h"

//inits all the mouthio pins
Mouthio::Mouthio()
{
  pinMode(ROW1_4_SELECT, OUTPUT);
  pinMode(ROW5_8_SELECT, OUTPUT);
  pinMode(ROW9_12_SELECT, OUTPUT);
  pinMode(ROW13_16_SELECT, OUTPUT);
  pinMode(SCK, OUTPUT);
  pinMode(SI, INPUT);
  pinMode(SO, OUTPUT)
  pinMode(COL1, OUTPUT);
  pinMode(COL2, OUTPUT);
  pinMode(COL3, OUTPUT);
  pinMode(COL4, OUTPUT);
  pinMode(COL5, OUTPUT);
  pinMode(COL6, OUTPUT);
  pinMode(COL7, OUTPUT);
  pinMode(COL8, OUTPUT);
  pinMode(COL9, OUTPUT);
  pinMode(COL10, OUTPUT);
  pinMode(COL11, OUTPUT);
  pinMode(COL12, OUTPUT);
  pinMode(COL13, OUTPUT);
  pinMode(COL14, OUTPUT);
  pinMode(COL15, OUTPUT);
  pinMode(COL16, OUTPUT);

}

void Mouthio::refresh()
{
  readTongue();
}

void Mouthio::readTongue()
{
}
