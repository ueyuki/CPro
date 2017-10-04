N = gets.chomp.to_i
ans = []
if N % 2 == 0
  ans = [N, N, N/2]
else
  (1..3500).each do |h|
    (1..3500).each do |w|
      x = N * h * w
      y = 4 * h * w - N * h - w * N
      if y > 0 && x % y == 0
        ans = [h, w, x / y]
        break
      end
    end
  end
end

puts ans.join(' ')
