#include <iostream>
#include "laboratorio.h"
using namespace std;



int main () {
    Computadora pc01 = Computadora(
        "Gnu/Linux",
        500,
        16,
        "i5");
    Computadora pc02;
    pc02.setOs ("ReactOS");
    pc02.setCap(2000);
    pc02.setMem (8);
    pc02.setCpu ("i7");

    Computadora pc03;
    pc03.setOs ("FreeBSD");
    pc03.setCap(1500);
    pc03.setMem (12);
    pc03.setCpu ("A6");

    Computadora pc04;
    pc04.setOs ("ZorinOS");
    pc04.setCap(750);
    pc04.setMem (4);
    pc04.setCpu ("Ryzen 3");

    Laboratorio lb;

    lb.agregarComputadora(pc01);
    lb.agregarComputadora(pc02);
    lb.agregarComputadora(pc03);
    lb.agregarComputadora(pc04);

    lb.mostrar(); /*

    cout<<pc02.getOs()<<endl;
    cout<<pc02.getCap()<<endl;
    cout<<pc02.getMem()<<endl;
    cout<<pc02.getCpu()<<endl;
    
    cout<<pc03.getOs()<<endl;
    cout<<pc03.getCap()<<endl;
    cout<<pc03.getMem()<<endl;
    cout<<pc03.getCpu()<<endl;
    
    cout<<pc04.getOs()<<endl;
    cout<<pc04.getCap()<<endl;
    cout<<pc04.getMem()<<endl;
    cout<<pc04.getCpu()<<endl;
    */

    return 0;
}