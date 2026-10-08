/*
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.


Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.

Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.


Constraints:

    1 <= s.length <= 104
    s consists of only English letters and spaces ' '.
    There will be at least one word in s.
*/


pub fn length_of_last_word(s: String) -> i32 {

    let words: Vec<_> = s.split(' ').collect();

    for i in (0..words.len()).rev() {
        if words[i] == "" {
            continue;
        }
        else {
            return words[i].len() as i32;
        }


        //let temp = match words.last() {
        //    Some(item) => item.len(),
        //    None => 0,
        //};
        
    }

    0
    //temp as i32
}

fn main() {

    let s = "Hello world"; // output: 5
    let s2 = "   fly me   to   the moon  "; // output: 4
    let s3 = "luffy is still joyboy"; // output: 6


    //println!("{}", length_of_last_word(s.to_string()));
    println!("{}", length_of_last_word(s2.to_string()));
    //println!("{}", length_of_last_word(s3.to_string()));





}