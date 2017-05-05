#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
/*
int main()
{
 char a[4000];
 int b[10],i,length;
 int flag,count;
 int n,x;
 scanf("%s",&a);
 length=strlen(a);
 flag=1;
 for(i=1;i<=length;i++)
 {
     if(a[i]=='1' && flag==1){
      if(a[i+1]=='1'){
        flag=1;}
      else{
        count = i+1 ;
        flag=0;

  }    }
   // else if(a[i]=='0' && a[length]=='0'){
    //    printf("\n NO");
   // }
 }

 if(count==length)
    printf("\nYES");
 printf("\n%d",count);
 flag=0;
 for(i=count+1;i<=length;i++)
 {
     if(a[i]=='0' && flag==0){
        if(a[i+1]=='0'){
             if(a[i+1]==a[length])
            printf("\n YES");
             else
                flag=0;
        }
        else if(a[i]=='1'){
        printf("\n NO");
        }
     }
 }
 if(x=='1' && flag=='1')
    printf("\n NO");
 else if(x=='0' || flag=='0')
    printf("\n YES");
 return 0;
}


int main()
{
  char a[4][10],b[4][10];
  int t,i,j,x=0;
    scanf("%d",&t);
    while(t>0){
    for(i=0;i<4;i++)
    scanf("%s",&a[i]);
    for(i=0;i<4;i++)
    scanf("%s",&b[i]);
    x=0;
    for(i=0;i<4;i++)
    {
       for(j=0;j<4;j++)
        {

        if(strcmp(a[i],b[j])==0)
          {
              x++;
          }
        }
    }
    if(x>=2)
        printf("\nsimilar");
    else
        printf("\n not similar");
    t--;
    }
    return 0;
}
*/

int main()
{
    int a[10],i,j,t[10];
    for(i=1;i<=7;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=7;i++)
        t[i]=1;
    for(i=1;i<=7;i++){
    for(j=1;j<=7;j++){
        if(a[j]<a[i]){
        t[i]= max(a[i],a[j]+1);
    }}
}
for(i=1;i<=7;i++)
    printf("%d",t[i]);
    return 0;
}
