
#include <fstream>
#include <iomanip>
#include <iostream>
#include "txt.h"
#include "list.h"
using namespace std;

struct txt * readStr(ifstream& inFile) {
	struct txt *str = (struct txt*)malloc(sizeof(struct txt));
	char c, *t = (char*)malloc(sizeof(char));
	int len = 0;
	inFile >> c;
	while (c != '\n'&&c != '\0' && !inFile.eof()) {
		len++;
		t = (char*)realloc(t, sizeof(char)*(len + 1));
		t[len - 1] = c;
		//cout << "_______READING________" << c << endl;
		inFile >> c;
	}
	setLen(str, len);
	setA(str, t);
	for (int i = 0; i < len; i++) cout << t[i];
	return str;
}

struct elem *readText(char* fileName, struct txt*&field) {
	ifstream inFile(fileName, ios::in);
	inFile.unsetf(ios::skipws);
	field = readStr(inFile);
	struct elem *h = init(readStr(inFile)),
		*tmp = NULL,
		*htmp = h;
	while (!inFile.eof()) {
		tmp = (struct elem*)malloc(sizeof(struct elem));
		setField(tmp, readStr(inFile));
		setNext(htmp, tmp);
		setNext(tmp, NULL);
		htmp = tmp;
	}
	inFile.close();
	return h;
}