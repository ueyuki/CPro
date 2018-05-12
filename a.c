//====================================================================
//  2018年度 工学部 「プログラミング２」(富永)
//  C言語 第３部
//--------------------------------------------------------------------
//  関数の様々な応用
//  再帰法の計算過程 最小剰余によるユークリッドの互除法
//--------------------------------------------------------------------
//  第04週 教室型 第01セット
//  W04_C01/Q25_T0.c
//--------------------------------------------------------------------
//  tominaga  富永浩之
//  2017.05.10
//====================================================================


//====================================================================
//  番号 : s17t200
//  氏名 : 高松太郎
//====================================================================


//====================================================================
//  概略仕様
//====================================================================


//====================================================================
//  事前処理
//====================================================================

//--------------------------------------------------------------------
//  ヘッダファイル
//--------------------------------------------------------------------

#include <stdio.h>

//--------------------------------------------------------------------
//  定義マクロ
//--------------------------------------------------------------------

#define  ABSO(X)    // 絶対値


//====================================================================
//  大域宣言
//====================================================================

//--------------------------------------------------------------------
//  大域定義
//--------------------------------------------------------------------


//--------------------------------------------------------------------
//  関数原型
//--------------------------------------------------------------------

int rem_p(int a, int b);    // 正剰余
int rem_m(int a, int b);    // 最小剰余
int gcd_p(int a, int b);    // 正剰余でのユークリッドの互除法による最大公約数
int gcd_m(int a, int b);    // 最小剰余でのユークリッドの互除法による最大公約数


//====================================================================
//  本体処理
//====================================================================

int main(void)
{
    //----  局所宣言
    int a, b;
    int d;

    //----  入力処理
    scanf("%d %d", &a, &b);

    //----  1行目の計算と出力
    d = gcd_p(a, b);
    printf("→ %d\n", d);

    //----  2行目の計算と出力
    d = gcd_m(a, b);
    printf("→ %d\n", d);

    //----  終了処理
    return 0;
}


//====================================================================
//  関数定義
//====================================================================

//--------------------------------------------------------------------
//  正剰余
//--------------------------------------------------------------------
//
// +17 % +5 → +2
// -17 % +5 → +3
// +17 % -5 → +2
// -17 % -5 → +3

int rem_p(int a, int b)
{
    int r;    // 剰余

    b = ABSO(b);                     // 除数bを正符号に統一
    if ( a%b == 0 ) { return 0; }    // 整除の場合は、先に0を返却
    r = (a < 0) ? b-(-a)%b : a%b;    // 被除数aが負のとき、正での剰余をbから引く

    return r;    // 剰余の返却
}

//--------------------------------------------------------------------
//  最小剰余
//--------------------------------------------------------------------
//
// +17 % +5 → +2
// -17 % +5 → -2
// +17 % -5 → +2
// -17 % -5 → -2
//
// +15 % +6 → +3
// -15 % +6 → -3
// +15 % -6 → +3
// -15 % -6 → -3

int rem_m(int a, int b)
{
    int r;    // 剰余

    // 仮の値として、正剰余を求めておく
    // 整除の場合は、先に0を返却
    // 除数bを正符号に統一
    // 剰余がb/2のとき
    //   被除数aの符号に合わせる
    // そうでないとき
    //   剰余がb/2より大きいとき、剰余から除数bを引く

    return r;    // 剰余の返却
}

//--------------------------------------------------------------------
//  正剰余によるユークリッドの互除法
//--------------------------------------------------------------------

int gcd_p(int a, int b)
{
    //----  初期条件
    if ( b == 0 ) {
        return a;            // 初期値の返却
    }

    //----  漸化式
    printf("%d ", a);        //   引数aの出力
    return gcd_p(b, a%b);    //   再帰呼出
}

//--------------------------------------------------------------------
//  最小剰余によるユークリッドの互除法
//--------------------------------------------------------------------

int gcd_m(int a, int b)
{
    //----  初期条件
    // aの絶対値の返却

    //----  漸化式
    // 引数aの出力
    // 最小剰余を用いた漸化式による再帰呼出
}