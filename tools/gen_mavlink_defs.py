import sys
import pymavlink.generator.mavgen as mavgen
from argparse import Namespace

if __name__ == "__main__":
# Stworzenie obiektu Namespace z argumentami
    opts = Namespace(
        language="C",                   # Język generowanego kodu
        wire_protocol="1.0",        # Wersja protokołu MAVLink
        output=sys.argv[1],         # Katalog wyjściowy, przekazany z Bazela
        definitions=[sys.argv[2]],  # Lista plików XML z definicjami MAVLink
        validate=True,               # Walidacja, domyślnie włączona
        error_limit=0,              # Maksymalna liczba błędów walidacji
        strict_units=True,          # Weryfikacja jednostek
        no_validate=False           # Możliwość wyłączenia walidacji, jeśli chcemy
    )
    
    if mavgen.mavgen(opts, [sys.argv[2]]):
        exit(0)
    exit(1)
