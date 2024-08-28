#include <stdio.h>
#include "pushswap.h"

void	print(t_data array, char c)
{
	int	i;

	i = 0;
	if (c == 'a')
	{
		printf("state of a: ");
		while (i < array.size_a)
		{
			printf("[%d]", array.a[i]);
			i++;
		}
		putchar('\n');
	}
	else if (c == 'b')
	{
		printf("state of b:");
        printf("size is %d\n", array.size_b);
		while (i < array.size_b)
		{
			printf("[%d]", array.b[i]);
			i++;
		}
		putchar('\n');
	}
}


int main()
{
    t_data mass;

    int a[5] = {3, 1, 113, 24, 18};
    mass.a = a;
    mass.size_a = 5;
    mass.b = malloc(sizeof(int) * 5);
    mass.size_b = 0;
    pushing(&mass, mass.size_a);
    // print(mass, 'b');
    print(mass, 'a');
    free(mass.b);
}

// int main(int argc, char **argv)
// {
// 	t_data mass;

// 	char str[] = "58 79 210 252 243 253 188 265 276 97 62 224 39 48 126 278 256 141 66 134 159 151 110 226 172 87 43 54 187 259 231 101 213 148 78 295 176 214 264 12 93 136 190 45 5 137 150 113 289 156 77 152 155 138 40 44 154 177 81 128 261 179 9 135 255 92 228 223 270 50 34 234 244 282 286 16 33 271 170 162 5 221 216 3 275 140 191 12 163 267 80 300 121 36 21 232 99 49 111 196";
// 	char *huk;
//     int ad[100];
//     // ad = malloc(sizeof(int) * 100);
//     huk = strtok(str, " ");
//     int i = 0;
//     while (huk != NULL)
//     {
//         ad[i] = ft_atoi(huk);
//         huk = strtok(NULL, " ");
//         i++;
//     }
//     mass.a = malloc(400);
//     mass.a = ad;
// 	mass.b = malloc(sizeof(int) * 100);
//     mass.size_a = 100;
//     mass.size_b = 0;
// 	pushing(&mass, mass.size_a);
//     push_back(&mass);
// 	print(mass, 'a');
//     // free(mass.a);
//     // free(mass.b);
// }