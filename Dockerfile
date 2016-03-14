FROM ubuntu:12.04

MAINTAINER Walter Tuholski <wtuholski@gmail.com>

RUN apt-get -y install python-software-properties && \
    apt-add-repository ppa:mosquitto-dev/mosquitto-ppa

RUN apt-get update

CMD ["/bin/bash"]
