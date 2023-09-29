#include "verificaCaracter.hpp"



std::map<int, std::map<int, char>> verificaCaracter(const std::vector<std::string>& lista_linhas, std::map<int, std::map<int, char> > m) {


	int flag = 0;
	int coluna = 0;

	for (int linha = 0; linha < lista_linhas.size(); linha++) {
		for (char caracter : lista_linhas[linha]) {
			m[linha][coluna] = caracter;
			std::cout << "m[" << coluna << "][" << linha << "] = " << m[linha][coluna] << std::endl << std::endl;
			coluna++;

		}

		if (flag == 1) {
			std::cout << "Achaste" << std::endl;
			break;
		}
		coluna = 0;
	}
	return m;

}