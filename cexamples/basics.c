#include "basics.h"

bool basics_isSizeEqForAnyPointer(){
	return sizeof (void*) == sizeof (unsigned char*);
}