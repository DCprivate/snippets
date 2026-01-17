

pub fn two_sum(nums: Vec<i32>, target: i32) -> &'static str {
    
    for i in &nums {
        for j in &nums {
            if i + j == target {
                return "Found";
            }
        }
    }
    return "Not found";
}

fn main() {
    let v = vec![2, 7, 11, 15];
    let t = 9;

    println!("{}", two_sum(v, t));
}

