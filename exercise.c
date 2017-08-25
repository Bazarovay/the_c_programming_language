
#include <stdio.h>
#define MAXLINE 1000


int getlines(char line[], int maxline);
void copy(char to[], char from[]);

void reverse(char reversed[], char orig[], int size);


/* print the longest input */
int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];
  char reversed[MAXLINE];
  max = 0;
  while ((len = getlines(line, MAXLINE)) > 0) {
    // printf("LENGHT SDADASDASD WAS %d\n", len);
    if (len > 10) /* there was a line */
    printf("Longer than 10 %s | size:  %d", line, len);

    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  /* there was a line */
  if (max > 0) {
    printf("Longest: %s \n size:  %d", longest, max);
    reverse(longest, longest, max);
    printf("reversed:  %s \n", longest);
  }
  return 0;
}

/* getlines: read a line into s, return length */
int getlines(char s[],int lim) {
  int c, i, bcount;
  char blankandtab[lim];
  bcount = 0;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
    if (c == ' ' || c == '\t') {
      blankandtab[bcount] = c;
      ++bcount;
    } else {
      for (int n = 0; n < bcount; ++n) {
        s[i] = blankandtab[n];
        blankandtab[n] = 0;
      }
      bcount = 0;
    }
    s[i] = c;
  }


  if (c == '\n') {
    printf("%s %d %d\n", "Blank + Index : ", bcount, i);
    i = i - bcount;
    if (i > 0) {
      s[i] = c;
      ++i;
    }
  }

  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
  ++i;
}


/* reverse: reverse orig to reversed */
void reverse(char newarray[], char original[], int size) {
  int i;
  size = size -2; // removing /n and /0;
  for (i = size; original[size - i] != '\n'; --i) {
    if (original[i] != '\n' && original[i] != '\0') {
      printf("GET HTE VALUE %d\n", size - i);
      putchar(original[i]);
      newarray[size - i] = original[i];
    }
  }
  newarray[++size] = '\n';
  newarray[++size] = '\0';
}
