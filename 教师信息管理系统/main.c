#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TURE 1714010204
struct teacher{
char number[100];      //��ʦ��
char xingming[100];   //��ʦ��
char sex[3];        //�Ա�
char zhicheng[100];   //ְ��
char kecheng[100];   //�ν̿γ�
int banji;     //�༶
int shumu;        //�༶��Ŀ
double lilunkeshi;        //���ۿ�ʱ
double shiyankeshi;       //ʵ���ʱ
double zongkeshi;         //������ѧ�����ܿ�ʱ
};
struct teacher tea[100];
struct teacher *tt;
int n=0;int i=0;
void shuru();
void chaxun();
void xiugai();
void shanchu();
void liulan();
int main()   //������
{
int t,a[20];
system ("color 8B");
 printf("                           ��ӭ�����ʦ����������ϵͳ        \n");
 printf("--------------------------------------------------------------------------------\n");
 do
{
 printf("                          **    ��1�� ������Ϣ    ***  \n");
 printf("                         ***    ��2�� �޸���Ϣ    ***  \n");
 printf("                         ***    ��3�� ɾ����Ϣ    ***  \n");
 printf("                         ***    ��4�� �����Ϣ    ***  \n");
 printf("                         ***    ��5�� ��ѯ��Ϣ    ***  \n");
 printf("                         ***    ��0�� �˳�ϵͳ    ***  \n");
 printf("--------------------------------------------------------------------------------\n");
 printf(" ������ѡ�0-5����");
 scanf("%d",&t);
 if(t<0||t>5)
 {do
{
printf("����������ѡ�0-5����");
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
void shuru()      //���뺯��
{
	int j;int d=1;
	if(n==0)
	tt=tea;
printf("�������ʦ�ţ�");
scanf("%s",tt->number);
printf("������������");
scanf("%s",tt->xingming);
printf("�������Ա�:");
scanf("%s",tt->sex);
printf("������ְ�ƣ�");
scanf("%s",&tt->zhicheng);
printf("�������ν̿γ�:");
scanf("%s",&tt->kecheng);
printf("������༶��");
scanf("%d",&tt->banji);
printf("������༶��Ŀ(>=2)��");
scanf("%d",&tea[i].shumu);
if(tea[i].shumu<2)
do
{
printf("���������루>=2):");
scanf("%d",&tea[i].shumu);
}while(tea[i].shumu<2);

printf("���������ۿ�ʱ��");
scanf("%lf",&tt->lilunkeshi);
printf("������ʵ���ʱ:");
scanf("%lf",&tt->shiyankeshi);
n++;i++;tt++;
printf("��Ϣ������ϣ�\n");
printf("--------------------------------------------------------------------------------\n");
}
void xiugai()   //�޸ĺ���
{
int c;
 int j;
 int d=0;
 int s=0;
 int z=0;
 char a[100];
 printf("�������ʦ�ţ�");
 scanf("%s",&a);
 for( j=0;j<n;j++)
{
if(strcmp(tea[j].number,a)==0)//strcmp(tea[j].number,a)�����a��tea[j].number��ȣ������Ϊ0
  {
  do{
printf("--------------------------------------------------------------------------------\n");
     printf("     �޸Ľ�ʦ�ţ�  �밴1    \n");
     printf("     �޸�����  ��  �밴2    \n");
     printf("     �޸��Ա�  ��  �밴3    \n");
     printf("     �޸�ְ��  ��  �밴4    \n");
     printf("     �޸��ν̿γ̣��밴5    \n");
     printf("     �޸İ༶ ��   �밴6    \n");
     printf("     �޸İ༶��Ŀ���밴7    \n");
     printf("     �޸����ۿ�ʱ���밴8    \n");
     printf("     �޸�ʵ���ʱ���밴9    \n");
     printf("     �˳�ϵͳ    ���밴0    \n");
     printf("--------------------------------------------------------------------------------\n");
     printf("������ѡ�");
     scanf("%d",&c);
     switch(c)
    {
      case 0:
      break;
      case 1:
       printf("�������½�ʦ�ţ�");
       scanf("%s",tea[j].number);break;
      case 2:
       printf("�������µ�������");
       scanf("%s",tea[j].xingming);break;
      case 3:
       printf("�������µ��Ա�");
       scanf("%s",tea[j].sex);break;
      case 4:
       printf("�������µ�ְ�ƣ�");
       scanf("%s",tea[j].zhicheng);break;
      case 5:
       printf("�������µ��ν̿γ̣�");
       scanf("%s",tea[j].kecheng);break;
      case 6:
       printf("�������µİ༶��");
       scanf("%d",&tea[j].banji);break;
      case 7:
       printf("�������µİ༶��Ŀ��");
       scanf("%d",&tea[j].shumu);break;
      case 8:
       printf("�������µ����ۿ�ʱ:");
       scanf("%ld",&tea[j].lilunkeshi);break;
      case 9:
       printf("�������µ�ʵ���ʱ��");
       scanf("%ld",&tea[j].shiyankeshi);break;

}
 }while(c!=0);
s=1;
 }}
printf("--------------------------------------------------------------------------------\n");
if(s!=1)
printf("������Ч�����ʵ�������룡\n");
printf("--------------------------------------------------------------------------------\n");
}
void shanchu()   //ɾ������
{
int j;
int d=0;int dd=n;
int s;
char a[100];
if(n!=0)
{
printf("������Ҫɾ���Ľ�ʦ�ţ�");
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
	strcpy(tea[s].kecheng,tea[s+1].kecheng);/*��tea[s+1].kecheng���Ƹ�tea[s].kecheng*/
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
	printf("ɾ����ϣ�����\n");
}else{n--;tt--;}}
else{printf("������Ч������\n");
}
}
else
printf("������Ч������\n");
printf("ɾ����ϣ�����\n");
printf("--------------------------------------------------------------------------------\n");}
void liulan()   //�������
{
	if(n!=0)
	{
int j;
for( j=0;j<n;j++)
{
tea[j].zongkeshi=tea[j].lilunkeshi+tea[j].shiyankeshi;
printf("--------------------------------------------------------------------------------\n");
 printf("��ʦ��\t����\t�Ա�\n");
printf("%s\t%s\t%s\n",tea[j].number,tea[j].xingming,tea[j].sex);
 printf("ְ��\t�ν̿γ�\t�༶\n");
printf("%s\t%s\t\t%d\n",tea[j].zhicheng,tea[j].kecheng,tea[j].banji);
 printf("�༶��Ŀ\t���ۿ�ʱ\t\tʵ���ʱ\t\t��ѧ�����ܿ�ʱ\n");
printf("%d\t\t%lf\t\t",tea[j].shumu,tea[j].lilunkeshi);
 printf("%lf\t\t",tea[j].shiyankeshi);
 printf("%lf",tea[j].zongkeshi);
 printf("\n");
printf("--------------------------------------------------------------------------------\n");}
	}
	else
	printf("����Ϊ�գ�����\n");
	printf("--------------------------------------------------------------------------------\n");
}
void chaxun()   //��ѯ����
{
int a;
printf("--------------------------------------------------------------------------------\n");
printf("��1������ʦ�Ų�ѯ\n");
printf("��2����������ѯ\n");
printf("���������ֲ�ѯ��1��2����");
scanf("%d",&a);
if(a!=1&&a!=2)
{do
{
printf("�������������ֲ�ѯ��1��2����");
scanf("%d",&a);
}while(a!=1&&a!=2);
}
switch(a)
{
case 1:
	{	int j;
  char q[10];
int d=0;
printf("�������ʦ�ţ�");
scanf("%s",&q);
for( j=0;j<n;j++)
{
 if(strcmp(q,tea[j].number)==0)
{
tea[j].zongkeshi=tea[j].lilunkeshi+tea[j].shiyankeshi;
printf("--------------------------------------------------------------------------------\n");
printf("��ʦ��\t����\t�Ա�\n");
printf("%s\t%s\t%s\n",tea[j].number,tea[j].xingming,tea[j].sex);
printf("ְ��\t�ν̿γ�\t�༶\n");
printf("%s\t%s\t\t%d\n",tea[j].zhicheng,tea[j].kecheng,tea[j].banji);
printf("�༶��Ŀ\t���ۿ�ʱ\t\tʵ���ʱ\t\t��ѧ�����ܿ�ʱ\n");
printf("%d\t\t%lf\t\t",tea[j].shumu,tea[j].lilunkeshi);
printf("%lf\t\t",tea[j].shiyankeshi);
printf("%lf",tea[j].zongkeshi);
printf("\n");
printf("--------------------------------------------------------------------------------\n");
d=1;
}}
if(d==0)
printf("���ʵ�������룡����\n");}
break;
case 2:
	{
	int j;
	char q[10];
int d=0;
printf("������������");
scanf("%s",&q);
for( j=0;j<n;j++)
{
if(strcmp(q,tea[j].xingming)==0)
{
  tea[j].zongkeshi=tea[j].lilunkeshi+tea[j].shiyankeshi;
printf("--------------------------------------------------------------------------------\n");
printf("��ʦ��\t����\t�Ա�\n");
printf("%s\t%s\t%s\n",tea[j].number,tea[j].xingming,tea[j].sex);
printf("ְ��\t�ν̿γ�\t�༶\n");
printf("%s\t%s\t\t%d\n",tea[j].zhicheng,tea[j].kecheng,tea[j].banji);
printf("�༶��Ŀ\t���ۿ�ʱ\t\tʵ���ʱ\t\t��ѧ�����ܿ�ʱ\n");
printf("%d\t\t%lf\t\t",tea[j].shumu,tea[j].lilunkeshi);
printf("%lf\t\t",tea[j].shiyankeshi);
printf("%lf",tea[j].zongkeshi);
printf("\n");
printf("--------------------------------------------------------------------------------\n");
 d=1;
 }
}
if(d==0)
printf("���ʵ�������룡����\n");}
break;
}
}
