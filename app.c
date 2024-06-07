#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int linear_search(int key, int array[5]);

int binary_search(int key, int size, int arr[])

int main ()
{
 
  int arr[5];

  printf("enter the element in the array\n");

  for( int i = 0 ; i < 5 ; i++)
  {
    scanf("%d", &arr[i]);
  }
printf("the element in the array are\n")
  for ( int i = 0 ; i< 5; i++)
  {
    printf("%d\n",arr[i]);
  }

   int number ;

  printf("what  is the number that you want to find in the array :\n");

   scanf("%d",&number);

  int result =linear_search(number, arr);

  if (result)
  {
    printf("the result is found and here it is  %d : ",result);
  }
  else
  
{
  printf("not in the array sorry  for you ");
}
  
  
  return 0;
}

 int linear_search(int key, int array[])
 {
   for (int i = 0; i < 5; i++)
   {
     if (key == array[i])
     {
       return key;
     }
   }
     return 0;
 }

 int binary_search( int key, int size,int arr[])
 {
  int low =0 ;

  int high= size -1;

  int mid = low + (high - low)/2;

   while(low <= high)
   {
    if(arr[mid] == key)
    {
      return mid;
    }
   }
    if(arr[mid] < key)
   {
     low = mid +1 ;
   }
   else
   {
     high= mid -1;
   }

 }
