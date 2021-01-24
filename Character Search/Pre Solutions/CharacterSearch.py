def find_unique_character(string: str) -> str:
    chars = string.lower()
    copies = []
    size = len(chars)

    for target_index in range(size):
        frequency = 0
        current = chars[target_index]
        index = -1

        if current in copies:
            index = 1

        if index >= 0:
            continue

        for next_index in range(target_index + 1, size):
            if current == chars[next_index]:
                copies.append(current)
                frequency = frequency + 1
                break

        if frequency < 1:
            return chars[target_index]

    return '{} has no unique character'.format(chars)


result = find_unique_character('PurpleStar')
print(result)
