#include <iostream>
#include "GraphicsManager.h"
// Pointer Reference to classes
Room* room;
Robot* robby;
GraphicsManager* picture;
//
int main()
{
	//declare the room, robby and picture objects here
	room = new Room(0);
	robby = new Robot();
	picture = new GraphicsManager(room, robby);

	// make robby move forward
	robby->move();
	picture->draw();
	robby->move();
	picture->draw();


	// make robby turn right
	robby->right();
	picture->draw();


	system("Pause");

}