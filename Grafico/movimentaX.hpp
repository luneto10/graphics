#pragma once
#include <vector>
#include <string>
#include <map>



void movimentaX(std::vector<std::string>& lista_linhas);
std::map<int, std::map<int, char>> verificaCaracter(const std::vector<std::string>& lista_linhas);



typedef struct retornaJI {
	int x;
	int y;

};

void alterarPosicaoX(retornaJI& acharXmapa, std::map<int, std::map<int, char>>& m);
retornaJI acharXmapa(std::map<int, std::map<int, char>>& m);






