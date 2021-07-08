#include "pch.h"
#include "VarietyStore.h"

void Item::updateItem()
{
	sellDeadline -= 1;
	if (price > 0) {
		price -= 1;
	}

	if (sellDeadline < 0) {
		if (price > 0) {
			price -= 1;
		}
	}
}


VarietyStore::VarietyStore()
{
	items.clear();
}

void VarietyStore::addItem(shared_ptr<Item>rhs)
{
	items.push_back(rhs);
}

void VarietyStore::updateItems()
{
	for (int i = 0; i < items.size(); ++i) {
		updateSingleItem(i);
	}
}

void VarietyStore::updateSingleItem(int idx)
{
	items[idx]->updateItem();
}


void Maotai::updateItem()
{
	if (price < 50) {
		price += 1;
	}
	sellDeadline -= 1;
	if (sellDeadline < 0) {
		if (price < 50) {
			price += 1;
		}
	}
}

void Kimi::updateItem()
{
	
	if (price < 50) {
		price += 1;
	}
	if (sellDeadline <= 10) {
		if (price < 50) {
			price += 1;
		}
	}
	if (sellDeadline <= 5) {
		if (price < 50) {
			price += 1;
		}
	}
	sellDeadline -= 1;
	if (sellDeadline < 0) {
		price = 0;
	}
	
}

void Diamond::updateItem()  //什么也不做
{

}

void Banana::updateItem()
{
	sellDeadline -= 1;
	if (price > 1) {
		price -= 2;
	}
	else if(price > 0){
		price -= 1;
	}
}
