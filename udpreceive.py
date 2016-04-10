import socket

UDP_IP = "0.0.0.0"
UDP_PORT = 10001
 
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) 
sock.bind((UDP_IP, UDP_PORT))

while True:
    data, addr = sock.recvfrom(64*1024) 
    print "received message:", str(len(data))


