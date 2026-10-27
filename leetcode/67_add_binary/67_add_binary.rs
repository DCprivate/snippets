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

    let mut len = a.len();
    if len < b.len() {
        len = b.len();
    }

    /*for i in (0..len).rev() {
        println!("{:?} {:?}", a.as_bytes()[i], b.as_bytes()[i]);
        if a.as_bytes()[i] == 1 as u8 && b.as_bytes()[i] == 1 as u8 {
            println!("match for i = {}", i);
        }
        

    }*/

    let output = String::new();

    for a_byte in a.as_bytes() {
        for b_byte in b.as_bytes() {
            //println!("{:?} : {:?}", a_byte, b_byte);

            if a_byte == b_byte {
                println!("match");
                s += 0;
                break;
            }


            break;
        }

    }




    
    "Failed\n".to_string()
}




fn main() {

    let a1 = String::from("11");
    let a2 = String::from("1");
    let b1 = String::from("1010");
    let b2 = String::from("1011");

    //println!("{}", add_binary(a1, a2)); // output: 1000
    println!("{}", add_binary(b1, b2)); // output: 11111


}