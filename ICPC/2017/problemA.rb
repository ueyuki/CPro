def input()
  gets.chomp.split.map(&:to_i)
end

def judgEnd(n, m)
  if n == 0 && m == 0
    exit
  end
end

def judgCombinationMax(cMax, n, m, a)
  startNum = 1

  0.upto(n-2) do |i|
    cMax << 0
    startNum.upto(n-1) do |j|
      sumPrime = a[i] + a[j]
      if sumPrime > cMax[i] && sumPrime <= m
        cMax[i] = a[i] + a[j]
      end
    end  
    startNum += 1
  end
end

def output(cMax)
  if cMax.max == 0
    puts 'NONE'
  else
    puts cMax.max
  end
end

loop do
  n, m = input()
  judgEnd(n, m)
  a = input()

  cMax = []

  judgCombinationMax(cMax, n, m, a)

  output(cMax)
end

