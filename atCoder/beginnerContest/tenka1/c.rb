N = gets.chomp.to_i
ans = []
if N % 2 == 0
  ans = [N, N, N/2]
  puts ans.join(' ')
else
  ans = [1, 1, 1]
  puts ans.join(' ')
end
