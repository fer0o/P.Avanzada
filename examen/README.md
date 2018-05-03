Save Humanity
Oh!! Mankind is in trouble again. This time, it's a deadly disease spreading at a rate never seen before.
The need of the hour is to set up efficient virus detectors. You are the lead at Central Hospital and you
need to find a fast and reliable way to detect the footprints of the virus DNA in that of the patient.
The DNA of the patient as well as of the virus consists of lowercase letters. Since the collected data is raw,
there may be some errors. You will need to find all substrings in the patient DNA that either exactly
matches the virus DNA, or has at most one mismatch, i.e., a difference in at most one location.
For example, " aa " and " aa " are matching, "ab" and " aa " are matching, while "ab" and " ba" are not.
Input Format
The first line contains the number of test cases, . test cases follow.
Each test case consists of a single line containing two space-separated strings (the patient DNA) and
(the virus DNA).


Constraints
 and contain at most characters each.
All characters in and are lowercase English letters.


Output Format
For each test case, output a single line containing a space-delimited list of starting indices ( -indexed) of
substrings of which are matching with according to the condition mentioned above. The indices have
to be in increasing order. If there is no matching substring, output No Match! .
Sample Input 0