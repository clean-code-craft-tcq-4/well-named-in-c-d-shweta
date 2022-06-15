enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};



typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair) ;
void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);

