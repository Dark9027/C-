-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 30, 2023 at 07:57 PM
-- Server version: 10.4.27-MariaDB
-- PHP Version: 8.2.0

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `library`
--

-- --------------------------------------------------------

--
-- Table structure for table `admin`
--

CREATE TABLE `admin` (
  `Name` text NOT NULL,
  `Email` text NOT NULL,
  `Contact` text NOT NULL,
  `status` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `admin`
--

INSERT INTO `admin` (`Name`, `Email`, `Contact`, `status`) VALUES
('Sagar juneja', 'sagarjuneja@gmail.com', '9084497569', 'YES'),
('Ajay', 'Aj@gmail.com', '8974568775', 'NO');

-- --------------------------------------------------------

--
-- Table structure for table `admin2`
--

CREATE TABLE `admin2` (
  `Name` text NOT NULL,
  `Email` text NOT NULL,
  `LID` text NOT NULL,
  `password` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `admin2`
--

INSERT INTO `admin2` (`Name`, `Email`, `LID`, `password`) VALUES
('Sagar Juneja', 'Sagarjuneja@gmail.com', 'L344531001', '1234565');

-- --------------------------------------------------------

--
-- Table structure for table `borrow`
--

CREATE TABLE `borrow` (
  `Book_Number` text NOT NULL,
  `Email` text NOT NULL,
  `Contact` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `borrow`
--

INSERT INTO `borrow` (`Book_Number`, `Email`, `Contact`) VALUES
('M3421', 'sagar@gmail.com', '9074373858'),
('M3245', 'Den@yahoo.com', '7906858214'),
('E3213', 'riya@yahoo.com', '8997845092'),
('T2315', 'sjuneja@gmail.com', '6739349766'),
('T4294', 'carry@tm.ac.in', '8936497564');

-- --------------------------------------------------------

--
-- Table structure for table `e1`
--

CREATE TABLE `e1` (
  `Id` varchar(20) NOT NULL,
  `Book_Name` varchar(50) NOT NULL,
  `Publisher` varchar(50) NOT NULL,
  `Date` date NOT NULL,
  `Type` text NOT NULL,
  `Pic` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `e1`
--

INSERT INTO `e1` (`Id`, `Book_Name`, `Publisher`, `Date`, `Type`, `Pic`) VALUES
('E1231', 'Engineer Mechanics Static', 'Hibbers', '2021-07-16', 'E1', './book_pic/e1.jpg'),
('E1423', 'Transactions on engineering Tech', 'Springer', '2022-06-21', 'E1', './book_pic/e2.jpg'),
('E3213', 'Physics', 'Hibbers', '2019-03-19', 'E1', './book_pic/e3.jpg'),
('E3217', 'Genetic Engineering -3', 'Robert Williamson', '2023-03-11', 'E1', './book_pic/e4.jpg'),
('E2176', 'Bridge engineering', 'Lian Dua', '2022-11-16', 'E1', './book_pic/e5.jpg'),
('E3426', 'The Ancient engineers', 'L.Sparge', '2023-06-06', 'E1', './book_pic/e6.jpg');

-- --------------------------------------------------------

--
-- Table structure for table `m1`
--

CREATE TABLE `m1` (
  `Id` varchar(20) NOT NULL,
  `Book_Name` varchar(50) NOT NULL,
  `Publisher` varchar(50) NOT NULL,
  `Date` date NOT NULL,
  `Type` text NOT NULL,
  `Pic` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `m1`
--

INSERT INTO `m1` (`Id`, `Book_Name`, `Publisher`, `Date`, `Type`, `Pic`) VALUES
('M1233', 'medical embryology', 'John mclachim', '2022-05-14', 'M1', './book_pic/m1.jpg'),
('M2132', 'Medical Embryology', 'T.W. Sadier', '2023-07-10', 'M1', './book_pic/m2.jpg'),
('M1423', 'medical embryology', 'T.W. Sadier', '2020-08-07', 'M1', './book_pic/m3.jpg'),
('M2452', 'General Embryology part-1', 'Dr. Sadier', '2023-01-10', 'M1', './book_pic/m4.jpg'),
('M2832', 'Clinical Anatomy', 'Wiley-Blackwell', '2022-11-11', 'M1', './book_pic/m5.jpg'),
('M1620', 'Principles', 'Dr. H.R', '2021-06-09', 'M1', './book_pic/m6.jpg'),
('M3245', 'Essentials of Clinical Anatomy', 'Tedd R.Olson', '2023-06-05', 'M1', './book_pic/m7.jpg'),
('M3421', 'Principles of anatomy & Physiology', 'L.Sparge', '2021-06-08', 'M1', './book_pic/m8.jpg');

-- --------------------------------------------------------

--
-- Table structure for table `message`
--

CREATE TABLE `message` (
  `Message` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `t1`
--

CREATE TABLE `t1` (
  `Id` varchar(20) NOT NULL,
  `Book_Name` varchar(50) NOT NULL,
  `Publisher` varchar(50) NOT NULL,
  `Date` date NOT NULL,
  `Type` text NOT NULL,
  `Pic` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `t1`
--

INSERT INTO `t1` (`Id`, `Book_Name`, `Publisher`, `Date`, `Type`, `Pic`) VALUES
('T1421', 'Court of mist and fury', 'Sarah J. Maas', '2023-05-04', 'T1', './book_pic/t1.jpg'),
('T1863', 'Game of thrones', 'george B.R. Martin', '2021-07-03', 'T1', './book_pic/t2.jpg'),
('T2143', 'Fifty Shades', 'E.L. James', '2021-07-05', 'T1', './book_pic/t3.jpg'),
('T2315', 'Charlotte\'s Web', 'E.B White', '2023-03-08', 'T1', './book_pic/t4.jpg'),
('T4294', 'Red White & Royal Blue', 'Casey mcQuiston', '2020-10-08', 'T1', './book_pic/t5.jpg'),
('T3252', 'Isaac Asimov foundation', 'hugo', '2023-06-14', 'T1', './book_pic/t6.jpg'),
('T5234', 'Harry Potter', 'J.K Rowling', '2023-01-11', 'T1', './book_pic/t7.jpg'),
('T1078', 'Good girl Bad Blood', 'holly jackson', '2023-04-14', 'T1', './book_pic/t8.jpg');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
