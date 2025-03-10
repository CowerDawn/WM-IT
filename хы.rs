use rand::Rng;
use std::io;

fn main() {
    let mut rng = rand::thread_rng();
    let messages = vec![
        "rust!",
        "wm-it!",
        "ХЫ!",
        "хы!",
        "хыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыыы!",
    ];

    println!("НЕТ БЛЯТЬ ХЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ!");

    loop {
        println!("\nХЫЫЫЫЫЫЫЫЫЫЫЫЫЫыыыыыыыыы: ");
        let mut input = String::new();
        io::stdin().read_line(&mut input).expect("хыыыыыыыыыыыы");

        match input.trim().to_lowercase().as_str() {
            "y" => {
                let message_index = rng.gen_range(0..messages.len());
                println!("{}", messages[message_index]);
            }
            "n" => {
                println!("хахы!");
                break;
            }
            _ => println!("э хы."),
        }
    }
}
