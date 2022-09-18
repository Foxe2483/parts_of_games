#include <iostream>
#include <string>

using namespace std;

int main(){

    cout << "\x1B[2J\x1B[H";
    cout << "_______ Прототип игры : сражение _______" << endl << endl;

    int hp = 100;
    int mana = 20;
    int enemi_hp = 93;

    while(bool exit = true){

        cout << "Твое здоровье: " << hp << endl << "Твои мана: " << mana << endl << endl<< "Враг: " << enemi_hp << endl << endl;

        if(enemi_hp <= 0) {

            cout << "/ Победа! \\\n";
            break;

        } else if(hp <= 0) {

            cout << ". Проигрыш! .\n";
            break;

        }

        cout << "1 - бить, \n2 - лечится, \n3 - восстановление маны, \n4 - двойной удар, \n0 - выход" << endl;

        int num;

        cin >> num;

        if(num == 0) {

            cout << "Выход\n";
            break;
        }

    cout << "\x1B[2J\x1B[H";

        switch(num) {
            case 2:
                if(mana >= 3) {
                    cout << "Лечимся: 16!" << endl;
                    hp = hp + 16;
                    mana = mana - 3;
                } else {
                    cout << "Недостаточно маны!" << endl << "Ждем..." << endl;
                }
                break;

            case 1:
                if(mana >= 2) {
                    cout << "Бъем: 18!" << endl;
                    enemi_hp = enemi_hp - 18;
                    mana = mana - 2;
                } else {
                    cout << "Недостаточно маны!" << endl << "Ждем..." << endl;
                }
                break;
            case 4:
                if(mana >= 5) {
                    cout << "Сильно бъем: 30!" << endl;
                    enemi_hp = enemi_hp - 30;
                    mana = mana - 5;
                } else {
                    cout << "Недостаточно маны!" << endl << "Ждем..." << endl;
                }
                break;
            case 3:
                cout << "Восстанавливаем ману: 6!" << endl;
                mana = mana + 6;
                break;
            default:
                cout << "Ждем..." << endl;

        }

        if(enemi_hp <= 35) {

            cout << "Урон по вам: 17" << endl;
            hp = hp - 17;

        } else {

            cout << "Урон по вам: 14" << endl;
            hp = hp - 14;

        }
        cout <<"___________"<<endl;

    }

    return 0;

}
