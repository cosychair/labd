#pragma once
#ifndef LST_H
#define LST_H
#include "txt.h"
struct elem {
	struct txt* field;
	elem * next;
};
struct elem* init(struct txt *field);
void deletelst(struct elem* &lst);
int compareWthField(struct txt* &f1, struct txt *&f2);
struct elem* inElem(struct elem *h, struct txt *field);
struct elem* getNext(struct elem *&lst);
struct txt* getField(struct elem *&lst);
void setField(struct elem* &lst, struct txt* field);
void setNext(struct elem *&lst, struct elem * next);
#endif