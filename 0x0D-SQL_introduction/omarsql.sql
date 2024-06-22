-- creating database called omarsql and creating table called cities
CREATE DATABASE IF NOT EXISTS omarsql;

USE omarsql;

CREATE TABLE IF NOT EXISTS cities (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100) NOT NULL,
    state_id INT NOT NULL
);

CREATE USER IF NOT EXISTS 'omar'@'localhost' IDENTIFIED BY 'omar';

GRANT ALL PRIVILEGES ON omarsql.* TO 'omar'@'localhost';

