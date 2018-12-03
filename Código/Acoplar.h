#ifndef ACOPLAR_H
#define ACOPLAR_H
/* Trabalho-prova final modularidade
   Especifica��o 7-8 - L�der: Let�cia
   Nomes: Let�cia - Ot�vio - Anne Carolina - Ant�nio H.
   
   Arquivo: Acoplar.h
*/
#include "Sistema1.h"
#include "Sistema2.h"
//--------------------------------------------------
// Declara��o de classe Acoplar.
//--------------------------------------------------

class Acoplar{
public:
	vector<double> Xn , Yn , Zn, Xsn, Ysn, Zsn;
	void Solve();
	void Print();
	
};

//--------------------------------------------------
// Defini��o de classe Acoplar.
//--------------------------------------------------

void Acoplar::Solve(){
//primeiro sistema
    Sistema1 s1;
    s1.InitFuncs();
    Xn = s1.getX();
    Yn = s1.getY();
    Zn = s1.getZ();
    
//segundo sistema
	Sistema2 s2;
    s2.InitFuncs(Xn,Zn);
    Xsn = s2.getX();
    Ysn = s2.getY();
    Zsn = s2.getZ();

}
void Acoplar::Print(){

    int tam = Xn.size();
    	cout << "N Iteracao  |   [Sistema 1]   >   [Sistema 2] \n";
    for(int i = 0 ; i < tam ; i++){
    
        cout << i << " = [" << Xn[i] << ", " << Yn[i] << ", " << Zn[i] << "]" << " > [" << Xsn[i] << ", " << Ysn[i] << ", " << Zsn[i] << "]\n";
    }

}
#endif



