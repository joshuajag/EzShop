#pragma once 

#include "inventory.h"
#include <vector>

using namespace std;

class inventoryList
{
	public:
		inventoryList(void);
		~inventoryList(void);
		bool inventoryList::openInventory(string fileName);
		void addInventory(string name, int size);
		void removeInventory(string name, int size);
		void sortInventory();
		void saveInventory(string fileName);
		void viewInventory();
		void loadInventory();
	private:
		inventory* arrList;
		int arrIndex;
		int arrSize;
};

