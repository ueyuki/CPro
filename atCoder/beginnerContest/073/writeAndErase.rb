n = gets.chomp.to_i

paper = []

n.times do
  paper << gets.chomp
end

paper.sort!
uniq = paper.uniq

ans = 0
k = 0

uniq.each do |i|
  num = 0

  while i == paper[k] do
    num += 1
    k += 1
  end

  if num % 2 == 1
    ans += 1
  end
end

puts ans
