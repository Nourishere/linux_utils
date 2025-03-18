#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR 100

int main (int argc, char ** argv){
	char* p = getcwd(NULL, 0);
	if(NULL == p){
		write(2,"Error using mypwd\n",19);
	}
	else{	
		write(1,p,strlen(p));
		write(1,"\n",1);
	}
	free(p);
}


