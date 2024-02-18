/*
    Author: (Bonezegei) Jofel Batutay
    Date: February 19, 2024
*/

#include "bonezegei/bonezegei.h"

Bonezegei bzn;

int main(){
  
    //! create ( Param1, Param2)
    //!     Param1 Dimension( Width , Height) 
    //!     Param2 Window Name
    bzn.create(Dimension2di(1366,768),"Bonezegei Engine");

    // Create and Load BMP Texture/Image
    Texture *t = new Texture;
             t->load("resources/test/tile128.bmp",IMG_BMP);

    // Add Image to GUI 
    //! addImage( Param1, Param2, Param3, )
    //!     Param1 Rectangle( Position( X, Y) , Dimension( Width, Height) ) 
    //!     Param2 Parent
    //!     Param3 ID
    gui::Image *m= bzn.ui->addImage(Recti(Vector2di(300,10),Dimension2di(100,100)),0,12);
         m->setTexture(t); //set Texture to GUI Image

    //! run() draw all scenes
    bzn.run();
  
    return 0;
}

