n = gets.chomp.to_i
a, b = gets.chomp.split.map(&:to_i)

(n-1).times do
  c, d = gets.chomp.split.map(&:to_i)
  if a < c
    a = c
    b = d
  end
end

a += b

puts a
