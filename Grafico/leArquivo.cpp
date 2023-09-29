#include <iostream>
#include <fstream>
#include <vector>

#include "leArquivo.hpp"

std::vector<std::string> le_arquivo() 
{
	std::ifstream mapaArquivo;
	mapaArquivo.open("map.txt");

	int quantidadeLinhas;
	mapaArquivo >> quantidadeLinhas;

	if (mapaArquivo.is_open()) {
		std::vector<std::string> linhasTotais;
		std::string linhaLida;
		std::cout << "Aberto" << std::endl;

		for (int i = 0; i < quantidadeLinhas; i++)
		{
			mapaArquivo >> linhaLida;
			linhasTotais.push_back(linhaLida);
			
		}
		mapaArquivo.close();
		return linhasTotais;
		
	}

	else {
		std::cout << "Nao foi possivel abrir o arquivo" << std::endl;
		exit(1);

	}

	

}