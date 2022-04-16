#pragma once
#include "struct.h"

double scalpel(scalpelC& sCoords) {
    std::cout << "Input x & y for scalpel: " << std::endl;
    std::cin >> sCoords.x >> sCoords.y;
}

double hemostat(hemostatC& hCoords) {
    std::cout << "Input x for hemostat: " << std::endl;
    std::cin >> hCoords.x;
}

double tweezers(tweezersC& tCoords) {
    std::cout << "Input x for tweezers: " << std::endl;
    std::cin >> tCoords.x;
}

double suture(sutureC& sutCoords) {
    std::cout << "Input x & y for suture: " << std::endl;
    std::cin >> sutCoords.x >> sutCoords.y;
}

void surgeryCheck(scalpelC& sCoords, sutureC& sutCoords) {
    if (sCoords.x == sutCoords.x && sCoords.y == sutCoords.y) {
        std::cout << "Surgery done";
    } else {
        std::cerr << "Coords not matching";
    }
}