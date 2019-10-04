#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
typedef struct node{
    int data;
    struct node *next;
}Node;
Node *top=NULL;//////cold
Node *head=NULL;/////hot
bool find(int,Node*);
bool isfull(Node*,int);
int push_cold(int,int);
int push_hot(int,int);
void del(int,Node**);
int CountNode(Node*);
bool isempty(Node*);
void DelLastNode(Node**);
int DelLastNode_hot(Node**);
void display(Node*);



void display(Node *top){
    Node *p=top;
    if(top==NULL){
        printf("empty");
    }
    else{
        while(p!=NULL){

            printf("display[] %d",p->data);
            p=p->next;
            if (p==NULL) 
            printf("\n");
            
        }
        printf("---------------------------------\n");
    }
}

int push_cold(int y,int length){
    if(CountNode(top)==length){
        DelLastNode(&top);
        push_cold(y,length);
    }
    else{
        Node *NewNode=malloc(sizeof(Node));
        NewNode->next=top;
        NewNode->data=y;
        top=NewNode;


    }
}

int push_hot(int y,int length){
    if(CountNode(head)==length){
        DelLastNode(&head);
        push_hot(y,length);
    }
    else{
        Node *NewNode=malloc(sizeof(Node));
        NewNode->next=head;
        NewNode->data=y;
        head=NewNode;


    }
}

bool find(int x,Node *top){
    Node *p;
    p=top;
    while(p!=NULL){
        if(p->data==x)
        return 1;
        else{
            p=p->next;
        }
    }
    return 0;
    
}

void del(int s,Node **p){
    Node *a=malloc(sizeof(Node));
    printf("a的位址%d\n",a);
    a=*p;
    Node *PreNode=malloc(sizeof(Node));
    PreNode->next=a;
    printf("p的位址%d\n",p);
    printf("p的位址的值%d\n",*p);
    printf("p的位址的值的data%d\n",(*p)->data);
    printf("a的位址%d\n",a);
    printf("a的位址的data%d\n",(a)->data);
    printf("a的next%d\n",(a->next));
    printf("a的next的位置%d\n",&(a->next));
    printf("pre%d\n",(PreNode));
    printf("pre的next%d\n",(PreNode->next));
    printf("pre的data%d\n",(PreNode->data));
    while((a)->data!=s){
        PreNode=a;
        (a)=(a)->next;
    }
    printf("--------------------------------1-\n");
    printf("p的位址%d\n",p);
    printf("p的位址的值%d\n",*p);
    printf("p的位址的值的data%d\n",(*p)->data);
    printf("a的位址%d\n",a);
    printf("a的位址的data%d\n",(a)->data);
    printf("a的next%d\n",(a->next));
    printf("a的next的位置%d\n",&(a->next));
    printf("pre%d\n",(PreNode));
    printf("pre的next%d\n",(PreNode->next));
    printf("pre的data%d\n",(PreNode->data));
    if((*p) == NULL)
    {   printf("--------------------------------2-\n");
        printf("p的位址%d\n",p);
    printf("p的位址的值%d\n",*p);
    printf("p的位址的值的data%d\n",(*p)->data);
    printf("a的位址%d\n",a);
    printf("a的位址的data%d\n",(a)->data);
    printf("a的next%d\n",(a->next));
    printf("a的next的位置%d\n",&(a->next));
    printf("pre%d\n",(PreNode));
    printf("pre的next%d\n",(PreNode->next));
    printf("pre的data%d\n",(PreNode->data));
    }
    else if(a==*p){
        printf("--------------------------------3-\n");
printf("p的位址%d\n",p);
    printf("p的位址的值%d\n",*p);
    printf("p的位址的值的data%d\n",(*p)->data);
    printf("a的位址%d\n",a);
    printf("a的位址的data%d\n",(a)->data);
    printf("a的next%d\n",(a->next));
    printf("a的next的位置%d\n",&(a->next));
    printf("pre%d\n",(PreNode));
    printf("pre的next%d\n",(PreNode->next));
    printf("pre的data%d\n",(PreNode->data));
        *p=(a->next);
        printf("--------------------------------4-\n");
printf("p的位址%d\n",p);
    printf("p的位址的值%d\n",*p);
    if(*p!=0)
    printf("p的位址的值的data%d\n",(*p)->data);
    printf("a的位址%d\n",a);
    printf("a的位址的data%d\n",(a)->data);
    printf("a的next%d\n",(a->next));
    printf("a的next的位置%d\n",&(a->next));
    printf("pre%d\n",(PreNode));
    printf("pre的next%d\n",(PreNode->next));
    printf("pre的data%d\n",(PreNode->data));
printf("--------------------------------------------5-\n");
        free(a);
        //return p;
    }else 
    {printf("--------------------------------6-\n");
printf("p的位址%d\n",p);
    printf("p的位址的值%d\n",*p);
    printf("p的位址的值的data%d\n",(*p)->data);
    printf("a的位址%d\n",a);
    printf("a的位址的data%d\n",(a)->data);
    printf("a的next%d\n",(a->next));
    printf("a的next的位置%d\n",&(a->next));
    printf("pre%d\n",(PreNode));
    printf("pre的next%d\n",(PreNode->next));
    printf("pre的data%d\n",(PreNode->data));
        (PreNode)->next=(a)->next;
        printf("--------------------------------7-\n");
printf("p的位址%d\n",p);
    printf("p的位址的值%d\n",*p);
    printf("p的位址的值的data%d\n",(*p)->data);
    printf("a的位址%d\n",a);
    printf("a的位址的data%d\n",(a)->data);
    printf("a的next%d\n",(a->next));
    printf("a的next的位置%d\n",&(a->next));
    printf("pre%d\n",(PreNode));
    printf("pre的next%d\n",(PreNode->next));
    printf("pre的data%d\n",(PreNode->data));
        printf("--------------------------------8-\n");
        free(a);
    }
    

}
int CountNode(Node *p){
    int c=0;
    Node *count;
    count=p;
    while(count!=NULL){
        c++;
        count=count->next;
    }
    return c;
}

bool isempty(Node *p){
    if (p==NULL) {
        return 1;
    }else{
        return 0;
    }
    
}

bool isfull(Node *p,int length){
    if(CountNode(p)==length){
        return 1;
    }else{
        return 0;
    }
}

void DelLastNode(Node **p){
    Node *a=malloc(sizeof(Node));
    a=*p;
    Node *pre=malloc(sizeof(Node));
    pre->next=a;
    while(a->next!=NULL){
        pre=a;
        a=a->next;
    }
    pre->next=NULL;
    free(a);
}


int DelLastNode_hot(Node **p){
    Node *a=malloc(sizeof(Node));
    a=*p;
    Node *pre=malloc(sizeof(Node));
    pre->next=a;
    int temp;
    printf("--------------------------------9-\n");
    printf("p的位址%d\n",p);
    printf("p的位址的值%d\n",*p);
    printf("p的位址的值的data%d\n",(*p)->data);
    printf("a的位址%d\n",a);
    printf("a的位址的data%d\n",(a)->data);
    printf("a的next%d\n",(a->next));
    printf("a的next的位置%d\n",&(a->next));
    printf("pre%d\n",(pre));
    printf("pre的next%d\n",(pre->next));
    printf("pre的data%d\n",(pre->data));

    while(a->next!=NULL){
        pre=a;
        a=a->next;
    }
        printf("--------------------------------10-\n");
    printf("p的位址%d\n",p);
    printf("p的位址的值%d\n",*p);
    printf("p的位址的值的data%d\n",(*p)->data);
    printf("a的位址%d\n",a);
    printf("a的位址的data%d\n",(a)->data);
    printf("a的next%d\n",(a->next));
    printf("a的next的位置%d\n",&(a->next));
    printf("pre%d\n",(pre));
    printf("pre的next%d\n",(pre->next));
    printf("pre的data%d\n",(pre->data));
    pre->next=NULL;
    temp=a->data;
    free(a);
    return(temp);
}

int main(){
    printf("topadd%d\n",top);
    printf("headadd%d\n",head);
    FILE *out;
    FILE *in;

    char c[10000];
    int i,a,b,input,hotlength,coldlength,HotCandicate,coldcandicate,final1,final2,zz;
    out=fopen("in.txt","r");
    in=fopen("out.txt","w");
    fscanf(out,"%d\n",&a);
    printf("1...%d\n",a);
    fscanf(out,"%d\n",&b);
    printf("2...%d\n",b);
    hotlength=a;
    coldlength=b;
    fscanf(out,"%s\n",&c);
    if(!strcmp(c,"w")){
    fscanf(out,"%d",&input);
    printf("3...%d\n",input);
    push_cold(input,coldlength);
    }
    while(!feof(out)){
    //for(i=1;i<=9;i++){
        fscanf(out,"%s\n",&c);
        if(!strcmp(c,"w"))
    {
        printf("write or read:%s\n",c);
        fscanf(out,"%d",&input);
        printf("input data:%d\n",input);
        if(find(input,top))
        {
            HotCandicate=input;
            del(input,&top);
            printf("top的data%d\n",top->data);
            printf("HotCandicate%d\n",HotCandicate);
           
            if(CountNode(head)<hotlength)
            {
                if(!find(HotCandicate,head))
                push_hot(HotCandicate,hotlength);
                printf("--------------------------------11-\n");
                printf("head%d\n",head->data);
                if(CountNode(head)>1)
                {
                    printf("head->next%d\n",head->next->data);
                    printf("--------------------------------11-\n");
                }
            }
            else 
            {
                coldcandicate=DelLastNode_hot(&head);
                printf("--------------------------------12-\n");
                printf("coldcandicate%d\n",coldcandicate);
                push_cold(coldcandicate,coldlength);
                printf("top%d\n",top->data);
                printf("top%d\n",top->next->data);
                if(CountNode(top)>=3)
                printf("top%d\n",top->next->next->data);
                if(CountNode(top)>=4)
                printf("top%d\n",top->next->next->next->data);
                push_hot(HotCandicate,hotlength);
                printf("headhot%d\n",head->data);
                printf("headhot%d\n",head->next->data);
            }
        }
        else 
        {
            if(find(input,head))
            {
                del(input,&head);
                
                printf("--------------------------------16-\n");
               
               printf("input%d\n",input);
                printf("top%d\n",top->data);
                printf("top->next->data%d\n",top->next->data);
                if(CountNode(top)>=3)
                printf("top->next->next->data%d\n",top->next->next->data);
                if(CountNode(top)>=4)
                printf("top->next->next->next->data%d\n",top->next->next->next->data);
                
                printf("headhot%d\n",head->data);
                if(CountNode(head)>=2)
                printf("head->next->data%d\n",head->next->data);
                push_hot(input,hotlength);
                printf("--------------------------------17-\n");
                 printf("top%d\n",top->data);
                printf("top%d\n",top->next->data);
                if(CountNode(top)>=3)
                printf("top%d\n",top->next->next->data);
                if(CountNode(top)>=4)
                printf("top%d\n",top->next->next->next->data);
                
                printf("headhot%d\n",head->data);
                printf("headhot%d\n",head->next->data);
            }
            else 
            {
            push_cold(input,coldlength);
            printf("--------------------------------13-\n");
            printf("cold...%d\n",input);
            printf("top%d\n",top->data);
            if(CountNode(top)>=2)
            printf("top->next%d\n",top->next->data);
            }     
        } 
    }
    else if(!strcmp(c,"r"))
    {  printf("write or read:%s\n",c);
       fscanf(out,"%d",&input);
       printf("input data:%d\n",input);
    }
    else
    {
        printf("%s\n",c);
        int qq=atoi(c);
        if(find(qq,head))
       {
        printf("hot");
        printf("\n");
        fprintf(in,"hot");    
        fprintf(in,"\n"); 
       }
        else
        {
        printf("cold");   
        printf("\n"); 
        fprintf(in,"cold"); 
        fprintf(in,"\n");   
        }
    }
    
        if(CountNode(top)>=1)
            display(top);
            if(CountNode(head)>=1)
            display(head);
    }
    
}