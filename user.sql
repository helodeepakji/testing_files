-- phpMyAdmin SQL Dump
-- version 5.0.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 29, 2021 at 12:08 PM
-- Server version: 10.4.14-MariaDB
-- PHP Version: 7.2.34

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `discus`
--

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `sno` int(11) NOT NULL,
  `username` varchar(30) NOT NULL,
  `password` varchar(290) NOT NULL,
  `date` datetime NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`sno`, `username`, `password`, `date`) VALUES
(1, 'teena', '$2y$10$ZSRRYdK8jM7ctNyd3vQb5ug.3P0ul1Rg2eb.4ZREGjapYNhCk0sla', '2020-12-07 17:52:27'),
(2, 'teena14', '$2y$10$kPv6xk9RLDoygL.zk87vNOYUIvaFDlDL7X7uWX1VYEqVe2e9UV7Bm', '2020-12-07 17:53:17'),
(4, 'hello', '$2y$10$xautn0jmk0jKEWL5bMUiUetTUr17Dn3aAb0Ck4MErPxzIV5iLhqV.', '2020-12-07 17:54:17'),
(5, 'deepak', '$2y$10$3rZ6EL/PypmYvm.Igegmb.HH4aXa1y07wDQOuMdi67uBkQ3gtolh..', '2020-12-07 17:54:55'),
(6, 'sandeep', '$2y$10$72.5t/F.NCF3sn6WUPUH4eQf3r/OhpbgR3nzofICnqSidKZLcAT6q', '2020-12-07 18:01:01'),
(9, 'rohit', '$2y$10$TPqHcdDU24Q9PZ8QPlU0IODh9pL2cEk.D/33ByWBlvrVDxand6AhW', '2021-01-22 05:54:56');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`sno`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `user`
--
ALTER TABLE `user`
  MODIFY `sno` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
