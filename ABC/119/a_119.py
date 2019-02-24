S = input()
yyyy, mm, dd = S.split("/")

yyyy = int(yyyy)
mm = int(mm)
dd = int(dd)

if (yyyy>=2019):
    if (mm>4):
        print('TBD')
    else:
        print('Heisei')
else:
    print('Heisei')
        
    