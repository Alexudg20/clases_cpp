#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora { public: 
    string os; //systema operativo
    double cap; //Capacidad de almacenamiento
    double mem; //Memoria RAM
    string cpu; //Procesador
    
    Computadora ();
    Computadora(const string &os,
    double cap,
    double mem,
    const string &cpu);
    
void setOs(const string &v);
string getOs();
    
void setCap(double v);
double getCap();


void setMem(double v);
double getMem();

void setCpu(const string &v);
string getCpu();

};


#endif