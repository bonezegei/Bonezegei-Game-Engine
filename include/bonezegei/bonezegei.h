/*
    Author: (Bonezegei) Jofel Batutay
    Date: February 4, 2024
    Purpose: Bonezegei Engine
*/

#include "driver/driver.h"
#include "driver/driverOpenGL.h"
#include "device/device.h"
#include "device/deviceWindows.h"
#include "font/font.h"
#include "font/fontArray.h"
#include "image/image.h"
#include "image/imageBMP.h"
#include "image/texture.h"
#include "gui/gui.h"
#include "gui/sgui.h"
#include "util/event.h"
#include "driver/draw.h"
#include "2d/2d.h"

class Bonezegei{
    public:
        Bonezegei();
        void create(Dimension2di res, char *name);
        void run();

        Device *device;
        Driver *driver;
        GUI *ui;
};

