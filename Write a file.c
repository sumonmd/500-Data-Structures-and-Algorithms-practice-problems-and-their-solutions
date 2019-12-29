#include<stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("data.txt","w");
    int i;
    int a[5],b;
    for(i=0;i<5;i++){
        scanf("%d",&b);
        fprintf(fp,"%d\n",b);
    }
    fclose(fp);

    fp=fopen("data.txt","r");
    fread(a,sizeof(int),5,fp);
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    fclose(fp);


    //fp=fopen("data.txt","r");

    /*while(fscanf(fp,"%d %d",a,b)!=EOF){
        printf("Hello\n");
        printf("%d %d\n",&a,&b);
    }*/

    return 0;
}
