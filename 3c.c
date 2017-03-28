#include<stdio.h>
#include<conio.h>
//dfdf
/*int main()
{
 int cp,sp,temp;
 printf("enter the cost and selling price");
 scanf("%d%d",&cp,&sp);
 temp=cp-sp;
 if(temp<0)
 printf("profit of %d",temp);
 else
 printf("loss of %d",temp);
 return 0;
 }

int main()
{
 int x;
 printf("enter x");
 scanf("%d",&x);
 if(x%2==0)
        printf("even");
 else
    printf("odd");
  return 0;
}

int main()
{
    int x;
    printf("enter a year");
    scanf("%d",&x);
    if((x%4==0) || (x%400==0) ||(x%100==0) )
    {
        printf("enter year is leap year");
    }

    else
        printf("enter year is not leap year");
    return 0;
}


int main()
{
    int count,n,remain,temp=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
    remain=n%10;
    temp= remain + (temp*10);
    n=n/10;
    }
    printf("\n reverse no. is %d",temp);
    if(n=temp)
    {
        printf("equal");
    }
    else
        printf("not equal ");
    return 0;
}


int main()
{
    int x,y,z;
    printf("enter ages of x: y: z:");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
    {
        printf("x is youngest");
    }
    else if(y>z)
    printf("y is youngest");
    else
        printf("z is youngest");
    return 0;
}



int main()
{
    int x,y,z,temp;
    printf("enter three values");
    scanf("%d%d%d",&x,&y,&z);
    temp=x+y+z;
    if(temp>180 || temp<180)
    printf("not valid");
    else
        printf("valid");
    return 0;
}


int main()
{
    int x,y;
    printf("enter x::");
    scanf("%d",&x);
    if(x<0)
    {
    y=0-x;
    printf("\n %d",y);
    }
     else
    printf("\n %d",x);
    return 0;

}


int main()
{
 int l,b,area,peri
 ;
 printf("enter value of l and b");
 scanf("%d%d",&l,&b);
 area=l*b;
    peri=2*(l+b);
    if(area>peri)
    printf("area is greater");
    else
        printf("peri is greater");
    return 0;
}

 int main()
 {
     int x1,x2,x3,y1,y2,y3,m1,m2;
     printf("enter co-ordinates values x1,y1");
     scanf("%d%d",&x1,&y1);
     scanf("%d%d",&x2,&y2);
     scanf("%d%d",&x3,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2)
        printf("all points lies on same line");
    else
        printf("different line");
    return 0;
 }


int main()
{
    char x;
    printf("enter a character");
    scanf("%c",&x);
    if(x>=65 && x<=90)
        printf("enter character is capital letter");
    else if(x>=97 && x<=122)
    printf("small case letter");
    else if(x>=48 && x<=57)
        printf("0-9");
    else if((x>=0 && x<=47) || (x>=58 && x<=64) || (x>=91 && x<=96) || (x>=123 && x<=127))
        printf("special symbol");
   return 0;
}


int main()
{
    int x,z;
    float y;
    printf("enter hardness and tensile strength");
    scanf("%d%d",&x,&z);
    printf("\nenter carbon content");
    scanf("%f",&y);
    if(x>50 && y<0.7 && z>5600)
    printf("Grade 10");
    else if(x>50 && y<0.7)
    printf("Grade 9");
    else if(y<0.7 && z>5600)
    printf("Grade 8");
    else if(x>50 && z>5600)
    printf("Grade 7");
    else if(x>50 || y<0.7 || z>5600)
    printf("Grade 6");
    else
        printf("Grade 5");
    return 0;
}

int main()
{
  int n;
  float x;
    printf("enter number of date is late to return book::");
    scanf("%d",&n);
    if(n<=5){
    x = n*0.5;
    printf("\nfine is:%f",x);}
    else if(n>=6 && n<=10){
        x=n*1;
     printf("\nfine is:%f",x);}
    else if(n>10 && n<30){
       x=n*5;
     printf("\nfine is:%f",x);}
    else if(n>30){
     printf("member ship is cancelled");}
 return 0;
}

int main()
{
    int x,y,z;
    printf("enter three sides of triangle :\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
    {
      printf("%d is greatest amoung",x);
      if(y+z>x)
      printf("\n tri possible");
      else
        printf("\n not possible");
    }
    else if(y>z){
    printf("%d is greatest",y);
    if(x+z>y)
      printf("\n possible");
      else
        printf("\nnot possible");
    }
        else{
        printf("%d is greatest",z);
        if(y+x>z)
      printf("\n possible");
      else
        printf("\n not possible");
        }
    return 0;
}

*/

int main()
{
    int x,y,z;
    printf("enter values:\n");
    scanf("%d%d%d",&x,&y,&z);
    if((x==y)&&(y!=z) || (x!=y)&&(y==z))
    printf("isosceles");
    else if((x==y)&&(y==z))
    printf("equilateral");
    if((x!=y)&&(y!=z))
    printf("scalene");
    else
        printf("right triangle");
    return 0;
}



