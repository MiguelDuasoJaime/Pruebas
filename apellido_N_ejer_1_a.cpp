#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int cuenta_letras(char *puntn){
    int c=0;
    int fil;
    while(*(puntn+c)!='\0'){
        c++;    
    }
    return c;
}
    
int main(){
	int 4;
    	char *palabra[4];
	char n1[10];
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
	int pr;
	cout<<"Que palabra quieres obtener? (del 1 al 4): ";
	cin>>pr;
	int p2;
	cout<<palabra[pr-1]<<endl;
	cout<<"Que letra quieres obtner?: ";
	cin>>p2;
	cout<<*(*(palabra+pr-1)+p2-1);
	
	return 0;
}
