#include "list.h"
#include "txt.h"
#include "outlib.h"
#include "rdlib.h"
char* out = "protocol.txt";
int main()
{
	struct elem *h = (struct elem*)malloc(sizeof(struct elem));
	struct txt *field = (struct txt*)malloc(sizeof(struct txt));
	
	h = readText("in.txt", field);
	clearFile(out);
	print(out, "---FIELD---");
	printStr(out, field);
	printListInFile(out, h);
	h = inElem(h, field);
	printListInFile(out, h);
	deletelst(h);
	print(out, "---LIST WAS DELETED---");
	printListInFile(out, h);
	system("pause");

	return 0;
}

