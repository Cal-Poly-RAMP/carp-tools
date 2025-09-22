#!/usr/bin/env bash
set -x

if ! command -v docker &> /dev/null; then
    echo "Please install Docker: https://www.docker.com/products/docker-desktop/"
    exit 1
fi

if ! command -v xhost &> /dev/null; then
    sudo apt update && sudo apt -y install x11-xserver-utils || {
        echo "Please install xhost manually:"
        echo "sudo apt install x11-xserver-utils"
        exit 1
    }
fi

# Pull CARP tools image
docker pull ryancramer22/carp-tools:latest
if [ $? -ne 0 ]; then
    sudo groupadd docker || true
    sudo usermod -aG docker $USER
    sudo chmod 770 /var/run/docker.sock
    echo "Log out, log in, and re-run this script."
fi
