#include<stdio.h>
struct Ticket{
    char name[50];
    int seats;
};
int main(){
    int availableSeats=50;
    struct Ticket t;
    printf("Enter Passenger Name: ");
    scanf("%s",t.name);
    printf("Enter Number of Seats: ");
    scanf("%d",&t.seats);
    if(t.seats<=availableSeats){
        availableSeats-=t.seats;
        printf("Booking Successful\n");
        printf("Passenger: %s\n",t.name);
        printf("Seats Booked: %d\n",t.seats);
        printf("Remaining Seats: %d\n",
               availableSeats);
    }
    else{
        printf("Seats Not Available\n");
    }
    return 0;
}