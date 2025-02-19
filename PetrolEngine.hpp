#pragma once

class PetrolEngine {
public:
    PetrolEngine(int power, float capacity, int gears);
    
    void changeGear(int gear);
    bool correctnessOfTheGearChange(int); 
    bool TestConstructorData(int,float,int); 
    bool validation(int);
     
    int getPower();
    float getCapacity();
    int getGears();
    int getCurrentGear();

    void setPower(int);
    void setCapacity(float);
    void setGears(int);
    void setCurrentGear(int);

private:
    
    int power_;       // in HP
    float capacity_;  // in ccm
    int gears_;
    int currentGear_;
};
