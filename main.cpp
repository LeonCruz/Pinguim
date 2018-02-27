#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Muda essa variável 'gelinho' pra um nome mais representativo
int lado1[] = {1, 2, 3, 4, 5, 6}, gelinho[2], lado2[6];
bool vazio;

// Tem que saber se esse número aleatório é maior que o tamanho do vetor
// E tem que ter outra função que escolhe quantos pinguins ele vai levar 1 ou 2. 
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
	
	// Aqui tu tem que testar o número de opções, 1 ou 2, 
    // Se for 1, vai ter que chamar a função que escolhe um pinguim aleatóriamente, se for de acordo com as regras, move o pingum.
	// Se for 2, vai ter que chamar a função que escolhe dois pinguins aleatóriamente, se for de acordo com as regras, move os pinguins 
	int posicao = posAleatorio();
	
	
	
	return 0;
}
