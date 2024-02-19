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

    // Add TextBox to GUI 
    //! addImage( Param1, Param2, Param3, )
    //!     Param1 Rectangle( Position( X, Y) , Dimension( Width, Height) ) 
    //!     Param2 Parent  0= No parent
    //!     Param3 ID
    gui::TextBox *tb= bzn.ui->addTextBox(Recti(Vector2di(10,10),Dimension2di(300,100)),0,13);
            tb->setFont(&bzn.ui->fonts[gui::arial8]);      //setTextBox Font 
            tb->setText("TextBox Hello World");            //setTextBox Text 
            tb->setEnableBackground(true);                 //setTextBox Background. if false the background is transparent. by default false 
            tb->setBackgroundColor(Color(0,128,0));        //if background is enabled this will take effect.
            tb->setFontPosition(Vector2di(10,10));         //set the off set position of the textbox form the original rectangle

    //! run() draw all scenes
    bzn.run();
  
    return 0;
}
