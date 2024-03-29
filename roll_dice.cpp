#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "structs.h"
using namespace std;

/*This function takes 4 parameters, a Player_current_details structure player,
an integer turn_count, No_of_sixes and dice_number.It generates a random number
between 1 and 6 imitating a dice. If there is a 6, it will roll the dice again
(recursive call). If there are three 6's in a row, the player loses his turn.
This function modifies the No_of_sixes and outputs the dice_number (which is
the dice roll that not equals 6)*/
int roll_dice(Player_current_details *player, int turn_count, int &No_of_sixes, int &dice_number){
  string key_pressed = "";
  cout << "Please press any character to roll the dice: ";
  cin >> key_pressed;
  if (key_pressed != ""){
    cout << "Rolling the dice!" << endl;
    srand(time(NULL));
    dice_number = rand() % 6 + 1;
    if (dice_number == 6){
      cout << "6" << endl;
      No_of_sixes++;
      if (No_of_sixes < 3){ //if num of sixes < 3, roll again.
        roll_dice(player, turn_count, No_of_sixes, dice_number);
      }
      if (No_of_sixes == 3){ //turn lost
        cout<< player[turn_count].username << " lost his turn!"<<endl<<endl;
        No_of_sixes = 0;
        dice_number = 0;
        return 0; //dice_number = 0
      }
    }
    return dice_number;
  }
}
