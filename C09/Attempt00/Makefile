all:
	gcc -Wall -Wextra -Werror ex00/*.c -o ex00/test
	./ex00/test
	gcc -Wall -Wextra -Werror ex01/*.c -o ex01/test
	./ex01/test
	gcc -Wall -Wextra -Werror ex02/*.c -o ex02/test
	./ex02/test
	gcc -Wall -Wextra -Werror ex03/*.c -o ex03/test
	./ex03/test
test00:
	gcc -Wall -Wextra -Werror ex00/*.c -o ex00/test
	./ex00/test
test01:
	gcc -Wall -Wextra -Werror ex01/*.h ex01/*.c
	# ./ex01/test
test02:
	gcc -Wall -Wextra -Werror ex02/*.h ex02/*.c -o ex02/test
	./ex02/test
test03:
	gcc -Wall -Wextra -Werror ex03/*.h ex03/*.c -o ex03/test
	./ex03/test
test04:
	gcc -Wall -Wextra -Werror ex04/*.h ex04/*.c
test04-noW:
	gcc ex04/*.h ex04/*.c
	./a.out "blah"
test05:
	gcc -Wall -Wextra -Werror ex05/*.h ex05/*.c
	./a.out b b b
test06:
	gcc -Wall -Wextra -Werror ex06/*.h ex06/*.c -o ex06/test
	./ex06/test
test07:
	gcc -Wall -Wextra -Werror ex07/*.h ex07/*.c -o ex07/test
	./ex07/test
norm-h:
	norminette */ft*.h -R CheckDefine
norm-c:
	norminette */ft*.c