#include "condicoesMovimento.hpp"

void condicaoParaCima(retornaJI& retorno2, std::map<int, std::map<int, char>>& m) {
	if (m[retorno2.y - 1][retorno2.x] == '|')
	{
		if (m[retorno2.y][retorno2.x - 1] == '-' || m[retorno2.y][retorno2.x + 1] == '-') {
			m[retorno2.y][retorno2.x] = '-';

		}
		else
		{
			m[retorno2.y][retorno2.x] = '|';

		}

	}

	if (m[retorno2.y - 1][retorno2.x] == '.') {
		if (m[retorno2.y][retorno2.x - 1] == '-' || m[retorno2.y][retorno2.x + 1] == '-') {
			m[retorno2.y][retorno2.x] = '-';


		}
		else
		{
			m[retorno2.y][retorno2.x] = '.';

		}
	}


	if (m[retorno2.y - 1][retorno2.x] == '-')
	{
		if (m[retorno2.y + 1][retorno2.x] == '|') {
			m[retorno2.y][retorno2.x] = '-';


		}
		else if (m[retorno2.y][retorno2.x + 1] == '.' && m[retorno2.y][retorno2.x - 1] == '.') {
			m[retorno2.y][retorno2.x] = '.';
		}
	}

	if (m[retorno2.y - 1][retorno2.x] == '-')
		if (m[retorno2.y + 1][retorno2.x] == '|') {
			m[retorno2.y][retorno2.x] = '|';

		}
		else if (m[retorno2.y][retorno2.x - 1] == '|' || m[retorno2.y][retorno2.x + 1] == '|')
		{
			m[retorno2.y][retorno2.x] = '.';
		}

}





void condicaoParaBaixo(retornaJI& retorno2, std::map<int, std::map<int, char>>& m) {
	if (m[retorno2.y + 1][retorno2.x] == '|')
	{
		if (m[retorno2.y][retorno2.x - 1] == '-' || m[retorno2.y][retorno2.x + 1] == '-') {
			m[retorno2.y][retorno2.x] = '-';

		}
		else
		{
			m[retorno2.y][retorno2.x] = '|';

		}

	}

	if (m[retorno2.y + 1][retorno2.x] == '.') {
		if (m[retorno2.y][retorno2.x - 1] == '-' || m[retorno2.y][retorno2.x + 1] == '-') {
			m[retorno2.y][retorno2.x] = '-';
		}
		else
		{
			m[retorno2.y][retorno2.x] = '.';
		}

	}
	if (m[retorno2.y + 1][retorno2.x] == '-' && m[retorno2.y - 1][retorno2.x] == '|')
	{
		m[retorno2.y][retorno2.x] = '|';
	}
	else if (m[retorno2.y + 1][retorno2.x] == '-')
	{
		m[retorno2.y][retorno2.x] = '.';
	}


	if (m[retorno2.y + 1][retorno2.x] == '-') {

	}
}



void condicaoParaDireita(retornaJI& retorno2, std::map<int, std::map<int, char>>& m) {
	if (m[retorno2.y][retorno2.x + 1] == '-' || m[retorno2.y][retorno2.x - 1] == '-') {
		m[retorno2.y][retorno2.x] = '-';
	}


	if (m[retorno2.y][retorno2.x + 1] == '.' || m[retorno2.y][retorno2.x - 1] == '.')
	{
		if (m[retorno2.y][retorno2.x + 1] == '-') {
			m[retorno2.y][retorno2.x] = '-';
		}
		else if (m[retorno2.y + 1][retorno2.x] == '.' || m[retorno2.y - 1][retorno2.x] == '.') {
			m[retorno2.y][retorno2.x] = '.';
		}
		else if (m[retorno2.y + 1][retorno2.x] == '|' || m[retorno2.y - 1][retorno2.x] == '|')
		{
			m[retorno2.y][retorno2.x] = '|';
		}
	}


	if (m[retorno2.y][retorno2.x + 1] == '|' || m[retorno2.y][retorno2.x - 1] == '|')
	{
		m[retorno2.y][retorno2.x] = '.';
	}
}




void condicaoParaEsquerda(retornaJI& retorno2, std::map<int, std::map<int, char>>& m) {
	if (m[retorno2.y][retorno2.x - 1] == '-') {
		m[retorno2.y][retorno2.x] = '-';
	}


	if (m[retorno2.y][retorno2.x - 1] == '.')
	{
		if (m[retorno2.y][retorno2.x] == '-') {
			m[retorno2.y][retorno2.x] = '-';
		}
		else if (m[retorno2.y - 1][retorno2.x] == '.' || m[retorno2.y + 1][retorno2.x] == '.') {
			m[retorno2.y][retorno2.x] = '.';
		}
		else if (m[retorno2.y - 1][retorno2.x] == '|')
		{
			m[retorno2.y][retorno2.x] = '|';
		}
		else if (m[retorno2.y - 1][retorno2.x] == '-' || m[retorno2.y + 1][retorno2.x] == '-')
		{
			m[retorno2.y][retorno2.x] = '|';
		}
	}


	if (m[retorno2.y][retorno2.x - 1] == '|')
	{
		m[retorno2.y][retorno2.x] = '.';
	}
}