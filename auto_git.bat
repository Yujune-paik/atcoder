cd C:\Users\81806\github\atcoder
git init
git config --global user.name "papapapanda"
git config --global user.email "beams-snow-white@ezweb.ne.jp"
git clone https://github.com/Yujune-paik/atcoder C:\Users\81806\github\atcoder\atcoder
xcopy /d C:\Users\81806\Desktop\at C:\Users\81806\github\atcoder\atcoder
cd atcoder
git add --all
git commit -m "auto commit"
git push -f
exit
