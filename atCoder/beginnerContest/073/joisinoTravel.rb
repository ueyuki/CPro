townNum,streetNum,visitNum = gets.chomp.split.map(&:to_i)

visit = gets.chomp.split.map(&:to_i)

street = []

streetNum.times do |i|
  street[i] = gets.chomp.split.map(&:to_i)
end


