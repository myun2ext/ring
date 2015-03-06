#include <stdio.h>
#include "ring.hpp"

int main() {
	ring<int> r;
	r.append(1);
	r.append(10);
	r.append(100);
	r.append(1000);

	for(int i=0; i<10; i++, r++)
		printf("%d\n", r.current());
	return 0;
}
