# Powersoft a Programming Language

## Usage
```
psl <file> -o <output> <arguments>
```

## Syntax
This is code in C
```c
#include <stdio.h>

int main() {
    printf("This is C code.");
    return 0;
}
```
this is Code in Powersoft
```powersoft
@connect "std"

#fn main() {
    puts("This is Powersoft Code");
    @return ['end'] 0;
}
```
### Keywords
| Keyword|Description|
|--------|-------|
|`@connect`|import or include a library|
|`@return` |returns a value on a calling function|
|`@while`|a loop that continues until it's false|
|`@if`|if some thing is true it will execute it|