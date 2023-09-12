FROM ubuntu:23.04
ENV TZ=US \
    DEBIAN_FRONTEND=noninteractive
RUN apt update
RUN apt -y dist-upgrade
RUN apt -y install python3 python3-pip git wget gpg apt-transport-https unzip psmisc htop  

RUN apt -y install build-essential qtbase5-dev libboost-dev cmake

# RUN echo "root:root" | chpasswd
# RUN useradd -ms /bin/bash -u 1000 img2mcrl2
# USER img2mcrl2
# WORKDIR /home/img2mcrl2

user ubuntu


