#include <iostream>

using namespace std;

//funciones..
int numPrimo(int);
int SumaMultiplo(int,int,int);
bool NumMultiplo(int,int);

int main(){
	int opcion = 0;
	while(opcion!=4){
		cout<<"Ingrese la opcion del menu que desea ejecutar:\n";
		cout<<"       MENU \n";
		cout<<"1) ejercicio 1 \n";
		cout<<"2) ejercicio 2 \n";
		cout<<"3) ejercicio 3 \n";
		cout<<"4) SALIR \n";
		cin>> opcion;
		switch(opcion){
			case 1:{
				int num=0;
				cout<<"Ingrese el numero que desea verificar: \n";
				cin>> num;
				int suma = numPrimo(num);
				cout<<"LA SUMA ES: "<< suma<<"\n";
				   }//case1
			break;
			case 2:{
				int numA=0;
				int numB=0;
				int numN=0;
				cout<<"Ingrese el valor 'A': \n";
				cin>>numA;
				cout<<"Ingrese el valor 'B'";
				cin>>numB;
				cout<<"Ingrese el valor 'N': \n";
				cin>>numN;
				int suma = SumaMultiplo(numA,numB,numN);
				cout<<"La Suma es: "<<suma;
				   }//case2
			break;
			case 3:{

			}//case 3
			break;
		}//switch
	}//while
	return 0;
}//main

int numPrimo(int numero){
	int suma=0;
	for(int i=1;i<=numero;i++){
	int prueba=0;
		for(int j=1;j<=i;j++){
			if(i % j==0){
				prueba++;
			}
		}
		if(prueba == 2){
			suma+=i;
		}
	}
	return suma+1;
}

int SumaMultiplo(int a,int b, int n){
	int suma=0;
	for(int i=1;i<=n;i++){
		if(NumMultiplo(a,i)==true||NumMultiplo(b,i)==true){
			if(NumMultiplo(a,i)==true){
				suma+=i;
				cout<<"Se Sumo el numero: "<<i<<"\n";
			}else{
				suma+=i;
				cout<<"Se sumo el numero: "<<i<<"\n";
			}
		}
	}
	return suma;
}

bool NumMultiplo(int Num, int iteracion){
	bool prueba=true;
	if(iteracion % Num == 0){
		prueba=true;
	}else{
		prueba = false;
	}
	return prueba;
}

