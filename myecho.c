#include <stdio.h>
#include <unistd.h>
#include <string.h>

/* You can implement it using printf() but I prefered this somehow! */
int main(int argc, char ** argv){
	while(--argc){
		write(1,*argv,strlen(*++argv)); // increments the argv after finding the length of it
		write(1," ",1);
	}
		write(1,"\n ",1);
}
