#include "bonezegei/bonezegei.h"

Bonezegei bzn;

int main(){
    bzn.create(Dimension2di(1366,768),"Bonezegei Engine");
    bzn.run();
    return 0;
}
