#include <iostream>
#include <ctime>

using namespace std;

class Dice {
    public:
    int roll() {
        int number = rand() % 6 + 1;

        return number;
    }
};

class Player {
    string playerName;

    public:
    string setPlayerName() {
       return "Hi i am player"; 
    }
    void setName(string name) {
        playerName = name;

    }
    string getName() {
        return playerName;
    }
};

class Game {
    int tiles{64};
    int position{0};
    
    public:
    void welcome() {
        cout << "Welcome to Gooseboard" << endl;
    }

    int setPlayerPosition(int dice) {
        position = position + dice;
        return position;     
    }
};

class Tile {

};


int main() {
    srand(time(NULL));
    
    Game game;
    Player player1;
    // board  
    Dice dice1;
    Dice dice2;
    bool gameOver = false;
    string playerName;

    game.welcome();
    cout << "Player 1, what is your name? " << endl;

    cin >> playerName;
    player1.setName(playerName);
    cout << "Welcome " << player1.getName() << endl;
    cout << "-----------------------------------------------------------" << endl;


    while (!gameOver) {
        cout << "press Enter to Roll the Dice \n";
        cin.ignore();
        
        int roll1 = dice1.roll();
        int roll2 = dice2.roll();

        cout << roll1 << "\n";
        cout << roll2 << "\n";

        if (roll1 == 6 || roll2 == 6) {
            gameOver = true;
        }
    }

    return 0;
}
