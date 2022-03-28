#include <stdio.h>
int auth(int db[3][2],int id, int pin){
    int flag = 0;
    for(int i = 0; i<3; i++){
        if(id == db[i][0] && pin == db[i][1]){
            flag = 1;
        }
    }
    return flag;
}
int main(){
    int db[3][2] = {{1111,1111},{2222,2222},{3333,3333}};
    int id,pin;
    printf("Enter ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if(auth(db,id,pin)){
        printf("You have successfully logged in\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}