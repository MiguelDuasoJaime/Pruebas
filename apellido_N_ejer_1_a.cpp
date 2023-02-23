#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int cuenta_letras(char *pnom){
    int cont=0;
    int fil;
    while(*(pnom+cont)!='\0'){
        cont++;    
    }
    return cont;
}
    
int main(){
	int 4;
    	char *palabra[4];
	char n1[10];
	int chck=0;
	for (int cnt=0;cnt<4;cnt++){
		cout<<"Introduce la palbra "<<cnt+1<<": ";
		cin>>n1;
		int len=cuenta_letras(n1);
		palabra[cnt]=(char *)malloc((len+1)*sizeof(char));
		for(int ct=0;ct<=len;ct++){
			*(*(palabra+cnt)+ct)=n1[ct];
			}
		cout<<"Cadena trasladada: "<<palabra[cnt]<<endl;
		cout<<"La longitud es: "<<len<<endl<<endl;
	}
	int ask;
	while (chck==0){
		cout<<"Que palabra quieres obtener? (del 1 al 4): ";
		cin>>ask;
		if (ask<1 || ask>4){
			cout<<"-Posicion no valida"<<endl;
		}
		else chck=1;
	}
	int pos;
	cout<<palabra[ask-1]<<endl;
	cout<<"Que letra quieres obtner?: ";
	cin>>pos;
	cout<<*(*(palabra+ask-1)+pos-1);
	
	return 0;
}
