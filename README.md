# Ultrasonic_object_motion_blender


https://github.com/NewEthicker/Ultrasonic_object_motion_blender/assets/88562515/a3d3485a-71c6-4f1d-b8a8-8a44661f5bb3

This repository contains a Blender project that utilizes ultrasonic sensors to detect objects' proximity and animate their movement in a virtual environment. The project demonstrates the integration of hardware sensors and Blender's scripting capabilities to create an interactive experience.

The main script, `script.py`, establishes a serial connection with an Arduino board, reads distance measurements from the ultrasonic sensor, and adjusts the position of a cube object accordingly. As objects come closer or move away, the cube reacts in real-time, providing a visual representation of the detected objects' proximity.

## To set up the hardware connections, follow these steps:
Connect the Ultrasonic Sensor to the Arduino board as follows:
1. Connect the Trig pin of the Ultrasonic Sensor to digital pin 9 on the Arduino.
2. Connect the Echo pin of the Ultrasonic Sensor to digital pin 10 on the Arduino.
3. Make sure to connect the VCC and GND pins of the Ultrasonic Sensor to the appropriate power and ground pins on the Arduino.
4. Upload the Arduino code, `arduino.ino` to the Arduino board using the Arduino IDE. This code initializes the ultrasonic sensor and sends distance measurements via serial communication to the Blender script.

## To set up the script.py in blender, follow these steps:
1. Open blender > tap on scripting tab > tap on (+ New) > paste the `script.py` there.
2. Click on : [PyPi](https://files.pythonhosted.org/packages/1e/7d/ae3f0a63f41e4d2f6cb66a5b57197850f919f59e558159a4dd3a818f5082/pyserial-3.5.tar.gz) > save it anywhere > extract it.
3. Go to `C:\Program Files\Blender Foundation\Blender 3.4\3.4\python\lib` > paste the extracted file `pyserial-3.5`.
4. Go to extracted file `pyserial-3.5` > copy `Serial` folder from it, paste it to > `C:\Program Files\Blender Foundation\Blender 3.4\3.4\python\lib`.
5. If, it didn't work then [CLICKME!](https://youtu.be/qFRqy2itak0)

By exploring this project, you'll gain insights into sensor integration, real-time data processing, and interactive simulations using Blender. It serves as an excellent learning resource for those interested in combining hardware sensors and virtual environments.

Feel free to explore the code, experiment with different sensor configurations, and enhance the project further. Contributions and suggestions are welcome!

To get started, follow the instructions in the repository to set up the hardware connections, install the necessary dependencies, and run the script within Blender.

Enjoy the journey of bringing virtual objects to life with the power of ultrasonic sensors and Blender!

Remember to replace any placeholders (such as repository name or hardware details) with the appropriate information specific to your project.

If you have any further questions, please let me know. Happy coding!
