#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 /*maximum number of reminders */
#define MSG_LEN 60 /*maximum length of a reminder message */


int read_line(char str[], int n);

int main(void) {

    char reminders[MAX_REMIND][MSG_LEN+3]; /* 3 extra characters are needed for day_str + null character */
    char day_str[3], msg_str[MSG_LEN+1];
    int day, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if (day == 0)
            break;
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);
    
    return 0;
}


int read_line(char str[], int n) {
    int c, i = 0; 

    while ((c = getchar()) != '\n') {
        if (i < n)
            str[i++] = c;
    }
    str[i] = '\0';
    return i;
}