def input()
  gets.chomp
end

def judgNumberOfConst(s1, s2)
  if s1.count('"') != s2.count('"')
    puts "DIFFERENT"
    return 'false'
  end
end
 
def split(s)
  s.split('"')
end

def judgEnd(s1)
  if s1 == ['.']
    exit
  end
end

def judgSameSize(s1, s2)
  s1Size = s1.size
  s2Size = s2.size

  if s1Size != s2Size
    return 'false'
  else
    return 'true'
  end
end

def judgStatus(s1, s2)
  status = 'IDENTICAL'

  if judgSameSize(s1, s2) == 'false'
    status = 'CLOSE'
  end

  size = s1.size
  closeCount = 0

  0.upto(size-1) do |i|

    if i % 2 == 0 && s1[i] != s2[i]
      return status = 'DIFFERENT'
    end

    if i % 2 == 1 && s1[i] != s2[i]
      closeCount += 1
      if closeCount > 1 
        return status = 'DIFFERENT'
      end
    end

  end

  if closeCount == 1
    status = 'CLOSE'
  end

  return status
end

def output(result)
  puts result
end

loop do
  s1 = input()
  s1Split = split(s1)
  judgEnd(s1Split)

  s2 = input()
  s2Split = split(s2)

  if judgNumberOfConst(s1, s2) == 'false'
    next
  end

  status = judgStatus(s1Split, s2Split)

  output(status)
end
