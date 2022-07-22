#include<stdio.h>
#include<string.h>
#define LEN 20
struct user{
    char fname[LEN];
    char mname[LEN];
    char lname[LEN];
};
struct user_id{
    char sid[30];
    struct user name;
}user_list[5] = {
    {"302039823", {"Flossie", "Mike", "Dribble"}},
    {"200111188", {"Liye", "", "Wang"}}
};
void print_user_id(struct user_id list[], int num);

int main(void)
{
    printf("Test to printf struct contents:\n");
    print_user_id(user_list, 5);
    return 0;
}

void print_user_id(struct user_id list[], int num)
{
    int index;
    for(index=0; index<num; index++)
    {
        if(strlen(list[index].sid) < 9)
            break;
        printf("%s, ", list[index].name.lname);
        printf("%s ", list[index].name.fname);
        if(strlen(list[index].name.mname) > 0)
            printf("%c. ", list[index].name.mname[0]);
        printf("-- %s\n", list[index].sid);
    }
}