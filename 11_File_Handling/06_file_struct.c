#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    /* ===============================
       FILE WITH STRUCTURE (RUNNABLE)
       =============================== */

    struct Student s1 = {1, "Harsh", 95.5};

    FILE *fp = fopen("student.dat","wb"); // binary write
    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);

    struct Student s2;
    fp = fopen("student.dat","rb"); // binary read
    fread(&s2, sizeof(s2), 1, fp);
    fclose(fp);

    printf("ID: %d, Name: %s, Marks: %.2f\n", s2.id, s2.name, s2.marks);

    return 0;
}

/*
===========================================
C LANGUAGE – FILE WITH STRUCTURE
===========================================

1. fwrite()
------------------
- Writes binary data to file
- fwrite(&variable, size, count, fp);

2. fread()
------------------
- Reads binary data from file
- fread(&variable, size, count, fp);

3. USE CASE
------------------
- Store/retrieve structures efficiently
- No format loss (unlike text files)

4. REAL-LIFE EXAMPLE
------------------
- Student database, inventory systems

===========================================
END OF FILE WITH STRUCTURE NOTES
===========================================
*/
