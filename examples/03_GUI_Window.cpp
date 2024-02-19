/*
    Author: (Bonezegei) Jofel Batutay
    Date: February 20, 2024
*/

#include "bonezegei/bonezegei.h"

Bonezegei bzn;

int main(){
  
    //! create ( Param1, Param2)
    //!     Param1 Dimension( Width , Height) 
    //!     Param2 Window Name
    bzn.create(Dimension2di(1366,768),"Bonezegei Engine");

    // Add Window to GUI 
    //! addwindow( Param1, Param2, Param3, )
    //!     Param1 Rectangle( Position( X, Y) , Dimension( Width, Height) ) 
    //!     Param2 Parent  0= No parent
    //!     Param3 ID
    gui::Window *window =  bzn.ui->addWindow(Recti(Vector2di(10,10),Dimension2di(640,480)),0,100);
                 window->setDrag(true); // Set of Window is Draggable

    //! run() draw all scenes
    bzn.run();
  
    return 0;
}
