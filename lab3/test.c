#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void parse_date(char date[], int pieces[]);
char* get_month(int m);


int main(int argc, char* argv[]) {
    FILE *fin;
    FILE *fout;
    char buff[20];
    char output[30];
    int date[3];
    char to_string[4];

    if (argc != 3) {
        printf("Error: provide input and output file names as command-line arguments\n");
        return 1;
    }

    fin = fopen(argv[1], "r");
    fout = fopen(argv[2], "w");

    if (fin != NULL && fout != NULL) {
        while (fgets(buff, 20, fin) != NULL) {
            parse_date(buff, date);
            strcpy(output, get_month(date[0]));
            //(date[1], to_string, 10);
            sprintf(to_string, "%d", date[1]);
            strcat(to_string, " ");
            strcat(output, to_string);
            strcat(output, ", ");
            //itoa(date[2], to_string, 10);
            sprintf(to_string, "%d", date[2]);
            strcat(output, to_string);
            fprintf(fout, "%s\n", output);
        }

        fclose(fin);
        fclose(fout);
    }
    else {
        printf("Error opening input or output file\n");
    }

    return 0;
}

void parse_date(char date[], int pieces[]) {
    pieces[0] = atoi(strtok(date, "/"));
    pieces[1] = atoi(strtok(NULL, "/"));
    pieces[2] = atoi(strtok(NULL, "/"));
}

char* get_month(int m) {
    switch(m) {
        case 1:
            return "January";
        case 2:
            return "February";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "September";
        case 10:
            return "October";
        case 11:
            return "November";
        default:
            return "December";    
    }

    char *my_itoa(int num, char *str)
    {
        if(str == NULL)
        {
            return NULL;
        }
        sprintf(str, "%d", num);
        return str;
    }
}