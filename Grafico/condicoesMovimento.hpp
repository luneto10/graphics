#pragma once
#include <map>
#include <iostream>
#include "movimentaX.hpp"

void condicaoParaCima(retornaJI& acharXmapa, std::map<int, std::map<int, char>>& m);
void condicaoParaBaixo(retornaJI& retorno2, std::map<int, std::map<int, char>>& m);
void condicaoParaDireita(retornaJI& retorno2, std::map<int, std::map<int, char>>& m);
void condicaoParaEsquerda(retornaJI& retorno2, std::map<int, std::map<int, char>>& m);