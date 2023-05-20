import bpy
import serial
import threading
# Specify the serial port and baud rate
serial_port = 'COM8'  # Replace with the appropriate serial port
baud_rate = 9600

# Open the serial connection
ser = serial.Serial(serial_port, baud_rate)

# Get the cube object
cube_object = bpy.data.objects['Cube']

def read_distance():
    while True:
        line = ser.readline().decode().strip()
        if line.startswith('Distance:'):
            distance = int(line.split(':')[1])
            print('Distance from Arduino:', distance)
            
            # Calculate the x-axis movement based on distance
            x_movement = distance / 100.0  # Adjust the scaling if necessary
            
            # Move the cube object
            cube_object.location.x = x_movement

# Start reading distance measurements in a separate thread
distance_thread = threading.Thread(target=read_distance)
distance_thread.start()
