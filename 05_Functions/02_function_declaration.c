#include <stdio.h>

void greet();  // function declaration

int main() {
    /* ===============================
       FUNCTION DECLARATION (RUNNABLE)
       =============================== */

    greet();

    return 0;
}

void greet() {
    printf("Hello from declared function!\n");
}

/*
===========================================
C LANGUAGE – FUNCTION DECLARATION
===========================================

1. WHAT IS FUNCTION DECLARATION?
------------------
- Tells compiler that function exists
- Also called function prototype
- Required if function is defined after main()

2. SYNTAX
------------------
return_type function_name(parameters);

Example:
void greet();

3. IMPORTANT POINTS
------------------
- Declaration ends with semicolon
- No function body here
- Compiler knows about the function before usage

4. REAL-LIFE EXAMPLE
------------------
- Like informing someone “I will do this task later” before actually doing it

===========================================
END OF FUNCTION DECLARATION NOTES
===========================================
*/
