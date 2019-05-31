import copy


def pop_list(input_list, inverse=None):
    for i in range(len(input_list)):
        if inverse:
            print('Usunieto: {}'.format(input_list[-1]))
            input_list.pop()
        else:
            print('Usunieto: {}'.format(input_list[0]))
            input_list.pop(0)
        print('Stan kontenera: {}'.format(input_list))
        
    print('Kontener jest pusty: {}'.format(input_list))


if __name__ == '__main__':
    
    n = int(input('Ile liczb chcesz wprowadzic: '))
    numbers = []
    for i in range(n):
        number = input('Podaj liczbe nr {}: '.format(i))
        try:
            number = int(number)
        except ValueError:
            number = float(number)
        numbers.append(number)
      
    numbers_inst_2 = copy.deepcopy(numbers)
      
    for idx, val in enumerate(numbers):
        print('{}: {}'.format(idx, val))

    print('\nUsuwanie wg kolejnosci dodania')
    pop_list(numbers)
    print('\nUsuwanie w odwrotnej kolejnosci')
    pop_list(numbers_inst_2, inverse=True)
