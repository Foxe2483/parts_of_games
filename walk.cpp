#include <iostream>

using namespace std;

int main(){

int map = 7;
bool exit = 1;
int player_x = 0;
int player_y = 0;
int c_in;

    while(exit) {

        cout << "\x1B[2J\x1B[H";

        for(int y = map; y != -map; y--) {

            for(int x = -map; x != map; x++) {

                if(y == player_y && x == player_x){

                    cout << " @";

                } else {

                cout << " .";

                }

            }

            cout << endl;

        }

        cin >> c_in;

        switch(c_in) {

            case 8:
                player_y++;
                break;

            case 2:
                player_y--;
                break;

            case 4:
                player_x--;
                break;

            case 6:
                player_x++;
                break;

        }

        if((player_x > map - 1) || (player_x < -map) || (player_y > map) || (player_y < -map + 1)){

            exit = 0;

        }

    }

}
