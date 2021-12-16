#include <stdio.h>
int TOH(int n,int A,int B,int C)
{if(n==1)
  {cout<<"Moving "<<A<<" To "<<B;return n;}
  TOH(n-1,A,C,B);
  cout<<"Moving "<<A<<" To "<<B;
  TOH(n-1,C,B,A);
  return 0;
}
main()
{int a,b,c,d;
 cout<<"Enter the height of tower: ";
 cin>>a;
 cout<<"Enter the Value of A , B and C: ";
 cin>>b>>c>>d;
 TOH(a,b,c,d);
 cout<<endl;
}
