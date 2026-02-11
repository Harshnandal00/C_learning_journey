#include <stdio.h>
#include <string.h>

int main() {
    /* ===============================
       CHECK PALINDROME STRING (RUNNABLE)
       =============================== */

    char str[50] = "level";
    int n = strlen(str);
    int flag = 1;

    for(int i=0;i<n/2;i++){
        if(str[i] != str[n-1-i]){
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");

    return 0;
}

/*
===========================================
C LANGUAGE – PALINDROME STRING
===========================================

1. WHAT IS PALINDROME?
------------------
- String reads same forward and backward
- Example: "level", "madam"

2. LOGIC
------------------
- Compare characters from start and end
- Break loop if mismatch found

3. IMPORTANT POINTS
------------------
- Use strlen() to get length
- Works for letters, numbers, symbols

4. REAL-LIFE EXAMPLE
------------------
- Check palindromes in words, sentences, or numbers

===========================================
END OF PALINDROME STRING NOTES
===========================================
*/
