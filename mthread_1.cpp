#include<iostream>
#include<cstdlib>
#include<pthread.h>

using namespace std;

#define NUM_THREADS 5

void *threadFun(int *threadID)
{
	int t_ID;
	t_ID = threadID;
	cout<<"Hello world!Thread ID"<<t_ID<<endl;
	pthread_exit(NULL);
	
}

int main()
{
	pthread_t threads[NUM_THREADS];
	int rc;
	int i; 
	for(i = 0; i< NUM_THREADS; i++)
	{
		cout<<"main() : creating thread,"<<i<<endl;
		rc = pthread_create(&threads[i], NULL, threadFun, (void*)i);  
		// 1st arg: thread id, 2nd arg: to set the threads,
		// 3rd arg: C++ subroutine that thread will execute once it is created
		// argument that may be passed to the thread fucntion
		
		if(rc)
		{
			cout<<"unable to create thread:"<<rc<<endl;
			exit(-1);   // unsuccessful termination
			
		}
	}
	pthread_exit(NULL);
	
}