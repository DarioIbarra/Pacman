#include <iostream>
#include <TazoDorado.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    // int   entero = 0;
    // bool  booleano = true;
    // char  letra = 'A';
    // float decimal = 0.5;

    // cout<<"Tamaño entero: " <<sizeof(entero) <<endl;
    // cout<<"Tamaño booleano: " <<sizeof(booleano) <<endl;
    // cout<<"Tamaño letra: " <<sizeof(letra) <<endl;
    // cout<<"Tamaño decimal: " <<sizeof(decimal) <<endl;
    // cout<<"Tamaño Tazo: " <<sizeof(TazoDorado) <<endl;
    // cout<<endl;
    // TazoDorado tazo1;
    // TazoDorado tazo2;
    // cout<<"Direccion Tazo1: " << &tazo1 <<endl;
    // cout<<"Direccion Tazo2: " << &tazo2 <<endl;
    // TazoDorado tazos[10];
    // for (size_t i = 0; i < 20; i++)
    // {
    //     cout<<"Direccion Tazo: " << i << ":" << &tazos[i]  << endl;
    // }
    //// c -----------------------------------------------------
    TazoDorado* direccion ;
     direccion = (TazoDorado *) malloc(sizeof(TazoDorado));
     direccion->Inicializar();
     cout<<"Valor en direccion: " <<  direccion->Flotando() << endl;

     /// c++ ------------------------------------------
     TazoDorado *direccion2;
     direccion2 = new TazoDorado();
     cout<<"Valor en direccion2: " <<  direccion2->Flotando() << endl;







    
    
    return 0;
}
