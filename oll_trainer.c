#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
⃞[■][□]‾_|
. 0  1  2
3[4][5][6]7
8[9][0][1]2
3[4][5][6]7
. 8  9  0
*/

void put(int type)
{
	if (type == 1)
		printf("\033[0;33m_\033[0m");
	else if (type == 2)
		printf("\033[0;33m|\033[0m");
	else if (type == 3)
		printf("\033[0;33m■\033[0m");
	else if (type == 4)
		printf("\033[0;33m‾\033[0m");
}

void case_printer(int *code)
{
	int i = 0;

	while (i < 21)
	{
		if (i < 3)
		{
			printf("  ");
			if (code[i])
				put(1);
			else
				printf(" ");
		}
		if (i == 3 || i == 7 || i == 8 || i == 12 || i == 13 || i == 17)
		{
			if (code[i])
				put(2);
			else
				printf(" ");
		}
		if ((i > 3 && i < 7) || (i > 8 && i < 12) || (i > 13 && i < 17))
		{
			printf("[");
			if (code[i])
				put(3);
			else
				printf("□");
			printf("]");

		}
		if (i > 17 && i < 21)
		{
			printf("  ");
			if (code[i])
				put(4);
			else
				printf(" ");
		}
		i++;
		if (i == 3 || i == 8 || i == 13 || i == 18)
			printf("\n");
	}
	printf("\n");
}

void case_encoder(int case_num)
{
	int code[21];
	int i = -1;
	char *text;
	
	if (case_num == 1)
		text = "010100011010110001010";
	else if (case_num == 2)
		text = "011100001010110000011";
	else if (case_num == 3)
		text = "110000011010110010010";
	else if (case_num == 4)
		text = "010100101010100001110";
	else if (case_num == 5)
		text = "110000011011010110000";
	else if (case_num == 6)
		text = "000101101011000001110";
	else if (case_num == 7)
		text = "100001010110101000011";
	else if (case_num == 8)
		text = "011010000110100101100";
	else if (case_num == 9)
		text = "001101000110100010110";
	else if (case_num == 10)
		text = "110000100110110100001";
	else if (case_num == 11)
		text = "110000011011001100001";
	else if (case_num == 12)
		text = "001011001011000001110";
	else if (case_num == 13)
		text = "110000010111001000011";
	else if (case_num == 14)
		text = "011000000111000010110";
	else if (case_num == 15)
		text = "110000010111010010010";
	else if (case_num == 16)
		text = "011100000111001001010";
	else if (case_num == 17)
		text = "011010001010110010010";
	else if (case_num == 18)
		text = "010010101010100000111";
	else if (case_num == 19)
		text = "010010101010110001010";
	else if (case_num == 20)
		text = "010010101010101010010";
	else if (case_num == 21)
		text = "101001000111000100101";
	else if (case_num == 22)
		text = "001101000111010100001";
	else if (case_num == 23)
		text = "101001000111001110000";
	else if (case_num == 24)
		text = "100001100111000110100";
	else if (case_num == 25)
		text = "000011010111000110100";
	else if (case_num == 26)
		text = "000101100111000101100";
	else if (case_num == 27)
		text = "100001010111001100001";
	else if (case_num == 28)
		text = "000011100110101010010";
	else if (case_num == 29)
		text = "100001100110100010110";
	else if (case_num == 30)
		text = "010010101011010101000";
	else if (case_num == 31)
		text = "100001101011000010110";
	else if (case_num == 32)
		text = "110000101011000110100";
	else if (case_num == 33)
		text = "110000100011100010110";
	else if (case_num == 34)
		text = "010010100111010001010";
	else if (case_num == 35)
		text = "010010011011000110100";
	else if (case_num == 36)
		text = "010010010110100110100";
	else if (case_num == 37)
		text = "000011010110100010110";
	else if (case_num == 38)
		text = "100001100110101001010";
	else if (case_num == 39)
		text = "010100100111001000011";
	else if (case_num == 40)
		text = "011010000111010010010";
	else if (case_num == 41)
		text = "101001000110101010010";
	else if (case_num == 42)
		text = "010010100110100100101";
	else if (case_num == 43)
		text = "000101101011010010010";
	else if (case_num == 44)
		text = "000011010110101001010";
	else if (case_num == 45)
		text = "010100100111010010010";
	else if (case_num == 46)
		text = "000011011010101101000";
	else if (case_num == 47)
		text = "100001011011000001110";
	else if (case_num == 48)
		text = "001101000110110000011";
	else if (case_num == 49)
		text = "110000010110100101100";
	else if (case_num == 50)
		text = "011100001011010100001";
	else if (case_num == 51)
		text = "011100000111010000011";
	else if (case_num == 52)
		text = "001101001010110100001";
	else if (case_num == 53)
		text = "111000000110100100101";
	else if (case_num == 54)
		text = "101001000110100000111";
	else if (case_num == 55)
		text = "111000000111000000111";
	else if (case_num == 56)
		text = "010100010111010001010";
	else if (case_num == 57)
		text = "010010100111001010010";
	while (text[++i])
		code[i] = text[i] - '0';
	case_printer(code);
}

void print_answer(int case_num)
{
	char *text;
	
	if (case_num == 1)
		text = "(R U' U')(R2' F R F') U2 (R' F R F')";
	else if (case_num == 2)
		text = "F(R U R' U') F' f(R U R' U')f'";
	else if (case_num == 3)
		text = "f(R U R' U') f' U' F(R U R' U') F'";
	else if (case_num == 4)
		text = "f(R U R' U') f' U F(R U R' U')F'";
	else if (case_num == 5)
		text = "(r' U2)(R U R' U)r";
	else if (case_num == 6)
		text = "(r U2)(R' U' R U' r')";
	else if (case_num == 7)
		text = "(r U R' U)(R U2 r')";
	else if (case_num == 8)
		text = "(r' U' R U')(R' U2 r)";
	else if (case_num == 9)
		text = "(R U R' U')(R' F)(R2 U R' U') F'";
	else if (case_num == 10)
		text = "(R U R' U)(R' F R F')(R U2 R')";
	else if (case_num == 11)
		text = "(r' R2 U R' U)(R U2 R' U) M'";
	else if (case_num == 12)
		text = "M'(R' U' R U')(R' U2 R U') M";
	else if (case_num == 13)
		text = "F U R U' R' R' F' R U R U' R'";
	else if (case_num == 14)
		text = "R' F(R U R' F' R) F U' F'";
	else if (case_num == 15)
		text = "r' U' M' U' R U r' U r";
	else if (case_num == 16)
		text = "R' F  R U R' U' F' R U' R' U2 R";
	else if (case_num == 17)
		text = "(R U R' U)(R' F R F') U2(R' F R F')";
	else if (case_num == 18)
		text = "r U R' U R U2 r' r' U' R U' R' U2 r";
	else if (case_num == 19)
		text = "M U(R U R' U') M'(R' F R F')";
	else if (case_num == 20)
		text = "r U R' U' M'2 U (R U' R' U') M'";
	else if (case_num == 21)
		text = "R U2 (R' U' R U R' U') R U' R'";
	else if (case_num == 22)
		text = "R U2 R'2 U' R2 U' R'2 U' U' R";
	else if (case_num == 23)
		text = "";
	else if (case_num == 24)
		text = "";
	else if (case_num == 25)
		text = "";
	else if (case_num == 26)
		text = "(R U2) (R' U' R U' R')";
	else if (case_num == 27)
		text = "(R U R' U) R U2 R'";
	else if (case_num == 28)
		text = "(r U R' U')(r' R U)(R U' R')";
	else if (case_num == 29)
		text = "(R U R' U')(R U' R' F' U' F)(R U R')";
	else if (case_num == 30)
		text = "f R U (R2 U' R' U)(R2 U' R')f'";
	else if (case_num == 31)
		text = "";
	else if (case_num == 32)
		text = "R U B' U' R' U R B R'";
	else if (case_num == 33)
		text = "(R U R' U')(R' F R F')";
	else if (case_num == 34)
		text = "R U2 R' F R U R' U' F' U R U R'";
	else if (case_num == 35)
		text = "R U2 (R'2 F R F') R U2 R'";
	else if (case_num == 36)
		text = "(R' U' R U')(R' U R U)(l U' R' U)";
	else if (case_num == 37)
		text = "F(R U' R' U')(R U R' F')";
	else if (case_num == 38)
		text = "(R U R' U)(R U' R' U')(R' F R F')";
	else if (case_num == 39)
		text = "(R U R' F' U' F)U(R U2 R')";
	else if (case_num == 40)
		text = "R' F(R U R' U')F' U R";
	else if (case_num == 41)
		text = "(R U R' U)(R U2 R')F(R U R' U')F'";
	else if (case_num == 42)
		text = "(R' U' R U')(R' U2 R)F(R U R' U')F'";
	else if (case_num == 43)
		text = "F' U' L' U L F";
	else if (case_num == 44)
		text = "F(U R U' R) F'";
	else if (case_num == 45)
		text = "F(R U R' U') F'";
	else if (case_num == 46)
		text = "R' U'(R' F R F') U R";
	else if (case_num == 47)
		text = "R' U'(R' F R F')2 U R";
	else if (case_num == 48)
		text = "";
	else if (case_num == 49)
		text = "";
	else if (case_num == 50)
		text = "";
	else if (case_num == 51)
		text = "";
	else if (case_num == 52)
		text = "";
	else if (case_num == 53)
		text = "";
	else if (case_num == 54)
		text = "";
	else if (case_num == 55)
		text = "";
	else if (case_num == 56)
		text = "";
	else if (case_num == 57)
		text = "(R U R' U')M'(U R U' r')";
	printf("\n%s\n\n", text);
}

int looper()
{
	int num;
	int loop = 0;
	static int shown[57];

	srand(time(NULL));
	num = rand() % 57 + 1;
	while (shown[num - 1])
	{
		if (++num > 57)
			num = 1;
		if (++loop > 57)
		{
			while (--loop != 0)
				shown[loop - 1] = 0;
			break ;
		}
	}
	printf("\nCase: %d\n", num);
	shown[num - 1] = 1;
	case_encoder(num);
	return (num);
}

int main()
{
	int	answer = 1;
	int case_num;

	case_num = looper();
	while (1)
	{
		printf("'1' to get another case.\n'2' to get the answer.\n'3' to type the case to be shown.\n");
		if (scanf("%d", &answer) != 1)
			break ;
		if (answer == 1)
			case_num = looper();
		else if (answer == 2)
		{
			printf("\n\033[0;32mAnswer\033[0m case: %d", case_num);
			print_answer(case_num);
		}
		else if (answer == 3)
		{
			printf("Case: ");
			scanf("%d", &answer);
			if (answer > 0 && answer <= 57)
			{
				case_encoder(answer);
				case_num = answer;
			}
			else
				printf("\033[0;31m[case invalid]\033[0m\n\n");
		}
	}
}
