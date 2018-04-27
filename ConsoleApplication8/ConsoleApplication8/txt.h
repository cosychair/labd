#pragma once
#ifndef TXT_H
#define TXT_H
#include <iostream>
struct txt {
	char*a;
	unsigned len;
};

unsigned getLen(struct txt*& str);
char* getA(struct txt*& str);
void setLen(struct txt*& str, unsigned len);
void setA(struct txt*& str, char*a);

#endif