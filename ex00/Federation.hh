#ifndef FEDERATION_H_
#define FEDERATION_H_
#include <string>
#include "Warpsystem.hh"
using namespace std;

namespace Federation
{
	namespace Starfleet
	{
		class Ship
		{
			int _length;
			int _width;
			string _name;
			short _maxWarp;
			WarpSystem::Core *core;
			public:
			Ship(int length, int width, string name, short maxWarp);
			~Ship();
			void setupCore(WarpSystem::Core *core);
			void checkCore();
		};
	}

	class Ship
	{
		int _length;
		int _width;
		string _name;
		short _maxWarp;
		WarpSystem::Core *core;

		public:
		Ship(int length, int width, string name);
		~Ship();

		void setupCore(WarpSystem::Core *core);
		void checkCore();
	};
}
#endif
