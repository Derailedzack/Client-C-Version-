#include "Inventory.h"

void SetIteminSlot(Item item, Slot slot)
{
	slot.item = item;
}

void SetInventorySize(int slot_number)
{
	inventory_size = slot_number;
}

Slot* CreateInventory(Create_Inventory_Func* create_inventory)
{
	
	return create_inventory();
}

