#include "pch.h"
#include "VarietyStore.h"

#include <iostream>

using namespace std;

ostream& operator<<(ostream& s, Item* item)
{
	s << item->name << ", " << item->sellDeadline << ", " << item->price;
	return s;
}

/*
int fun()
{
	vector<Item> items;
	items.push_back(Item("面包", 10, 20));
	items.push_back(Item("茅台", 2, 0));
	items.push_back(Item("方便面", 5, 7));
	items.push_back(Item("钻戒", 0, 80));
	items.push_back(Item("钻戒", -1, 80));
	items.push_back(Item("奇异果", 15, 20));
	items.push_back(Item("奇异果", 10, 49));
	items.push_back(Item("奇异果", 5, 49));
	//TODO 香蕉 这个商品的管理逻辑还没有完成
	items.push_back(Item("香蕉", 3, 6));
	VarietyStore app(items);

	cout << "欢迎来到 8-12 便利店!" << endl;

	for (int day = 0; day <= 30; day++)
	{
		cout << "-------- 第 " << day << " 天 --------" << endl;
		cout << "名称, 保质期, 价钱" << endl;
		for (vector<Item>::iterator i = items.begin(); i != items.end(); i++)
		{
			cout << *i << endl;
		}
		//cout << endl;

		app.updateItems();
	}

}
*/

/*
int main() {
	Item *p1 = new Item("面包", 10, 20);
	auto *p2 = new Maotai("茅台", 2, 0);
	auto *p3 = new Item("方便面", 5, 7);
	auto *p4 = new Diamond("钻戒", 0, 80);
	auto *p5 = new Diamond("钻戒", -1, 80);
	auto *p6 = new Kimi("奇异果", 15, 20);
	auto *p7 = new Kimi("奇异果", 10, 49);
	auto *p8 = new Kimi("奇异果", 5, 49);
	auto* p9 = new Banana("香蕉", 3, 6);
	VarietyStore app;
	app.addItem(p1);
	app.addItem(p2);
	app.addItem(p3);
	app.addItem(p4);
	app.addItem(p5);
	app.addItem(p6);
	app.addItem(p7);
	app.addItem(p8);
	app.addItem(p9);

	cout << "欢迎来到 8-12 便利店!" << endl;

	for (int day = 0; day <= 30; day++)
	{
		cout << "-------- 第 " << day << " 天 --------" << endl;
		cout << "名称, 保质期, 价钱" << endl;
		for (auto i = app.items.begin(); i != app.items.end(); i++)
		{
			cout << *i << endl;
		}
		app.updateItems();
		cout << endl;
	}
}

*/