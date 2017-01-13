//Из массива целых чисел удалить группу наибольшей длины, которая состоит из возрастающей последовательности нечётных чисел.




#include <iostream>
#include <math.h>

using namespace std;


int Prime(unsigned long a)
{
   unsigned long i;
   if (a == 2)
      return 1;
   if (a == 0 || a == 1 || a % 2 == 0)
      return 0;
   for(i = 3; i*i <= a && a % i; i += 2)
      ;
   return i*i > a;
}

bool chetn(int x)
{
    if (x%2==0)
        return 1;
    else
        return 0;
}

int main()
{
 int i, k, n, max, kgr, kon_max, j, num;
 float *x;
 cout<<"Size of array="; cin>>n;
 x=new float [n];
 cout<<"Enter X(n) array\n";
 for (i=0; i<n;i++)
 {cout<<"X("<<i<<">="; cin>>x[i];}
 for (num=1;num<=3;num++)

 {
 for (kgr=i=0, k=1;i<n-1;i++)
     if (x[i]<x[i+1]) k++;
     else
         if (k>1)
         {
             kgr++;
             if (kgr==1)
             {
                 max=k;
                 kon_max=i;
             }
             else
                 if (k>max)
                 {
                     max=k;
                     kon_max=i;
                 }
             k=1;
         }
 if (k>1)
 {
     kgr++;
     if (kgr==1)
     {
         max=k;
         kon_max=n-1;
     }
     else
         if(k>max)
         {
             max=k;
             kon_max=n-1;
         }
 }
 for (j=1; j<=max;j++)
 {
     for (i=(kon_max-max+1);i<(n-j); x[i]=x[i+1],i++);
 }
 n-=max;
 };
/* for(kol=0,i=0;i<n;i++){

 }

 for (i=m; i<n-1;x[i]=x[i+1],i++); //delete m
 n--;

*/
 cout<<"\n----------------\n";
 for (i=0; i<n;i++) cout<<"X("<<i<<">="<<x[i]<<"\n";



 delete [] x;
 return 0;

}

