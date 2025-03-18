#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX_COUNT 100

int main(int argc, char ** argv){
	int numread;
	int fdsrc;
	int fddest;
	char buff[MAX_COUNT];
	if(argc != 3)
		printf("%s: %s <source> <destination>\n", *argv,*argv);
	else{
		fdsrc = open(argv[1],O_RDONLY);
		if(fdsrc == -1)
			printf("Error: Cannot open %s\n", argv[1]);
		else{
			fddest = open(argv[2],O_CREAT | O_WRONLY | O_TRUNC, 0644);
			if(fddest== -1){
				printf("Error openning %s\n", argv[2]);
				close(fdsrc);
				return 1;
			}
			while(numread=read(fdsrc,buff,MAX_COUNT)){
				if(write(fddest,buff,numread) != numread){
					printf("Error writing to file\n");
					close(fdsrc);
					close(fddest);
					return 1;	
				}
				else{}
			}
			if(numread == -1)
				printf("Error reading from file\n");
			else{}
		}
	}
	close(fdsrc);
	close(fddest);
}
