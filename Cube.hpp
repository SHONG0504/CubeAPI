#include <string>

class Cube {
    public:
        Cube();
        Cube(std::string);

        int scrambleCube(std::string);

    private:
        bool isScrambled;
        std::string scramble;
};