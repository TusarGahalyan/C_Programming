/*Q.3 Write a C program that accepts a sentence and performs the following tasks without using
standard string-handling functions. Display both returned values in main(). [10 Marks]
1. int countWords(char sentence[]); Returns the number of words.
2. int countVowels(char sentence[]); Returns the number of vowels.*/

#include<stdio.h>
int word=1;
int vowel=0;
int wordcount(char sentence[])
{
int i;
char ch;
for(i=0;sentence[i]!='\0';i++){
ch=sentence[i];
printf("%c",ch);
if(ch==' ')
word++;
}
return word;
}
int vowelcount(char sentence[])
{
int i;
char ch;
for(i=0;sentence[i]!='\0';i++){
ch=sentence[i];
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
 vowel++;
}
return vowel;
}
int main(){
char arr[50];
printf("Enter sentence\n");
fgets(arr,sizeof(arr),stdin);
int w=wordcount(arr);
int v=vowelcount(arr);
printf("%d%d",w,v);
return 0;
}