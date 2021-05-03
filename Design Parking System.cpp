class ParkingSystem {
public:
    vector<int> slots ={0,0,0};
    ParkingSystem(int big, int medium, int small) {
        slots[0] += big;
        slots[1] += medium;
        slots[2] += small;
    }
    
    bool addCar(int carType) {
        int i= carType-1;
        if(slots[i] >0){
            slots[i] -= 1;
            return true;
        }
        else{
            return false;
        }
    }
};
