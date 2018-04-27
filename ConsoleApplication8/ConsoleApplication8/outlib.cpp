
#include "txt.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include "list.h"
using namespace std;



void clearFile(char* fileName) {
	ofstream outFile(fileName, ios::out);
	outFile.close();
}

void print(char* fileName, char* text) {
	ofstream outFile(fileName, ios::app);
	outFile << "\n" << text << endl;
	outFile.close();
}

void printStr(char* fileName, struct txt *str) {
	ofstream outFile(fileName, ios::app);
	for (int i = 0; i < getLen(str); i++) outFile << str->a[i];
	outFile << endl;
	outFile.close();
}

void printStrInFile(std::ofstream& outFile, struct txt *str) {
	for (int i = 0; i < getLen(str); i++) outFile << str->a[i];
	outFile << "---->" << endl;
}

void printListInFile(char* fileName, struct elem* h) {
	ofstream outFile(fileName, ios::app);
	outFile << "--LIST---OUTPUT--" << endl;
	if (h != NULL) {
		while (h != NULL) {
			printStrInFile(outFile, getField(h));
			h = getNext(h);
		}
	}
	else
		outFile << "LIST IS EMPTY" << endl;
	outFile.close();
}
