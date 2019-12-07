#include<stdio.h>
int main(){
    printf("Color Program\n\n");
    printf(" 1 . \033[0;31mRED\033[0m\n");
    printf(" 2 . \033[1;31mBOLD RED\033[0m\n");
    printf(" 3 . \033[0;32mGREEN\033[0m\n");
    printf(" 4 . \033[1;32mBOLD GREEN\033[0m\n");
    printf(" 5 . \033[0;33mYELLOW\033[0m\n");
    printf(" 6 . \033[1;33mBOLD YELLOW\033[0m\n");
    printf(" 7 . \033[0;34mBLUE\033[0m\n");
    printf(" 8 . \033[1;34mBOLD BLUE\033[0m\n");
    printf(" 9 . \033[0;35mMAGNETA\033[0m\n");
    printf(" 10. \033[1;35mBOLD MAGNETA\033[0m\n");
    printf(" 11. \033[0;36mCYAN\033[0m\n");
    printf(" 12. \033[1;36mBOLD CYAN\033[0m\n");
    //[0M is used to reset otherwise next lines will be printed in same color.
    //[0/1;3*m is the color code. \033 denotes starting of the color code .
    return 0;
}
