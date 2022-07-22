#include<stdio.h>
#include<string.h>
#define LEN 20
// struct user{
//     char fname[LEN];
//     char mname[LEN];
//     char lname[LEN];
// };
// struct user_id{
//     char sid[30];
//     struct user name;
// }user_list[5] = {
//     {"302039823", {"Flossie", "Mike", "Dribble"}},
//     {"200111188", {"Liye", "", "Wang"}}
// };

struct user_id{
    char sid[30];
    struct{
        char fname[LEN];
        char mname[LEN];
        char lname[LEN];
    };
}user_list[5] = {
    {"302039823", "Flossie", "Mike", "Dribble"},
    {"200111188", "Liye", "", "Wang"}
};
void print_user_id(struct user_id list);

int main(void)
{
    printf("Test to printf struct contents:\n");
    for(int i=0; i<5; i++)
        print_user_id(user_list[i]);
    return 0;
}

void print_user_id(struct user_id list)
{
        if(strlen(list.sid) < 9)
            return;
        printf("%s, ", list.lname);
        printf("%s ", list.fname);
        if(strlen(list.mname) > 0)
            printf("%c. ", list.mname[0]);
        printf("-- %s\n", list.sid);
}