/* Trabalho-prova final modularidade
   Especifica��o 7-8 - L�der: Let�cia
   Nomes: Let�cia - Ot�vio - Anne Carolina - Ant�nio H.
   
   Arquivo: main.cpp
*/
#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

#include "Sistema1.h"
#include "Sistema2.h"
#include "Acoplar.h"


int main(){

    Acoplar coupling;

    coupling.Solve();
 	coupling.Print();

    return 0;
}
