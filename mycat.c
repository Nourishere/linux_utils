#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define COUNT 100
int main(int argc, char ** argv){
	int err;
	if(argc != 2){
		err = write(2,"Usage: mycat file\n",19);
		exit(-1);
	}
	char buff[COUNT];
	int fd = open(argv[1],O_RDONLY);
	if (fd < 0){
		err = write(2,"Error: could not open file\n",28);
		exit(-2);
	}
	int readnum;
	while(readnum = read(fd,buff,COUNT)){ 
		if(readnum == -1){
			printf("Error reading from file\n");
			close(fd);
			return 1;
		}
		else
			err = write(1,buff,readnum); 
	}	
	close(fd);	
	return 0;




}
