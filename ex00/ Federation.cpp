#include <iostream>
#include <string>
#include "Federation.hh"
#include "Warpsystem.hh"
using namespace std;

Federation::Starfleet::Ship::Ship(int length, int width, string name, short maxWarp)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = maxWarp;
	this->core = NULL;
	cout << "The ship USS " << name << " has been finished. It is " << length << " m in length and " << width << " m in width." << endl;
	cout << "It can go to Warp " << maxWarp << "!" << endl;
}

Federation::Starfleet::Ship::~Ship()
{
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
	this->core = core;
	cout << "USS " << this->_name << ": The core is set." << endl;
}

void Federation::Starfleet::Ship::checkCore()
{
	cout << "USS " << this->_name << ": The core is " << ((this->core->checkReactor()->isStable()) ? "stable" : "unstable")  << " at the time." << endl;
}

Federation::Ship::Ship(int length, int width, string name)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = 1;
	this->core = NULL;
	cout << "The independant ship " << name << " just finished its construction. It is " << length << " m in length and " << width << " m in width." << endl;
}

Federation::Ship::~Ship()
{
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
	this->core = core;
	cout << this->_name << ": The core is set." << endl;
}

void Federation::Ship::checkCore()
{
	cout << this->_name << ": The core is " << ((this->core->checkReactor()->isStable()) ? "stable" : "unstable")  << " at the time." << endl;
}
