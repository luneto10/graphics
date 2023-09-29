#include <iostream>

#include "imprimirMapa.hpp"
#include "leArquivo.hpp"


void imprimirGrafico(std::vector<std::string>& lista_linhas)
{
	for (int i = 0; i < lista_linhas.size(); i++)
	{
		std::cout << lista_linhas[i] << std::endl;
	}
	

	
}

void imprimirGraficoCaracter(std::vector<std::string>& lista_linhas, std::map<int, std::map<int, char>>& m) {
	int flag = 0;
	for (int linha = 0; linha < lista_linhas.size(); linha++) {
		for (int j = 0; j < 55; j++) {
			std::cout << m[linha][j];
			flag = 1;
		}
		std::cout << std::endl;
	}
}


