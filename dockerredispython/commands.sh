sudo docker run -d --name redis -p 6379:6379 redis:latest

sudo docker build -t alpine:app .
sudo docker run -d --name app -p 4000:80 --lint redis alpine:app

sudo docker-compose up -d #levantar conjunto de servicios
sudo docker-compose down #terminar conjunto de servicios

