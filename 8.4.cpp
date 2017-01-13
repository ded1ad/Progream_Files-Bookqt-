#include <iostream>
#include <stdio.h>

#include <stdio.h>
#include <string.h>

int main() {
	char* str = ". .mn . .", res[256], *p = res, *w = " ", *bw = "!";
	size_t bwLen = strlen(bw), wLen = strlen(w);
	for (; *p = *str; ++str, ++p)
	{
		if (!strncmp(w, str, wLen))
		{
			strcpy(p, bw);
			p += bwLen - 1;
			str += wLen - 1;
		}
	}
	puts(res);
	return 0;
}