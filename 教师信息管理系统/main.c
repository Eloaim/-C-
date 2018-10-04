#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TURE 1714010204
struct teacher{
char number[100];      //教师号
char xingming[100];   //教师名
char sex[3];        //性别
char zhicheng[100];   //职称
char kecheng[100];   //任教课程
int banji;     //班级
int shumu;        //班级数目
double lilunkeshi;        //理论课时
double shiyankeshi;       //实验课时
double zongkeshi;         //单个教学任务总课时
};
struct teacher tea[100];
struct teacher *tt;
int n=0;int i=0;
void shuru();
void chaxun();
void xiugai();
void shanchu();
void liulan();
int main()   //主函数
{
int t,a[20];
system ("color 8B");
 printf("                           欢迎进入教师工作量管理系统        \n");
 printf("--------------------------------------------------------------------------------\n");
 do
{
 printf("                          **    按1， 输入信息    ***  \n");
 printf("                         ***    按2， 修改信息    ***  \n");
 printf("                         ***    按3， 删除信息    ***  \n");
 printf("                         ***    按4， 浏览信息    ***  \n");
 printf("                         ***    按5， 查询信息    ***  \n");
 printf("                         ***    按0， 退出系统    ***  \n");
 printf("--------------------------------------------------------------------------------\n");
 printf(" 请输入选项（0-5）：");
 scanf("%d",&t);
 if(t<0||t>5)
 {do
{
printf("请重新输入选项（0-5）：");
scanf("%d",&t);
}
while(t<0||t>5);}
switch(t)
{
case 0:
 break;
case 1:
 shuru();break;
case 2:
 xiugai();break;
case 3:
 shanchu();break;
case 4:
 liulan();break;
case 5:
 chaxun();break;
}}while(t!=0);
}
void shuru()      //输入函数
{
	int j;int d=1;
	if(n==0)
	tt=tea;
printf("请输入教师号：");
scanf("%s",tt->number);
printf("请输入姓名：");
scanf("%s",tt->xingming);
printf("请输入性别:");
scanf("%s",tt->sex);
printf("请输入职称；");
scanf("%s",&tt->zhicheng);
printf("请输入任教课程:");
scanf("%s",&tt->kecheng);
printf("请输入班级：");
scanf("%d",&tt->banji);
printf("请输入班级数目(>=2)：");
scanf("%d",&tea[i].shumu);
if(tea[i].shumu<2)
do
{
printf("请重新输入（>=2):");
scanf("%d",&tea[i].shumu);
}while(tea[i].shumu<2);

printf("请输入理论课时：");
scanf("%lf",&tt->lilunkeshi);
printf("请输入实验课时:");
scanf("%lf",&tt->shiyankeshi);
n++;i++;tt++;
printf("信息输入完毕！\n");
printf("--------------------------------------------------------------------------------\n");
}
void xiugai()   //修改函数
{
int c;
 int j;
 int d=0;
 int s=0;
 int z=0;
 char a[100];
 printf("请输入教师号：");
 scanf("%s",&a);
 for( j=0;j<n;j++)
{
if(strcmp(tea[j].number,a)==0)//strcmp(tea[j].number,a)，如果a与tea[j].number相等，则输出为0
  {
  do{
printf("--------------------------------------------------------------------------------\n");
     printf("     修改教师号，  请按1    \n");
     printf("     修改姓名  ，  请按2    \n");
     printf("     修改性别  ，  请按3    \n");
     printf("     修改职称  ，  请按4    \n");
     printf("     修改任教课程，请按5    \n");
     printf("     修改班级 ，   请按6    \n");
     printf("     修改班级数目，请按7    \n");
     printf("     修改理论课时，请按8    \n");
     printf("     修改实验课时，请按9    \n");
     printf("     退出系统    ，请按0    \n");
     printf("--------------------------------------------------------------------------------\n");
     printf("请输入选项：");
     scanf("%d",&c);
     switch(c)
    {
      case 0:
      break;
      case 1:
       printf("请输入新教师号：");
       scanf("%s",tea[j].number);break;
      case 2:
       printf("请输入新的姓名：");
       scanf("%s",tea[j].xingming);break;
      case 3:
       printf("请输入新的性别：");
       scanf("%s",tea[j].sex);break;
      case 4:
       printf("请输入新的职称：");
       scanf("%s",tea[j].zhicheng);break;
      case 5:
       printf("请输入新的任教课程：");
       scanf("%s",tea[j].kecheng);break;
      case 6:
       printf("请输入新的班级：");
       scanf("%d",&tea[j].banji);break;
      case 7:
       printf("请输入新的班级数目：");
       scanf("%d",&tea[j].shumu);break;
      case 8:
       printf("请输入新的理论课时:");
       scanf("%ld",&tea[j].lilunkeshi);break;
      case 9:
       printf("请输入新的实验课时：");
       scanf("%ld",&tea[j].shiyankeshi);break;

}
 }while(c!=0);
s=1;
 }}
printf("--------------------------------------------------------------------------------\n");
if(s!=1)
printf("输入无效，请核实后再输入！\n");
printf("--------------------------------------------------------------------------------\n");
}
void shanchu()   //删除函数
{
int j;
int d=0;int dd=n;
int s;
char a[100];
if(n!=0)
{
printf("请输入要删除的教师号：");
scanf("%s",&a);
do
{for(j=0;j<n;j++)
{
  if(strcmp(a,tea[j].number)==0)
    {s=j;
	d=1;}
	dd--;
}
}while(strcmp(a,tea[j].number)!=0&&dd!=0);
if(d==1){
   if(s!=(n-1))
{
	for(s;s<n;s++)
	{
	tea[s].banji=tea[s+1].banji;
	strcpy(tea[s].kecheng,tea[s+1].kecheng);/*将tea[s+1].kecheng复制给tea[s].kecheng*/
	tea[s].lilunkeshi=tea[s+1].lilunkeshi;
    strcpy(tea[s].number,tea[s+1].number);
	strcpy(tea[s].sex,tea[s+1].sex);
	tea[s].shiyankeshi=tea[s+1].shiyankeshi;
    tea[s].shumu=tea[s+1].shumu;
    strcpy(tea[s].xingming,tea[s+1].xingming);
    strcpy(tea[s].zhicheng,tea[s+1].zhicheng);
    tea[s].zongkeshi=tea[s+1].zongkeshi;
}
	n--;tt--;
	printf("删除完毕！！！\n");
}else{n--;tt--;}}
else{printf("输入无效！！！\n");
}
}
else
printf("输入无效！！！\n");
printf("删除完毕！！！\n");
printf("--------------------------------------------------------------------------------\n");}
void liulan()   //浏览函数
{
	if(n!=0)
	{
int j;
for( j=0;j<n;j++)
{
tea[j].zongkeshi=tea[j].lilunkeshi+tea[j].shiyankeshi;
printf("--------------------------------------------------------------------------------\n");
 printf("教师号\t姓名\t性别\n");
printf("%s\t%s\t%s\n",tea[j].number,tea[j].xingming,tea[j].sex);
 printf("职称\t任教课程\t班级\n");
printf("%s\t%s\t\t%d\n",tea[j].zhicheng,tea[j].kecheng,tea[j].banji);
 printf("班级数目\t理论课时\t\t实验课时\t\t教学任务总课时\n");
printf("%d\t\t%lf\t\t",tea[j].shumu,tea[j].lilunkeshi);
 printf("%lf\t\t",tea[j].shiyankeshi);
 printf("%lf",tea[j].zongkeshi);
 printf("\n");
printf("--------------------------------------------------------------------------------\n");}
	}
	else
	printf("数据为空！！！\n");
	printf("--------------------------------------------------------------------------------\n");
}
void chaxun()   //查询函数
{
int a;
printf("--------------------------------------------------------------------------------\n");
printf("按1，依教师号查询\n");
printf("按2，依姓名查询\n");
printf("请输入数字查询（1或2）：");
scanf("%d",&a);
if(a!=1&&a!=2)
{do
{
printf("请重新输入数字查询（1或2）：");
scanf("%d",&a);
}while(a!=1&&a!=2);
}
switch(a)
{
case 1:
	{	int j;
  char q[10];
int d=0;
printf("请输入教师号：");
scanf("%s",&q);
for( j=0;j<n;j++)
{
 if(strcmp(q,tea[j].number)==0)
{
tea[j].zongkeshi=tea[j].lilunkeshi+tea[j].shiyankeshi;
printf("--------------------------------------------------------------------------------\n");
printf("教师号\t姓名\t性别\n");
printf("%s\t%s\t%s\n",tea[j].number,tea[j].xingming,tea[j].sex);
printf("职称\t任教课程\t班级\n");
printf("%s\t%s\t\t%d\n",tea[j].zhicheng,tea[j].kecheng,tea[j].banji);
printf("班级数目\t理论课时\t\t实验课时\t\t教学任务总课时\n");
printf("%d\t\t%lf\t\t",tea[j].shumu,tea[j].lilunkeshi);
printf("%lf\t\t",tea[j].shiyankeshi);
printf("%lf",tea[j].zongkeshi);
printf("\n");
printf("--------------------------------------------------------------------------------\n");
d=1;
}}
if(d==0)
printf("请核实后再输入！！！\n");}
break;
case 2:
	{
	int j;
	char q[10];
int d=0;
printf("请输入姓名：");
scanf("%s",&q);
for( j=0;j<n;j++)
{
if(strcmp(q,tea[j].xingming)==0)
{
  tea[j].zongkeshi=tea[j].lilunkeshi+tea[j].shiyankeshi;
printf("--------------------------------------------------------------------------------\n");
printf("教师号\t姓名\t性别\n");
printf("%s\t%s\t%s\n",tea[j].number,tea[j].xingming,tea[j].sex);
printf("职称\t任教课程\t班级\n");
printf("%s\t%s\t\t%d\n",tea[j].zhicheng,tea[j].kecheng,tea[j].banji);
printf("班级数目\t理论课时\t\t实验课时\t\t教学任务总课时\n");
printf("%d\t\t%lf\t\t",tea[j].shumu,tea[j].lilunkeshi);
printf("%lf\t\t",tea[j].shiyankeshi);
printf("%lf",tea[j].zongkeshi);
printf("\n");
printf("--------------------------------------------------------------------------------\n");
 d=1;
 }
}
if(d==0)
printf("请核实后再输入！！！\n");}
break;
}
}
