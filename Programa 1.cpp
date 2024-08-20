#include <iostream>
#include <cctype>

using namespace std;

int main(){
	string cadena;
	bool letras=true;
	bool numeros=true;
	
	cout<<"Ingresa una cadena de caracteres: ";
	getline(cin, cadena);
	
	for(char c:cadena){
		if(isalpha(c)){
			numeros=false;
		}else if(isdigit(c)){
			letras=false;
		}else{
			letras=false;
			numeros=false;
		}
	}
	if (letras){
		cout<<"La cadena solo contiene letras"<<endl;
	}else if (numeros){
		cout<<"La cadena solo contiene numeros"<<endl;
	}else{
		cout<<"La cadena contiene una combinacion de letras y digitos"<<endl;
	}
	return 0;
	}
