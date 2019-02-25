#Cameron Coventry
#HW6
#2/24/19

puts "Enter a phrase: "
phrase = gets
newword = phrase
phrase = phrase.gsub(/^[f]/, 'gh')
phrase = phrase.gsub(/^[F]/, 'gh')
phrase = phrase.gsub(/(?!^)i(?!^)/, 'o')
phrase = phrase.gsub(/(?!^)I(?!^)/, 'o')
phrase = phrase.gsub(/sh$/, 'ti')

puts "Original input: " + newword
puts "New Word : " + phrase
