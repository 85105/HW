#include<iostream>
#include<memory>
#include<string.h>
using namespace std;
#define SIZE 256 
int main(int argc, const char** argv) {
    int number,c,i;
    char **arr,temp[50];
    int semophor=0;
    char arr2[] = "print"; 
    char arr3[] = "exit";
    cout<<"Please input the max number of words to be stored."<<endl;
    cin>>number;
    arr=new char *[number];
    for(char i=0;i<number+2;i++){
         arr[i]=new char [20];
        memset(arr[i],0,20*sizeof(char));
    }
    for(;;i++){
        cout<<"Please input the word, or command(print/exit) : ";
        scanf("%s[^\n]",arr[i]);
        if(strcmp(arr[i], arr2)==0){
            semophor=1;
            memset(arr[i],0,20*sizeof(char));
            if(i>0){
            for(int k=0; k<i-1; k++) {
                for(int j=k+1; j<i ; j++){
                if(strcmp(arr[k], arr[j])>0){
                    strcpy(temp, arr[k]);
                    strcpy(arr[k], arr[j]);
                    strcpy(arr[j], temp);
                        }
                    }   
                }
            }
            for(int a=0;a<=i;a++){
            printf((arr[a]));
            printf(" ");
            } 
            printf("\n"); 
            i--;
        }

        else if (strcmp(arr[i], arr3)==0){
            break;
        }
        
        else if(i==number){
            printf("full");
            printf("\n");
            i--;
            continue;
        }
        else{ 
        if(strlen(arr[i])>20){
            cout<<"��J�W�L20"<<endl;
            memset(arr[i],0,20*sizeof(char));
            i--;
            continue;
            }
        }
    }
    return 0;
}






// #include<iostream>
// #include<memory>
// #include <string.h>
// using namespace std;
// #define SIZE 256 
// int main(int argc, const char** argv) {
//     int number,c,i;
//     char **arr,temp[50];
//     int semophor=0;
//     char arr2[] = "print"; 
//     char arr3[] = "exit";
//     cout<<"Please input the max number of words to be stored."<<endl;
//     cin>>number;
//     arr=new char *[number];
//     for(char i=0;i<number+50;i++){
//          arr[i]=new char [20];
//         memset(arr[i],0,20*sizeof(char));
//     }
//     for(;;i++){
//         cout<<"Please input the word, or command(print/exit) : "<<endl;
//         scanf("%s[^\n]",arr[i]);
//         if(strcmp(arr[i], arr2)==0){
//             semophor=1;
//             break;
//         }
//         else if (strcmp(arr[i], arr3)==0){
//             semophor=2;
//             break;
//         }
//         else if(i>=number){
//             printf("full");
//             printf("\n");
//             continue;
//         }
//         else{ 
//         if(strlen(arr[i])>20){
//             cout<<"��J�W�L20"<<endl;
//             memset(arr[i],0,20*sizeof(char));
//             i--;
//             continue;
//             }
//             if(i>1){
//             for(int k=0; k<i-1; k++) {
//                 for(int j=k+1; j<i ; j++){
//                 if(strcmp(arr[k], arr[j])>0){
//                     strcpy(temp, arr[k]);
//                     strcpy(arr[k], arr[j]);
//                     strcpy(arr[j], temp);
//             }
//         }
//     }
//             }

//         }
//     }if(semophor==1){
//         for(int a=0;a<number;a++){
//             if (strcmp(arr[a], arr2)==0){  
//             }
//             else{printf((arr[a]));
//             printf(" ");
//             }  
//         }
//     }else
//     return 0;
// }

// #include<memory>
// #include<iostream>
// #include <string.h>
// using namespace std;
// int main(int argc, const char** argv) {
//     char **array;
//     int number;
//     cout<<"Please input the max number of words to be stored."<<endl;
//     cin>>number;
//     array=new char *[number];
//     for(char i=0;i<number;i++){
//          array[i]=new char [5];
//         memset(array[i],57,5*sizeof(char));
//     }
//     memset(array[1],55,5*sizeof(char));
//     return 0;
// }






// #include<iostream>
// #include <string.h>
// using namespace std;
// int main(int argc, const char** argv) {
//     char str[50];
//     int number;
//     for(int i=0;i<3;i++){
//          cout<<"Please input the word, or command(print/exit) : "<<endl;
//         //cin.getline(str,50);
//         cin>>str;
//          if(strlen(str)>10){
//             cout<<"���s��J"<<endl;
//             continue;
//             }
//             cout<<str<<endl<<strlen(str)<<endl;
//     }
//     cout<<str<<endl;
//     // while(true){
//     //     cout<<"Please input the word, or command(print/exit) : "<<endl;
//     //     cin.getline(str,50);
//     //      if(strlen(str)>10){
//     //         cout<<"���s��J"<<endl;
//     //         continue;
//     //         }
//     //         cout<<str<<endl<<strlen(str)<<endl;
        
//     // }
//     return 0;
// }




// #include <iostream>  // �ޤJ�зǿ�J����X��Ƽ��D��
// #include <string.h>    // �ޤJ�r���Ƽ��D��
// using namespace std;
// int main(int argc, const char** argv)
// {
//   char instr[50];
//   cout << "�п�J�r��G";                  // ��ܰT���r��
//   cin.getline (instr,11, '\n');           // ���o��J�r��C
//   cout << "�r����׬��G" << strlen(instr)  // ��ܦr�����,strlen���]�t\0
//        << endl << endl;
//   return 0;
// }





// #include<stdio.h>
// #include <string.h>
 
// int main()
// {
//     int i, j,size;
//     char str[10][50], temp[50];
//     char *p=&str[0][0];
 
//     printf("?�J10???:\n");
 
//     for(i=0; i<5; ++i) {
//         scanf("%s[^\n]",str[i]);
//     }
//     size=strlen(str[2]);
//      printf("%d\n",size);
//      printf((str[2]));
//      printf("\n");
//      printf((p+2*50+1));
//      printf("\n");
//      printf((p+2));
 
//     for(i=0; i<9; ++i) {
//         for(j=i+1; j<10 ; ++j)
//         {
//             if(strcmp(str[i], str[j])>0)
//             {
//                 strcpy(temp, str[i]);
//                 strcpy(str[i], str[j]);
//                 strcpy(str[j], temp);
//             }
//         }
//     }
//     printf("\n�ƧǦZ: \n");
//     for(i=0; i<10; ++i)
//     {
//         puts(str[i]);
//     }
    
// }






// int x=8;//�ŧi�@�Ӿ�ƫ��Ax�ܼơA��Ȭ�8
    // int size,sizear; //�ŧi�@�Ӿ�ƫ��Asize�ܼơA�Ψ��x�sx���줸�դj�p
    // int arr[1];
    // int *p;
    // size=sizeof(x);
    // sizear=sizeof(arr);
    // printf("%d\n",size);
    // printf("%d\n",sizear);
    // printf("%d\n",sizeof(p));
    // return 0;




// #include<iostream>
// #include<memory>
// #include<string.h>
// using namespace std;
// #define SIZE 256 
// int main(int argc, const char** argv) {
//     int number,c,i;
//     char **arr,temp[50];
//     int semophor=0;
//     char arr2[] = "print"; 
//     char arr3[] = "exit";
//     cout<<"Please input the max number of words to be stored."<<endl;
//     cin>>number;
//     arr=new char *[number];
//     for(char i=0;i<number+2;i++){
//          arr[i]=new char [20];
//         memset(arr[i],0,20*sizeof(char));
//     }
//     for(;;i++){
//         cout<<"Please input the word, or command(print/exit) : ";
//         scanf("%s[^\n]",arr[i]);
//         if(strcmp(arr[i], arr2)==0){
//             semophor=1;
//             memset(arr[i],0,20*sizeof(char));
//             if(i>0){
//             for(int k=0; k<i-1; k++) {
//                 for(int j=k+1; j<i ; j++){
//                 if(strcmp(arr[k], arr[j])>0){
//                     strcpy(temp, arr[k]);
//                     strcpy(arr[k], arr[j]);
//                     strcpy(arr[j], temp);
//                         }
//                     }   
//                 }
//             }
//             for(int a=0;a<=i;a++){
//             printf((arr[a]));
//             printf(" ");
//             } 
//             printf("\n"); 
//             i--;
//         }

//         else if (strcmp(arr[i], arr3)==0){
//             break;
//         }
        
//         else if(i==number){
//             printf("full");
//             printf("\n");
//             i--;
//             continue;
//         }
//         else{ 
//         if(strlen(arr[i])>20){
//             cout<<"��J�W�L20"<<endl;
//             memset(arr[i],0,20*sizeof(char));
//             i--;
//             continue;
//             }
//         }
//     }
//     return 0;
// }




// #include<memory>
// #include<iostream>
// #include <string.h>
// using namespace std;
// int main(int argc, const char** argv) {
//     char **array;
//     int number;
//     cout<<"Please input the max number of words to be stored."<<endl;
//     cin>>number;
//     array=new char *[number];
//     for(char i=0;i<number;i++){
//          array[i]=new char [5];
//         memset(array[i],57,5*sizeof(char));
//     }
//     memset(array[1],55,5*sizeof(char));
//     return 0;
// }






// #include<iostream>
// #include <string.h>
// using namespace std;
// int main(int argc, const char** argv) {
//     char str[50];
//     int number;
//     for(int i=0;i<3;i++){
//          cout<<"Please input the word, or command(print/exit) : "<<endl;
//         //cin.getline(str,50);
//         cin>>str;
//          if(strlen(str)>10){
//             cout<<"���s��J"<<endl;
//             continue;
//             }
//             cout<<str<<endl<<strlen(str)<<endl;
//     }
//     cout<<str<<endl;
//     // while(true){
//     //     cout<<"Please input the word, or command(print/exit) : "<<endl;
//     //     cin.getline(str,50);
//     //      if(strlen(str)>10){
//     //         cout<<"���s��J"<<endl;
//     //         continue;
//     //         }
//     //         cout<<str<<endl<<strlen(str)<<endl;
        
//     // }
//     return 0;
// }




// #include <iostream>  // �ޤJ�зǿ�J����X��Ƽ��D��
// #include <string.h>    // �ޤJ�r���Ƽ��D��
// using namespace std;
// int main(int argc, const char** argv)
// {
//   char instr[50];
//   cout << "�п�J�r��G";                  // ��ܰT���r��
//   cin.getline (instr,11, '\n');           // ���o��J�r��C
//   cout << "�r����׬��G" << strlen(instr)  // ��ܦr�����,strlen���]�t\0
//        << endl << endl;
//   return 0;
// }





// #include<stdio.h>
// #include <string.h>
 
// int main()
// {
//     int i, j,size;
//     char str[10][50], temp[50];
//     char *p=&str[0][0];
 
//     printf("?�J10???:\n");
 
//     for(i=0; i<5; ++i) {
//         scanf("%s[^\n]",str[i]);
//     }
//     size=strlen(str[2]);
//      printf("%d\n",size);
//      printf((str[2]));
//      printf("\n");
//      printf((p+2*50+1));
//      printf("\n");
//      printf((p+2));
 
//     for(i=0; i<9; ++i) {
//         for(j=i+1; j<10 ; ++j)
//         {
//             if(strcmp(str[i], str[j])>0)
//             {
//                 strcpy(temp, str[i]);
//                 strcpy(str[i], str[j]);
//                 strcpy(str[j], temp);
//             }
//         }
//     }
//     printf("\n�ƧǦZ: \n");
//     for(i=0; i<10; ++i)
//     {
//         puts(str[i]);
//     }
    
// }






// int x=8;//�ŧi�@�Ӿ�ƫ��Ax�ܼơA��Ȭ�8
    // int size,sizear; //�ŧi�@�Ӿ�ƫ��Asize�ܼơA�Ψ��x�sx���줸�դj�p
    // int arr[1];
    // int *p;
    // size=sizeof(x);
    // sizear=sizeof(arr);
    // printf("%d\n",size);
    // printf("%d\n",sizear);
    // printf("%d\n",sizeof(p));
    // return 0;