#include "DrawPad.hpp"
#include <math.h>

void DrawMain()
{
    Clear(kColorBlack);
//
//    DrawLine(-320, 0, 319, 0, kColorGray);
//    DrawLine(0, -240, 0, 239, kColorGray);
//日本
//    FillRect(-300, -200, 600, 400, kColorWhite);
//    FillCircle(0, 0, 150, kColorRed);
//    イタリア
//    FillRect(-300, -200, 600, 400, kColorWhite);
//    FillRect(-300, -200, 200, 400, kColorGreen);
//    FillRect(100, -200, 200, 400, kColorRed);
    
//    フィンランド
//    FillRect(-300, -200, 600, 400, kColorWhite);
//    FillRect(-300, -50, 600, 100, kColorBlue);
//    FillRect(-100, -200, 100, 400, kColorBlue);
  
//セーシェル
    FillRect(-300, -200, 600, 400, kColorWhite);
    FillTriangle(-300, -200, -300, 200, -100, 200, kColorBlue);
    FillTriangle(-300, -200, -100, 200, 100, 200, kColorYellow);
    FillTriangle(-300, -200, 100, 200, 300, 200, kColorRed);
    FillTriangle(-300, -200, 300, 200, 300, 50, kColorRed);
    FillTriangle(-300, -200, 300, -200, 300, -75, kColorGreen);
    
//チェコ
//    FillRect(-300, -200, 600, 400, kColorWhite);
//    FillRect(-300, -200, 600, 200, kColorRed);
//    FillTriangle(-300, -200, -300, 200, 0, 0, kColorBlue);
    
//ギリシャ
//    FillRect(-300, -200, 600, 400, kColorBlue);
//    FillRect(-300, -155, 600, 48, kColorWhite);
//    FillRect(-300, -65, 600, 48, kColorWhite);
//    FillRect(0, 25, 300, 48, kColorWhite);
//    FillRect(0, 130, 300, 40, kColorWhite);
}

