# Bash Tutorial

This project was intended to provide interactive shell tutorial for the linux beginner. However, this project is not progressing now.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

- A Linux machine with `sudo` account
- cmake 3.11 or above
- gcc/g++

```shell
trainer1:*:1002:1002:trainer1:/home/trainer1:/home/trainer1/sh
```

### Installing

- Clone the repository on `/home`, and create user for **trainer1**
- compile C++ code with cmake or cmake3
- modify /etc/passwd file for login shell to be /home/trainer1/sh

End with an example of getting some data out of the system or using it for a little demo

### docker-compose and Docker

- You can start the application with **`docker-compose up --build`**
- I've decided to provide the docker file for the trainer.
- The compose file has open ssh port to 2222. You can access the server via following command

```bash
ssh trainer1@localhost 2222 # or ip address
password: trainer1
```

## Note
This is a template. You are welcome to add trainer2 or more.

Thank you

## Credit
The tutorial idea comes from this website. (They have a server running tutorial in telnet.)
www.hackerschool.org
