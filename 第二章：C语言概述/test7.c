/*
编写一个程序，程序中要调用名为one_three()的函数。该函数要在一行中显示单词"one"， 再调用two()函数，
然后再在另一行中显示单词"three"。函数two()应该在一行中显示单词"two"。main函数应该在调用one_three()函数
之前显示短语"starting now: ",函数调用之后要显示"done!"。这样，最后的输出结果应如下所示：
starting now:
one
two
three
done!
*/
#include <stdio.h>

void one_three();
void two();

int main(){
	printf("Starting now:\n");
	one_three();
	printf("done\n");
	return 0;
}

void one_three(){

	printf("one\n");
	two();
	printf("three\n");
}

void two(){
	printf("two\n");
}
