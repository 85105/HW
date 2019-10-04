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
//FILE *f1 = fopen("in.txt", "r");//只讀方式開啟a.txt，該檔案必須存在
//FILE *f2 = fopen("b.txt", "w");//以只寫方式開啟b.txt，該檔案可以不存在
//if (f1 == NULL)//如果檔案不存在，直接結束
//{
//  return 0;
//}
//char buf[10000],a;//緩衝區
//int b;
//
//while (!feof(f1))
//{
//  //memset(buf, 0, sizeof(buf));//清空緩衝區
//  //fgets(buf, sizeof(buf), f1);//從檔案中讀取一行資料存入緩衝區（fgets遇到回車才會結束，不對空格和回車做任何轉換就錄入到緩衝區，結束後再往緩衝區寫多一個\0，所以它是讀一行資料）
// //fputs(buf, f2);
// fscanf(f1,"%s\n",&buf);
// //printf("%s\n",buf);
// if(!strcmp(buf,"w")){
//     fscanf(f1,"%d\n",&b);
//     printf("%d\n",b);
// }
// //printf("%c\n",a);
//}
//fclose(f1);//注意最後關閉檔案
//fclose(f2);//注意最後關閉檔案
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