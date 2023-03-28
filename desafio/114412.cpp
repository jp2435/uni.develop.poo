/*
 * Nmec: 114412
 * Nome: Jorge C Pereira
 * P4
 */

#include <iostream>
#include "./libs/UltrassoundSensor.h"
#include "./libs/LuminanceSensor.h"
#include "./libs/SmartLamp.h"
#include "./libs/SensorMsg.h"
#include "./libs/ActuatorMsg.h"

using namespace std;

int main(){
    UltrassoundSensor us("sensor_presenca","megaLum",5.2);
    LuminanceSensor ls("sensor_luz","luxoSensor",33.3);
    SmartLamp sl("lampada","lightFixtures",false);
    SensorMsg sm(100,1,"luminance",5.2);
    ActuatorMsg am(1,12,"switch On");

    cout << us << ls << sl << sm << am << endl;

    cin >> ls;
    cout << ls;
    return 0;
}