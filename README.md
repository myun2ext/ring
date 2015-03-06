# Ring

Ring for C++.

```cpp
  1 #include <stdio.h>
  2 #include "ring.hpp"
  3
  4 int main() {
  5    ring<int> r;
  6    r.append(1);
  7    r.append(10);
  8    r.append(100);
  9    r.append(1000);
 10
 11    for(int i=0; i<10; i++, r++)
 12       printf("%d\n", r.current());
 13    return 0;
 14 }
```

result for

```cpp
[master ring]$ make
g++ -O3 main.cpp
./a.out
1
10
100
1000
1
10
100
1000
1
10
[master ring]$
```
