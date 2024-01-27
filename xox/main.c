#include <stdio.h>
#include <stdlib.h>


void main(){

char aa;
int result =10;
int value=5;
int i;
scanf("%d",&i);

switch (i) {
	case 1:
	    result += value;
   		break;
	case 2:
    	result -= value;
    	break;
	case 3:
    	result *= value;
    	break;
	case 4:
    	if(value == 0) {
    		printf("Error: dividing by zero \n");
    		printf(" operation is aborted \n");
    }
    	else{
    	result /= value;
    	}
    	break;
	default:
		printf("unknown operation\n");
		break;

}
}
