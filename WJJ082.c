/*
 * WJJ082.c
 *
 *  Created on: 2017年8月2日
 *      Author: Administrator
 */
#include <stdio.h>
#include <string.h>

char digits[36] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char * trans(int n, int d, char *s)     //n:输入数字；d：进制；*s:输出
{
	int i = 98;
	s[99] = '\0';
	if (d < 2 || d > 36)
	{
		s[0] = '\0';
		return NULL;
	}
	do
	{
		s[i--] = digits[n%d];    //进制转换
		printf("%c ",s[i+1]);
		n /= d;
	}
	while(n);
	return &s[i+1];
}
int main()
{
	char str[100];
	int num;
	int i;
	printf("Please input a number to translate: ");
	scanf("%d", &num);
	for(i = 2; i <= 36; i++)
	{
		printf("%5d = %s(%d)\n", num, trans(num, i, str), i);
	}
	return 0;
}




//void fun(char a[])
//{
//	int i;
//	for(i=0;a[i]!='\0';i++)
//	{
//		if(a[i]>=97&&a[i]<=122)
//		a[i]=a[i]-32;
//	}
//}
//int main(void)
//{
//	char s[100];
//	scanf("%s",s);
//	fun(s);
//	printf("%s\n",s);
//}



//void fun(int n,char a[])
//{
//int m=1,i=0,j;
//char b[100];
//while(n/m!=0)
//{
//	b[i]=(n/m)%10;
//	m=m*10;
//	i++;
//}
//b[i]='\0';
//	i--;
//	for(j=0;i>=0;i--,j++)
//	{
//	printf("%d ",b[i]);
//	printf("\n");
//	a[j]=b[i]+'0';
//	}
//	a[j]='\0';
//}
//int main(void)
//{
//	int n;char s[100];
//	scanf("%d",&n);
//	fun(n,s);
//	printf("%s\n",s);
//}



//void fun(int s[], int t[])
//{
//  int i,j=0,n=1;
//  while(1)
//  {
//	  for(i=0;s[i]!=1000;i++,n++)
//	     if(n%3!=0)
//	        t[j++]=s[i];
//	 t[j]=1000;       /*在字符串最后加上结束标识*/
//	 printf("%d\n",t[j]);
//	 j=0;
//	 while(t[j]!=1000)
//	 {
//		 s[j]=t[j];
//		 j++;
//		 printf("%d ",s[j]);
//	 }
//	 if(j==1)
//	 {
//		 printf("num=%d",s[0]);
//		 return;
//	 }
//	 s[j]=1000;
//	 j=0;
//  }
//
//
//}
//int main(void)
//{
//	int i;int num[1001],mynum[1000]={0};
//	for(i=0;i<1001;i++)
//	{
//		num[i]=i;
//	}
//	fun(num,mynum);
//	//printf("输出的字符串：%s\n",a);
//}




//void left_move(char str[],int n )
//{
//  char t;int j=0;int k=0;
//  int len;
//  len = strlen(str);
//for (j=0;j<n;j++)
//{
////	t=str[len-1];          //右移//
//	t=str[0];                //左移//
////	for (k=len-1;k>0;k--)    //右移//
//	for (k=0;k<len;k++)         //左移//
//	{
////		str[k]=str[k-1];     //右移//
//		str[k]=str[k+1];       //左移//
//	}
////	str[0] = t;         //右移//
//	str[len-1]=t;         //左移//
//}
//}
//int main(void)
//{
//	char a[50];
//	int i=2;
//	scanf("%s",a);
//	left_move(a,i);
//	printf("输出的字符串：%s\n",a);
//}




//int index(char *p,char *q)                             //函数的定义
//{
//      char *a;char *b;
//
//      int num=1;                                             //用来记载位置数
//
//
//      while(*p!='\0')                                        //对p字符串逐一进行判别
//      {
//
//            a=p;                                                 //用a,b分别替代p和q
//            b=q;
//            printf("a=%s,b=%s\n",a,b);
//
//            while(*b!='\0'&&*a!='\0'&&*b==*a)     //如果对应的元素相等，且这两个字符串都没有到结束符
//            {
//                   a++;
//                   b++;
//            }
//
//
//
//           if(*b=='\0')                                      //如果匹配的话，那么此时b对应是'\0'结束符
//                 return num;
//
//
//
//          num++;                                              //位置加1，取下一个元素分析
//          p++;
//     }
//
//
//
//   return -1;                                                 //否则，返回-1
//}
//
//
//
//
//int main(void)
//{
//     char s[50];
//             char t[100];
//
//             printf("请输入字符串s：");
//             gets(s);                                           //将获取到的字符串存入字符指针中
//
//             printf("请输入字符串t：");
//             gets(t);                                           //将获取到的字符串存入字符指针中
//
//             int n=index(s,t);
//
//             if(n==-1)
//            	 printf("在s中没有与t 匹配的子字符串！");
//             else
//            	 printf("字符串t 在字符串s中第一次出现的的位置%d\n",n);
//        }


