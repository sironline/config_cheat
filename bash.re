# 相等: =~
if [[ $digit =~ [0-9*] ]];then
# 区配scanf
[[ $digit =~ ([0-9]*) ]] && echo ${BASH_REMATCH[1]}
