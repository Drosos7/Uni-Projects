#include <stdio.h>
#include <string.h>

int is_vowel(char c);

int main()
{
	char c;
	printf("Dwse enan xarakthra:");
    scanf("%c",&c);
    
	if(is_vowel(c))
	printf("\nTo gramma %c,einai fonhen");
	else printf("Sumfwno");
	
	return 0;
}
int is_vowel(char c)
{
	return strchr("aioeuyAEIOUY",c)!=NULL;
}
