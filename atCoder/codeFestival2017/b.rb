n, m, k = gets.chomp.split.map(&:to_i)

n.times do |a|
  m.times do |b|
    if (a * (m - b) + b * (n - a)) == k
      puts 'Yes'
      exit
    end
  end
end

puts 'No'
