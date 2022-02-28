#include <stdio.h>
#include <stdlib.h>

	char array[100];
	int i,j,k,o,key;

////functions

void enq(){                                   //function of encryption
for (i=0;(i<100 && array[i]!='\0');i++)
	{
    if (array[i]==' ')
	{
	continue;	
	}	
     array[i]=array[i]+key;                    //the letter or the number will increase by variable key 
	}		
}

void deq(){
	for(j=0;(j<100 && array[j]!='\0');j++)
		{
			if(array[j]==' ')
			{
				continue;
			}
			array[j]=array[j]-key;                //the letter or the number will decrease by variable key 
		}		
}
int main(){
	
for (; ;){

	   	printf("Enter a string:  ");
	   	    	fgets(array,100,stdin);

	   	printf("Enter a key to encrypte or decrypte by: ");
		 scanf("%d",&key);  
     
	printf("choose your option \n");
	printf("* 1:Encryption\n");
    printf("* 2:Decryption\n");
    printf("* 3:Exit\n");

	   	       scanf("%d",&o);




// switch case will check if the input from the user is 1,2 or exit. and each case will do it's order.
    switch(o){
    case 1:         //calling encryption function
    enq();
	printf("%s\n\n",array);
	o=0;
    fgets(array,100,stdin);
	break;
	
	case 2:
	    deq();        //calling decryption function
    	printf("%s\n\n",array);
    	o=0;
    	fgets(array,100,stdin);
		break;
	
    case 3:
         default:
         printf("Exit Done \n");
         system("pause");
		 return 0;			
}
}
}
