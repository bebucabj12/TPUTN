#include <iostream>
using namespace std;
#include "Lib/rlutil.h"
using namespace rlutil;
#include "Lib/function.h"

int main() {
    int pescador[15], especie[9], option;
    float hora, kg;

    //inicializo los vectores en 0
    array_initialize(pescador, 15);
    //array_initialize(especie, 9);

    for(int i = 0; i < 15; i++){
        cout << pescador[i];
    }

    //cls();
    // setColor(WHITE);
    // cout << "BEDECHIAN'S FISHING TOURNAMENT" << endl;
    // cout << "--------------------------------" << endl;
    // cout << "1 - REGISTRAR CAPTURAS" << endl;
    // cout << "2 - REPORTE A" << endl;
    // cout << "3 - REPORTE B" << endl;
    // cout << "4 - REPORTE C" << endl;
    // cout << "5 - CREDITOS" << endl;
    // cout << "--------------------------------" << endl;
    // cout << "0 - SALIR" << endl;
    // cout << endl << "> ";
    // cin >> option;

    cin.ignore();
    cin.get();
    return 0;
}