
struct Solution {
    temp: i32,
}

impl Solution {
    pub fn str_str(haystack: String, needle: String) -> i32 {
        haystack.find(&needle).map(|i| i as i32).unwrap_or(-1)
    }
}

fn main() {
    println!("{}", Solution::str_str("yepasdf".to_string(), "asdf".to_string()));
}