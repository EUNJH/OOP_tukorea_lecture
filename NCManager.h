#include <iostream>
#include "NameCard.h"

class NCManager {
private :
	NameCard *NCList[5];
	int index;
public :
	void AddNC(NameCard nc);
};