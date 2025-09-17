// Code & Solution by: Reydeuss @ Github
// Problem Title: Faktorial
// Problem Description: Count the trailing zeros of the result of N!, where 1 <= N <= 10,000.
// Problem Link: https://tlx.toki.id/problems/osn-2006/A

use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let mut n: i32 = input.trim().parse::<i32>().unwrap();
    let mut count: i32 = 0;
    while n >= 5 {
        n /= 5;
        count += n;
    }

    println!("{}", count);
}
