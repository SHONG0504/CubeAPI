#include "Cube.hpp"

#include <stdexcept>

Cube::Cube() {
    Cube::isScrambled = false;
}

Cube::Cube(std::string scramble) {
    Cube::scramble = scramble;

    if (Cube::scrambleCube(scramble) != 0) {
        throw std::invalid_argument("Invalid scramble.");
    }

    Cube::isScrambled = true;
}

int Cube::scrambleCube(std::string sequence) {

    return false;
}