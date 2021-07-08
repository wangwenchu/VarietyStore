#include <string>
#include <vector>

using namespace std;

/**
 * @author jarenzhang
 * 俊哥说别动他的代码
 */
class Item
{
public:
    string name;
    int sellDeadline;
    int price;
    Item(string name, int sellDeadline, int price) : name(name), sellDeadline(sellDeadline), price(price)
    {}
    virtual void updateItem();
};


class VarietyStore
{
public:
    //vector<Item>& items;
     // VarietyStore(vector<Item>& items);
    vector<shared_ptr<Item>> items;
    VarietyStore();
 
    void addItem(std::shared_ptr<Item> rhs);
    void updateItems();
private:
	void updateSingleItem(int idx);
};


class Maotai :public Item { //茅台
public:
    Maotai(string name, int sellDeadline, int price) :Item(name, sellDeadline, price) {}
    virtual void updateItem() override;
};

class Kimi :public Item {  //奇异果
public:
    Kimi(string name, int sellDeadline, int price) :Item(name, sellDeadline, price) {}
    virtual void updateItem() override;
};

class Diamond :public Item {  //钻石
public:
    Diamond(string name, int sellDeadline, int price) :Item(name, sellDeadline, price) {}
    virtual void updateItem() override;
};


class Banana :public Item { //香蕉
public:
    Banana(string name, int sellDeadline, int price) :Item(name, sellDeadline, price) {}
    virtual void updateItem() override;
};