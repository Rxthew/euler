def sumMultiples()
    _THRESHOLD = 1000
    sum = 0
    for i in 0.._THRESHOLD - 1 do
        if i % 3 == 0 || i % 5 == 0 then
          sum += i
        end
    end
    sum
  end
  
puts sumMultiples 