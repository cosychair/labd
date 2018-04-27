
#include "txt.h"

unsigned getLen(struct txt*& str) {
	return str->len;
}

char* getA(struct txt*& str) {
	return str->a;
}

void setLen(struct txt*& str, unsigned len) {
	str->len = len;
}

void setA(struct txt*& str, char*a) {
	//str->a = (char*)malloc(sizeof(char)*getLen(str));
	str->a = a;
}