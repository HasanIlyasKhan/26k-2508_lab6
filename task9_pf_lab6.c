

#include <stdio.h>

int main() {
    char word[200];
    char letter;
    int count_v,count_c,count,word_count,i,len_word,is_palindrome;
    char word_arr[200] = {0};
    count_v = 0;
    count_c = 0;
    count = 0;

    printf("Enter a word :");
    scanf("%s",word);

    for(i=0;word[i]!='\0';i=i+1){
        letter = word[i];
        if((letter>='a'&&letter<='z')||(letter>='A'&&letter<='Z')){
            word_arr[i] = letter;
            count = count + 1;
            if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U'){
                count_v = count_v + 1;
            }
            else{
                count_c = count_c + 1;
            }
        }
    }

    word_count = count;

    printf("Original word :\n");
    for(i=0;i<word_count;i=i+1){
        printf("%c",word_arr[i]);
    }

    printf("\nReverse word :\n");
    for(count=word_count-1;count>=0;count=count-1){
        printf("%c",word_arr[count]);
    }

    printf("\nLength = %d",word_count);
    printf("\nVowels = %d",count_v);
    printf("\nConsonants = %d",count_c);
    len_word = word_count - 1;
    for(i=0; i <= len_word; i=i+1){
        if (word_arr[i] == word_arr[len_word-i]){
            is_palindrome = 1;
        }
        else{
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome == 1){
        printf("Word is palindrome");        
    }
    else{
        printf("Word is not palindrome");
    }
    return 0;
}