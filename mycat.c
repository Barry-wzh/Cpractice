#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *mycat(char* s1, const char* s2)
{
	char *p = s1;
	s1 += strlen(s1);
	while(*s1++ = *s2++)
	;
	*s1 = '\0';
	return p;
}

int main(int argc,char const *argv[])
{
	char a[]="abcde";
	char *b="worasd";
//	printf("mycat(a,b)=%s\n",mycat(a,b));
	printf("strcat(a,b)=%s\n",strcat(a,b));
	return 0;
}
/*
#include <stdio.h>
#include <string.h>
 
char* mycat(char *dst, const char *src){
    char *ret=dst;
    dst+=strlen(dst);
    while(*dst++=*src++)
          ;
    return ret;
}
  
int main() {
    char c[]="abc";
    char *b="edf";
    printf("mycat(c,b)=%s\n",mycat(c, b));//打印函数返回字符串的结果
    printf("c=%s\n",c);//连接后字符串c的结果
    printf("strlen(c)=%d\n",(int*)strlen(c));//打印字符串c的长度
    return 0;
}*/