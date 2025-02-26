#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int player1Score(string player1);
int player2Score(string player2);
int main(void)
{
    int player1Score = 0, player2Score = 0;
    int score[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                     1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    // Upper case all element
    string player1 = get_string("Player1: ");
    for (int i = 0; i < strlen(player1); i++)
    {
        player1[i] = toupper(player1[i]);
    }

    string player2 = get_string("Player 2: ");
    for (int i = 0; i < strlen(player2); i++)
    {
        player2[i] = toupper(player2[i]);
    }

    for (int i = 0; i < strlen(player2); i++)
    {

        switch (player2[i])
        {
            case 'A':
                player2Score = player2Score + score[0];
                break;
            case 'B':
                player2Score = player2Score + score[1];
                break;
            case 'C':
                player2Score = player2Score + score[2];
                break;
            case 'D':
                player2Score = player2Score + score[3];
                break;
            case 'E':
                player2Score = player2Score + score[4];
                break;
            case 'F':
                player2Score = player2Score + score[5];
                break;
            case 'G':
                player2Score = player2Score + score[6];
                break;
            case 'H':
                player2Score = player2Score + score[7];
                break;
            case 'I':
                player2Score = player2Score + score[8];
                break;
            case 'J':
                player2Score = player2Score + score[9];
                break;
            case 'K':
                player2Score = player2Score + score[10];
                break;
            case 'L':
                player2Score = player2Score + score[11];
                break;
            case 'M':
                player2Score = player2Score + score[12];
                break;
            case 'N':
                player2Score = player2Score + score[13];
                break;
            case 'O':
                player2Score = player2Score + score[14];
                break;
            case 'P':
                player2Score = player2Score + score[15];
                break;
            case 'Q':
                player2Score = player2Score + score[16];
                break;
            case 'R':
                player2Score = player2Score + score[17];
                break;
            case 'S':
                player2Score = player2Score + score[18];
                break;
            case 'T':
                player2Score = player2Score + score[19];
                break;
            case 'U':
                player2Score = player2Score + score[20];
                break;
            case 'V':
                player2Score = player2Score + score[21];
                break;
            case 'W':
                player2Score = player2Score + score[22];
                break;
            case 'X':
                player2Score = player2Score + score[23];
                break;
            case 'Y':
                player2Score = player2Score + score[24];
                break;
            case 'Z':
                player2Score = player2Score + score[25];
                break;
        }
    }

    for (int i = 0; i < strlen(player1); i++)
    {

        switch (player1[i])
        {
            case 'A':
                player1Score = player1Score + score[0];
                break;
            case 'B':
                player1Score = player1Score + score[1];
                break;
            case 'C':
                player1Score = player1Score + score[2];
                break;
            case 'D':
                player1Score = player1Score + score[3];
                break;
            case 'E':
                player1Score = player1Score + score[4];
                break;
            case 'F':
                player1Score = player1Score + score[5];
                break;
            case 'G':
                player1Score = player1Score + score[6];
                break;
            case 'H':
                player1Score = player1Score + score[7];
                break;
            case 'I':
                player1Score = player1Score + score[8];
                break;
            case 'J':
                player1Score = player1Score + score[9];
                break;
            case 'K':
                player1Score = player1Score + score[10];
                break;
            case 'L':
                player1Score = player1Score + score[11];
                break;
            case 'M':
                player1Score = player1Score + score[12];
                break;
            case 'N':
                player1Score = player1Score + score[13];
                break;
            case 'O':
                player1Score = player1Score + score[14];
                break;
            case 'P':
                player1Score = player1Score + score[15];
                break;
            case 'Q':
                player1Score = player1Score + score[16];
                break;
            case 'R':
                player1Score = player1Score + score[17];
                break;
            case 'S':
                player1Score = player1Score + score[18];
                break;
            case 'T':
                player1Score = player1Score + score[19];
                break;
            case 'U':
                player1Score = player1Score + score[20];
                break;
            case 'V':
                player1Score = player1Score + score[21];
                break;
            case 'W':
                player1Score = player1Score + score[22];
                break;
            case 'X':
                player1Score = player1Score + score[23];
                break;
            case 'Y':
                player1Score = player1Score + score[24];
                break;
            case 'Z':
                player1Score = player1Score + score[25];
                break;
        }
    }

    // compare score
    if (player1Score > player2Score)
    {
        printf("Player 1 Wins!");
        printf("\n");
    }
    else if (player2Score > player1Score)
    {
        printf("Player 2 Wins!");
        printf("\n");
    }
    else
    {
        printf("Tie!");
        printf("\n");
    }
}
