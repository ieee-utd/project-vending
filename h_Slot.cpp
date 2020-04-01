
using namespace std;

class Slot {
private:
	const char DEFAULT_INVENTORY_SIZE = 's'; // default slot size
	const int DEFAULT_STOCK_COUNT = 0; // default stock count
	char inventorySize; // slot size
	int stockCount; // current stock amount
public:
	// constructors
	Slot(char invSize, int stock) {
		inventorySize = invSize;
		stockCount = stock;
	}
	Slot(int stock) {
		inventorySize = DEFAULT_INVENTORY_SIZE;
		stockCount = stock;
	}
	Slot(int invSize) {
		inventorySize = invSize;
		stockCount = DEFAULT_STOCK_COUNT;
	}
	Slot() {
		inventorySize = DEFAULT_INVENTORY_SIZE;
		stockCount = DEFAULT_STOCK_COUNT;
	}
	// get inventory size
	char getInventorySize() { return inventorySize; }
	// get stock left
	char getStockCount() { return stockCount; }
	// dispences using the stepsize count form the item and returns if it was successfully dispenced
	// 0 is successful, 1 mean shelf is empty, more numbers will be used fore other possible cases.
	int dispence(int count) {
		if (isEmpty()) {
			return 1;
		}
		int successful;
		// send dispence signal with count as step size and get wether it was despensed properlly
		successful = 0; //assume result was sucessful
		stockCount--;
		return successful;
	}
	// restock by amt
	void restock(int amt) {
		stockCount += amt;
	}
	// sets stock to a specific amount
	void setStock(int stock) {
		stockCount = stock;
	}
	// clear the stock in the slot
	void clearSlot() {
		stockCount = 0;
	}
	// Probally should never be used
	void changeSize(char newSize) {
		inventorySize = newSize;
	}
	// check if slot is empty
	bool isEmpty() {
		if (stockCount > 0)
			return false;
		else
			return true;
	}

};