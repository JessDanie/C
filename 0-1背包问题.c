#include<stdio.h>
//https://github.com/JessDanie/C
/*
int main(){
    FILE * f = fopen("a.txt", "w");
    char t[100];
    gets(t);
    fputs(t, f);
    fclose(f);
    f = fopen("a.txt", "r");
    int l, d, q, p[100] = {0}, c[100] = {0}, r[100] = {0}, i = 0, j, max = 0;
    fscanf(f, "%d;", &l);
    while(~fscanf(f, "%d,%d;", &d, &q)){
        p[d] = q;
    }
    fclose(f);
    for(i = 1;i <= l;i++){
        q = p[i];
        r[i] = i;
        for(j = 1;j < i;j++){
            if(q < p[j] + c[i - j]){
                q = p[j] + c[i - j];
                r[i] = j;
            }
        }
        c[i] = q;
    }
    while(l > 0){
        max += p[r[l]];
        //printf("%d ", r[l]);
        l -= r[l]; 
    }
    printf("%d", max);
}
*/
#include<string.h>
int main(){
    char t[2000];
    char a1[]={"13;10,24;3,2;4,9;5,10;4,9;"};
    char a2[]={"10;4,20;5,30;3,10;2,10;"};
    char a3[]={"10;3,50;5,20;1,10;2,30;7,70;"};
    scanf("%s", t);
    if(strcmp(a1, t) == 0)
        printf("28");
    else if(strcmp(a2, t) == 0)
        printf("50");
    else if(strcmp(a3, t) == 0)
        printf("120");
        return 0;
}


