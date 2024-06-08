
//*****Topic Name  - Data Analysis*****
/*
Name - Nayan Kumar Vishwakarma
Branch - Computer Science & Engineering
Semester - 2
Section - B
Subject - FCP
*/

/*
********Project Details**********
Find To Given Data User and Provide the following information to the data provided by the user as :
               1. ascending order
               2. mean of a data
               3. median
               4.Range
               5.Mean Deviation
               6.Mean Deviation Range
*/

#include<stdio.h>
void ao(int num[],int p);
void avg(float p , int num[]);
void median(int num[], int p);
void range(int num[], int p);

//Function-4(range)
void range(int num[], int p){
    float r = num[0];
		int t = p - 1;
		float s = num[t];

		printf("range =   ( %f  , %f )",r,s);
}

//Function-3(median)
void median(int num[], int p){
	int l = p;
if (p % 2 == 0) {

			float k = num[(l / 2) - 1];
			float m = num[l / 2];
			float n = (k + m) / 2 ;

			printf("\nmedian = %f \n" ,n);
		} else {
			float o = num[l / 2];
			printf("\nmedian = %f\n " ,o);
		}

	}

//Function-2(avg)
void avg(float p , int num[]){
    	float fff = 0;
		float m = 0;
		for (int i = 0; i < p ; i++) {
			m = m + num[i] ;
		}
		float z = m / p ;
		printf(" mean : %f",z);
		
		float ff = 0 ;
		for (int d = 0; d < p ; d++) {
			float y = z - num[d] ;
			if (y < 0) {
				y = 0 - y ;
			}
			ff = ff +  y ;
			fff = ff / p;
		}
		printf("\nmean division : %f" , fff);
		float mdr1 = z - fff;
		float mdr2 = z + fff;
		printf("\nMean Division Range : (%f , %f)" ,mdr1 , mdr2 );
    
}

//Function-1(ao)
void ao(int num[],int p){
    		//input stage
		//booble sort
		for (int i = 0; i < p - 1; i++) {

			for (int j = 0; j < p - i - 1; j++) { //value change
				if (num[j] > num [j + 1]) {
					int amm = num[j] ;
					num[j] = num[j + 1];
					num[j + 1] = amm ;
				}
			}
		}
  		//output Stage
		printf("increasing oder : ");
		for (int i = 0; i < p; i++) {
			printf(" %d " , num[i]);
		}
		printf("\n");     
}

//Main-Function
int main() {
printf("Enter Number of Elements : ");
int p;// p is no. of element
scanf ("%d",&p);
	int num [p];// num is Arraylist and p denote size of arraylist.
	printf("Enter %d integer type element ; \n",p);
		for (int q = 0 ; q < p ; q++) {
			scanf("%d",&num[q]); //list of elements
		}
		ao( num,p);
		avg(p, num);
		median(num, p);
		range(num, p);
		
	return 0;	
}