#include <stdio.h>
#include <assert.h>
#include "main.h"

extern int numberOfMinorColors;

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
