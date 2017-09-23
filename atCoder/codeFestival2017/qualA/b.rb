n, m, k = gets.chomp.split.map(&:to_i)

(0..n).each do |a|
  (0..m).each do |b|
    if (a * (m - b) + b * (n - a)) == k
      puts 'Yes'
      exit
    end
  end
end

puts 'No'
