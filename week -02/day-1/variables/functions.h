int give_an_integer ()
{
    int number = 0;
    printf("Enter a number!\n");
    scanf("%d", &number);
    printf("The number is: %d\n", number);
    return number;
}
int num_plus_ten (int num)
{   int numplus10 = num + 10;
    printf("%d + 10 = %d", num, numplus10);
    return numplus10;
}

int num_minus_ten (int num)
{   int numminus10 = num - 10;
    printf("%d - 10 = %d\n", num, numminus10);
    return numminus10;
}

int multiple_four ( int num)
{
    int multiple = num * 4;
    printf("%d * 4 = %d\n", num, multiple);
    return multiple;
}

int multiple_two (int num)
{
    int multiple_two = num * 2;
    printf("%d * 2 = %d\n", num, multiple_two);
    return multiple_two;
}
