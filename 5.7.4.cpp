//”пор€дочить по возрастанию модулей элементы целочисленного массива,расположенные между третьим и п€тым простыми числами.



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
 int i, k, n, pol5, otr1, kon_max, j, num;
 float b;
 float *x;
 cout<<"Size of array="; cin>>n;
 x=new float [n];
 cout<<"Enter X(n) array\n";
 for (i=0; i<n;i++)
 {cout<<"X("<<i<<">="; cin>>x[i];}
 for (i=0, k=0; k<5; i++)
     if (x[i]>0)
     {
         k++;
         pol5=i;
     }
 for (i=0; ;i++)
 {
     if (x[i]<0)
     {
         otr1=i;
         break;
     }
 }
 if (otr1>pol5) {
     j=pol5;
     pol5=otr1;
     otr1=j;
 }

 cout<<"!!!!!!"<<otr1<<"   "<<pol5;

 for (j=otr1-1;j<(pol5-1);j++)
     for (i=otr1; i<(pol5-1)-j;i++)
         if ((abs(x[i]))<(abs(x[i+1])))
         {
             b=x[i];
             x[i]=x[i+1];
             x[i+1]=b;
         }
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

