//
//  main.cpp
//  EvidenciaProyectoIntegradorEq11
//
//

#include <iostream>
#include "Video.hpp"
using namespace std;

//El usuario debe contar con un menú que pregunte si quiere consultar los videos o calificar alguno.
int menu() {
    int opcion;
    
    //imprimir menu de opciones
    cout << "\n\nMenu de opciones" <<
    "\n0. Salir" <<
    "\n1. Consultar video" <<
    "\n2. Calificar un video  " <<
    "\n Teclea la opcion: ";
    cin >> opcion;
    return opcion;
    
}

int elegirMostrar() {
    int opcion1;
    
    //imprimir menu de opciones
    cout << "\n\n ¿Cual? " <<
    "\n0. Salir" <<
    "\n1. serie" <<
    "\n2. pelicula" <<
    "\n Teclea la opcion: ";
    cin >> opcion1;
    return opcion1;
    
}

int elegirCalificar() {
    int opcion2;
    
    //imprimir menu de opciones
    cout << "\n\n ¿Cual? " <<
    "\n0. Salir" <<
    "\n1. . serie" <<
    "\n2. . pelicula" <<
    "\n Teclea la opcion: ";
    cin >> opcion2;
    return opcion2;
    
}

// opciones del menu
int main(){
    //Constructor sin parámetro de calificación
   // Video evento1("pelicula", "avengers", "ciencia ficcion", 2015, 160);
    //Constructor recibiendo todos los valores
   // Video evento("pelicula", "avengers", "ciencia ficcion", 80, 2015, 160);
    
    Video * vector [5];
   
    
    vector[0] = new Pelicula(3, "pelicula", "avengers", "ciencia ficcion", 80, 160, 250);
    vector[1] = new Pelicula (5,"pelicula", "la la land", "romance", 90, 140, 340);
    vector[2] = new Serie (30, "serie", "hmiym", "comedia romantica", 90, 2003, 9);
    vector[3] = new Serie (180, "serie", "friends", "comedia", 80, 1998, 7);
    vector[4] = new Serie(70, "serie", "that 70 show", "comedia", 100, 1990, 12);
    
    int opcion, opcion1= 0, opcion2, opc;
    do{
        opcion= menu();
        
        switch (opcion){
            case 0:
                //opcion para salir del while
                cout << "Gracias por usar el programa \n";
                break;
                //caso para Consultar video
            case 1:
                //al hacer este demostrara el primero constructor y el segundo que trae el valor de calificacion (a este que trae calificacion si despues trae la funcion califica el video, se cambiara su calificacion
                //
             //   cout << "\n Constructor sin parámetro de calificación";
               // evento1.muestraDatos();
             //   cout << "\n Constructor recibiendo todos los valores";
              //  evento.muestraDatos();
                do{
                    opcion2 = elegirMostrar();
                    switch (opcion2){
                        case 0:
                            cout << "Gracias por usar el programa \n";
                            break;
                        case 1:
                            cout << "øDe cual de las series desea ver la informacion?" << endl;
                            cout << "1.- Serie 1" << endl;
                            cout << "2.- Serie 2" << endl;
                            cout << "3.- Serie 3" << endl;
                            cin >> opc;
                            if (opc == 1){
                                vector[2] -> muestraDatos();
                            }
                            if (opc == 2){
                                vector[3] -> muestraDatos();
                            }
                            if (opc == 3){
                                vector[4] -> muestraDatos();
                            }
                            break;
                        case 2:
                            cout << "øDe cual pelicula desea ver la informacion?" << endl;
                            cout << "1.- Pelicula 1" << endl;
                            cout << "2.- Pelicula 2" << endl;
                            cin >> opc;
                            if (opc == 1){
                                vector[0] -> muestraDatos();
                            }
                            if (opc == 2){
                                vector[1] -> muestraDatos();
                            }
                            break;
                        
                        default:
                            cout << "Opcion incorrecta\n";
                            break;
                        break;
                    }}while (opcion2!= 0);
                

                //Calificar video
            case 2:
                //funcion de calificar el video, que modificara mi constructor
                //
               // evento.calificaVideo();
                do{
                    opcion1 = elegirCalificar();
                    switch (opcion1){
                        case 0:
                            cout << "Gracias por usar el programa \n";
                            break;
                        case 1:
                            cout << "øCual de las series desea calificar?" << endl;
                            cout << "1.- Serie 1" << endl;
                            cout << "2.- Serie 2" << endl;
                            cout << "3.- Serie 3" << endl;
                            cin >> opc;
                            if (opc == 1){
                                vector[2] -> calificaVideo();
                            }
                            if (opc == 2){
                                vector[3] -> calificaVideo();
                            }
                            else{
                                vector[4] -> calificaVideo();
                            }
                            break;
                        case 2:
                            cout << "øQue pelicula desea calificar?" << endl;
                            cout << "1.- Pelicula 1" << endl;
                            cout << "2.- Pelicula 2" << endl;
                            cin >> opc;
                            if (opc == 1){
                                vector[0] -> calificaVideo();
                            }
                            else{
                                vector[1] -> calificaVideo();
                            }
                            break;
                       
                        default:
                            cout << "Opcion incorrecta\n";
                            break;
                    }}while (opcion1!= 0);
                break;
                
            default:
                cout << "Opcion incorrecta\n";
                break;
            break;
        } //fin del switch
    }while (opcion!= 0|| opcion1!=0);
    
    return 0;
  }
