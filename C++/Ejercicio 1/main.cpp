#include <iostream>

using namespace std;

int main()
{
    int numeroA, numeroB, numeroC;
    double promedio;

    cout <<" EJERCICIO UNO " << endl;

    cout << " ingrese primer numero " << endl;
    cin >> numeroA;
    cout << "ingrese segundo numero " << endl;
    cin >> numeroB;
    cout << "ingrese tercer numero " << endl;
    cin >> numeroC;

promedio = double (numeroA+numeroB+numeroC)/3 ;
          //cast estatico
cout << "promedio" << promedio;


    return 0;
}
