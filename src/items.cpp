#include <iostream>

struct Item {
public:
	enum IDX { BASE = 0, TOPPINGS, SAUCE}; // IDX --> index
	enum PL { SINGULAR = 0, PLURAL}; // PL --> plurality
};

// ice cream bases
struct Base : public Item {
public:
	enum TPS { VANILLA = 0, CHOCOLATE, STRAWBERRY}; // TPS --> types
};

struct Vanilla : public Base {
public:
	std::string name = "vanilla ice cream";
	std::string units[2] = { "scoop", "scoops" };
	int maxQty = 3;
};

struct Chocolate : public Base {
public:
	std::string name = "chocolate ice cream";
	std::string units[2] = { "scoop", "scoops" };
	int maxQty = 3;
};

struct Strawberry : public Base {
public:
	std::string name = "strawberry ice cream";
	std::string units[2] = { "scoop", "scoops"};
	int maxQty = 3;
};

// toppings
struct Topping : public Item {
public:
	enum TPS { SPRINKLES = 0, CRUSHED_OREOS, CHERRIES}; // TPS --> types
};

struct Sprinkles : public Topping {
public:
	std::string name = "spinkles";
	std::string units[2] = { "tablespoon", "tablespoons" };
	int maxQty = 3;
};

struct CrushedOreos : public Topping {
public:
	std::string name = "crushed oreos";
	std::string units[2] = { "tablespoon", "tablespoons" };
	int maxQty = 3;
};

struct Cherries : public Topping {
public:
	std::string name = "cherry";
	std::string units[2] = { "piece", "pieces" };
	int maxQty = 5;
};

// sauce
struct Sauce : public Item {
public:
	enum TPS { HOT_FUDGE = 0, CARAMEL_SAUCE }; // TPS --> types
};

struct HotFudge : public Sauce {
public:
	std::string name = "hot fudge";
	std::string units[2] = { "spoonful", "spoonfuls" };
	int maxQty = 2;
};

struct CaramelSauce : public Sauce {
public:
	std::string name = "caramel sauce";
	std::string units[2] = { "spoonful", "spoonfuls" };
	int maxQty = 2;
};