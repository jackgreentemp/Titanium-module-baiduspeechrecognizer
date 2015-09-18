/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/sj/_0nyhk0n7l53kbbqwx_4t5yr0000gn/T/imactwo/baiduspeechrecognizerandroid-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/sj/_0nyhk0n7l53kbbqwx_4t5yr0000gn/T/imactwo/baiduspeechrecognizerandroid-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.babyplan.baiduspeechrecognizer.ExampleProxy.h"
#include "com.babyplan.baiduspeechrecognizer.BaiduspeechrecognizerandroidModule.h"


#line 14 "/private/var/folders/sj/_0nyhk0n7l53kbbqwx_4t5yr0000gn/T/imactwo/baiduspeechrecognizerandroid-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 23, duplicates = 0 */

class BaiduspeechrecognizerandroidBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
BaiduspeechrecognizerandroidBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
BaiduspeechrecognizerandroidBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 47,
      MAX_WORD_LENGTH = 69,
      MIN_HASH_VALUE = 47,
      MAX_HASH_VALUE = 69
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 16 "/private/var/folders/sj/_0nyhk0n7l53kbbqwx_4t5yr0000gn/T/imactwo/baiduspeechrecognizerandroid-generated/KrollGeneratedBindings.gperf"
      {"com.babyplan.baiduspeechrecognizer.ExampleProxy", ::com::babyplan::baiduspeechrecognizer::baiduspeechrecognizerandroid::ExampleProxy::bindProxy, ::com::babyplan::baiduspeechrecognizer::baiduspeechrecognizerandroid::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 17 "/private/var/folders/sj/_0nyhk0n7l53kbbqwx_4t5yr0000gn/T/imactwo/baiduspeechrecognizerandroid-generated/KrollGeneratedBindings.gperf"
      {"com.babyplan.baiduspeechrecognizer.BaiduspeechrecognizerandroidModule", ::com::babyplan::baiduspeechrecognizer::BaiduspeechrecognizerandroidModule::bindProxy, ::com::babyplan::baiduspeechrecognizer::BaiduspeechrecognizerandroidModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/sj/_0nyhk0n7l53kbbqwx_4t5yr0000gn/T/imactwo/baiduspeechrecognizerandroid-generated/KrollGeneratedBindings.gperf"

