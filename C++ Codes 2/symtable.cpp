#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fptr,*fptr1;
	char s[128];
	fptr1 = fopen("read.txt", "r");
	fptr = fopen("program.txt", "w");
	char a[6][7]={"int","float","long","char","double","string"};
	int n,i,k;
	while((fgets(s,sizeof s,fptr1))!=NULL)
	{
			printf("%s",s);			
			int j=0,w=0;
			char s1[1][10]={'\0'};
			char s2[1][10]={'\0'};
			while(s[j]!=' ' && s[j]!='\0')
			{
				if(s[j]==9)
				j++;
				else
				{s1[0][w]=s[j];
				j++;w++;}
	
			}
			j++;
			for(k=0;k<6;k++)
			{		
				if(strcmp(s1[0],a[k])==0)
				{

					int q=0;
					while((s[j]!=','||s[j]!=';'||s[j]!='=')&&s[j]!='\0')
					{
					if(s[j]=='1'||s[j]=='2'||s[j]=='3'||s[j]=='4'||s[j]=='5'||s[j]=='6'||s[j]=='7'||s[j]=='8'||s[j]=='9'||s[j]=='0'||s[j]=='=')
					{
						j++;
					}
						else if(s[j]!=',' && s[j]!=';'&&s[j]!='=')
						{
							if(s[j]=='(')
							goto o;
							s2[0][q]=s[j];
							q++;
							j++;
						}
						else if(s[j]==',' || s[j]==';')
						{
							q=0;
							fprintf(fptr,"%s\t",a[k]);
							fprintf(fptr,"%s\n",s2[0]);
							j++;
						}						
					}
				}
			}
			o:printf("\n");			
	}
   return 0;
}
