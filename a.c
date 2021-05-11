#include<stdio.h>
int main()
{
    char* binary="/bin/ps";
    char *args[]={binary,"-x",NULL};
    execv(args[0],args);
    return 0;
}