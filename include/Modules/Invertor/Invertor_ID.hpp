#ifndef INVERTER_ID
#define INVERTER_ID
/*
Holds every regId to use with a short desciption
Those regIDs are specific to the BAMOCAR inverter and are found in the CAN datasheet
*/

#define RegID_Options 0x01 // No information
#define RegID_SafetyState 0x02 // Set the invertor in safety mode
#define RegID_NominalMotorFreqency 0x05 //gives/set the motor freqency
#define RegID_NominalMotorVoltage 0x06 //gives/set the nominal Motor voltage
#define RegID_TimeDCpreMag 0x07 // no information
#define RegID_DCVoltage 0x08  //Gives/set DCVoltage 
#define RegID_MinVoltage 0x0a // gives /set minimum voltage
#define RegID_MinFrequency 0x0b // gives/ set minimum frequency
#define RegID_OffsetCurrent 0x1f //gives/set offset current
#define RegID_ActualCurrent 0x20 // gives actual current 
#define RegID_IcmdRamp 0x25 // control ramp0 -1001
#define RegID_CommandCurrent 0x26 // I cmd
#define RegID_ActualSpeed 0x30 // gives the speed
#define RegID_MotorTemp 0x49 // gives the motor temperature
#define RegID_AirTemp 0x4b // gives air temperature
#define RegID_MaxMotorCurrent 0x4d //Maximale current
#define RegID_StatusMask 0x51 //Status mask id 
#define RegID_MotorRatedSpeed 0x59 // gives the rated speed of the motor?
#define RegID_CanbusIDRX 0x68 // to change the RXid
#define RegID_CanbusIDTX 0x69 // to change the TXid
#define RegID_OutputVoltage 0x8a // gives output voltage usage
#define RegID_ClearErrorList 0x8e // clear the errors
#define RegID_TroqueOut 0xa0 // give the output torque
#define RegID_FilterdActualSpeed 0xa8 // give the filterd speed

#endif
