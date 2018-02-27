#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int lado1[] = {1,2,3,4,5,6}, gelinho[2], lado2[6];
bool vazio;

int posAleatorio(){
	int x;
	srand(time(0));
	x = rand() % 5;
	
	return x;
}

void resetGame (){
	int lado1[] = {1,2,3,4,5,6}, gelinho[2], lado2[6];
	cout << "\n\nResetou o Game!\n";
}

void mostrarVetor(){
	cout << "\nLado 1 = {";
	for(int i=0; i<=5; i++){
		cout << " " << lado1[i] << " ";
	}
	cout << "}\n";
	
	cout << "\nGelinho = {";
	for(int i=0; i<=1; i++){
		cout << " " << gelinho[i] << " ";
	}
	cout << "}\n";
	
	cout << "\nLado 2 = {";
	for(int i=0; i<=5; i++){
		cout << " " << lado2[i] << " ";
	}
	cout << "}\n\n==================================\n\n";
}

int main(int argc, char** argv) {
	
	cout << "Vetores Inciciais:\n";
	mostrarVetor();
	cout << "\n\n==================================\n\n";
	
	int posicao = posAleatorio();

	do{
		if(lado1[posicao]%2==0){
			gelinho[0] = lado1[posicao];
			lado1[posicao] = NULL;
			mostrarVetor();
			resetGame();
		}else{
			gelinho[0] = lado1[posicao];
			gelinho[1] = lado1[posicao+1];
			lado1[posicao] = NULL;
			lado1[posicao+1] = NULL;
			mostrarVetor();
			lado2[posicao+1] = gelinho[1];
			gelinho[1] = NULL;
			mostrarVetor();
		}
	}while(vazio == false);
	
	return 0;
}
