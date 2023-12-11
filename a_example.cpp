#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;


constexpr ll BUF_SZ = (1 << 25); 
inline namespace f_input {
  char buf[BUF_SZ];
  int pos, len;
  char next_char() {
    if (pos == len) {
      pos = 0;
      len = (ll)fread(buf, 1, BUF_SZ, stdin);
      if (!len) { return EOF; }
    }
    return buf[pos++];
  }
  string read_string(bool read_line = false) {
    auto is_character_string = [&](char c) { return c != ' ' && c != '\n' && c != '\t' && c != EOF; };
    auto is_character_string_rl = [&](char c) { return c != '\n' && c != '\t' && c != EOF; };
    string s;
    char ch;
    if (read_line == false)
      while (is_character_string(ch = next_char())) { s += ch; }
    else
      while (is_character_string_rl(ch = next_char())) { s += ch; }
    return s;
  }
  ll read_int() {
    ll x;
    char ch;
    int sign = 1;
    while (!isdigit(ch = next_char()))
      if (ch == '-') { sign *= -1; }
    x = ch - '0';
    while (isdigit(ch = next_char())) { x = x * 10 + (ch - '0'); }
    return (ll)x * sign;
  }
}
inline namespace f_output {
  char buf[BUF_SZ];
  int pos;
  void flush_out() {
    fwrite(buf, 1, pos, stdout);
    pos = 0;
  }
  void write_char(char c) {
    if (pos == BUF_SZ) { flush_out(); }
    buf[pos++] = c;
  }
  void write_string(string s) {
    for(char c : s)
      write_char(c);
  }
  void write_int(ll x) {
    static char num_buf[101];
    if (x < 0) {
      write_char('-');
      x *= -1;
    }
    int len = 0;
    for (; x >= 10; x /= 10) { num_buf[len++] = (char)('0' + (x % 10)); }
    write_char((char)('0' + x));
    while (len) { write_char(num_buf[--len]); }
  }
}
void init_output() { assert(atexit(flush_out) == 0); }
template<class T> void read(vector<T> &v);
template<class T> void read(T &x) { x = read_int(); }
void read(double &x) { string d; d = read_string(); x = stod(d); }
void read(long double &x) { string d; d = read_string(); x = stold(d); }
void read(string &x) { x = read_string(); }
void readln(string &x) { x = read_string(true); }
template<class T, class... H> void read(T &t, H&... h) { read(t); read(h...); }
template<class T> void read(vector<T> &x) { for (T &c : x) read(c); }
void write(const int& x) { write_int(x); }
void write(const ll& x) { write_int(x); }
void write(const string& b) { write_string(b); }
void write(const char &c) { write_char(c); }
void write(const char *s) { write_string(string(s)); }
void writeln() { write_char('\n'); }
template<class T> void write(const T& t) { write_string(to_string(t)); }
template<class T, class... H> void write(const T& t, const H&... h) { write(t); write(h...); }
template<class T, class... H> void writeln(const T& t, const H&... h) { write(t); writeln(h...); }
#ifdef DEBUG
#define sim template<class T, class... H
#define simarg template<class... H
#define dor sim,
#define rge sizeof...(h) ? cerr << ", ", 0 : -1; imie(h...)
void imie() {}
simarg > void imie(const string S, const H... h) { cerr << "\"" << S << "\""; imie(h...); }
sim > void imie(const T t, const H... h) { cout << t; rge; }
dor class T2 > void imie(const pair<T, T2> p, const H... h) { cerr << "("; imie(p.first, p.second); cerr << ")"; rge; }
sim > void imie(const vector<T> A, const H... h) { cerr << "["; for (int i = 0; i < A.size(); ++i) {cerr << A[i]; i < A.size() - 1 ? cerr << " ", 0 : -1; } cerr << "]"; rge; }
#define debug(...) cerr << "LINE: " << __LINE__ << " -> " << #__VA_ARGS__ << " = ", imie(__VA_ARGS__), cerr << '\n'
#else
#define debug(...) 0
#endif
constexpr ll MOD = 1e9 + 7;
ll fastpow(ll base, ll exp, bool use_mod = false) {
  if (use_mod)
    base %= MOD;
  ll res = 1;
  while (exp > 0) {
    if (exp & 1)
      res = (use_mod ? res * base % MOD : res * base);
    base = (use_mod ? base * base % MOD : base * base);
    exp >>= 1;
  }
  return res;
}
template<class T> int umax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
template<class T> int umin(T& a, const T& b) { return a > b ? a = b, 1 : 0; }
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
#define sz(x) (int)(x).size()
#define YN(x) ((x) ? puts("YES") : puts("NO"))
#define Yn(x) ((x) ? puts("Yes") : puts("No"))
#define yn(x) ((x) ? puts("yes") : puts("no"))




void solve() {
 
}

int main() {
  init_output();
    
    solve();
  
}
