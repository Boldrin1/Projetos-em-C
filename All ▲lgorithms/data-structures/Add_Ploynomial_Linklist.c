// polynomial addition using link list
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int exponent;
    float coefficient;
    struct node *next;
}NODE;
NODE *poly1 = NULL;
NODE *poly2 = NULL;
NODE *poly3 = NULL;
//function to display the polynomial
void display(int p){
    NODE *head;
    if(p==1)
      head = poly1;
    else if (p==2)
      head = poly2;
    else
      head = poly3;
    if(head==NULL){
        printf("Polynomial is empty");
        return;
    }
    NODE *q = head;
    while(q!=NULL){
        printf("(%f)x^%d + ",q->coefficient,q->exponent);
        q = q->next;
    }
}
//function to insert an exponenet-coefficient pair into the polynomial
NODE* insert_end(NODE *head,float c,int e){
    if(!c)
      return head;
    NODE *temp = (NODE*)malloc(sizeof(NODE));
    temp->coefficient = c;
    temp->exponent = e;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
        return head;
    }
    NODE *q = head;
    while(q->next!=NULL){
        q = q->next;
    }
    q->next = temp;
    return head;
}
//function to take input a polynomial from the user
void input_polynomial(NODE **poly){
    float coefficient;
    int degree,exponenet,i;
    printf("Enter the Degree of Polynomial:\t");
    scanf("%d", &degree);

   printf("\nEnter the Coefficients of polynomial:\n");
   for(i=0;i<=degree;i++){
    printf("\nCoefficient of x^[%d]: \t",degree-i);
    scanf("%f",&coefficient);
    if(coefficient!=0){
        *poly = insert_end(*poly,coefficient,degree-i);
    }
   } 
   printf("Polynomial input has been taken successfully\n");
}
void add_polynomials(){
    NODE *p1 = poly1, *p2 = poly2;
    while(p1!=NULL&&p2!=NULL){
        if(p1->exponent>p2->exponent){
            poly3 = insert_end(poly3,p1->coefficient, p1->exponent);
            p1 = p1->next;
            p2 = p2->next;
        }

        else if(p1->exponent==p2->exponent){
            poly3 = insert_end(poly3,p2->coefficient+p1->coefficient,p2->exponent);
            p1 = p1->next;
            p2 = p2->next;
        }else{
            poly3 = insert_end(poly3,p2->coefficient, p2->exponent);
            p2 = p2->next;
        }
    }
    while(p1!=NULL){
        poly3=insert_end(poly3,p1->coefficient,p1->exponent);
        p1 = p1->next;
    }
}