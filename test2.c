#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
//#define w w
///int main(void){
///FILE *fp = fopen("123456.txt", "r");
///char line[2];
///while ( fgets(line, sizeof(line), fp) )
///{
///printf("%s", line);
///}
///fclose(fp);
///}

int main(){
//FILE *f1 = fopen("in.txt", "r");//�uŪ�覡�}��a.txt�A���ɮץ����s�b
//FILE *f2 = fopen("b.txt", "w");//�H�u�g�覡�}��b.txt�A���ɮץi�H���s�b
//if (f1 == NULL)//�p�G�ɮפ��s�b�A��������
//{
//  return 0;
//}
//char buf[10000],a;//�w�İ�
//int b;
//
//while (!feof(f1))
//{
//  //memset(buf, 0, sizeof(buf));//�M�Žw�İ�
//  //fgets(buf, sizeof(buf), f1);//�q�ɮפ�Ū���@���Ʀs�J�w�İϡ]fgets�J��^���~�|�����A����Ů�M�^���������ഫ�N���J��w�İϡA������A���w�İϼg�h�@��\0�A�ҥH���OŪ�@���ơ^
// //fputs(buf, f2);
// fscanf(f1,"%s\n",&buf);
// //printf("%s\n",buf);
// if(!strcmp(buf,"w")){
//     fscanf(f1,"%d\n",&b);
//     printf("%d\n",b);
// }
// //printf("%c\n",a);
//}
//fclose(f1);//�`�N�̫������ɮ�
//fclose(f2);//�`�N�̫������ɮ�
//}

char a[19];
int i=0;
while(1){
    scanf("%c",&a[i]);
    if(a[i]=='\0')
        break;
    i++;
}
////a[i]='\0';
printf("%s\n",a);
}
//for(i=0;i<13;i++)
//printf("%c\n",a[i]);
//}