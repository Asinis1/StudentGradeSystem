#ifndef FILE_H
#define FILE_H
#include "linkedlist.h"

void saveToFile(LinkedList& list, const char* filename);
void loadFromFile(LinkedList& list, const char* filename);

#endif
