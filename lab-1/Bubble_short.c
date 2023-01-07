#include<stdio.h>
void main()
{
    int arr[5], n, i, j,ch,fp, swap;    

    printf("Please Enter the Number of elements \n1.best case \n2.average case \n3,worst case ");
	scanf("%d", &ch);  
	
	switch(ch){
	
		case 1:
			fp=fopen("best.txt","r");
			break;
		}
	
		scanf("%d", &n);   
	printf("Please Enter %d integers\n ",n);
		for(i= 0; i < n; i++)
		scanf("%d", &arr[i]);

    for(j = 0; j < n - 1; j++){       

        for(j = 0; j < n - i - 1; j++)
		{          

            if(arr[j] > arr[j + 1])
			{               

                swap = arr[j];

                arr[j] = arr[j + 1];

                arr[j+ 1] = swap;
			}

        }

    }

    printf("shorted list in ascending order: \n");

    for(i= 0; i < n; i++){

        printf("%d\n  ", arr[i]);

    }


}
