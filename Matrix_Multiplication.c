#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    //Declaring Variables
    int **mat_a,**mat_b,**mat_c;
    int A_r,A_c,B_r,B_c;
    int i,j,k;

    //Getting Rows and Coloums
    printf("Enter the Rows and Coloum for Matrix A (r,c):");
    scanf("%d%d",&A_r,&A_c);
    printf("Enter the Rows and Coloums for Matrix B (r,c):");
    scanf("%d%d",&B_r,&B_c);

    if(A_r==B_c){
        //Allocating Dynamic Memory Allocation
        mat_a=(int**)malloc(sizeof(int*)*A_r);
        for(i=0;i<A_r;i++){
            mat_a[i]=(int*)malloc(sizeof(int*)*A_c);
        };

        mat_b=(int**)malloc(sizeof(int*)*B_r);
        for(i=0;i<B_r;i++){
            mat_b[i]=(int*)malloc(sizeof(int*)*B_c);
        };

        mat_c=(int**)malloc(sizeof(int*)*A_r);
        for(i=0;i<A_r;i++){
            mat_c[i]=(int*)malloc(sizeof(int*)*A_c);
        };

        //Getting Each Values
        printf("Enter the Value for Matrix A:\n");
        for(i=0;i<A_r;i++){
            for(j=0;j<A_c;j++){
                printf("Enter the Value:");
                scanf("%d",&mat_a[i][j]);
            };
        };

        printf("Enter the Value for Matrix B:\n");
        for(i=0;i<B_r;i++){
            for(j=0;j<B_c;j++){
                printf("Enter the Value:");
                scanf("%d",&mat_b[i][j]);
            };
        };

        for(i=0;i<B_r;i++){
            for(j=0;j<B_c;j++){
                mat_c[i][j]=0;
            };
        };

        //Multiplication of Matrix
        for(i=0;i<A_r;i++){
            for(j=0;j<A_c;j++){
                for(k=0;k<A_r;k++){
                    mat_c[i][j]=mat_c[i][j]+mat_a[i][k]*mat_b[k][j];
                };
            };
        };

        //Output Final Matrix
        printf("Resultant Matrix:\n");
        for(i=0;i<A_r;i++){
            for(j=0;j<A_c;j++){
                printf("%d\t",mat_c[i][j]);
            };
        printf("\n");
        };
    }
    else{
        printf("Invalid Multiplication! Retry :(");
    }
};

