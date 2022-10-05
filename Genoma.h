
#ifndef _GENOMA_
#define _GENOMA_

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <fstream>
#include <cstring>

using std::string;
using std::vector;
using std::fstream;

typedef vector<vector<char>> vectores;
typedef vector<string> vecS;

template <class T>

class Genoma{

    public:
        Genoma();
        ~Genoma();
        void guardar(string nombrear, vectores &secuencias, vecS &descripciones, fstream &flujo);
};



#endif
