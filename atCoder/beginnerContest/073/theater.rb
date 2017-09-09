n = gets.chomp.to_i

number = 0

n.times do
  a,b = gets.chomp.split.map(&:to_i)
  number += b - a + 1
end

puts number
