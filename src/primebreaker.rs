use std::env;

// Algorithm from:
// https://www.csharp-console-examples.com/programming-languages/calculate-square-root-without-using-sqrt-in-c/
fn mysqrt(number: u128) -> u128 {
    let mut i:f64 = 0.0;
    let f_number: f64 = number as f64;
    let mut root: f64 = 1.0;

    loop {
        i = i + 1.0;
        root = (f_number / root + root) / 2.0;
        if i == f_number + 1.0 {
            break
        }
    }

    return root as u128;
}

fn is_prime(number: u128) -> bool {
    let sqrt_number = mysqrt(number);

    if number < 2 { return false; }
    for i in 2..=sqrt_number {
        if number % i == 0 {
            return false;
        }
    }

    return true;
}

fn main() {
    // Handle arguments
    let args: Vec<String> = env::args().collect();
    let query = &args[0];
    let target_number: u128 = args[1].parse::<u128>().unwrap();

    println!("Running: {}", query);
    println!("Target number: {}", target_number);

    // Prime breaker algorithm
    for f_num in 2..=target_number {
        if is_prime(f_num) && f_num.pow(2) > f_num {
            for s_num in 2..=target_number {
                println!("console: trying {} * {}", f_num, s_num);
                if is_prime(s_num) && f_num * s_num == target_number{
                    println!("COMBINATION FOUND");
                    println!("F_NUM:\t{}", f_num);
                    println!("S_NUM:\t{}", s_num);
                    println!("TARGET:\t{}", target_number);
                    return;
                }
            }
        }
    }

    // In-case any number is found
    println!("Any combination was found!");
}
