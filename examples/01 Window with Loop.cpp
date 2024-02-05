/*
    Author: (Bonezegei) Jofel Batutay
    Date: February 5, 2024
*/

#include "bonezegei/bonezegei.h"

Bonezegei bzn;

int main(){
    bzn.create(Dimension2di(1366,768),"Bonezegei Engine");
  
    while(bzn.device->run()){  // Instead of bzn.run(); 
        bzn.driver->begin();
            //loop code here
        bzn.driver->end();
    }

    return 0;
}
