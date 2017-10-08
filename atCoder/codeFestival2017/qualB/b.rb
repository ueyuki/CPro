n = gets.chomp.to_i
d = gets.chomp.split.map(&:to_i)
d.sort!

m = gets.chomp.to_i
t = gets.chomp.split.map(&:to_i)
t.sort!

if m > n
  puts 'NO'
  exit
end

i = 0
while i < n
  if t[0] == d[i]
    t.delete_at(0)
    if t.empty?
      puts 'YES'
      exit
    end
  end
  i += 1
  if t.length > (n - i)
    puts 'NO'
    exit
  end
end
