//
//  Video.cpp
//  EvidenciaProyectoIntegradorEq11
//

#include "Video.hpp"
using namespace std;

Video::Video(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
    
};

Video::Video(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    calificacion = _calificacion;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
};

void Video::muestraDatos(){
    cout << "\n El tipo de video es: " << tipoVideo << endl;
    cout << "El nombre es: " << nombreVideo << endl;
    cout << "Género: " << genero << endl;
    cout << "Año de lanzamiento: " << anioLanzamiento << endl;
    cout << "Duración: " << duracion << endl;
    cout << "Calificación: " << calificacion << endl;
    
};

int Video::calificaVideo(){
    cout << "Ingresa calificación al video: " ;
    cin >> calificacion;
    return calificacion;
};

Pelicula::Pelicula(int _nominaciones, string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion): Video( _tipoVideo, _nombreVideo, _genero, _calificacion, _anioLanzamiento, _duracion){
        nominaciones = _nominaciones;
}

void Pelicula :: muestraDatos(){
    Video :: muestraDatos();
    cout << "Nominaciones: " << nominaciones << endl;
    
};


Serie::Serie(int _cantEpisodios, string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion) : Video( _tipoVideo, _nombreVideo, _genero, _calificacion, _anioLanzamiento,  _duracion) {
    cantEpisodios = _cantEpisodios;
}


void Serie :: muestraDatos(){
    Video :: muestraDatos();
    cout << "Cantidad de episodios: " << cantEpisodios << endl;
    
};
