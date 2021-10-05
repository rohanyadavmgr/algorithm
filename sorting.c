#include <stdio.h>

void bubble_Sort(int array[], int n)
{
    int i, j, temp;
    for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1]) 
      {
        temp      = array[j];
        array[j]   = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}
 
 
void display_Array(int array[], int n)
{
    int i;
printf("Sorted array using bubble sort : \n");
    for (i = 0; i < n; i++){
       printf("%d ", array[i]);
  }
       
    printf("\n");
}
 
 
int main()
{  
 
   int  array[100],n ,c ;
   printf("Enter the size of Array : ");
   scanf("%d", &n);
  
   if(n > 100){
     printf("Please enter the size of array less than or equal to 100.");
     return 0;
   }
   
printf("Enter the elements of Array : \n");
for (c = 0; c < n; c++){
       scanf("%d", &array[c]);
  }
 
    bubble_Sort(array, n);
    display_Array(array, n);
 
    return 0;
}
