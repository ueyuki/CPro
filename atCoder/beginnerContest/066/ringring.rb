price = gets.chomp.split.map(&:to_i)
price = price.sort
puts price[0] + price[1]
