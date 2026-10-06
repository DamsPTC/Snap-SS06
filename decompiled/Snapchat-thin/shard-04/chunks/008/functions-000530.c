/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038d4658; end: 1038d46ef;  */

int FUN_1038d4658(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038d46f0; end: 1038d471f;  */

/* WARNING: Possible PIC construction at 0x0001038d470c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038d4710) */

void FUN_1038d46f0(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 1038d4720; end: 1038d47f7;  */

undefined8 * FUN_1038d4720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1038d47f8; end: 1038d484b;  */

undefined8 * FUN_1038d47f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1038d484c; end: 1038d48f3;  */

int FUN_1038d484c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038d48f4; end: 1038d4927;  */

undefined8 * FUN_1038d48f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1038d4928; end: 1038d497b;  */

undefined8 * FUN_1038d4928(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1038d497c; end: 1038d49b7;  */

undefined8 * FUN_1038d497c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1038d49b8; end: 1038d4bc3;  */

int FUN_1038d49b8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038d4bc4; end: 1038d51f7;  */

long FUN_1038d4bc4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038d51f8; end: 1038d52b7;  */

void FUN_1038d51f8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_88 [72];
  
  func_0x000107c6068c(auStack_88,0);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 1) {
      func_0x000107c60690(2);
      func_0x000107c5fb58(auStack_88,param_1,param_2);
      goto joined_r0x0001038d528c;
    }
    uVar1 = 1;
  }
  func_0x000107c60690(uVar1);
joined_r0x0001038d528c:
  if (param_4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_88,param_3,param_4);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d52b8; end: 1038d52c3;  */

void FUN_1038d52b8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar4 = *unaff_x20;
  lVar2 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  lVar3 = unaff_x20[3];
  func_0x000107c6068c(auStack_88,0);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if (lVar2 != 1) {
      func_0x000107c60690(2);
      func_0x000107c5fb58(auStack_88,uVar4,lVar2);
      goto joined_r0x0001038d528c;
    }
    uVar4 = 1;
  }
  func_0x000107c60690(uVar4);
joined_r0x0001038d528c:
  if (lVar3 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_88,uVar1,lVar3);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d52c4; end: 1038d541f;  */

/* WARNING: Possible PIC construction at 0x0001038d5348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038d534c) */

void FUN_1038d52c4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  lVar3 = unaff_x20[3];
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (lVar2 != 1) {
      uVar4 = *unaff_x20;
      func_0x000107c60690(2);
      goto code_r0x000107c5fb58;
    }
    uVar1 = 1;
  }
  func_0x000107c60690(uVar1);
  if (lVar3 == 0) {
    func_0x000107c60694(0);
    return;
  }
  func_0x000107c60694(1);
  lVar2 = lVar3;
code_r0x000107c5fb58:
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar4,lVar2);
  return;
}



/* Entry: 1038d5420; end: 1038d5453;  */

undefined8 FUN_1038d5420(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar7 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  if (uVar2 == 0) {
    if (uVar4 != 0) {
      return 0;
    }
  }
  else if (uVar2 == 1) {
    if (uVar4 != 1) {
      return 0;
    }
  }
  else {
    if (uVar4 < 2) {
      return 0;
    }
    if (((uVar6 != *param_2) || (uVar2 != uVar4)) &&
       (func_0x000107c605b8(uVar6,uVar2,*param_2,uVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar3 == 0) {
    if (uVar5 == 0) {
      return 1;
    }
  }
  else if ((uVar5 != 0) &&
          (((uVar7 == uVar1 && (uVar3 == uVar5)) ||
           (func_0x000107c605b8(uVar7,uVar3,uVar1,uVar5,0), (uVar7 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 1038d5454; end: 1038d549b;  */

void FUN_1038d5454(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d549c; end: 1038d54a3;  */

void FUN_1038d549c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 1038d54a4; end: 1038d54e7;  */

void FUN_1038d54a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d54e8; end: 1038d5517;  */

long FUN_1038d54e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 1038d5518; end: 1038d567f;  */

void FUN_1038d5518(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar2 = *unaff_x20;
  lVar1 = unaff_x20[1];
  func_0x000107c6068c(auStack_78,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (lVar1 != 1) {
      func_0x000107c60690(2);
      func_0x000107c5fb58(auStack_78,uVar2,lVar1);
      goto LAB_1038d5578;
    }
    uVar2 = 1;
  }
  func_0x000107c60690(uVar2);
LAB_1038d5578:
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d5680; end: 1038d56df;  */

long FUN_1038d5680(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_2[1];
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      return 0;
    }
  }
  else if (uVar2 == 1) {
    if (uVar3 != 1) {
      return 0;
    }
  }
  else {
    if (uVar3 < 2) {
      return 0;
    }
    lVar1 = *param_1;
    if (lVar1 != *param_2 || uVar2 != uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return lVar1;
    }
  }
  return 1;
}



/* Entry: 1038d56e0; end: 1038d578b;  */

void FUN_1038d56e0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d578c; end: 1038d579f;  */

bool FUN_1038d578c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038d57a0; end: 1038d586f;  */

undefined8
FUN_1038d57a0(ulong param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,ulong param_6,
             ulong param_7,long param_8)

{
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else if (param_2 == 1) {
    if (param_6 != 1) {
      return 0;
    }
  }
  else {
    if (param_6 < 2) {
      return 0;
    }
    if (((param_1 != param_5) || (param_2 != param_6)) &&
       (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_4 == 0) {
    if (param_8 == 0) {
      return 1;
    }
  }
  else if ((param_8 != 0) &&
          (((param_3 == param_7 && (param_4 == param_8)) ||
           (func_0x000107c605b8(param_3,param_4,param_7,param_8,0), (param_3 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 1038d5870; end: 1038d5873;  */

void FUN_1038d5870(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e940;
  func_0x000107c61520(&UNK_10dc1e940,&UNK_1106a6a78);
  puRam0000000112fac5c0 = puVar1;
  return;
}



/* Entry: 1038d5874; end: 1038d58b3;  */

void FUN_1038d5874(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e940;
  func_0x000107c61520(&UNK_10dc1e940,&UNK_1106a6a78);
  puRam0000000112fac5c0 = puVar1;
  return;
}



/* Entry: 1038d58b4; end: 1038d58b7;  */

void FUN_1038d58b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e9a8;
  func_0x000107c61520(&UNK_10dc1e9a8,&UNK_1106a6b30);
  puRam0000000112fac5c8 = puVar1;
  return;
}



/* Entry: 1038d58b8; end: 1038d58f7;  */

void FUN_1038d58b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e9a8;
  func_0x000107c61520(&UNK_10dc1e9a8,&UNK_1106a6b30);
  puRam0000000112fac5c8 = puVar1;
  return;
}



/* Entry: 1038d58f8; end: 1038d58fb;  */

void FUN_1038d58f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ea10;
  func_0x000107c61520(&UNK_10dc1ea10,&UNK_1106a6b50);
  puRam0000000112fac5d0 = puVar1;
  return;
}



/* Entry: 1038d58fc; end: 1038d593b;  */

void FUN_1038d58fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ea10;
  func_0x000107c61520(&UNK_10dc1ea10,&UNK_1106a6b50);
  puRam0000000112fac5d0 = puVar1;
  return;
}



/* Entry: 1038d593c; end: 1038d593f;  */

void FUN_1038d593c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ea78;
  func_0x000107c61520(&UNK_10dc1ea78,&UNK_1106a6bc8);
  puRam0000000112fac5d8 = puVar1;
  return;
}



/* Entry: 1038d5940; end: 1038d597f;  */

void FUN_1038d5940(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ea78;
  func_0x000107c61520(&UNK_10dc1ea78,&UNK_1106a6bc8);
  puRam0000000112fac5d8 = puVar1;
  return;
}



/* Entry: 1038d5980; end: 1038d5983;  */

void FUN_1038d5980(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1eae0;
  func_0x000107c61520(&UNK_10dc1eae0,&UNK_1106a6b10);
  puRam0000000112fac5e0 = puVar1;
  return;
}



/* Entry: 1038d5984; end: 1038d59c3;  */

void FUN_1038d5984(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1eae0;
  func_0x000107c61520(&UNK_10dc1eae0,&UNK_1106a6b10);
  puRam0000000112fac5e0 = puVar1;
  return;
}



/* Entry: 1038d59c4; end: 1038d59c7;  */

void FUN_1038d59c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1eb48;
  func_0x000107c61520(&UNK_10dc1eb48,&UNK_1106a6c60);
  puRam0000000112fac5e8 = puVar1;
  return;
}



/* Entry: 1038d59c8; end: 1038d5a07;  */

void FUN_1038d59c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac5e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1eb48;
  func_0x000107c61520(&UNK_10dc1eb48,&UNK_1106a6c60);
  puRam0000000112fac5e8 = puVar1;
  return;
}



/* Entry: 1038d5a08; end: 1038d5ab7;  */

long FUN_1038d5a08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038d5ab8; end: 1038d5b6b;  */

undefined8 * FUN_1038d5ab8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  if (uVar2 < 2) {
    if (1 < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      func_0x000107c61434();
      goto LAB_1038d5b38;
    }
  }
  else {
    if (1 < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      func_0x000107c61434();
      func_0x000107c6142c(uVar2);
      goto LAB_1038d5b38;
    }
    FUN_1038d5b6c(param_1);
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
LAB_1038d5b38:
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1038d5b6c; end: 1038d5bff;  */

long FUN_1038d5b6c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1038d5c00; end: 1038d5cd7;  */

int FUN_1038d5c00(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1038d5cd8; end: 1038d5e3b;  */

undefined8 * FUN_1038d5cd8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 1038d5e3c; end: 1038d5f5f;  */

int FUN_1038d5e3c(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 1038d5f60; end: 1038d5fcf;  */

undefined8 * FUN_1038d5f60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1038d5fd0; end: 1038d61e7;  */

int FUN_1038d5fd0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038d61e8; end: 1038d623f;  */

uint FUN_1038d61e8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_80 = param_1[6];
  uStack_78 = (undefined1)param_1[7];
  uStack_6f = *(undefined8 *)((long)param_1 + 0x41);
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_30 = param_2[6];
  uStack_28 = (undefined1)param_2[7];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x41);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1038d6240(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1038d6240; end: 1038d638f;  */

undefined8 FUN_1038d6240(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
  {
    if ((char)param_1[3] == '\x01') {
      if ((char)param_2[3] != '\x01') {
        return 0;
      }
    }
    else if ((char)param_2[3] == '\x01' || param_1[2] != param_2[2]) {
      return 0;
    }
    if ((char)param_1[5] == '\x01') {
      if ((char)param_2[5] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[5] == '\x01') {
        return 0;
      }
      if (param_1[4] != param_2[4]) {
        return 0;
      }
    }
    if ((char)param_1[7] == '\x01') {
      if ((char)param_2[7] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[7] == '\x01') {
        return 0;
      }
      if (param_1[6] != param_2[6]) {
        return 0;
      }
    }
    if ((char)param_1[9] == '\x01') {
      if ((char)param_2[9] == '\x01') {
        return 1;
      }
    }
    else if (((char)param_2[9] != '\x01') && (param_1[8] == param_2[8])) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1038d6390; end: 1038d6397;  */

void FUN_1038d6390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1038d6398; end: 1038d6403;  */

undefined8 * FUN_1038d6398(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1038d6404; end: 1038d648f;  */

undefined8 * FUN_1038d6404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 1038d6490; end: 1038d6503;  */

undefined8 * FUN_1038d6490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = param_2[8];
  return param_1;
}



/* Entry: 1038d6504; end: 1038d65af;  */

int FUN_1038d6504(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038d65b0; end: 1038d661b;  */

void FUN_1038d65b0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112fac620);
  func_0x000107c5edd0(uVar1,0xd000000000000023,0x800000010f174950);
  return;
}



/* Entry: 1038d661c; end: 1038d6623;  */

bool FUN_1038d661c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&puStack_80 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000112fac618 != -1) {
    func_0x000107c61568(0x112fac618,FUN_1038d65b0);
  }
  func_0x000100028790(lVar1,0x112fac620);
  FUN_1038d6938();
  lVar1 = lVar11;
  (**(code **)(lVar12 + 0x30))(lVar11,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000293e4(lVar11);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar10,lVar11,lVar2);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar7 = 0x112d377a8;
    func_0x0001038d6980(0x112d377a8,&UNK_10d901780);
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    uStack_60 = 0x1038d6620;
    uStack_58 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100ab47f8;
    puStack_68 = &UNK_1106a6dc8;
    ppuVar9 = &puStack_80;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c4de70(puVar3);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar12 + 8))(lVar10,lVar2);
  }
  return (int)lVar1 != 1;
}



/* Entry: 1038d6624; end: 1038d663b; +[SCMemoriesFeaturedStoryInnovationProgram openOptInForm] */

uint FUN_1038d6624(uint param_1)

{
  FUN_1038d66b0();
  return param_1 & 1;
}



/* Entry: 1038d663c; end: 1038d6677; -[SCMemoriesFeaturedStoryInnovationProgram init] */

void FUN_1038d663c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038d6678; end: 1038d66ab;  */

void FUN_1038d6678(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038d66ac; end: 1038d66af; -[SCMemoriesFeaturedStoryInnovationProgram .cxx_destruct] */

void FUN_1038d66ac(void)

{
  return;
}



/* Entry: 1038d66b0; end: 1038d68fb;  */

bool FUN_1038d66b0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&puStack_80 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000112fac618 != -1) {
    func_0x000107c61568(0x112fac618,FUN_1038d65b0);
  }
  func_0x000100028790(lVar1,0x112fac620);
  FUN_1038d6938();
  lVar1 = lVar11;
  (**(code **)(lVar12 + 0x30))(lVar11,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000293e4(lVar11);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar10,lVar11,lVar2);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar7 = 0x112d377a8;
    func_0x0001038d6980(0x112d377a8,&UNK_10d901780);
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    uStack_60 = 0x1038d6620;
    uStack_58 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100ab47f8;
    puStack_68 = &UNK_1106a6dc8;
    ppuVar9 = &puStack_80;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c4de70(puVar3);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar12 + 8))(lVar10,lVar2);
  }
  return (int)lVar1 != 1;
}



/* Entry: 1038d68fc; end: 1038d691b;  */

void FUN_1038d68fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128fd798);
  return;
}



/* Entry: 1038d691c; end: 1038d6937;  */

void FUN_1038d691c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1038d6938; end: 1038d6b2f;  */

undefined8 FUN_1038d6938(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1038d6b30; end: 1038d6ba7;  */

void FUN_1038d6b30(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1038d6ba8; end: 1038d6bef;  */

void FUN_1038d6ba8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x4354414d5f444142;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x54414d5f444f4f47;
  }
  uVar2 = 0xe900000000000048;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xea00000000004843;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1038d6bf0; end: 1038d6e57;  */

void FUN_1038d6bf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x48544f42;
  if (bVar4 != 2) {
    uVar1 = 0x494c524544524f42;
  }
  uVar3 = 0xe400000000000000;
  if (bVar4 != 2) {
    uVar3 = 0xea0000000000454e;
  }
  uVar2 = 0x800000010f1749a0;
  uVar5 = 0xd000000000000011;
  if (bVar4 != 0) {
    uVar2 = 0xee00474e4f52575f;
    uVar5 = 0x53495f454c544954;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar1 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d6e58; end: 1038d6ee3;  */

void FUN_1038d6e58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0x48544f42;
  if (bVar4 != 2) {
    uVar1 = 0x494c524544524f42;
  }
  uVar3 = 0xe400000000000000;
  if (bVar4 != 2) {
    uVar3 = 0xea0000000000454e;
  }
  uVar2 = 0x800000010f1749a0;
  uVar5 = 0xd000000000000011;
  if (bVar4 != 0) {
    uVar2 = 0xee00474e4f52575f;
    uVar5 = 0x53495f454c544954;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1038d6ee4; end: 1038d7003;  */

long FUN_1038d6ee4(void)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *unaff_x20;
  
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  uVar5 = 0xd000000000000014;
  *(undefined8 *)(lVar4 + 0x20) = 0xd00000000000001f;
  *(undefined8 *)(lVar4 + 0x28) = 0x800000010f1749c0;
  pcVar1 = "memories-featured-story-quality";
  if (*unaff_x20 != '\x01') {
    uVar5 = 0xd000000000000015;
    pcVar1 = "fs-quality-title-is-wrong";
  }
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  *(ulong *)(lVar4 + 0x38) = (ulong)pcVar1 | 0x8000000000000000;
  bVar2 = unaff_x20[1];
  if (bVar2 < 2) {
    uVar5 = 0x112fac760;
    if (bVar2 != 0) {
      uVar5 = 0x112fac728;
    }
  }
  else if (bVar2 == 2) {
    uVar5 = 0x112fac6e0;
  }
  else {
    if (bVar2 != 3) goto LAB_1038d6fd4;
    uVar5 = 0x112fac6a8;
  }
  func_0x000107c61538(lVar3,uVar5);
LAB_1038d6fd4:
  func_0x00010109a32c();
  return lVar4;
}



/* Entry: 1038d7004; end: 1038d7313;  */

undefined1  [16] FUN_1038d7004(void)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined8 uVar12;
  char *unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = 0;
  func_0x000107c5eb9c();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar15 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x1b);
  func_0x000107c6142c(uStack_58);
  uStack_60 = 0xd000000000000019;
  uStack_58 = 0x800000010f174ae0;
  uVar12 = 0x6374616d20646162;
  if (*unaff_x20 != '\x01') {
    uVar12 = 0x74616d20646f6f67;
  }
  uVar6 = 0xe900000000000068;
  if (*unaff_x20 != '\x01') {
    uVar6 = 0xea00000000006863;
  }
  func_0x000107c5fb78(uVar12,uVar6);
  func_0x000107c6142c(uVar6);
  bVar2 = unaff_x20[1];
  if (bVar2 != 4) {
    uStack_70 = 0x2820;
    uStack_68 = 0xe200000000000000;
    uVar12 = 0x800000010f174b00;
    uVar6 = 0xd000000000000019;
    if (bVar2 != 2) {
      uVar12 = 0xea0000000000656e;
      uVar6 = 0x696c726564726f62;
    }
    uVar7 = 0x800000010f174b20;
    uVar8 = 0xd000000000000010;
    if (bVar2 != 0) {
      uVar7 = 0xee00676e6f727720;
      uVar8 = 0x736920656c746974;
    }
    if (bVar2 < 2) {
      uVar12 = uVar7;
      uVar6 = uVar8;
    }
    func_0x000107c5fb78(uVar6,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    uVar12 = uStack_68;
    func_0x000107c5fb78(uStack_70,uStack_68);
    func_0x000107c6142c(uVar12);
  }
  uVar13 = *(ulong *)(unaff_x20 + 0x70);
  if (uVar13 != 0) {
    uVar14 = *(ulong *)(unaff_x20 + 0x68);
    uVar1 = uVar14 & 0xffffffffffff;
    if ((uVar13 & 0x2000000000000000) != 0) {
      uVar1 = uVar13 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uStack_70 = 0x203a;
      uStack_68 = 0xe200000000000000;
      func_0x000107c61434(uVar13);
      uVar5 = 0x7fffffffffffffff;
      FUN_1038d7c9c(0x7fffffffffffffff,1,uVar14,uVar13);
      uVar12 = 0x112e07ba0;
      uStack_88 = uVar5;
      func_0x0001000285a8(0x112e07ba0,&UNK_10dc1ee40);
      uVar6 = 0x112eca618;
      FUN_1038d86c8(0x112eca618,0x112e07ba0,&UNK_10dc1ee40,PTR___sSayxGSTsMc_11034dd08);
      uVar7 = uVar6;
      func_0x000101478db0();
      uVar8 = 0x20;
      uVar10 = 0xe100000000000000;
      func_0x000107c5fc20(0x20,0xe100000000000000,uVar12,uVar6,uVar7);
      func_0x000107c6142c(uVar5);
      uStack_88 = uVar8;
      uStack_80 = uVar10;
      func_0x000107c5eb68(puVar15);
      func_0x000100e8b654();
      puVar9 = puVar15;
      puVar11 = PTR___sSSN_11034da80;
      func_0x000107c601f0(puVar15,PTR___sSSN_11034da80,uVar5);
      (**(code **)(lVar16 + 8))(puVar15,lVar4);
      func_0x000107c6142c(uVar10);
      func_0x000107c5fb78(puVar9,puVar11);
      func_0x000107c6142c(puVar11);
      uVar12 = uStack_68;
      func_0x000107c5fb78(uStack_70,uStack_68);
      func_0x000107c6142c(uVar12);
    }
  }
  auVar3._8_8_ = uStack_58;
  auVar3._0_8_ = uStack_60;
  return auVar3;
}



/* Entry: 1038d7314; end: 1038d7c9b;  */

undefined1  [16] FUN_1038d7314(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 uVar10;
  undefined8 uVar11;
  char *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar17 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar14 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(uVar6 + 0x18) = 2;
  *(undefined8 *)(uVar6 + 0x10) = 1;
  uStack_78 = 0x6c6562616c5f7366;
  uStack_70 = 0xea0000000000203a;
  uVar16 = 0x4354414d5f444142;
  if (*unaff_x20 != '\x01') {
    uVar16 = 0x54414d5f444f4f47;
  }
  uVar10 = 0xe900000000000048;
  if (*unaff_x20 != '\x01') {
    uVar10 = 0xea00000000004843;
  }
  func_0x000107c5fb78(uVar16,uVar10);
  func_0x000107c6142c(uVar10);
  *(undefined8 *)(uVar6 + 0x20) = uStack_78;
  *(undefined8 *)(uVar6 + 0x28) = uStack_70;
  bVar1 = unaff_x20[1];
  uVar12 = uVar6;
  if (bVar1 != 4) {
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x12);
    func_0x000107c6142c(uStack_70);
    uStack_78 = 0xd000000000000010;
    uStack_70 = 0x800000010f174ac0;
    uVar10 = 0xee00474e4f52575f;
    uVar11 = 0x53495f454c544954;
    uVar16 = 0x48544f42;
    if (bVar1 != 2) {
      uVar16 = 0x494c524544524f42;
    }
    uVar4 = 0xe400000000000000;
    if (bVar1 != 2) {
      uVar4 = 0xea0000000000454e;
    }
    if (bVar1 == 0) {
      uVar11 = 0xd000000000000011;
      uVar10 = 0x800000010f1749a0;
    }
    if (bVar1 < 2) {
      uVar4 = uVar10;
      uVar16 = uVar11;
    }
    func_0x000107c5fb78(uVar16,uVar4);
    func_0x000107c6142c(uVar4);
    uVar10 = uStack_70;
    uVar16 = uStack_78;
    uVar7 = *(ulong *)(uVar6 + 0x10);
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x0001000d182c(uVar12,uVar7 + 1,1,uVar6);
    }
    *(ulong *)(uVar12 + 0x10) = uVar7 + 1;
    lVar5 = uVar12 + uVar7 * 0x10;
    *(undefined8 *)(lVar5 + 0x20) = uVar16;
    *(undefined8 *)(lVar5 + 0x28) = uVar10;
  }
  uStack_78 = 0x64695f79726f7473;
  uStack_70 = 0xea0000000000203a;
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  uVar10 = uStack_70;
  uVar16 = uStack_78;
  uVar6 = *(ulong *)(uVar12 + 0x10);
  uVar7 = uVar12;
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
    func_0x0001000d182c(uVar7,uVar6 + 1,1,uVar12);
  }
  *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
  lVar5 = uVar7 + uVar6 * 0x10;
  *(undefined8 *)(lVar5 + 0x20) = uVar16;
  *(undefined8 *)(lVar5 + 0x28) = uVar10;
  uVar12 = *(ulong *)(unaff_x20 + 0x20);
  uVar6 = uVar7;
  if (uVar12 != 0) {
    uVar13 = *(ulong *)(unaff_x20 + 0x18);
    uVar15 = uVar13 & 0xffffffffffff;
    if ((uVar12 & 0x2000000000000000) != 0) {
      uVar15 = uVar12 >> 0x38 & 0xf;
    }
    if (uVar15 != 0) {
      uStack_78 = 0x69745f79726f7473;
      uStack_70 = 0xed0000203a656c74;
      uStack_68 = uVar7;
      func_0x000107c61434(uVar12);
      uVar3 = 0x7fffffffffffffff;
      FUN_1038d7c9c(0x7fffffffffffffff,1,uVar13,uVar12);
      uVar16 = 0x112e07ba0;
      uStack_90 = uVar3;
      func_0x0001000285a8(0x112e07ba0,&UNK_10dc1ee40);
      uVar10 = 0x112eca618;
      FUN_1038d86c8(0x112eca618,0x112e07ba0,&UNK_10dc1ee40,PTR___sSayxGSTsMc_11034dd08);
      uVar11 = uVar10;
      func_0x000101478db0();
      uVar4 = 0x20;
      uVar8 = 0xe100000000000000;
      func_0x000107c5fc20(0x20,0xe100000000000000,uVar16,uVar10,uVar11);
      func_0x000107c6142c(uVar3);
      uStack_90 = uVar4;
      uStack_88 = uVar8;
      func_0x000107c5eb68(lVar14);
      func_0x000100e8b654();
      lVar5 = lVar14;
      puVar9 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar14,PTR___sSSN_11034da80,uVar3);
      (**(code **)(lVar17 + 8))(lVar14,lVar2);
      func_0x000107c6142c(uVar8);
      func_0x000107c5fb78(lVar5,puVar9);
      func_0x000107c6142c(puVar9);
      uVar10 = uStack_70;
      uVar16 = uStack_78;
      uVar12 = *(ulong *)(uVar7 + 0x10);
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar12) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x0001000d182c(uVar6,uVar12 + 1,1,uVar7);
      }
      *(ulong *)(uVar6 + 0x10) = uVar12 + 1;
      lVar5 = uVar6 + uVar12 * 0x10;
      *(undefined8 *)(lVar5 + 0x20) = uVar16;
      *(undefined8 *)(lVar5 + 0x28) = uVar10;
      uVar12 = *(ulong *)(unaff_x20 + 0x30);
      goto joined_r0x0001038d76c8;
    }
  }
  uVar12 = *(ulong *)(unaff_x20 + 0x30);
joined_r0x0001038d76c8:
  uStack_68 = uVar6;
  if (uVar12 != 0) {
    uVar15 = *(ulong *)(unaff_x20 + 0x28);
    uVar7 = uVar15 & 0xffffffffffff;
    if ((uVar12 & 0x2000000000000000) != 0) {
      uVar7 = uVar12 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      uStack_78 = 0;
      uStack_70 = 0xe000000000000000;
      func_0x000107c602fc(0x12);
      func_0x000107c6142c(uStack_70);
      uStack_78 = 0xd000000000000010;
      uStack_70 = 0x800000010f174aa0;
      func_0x000107c61434(uVar12);
      uVar3 = 0x7fffffffffffffff;
      FUN_1038d7c9c(0x7fffffffffffffff,1,uVar15,uVar12);
      uVar16 = 0x112e07ba0;
      uStack_90 = uVar3;
      func_0x0001000285a8(0x112e07ba0,&UNK_10dc1ee40);
      uVar10 = 0x112eca618;
      FUN_1038d86c8(0x112eca618,0x112e07ba0,&UNK_10dc1ee40,PTR___sSayxGSTsMc_11034dd08);
      uVar11 = uVar10;
      func_0x000101478db0();
      uVar4 = 0x20;
      uVar8 = 0xe100000000000000;
      func_0x000107c5fc20(0x20,0xe100000000000000,uVar16,uVar10,uVar11);
      func_0x000107c6142c(uVar3);
      uStack_90 = uVar4;
      uStack_88 = uVar8;
      func_0x000107c5eb68(lVar14);
      func_0x000100e8b654();
      lVar5 = lVar14;
      puVar9 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar14,PTR___sSSN_11034da80,uVar3);
      (**(code **)(lVar17 + 8))(lVar14,lVar2);
      func_0x000107c6142c(uVar8);
      func_0x000107c5fb78(lVar5,puVar9);
      func_0x000107c6142c(puVar9);
      uVar10 = uStack_70;
      uVar16 = uStack_78;
      uVar12 = *(ulong *)(uVar6 + 0x10);
      uVar7 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar12) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        func_0x0001000d182c(uVar7,uVar12 + 1,1,uVar6);
      }
      *(ulong *)(uVar7 + 0x10) = uVar12 + 1;
      lVar5 = uVar7 + uVar12 * 0x10;
      *(undefined8 *)(lVar5 + 0x20) = uVar16;
      *(undefined8 *)(lVar5 + 0x28) = uVar10;
      uStack_68 = uVar7;
    }
  }
  uVar6 = uStack_68;
  if (unaff_x20[0x40] != '\x01') {
    uStack_90 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_78 = 0x79745f79726f7473;
    uStack_70 = 0xec000000203a6570;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar9);
    uVar10 = uStack_70;
    uVar16 = uStack_78;
    uVar12 = *(ulong *)(uVar6 + 0x10);
    uVar7 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar12) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x0001000d182c(uVar7,uVar12 + 1,1,uVar6);
    }
    *(ulong *)(uVar7 + 0x10) = uVar12 + 1;
    lVar5 = uVar7 + uVar12 * 0x10;
    *(undefined8 *)(lVar5 + 0x20) = uVar16;
    *(undefined8 *)(lVar5 + 0x28) = uVar10;
    uStack_68 = uVar7;
  }
  uVar6 = uStack_68;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    uStack_78 = 0x3a64695f70616e73;
    uStack_70 = 0xe900000000000020;
    func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 0x48));
    uVar10 = uStack_70;
    uVar16 = uStack_78;
    uVar12 = *(ulong *)(uVar6 + 0x10);
    uVar7 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar12) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x0001000d182c(uVar7,uVar12 + 1,1,uVar6);
    }
    *(ulong *)(uVar7 + 0x10) = uVar12 + 1;
    lVar5 = uVar7 + uVar12 * 0x10;
    *(undefined8 *)(lVar5 + 0x20) = uVar16;
    *(undefined8 *)(lVar5 + 0x28) = uVar10;
    uStack_68 = uVar7;
  }
  uVar6 = uStack_68;
  if (unaff_x20[0x60] != '\x01') {
    uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x17);
    func_0x000107c6142c(uStack_70);
    uStack_78 = 0xd000000000000015;
    uStack_70 = 0x800000010f174a80;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_90 = uVar16;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar9);
    uVar10 = uStack_70;
    uVar16 = uStack_78;
    uVar12 = *(ulong *)(uVar6 + 0x10);
    uVar7 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar12) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x0001000d182c(uVar7,uVar12 + 1,1,uVar6);
    }
    *(ulong *)(uVar7 + 0x10) = uVar12 + 1;
    lVar5 = uVar7 + uVar12 * 0x10;
    *(undefined8 *)(lVar5 + 0x20) = uVar16;
    *(undefined8 *)(lVar5 + 0x28) = uVar10;
    uStack_68 = uVar7;
  }
  uVar6 = uStack_68;
  uVar12 = *(ulong *)(unaff_x20 + 0x70);
  if (uVar12 != 0) {
    uVar15 = *(ulong *)(unaff_x20 + 0x68);
    uVar7 = uVar15 & 0xffffffffffff;
    if ((uVar12 & 0x2000000000000000) != 0) {
      uVar7 = uVar12 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      uStack_78 = 0x746f6e5f72657375;
      uStack_70 = 0xeb00000000203a65;
      func_0x000107c61434(uVar12);
      uVar3 = 0x7fffffffffffffff;
      FUN_1038d7c9c(0x7fffffffffffffff,1,uVar15,uVar12);
      uVar16 = 0x112e07ba0;
      uStack_90 = uVar3;
      func_0x0001000285a8(0x112e07ba0,&UNK_10dc1ee40);
      uVar10 = 0x112eca618;
      FUN_1038d86c8(0x112eca618,0x112e07ba0,&UNK_10dc1ee40,PTR___sSayxGSTsMc_11034dd08);
      uVar11 = uVar10;
      func_0x000101478db0();
      uVar4 = 0x20;
      uVar8 = 0xe100000000000000;
      func_0x000107c5fc20(0x20,0xe100000000000000,uVar16,uVar10,uVar11);
      func_0x000107c6142c(uVar3);
      uStack_90 = uVar4;
      uStack_88 = uVar8;
      func_0x000107c5eb68(lVar14);
      func_0x000100e8b654();
      lVar5 = lVar14;
      puVar9 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar14,PTR___sSSN_11034da80,uVar3);
      (**(code **)(lVar17 + 8))(lVar14,lVar2);
      func_0x000107c6142c(uVar8);
      func_0x000107c5fb78(lVar5,puVar9);
      func_0x000107c6142c(puVar9);
      uVar10 = uStack_70;
      uVar16 = uStack_78;
      uVar12 = *(ulong *)(uVar6 + 0x10);
      uVar7 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar12) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        func_0x0001000d182c(uVar7,uVar12 + 1,1,uVar6);
      }
      *(ulong *)(uVar7 + 0x10) = uVar12 + 1;
      lVar2 = uVar7 + uVar12 * 0x10;
      *(undefined8 *)(lVar2 + 0x20) = uVar16;
      *(undefined8 *)(lVar2 + 0x28) = uVar10;
      uStack_68 = uVar7;
    }
  }
  uVar6 = uStack_68;
  uVar16 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar10 = 0x112d38278;
  FUN_1038d86c8(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
  uVar11 = 10;
  uVar4 = 0xe100000000000000;
  func_0x000107c5fa80(10,0xe100000000000000,uVar16,uVar10);
  func_0x000107c6142c(uVar6);
  auVar18._8_8_ = uVar4;
  auVar18._0_8_ = uVar11;
  return auVar18;
}



/* Entry: 1038d7c9c; end: 1038d8077;  */

undefined * FUN_1038d7c9c(long param_1,uint param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  undefined *puStack_68;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038d800c);
    (*pcVar3)();
  }
  uVar11 = param_4 >> 0x38 & 0xf;
  uVar10 = (uint)(param_3 >> 0x20);
  if (param_1 != 0) {
    uVar12 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar12 = uVar11;
    }
    if (uVar12 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if ((param_4 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      uVar11 = uVar11 | uVar12 << 0x10;
      uVar12 = uVar12 * 4;
      uVar14 = 0xf;
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1038d7d24:
      uVar13 = uVar14 >> 0xe;
      uVar5 = uVar14;
      if (uVar13 != uVar12) {
        do {
          uVar4 = uVar14;
          uVar9 = param_3;
          func_0x000107c5fbcc(uVar14,param_3,param_4);
          func_0x000100ed9fa0();
          if ((uVar4 & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1038d8078);
            (*pcVar3)();
          }
          func_0x000107c6142c(uVar9);
          iVar15 = (int)uVar4;
          if (((iVar15 - 10U < 4) || (iVar15 - 0x2028U < 2)) || (iVar15 == 0x85)) {
            if ((uVar5 >> 0xe != uVar13) || ((param_2 & 1) == 0)) goto LAB_1038d7de8;
            func_0x000107c5fb60(uVar14,param_3,param_4);
            uVar5 = uVar14;
          }
          else {
            func_0x000107c5fb60(uVar14,param_3,param_4);
          }
          uVar13 = uVar14 >> 0xe;
          if (uVar13 == uVar12) break;
        } while( true );
      }
      goto LAB_1038d7ee0;
    }
  }
  uVar12 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar12 = uVar11;
  }
  if ((uVar12 == 0) && ((param_2 & 1) != 0)) {
    func_0x000107c6142c(param_4);
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if ((param_4 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  uVar11 = uVar11 | uVar12 << 0x10;
  uVar6 = 0xf;
  uVar14 = param_4;
  func_0x000107c5fbd8();
  puVar8 = (undefined *)0x0;
  func_0x0001014788a4(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar12 = *(ulong *)(puVar8 + 0x10);
  puStack_68 = puVar8;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar12) {
    puStack_68 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    func_0x0001014788a4(puStack_68,uVar12 + 1,1,puVar8);
  }
  *(ulong *)(puStack_68 + 0x10) = uVar12 + 1;
  *(undefined8 *)(puStack_68 + uVar12 * 0x20 + 0x20) = uVar6;
  *(ulong *)(puStack_68 + uVar12 * 0x20 + 0x28) = uVar11;
  *(ulong *)(puStack_68 + uVar12 * 0x20 + 0x30) = param_3;
  *(ulong *)(puStack_68 + uVar12 * 0x20 + 0x38) = uVar14;
LAB_1038d7fd8:
  func_0x000107c6142c(param_4);
  return puStack_68;
LAB_1038d7de8:
  if (uVar13 < uVar5 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038d8074);
    (*pcVar3)();
  }
  uVar13 = uVar14;
  uVar4 = param_3;
  uVar9 = param_4;
  func_0x000107c5fbd8();
  puVar8 = puStack_68;
  func_0x000107c61558();
  if (((ulong)puVar8 & 1) == 0) {
    plVar1 = (long *)(puStack_68 + 0x10);
    puStack_68 = (undefined *)0x0;
    func_0x0001014788a4(0,*plVar1 + 1,1);
  }
  uVar2 = *(ulong *)(puStack_68 + 0x10);
  if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_68 + 0x18));
    func_0x0001014788a4(puVar8,uVar2 + 1,1,puStack_68);
    puStack_68 = puVar8;
  }
  *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
  *(ulong *)(puStack_68 + uVar2 * 0x20 + 0x20) = uVar5;
  *(ulong *)(puStack_68 + uVar2 * 0x20 + 0x28) = uVar13;
  *(ulong *)(puStack_68 + uVar2 * 0x20 + 0x30) = uVar4;
  *(ulong *)(puStack_68 + uVar2 * 0x20 + 0x38) = uVar9;
  func_0x000107c5fb60(uVar14,param_3,param_4);
  uVar5 = uVar14;
  if (*(long *)(puStack_68 + 0x10) == param_1) goto LAB_1038d7ee0;
  goto LAB_1038d7d24;
LAB_1038d7ee0:
  if ((uVar5 >> 0xe != uVar12) || ((param_2 & 1) == 0)) {
    if (uVar5 >> 0xe <= uVar12) {
      uVar12 = param_4;
      func_0x000107c5fbd8();
      func_0x000107c6142c(param_4);
      puVar8 = puStack_68;
      func_0x000107c61558();
      puVar7 = puStack_68;
      if (((ulong)puVar8 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001014788a4(0,*(long *)(puStack_68 + 0x10) + 1,1,puStack_68);
      }
      uVar14 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar14) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001014788a4(puVar8,uVar14 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar14 + 1;
      *(ulong *)(puVar8 + uVar14 * 0x20 + 0x20) = uVar5;
      *(ulong *)(puVar8 + uVar14 * 0x20 + 0x28) = uVar11;
      *(ulong *)(puVar8 + uVar14 * 0x20 + 0x30) = param_3;
      *(ulong *)(puVar8 + uVar14 * 0x20 + 0x38) = uVar12;
      return puVar8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038d8030);
    (*pcVar3)();
  }
  goto LAB_1038d7fd8;
}



/* Entry: 1038d8078; end: 1038d80db;  */

ulong FUN_1038d8078(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 1038d80dc; end: 1038d80df;  */

void FUN_1038d80dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ec98;
  func_0x000107c61520(&UNK_10dc1ec98,&UNK_1106a6e70);
  puRam0000000112fac690 = puVar1;
  return;
}



/* Entry: 1038d80e0; end: 1038d811f;  */

void FUN_1038d80e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ec98;
  func_0x000107c61520(&UNK_10dc1ec98,&UNK_1106a6e70);
  puRam0000000112fac690 = puVar1;
  return;
}



/* Entry: 1038d8120; end: 1038d8123;  */

void FUN_1038d8120(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ed38;
  func_0x000107c61520(&UNK_10dc1ed38,&UNK_1106a6f00);
  puRam0000000112fac698 = puVar1;
  return;
}



/* Entry: 1038d8124; end: 1038d8163;  */

void FUN_1038d8124(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ed38;
  func_0x000107c61520(&UNK_10dc1ed38,&UNK_1106a6f00);
  puRam0000000112fac698 = puVar1;
  return;
}



/* Entry: 1038d8164; end: 1038d840b;  */

int FUN_1038d8164(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1038d81e0;
        goto LAB_1038d81c4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1038d81c4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1038d81e0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1038d840c; end: 1038d8443;  */

/* WARNING: Possible PIC construction at 0x0001038d8420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038d8430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038d8424) */
/* WARNING: Removing unreachable block (ram,0x0001038d8434) */

void FUN_1038d840c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1038d8444; end: 1038d8593;  */

undefined8 * FUN_1038d8444(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1038d8594; end: 1038d8617;  */

undefined8 * FUN_1038d8594(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



/* Entry: 1038d8618; end: 1038d86c7;  */

int FUN_1038d8618(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x59) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038d86c8; end: 1038d874b;  */

void FUN_1038d86c8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1038d874c; end: 1038d87ef;  */

undefined2 * FUN_1038d874c(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 1038d87f0; end: 1038d88eb;  */

undefined1 * FUN_1038d87f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[0x40] = param_2[0x40];
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  param_1[0x60] = param_2[0x60];
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1038d88ec; end: 1038d8987;  */

undefined2 * FUN_1038d88ec(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1038d8988; end: 1038d8a5b;  */

int FUN_1038d8988(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038d8a5c; end: 1038d8a7f;  */

void FUN_1038d8a5c(undefined8 *param_1)

{
  func_0x00010407010c();
  uRam0000000112fac8c0 = *param_1;
  uRam0000000112fac8c8 = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1038d8a80; end: 1038d8abb;  */

void FUN_1038d8a80(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1038d8abc; end: 1038d8aef;  */

void FUN_1038d8abc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1038d8af0; end: 1038d960f;  */

void FUN_1038d8af0(undefined1 param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  
  uVar1 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f174b50);
  uVar6 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f174b70);
  puVar2 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  func_0x000107c61168();
  func_0x000107c3dac0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c3d8c4(puVar2);
  puVar3 = &UNK_1106a70a8;
  func_0x000107c613fc(&UNK_1106a70a8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_1106a70d0;
  func_0x000107c613fc(&UNK_1106a70d0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar2);
  puVar5 = &UNK_1106a70f8;
  func_0x000107c613fc(&UNK_1106a70f8,0x90,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  puVar5[0x18] = param_1;
  puVar5[0x19] = param_2;
  uVar6 = param_3[4];
  uVar11 = param_3[7];
  uVar1 = param_3[6];
  *(undefined8 *)(puVar5 + 0x48) = param_3[5];
  *(undefined8 *)(puVar5 + 0x40) = uVar6;
  *(undefined8 *)(puVar5 + 0x58) = uVar11;
  *(undefined8 *)(puVar5 + 0x50) = uVar1;
  uVar6 = param_3[8];
  *(undefined8 *)(puVar5 + 0x68) = param_3[9];
  *(undefined8 *)(puVar5 + 0x60) = uVar6;
  uVar6 = *(undefined8 *)((long)param_3 + 0x49);
  *(undefined8 *)(puVar5 + 0x71) = *(undefined8 *)((long)param_3 + 0x51);
  *(undefined8 *)(puVar5 + 0x69) = uVar6;
  uVar6 = *param_3;
  uVar11 = param_3[3];
  uVar1 = param_3[2];
  *(undefined8 *)(puVar5 + 0x28) = param_3[1];
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(undefined8 *)(puVar5 + 0x38) = uVar11;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined **)(puVar5 + 0x80) = puVar4;
  *(undefined8 *)(puVar5 + 0x88) = param_4;
  func_0x000107c6157c(puVar3);
  FUN_1038d9ce4(param_3,&puStack_d0);
  func_0x000107c6157c(puVar4);
  func_0x000107c61174();
  uVar6 = 0x646e6553;
  func_0x000107c5fadc(0x646e6553,0xe400000000000000);
  pcStack_b0 = FUN_1038d9ccc;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_100df8ce8;
  puStack_b8 = &UNK_1106a7110;
  ppuVar7 = &puStack_d0;
  puStack_a8 = puVar5;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_a8);
  puVar8 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  func_0x000107c61168(PTR__OBJC_CLASS___UIAlertAction_1126aeb80);
  puVar9 = puVar8;
  func_0x000107c3cffc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar6);
  puVar3 = &UNK_1106a70a8;
  func_0x000107c613fc(&UNK_1106a70a8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,unaff_x20);
  puVar4 = &UNK_1106a7148;
  func_0x000107c613fc(&UNK_1106a7148,0x88,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  puVar4[0x18] = param_1;
  puVar4[0x19] = param_2;
  uVar6 = param_3[4];
  uVar11 = param_3[7];
  uVar1 = param_3[6];
  *(undefined8 *)(puVar4 + 0x48) = param_3[5];
  *(undefined8 *)(puVar4 + 0x40) = uVar6;
  *(undefined8 *)(puVar4 + 0x58) = uVar11;
  *(undefined8 *)(puVar4 + 0x50) = uVar1;
  uVar6 = param_3[8];
  *(undefined8 *)(puVar4 + 0x68) = param_3[9];
  *(undefined8 *)(puVar4 + 0x60) = uVar6;
  uVar6 = *(undefined8 *)((long)param_3 + 0x49);
  *(undefined8 *)(puVar4 + 0x71) = *(undefined8 *)((long)param_3 + 0x51);
  *(undefined8 *)(puVar4 + 0x69) = uVar6;
  uVar6 = *param_3;
  uVar11 = param_3[3];
  uVar1 = param_3[2];
  *(undefined8 *)(puVar4 + 0x28) = param_3[1];
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x38) = uVar11;
  *(undefined8 *)(puVar4 + 0x30) = uVar1;
  *(undefined8 *)(puVar4 + 0x80) = param_4;
  FUN_1038d9ce4(param_3,&puStack_d0);
  func_0x000107c61174();
  func_0x000107c6157c(puVar3);
  uVar6 = 0x70696b53;
  func_0x000107c5fadc(0x70696b53,0xe400000000000000);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_b0 = (code *)0x1038d9d3c;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_100df8ce8;
  puStack_b8 = &UNK_1106a7160;
  ppuVar7 = &puStack_d0;
  puStack_a8 = puVar4;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_a8);
  func_0x000107c3cffc(puVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c3d598(puVar2);
  func_0x000107c3d598(puVar2);
  pcVar10 = "present(_:from:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar3 = &UNK_1106a7198;
  func_0x000107c613fc(&UNK_1106a7198,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_b0 = (code *)0x1038d9d54;
  puStack_d0 = puVar5;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_1000f6b44;
  puStack_b8 = &UNK_1106a71b0;
  ppuVar7 = &puStack_d0;
  puStack_a8 = puVar3;
  func_0x000107c60bc4();
  puVar3 = puStack_a8;
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar10);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c615e8(pcVar10);
  return;
}



/* Entry: 1038d9610; end: 1038d968b;  */

void FUN_1038d9610(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1038d8af0(1,param_3,param_4,param_5);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1038d968c; end: 1038d98d3;  */

void FUN_1038d968c(undefined8 param_1,long param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 *param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined6 uStack_186;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  long lStack_120;
  ulong uStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  func_0x000107c61428(param_2 + 0x10,auStack_f8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61428(param_6 + 0x10,auStack_110,0,0);
  uVar4 = param_6 + 0x10;
  func_0x000107c61618();
  if (uVar4 != 0) {
    uVar10 = uVar4;
    func_0x000107c5c854();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar10 == 0) {
      lVar7 = 0;
      goto LAB_1038d97ec;
    }
    uVar5 = 0;
    FUN_1038da14c();
    uVar4 = uVar10;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar10);
    if (uVar4 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      uVar10 = uVar5;
    }
    else {
      uVar6 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar6 = uVar4;
      }
      func_0x000107c60480();
      uVar10 = uVar5;
    }
    if (uVar6 == 0) {
      func_0x000107c6142c(uVar4);
    }
    else {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038d98d4);
          (*pcVar3)();
        }
        lVar7 = *(long *)(uVar4 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar7 = 0;
        uVar10 = uVar4;
        FUN_1038d9d6c();
      }
      func_0x000107c6142c(uVar4);
      lVar8 = lVar7;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar8 != 0) {
        lVar7 = lVar8;
        func_0x000107c5faec();
        func_0x000107c61170(lVar8);
        goto LAB_1038d97ec;
      }
    }
  }
  lVar7 = 0;
  uVar10 = 0;
LAB_1038d97ec:
  uStack_180 = *param_5;
  uVar2 = param_5[1];
  uStack_148 = *(undefined1 *)(param_5 + 7);
  uStack_128 = *(undefined1 *)(param_5 + 0xb);
  uVar9 = param_5[3];
  uStack_168 = param_5[3];
  uStack_170 = param_5[2];
  uStack_158 = param_5[5];
  uStack_160 = param_5[4];
  uVar1 = param_5[5];
  uStack_150 = param_5[6];
  uStack_130 = param_5[10];
  uStack_138 = param_5[9];
  uStack_140 = param_5[8];
  uStack_80 = CONCAT71(uStack_127,uStack_128);
  uStack_e0 = CONCAT62(uStack_186,CONCAT11(param_4,param_3));
  uStack_a0 = CONCAT71(uStack_147,uStack_148);
  uStack_188 = param_3;
  uStack_187 = param_4;
  uStack_178 = uVar2;
  lStack_120 = lVar7;
  uStack_118 = uVar10;
  uStack_d8 = uStack_180;
  uStack_d0 = uVar2;
  uStack_c8 = uStack_170;
  uStack_c0 = uStack_168;
  uStack_b8 = uStack_160;
  uStack_b0 = uStack_158;
  uStack_a8 = uStack_150;
  uStack_98 = uStack_140;
  uStack_90 = uStack_138;
  uStack_88 = uStack_130;
  lStack_78 = lVar7;
  uStack_70 = uVar10;
  func_0x000107c61434(param_5[9]);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar1);
  FUN_1038d98d4(&uStack_e0,param_7);
  FUN_1038da118(&uStack_188);
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 1038d98d4; end: 1038d9a4f;  */

void FUN_1038d98d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar2 = param_2;
  (**(code **)(unaff_x20 + 0x10))();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_1038d7004();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar2);
    if (lRam0000000112fac8b8 != -1) {
      func_0x000107c61568(0x112fac8b8,FUN_1038d8a5c);
    }
    uVar2 = uRam0000000112fac8c0;
    func_0x000107c5fadc(uRam0000000112fac8c0,uRam0000000112fac8c8);
    uVar6 = 0x800000010f174bc0;
    uVar3 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019);
    uVar4 = uVar3;
    FUN_1038d7314();
    func_0x000107c5fadc();
    func_0x000107c6142c();
    FUN_1038d6ee4();
    uVar5 = uVar6;
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar6);
    func_0x000107c40a50(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    FUN_1038d9f20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1038d9a50; end: 1038d9c87;  */

void FUN_1038d9a50(undefined8 param_1,long param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined1 auStack_d0 [24];
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(param_2 + 0x10,auStack_d0,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uStack_98 = param_5[3];
    uStack_a0 = param_5[2];
    uStack_88 = param_5[5];
    uStack_90 = param_5[4];
    uStack_b0 = *param_5;
    uStack_a8 = param_5[1];
    uStack_80 = param_5[6];
    uStack_78 = *(undefined1 *)(param_5 + 7);
    uStack_60 = param_5[10];
    uStack_58 = *(undefined1 *)(param_5 + 0xb);
    uStack_68 = param_5[9];
    uStack_70 = param_5[8];
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_b8 = param_3;
    uStack_b7 = param_4;
    FUN_1038d98d4(&uStack_b8,param_6);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1038d9c88; end: 1038d9ccb;  */

void FUN_1038d9c88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038d9ccc; end: 1038d9ce3;  */

void FUN_1038d9ccc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined6 uStack_186;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  long lStack_120;
  ulong uStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x19);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined2 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar13 + 0x10,auStack_f8,0,0);
  lVar13 = lVar13 + 0x10;
  func_0x000107c61648();
  if (lVar13 == 0) {
    return;
  }
  func_0x000107c61428(lVar11 + 0x10,auStack_110,0,0);
  uVar8 = lVar11 + 0x10;
  func_0x000107c61618();
  if (uVar8 != 0) {
    uVar15 = uVar8;
    func_0x000107c5c854();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    if (uVar15 == 0) {
      lVar11 = 0;
      goto LAB_1038d97ec;
    }
    uVar9 = 0;
    FUN_1038da14c();
    uVar8 = uVar15;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar15);
    if (uVar8 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      uVar15 = uVar9;
    }
    else {
      uVar10 = uVar8 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar8) {
        uVar10 = uVar8;
      }
      func_0x000107c60480();
      uVar15 = uVar9;
    }
    if (uVar10 == 0) {
      func_0x000107c6142c(uVar8);
    }
    else {
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1038d98d4);
          (*pcVar7)();
        }
        lVar11 = *(long *)(uVar8 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar11 = 0;
        uVar15 = uVar8;
        FUN_1038d9d6c();
      }
      func_0x000107c6142c(uVar8);
      lVar12 = lVar11;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      if (lVar12 != 0) {
        lVar11 = lVar12;
        func_0x000107c5faec();
        func_0x000107c61170(lVar12);
        goto LAB_1038d97ec;
      }
    }
  }
  lVar11 = 0;
  uVar15 = 0;
LAB_1038d97ec:
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_148 = *(undefined1 *)(unaff_x20 + 0x58);
  uStack_128 = *(undefined1 *)(unaff_x20 + 0x78);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_80 = CONCAT71(uStack_127,uStack_128);
  uStack_e0 = CONCAT62(uStack_186,uVar6);
  uStack_a0 = CONCAT71(uStack_147,uStack_148);
  uStack_188 = uVar5;
  uStack_187 = uVar4;
  uStack_178 = uVar2;
  lStack_120 = lVar11;
  uStack_118 = uVar15;
  uStack_d8 = uStack_180;
  uStack_d0 = uVar2;
  uStack_c8 = uStack_170;
  uStack_c0 = uStack_168;
  uStack_b8 = uStack_160;
  uStack_b0 = uStack_158;
  uStack_a8 = uStack_150;
  uStack_98 = uStack_140;
  uStack_90 = uStack_138;
  uStack_88 = uStack_130;
  lStack_78 = lVar11;
  uStack_70 = uVar15;
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar14);
  func_0x000107c61434(uVar1);
  FUN_1038d98d4(&uStack_e0,uVar3);
  FUN_1038da118(&uStack_188);
  func_0x000107c61574(lVar13);
  return;
}



/* Entry: 1038d9ce4; end: 1038d9d1f;  */

undefined8 FUN_1038d9ce4(undefined8 param_1,undefined8 param_2)

{
  FUN_1038d8444(param_2,param_1);
  return param_2;
}



/* Entry: 1038d9d20; end: 1038d9d6b;  */

void FUN_1038d9d20(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1038d9d6c; end: 1038d9f1f;  */

ulong FUN_1038d9d6c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038d9e50);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038d9e54);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___UITextField_1126af060;
    func_0x000107c61168(PTR__OBJC_CLASS___UITextField_1126af060);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___UITextField_1126af060;
    func_0x000107c61168(PTR__OBJC_CLASS___UITextField_1126af060);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1038da14c(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1038d9f20);
  (*pcVar2)();
}



/* Entry: 1038d9f20; end: 1038da107;  */

void FUN_1038d9f20(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  uVar2 = 0x1000000000000013;
  func_0x000107c5fadc(0x1000000000000013,0x800000010f174be0);
  puVar3 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  func_0x000107c61168();
  func_0x000107c3dac0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  pcVar4 = "present(_:from:)";
  func_0x0001000c10c0("present(_:from:)");
  func_0x000107c61180();
  puVar5 = &UNK_1106a7238;
  func_0x000107c613fc(&UNK_1106a7238,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = (code *)0x1038da24c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106a7250;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(pcVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar4);
  pcVar4 = "confirm(from:)";
  func_0x0001000c10c0("confirm(from:)");
  func_0x000107c61180();
  puVar5 = &UNK_1106a7288;
  func_0x000107c613fc(&UNK_1106a7288,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  pcStack_70 = FUN_1038da108;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106a72a0;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c61174(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c4e528(0x3ff3333333333333,pcVar4);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 1038da108; end: 1038da117;  */

void FUN_1038da108(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 1038da118; end: 1038da14b;  */

undefined8 FUN_1038da118(undefined8 param_1)

{
  (*(code *)(undefined *)0x1038d870c)();
  return param_1;
}



/* Entry: 1038da14c; end: 1038da18f;  */

void FUN_1038da14c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d60470 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d60470 = puVar1;
  return;
}


