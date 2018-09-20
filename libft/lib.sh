rm -f libft.a; gcc -Wall -Wextra -Werror -c -Iinc/ src/*.c; ar rc libft.a *.o; ranlib libft.a; rm -f *.o
