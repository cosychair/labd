#pragma once
#ifndef OUT_H
#define OUT_H
#include "txt.h"
#include "list.h"
#include <fstream>

void print(char* fileName, char* text);
void clearFile(char* fileName);
void printStr(char* fileName, struct txt *str);
void printStrInFile(std::ofstream &outFile, struct txt *str);
void printListInFile(char* fileName, struct elem* h);
#endif