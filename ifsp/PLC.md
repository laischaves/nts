## CLP

The current state of the inputs is updated, stored on RAM and called "input image table".

Processing methods: cycle, interruption (like subroutines), timed, by event.

PLC executes a program line by line, the program is structured as a sequence of events. It does not execute loops or deviations, instead using interruptions.
- #### A PLC is composed of
  
  **Input modules:**
  Inputs can be: digital inputs (on/off switch, sensor, float switch, bimetallic strip, etc), analog input (dial, control knob, resistance temperature detector, pressure sensor, strain gauge, etc)
  
  Will perform the 4 basic tasks:
- Sense when a signal is received;
- Convert the signal into a logical signal to for the CPU;
- Isolate the PLC from fluctuations in the input signal;
- Send a _fixed_ signal to the CPU
  
  
  **CPU**
  The central processing unit holds the software to be used by the PLC. It usually consists of a microprocessor, a memory chip and integrated circuits related to the tasks it'll be used for.
  
  **Output modules**
  Can be: indicator lights, solenoid valves, motor starts, etc.
  
  **A PLC will also have** a battery (for protection from power failures), a screen for user interface, a time clock & calendar, and a power supply.