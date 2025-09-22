#!/usr/bin/env bash

ABS_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" && pwd )

if [ "$1" = "-l" ] || [ "$1" = "--local" ]; then
    CONTAINER=carp-tools:latest
else
    CONTAINER=ryancramer22/carp-tools:latest
fi

TERM=xterm-256color
HOST=asic

if [ ! -d $ABS_DIR/workspace ]; then
    mkdir -p $ABS_DIR/workspace
fi

# Mac
if [[ "$OSTYPE" == "darwin"* ]]; then
    set -x
    xhost -; xhost +localhost
    docker run -it --rm \
        -v $ABS_DIR/workspace:/home/$HOST/workspace:rw \
        -v ~/.ssh:/home/$HOST/.ssh \
        -v ~/.gitconfig:/home/$HOST/.gitconfig \
        -e DISPLAY=host.docker.internal:0 \
        -e "TERM=$TERM" \
        --hostname $HOST \
        $CONTAINER -s bash

# Linux / WSL
else
    set -x
    xhost local:root
    docker run -it --rm \
        -v $ABS_DIR/workspace:/home/$HOST/workspace:rw \
        -v ~/.ssh:/home/$HOST/.ssh \
        -v ~/.gitconfig:/home/$HOST/.gitconfig \
        -v /tmp/.X11-unix:/tmp/.X11-unix \
        -v /mnt/wslg:/mnt/wslg \
        -e DISPLAY \
        -e "TERM=$TERM" \
        --hostname $HOST \
        --net=host \
        $CONTAINER -s /bin/bash
fi
