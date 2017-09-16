n = gets.chomp.to_i
k = gets.chomp.to_i
x = gets.chomp.split.map(&:to_i)

ans = 0

x.each do |i|
  a = (i - 0).abs * 2
  b = (k - i).abs * 2
  ans += (a < b) ? a : b
end

puts ans
