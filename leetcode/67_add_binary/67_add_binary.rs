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

    let mut output = String::new();
    let mut carry = 0;

    for (a_byte, b_byte) in a.as_bytes().into_iter().zip(b.as_bytes()) {

        println!("\n{:?} : {:?}", a_byte, b_byte);

        if *a_byte == b'1' && *b_byte == b'1' { // if both 1
            if carry == 1 { // if carry bit set
                println!("both 1 with carry set");
                output.insert(0, '1');
                carry = 1;

            }
            else { // if carry bit not set
                println!("both 1 with carry not set");
                output.insert(0, '0');
                carry = 1;

            }
        }
        else if *a_byte == b'0' && *b_byte == b'0' { // if both 0
            if carry == 1 { // if carry bit set
                println!("both 0 with carry set");
                output.insert(0, '1');
                carry = 0;

            }
            else { // if carry bit not set
                println!("both 0 with not carry set");
                output.insert(0, '0');
                carry = 0;
            }
        }
        else { // if either is 1
            if carry == 1 { // if carry bit set
                println!("either 0 or 1 with carry set");
                output.insert(0, '0');
                carry = 0;

            }
            else { // if carry bit not set
                println!("either 0 or 1 with not carry set");
                output.insert(0, '1');
                carry = 0;

            }   
        }
    }

    if output.as_bytes()[0] == b'0' {
        output.insert(0, '1');
    }

    output
}




fn main() {

    let a1 = String::from("11");
    let a2 = String::from("1");
    let b1 = String::from("1010");
    let b2 = String::from("1011");

    println!("{}", add_binary(a1, a2)); // output: 100
    println!("{}", add_binary(b1, b2)); // output: 10101


}