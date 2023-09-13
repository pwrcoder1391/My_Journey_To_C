#include<stdlib.h> // std library
#include<stdio.h> // standard input and output
#include<unistd.h> //gives access to POSIX OS API
#include<pthread.h> // for thread , also while running we need to add link(-lthread)

/*

when ever we make a thread we always create a function which will be 

*/


// function which will be called by the thread

void* routine()// this says that it'll return the type -- pointer of routine()
{
	printf("test of thread \n"); // this will print 1st 



int main(int argc , char*argv[])
{
	/*Here there will be a place where POSIX API will store the variable*/\
	pthread_t t1 ; //1st thread
	
	pthread_create(&t1 , NULL, &routine , NULL);
	
	/*pthread_create(<thread 1 address> , <attribute> , <address of the subroutine/funct> , <arg to be passed to the subroutine/funct>) 	
	*/
	
	pthread_join(t1,NULL)
	
	/*pthread_join(<thread 1 address> , <pointer to the int which can contain the return val from the thread subroutine/funct>)	
	*/
	
	return 0;
}
