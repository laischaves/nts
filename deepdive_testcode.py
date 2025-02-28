def f_cpf(cpf, n=3):
    cpf = str(cpf)
    cpf = '.'.join(cpf[i:i+n] for i in range(0,len(cpf), n))
    return cpf[:11] + '-' + cpf[12:]

### pyxl
wb = load_workbook(filename = 'C:/filename.xlsx')

for worksheets in wb.sheetnames:
    ws = wb[worksheets]

for i in range (2, 100, 1):
    cell = ('C{}'.format(i))
    ws[cell].value = f_cpf(ws[cell].value)
    print(cell + 'CPF formatted successfully')

wb.save('C:/filename.xlxs')
print('File saved and alterations applied successfully')
