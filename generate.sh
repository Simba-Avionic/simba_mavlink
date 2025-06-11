#!/bin/bash
./install.sh
python3 -m pymavlink.tools.mavgen --lang=C --wire-protocol=1.0 --output=lib ./simba.xml  --strict-units --error-limit 0