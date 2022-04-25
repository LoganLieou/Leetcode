use i32::{max, min};

fn max_profit(prices: Vec<i32>) -> i32 {
    let mut min_price = prices[0];
    let mut max_diff = 0;

    for i in 1..prices.len() {
        min_price = min(min_price, prices[i]);
        max_diff = max(max_diff, prices[i] - min_price);
    }

    return max_diff;
}

fn main() {
    let x: i32 = max_profit(vec![1, 1]);
    let y: i32 = max_profit(vec![2, 2, 3, 1, 4, 7]);

    println!("x: {}, y: {}", x, y);
}
