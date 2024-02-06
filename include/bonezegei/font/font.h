/*
    Author: (Bonezegei) Jofel Batutay
    Date: February 4, 2024
    Purpose: Bonezegei Engine
*/
#ifndef __FONT_H_INCLUDED__
#define __FONT_H_INCLUDED__

#include "../util/color.h"
#include "../util/vector2d.h"
#include "../util/dimension2d.h"
#include "../util/rect.h"
#include "../image/texture.h"
//#include "../driver/driver.h"

class Font{
    public:
        Font(){}
        virtual void   create(char fd[], int desc[95][3]){}
        virtual void   drawText2D(Vector2di pos, char *text, Color color){}

        int H;
        Texture ftext;
        int tID;
        Recti rect[95];
};


#endif

