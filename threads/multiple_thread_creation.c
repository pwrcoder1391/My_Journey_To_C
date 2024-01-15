#include<stdlib.h> // std library
#include<stdio.h> // standard input and output
#include<unistd.h> //gives access to POSIX OS API
#include<pthread.h> // for thread , also while running we need to add link(-lthread)



/*

WHAT WE CAN EXPECT - Here there will be 2 threads , after printing the 1st message the thread needs to run parallely and then the program must go ahead for 2nd thread and later on the print statement after the sleep() must print together


when ever we make a thread we always create a function which will be 

*/


// function which will be called by the thread

void* routine()// this says that it'll return the type -- pointer of routine()
{
	printf("test of thread \n"); // this will print 1st 
		
	sleep(3);
	
	printf("end of the thread \n");
	
}

int main(int argc , char*argv[])
{
	/*Here there will be a place where POSIX API will store the variable*/
	pthread_t t1 ; //1st thread
	
	pthread_t t2 ; // 2nd thread
	
	
	pthread_create(&t1 , NULL, &routine , NULL); // creating 1st thread 
	
	pthread_create(&t2 , NULL, &routine , NULL); // creating 2nd thread
	
	/*pthread_create(<thread 1 address> , <attribute> , <address of the subroutine/funct> , <arg to be passed to the subroutine/funct>) 	
	*/
	
	pthread_join(t1,NULL); // merging back to the thread
	
	pthread_join(t2,NULL); // merging back to the thread
	
	
	/*pthread_join(<thread 1 address> , <pointer to the int which can contain the return val from the thread subroutine/funct>)	
	*/
	
	return 0;
}
