n = gets.chomp.to_i
a = []
b = []
hashA = {}
hashB = {}

0.upto(n-2) do |i|
  a[i], b[i] = gets.chomp.split

  if a[i] == 1
    hashA.store(i.to_s, 'black')
  elsif a[i] == n
    hashA.store(i.to_s, 'white')
  else
    hashA.store(i.to_s, 'noColor')
  end
  
  if b[i] == 1
    hashB.store(i.to_s, 'black')
  elsif b[i] == n
    hashB.store(i.to_s, 'white')
  else
    hashB.store(i.to_s, 'noColor')
  end

end

turn = 0

loop do
  turn += 1
  0.upto(n-2) do |i|
    if a[i] == turn+1 || b[i] == turn+1

    end
  end
end

