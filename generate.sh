#!/bin/bash
git clone https://github.com/ArduPilot/pymavlink
python3 -m venv .venv
source .venv/bin/activate
pip install -r requirements.txt --break-system-packages
python3 pymavlink/tools/mavgen.py --lang=C --wire-protocol=1.0 --output=../lib ./simba.xml  --strict-units