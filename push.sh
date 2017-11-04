export http_proxy="127.0.0.1:8118"
export https_proxy="127.0.0.1:8118"
time=$(date)
sudo chmod 777 -R ./*
git add -A
git commit -m "$time"
git push origin master
echo Git pushed!
