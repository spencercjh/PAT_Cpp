#include <stdio.h>  
#include <stdlib.h>  
  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */  
  
int main() {  
    char cur;  
    int num,g=0,p=0,l=0,t=0;  
    while(scanf("%c",&cur)&&cur!='\n'){  
        if(cur=='G'||cur=='g'){  
            g++;  
        }  
        if(cur=='P'||cur=='p'){  
            p++;  
        }  
        if(cur=='L'||cur=='l'){  
            l++;  
        }  
        if(cur=='T'||cur=='t'){  
            t++;  
        }  
    }  
    while(g>0||p>0||l>0||t>0){  
        if(g>0){  
            printf("G");  
            g--;  
        }  
        if(p>0){  
            printf("P");  
            p--;  
        }  
        if(l>0){  
            printf("L");  
            l--;  
        }  
        if(t>0){  
            printf("T");  
            t--;  
        }  
    }  
    return 0;  
}  
