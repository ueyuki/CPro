a, b = gets.chomp.split.map(&:to_i)

status = 'Impossible'

if a % 3 == 0
  status = 'Possible'
elsif b % 3 == 0
  status = 'Possible'
elsif (a + b) % 3 == 0
  status = 'Possible'
end

puts status
