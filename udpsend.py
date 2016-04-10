import socket
import sys

data = "x" * 10000 
UDP_PORT = 10001

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

sent = sock.sendto(data, (sys.argv[1], UDP_PORT))


