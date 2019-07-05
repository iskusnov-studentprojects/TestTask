#include <iostream>
#include "transportfabrica.h"

using namespace std;

int main(int argc, char *argv[])
{
    TransportFabrica fabrica;
    for (int i = 1; i < argc; i++) {
        QString str(argv[i]);
        bool isnum;
        int num = str.toInt(&isnum);
        if(isnum){
            switch (num) {
            case 0:
                cout << fabrica.createMotorbike().getInfo().toStdString();
                break;
            case 1:
                cout << fabrica.createScooter().getInfo().toStdString();
                break;
            case 2:
                cout << fabrica.createCar().getInfo().toStdString();
                break;
            case 3:
                cout << fabrica.createBus().getInfo().toStdString();
                break;
            default:
                cout << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА\n";
                break;
            }
        }
        else{
            cout << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА\n";
        }
        cout << '\n';
    }
    return 0;
}
