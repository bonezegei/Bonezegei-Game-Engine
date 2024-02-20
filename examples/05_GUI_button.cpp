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

    // Add Button to GUI 
    //! addButton( Param1, Param2, Param3, )
    //!     Param1 Rectangle( Position( X, Y) , Dimension( Width, Height) ) 
    //!     Param2 Parent  0= No parent
    //!     Param3 ID
    gui::Button *btn1  =  bzn.ui->addButton(Recti(Vector2di(10,7),Dimension2di(100,30)),0,14);
                btn1->setText("Close"); //Button Text
  
    //! run() draw all scenes
    bzn.run();
  
    return 0;
}
