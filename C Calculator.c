# C Calculator

int main()
{
int number = 0; //defines number as zero
int answer = 0; //defined answer as zero

printf("Enter a number: "); //outputs "Enter a number: "
scanf("%d", &number); //lets you input a number

answer = number * number; //multiplies the number by itself

printf("%d multiplied by %d is %d", number, number, answer); //outputs "(number) multiplied by (number) is (answer)"

  return 0;
}

