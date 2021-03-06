#ifndef ROBOT_H
#define ROBOT_H

class Robot: public IterativeRobot
{
public:
	// Drive train Jaguar definitions
	Jaguar front_left_drive;
	Jaguar back_left_drive;
	Jaguar front_right_drive;
	Jaguar back_right_drive;

	// Other Jaguar definitions
	Jaguar turret;
	Jaguar fire_wheel;
	Jaguar intake;

	// Drive train definitions
	RobotDrive myRobot;

	// Joystick definitions
	Joystick joystick_0;
	Joystick joystick_1;
	Joystick control_stick_a;
	Joystick control_stick_b;

	Robot();

private:

	enum sticks {
		js_0 = 0,
		js_1 = 1,
		cs_a = 2,
		cs_b = 3
	};

	enum p_w_m {
		fld=0,
		bld=1,
		frd=2,
		brd=3,
		trt=6,
		fw=8,
		i=9

	};

	LiveWindow *lw;

	void RobotInit();
	void AutonomousInit();
	void AutonomousPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TestPeriodic();
};

#endif
