import bind
import time


def main():
    num = 1
    while True:
        print(bind.first_n(num))
        num += 10
        time.sleep(1)

if __name__ == "__main__":
    main()




