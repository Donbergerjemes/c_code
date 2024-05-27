#include<stdio.h>

int main (){

int started_size;
do
{    
    printf("eneter the started size of the population\n");

     scanf("%d", &started_size);
} 
while (started_size<9);

int ended_size;
do
{
    printf("enter the ended size of the population\n");
    scanf("%d", &ended_size);

} 
while (ended_size<started_size);

int n=started_size;

int year=0;


while(n<ended_size){

    int loss = n / 4;

    int gain = n / 3;
    
    n=n+gain-loss;

    year++;

}
printf("the final result is %d", year);

















}