// #include <stdio.h>

// int main()
// {
//     char strin[] = "bh@ratuish";
//     int size = sizeof(strin)/sizeof(strin[0])-1;
//     int v_count = 0;
//     int c_count = 0;
//     int d_count = 0;
//     int s_count = 0;
//     for (int i = 0; i<size; i++)
//     {
//         int temp = 0;
//         for (int j = 97; j<=121;j++)
//         {
//             if (strin[i] == j)
//             {
//                 temp += 1;
//                 break;
//             }
//         }

//         if (temp != 0)
//         {
//             if (strin[i] == 'a' || strin[i] == 'e' || strin[i] == 'i' || strin[i] == 'o' || strin[i] == 'u')
//             {
//                 v_count += 1;
//             }
//             else
//             {
//                 c_count +=1;
//             }
//         }
//         else
//         {
//             for (int j = 65; j<=90;j++)
//             {
//                 if (strin[i] == j)
//                 {
//                     temp += 1;
//                     break;
//                 }
//             }
//             if (strin[i] == 'A' || strin[i] == 'E' || strin[i] == 'I' || strin[i] == 'O' || strin[i] == 'U')
//             {
//                 v_count += 1;
//             }
//             else
//             {
//                 c_count +=1;
//             }
//         }
//         if (temp == 0)
//         {
//             for (int j = 48; j<=57;j++)
//                 {
//                     if (strin[i] == j)
//                     {
//                         temp += 1;
//                         break;
//                     }
//                 }
//         }
//         if (temp != 0)
//         {
//             d_count += 1;
//             temp = 0;
//         }
//         else
//         {
//             s_count += 1;
//             temp = 0;
//         }
//     }
//     printf("The given string contains:\nVowel letters: %d\nConsonent letters: %d\nDigits: %d\nSpecial characters: %d\n", v_count, c_count, d_count, s_count);
//     return 0;
// }


#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


int main()
{
    char str[MAX_SIZE];
    char * s = str;
    int alphabets, digits, others;

    alphabets = digits = others = 0;


    /* Input string from user */
    printf("Enter any string : ");
    gets(str);

    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            alphabets++;
        else if(*s>='0' && *s<='9')
            digits++;
        else
            others++;

        s++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}