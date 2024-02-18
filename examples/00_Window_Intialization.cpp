/*
    Author: (Bonezegei) Jofel Batutay
    Date: February 5, 2024
*/

#include "bonezegei/bonezegei.h"

Bonezegei bzn;

int main(){
    //! create ( Param1, Param2)
    //!     Param1 Dimension( Width , Height) 
    //!     Param2 Window Name
    bzn.create(Dimension2di(1366,768),"Bonezegei Engine");
    //! run() draw all scenes
    bzn.run();
    return 0;
}
