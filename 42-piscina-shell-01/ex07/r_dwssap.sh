cat -e /etc/passwd | awk -F: 'NR % 2 == 1{print $1}' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' "," |  sed 's/,$/./g; s/,/, /g'
