#include <stdio.h>
#include <assert.h>
#include "main.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
extern const int MAX_COLORPAIR_NAME_CHARS;
int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void WiringColorManual(void);

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
    
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}


void WiringColorManual(){
    int i;
    char* bufferValue;
   // printf("%s %s %s","Number","","Major Color","","Minor Color");
  ColorPair info;
  
  for(i= 1 ; i<26 ; i++)
  {
      info=GetColorFromPairNumber(i);
      char bufferValue[MAX_COLORPAIR_NAME_CHARS];
      ColorPairToString(&info,bufferValue);
      printf("%d %s %s",i,
        info.majorColor,
        info.minorColor);
  }
}
      
