// name-Maitrey Mahendra Pangal
//email id- marshpangal@gmail.com
//phone no.-7397979232
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
int main()
{
	//a and b are two variable
	int a,b; 
	// take the inputs from user
	printf("enter a ");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	// swapping
	// a=(initial_a- initial_b)
    a=a-b;
    // b = (initial_a - initial_b) + initial_b = initial_a
    b=a+b;
    // a = initial_a - (initial_a - initial_b) = initial_b
    a=b-a;
	printf("after swap a=%d b=%d",a,b);
    
}

