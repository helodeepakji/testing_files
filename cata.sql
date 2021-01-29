-- phpMyAdmin SQL Dump
-- version 5.0.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 29, 2021 at 12:07 PM
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
-- Table structure for table `cata`
--

CREATE TABLE `cata` (
  `cata_id` int(3) NOT NULL,
  `cata_name` varchar(30) NOT NULL,
  `cata_dec` text NOT NULL,
  `Date` datetime NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `cata`
--

INSERT INTO `cata` (`cata_id`, `cata_name`, `cata_dec`, `Date`) VALUES
(1, 'Smartphone', 'To begin with, all android phones are Smartphones but all Smartphones are not android based. Android is an Operating System (OS) that is used in Smartphone. ... So, android is an Operating System (OS) like others. Smartphone is basically a core device which is more like a computer and OS i', '2020-11-28 10:08:30'),
(2, 'Laptop', 'A laptop (also laptop computer) is a small. portable personal computer (PC) with a \"clamshell\" form factor, typically having a thin LCD or LED computer screen mounted on the inside of the upper lid of the clamshell and an alphanumeric keyboard on the inside of the lower lid.', '2020-11-28 10:11:12'),
(3, 'Desktop', 'A desktop is a computer display area that represents the kinds of objects one might find on top of a physical desk, including documents, phone books, telephones, reference sources, writing and drawing tools, and project folders', '2020-11-28 10:12:29'),
(4, 'Headphone', 'Headphones are a pair of small loudspeaker drivers worn on or around the head over a user\'s ears. They are electroacoustic transducers, which convert an electrical signal to a corresponding sound', '2020-11-28 10:13:21'),
(5, 'Bluetooth Speaker', 'Wireless speakers are loudspeakers that receive audio signals using radio frequency waves rather than over audio cables.', '2020-11-28 10:14:11'),
(6, 'SmartTV', 'A smart TV, also known as a connected TV, is a traditional television set with integrated Internet and interactive Web 2.0 features, which allows users to stream music and videos, browse the internet, and view photos. Smart TV is a technological convergence of computers, television sets, a', '2020-11-29 11:02:39');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `cata`
--
ALTER TABLE `cata`
  ADD PRIMARY KEY (`cata_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `cata`
--
ALTER TABLE `cata`
  MODIFY `cata_id` int(3) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
