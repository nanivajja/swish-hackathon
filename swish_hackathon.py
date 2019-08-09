from math import *
def main():
    ip=input()
    cost=int(ip.split(' ')[0])
    disc=int(ip.split(' ')[1])
    required=0
    while(cost>0):
        required=required+cost
        cost=floor(cost-(cost*(disc/100)))
    print(required)
main()