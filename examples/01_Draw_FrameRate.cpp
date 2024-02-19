/*
    Author: (Bonezegei) Jofel Batutay
    Date: February 21, 2024
*/

#include "bonezegei/bonezegei.h"

Bonezegei bzn;

int main(){
    
    //! create ( Param1, Param2)
    //!     Param1 Dimension( Width , Height) 
    //!     Param2 Window Name
    bzn.create(Dimension2di(1366,768),"Bonezegei Engine");
  
    while(bzn.device->run()){    // Instead of bzn.run(); 
        bzn.driver->begin();
      
        bzn.ui->drawAll();  //draw all GUI Elements

        char data[128];
  
        sprintf(data,"FPS: %d X:%d Y:%d \nBonezegei Engine\n", bzn.driver->FPS, bzn.device->xmouse,bzn.device->ymouse);
      
        //Draw Rectangle
        // Param1 = Color
        // Param2 = Rectangle
        // Param3 = Clip
        bzn.driver->drawRect2D(Color(0,0,0,50),Recti(Vector2di(1,0),Dimension2di(200,20)),0);

        //Draw Text
        // Param1 = Font
        // Param2 = Position
        // Param3 = Text
        // Param4 = Color
        bzn.driver->drawText2D(&bzn.ui->fonts[gui::arial8], Vector2di(1,0),data,Color(0,0,0));
      
        bzn.driver->end();
    }

    return 0;
}
