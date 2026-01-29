


/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

Constraints:
    1 <= strs.length <= 200
    0 <= strs[i].length <= 200
    strs[i] consists of only lowercase English letters if it is non-empty.
*/



pub fn longest_common_prefix(strs: Vec<String>) -> String {

    let mut out = String::new();
    let mut i = 0;

    if strs[0].len() as i32 == 0 {
        println!("Empty string");
        return out;
    }

    let mut temp = &strs[0].as_bytes()[0];
    println!("{}", temp);

    loop {
        for s in &strs {
            println!("{} : {}", s, s.as_bytes()[i]);

            if s.as_bytes()[i] == *temp {
                //out.push(s.as_bytes()[i] as char);
                continue;
            }
            else {
                println!("found mismatch");
                return out;
            }     
            
        }
        i += 1;
        out.push(*temp as char);
        temp = &strs[0].as_bytes()[i];

    }
}

fn main() {

    let v = vec!["flower".to_string(), "flow".to_string(), "flight".to_string()];
    let v2 = vec!["".to_string()];
    println!("\n{}", longest_common_prefix(v));
    println!("{}", longest_common_prefix(v2));
}