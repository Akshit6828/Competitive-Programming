#include <iostream>
#include <string>

using namespace std;

bool IsVovel(char last_letter){
    last_letter = tolower(last_letter);
    if(last_letter == 'a' || last_letter == 'e' || last_letter == 'i' || last_letter == 'o' ||last_letter == 'u' )
      return true;
    return false;
}
string GetRuler(const string& kingdom) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler = "";
  char last_letter_ = kingdom[kingdom.length() - 1];
  if(IsVovel(last_letter_))
    ruler = "Alice";
  else if(last_letter_!='y' and last_letter_!='Y')
    ruler = "Bob";
  else
    ruler = "nobody";
  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
