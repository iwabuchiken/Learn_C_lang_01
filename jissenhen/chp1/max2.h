#include <stdio.h>

#if !defined(__MAX)
#define __MAX
#define max(a, b) ((a) > (b) ? (a) : (b))
#endif
