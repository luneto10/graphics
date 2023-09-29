#include <fstream>
#include <iostream>
#include <map>
#include<tuple>

#include "movimentaX.hpp"	
#include "leArquivo.hpp"
#include "imprimirMapa.hpp"
#include "condicoesMovimento.hpp"

std::map<int, std::map<int, char> > m; 

std::map<int, std::map<int, char>> verificaCaracter(const std::vector<std::string>& lista_linhas) {

	
	int flag = 0;
	int coluna = 0;

	for (int linha = 0; linha < lista_linhas.size(); linha++) {
		for (char caracter : lista_linhas[linha]) {
			m[linha][coluna] = caracter;
			//std::cout << "m[" << coluna << "][" << linha << "] = " << m[linha][coluna] << std::endl << std::endl;
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

retornaJI acharXmapa(std::map<int, std::map<int, char>>& m) {
	int flag = 0;
	retornaJI retorno;
	for (int i = 0; i < 29; i++) {
		for (int j = 0; j < 55; j++) {
			if (m[i][j] == 'x') {
				retorno.y = i;
				retorno.x = j;
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			break;
		}
	}

return retorno;

}


void alterarPosicaoX(retornaJI& acharXmapa, std::map<int, std::map<int, char>>& m)
{
	retornaJI retorno;
	int coluna = 0;
	int linha;
	int flag = 0;
	

	if (m[retorno.x][retorno.y] == 'x')
	{
		m[retorno.x - 1][retorno.y] = (m[retorno.x][retorno.y]);
	}


}


void movimentaX(std::vector<std::string>& lista_linhas)
{


	int posicaoX, posicaoY;
	int coluna;
	int linha;
	int flag = 0;
	posicaoY = 0;
	posicaoX = 0;
	


	std::cout << "O Boneco esta nas coordenadas X: " << posicaoX;
	std::cout << " e Y: " << posicaoY << std::endl;
	
	while (1)
	{		
		retornaJI retorno2;
		retorno2 = acharXmapa(m);

		char teclaApertada;
		std::cin >> teclaApertada;

		switch (teclaApertada)
		{

			//caso esquerda
		case 'a':
			if (posicaoX < -25) {
				break;
			}
			else
			{
				posicaoX--;

				condicaoParaEsquerda(retorno2, m);

				retorno2.x--;
				m[retorno2.y][retorno2.x] = 'x';
				break;
			}

			//caso direita
		case 'd':

			if (posicaoX > 25) {
				break;
			}
			else
			{
				posicaoX++;

				condicaoParaDireita(retorno2, m);

				retorno2.x++;
				m[retorno2.y][retorno2.x] = 'x';
				break;
			}

			//caso subida
		case 'w':
			if (posicaoY > 11) {
				break;
			}
			else
			{
				posicaoY++;

				condicaoParaCima(retorno2, m);

				retorno2.y--;
				m[retorno2.y][retorno2.x] = 'x';
				break;
			}


			//caso baixo
		case 's':
			if (posicaoY < -14) {
				break;
			}
			else
			{
				posicaoY--;

				condicaoParaBaixo(retorno2, m);
				
				retorno2.y++;
				m[retorno2.y][retorno2.x] = 'x';
				break;
			}
		}

		imprimirGraficoCaracter(lista_linhas, m);

		std::cout << "O Boneco esta nas coordenadas X: " << posicaoX;
		std::cout << " e Y: " << posicaoY << std::endl;

	}
}





