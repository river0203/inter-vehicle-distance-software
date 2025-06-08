#include <stdio.h>

typedef struct{
	float present_speed;
	float throttle_pressure;
	float acceleration;
	float distance_to_lead;
}VehicleState;

typedef struct {
	float present_brake_pressure;
	int tread_brake_pedal;
}BreakControl;

int main(void)
{
	return 0;
}