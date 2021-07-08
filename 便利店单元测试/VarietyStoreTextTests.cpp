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
	
	VarietyStore app;
	app.addItem(std::make_shared<Item>("面包", 10, 20));
	app.addItem(std::make_shared<Maotai>("茅台", 2, 0));
	app.addItem(std::make_shared<Item>("方便面", 5, 7));
	app.addItem(std::make_shared<Diamond>("钻戒", 0, 80));
	app.addItem(std::make_shared<Diamond>("钻戒", -1, 80));
	app.addItem(std::make_shared<Kimi>("奇异果", 15, 20));
	app.addItem(std::make_shared<Kimi>("奇异果", 10, 49));
	app.addItem(std::make_shared<Kimi>("奇异果", 5, 49));
	app.addItem(std::make_shared<Banana>("香蕉", 3, 6));

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