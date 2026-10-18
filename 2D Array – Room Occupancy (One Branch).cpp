#include <iostream>
#include <cstdlib>  
#include <ctime>     
using namespace std;

int main() {
	srand(time(0));
    const int FLOORS = 5;
    const int ROOMS_PER_FLOOR = 10;
    int occupancy[FLOORS][ROOMS_PER_FLOOR];

    cout << "===== Room Occupancy (One Branch) =====" << endl;

    for (int floor = 0; floor < FLOORS; floor++) 
	{
        for (int room = 0; room < ROOMS_PER_FLOOR; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }
    cout << "\n--- Occupancy Report per Floor ---" << endl;
    for (int floor = 0; floor < FLOORS; floor++) 
	{
        int occupied = 0, vacant = 0;
        for (int room = 0; room < ROOMS_PER_FLOOR; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        cout << "Floor " << (floor + 1)
             << " | Occupied: " << occupied
             << " | Vacant: " << vacant << endl;
    }

    return 0;
}