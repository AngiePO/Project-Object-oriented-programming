//
//  Video.hpp
//  EvidenciaProyectoIntegradorEq11
//

#ifndef Video_hpp
#define Video_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Video{
    protected:
        string tipoVideo, nombreVideo, genero;
        int calificacion, anioLanzamiento, duracion;
        
    public:
        Video(string, string, string, int, int);
        Video(string, string, string, int, int, int);
        virtual void muestraDatos();
        virtual int calificaVideo();
};


class  Pelicula : public Video{
    private :
        int nominaciones;
    public:
        void  muestraDatos();
        Pelicula(int, string, string, string, int, int, int);
    
};



class Serie : public Video{
    private :
        int cantEpisodios;
    public:
        void  muestraDatos();
        Serie(int, string, string, string, int, int, int);
};


#endif /* Video_hpp */
