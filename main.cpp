#include <iostream>
#include <vector>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#define MAX 30
#include "Genoma.h"
#include "Genoma.cpp"




//using namespace std;

using std::string;
using std::vector;
using std::fstream;

typedef vector<vector<char>> vectores;
typedef vector<string> vecS;

void ayuda();
int comando(string comand);


int main()
{
    int op;
    string comand="";
    string nombrear ="";

    fstream flujo;
    vectores secuencia;
    vecS descripciones;

    Genoma<char> genoma_1;

    while(op!=0){


        std::cout<<std::endl<<"\n->";
        std::cin>>comand;

        op = comando(comand);

        switch(op){

            case 0: // salir
            break;

            case 1: // nmuestra los comandos
                ayuda();
            break;

            case 2: // cargar archivo
                nombrear ="";
                std::cout<<std::endl<<"->$cargar->"; // auqi va el nombre del archivo
                std::cin>>nombrear;

                genoma_1.guardar(nombrear,secuencia,descripciones,flujo);



            break;

            case 3: //listar secuencias

            break;

            case 4: // histograma
                std::cout<<std::endl<<"->$histograma->"; // aqui va la descripcion del histograma

            break;

            case 5: //limpia pantalla
                system("cls");
            break;

            case 6: // guarda el archivo
                std::cout<<std::endl<<"->$guardar->"; // aqui va el nombre de archivo

            break;

            case 7: // codificar archivo
                std::cout<<std::endl<<"->$codificar->"; // aqui va el nombre de archivo .fabin

            break;

            case 8: // decodifica el archivo
                std::cout<<std::endl<<"->$decodificar->"; // aqui va el nombre de archivo .fabin

            break;

            case 9: // ver la ruta mas corta
                std::cout<<std::endl<<"->$ruta_mas_corta->"; // aqui va la descxripcion de la secuencia

            break;

            case 10: // base remota
                std::cout<<std::endl<<"->$base_remota->"; //aqui va la descripcion de la secuencia

            break;

            case 11: // instruccion de cargar
                std::cout<<std::endl<<"para utilizar el comando cargar primero ingrese el comando $cargar"; // aqui va la descripcion de como funciona
                std::cout<<std::endl<<"luego de entrara dentro del apartado de cargar en el cual escribira el nombre del archivo";
                std::cout<<std::endl<<"junto a la extencion de este, ejemplo: ->$cargar->prueba.fa ";
            break;

            case 12: // instruccion de listar secuencia
                std::cout<<std::endl<<"--"; // aqui va la descripcion de como funciona
            break;

            case 13: // instruccion de histograma
                std::cout<<std::endl<<"--"; // aqui va la descripcion de como funciona
            break;

            case 14: // instruccion de guardar
                std::cout<<std::endl<<"--"; // aqui va la descripcion de como funciona
            break;

            case 15: // instruccion de codificar
                std::cout<<std::endl<<"--"; // aqui va la descripcion de como funciona
            break;

            case 16: // instruccion de decodificar
                std::cout<<std::endl<<"--"; // aqui va la descripcion de como funciona
            break;

            case 17: // instruccion de ruta mas corta
                std::cout<<std::endl<<"--"; // aqui va la descripcion de como funciona
            break;

            case 18: // instruccion de base mas corta
                std::cout<<std::endl<<"--"; // aqui va la descripcion de como funciona
            break;

            default:
                std::cout<<std::endl<<"el comando es incorrecto selccione el comando <$ayuda> para conocer la lista de comandos\n";
            break;
        }

    }






    std::cout<<std::endl<<"";
    std::cout<<std::endl<<"Fin del programa :)";
    std::cout<<std::endl<<"";

    return 0;
}

int comando(string comand){

    if(comand=="$sair"){return 0;}
    if(comand=="$ayuda"){return 1;}
    if(comand=="$cargar"){return 2;}
    //if(comand=="$conteo"){return 3;}
    if(comand=="$listar_secuencias"){return 3;}
    if(comand=="$histograma"){return 4;}
    if(comand=="$cls"){return 5;}
    //if(comand=="$es_subsecuencia"){return 7;}
    //if(comand=="$enmascarar"){return 8;}
    if(comand=="$guardar"){return 6;}
    if(comand=="$codificar"){return 7;}
    if(comand=="$decodificar"){return 8;}
    if(comand=="$ruta_mas_corta"){return 9;}
    if(comand=="$base_remota"){return 10;}
    if(comand=="$ayuda_cargar"){return 11;}
    if(comand=="$ayuda_listar_secuencias"){return 12;}
    if(comand=="$ayuda_histograma"){return 13;}
    if(comand=="$ayuda_guardar"){return 14;}
    if(comand=="$ayuda_codificar"){return 15;}
    if(comand=="$ayuda_decodificar"){return 16;}
    if(comand=="$ayuda_ruta_mas_corta"){return 17;}
    if(comand=="$ayuda_base_remota"){return 18;}

    else{return 20;}

}



void ayuda(){

    std::cout<<std::endl<<"\t\tLISTA DE COMANDOS";
    std::cout<<std::endl<<"$cls";
    std::cout<<std::endl<<"$ayuda";
    std::cout<<std::endl<<"$salir";
    std::cout<<std::endl<<"$cargar";
    //std::cout<<std::endl<<"$conteo";
    std::cout<<std::endl<<"$listar_secuencias";
    std::cout<<std::endl<<"$histograma";
    //std::cout<<std::endl<<"$es_subsecuencia";
    //std::cout<<std::endl<<"$enmascarar";
    std::cout<<std::endl<<"$guardar";
    std::cout<<std::endl<<"$codificar";
    std::cout<<std::endl<<"$decodificar";
    std::cout<<std::endl<<"$ruta_mas_corta";
    std::cout<<std::endl<<"$base_remota";
    std::cout<<std::endl<<"$ayuda_comando (comando que se desea conocer)";

    /*
    std::cout<<std::endl<<"$ayuda_cargar";
    std::cout<<std::endl<<"$ayuda_listar_secuencias";
    std::cout<<std::endl<<"$$ayuda_histograma";
    std::cout<<std::endl<<"$$ayuda_guardar";
    std::cout<<std::endl<<"$ayuda_codificar";
    std::cout<<std::endl<<"$ayuda_decodificar";
    std::cout<<std::endl<<"$ayuda_ruta_mas_corta";
    std::cout<<std::endl<<"$ayuda_base_remota"; */

}

