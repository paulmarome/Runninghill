def find_unique_character(string: str) -> str:
    chars = string.lower()
    size = len(chars)

    for target_index in range(size):
        current = chars[target_index]

        if chars.index(current) == chars.rindex(current):
            return chars[target_index]

    return '{} has no unique character'.format(chars)


result = find_unique_character('PopularStar')
print(result)
