/*
Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"

Example 2:

Input: a = "1010", b = "1011"
Output: "10101"

 

Constraints:

    1 <= a.length, b.length <= 104
    a and b consist only of '0' or '1' characters.
    Each string does not contain leading zeros except for the zero itself.
*/







fn add_binary(a: String, b: String) -> String {

    //let a_as_int = u32::from_str_radix(&a, 2).unwrap();
    //let b_as_int = u32::from_str_radix(&b, 2).unwrap();
    //format!("{:b}", a_as_int + b_as_int)
    
    
    
    "Failed\n".to_string()
}




fn main() {

    let a1 = String::from("11");
    let a2 = String::from("1");
    let b1 = String::from("1010");
    let b2 = String::from("1011");

    println!("{}", add_binary(a1, a2));
    println!("{}", add_binary(b1, b2));


}