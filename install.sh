#!/bin/bash
sudo apt install python3 python3-pip
python -m venv .venv
source .venv/bin/activate
git clone https://github.com/ardupilot/pymavlink.git --recursive
python3 -m pip install -r pymavlink/requirements.txt
pip install lxml