import re

def main():
    p = re.compile('totrecorded')
    
    i = 0 # current line used in loop
    a = 0 # line with desired value, will be updated when found
    
    with open('brilcalc.log') as file:
        for line in file:
            i = i+1
            match = p.search(line)
            if match:
                sp = match.span() # where in the line is 'totrecorded'
                f = sp[0] # position of the first letter
                print('totrecorded in line', i, 'with span', sp)
                a = i+2 # value comes two lines later
            if a != 0:
                if i == a:
                    # find the value of the luminosity, use position f
                    result = line[f:f+6]
                    print(result)

if __name__ == "__main__":
    main()