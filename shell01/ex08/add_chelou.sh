#export FT_NBR1=\\\'\?\"\\\"\'\\
#export FT_NBR2=rcrdmddd
echo $FT_NBR1 + $FT_NBR2 | tr "mrdoc" "01234" | tr "'" '0' | tr '\\' '1' | tr '"' '2' | tr "?" '3' | tr '!' '4' | xargs echo "obase=13;ibase=5;" | bc | tr "0123456789ABC" "gtaio luSnemf"