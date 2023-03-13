%{ 
#include<stdio.h> 
%}



Keyword  "aur"|"mese"|"konsa"|"number"|"dono"|"kya"|"ya"|"he"|"thi"|"ke"|"nahi"|"ya"
Op "chhota"|"bada"|"saman" 
Digit [0-9] 
Int {Digit}+ 
Float {Digit}+"."({Digit}+) 
qm "?" 
ws1 [\n] 
ws2 [\t] 
sep "," 



%%

{Keyword} {printf("Keyword: %s",yytext);}
{Int} {printf("Int: %s",yytext);}
{Op} {printf("Operator: %s",yytext);}
{Float} {printf("Float: %s \n",yytext);}
{qm} {printf("End of Program: %s \n",yytext);}
{sep} {printf("\nSeparator: %s \n",yytext);}
" " {printf("\n");} 
{ws1} {return 0;} 
{ws2} {printf("Give string without TAB \n");return 0;} 
. {printf("Invalid Token : %s\n",yytext);return 0;return *yytext;} 
%% 
int 
yywrap(){
	return 1;
} 
int main(){ 
yylex(); 
return 0; 
}