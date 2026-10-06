/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10863bac0; end: 10863bb23;  */

void FUN_10863bac0(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c55c();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x40) {
    func_0x00010863a268();
  }
  return;
}



/* Entry: 10863bb24; end: 10863bb4f;  */

void FUN_10863bb24(void)

{
  uint extraout_w8;
  
  func_0x00010863c544();
  if ((extraout_w8 & 1) == 0) {
    FUN_10863bb50();
  }
  return;
}



/* Entry: 10863bb50; end: 10863bb5f;  */

void FUN_10863bb50(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c494();
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x40;
    func_0x00010863a268();
  }
  return;
}



/* Entry: 10863bb60; end: 10863bbb7;  */

void FUN_10863bb60(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x40;
    func_0x00010863a268();
  }
  return;
}



/* Entry: 10863bbb8; end: 10863bbbf;  */

void FUN_10863bbb8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x40;
    func_0x00010863a268();
  }
  return;
}



/* Entry: 10863bbc0; end: 10863bbef;  */

void FUN_10863bbc0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468();
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x40;
    func_0x00010863a268();
  }
  return;
}



/* Entry: 10863bbf0; end: 10863bc2f;  */

long * FUN_10863bbf0(long *param_1,long *param_2)

{
  long *plVar1;
  long extraout_x9;
  long alStack_58 [5];
  
  if ((ulong)param_2 >> 0x3a == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 5);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffbf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x3ffffffffffffff;
    }
    return plVar1;
  }
  FUN_10863b9a4();
  func_0x00010863c3c0();
  if ((long *)(extraout_x9 / 0x28) < param_2) {
    if ((long *)0x666666666666666 < param_2) {
      FUN_10863bca4();
      func_0x00010863c4f4();
      func_0x00010863be78();
      func_0x00010863c44c();
      func_0x00010863c3a8();
      func_0x00010863c370();
      func_0x00010863c594();
      FUN_10863bd54();
      func_0x00010863c2f4();
      return param_1;
    }
    func_0x00010863c4b4();
    FUN_10863bcd8(alStack_58);
    func_0x00010863c52c();
    FUN_10863bcb0();
    param_1 = alStack_58;
    func_0x00010863be78(param_1);
  }
  return param_1;
}



/* Entry: 10863bc30; end: 10863bca3;  */

void FUN_10863bc30(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x00010863c3c0();
  if ((ulong)(extraout_x9 / 0x28) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_10863bca4();
      func_0x00010863c4f4();
      func_0x00010863be78();
      func_0x00010863c44c();
      func_0x00010863c3a8();
      func_0x00010863c370();
      func_0x00010863c594();
      FUN_10863bd54();
      func_0x00010863c2f4();
      return;
    }
    func_0x00010863c4b4();
    FUN_10863bcd8(auStack_48);
    func_0x00010863c52c();
    FUN_10863bcb0();
    func_0x00010863be78(auStack_48);
  }
  return;
}



/* Entry: 10863bca4; end: 10863bcaf;  */

void FUN_10863bca4(void)

{
  func_0x00010863c3a8();
  func_0x00010863c370();
  func_0x00010863c594();
  FUN_10863bd54();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863bcb0; end: 10863bcd7;  */

void FUN_10863bcb0(void)

{
  func_0x00010863c370();
  func_0x00010863c594();
  FUN_10863bd54();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863bcd8; end: 10863bd2b;  */

void FUN_10863bcd8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010863c3e4();
  if (param_2 != 0) {
    func_0x00010863bd0c(param_4);
  }
  func_0x00010863c390(0x28);
  return;
}



/* Entry: 10863bd2c; end: 10863bd53;  */

void FUN_10863bd2c(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [48];
  
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010863c338();
  while (unaff_x22 != unaff_x19) {
    func_0x00010863c514();
    func_0x00010863bde0();
    func_0x00010863c694();
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  func_0x00010863bdac();
  FUN_10863be08(auStack_70);
  return;
}



/* Entry: 10863bd54; end: 10863bdab;  */

void FUN_10863bd54(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [48];
  
  func_0x00010863c338();
  while (unaff_x22 != unaff_x19) {
    func_0x00010863c514();
    func_0x00010863bde0();
    func_0x00010863c694();
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  func_0x00010863bdac();
  FUN_10863be08(auStack_60);
  return;
}



/* Entry: 10863bdac; end: 10863be07;  */

void FUN_10863bdac(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_10861b090(param_2 + 8);
  }
  return;
}



/* Entry: 10863be08; end: 10863be33;  */

void FUN_10863be08(void)

{
  uint extraout_w8;
  
  func_0x00010863c544();
  if ((extraout_w8 & 1) == 0) {
    FUN_10863be34();
  }
  return;
}



/* Entry: 10863be34; end: 10863be43;  */

void FUN_10863be34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x00010863c494();
  for (; param_3 != param_5; param_3 = param_3 + -0x28) {
    FUN_10861b090(param_3 + -0x20);
  }
  return;
}



/* Entry: 10863be44; end: 10863bea3;  */

void FUN_10863be44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x28) {
    FUN_10861b090(param_3 + -0x20);
  }
  return;
}



/* Entry: 10863bea4; end: 10863beab;  */

void FUN_10863bea4(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x28;
    FUN_10861b090(extraout_x8 + -0x20);
  }
  return;
}



/* Entry: 10863beac; end: 10863bedf;  */

void FUN_10863beac(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468();
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x28;
    FUN_10861b090(extraout_x8 + -0x20);
  }
  return;
}



/* Entry: 10863bee0; end: 10863bf33;  */

long * FUN_10863bee0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x666666666666667) {
    uVar1 = (param_1[2] - *param_1) / 0x28;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x333333333333332 < uVar1) {
      plVar2 = (long *)0x666666666666666;
    }
    return plVar2;
  }
  FUN_10863bca4();
  func_0x00010863c3a8();
  func_0x00010863c370();
  FUN_10863bff0();
  func_0x00010863c2f4();
  return param_1;
}



/* Entry: 10863bf34; end: 10863bf6f;  */

void FUN_10863bf34(void)

{
  func_0x00010863c370();
  FUN_10863bff0();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863bf70; end: 10863bfc3;  */

void FUN_10863bf70(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010863c3e4();
  if (param_2 != 0) {
    func_0x00010863bfa4(param_4);
  }
  func_0x00010863c390(0x48);
  return;
}



/* Entry: 10863bfc4; end: 10863bfef;  */

void FUN_10863bfc4(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010863c338();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x48) {
    func_0x00010863c514();
    FUN_10863c080();
    lStack_48 = lStack_48 + 0x48;
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  FUN_10863c054();
  FUN_10863c0c0(auStack_70);
  return;
}



/* Entry: 10863bff0; end: 10863c053;  */

void FUN_10863bff0(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x00010863c338();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x48) {
    func_0x00010863c514();
    FUN_10863c080();
    lStack_38 = lStack_38 + 0x48;
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  FUN_10863c054();
  FUN_10863c0c0(auStack_60);
  return;
}



/* Entry: 10863c054; end: 10863c07f;  */

void FUN_10863c054(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c55c();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x48) {
    func_0x00010863a120();
  }
  return;
}



/* Entry: 10863c080; end: 10863c0bf;  */

void FUN_10863c080(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010863c5b0();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



/* Entry: 10863c0c0; end: 10863c0eb;  */

void FUN_10863c0c0(void)

{
  uint extraout_w8;
  
  func_0x00010863c544();
  if ((extraout_w8 & 1) == 0) {
    FUN_10863c0ec();
  }
  return;
}



/* Entry: 10863c0ec; end: 10863c0fb;  */

void FUN_10863c0ec(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c494();
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x48;
    func_0x00010863a120();
  }
  return;
}



/* Entry: 10863c0fc; end: 10863c153;  */

void FUN_10863c0fc(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x48;
    func_0x00010863a120();
  }
  return;
}



/* Entry: 10863c154; end: 10863c15b;  */

void FUN_10863c154(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x48;
    func_0x00010863a120();
  }
  return;
}



/* Entry: 10863c15c; end: 10863c1ef;  */

void FUN_10863c15c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468();
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x48;
    func_0x00010863a120();
  }
  return;
}



/* Entry: 10863c1f0; end: 10863c26b;  */

undefined8 FUN_10863c1f0(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010863c65c();
  FUN_10863c26c();
  func_0x00010863c578();
  FUN_10863bf70();
  FUN_10863c080(lStack_48);
  lStack_48 = lStack_48 + 0x48;
  func_0x00010863c52c();
  FUN_10863bf34();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010863c128(auStack_58);
  return uVar1;
}



/* Entry: 10863c26c; end: 10863c2c3;  */

undefined * FUN_10863c26c(long *param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  if ((undefined *)0x38e38e38e38e38e < param_2) {
    func_0x00010863bf28();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  uVar1 = (param_1[2] - *param_1) / 0x48;
  puVar2 = (undefined *)(uVar1 * 2);
  if (puVar2 < param_2 || (long)puVar2 - (long)param_2 == 0) {
    puVar2 = param_2;
  }
  if (0x1c71c71c71c71c6 < uVar1) {
    puVar2 = (undefined *)0x38e38e38e38e38e;
  }
  return puVar2;
}



/* Entry: 10863c2c4; end: 10863c2f3;  */

void FUN_10863c2c4(int param_1,undefined8 param_2)

{
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863c2f4; end: 10863c6af;  */

void FUN_10863c2f4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10863c6b0; end: 10863c787;  */

void FUN_10863c6b0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126dabe8;
  _objc_alloc(PTR_PTR_1126dabe8);
  lVar3 = param_1;
  FUN_10862ffe4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x388);
  iVar1 = *(int *)(param_1 + 0x390);
  lVar4 = param_1 + 0x398;
  func_0x0001006a7d84(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x3b0;
  func_0x000107c28308(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002d20(puVar2,param_2,lVar3,uVar5,(long)iVar1,lVar4,param_1);
  FUN_10863c7f0();
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10863c788; end: 10863c7ef;  */

void FUN_10863c788(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined2 param_6)

{
  undefined8 uVar1;
  
  FUN_108639eb0();
  *(undefined8 *)(param_1 + 0x388) = param_3;
  *(undefined4 *)(param_1 + 0x390) = param_4;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  uVar1 = *param_5;
  *(undefined8 *)(param_1 + 0x3a0) = param_5[1];
  *(undefined8 *)(param_1 + 0x398) = uVar1;
  *(undefined8 *)(param_1 + 0x3a8) = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  *(undefined2 *)(param_1 + 0x3b0) = param_6;
  return;
}



/* Entry: 10863c7f0; end: 10863c7fb;  */

void FUN_10863c7f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863c7fc; end: 10863c8af;  */

void FUN_10863c7fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  uVar2 = param_2;
  func_0x00010c15f0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2874c(&uStack_50);
  func_0x00010c15f400();
  uVar1 = uStack_40;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  param_1[2] = uVar1;
  param_1[3] = param_2;
  func_0x000107c27914(&uStack_50);
  _objc_release(uVar2);
  FUN_10863c924();
  return;
}



/* Entry: 10863c8b0; end: 10863c923;  */

void FUN_10863c8b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ba518;
  _objc_alloc(PTR_PTR_1126ba518);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044c00(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x18));
  FUN_10863c924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10863c924; end: 10863c92b;  */

void FUN_10863c924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863c92c; end: 10863c97b; -[SCNMessagingSession dispose] */

void FUN_10863c92c(void)

{
  long extraout_x8;
  
  func_0x000107c31b88();
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 10863c97c; end: 10863c9ff; -[SCNMessagingSession disposeAsync:] */

void FUN_10863c97c(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107c31b40();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c31b8c();
  FUN_10862359c();
  func_0x000107c31b50(*(undefined8 *)(*plVar1 + 0x18));
  FUN_10863d4dc(auStack_40);
  func_0x000107c31b64();
  return;
}



/* Entry: 10863ca00; end: 10863ca83; -[SCNMessagingSession addConversationManagerDelegate:] */

void FUN_10863ca00(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107c31b40();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c31b8c();
  func_0x000107c285f0();
  func_0x000107c31b50(*(undefined8 *)(*plVar1 + 0x28));
  func_0x000107c27a64(auStack_40);
  func_0x000107c31b64();
  return;
}



/* Entry: 10863ca84; end: 10863cb07; -[SCNMessagingSession addPublicGroupsFeedManagerDelegate:] */

void FUN_10863ca84(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107c31b40();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c31b8c();
  func_0x000107c28620();
  func_0x000107c31b50(*(undefined8 *)(*plVar1 + 0x30));
  func_0x000107c27a68(auStack_40);
  func_0x000107c31b64();
  return;
}



/* Entry: 10863cb08; end: 10863cb8b; -[SCNMessagingSession addFriendsFeedManagerDelegate:] */

void FUN_10863cb08(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107c31b40();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c31b8c();
  func_0x000107c28620();
  func_0x000107c31b50(*(undefined8 *)(*plVar1 + 0x38));
  func_0x000107c27a68(auStack_40);
  func_0x000107c31b64();
  return;
}



/* Entry: 10863cb8c; end: 10863cc0f; -[SCNMessagingSession addMessageWindowManagerDelegate:] */

void FUN_10863cb8c(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107c31b40();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c31b8c();
  func_0x000107c28690();
  func_0x000107c31b50(*(undefined8 *)(*plVar1 + 0x40));
  func_0x000107c27a6c(auStack_40);
  func_0x000107c31b64();
  return;
}



/* Entry: 10863cc10; end: 10863cc93; -[SCNMessagingSession addNotificationCenterManagerDelegate:] */

void FUN_10863cc10(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107c31b40();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c31b8c();
  FUN_1086503d0();
  func_0x000107c31b50(*(undefined8 *)(*plVar1 + 0x48));
  func_0x000104bf8920(auStack_40);
  func_0x000107c31b64();
  return;
}



/* Entry: 10863cc94; end: 10863cd17; -[SCNMessagingSession addActiveConversationDelegate:] */

void FUN_10863cc94(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107c31b40();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c31b8c();
  FUN_108618fdc();
  func_0x000107c31b50(*(undefined8 *)(*plVar1 + 0x50));
  func_0x000107c27a70(auStack_40);
  func_0x000107c31b64();
  return;
}



/* Entry: 10863cd18; end: 10863cd93; -[SCNMessagingSession getStorySendManager] */

void FUN_10863cd18(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c31b88();
  func_0x000107c31b7c();
  FUN_10863fb9c(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31b68();
  func_0x000107c28710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863cd94; end: 10863ce0b; -[SCNMessagingSession getCommunityGroupsFeedManager] */

void FUN_10863cd94(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c31b88();
  func_0x000107c31b7c();
  func_0x000107c28604(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31b58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863ce0c; end: 10863ce8b; -[SCNMessagingSession getFeedManagerByType:] */

void FUN_10863ce0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  undefined1 auStack_30 [16];
  
  func_0x000107c31b88(param_1,param_3);
  (**(code **)(extraout_x8 + 0x78))(auStack_30);
  func_0x000107c28604(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31b58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863ce8c; end: 10863cf07; -[SCNMessagingSession getSnapManager] */

void FUN_10863ce8c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c31b88();
  func_0x000107c31b7c();
  FUN_10863ded8(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31b68();
  func_0x000107c27a7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863cf08; end: 10863cf8b; -[SCNMessagingSession getNetworkResourceStatus:] */

void FUN_10863cf08(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107c31b40();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c31b8c();
  FUN_108633ad0();
  func_0x000107c31b50(*(undefined8 *)(*plVar1 + 0x88));
  func_0x00010863d500(auStack_40);
  func_0x000107c31b64();
  return;
}



/* Entry: 10863cf8c; end: 10863cfdf; -[SCNMessagingSession setDebugMode:] */

void FUN_10863cf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x000107c31b88(param_1,param_3);
  (**(code **)(extraout_x8 + 0xa0))();
  return;
}



/* Entry: 10863cfe0; end: 10863d05b; -[SCNMessagingSession getTaskSendManager] */

void FUN_10863cfe0(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c31b88();
  func_0x000107c31b7c();
  FUN_108640e10(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31b68();
  func_0x000107c28714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863d05c; end: 10863d0d7; -[SCNMessagingSession getGroupsManager] */

void FUN_10863d05c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c31b88();
  func_0x000107c31b7c();
  FUN_10862c8f0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31b68();
  func_0x000104be51f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863d0d8; end: 10863d153; -[SCNMessagingSession getRecipientProvider] */

void FUN_10863d0d8(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c31b88();
  func_0x000107c31b7c();
  FUN_108637950(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31b68();
  FUN_108637b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863d154; end: 10863d1cf; -[SCNMessagingSession getConversationAdsManager] */

void FUN_10863d154(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c31b88();
  func_0x000107c31b7c();
  FUN_10861c740(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31b68();
  func_0x000107c285e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863d1d0; end: 10863d24b; -[SCNMessagingSession getMassSnapSendManager] */

void FUN_10863d1d0(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c31b88();
  func_0x000107c31b7c();
  FUN_108630ae8(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31b68();
  func_0x000107c28658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863d24c; end: 10863d2c7; -[SCNMessagingSession getMessageWindowManager] */

void FUN_10863d24c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c31b88();
  func_0x000107c31b7c();
  FUN_108632eb4(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31b68();
  func_0x000107c27a78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863d2c8; end: 10863d343; -[SCNMessagingSession getNotificationCenterManager] */

void FUN_10863d2c8(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c31b88();
  func_0x000107c31b7c();
  FUN_10864f424(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31b68();
  func_0x000104be5d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863d344; end: 10863d397; -[SCNMessagingSession .cxx_destruct] */

void FUN_10863d344(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f080;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27990((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10863d398; end: 10863d3ff;  */

undefined8 FUN_10863d398(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010863d3c4(&uStack_28);
  return param_1;
}



/* Entry: 10863d400; end: 10863d407;  */

void FUN_10863d400(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x00010863d440();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10863d408; end: 10863d467;  */

void FUN_10863d408(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    func_0x00010863d440();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10863d468; end: 10863d4db;  */

void FUN_10863d468(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(param_2 + 0x40);
  lVar2 = *(long *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 10863d4dc; end: 10863d523;  */

void FUN_10863d4dc(long param_1)

{
  func_0x000107c31b78();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10863d524; end: 10863d5a7;  */

void FUN_10863d524(void)

{
  return;
}



/* Entry: 10863d5a8; end: 10863d5bb;  */

void FUN_10863d5a8(void)

{
  FUN_10863d728();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10863d5bc; end: 10863d5c7;  */

long FUN_10863d5bc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5f118;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010863d744();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10863d5c8; end: 10863d607;  */

void FUN_10863d5c8(void)

{
  func_0x00010863d738();
  return;
}



/* Entry: 10863d608; end: 10863d697;  */

void FUN_10863d608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10862308c(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108623290(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e34e0(uVar2);
  func_0x00010863d744();
  func_0x000107c31ba4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10863d698; end: 10863d727;  */

long FUN_10863d698(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5f118;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010863d744();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10863d728; end: 10863d777;  */

void FUN_10863d728(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5f158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10863d778; end: 10863d7a7;  */

void FUN_10863d778(void)

{
  _objc_alloc(PTR_PTR_1126be950);
  func_0x00010c04dde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863d7a8; end: 10863d85f;  */

void FUN_10863d7a8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5f250;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10863d860);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10863dba4(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10863d860; end: 10863d95b;  */

void FUN_10863d860(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5f290;
  puVar4[3] = &PTR_DAT_1107e9210;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  FUN_10863dbd0();
  puVar4[3] = &PTR_FUN_110a5f2e0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10863dba4(&uStack_50);
  return;
}



/* Entry: 10863d95c; end: 10863d95f;  */

void FUN_10863d95c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5f290;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10863d960; end: 10863d973;  */

void FUN_10863d960(void)

{
  FUN_10863db94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10863d974; end: 10863d97f;  */

long FUN_10863d974(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5f250;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10863d980; end: 10863d9bf;  */

void FUN_10863d980(void)

{
  func_0x00010863dbd8();
  return;
}



/* Entry: 10863d9c0; end: 10863dabf;  */

void FUN_10863d9c0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2[1];
  for (lVar5 = *param_2; lVar5 != lVar1; lVar5 = lVar5 + 4) {
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    FUN_10863dbd0();
  }
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  func_0x00010c0e6c80(uVar4);
  FUN_10863dbd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 10863dac0; end: 10863daff;  */

void FUN_10863dac0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10863db00; end: 10863db93;  */

long FUN_10863db00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5f250;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10863db94; end: 10863dba3;  */

void FUN_10863db94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5f290;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10863dba4; end: 10863dbcf;  */

long FUN_10863dba4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10863dbd0; end: 10863dbe3;  */

void FUN_10863dbd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863dbe4; end: 10863dc5b; -[SCNMessagingSnapManager initWithCpp:] */

undefined1 * FUN_10863dbe4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd2d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010863e0f8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c27a7c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10863dc5c; end: 10863dd0b; -[SCNMessagingSnapManager onSnapInteraction:conversationId:messageId:callback:] */

void FUN_10863dc5c(void)

{
  long unaff_x23;
  long *plVar1;
  undefined1 auStack_68 [40];
  
  func_0x00010863e0c8();
  func_0x00010863e148();
  plVar1 = *(long **)(unaff_x23 + 0x18);
  func_0x00010863e088();
  FUN_10863d7a8(auStack_68);
  func_0x00010863e108(*(undefined8 *)(*plVar1 + 0x10));
  func_0x000104be5d60(auStack_68);
  func_0x00010863e0a4();
  func_0x00010863e0ac();
  func_0x00010863e0c0();
  return;
}



/* Entry: 10863dd0c; end: 10863dda7; -[SCNMessagingSnapManager onSnapDownloadStatusChanged:conversationId:messageId:callback:] */

void FUN_10863dd0c(void)

{
  long unaff_x23;
  long *plVar1;
  
  func_0x00010863e0c8();
  func_0x00010863e148();
  plVar1 = *(long **)(unaff_x23 + 0x18);
  func_0x00010863e088();
  func_0x00010863e0e4();
  func_0x00010863e108(*(undefined8 *)(*plVar1 + 0x18));
  func_0x00010863e0f0();
  func_0x00010863e0a4();
  func_0x00010863e0ac();
  func_0x00010863e0c0();
  return;
}



/* Entry: 10863dda8; end: 10863de3f; -[SCNMessagingSnapManager onSnapReplayStateRequested:callback:] */

void FUN_10863dda8(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x00010863e134();
  func_0x00010863e148();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010863e088();
  func_0x00010863e0e4();
  func_0x00010863e170(*(undefined8 *)(*plVar1 + 0x20));
  func_0x00010863e0f0();
  func_0x00010863e0a4();
  func_0x00010863e0ac();
  func_0x00010863e0c0();
  return;
}



/* Entry: 10863de40; end: 10863ded7; -[SCNMessagingSnapManager onSnapSaveFromFeedRequested:callback:] */

void FUN_10863de40(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x00010863e134();
  func_0x00010863e148();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010863e088();
  func_0x00010863e0e4();
  func_0x00010863e170(*(undefined8 *)(*plVar1 + 0x28));
  func_0x00010863e0f0();
  func_0x00010863e0a4();
  func_0x00010863e0ac();
  func_0x00010863e0c0();
  return;
}



/* Entry: 10863ded8; end: 10863df03;  */

void FUN_10863ded8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10863df9c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863df04; end: 10863df57; -[SCNMessagingSnapManager .cxx_destruct] */

void FUN_10863df04(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f300;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27a7c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10863df58; end: 10863df9b; -[SCNMessagingSnapManager .cxx_construct] */

undefined8 * FUN_10863df58(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010863e0f8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10863df9c; end: 10863e013;  */

void FUN_10863df9c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5f300;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010863e0f8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10863e014);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010863e180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863e014; end: 10863e087;  */

void FUN_10863e014(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dac00;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010863e0f8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c27a7c(&uStack_30);
  return;
}



/* Entry: 10863e088; end: 10863e197;  */

void FUN_10863e088(void)

{
  undefined8 unaff_x19;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c44fc8();
  func_0x000107c61180();
  func_0x00010029a6ec(&uStack_40);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  func_0x000107c61170(unaff_x19);
  return;
}



/* Entry: 10863e198; end: 10863e247;  */

void FUN_10863e198(undefined2 *param_1,undefined8 param_2,ulong param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar2 = param_2;
  func_0x00010c0e8a00();
  uVar1 = (undefined2)uVar2;
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28304();
  uVar2 = param_2;
  func_0x00010c15aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107c28134();
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(ulong *)(param_1 + 8) = param_3 & 0xff;
  _objc_release(uVar2);
  FUN_10863e2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


