#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void checker(string first, string second);

int main(void)
{
    // Prompts Player 1 for input
    string player_1 = (get_string("Player 1: "));
    string player_2 = (get_string("Player 2: "));
    checker(player_1, player_2);
}

void checker(string first, string second)
{
    // Pts for Player 1
    int first_points = 0;
    for (int i = 0; i < strlen(first); i++)
    {
        // Assigns points for letters worth 1 point
        if (first[i] == 'A' || first[i] == 'a' || first[i] == 'E' || first[i] == 'e' ||
            first[i] == 'I' || first[i] == 'i' || first[i] == 'L' || first[i] == 'l' ||
            first[i] == 'N' || first[i] == 'n' || first[i] == 'O' || first[i] == 'o' ||
            first[i] == 'R' || first[i] == 'r' || first[i] == 'S' || first[i] == 's' ||
            first[i] == 'T' || first[i] == 't' || first[i] == 'U' || first[i] == 'u')
        {
            first_points++;
        }

        // Assigns points for letters worth 2 points
        else if (first[i] == 'D' || first[i] == 'd' || first[i] == 'G' || first[i] == 'g')
        {
            first_points = first_points + 2;
        }

        // Assigns points for letters worth 3 points
        else if (first[i] == 'B' || first[i] == 'b' || first[i] == 'C' || first[i] == 'c' ||
                 first[i] == 'M' || first[i] == 'm' || first[i] == 'P' || first[i] == 'p')
        {
            first_points = first_points + 3;
        }

        // Assigns points for letters worth 4 points
        else if (first[i] == 'F' || first[i] == 'f' || first[i] == 'H' || first[i] == 'h' ||
                 first[i] == 'V' || first[i] == 'v' || first[i] == 'W' || first[i] == 'w' ||
                 first[i] == 'Y' || first[i] == 'y')
        {
            first_points = first_points + 4;
        }

        // Assigns points for letters worth 5 points
        else if (first[i] == 'K' || first[i] == 'k')
        {
            first_points = first_points + 5;
        }

        // Assigns points for letters worth 8 points
        else if (first[i] == 'J' || first[i] == 'j' || first[i] == 'X' || first[i] == 'x')
        {
            first_points = first_points + 8;
        }

        // Assigns points for letters worth 10 points
        else if (first[i] == 'Q' || first[i] == 'q' || first[i] == 'Z' || first[i] == 'z')
        {
            first_points = first_points + 10;
        }
    }

    // Pts for Player 2
    int second_points = 0;
    for (int i = 0; i < strlen(second); i++)
    {
        // Assigns points for letters worth 1 point
        if (second[i] == 'A' || second[i] == 'a' || second[i] == 'E' || second[i] == 'e' ||
            second[i] == 'I' || second[i] == 'i' || second[i] == 'L' || second[i] == 'l' ||
            second[i] == 'N' || second[i] == 'n' || second[i] == 'O' || second[i] == 'o' ||
            second[i] == 'R' || second[i] == 'r' || second[i] == 'S' || second[i] == 's' ||
            second[i] == 'T' || second[i] == 't' || second[i] == 'U' || second[i] == 'u')
        {
            second_points++;
        }

        // Assigns points for letters worth 2 points
        else if (second[i] == 'D' || second[i] == 'd' || second[i] == 'G' || second[i] == 'g')
        {
            second_points = second_points + 2;
        }

        // Assigns points for letters worth 3 points
        else if (second[i] == 'B' || second[i] == 'b' || second[i] == 'C' || second[i] == 'c' ||
                 second[i] == 'M' || second[i] == 'm' || second[i] == 'P' || second[i] == 'p')
        {
            second_points = second_points + 3;
        }

        // Assigns points for letters worth 4 points
        else if (second[i] == 'F' || second[i] == 'f' || second[i] == 'H' || second[i] == 'h' ||
                 second[i] == 'V' || second[i] == 'v' || second[i] == 'W' || second[i] == 'w' ||
                 second[i] == 'Y' || second[i] == 'y')
        {
            second_points = second_points + 4;
        }

        // Assigns points for letters worth 5 points
        else if (second[i] == 'K' || second[i] == 'k')
        {
            second_points = second_points + 5;
        }

        // Assigns points for letters worth 8 points
        else if (second[i] == 'J' || second[i] == 'j' || second[i] == 'X' || second[i] == 'x')
        {
            second_points = second_points + 8;
        }

        // Assigns points for letters worth 10 points
        else if (second[i] == 'Q' || second[i] == 'q' || second[i] == 'Z' || second[i] == 'z')
        {
            second_points = second_points + 10;
        }
    }

    // Determines who won
    if (first_points > second_points)
    {
        printf("Player 1 wins!\n");
    }
    else if (second_points > first_points)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
