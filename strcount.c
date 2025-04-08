#include <stdio.h>
int main(){
    int v=0,c=0,sp=0,i;
    char str[20];
    printf("Enter your string: ");
    fgets(str,sizeof(str),stdin);
    for (i=0;str[i]!='$';i++){
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            v++;
        }
        else if ((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
            c++;
        }
        else if (str[i]==' '){
            sp++;
        }
    }
    printf("\nNo. of vowels: %d\nNo. of consonants: %d\nNo. of white spaces: %d\n",v,c,sp);
    return 0;
}