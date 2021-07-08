#include "pch.h"
#include <gtest/gtest.h>
#include "VarietyStore.h"


class VarietyStoreTest :public testing::Test {
protected:
	VarietyStore app;
public:
	virtual void SetUp();
	virtual void TearDown() {};
};

void VarietyStoreTest::SetUp() {
	auto* p1 = new Item("面包", 10, 20);
	auto* p2 = new Maotai("茅台", 2, 0);
	auto* p3 = new Item("方便面", 5, 7);
	auto* p4 = new Diamond("钻戒", 0, 80);
	auto* p5 = new Diamond("钻戒", -1, 80);
	auto* p6 = new Kimi("奇异果", 15, 20);
	auto* p7 = new Kimi("奇异果", 10, 49);
	auto* p8 = new Kimi("奇异果", 5, 49);
	auto* p9 = new Banana("香蕉", 3, 6);

	app.addItem(p1);
	app.addItem(p2);
	app.addItem(p3);
	app.addItem(p4);
	app.addItem(p5);
	app.addItem(p6);
	app.addItem(p7);
	app.addItem(p8);
	app.addItem(p9);
}

TEST_F(VarietyStoreTest, testday1) {
	for (int i = 0; i < 1; ++i) {
		app.updateItems();
	}
	//EXPECT_EQ("面包", app.items[0]->name);
	EXPECT_EQ("面包", app.items[0]->name);
	//EXPECT_EQ("方便面", app.items[2]->name);
	//EXPECT_EQ("钻戒", app.items[3]->name);
	//EXPECT_EQ("钻戒", app.items[4]->name);
	//EXPECT_EQ("奇异果", app.items[5]->name);
	//EXPECT_EQ("奇异果", app.items[6]->name);
	//EXPECT_EQ("奇异果", app.items[7]->name);
	//EXPECT_EQ("香蕉", app.items[8]->name);

	//EXPECT_EQ(8, app.items[0]->sellDeadline);
	EXPECT_EQ(9, app.items[0]->sellDeadline);
	//EXPECT_EQ(0, app.items[2]->sellDeadline);
	//EXPECT_EQ(0, app.items[3]->sellDeadline);
	//EXPECT_EQ(-1, app.items[4]->sellDeadline);
	//EXPECT_EQ(10, app.items[5]->sellDeadline);
	//EXPECT_EQ(5, app.items[6]->sellDeadline);
	//EXPECT_EQ(0, app.items[7]->sellDeadline);
	//EXPECT_EQ(-2, app.items[8]->sellDeadline);

	//EXPECT_EQ(15, app.items[0]->price);
	EXPECT_EQ(19, app.items[0]->price);
	//EXPECT_EQ(2, app.items[2]->price);
	//EXPECT_EQ(80, app.items[3]->price);
	//EXPECT_EQ(80, app.items[4]->price);
	//EXPECT_EQ(25, app.items[5]->price);
	//EXPECT_EQ(50, app.items[6]->price);
	//EXPECT_EQ(50, app.items[7]->price);
	//EXPECT_EQ(0, app.items[8]->price);

}

TEST_F(VarietyStoreTest, testday2) {
	for (int i = 0; i < 2; ++i) {
		app.updateItems();
	}
	EXPECT_EQ("香蕉", app.items[8]->name);
	EXPECT_EQ(1, app.items[8]->sellDeadline);
	EXPECT_EQ(2, app.items[8]->price);
}

TEST_F(VarietyStoreTest, testday3) {
	for (int i = 0; i < 3; ++i) {
		app.updateItems();
	}

	EXPECT_EQ("茅台", app.items[1]->name);
	EXPECT_EQ(-1, app.items[1]->sellDeadline);
	EXPECT_EQ(4, app.items[1]->price);
}


TEST_F(VarietyStoreTest, testday6) {
	for (int i = 0; i < 6; ++i) {
		app.updateItems();
	}
	EXPECT_EQ("奇异果", app.items[5]->name);
	EXPECT_EQ(9, app.items[5]->sellDeadline);
	EXPECT_EQ(27, app.items[5]->price);
}

TEST_F(VarietyStoreTest, testday11) {
	for (int i = 0; i < 11; ++i) {
		app.updateItems();
	}
	EXPECT_EQ("奇异果", app.items[5]->name);
	EXPECT_EQ(4, app.items[5]->sellDeadline);
	EXPECT_EQ(38, app.items[5]->price);
}

TEST_F(VarietyStoreTest, testday16) {
	for (int i = 0; i < 16; ++i) {
		app.updateItems();
	}
	EXPECT_EQ("奇异果", app.items[5]->name);
	EXPECT_EQ(-1, app.items[5]->sellDeadline);
	EXPECT_EQ(0, app.items[5]->price);
}


TEST_F(VarietyStoreTest, testday26) {
	for (int i = 0; i < 26; ++i) {
		app.updateItems();
	}
	EXPECT_EQ("茅台", app.items[1]->name);
	EXPECT_EQ(-24, app.items[1]->sellDeadline);
	EXPECT_EQ(50, app.items[1]->price);
}



int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}