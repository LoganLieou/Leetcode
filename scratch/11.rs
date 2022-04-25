fn max_area(height: Vec<i32>) -> i32 {
    let mut l = 0;
    let mut r = height.len() - 1;
    let mut res = 0;

    while l < r {
        let cur_area: i32 = i32::min(height[l], height[r]) * ((r - l) as i32);
        res = i32::max(cur_area, res);
        if height[l] < height[r] {
            l += 1;
        } else {
            r -= 1;
        }
    }
    return res;
}

fn main() {
    println!("{:?}", max_area([1, 2, 2, 3, 4, 3, 2, 1].to_vec()));
}
