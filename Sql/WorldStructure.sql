DROP TABLE IF EXISTS `players`;
CREATE TABLE `players` 
(
    `guid` BIGINT UNSIGNED NOT NULL,
    `entry` INT UNSIGNED NOT NULL,
    `username` VARCHAR(20) NOT NULL,
    `password` VARCHAR(30) NOT NULL,
    `email` VARCHAR(40) NOT NULL,
    `x` INT UNSIGNED NOT NULL,
    `y` INT UNSIGNED NOT NULL,
    `map` INT UNSIGNED NOT NULL,
    PRIMARY KEY(guid)
);

DROP TABLE IF EXISTS `maps`;
CREATE TABLE `maps` 
(
    `guid` BIGINT UNSIGNED NOT NULL,
    `name` VARCHAR(20) NOT NULL,
    PRIMARY KEY(guid)
);
