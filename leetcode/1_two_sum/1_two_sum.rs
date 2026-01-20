

pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {   
    let mut v: Vec<i32> = Vec::new();

    for i in 0..nums.len() {
        for j in i+1..nums.len() {
            println!("{} : {}, {:?} : {:?}", i, j, nums[i], nums[j]);
            if nums[i] + nums[j] == target {
                v.push(i as i32);
                v.push(j as i32);
                return v; 
            }
        }
    }
    return v;
}

fn main() {
    let v = vec![2, 7, 11, 15];
    let v2 = vec![3, 2, 4];
    let v3 = vec![3, 3];
    let v4 = vec![2, 5, 5, 11];
    let v5 = vec![-1,-2,-3,-4,-5];

    println!("{:?}", two_sum(v3, 6));


    
}

