


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

    let out = String::new();
    let mut i = 0;


    for s in strs {
        println!("{}", s);

        /*for c in s.chars() {
            println!("{}", c);
            if 
        }*/

        println!("{}", s.as_bytes()[i]);
        i += 1;
    }

    out
}

fn main() {

    let v = vec!["flower".to_string(), "flow".to_string(), "flight".to_string()];

    println!("{}", longest_common_prefix(v));

}