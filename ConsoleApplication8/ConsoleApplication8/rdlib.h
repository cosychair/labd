#pragma once
#ifndef READ_H
#define READ_H
#include "list.h"
#include <fstream>
struct txt * readStr(std::ifstream &inFile);
struct elem *readText(char* fileName, struct txt*&field);//field ýëåìåíò äëÿ ïîèñêà ïî çàäàíèþ, ïåðâàÿ ñòðîêà
#endif
