#include <stdio.h>

int main() {
    char name[50];
    char ans[50];

    printf("Ano pangalan mo? ");
    scanf("%49s", name); // limit input to 49 chars para safe

    // Check name manually (safe, with '\0' end)
    if ((name[0]=='S' && name[1]=='o' && name[2]=='f' && name[3]=='i' && name[4]=='a' && name[5]=='\0') ||
        (name[0]=='s' && name[1]=='o' && name[2]=='f' && name[3]=='i' && name[4]=='a' && name[5]=='\0') ||
        (name[0]=='f' && name[1]=='i' && name[2]=='a' && name[3]=='\0') ||
        (name[0]=='a' && name[1]=='i' && name[2]=='f' && name[3]=='\0')) {
        printf("HI BABY.\n");
    } else {
        printf("Tanginamo sino ka?\n");
    }

    printf("Love mo ba ako??? ");
    scanf("%49s", ans); // same safety

    if ((ans[0]=='y' && ans[1]=='e' && ans[2]=='s' && ans[3]=='\0') ||
        (ans[0]=='o' && ans[1]=='o' && ans[2]=='\0') ||
        (ans[0]=='u' && ans[1]=='u' && ans[2]=='\0') ||
        (ans[0]=='s' && ans[1]=='y' && ans[2]=='m' && ans[3]=='p' && ans[4]=='r' && ans[5]=='e' && ans[6]=='\0')) {
        printf("I LOVE YOU TOO!!!!!!!!!!! HAPPY BIRTHDAYYYYYYYYYYY LOVE!!!\n");
    } else {
        printf("Di ko babayadan ung 1,500.\n");
    printf("Joke lang, Happy Birthday love love.");
    }

    return 0;
}

