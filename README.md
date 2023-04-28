# Libft

The libft project is a collection of essential C functions and tools that we must implement from scratch at 42School.

## Getting Started
To use the libft library, simply clone the repository to your local machine.
The library comes with a Makefile that includes the following rules:

`all`: compiles the library
`re`: recompiles the library
`fclean`: removes all object files and the library
`clean`: removes all object files
To compile the library, run:
```bash
make all
```
This will generate a `libft.a` file that you can link to your C projects.

## Using the Library
To use the functions and tools provided by the libft library, simply include the `libft.h` header file in your C source files.
This header file contains all the function prototypes and macro definitions you'll need to use the library.

```C
#include "libft.h"

int main(void)
{
    char *str = "Hello, world!";
    int len = ft_strlen(str);
    printf("Length of string: %d", len);
    return (0);
}
```

```bash
make -C libft/ all
gcc -Wall -Wextra -Werror -I libft/include libft/libft.a test.c -o test
./test
```

## Conclusion
The libft library is a powerful tool for any student at 42 because it is our toolset to face more advanced projects.
By implementing these functions and tools from scratch, you gain a deeper understanding of C programming and improve your problem-solving skills.
