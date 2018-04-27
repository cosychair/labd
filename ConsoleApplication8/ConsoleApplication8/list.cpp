
#include "txt.h"
#include "list.h"
#include <iostream>

void setField(struct elem *&lst, struct txt* field) {
	lst->field = field;
}

void setNext(struct elem *&lst, struct elem* next) {
	lst->next = next;
}

struct elem* getNext(struct elem *&lst) {
	return lst->next;
}

struct txt* getField(struct elem *&lst) {
	return lst->field;
}

struct elem* init(struct txt *field) {
	struct elem *lst;
	lst = (struct elem*)malloc(sizeof(struct elem));
	setField(lst, field);
	setNext(lst, NULL);
	return lst;
}

void deletelst(struct elem* &h) {
	struct elem *tmp;
	while (h != NULL) {
		tmp = getNext(h);
		free(h);
		h = tmp;
	}
}

int compareWthField(struct txt*& f1, struct txt *&f2) {
	//std::cout << "___COMPARE\n";
	int a = 0;
	if (getLen(f1) > getLen(f2))
		a = getLen(f1);
	else
		a = getLen(f2);
	if (getLen(f1) == getLen(f2)) {
		//std::cout << getLen(f2);
		for (int i = 0; i < a; i++) if (f1->a[i] != f2->a[i])return 0;
	}
	else return 0;
	return 1;
}

struct elem* inElem(struct elem *h, struct txt* field) {
	struct elem *tmp = h, *prev, *last, *news, *g;
	int i = 0;
	while (tmp != NULL && !compareWthField(tmp->field, field)) {
	
		prev = tmp;
		tmp = getNext(tmp);
		i++;
		//std::cout << "NEXT";
	}
	//std::cout << "ELEM:" << i;
	
	struct txt *str = (struct txt*)malloc(sizeof(struct txt));
	char c[20] = { '`' }, *t = (char*)malloc(sizeof(char));
	for (int i = 0; i < 20; i++) {
		c[i] = '`';
	}
	std::cout << "\nIn elem:";
	std::cin >> c;

	i = 0;
	while (c[i] != '`') {
		i++;
	}
	--i;

	int len = 0;
	t = (char*)malloc(sizeof(char)*i);
	//inFile >> c;
	for (; len < i; len++) {


		t[len] = c[len];

	}

	for (int j = 0; j < i; j++) {
		std::cout << t[j];
	}
	setLen(str, len);
	setA(str, t);
	news = (struct elem*)malloc(sizeof(struct elem));
	setField(news, str);
	//std::cout << "ELEM:" << news->field->a[0];

	g = getNext(tmp);
	tmp->next = news;
	news->next = g;
	/*g = prev;
	prev->next = news;
	news->next = tmp;*/
	
	//news->next = g;
	//tmp = news;
	
	return h;
}

