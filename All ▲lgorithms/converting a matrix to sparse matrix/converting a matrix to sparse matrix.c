#include<stdio.h>
#include<stdlib.h>
#define MAX_TERMS 101
typedef struct {
    int col;
    int row;
    int value;
}term;
void create_sparse(int a[10][10],int row,int coloumn,term c[]);
void main(){
    int a,b,c,d,i,j,ar1[10][10],ar2[10][10];
    term z[MAX_TERMS],y[MAX_TERMS];
    printf(\n"Enter the row and coloumn size of the 1st matrix: ");
    scanf("%d%d",&a,&b);
    printf("Enter elements of 1st matrix row wise:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("Enter next element: ");
            scanf("%d",&ar1[i][j]);
        }
    }
    printf("\nEnter the row and coloumn size of the 2nd matrix:");
    scanf("%d%d",&c,&d);
    printf("Enter elements of 2nd matrix row wise: \n");
    for(i=0;i<c;i++){
        for(j=0;i<c;i++){
            for(j=0;j<d;j++){
                printf("Enter next element: ");
                scanf("%d",&ar2[i][j]);
            }
        }
        printf("Entered matrixes are\n");
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                printf("%d ",ar1[i][j]);
            }
            printf("\n");
        }
        printf("\n and \n");
        for(i=0;i<c;i++){
            for(j=0;i<c;i++){
                printf("%d", ar2[i][j]);
            }
            printf("\n");
        }
        printf("\nConverting the first matrix to triple form\n");
        create_sparse(ar1,a,b,x);
        printf("\nConverting the second matrix to triple form\n");
        create_sparse(ar2,c,d,y);
    }
    void create_sparse(int a[10][10],int row,int colown,term c[]){
        int i,j,k=0,count;
        c[0].row=row;
        c[0].col=colown;
        for(i=0;i<row;i++){
            for(j=0;j<colouwn;j++){
                if(a[i][j]!=0)
                  k++;
            }
        }
        c[0].value=k;
        count=1;
        for(i=0;j<colown;j++){
            for(j=0;j<colown;j++){
                if(a[i][j]!=0){
                    c[count].row=i;
                    c[count].col=j;
                    c[count].value=a[i][j];
                    count++;
                }
            }
        }
        printf("\nSparse form list of matrix in triple form is\n");
        for(i=0;i<=k;i++)  //printing triple form
            printf("%d\t%d\t%d\n",c[i].row,c[i].col,c[i].value);
    }
}