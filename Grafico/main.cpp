#include <iostream>
#include <string>

#include "imprimirMapa.hpp"
#include "movimentaX.hpp"
#include "leArquivo.hpp"

using namespace std;

int main()
{
	std::vector<std::string> lista_linhas = le_arquivo();

	imprimirGrafico(lista_linhas);

	verificaCaracter(lista_linhas);

	movimentaX(lista_linhas);  



}