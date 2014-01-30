/*Daniel Torres
I altered the test case, of the code you showed us in class, to solve this problem.
The code reads from the terminal and will return text without any upper case characters.*/

int main(int argc, const char * argv[]) {
    int ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch >= 65 && ch <= 90){
            putchar (ch + 32);}
        else
            putchar(ch);
    } // while
    return 0;
} // main
