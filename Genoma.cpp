
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <fstream>
#include <cstring>

#include "Genoma.h"

typedef vector<vector<char>> vectores;
typedef vector<string> vecS;

using std::string;
using std::vector;
using std::fstream;
using std::iostream;

//unsing namespace std;

template <class T>
Genoma<T>::Genoma(){
}

template <class T>
Genoma<T>::~Genoma(){
}

template <class T>
void Genoma<T>::guardar(string nombrear, vectores &secuencias, vecS &descripciones,fstream &flujo){

    int i=0;

    if(nombrear == ""){
        std::cout<<std::endl<<"no digito ningun nombre de archivo";
    }
    else{

        flujo.open (nombrear, iostream::in);

        if(!flujo){
            std::cout<<std::endl<<"no se encuentra el archivo o no puede leerse";
        }
        else{
            char *linea = new char[1024];
			int cont = 0;
			flujo.getline(linea, 1024);
			while( !flujo.eof() ) {
				vector<char> v;
				secuencias.push_back(v);
				descripciones.push_back(linea);
				descripciones[cont].erase(0,1);

				flujo.getline(linea, 1024);

				while(linea[0] != '>' && !flujo.eof() ){
					i = 0;
					while(linea[i] != '\0'){
						secuencias[cont].push_back(linea[i]);
						i++;
					}
					flujo.getline(linea, 1024);
				}
				cont++;
			}
			if(cont == 0){
                std::cout<<std::endl<<nombrear<<"no contiene ninguna secuencia\n";
			}
			else if(cont > 1){
                std::cout<<std::endl<<cont<<"secuencias cargada correctamente desde "<<nombrear;
			}
			else{
                std::cout<<std::endl<<"\n1 secuencia cargada correctamente desde "<<nombrear;
			}

        }
    }

    //std::cout<<std::endl<<nombrear;

}
