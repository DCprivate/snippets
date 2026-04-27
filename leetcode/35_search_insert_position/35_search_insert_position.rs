
/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/

pub fn search_insert(nums: Vec<i32>, target: i32) -> i32 {
    
    // Possible bisecting solution
    let mut min = 0;
    let mut max = nums.len();

    while min < max {
        let mut mid = (max + min) / 2;

    }


    // O(n) solution
    /*for i in 0..nums.len() {
        if nums[i] == target {
            return i as i32;
        }
    }*/

    min as i32
}

fn main() {

    let nums = vec![1,3,5,6];
    let target1 = 5; // output: 2
    let target2 = 2; // output: 1
    let target3 = 7; // output: 4
    println!("{}", search_insert(nums.clone(), target2));

    let test_nums = vec![0,1,2,3,4,5,6,7];
    //println!("{}", search_insert(test_nums, 9));
}