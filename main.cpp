#include <iostream>
#include "functions.h"
#include "struct.h"

int main() {

    scalpelC sCoords;
    hemostatC hCoords;
    tweezersC tCoords;
    sutureC sutCoords;

    std::cout << "Start the surgery" << std::endl;

    scalpel(sCoords);
    hemostat(hCoords);
    tweezers(tCoords);
    suture(sutCoords);

    surgeryCheck(sCoords, sutCoords);

    return 0;
}
