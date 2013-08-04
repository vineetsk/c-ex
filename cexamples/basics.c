#include "basics.h"
#include <stdbool.h>

bool basics_isSizeEqForAnyPointer(){
	return sizeof (void*) == sizeof (unsigned char*);
}
