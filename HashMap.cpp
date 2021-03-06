#include "stdafx.h"
#include <iostream>
#include "Map.h"

int main() {
	Map<char, int> map;

	map.insert(Pair<char, int>('a', 2));
	std::cout << map['a'] << std::endl;
	map['b'];
	std::cout << map['b'] << std::endl;
	map['a'] = 42;
	std::cout << map['a'] << std::endl;

	for (Map<char, int>::iterator it = map.begin(); it != map.end(); it++) {
		std::cout << it->getFirst() << " " << it->getSecond() << std::endl;
	}
    return 0;
}

