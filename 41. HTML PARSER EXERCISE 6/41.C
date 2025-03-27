#include <stdio.h>
#include <string.h>

void Parsh1(char *html){
    char *start = strstr(html, "<h1>");
    if (start)
    {
        start += 4;
        char *end = strstr(start,"<h1>");
        if (end)
        {
            *end = '\0';
            printf("h1: %s\n",start);
        }
        
    }
    
}

int main()
{
    char html[] = "<h1> this is a Heading <h1>";
    Parsh1(html);
    return 0;
}

/*
input:
<h1>  this is a heading <h1>
 output 
 thi this is a heading

*/