// Tower of Hanoi puzzle
// (Move n disks from peg A to peg C, using peg B as temporary storage.)
// This program moves the discs from first peg to last peg such that no large disc is kept over the smaller disc and one disc is
// moved at a time and no direct movement is made between first peg and last peg

#include <stdio.h>

void tower_of_Hanoi(int n, char pegFrom, char pegExtra, char pegTo);

int main(void)
{
    int n;
    printf("Please input number of disks: ");
    scanf("%d",&n);
    tower_of_Hanoi(n, 'A', 'B', 'C');
}

// Recursively move n disks from pegFrom to pegTo, using pegExtra.
void tower_of_Hanoi(int n, char pegFrom, char pegExtra, char pegTo)
{
    if (n > 0)
    {
        tower_of_Hanoi(n-1, pegFrom, pegExtra, pegTo);
        printf("Move disk #%d: %c --> %c\n", n, pegFrom, pegExtra);
        tower_of_Hanoi(n-1, pegTo, pegExtra, pegFrom);
        printf("Move disk #%d: %c --> %c\n", n, pegExtra, pegTo);
        tower_of_Hanoi(n-1, pegFrom, pegExtra, pegTo);
    }
}
