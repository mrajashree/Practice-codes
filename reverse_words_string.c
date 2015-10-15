#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void reverse(char *s)
{
	int read_pos,write_pos,i,len,word_end_pos,word_read_pos;
	char *buf = (char*)malloc(sizeof(s));
	len = strlen(s);
	read_pos = len-1;
	write_pos = 0;
	while(read_pos >= 0)
	{
		if(s[read_pos] == ' ')
		{
			buf[write_pos++] = s[read_pos--];
		}
		else
		{
			word_end_pos = read_pos;
			while(read_pos >= 0 && s[read_pos]!= ' ')
				read_pos--;
			word_read_pos = read_pos+1;
			while(word_read_pos<=word_end_pos)
			{
				buf[write_pos++] = s[word_read_pos++];
			}
		}
	}
	buf[write_pos] = '\0';
	printf("Reversed : %s\n", buf);
}

int main()
{
	char str[] = "Reverse words of this string";
	reverse(str);
}


