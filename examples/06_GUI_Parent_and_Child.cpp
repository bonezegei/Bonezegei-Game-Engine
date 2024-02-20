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

    
    gui::Window *wMain =  bzn.ui->addWindow(Recti(Vector2di(10,10),Dimension2di(640,480)),0,100);
                 wMain->setDrag(true);

    gui::Window *wContent =  bzn.ui->addWindow(Recti(Vector2di(2,30),Dimension2di(636,448)),wMain,100);
                 wContent->setDrag(false);
                 wContent->color=Color(240,240,240);

    gui::TextBox *wTitle = bzn.ui->addTextBox(Recti(Vector2di(10,7),Dimension2di(150,20)),wMain,13);
            wTitle->setFont(&bzn.ui->fonts[gui::arial12]);
            wTitle->setText("Window");

    gui::Button *btn1  =  bzn.ui->addButton(Recti(Vector2di(10,7),Dimension2di(100,30)),wContent,14);
                btn1->setText("Close");

    Texture *t = new Texture;
             t->load("resources/test/tile128.bmp",IMG_BMP);

    gui::Image *m= bzn.ui->addImage(Recti(Vector2di(300,10),Dimension2di(100,100)),wContent,12);
         m->setTexture(t);
  
  
    //! run() draw all scenes
    bzn.run();
  
    return 0;
}
