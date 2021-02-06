#include <stdio.h>
int main ()
{
	char x;
	printf("Enter alphabets as character\n");
	scanf("%c",&x);
	if((x=='a'||x=='A')||(x=='e'||x=='E')||(x=='o'||x=='O')||(x=='u'||x=='U')||(x=='i'||x=='I'))
	{
		switch(x)
	{
			case'a':
		printf("vowel");
		break;
		case'e':
		printf("vowel");
		break;
		case'o':
		printf("vowel");
		break;
		case'i':
		printf("vowel");
		break;
		case'u':
		printf("vowel");
		break;
		case'A':
		printf("vowel");
		break;
		case'E':
		printf("vowel");
		break;
		case'I':
		printf("vowel");
		break;
		case'O':
		printf("vowel");
		break;
		case'U':
		printf("vowel");
		break;
	}
}
	else
	printf("Consonant");
	return 0;
}
