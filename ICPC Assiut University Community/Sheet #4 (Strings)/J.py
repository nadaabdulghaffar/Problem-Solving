def count_characters(s):
    # Step 1: Initialize an empty dictionary to count frequencies
    freq_dict = {}

    # Step 2: Count each character's frequency
    for char in s:
        if char in freq_dict:
            freq_dict[char] += 1
        else:
            freq_dict[char] = 1
    
    # Step 3: Sort the characters
    sorted_chars = sorted(freq_dict.keys())
    
    # Step 4: Print the results
    for char in sorted_chars:
        print(f"{char} : {freq_dict[char]}")

s = input()
count_characters(s)
