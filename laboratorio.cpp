#include "laboratorio.h"

Laboratorio::Laboratorio(){

cont = 0;

}

void Laboratorio::agregarComputadora(const Computadora &pc)
{
    if (cont < 5){
        arreglo [cont]=pc;
        cont++;
          }
    else
    {
        cout<<"Arreglo lleno"<<endl;
    }
    
}

void Laboratorio::mostrar()
{
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &pc = arreglo[i];
        cout<< "OS: "<<pc.getOs()<<endl;
        cout<< "Capacidad: "<<pc.getCap()<<endl;
        cout<< "Memoria: "<<pc.getMem()<<endl;
        cout<< "CPU: "<<pc.getCpu()<<endl;
        cout<<endl;
    }
    
}