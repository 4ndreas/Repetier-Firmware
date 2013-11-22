//Board = Arduino Mega 2560 or Mega ADK
#define __AVR_ATmega2560__
#define ARDUINO 104
#define F_CPU 16000000L
#define __AVR__
extern "C" void __cxa_pure_virtual() {;}

void check_mem();
void send_mem();
void update_extruder_flags();
void update_ramps_parameter();
//
void defaultLoopActions();
//
inline long Div4U2U(unsigned long a,unsigned int b);
long CPUDivU2(unsigned int divisor);
byte get_coordinates(GCode *com);
inline unsigned int ComputeV(long timer,long accel);
inline unsigned long mulu6xu16to32(unsigned int a,unsigned int b);
inline unsigned int mulu6xu16shift16(unsigned int a,unsigned int b);
inline long bresenham_step();
inline long bresenham_step();
void kill(byte only_steppers);
inline void setTimer(unsigned long delay);

#include "C:\Users\4ndreas\arduino-1.0.4\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\Users\4ndreas\arduino-1.0.4\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\Repetier.pde"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\Commands.cpp"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\Configuration.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\Eeprom.cpp"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\Eeprom.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\Extruder.cpp"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\FatStructs.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\Reptier.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\SDCard.cpp"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\SdFat.cpp"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\SdFat.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\fastio.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\gcode.cpp"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\gcode.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\motion.cpp"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\pins.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\ui.cpp"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\ui.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\uiconfig.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\uilang.h"
#include "C:\Users\4ndreas\Documents\GitHub\Repetier-Firmware\Repetier\uimenu.h"
