#include <iostream>
#include "Perro.h"

using namespace std;



int main()
{
    Perro pluto("Pluto");
    pluto.Ladrar();
    cout << pluto.GetNombre() << endl;
    pluto.SetEdad(5);
    cout << pluto.GetEdad() << endl;

    Perro *tribilin = new Perro("Tribilin");
    cout << tribilin->GetNombre() << endl;
    tribilin->SetEdad(89);
    cout << tribilin->GetEdad() << endl;
    
    tribilin->SetEdad(90);
    cout << tribilin->GetEdad() << endl;
    delete tribilin;

    std::unique_ptr<Perro> perrito(new Perro("Perrito"));
    cout << perrito->GetNombre() << endl;

    return 0;
}