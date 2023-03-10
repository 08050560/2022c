#include <stdio.h>
int main ()
{
    int A[26]={0,0,0,0};
    char c;
    while(scanf("%c",&c)==1){
        if(c>='A'&&c<='Z'){
            int i =c-'A';
            A[i]++;
        }
        if(c>='a'&&c<='z'){
            int i =c-'a';
            A[i]++;
        }
    }
    int b=0;
    for(int i=0;i<26;i++){
        if(A[i]==0) b=1;
    }
    if(b==0) printf("YES");
    else printf("NO");
}


