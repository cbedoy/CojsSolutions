#include <stdio.h>

int main(){
    getchar();
    char c= getchar();
    while(c!='*'){
        int buenas =0;
        while(c != '\n'){
            int acum = 0;
            while(c>'A' && c<'Z'){
                switch(c){
                    case 'W': acum+=64; break;
                    case 'H': acum+=32; break;
                    case 'Q': acum+=16; break;
                    case 'E': acum+=8; break;
                    case 'S': acum+=4; break;
                    case 'T': acum+=2; break;
                    case 'X': acum+=1; break;
                }
                c = getchar();
            }
            if(acum == 64) buenas+=1;
            c = getchar();
        }
        printf("%d\n",buenas);
        c = getchar()=='/'?getchar():'*';
    }
    return 0;
}