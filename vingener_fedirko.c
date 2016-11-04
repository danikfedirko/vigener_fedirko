#include <stdio.h> 
#include <cs50.h> 
#include <string.h> 
#include <ctype.h> 

int main(int argc, string argv[]) { 
if (argc != 2){         //перевірка чи число аргументів не дорівнює 2
printf("Try again."); 
return 1; 
} 

string key = argv[1]; 
unsigned long keyCount = strlen(key); 

for(int k = 0; k < keyCount; k++){ 
if (!isalpha(key[k])){    //перевіряє чи ключ є символом
printf("Try again."); 
return 1; 
}   
} 

string text = GetString();
    
if(text == NULL){        //якщо юзер нічого не ввів вивести "Try again."
printf("Try again."); 
return 1; 
} 
     
for (int i = 0, n = 0; i < strlen(text); i++){   //шифрує текст за малими та великими буквами
if (isalpha(text[i])) { 
if (isupper(text[i])) 
printf("%c", ((((text[i] - 'A') + ((toupper(key[n++%keyCount]))-'A')%26) % 26) + 'A')); 
if (islower(text[i])) 
printf("%c", ((((text[i] - 'a') + ((tolower(key[n++%keyCount]))-'a')%26) % 26) + 'a'));
} 
else 
printf("%c", text[i]); 
} 

printf("\n"); 
return 0; 
}
