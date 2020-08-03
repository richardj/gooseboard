#include <iostream>
#include <ctime>

using namespace std;


class Dice {
    // number 1 to 6

    public:
    int roll() {
        int number = rand() % 6 + 1;

        return number;
    }
};

class Player {
    string playerName;

    public:
    string setPlayName() {
       return "hi"; 
    }
};

class Game {
    int tiles;

};

class Tile {

};


int main() {
    srand(time(NULL));

    // board  
    Dice dice1;
    Dice dice2;

    int roll1 = dice1.roll();
    int roll2 = dice2.roll();

    cout << roll1 << "\n";
    cout << roll2 << "\n";

    return 0;
}
