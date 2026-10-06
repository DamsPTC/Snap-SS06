/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103537b4c; end: 103537b8b;  */

void FUN_103537b4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6b20;
  func_0x000107c61520(&UNK_10dbd6b20,&UNK_110662668);
  puRam0000000112f76c90 = puVar1;
  return;
}



/* Entry: 103537b8c; end: 103537baf;  */

void FUN_103537b8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103537bb0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103537bb0; end: 103537bef;  */

void FUN_103537bb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6b90;
  func_0x000107c61520(&UNK_10dbd6b90,&UNK_110662710);
  puRam0000000112f76c98 = puVar1;
  return;
}



/* Entry: 103537bf0; end: 103537c07;  */

void FUN_103537bf0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103536b80)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103536ac0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537c08; end: 103537c47;  */

void FUN_103537c08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6bf8;
  func_0x000107c61520(&UNK_10dbd6bf8,&UNK_110662710);
  puRam0000000112f76ca0 = puVar1;
  return;
}



/* Entry: 103537c48; end: 103537c6b;  */

void FUN_103537c48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103537c6c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103537c6c; end: 103537cab;  */

void FUN_103537c6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6c68;
  func_0x000107c61520(&UNK_10dbd6c68,&UNK_1106627a8);
  puRam0000000112f76ca8 = puVar1;
  return;
}



/* Entry: 103537cac; end: 103537cbf;  */

void FUN_103537cac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103536bc0)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103536b00)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537cc0; end: 103537cef;  */

void FUN_103537cc0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537cf0; end: 103537cf3;  */

void FUN_103537cf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6cd0;
  func_0x000107c61520(&UNK_10dbd6cd0,&UNK_1106627a8);
  puRam0000000112f76cb0 = puVar1;
  return;
}



/* Entry: 103537cf4; end: 103537d33;  */

void FUN_103537cf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6cd0;
  func_0x000107c61520(&UNK_10dbd6cd0,&UNK_1106627a8);
  puRam0000000112f76cb0 = puVar1;
  return;
}



/* Entry: 103537d34; end: 103537de7;  */

void FUN_103537d34(void)

{
  return;
}



/* Entry: 103537de8; end: 103537e2b;  */

/* WARNING: Possible PIC construction at 0x000103537e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103537e04) */
/* WARNING: Removing unreachable block (ram,0x000103537e20) */
/* WARNING: Removing unreachable block (ram,0x000103537e0c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103537de8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103537e2c; end: 103537fbf;  */

undefined8 * FUN_103537e2c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  func_0x00010006c00c(uVar2,uVar3);
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  lVar1 = param_2[7];
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar1;
    uVar2 = param_2[8];
    uVar3 = param_2[9];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
  }
  return param_1;
}



/* Entry: 103537fc0; end: 103538057;  */

undefined8 * FUN_103537fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[7] != 0) {
    lVar3 = param_2[7];
    if (lVar3 != 0) {
      param_1[6] = param_2[6];
      param_1[7] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[8];
      uVar2 = param_1[9];
      uVar4 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x00010159d63c(param_1 + 6);
  }
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar2;
  return param_1;
}



/* Entry: 103538058; end: 10353812b;  */

int FUN_103538058(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xe);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10353812c; end: 103538197;  */

/* WARNING: Possible PIC construction at 0x000103538158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353815c) */
/* WARNING: Removing unreachable block (ram,0x000103538168) */
/* WARNING: Removing unreachable block (ram,0x00010353818c) */
/* WARNING: Removing unreachable block (ram,0x000103538174) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10353812c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x38) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x38) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103538198; end: 1035382a3;  */

undefined8 * FUN_103538198(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  param_1[5] = uVar4;
  uVar2 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar5,uVar2);
  param_1[6] = uVar5;
  param_1[7] = uVar2;
  lVar1 = param_2[0xf];
  if (lVar1 == 1) {
    uVar3 = param_2[0xc];
    uVar5 = param_2[0xf];
    uVar4 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xf] = uVar5;
    param_1[0xe] = uVar4;
    uVar3 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar3;
    uVar5 = param_2[8];
    uVar4 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar5;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
  }
  else {
    param_1[8] = param_2[8];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[10] = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar4;
    if (lVar1 == 0) {
      uVar3 = param_2[0xe];
      uVar5 = param_2[0x11];
      uVar4 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar3;
      param_1[0x11] = uVar5;
      param_1[0x10] = uVar4;
    }
    else {
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = lVar1;
      uVar3 = param_2[0x10];
      uVar4 = param_2[0x11];
      func_0x000107c61434(lVar1);
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x10] = uVar3;
      param_1[0x11] = uVar4;
    }
  }
  return param_1;
}



/* Entry: 1035382a4; end: 1035385df;  */

undefined8 * FUN_1035382a4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar2;
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[6];
  uVar5 = param_2[7];
  func_0x00010006c00c(uVar2,uVar5);
  uVar4 = param_1[6];
  uVar6 = param_1[7];
  param_1[6] = uVar2;
  param_1[7] = uVar5;
  func_0x00010006c090(uVar4,uVar6);
  if (param_1[0xf] == 1) {
    if (param_2[0xf] == 1) {
      uVar2 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar2;
      uVar4 = param_2[0xb];
      uVar2 = param_2[10];
      uVar6 = param_2[0xd];
      uVar5 = param_2[0xc];
      uVar7 = param_2[0xe];
      uVar9 = param_2[0x11];
      uVar8 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar7;
      param_1[0x11] = uVar9;
      param_1[0x10] = uVar8;
      param_1[0xb] = uVar4;
      param_1[10] = uVar2;
      param_1[0xd] = uVar6;
      param_1[0xc] = uVar5;
      return param_1;
    }
    uVar2 = param_2[8];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[8] = uVar2;
    uVar2 = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    param_1[10] = uVar2;
    uVar2 = param_2[0xc];
    uVar4 = param_2[0xd];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar4;
    lVar1 = param_2[0xf];
  }
  else {
    if (param_2[0xf] == 1) {
      func_0x0001015544a4(param_1 + 8);
      uVar2 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar2;
      uVar2 = param_2[0xe];
      uVar5 = param_2[0x11];
      uVar4 = param_2[0x10];
      uVar9 = param_2[0xb];
      uVar8 = param_2[10];
      uVar7 = param_2[0xd];
      uVar6 = param_2[0xc];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar2;
      param_1[0x11] = uVar5;
      param_1[0x10] = uVar4;
      param_1[0xb] = uVar9;
      param_1[10] = uVar8;
      param_1[0xd] = uVar7;
      param_1[0xc] = uVar6;
      return param_1;
    }
    uVar2 = param_2[8];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[8] = uVar2;
    uVar2 = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    param_1[10] = uVar2;
    uVar2 = param_2[0xc];
    uVar5 = param_2[0xd];
    func_0x00010006c00c(uVar2,uVar5);
    uVar4 = param_1[0xc];
    uVar6 = param_1[0xd];
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar5;
    func_0x00010006c090(uVar4,uVar6);
    lVar3 = param_1[0xf];
    lVar1 = param_2[0xf];
    if (lVar3 != 0) {
      if (lVar1 != 0) {
        param_1[0xe] = param_2[0xe];
        param_1[0xf] = param_2[0xf];
        func_0x000107c61434();
        func_0x000107c6142c(lVar3);
        uVar2 = param_2[0x10];
        uVar5 = param_2[0x11];
        func_0x00010006c00c(uVar2,uVar5);
        uVar4 = param_1[0x10];
        uVar6 = param_1[0x11];
        param_1[0x10] = uVar2;
        param_1[0x11] = uVar5;
        func_0x00010006c090(uVar4,uVar6);
        return param_1;
      }
      func_0x00010159d63c(param_1 + 0xe);
      uVar5 = param_2[0xe];
      uVar4 = param_2[0x11];
      uVar2 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar5;
      param_1[0x11] = uVar4;
      param_1[0x10] = uVar2;
      return param_1;
    }
  }
  if (lVar1 == 0) {
    uVar2 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar4 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar4;
  }
  else {
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    uVar2 = param_2[0x10];
    uVar4 = param_2[0x11];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar4);
    param_1[0x10] = uVar2;
    param_1[0x11] = uVar4;
  }
  return param_1;
}



/* Entry: 1035385e0; end: 10353869b;  */

int FUN_1035385e0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x24] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10353869c; end: 1035386c3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10353869c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x20) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x20) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1035386c4; end: 103538783;  */

undefined8 * FUN_1035386c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 103538784; end: 1035387cf;  */

undefined8 * FUN_103538784(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1035387d0; end: 10353886f;  */

int FUN_1035387d0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103538870; end: 10353889b;  */

void FUN_103538870(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 10353889c; end: 103538947;  */

undefined8 * FUN_10353889c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 103538948; end: 10353898f;  */

undefined8 * FUN_103538948(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103538990; end: 103538a27;  */

int FUN_103538990(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103538a28; end: 103538ab7;  */

undefined1 * FUN_103538a28(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return param_1;
}



/* Entry: 103538ab8; end: 103538af7;  */

undefined1 * FUN_103538ab8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103538af8; end: 103538b07;  */

undefined1  [16] FUN_103538af8(void)

{
  return ZEXT816(0x110662550);
}



/* Entry: 103538b08; end: 103538b47;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103538b08(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x58) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x58) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103538b48; end: 103538bd7;  */

undefined4 * FUN_103538b48(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar5;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  uVar5 = *(undefined8 *)(param_2 + 0x12);
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x12) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x16);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar3,uVar5);
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x16) = uVar5;
  return param_1;
}



/* Entry: 103538bd8; end: 103538caf;  */

undefined4 * FUN_103538bd8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar4 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103538cb0; end: 103538d33;  */

undefined4 * FUN_103538cb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  uVar2 = *(undefined8 *)(param_1 + 0x16);
  uVar4 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = uVar4;
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103538d34; end: 103538de3;  */

int FUN_103538d34(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103538de4; end: 103538e4b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103538de4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x80));
  uVar1 = *(ulong *)(param_1 + 0x88);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x90) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x90) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103538e4c; end: 103538f3b;  */

undefined8 * FUN_103538e4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  uVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  uVar7 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  param_1[0xc] = param_2[0xc];
  uVar8 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar8;
  uVar2 = param_2[0xf];
  uVar9 = param_2[0x10];
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar9;
  uVar1 = param_2[0x11];
  uVar10 = param_2[0x12];
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar9);
  func_0x00010006c00c(uVar1,uVar10);
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar10;
  return param_1;
}



/* Entry: 103538f3c; end: 1035390a3;  */

undefined8 * FUN_103538f3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[6] = param_2[6];
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[8] = param_2[8];
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[10] = param_2[10];
  uVar4 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)((long)param_2 + 100);
  param_1[0xd] = param_2[0xd];
  uVar4 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[0x11];
  uVar2 = param_2[0x12];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[0x11];
  uVar3 = param_1[0x12];
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 1035390a4; end: 10353916f;  */

undefined8 * FUN_1035390a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  func_0x000107c6142c(param_1[0xe]);
  uVar2 = param_1[0xf];
  uVar1 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[0x11];
  uVar1 = param_1[0x12];
  uVar3 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103539170; end: 10353922b;  */

int FUN_103539170(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x26] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10353922c; end: 10353925b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10353922c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x58) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x58) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10353925c; end: 1035393a3;  */

undefined8 * FUN_10353925c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = param_2[7];
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  param_1[9] = uVar1;
  uVar3 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return param_1;
}



/* Entry: 1035393a4; end: 10353942f;  */

undefined8 * FUN_1035393a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[10];
  uVar1 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103539430; end: 1035394df;  */

int FUN_103539430(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035394e0; end: 103539577;  */

undefined2 * FUN_1035394e0(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return param_1;
}



/* Entry: 103539578; end: 1035395bf;  */

undefined1 * FUN_103539578(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1035395c0; end: 103539667;  */

int FUN_1035395c0(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x18] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103539668; end: 1035396cf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103539668(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,ulong param_12,
                  ulong param_13)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(param_5);
  func_0x000107c6142c(param_7);
  func_0x000107c6142c(param_9);
  uVar1 = (uint)(param_13 >> 0x3e);
  if (uVar1 == 1) {
    param_12 = param_13 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_12);
  return;
}



/* Entry: 1035396d0; end: 1035399cf;  */

void FUN_1035396d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd6c3c;
  func_0x000107c61520(&DAT_10dbd6c3c,&UNK_1106627a8);
  puRam0000000112f76ec0 = puVar1;
  return;
}



/* Entry: 1035399d0; end: 103539a2f;  */

undefined8 FUN_1035399d0(undefined8 param_1,undefined8 param_2)

{
  FUN_10353925c(param_2,param_1,&UNK_110662710);
  return param_2;
}



/* Entry: 103539a30; end: 103539c57;  */

void FUN_103539a30(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103539c58; end: 103539c8f;  */

void FUN_103539c58(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam0000000113808048 = uStack_38;
  uRam0000000113808040 = uStack_40;
  uRam0000000113808058 = uStack_28;
  uRam0000000113808050 = uStack_30;
  uRam0000000113808068 = uStack_18;
  uRam0000000113808060 = uStack_20;
  return;
}



/* Entry: 103539c90; end: 103539cdb;  */

void FUN_103539c90(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 103539cdc; end: 103539cef;  */

void FUN_103539cdc(void)

{
  func_0x000100076224();
  return;
}



/* Entry: 103539cf0; end: 103539d23;  */

void FUN_103539cf0(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  return;
}



/* Entry: 103539d24; end: 103539d53;  */

undefined1  [16] FUN_103539d24(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103539d54; end: 103539d87;  */

void FUN_103539d54(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103539d88; end: 103539d9b;  */

undefined8 FUN_103539d88(void)

{
  return 0x103539d98;
}



/* Entry: 103539d9c; end: 103539dcf;  */

void FUN_103539d9c(void)

{
  FUN_103539c90();
  return;
}



/* Entry: 103539dd0; end: 103539dd3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103539dd0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103539dd4; end: 103539e0b;  */

uint FUN_103539dd4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10353a248();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103539e0c; end: 103539e17;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103539e0c(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar24 = *param_1;
  uVar16 = param_1[1];
  pbVar10 = (byte *)*unaff_x20;
  pbVar25 = (byte *)unaff_x20[1];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(undefined8 **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(undefined8 **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103539e18; end: 103539eb7;  */

/* WARNING: Possible PIC construction at 0x000103539e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103539e74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103539e68) */
/* WARNING: Removing unreachable block (ram,0x000103539e78) */

void FUN_103539e18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f76f60 != -1) {
    func_0x000107c61568(0x112f76f60,FUN_103539c58);
  }
  uVar5 = uRam0000000113808068;
  uVar4 = uRam0000000113808060;
  uVar3 = uRam0000000113808058;
  uVar2 = uRam0000000113808050;
  uVar1 = uRam0000000113808048;
  *param_1 = uRam0000000113808040;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103539eb8; end: 103539ef3;  */

void FUN_103539eb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f76f80;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f76f80,&UNK_10dbd7b78);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103539ef4; end: 103539fe7;  */

void FUN_103539ef4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = unaff_x20[1];
  uStack_40 = *unaff_x20;
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fa50(auStack_88,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103539fe8; end: 103539ffb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103539fe8(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar10 = (byte *)*param_1;
  pbVar25 = (byte *)param_1[1];
  lVar24 = *param_2;
  uVar16 = param_2[1];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103539ffc; end: 10353a03b;  */

void FUN_103539ffc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76f68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd7aa0;
  func_0x000107c61520(&UNK_10dbd7aa0,&UNK_1106629a0);
  puRam0000000112f76f68 = puVar1;
  return;
}



/* Entry: 10353a03c; end: 10353a05f;  */

void FUN_10353a03c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10353a060();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10353a060; end: 10353a09f;  */

void FUN_10353a060(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd7a78;
  func_0x000107c61520(&UNK_10dbd7a78,&UNK_1106629a0);
  puRam0000000112f76f70 = puVar1;
  return;
}



/* Entry: 10353a0a0; end: 10353a0cb;  */

void FUN_10353a0a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103539ffc();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502e54();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10353a0cc; end: 10353a0cf;  */

void FUN_10353a0cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd7ae0;
  func_0x000107c61520(&UNK_10dbd7ae0,&UNK_1106629a0);
  puRam0000000112f76f78 = puVar1;
  return;
}



/* Entry: 10353a0d0; end: 10353a10f;  */

void FUN_10353a0d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd7ae0;
  func_0x000107c61520(&UNK_10dbd7ae0,&UNK_1106629a0);
  puRam0000000112f76f78 = puVar1;
  return;
}



/* Entry: 10353a110; end: 10353a11b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10353a110(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10353a11c; end: 10353a15f;  */

undefined8 * FUN_10353a11c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 10353a160; end: 10353a197;  */

undefined8 * FUN_10353a160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10353a198; end: 10353a247;  */

int FUN_10353a198(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10353a248; end: 10353a287;  */

void FUN_10353a248(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76f88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd7a4c;
  func_0x000107c61520(&DAT_10dbd7a4c,&UNK_1106629a0);
  puRam0000000112f76f88 = puVar1;
  return;
}



/* Entry: 10353a288; end: 10353a28f;  */

undefined8 * FUN_10353a288(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 10353a290; end: 10353a2cf;  */

void FUN_10353a290(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f76fe8;
  func_0x0001000285a8(0x112f76fe8,&UNK_10dbd7bc8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10353a2d0; end: 10353a30f;  */

void FUN_10353a2d0(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[5] = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = puVar1;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  return;
}



/* Entry: 10353a310; end: 10353a357;  */

undefined8 FUN_10353a310(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10353a358; end: 10353a41f;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

undefined **
FUN_10353a358(undefined8 param_1,undefined *param_2,undefined **param_3,undefined **param_4,
             undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8,
             undefined **param_9,undefined **param_10,undefined *param_11,undefined8 param_12,
             undefined1 param_13 [12],undefined4 param_14,undefined *param_15,undefined *param_16,
             undefined *param_17,undefined *param_18,undefined *param_19,undefined *param_20,
             undefined *param_21,undefined1 param_22,undefined4 param_23,undefined1 param_24)

{
  undefined *puVar1;
  undefined **ppuVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined **unaff_x19;
  undefined **ppuVar10;
  undefined **unaff_x20;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  undefined8 unaff_x30;
  undefined8 in_register_00005008;
  byte in_register_00005028;
  undefined7 uStack0000000000000059;
  undefined8 uStack0000000000000061;
  undefined1 *in_stack_00000070;
  
  puVar1 = param_11;
  ppuVar6 = (undefined **)0x0;
  uVar8 = (uint)((ulong)param_11 >> 0x3c) & 3;
  if (0xb < (uVar8 | (uint)(byte)param_12 << 2 & 0xff)) {
    return param_3;
  }
  ppuVar9 = (undefined **)((ulong)(uVar8 | (uint)(byte)param_12 << 2) & 0xff);
  puVar4 = &stack0xffffffffffffffd0;
  ppuVar5 = param_3;
  ppuVar7 = param_4;
  ppuVar10 = unaff_x19;
  ppuVar2 = unaff_x20;
  puVar11 = &stack0xfffffffffffffff0;
  bVar3 = in_register_00005028;
  switch(ppuVar9) {
  case (undefined **)0x0:
  case (undefined **)0xa:
  case (undefined **)0x2f:
  case (undefined **)0x39:
  case (undefined **)0xde:
  case (undefined **)0xe0:
    param_3 = param_4;
    param_4 = param_5;
  case (undefined **)0xc3:
    break;
  case (undefined **)0x1:
  case (undefined **)0x30:
    func_0x000107c61434(param_7);
    ppuVar10 = param_9;
    ppuVar2 = param_10;
  case (undefined **)0xc:
    param_3 = ppuVar2;
    func_0x000107c61434(ppuVar10);
    param_4 = (undefined **)((ulong)puVar1 & 0xcfffffffffffffff);
    break;
  default:
    param_3 = param_5;
  case (undefined **)0xba:
  case (undefined **)0xfe:
    param_4 = param_6;
  case (undefined **)0xab:
  case (undefined **)0xb3:
  case (undefined **)0xb6:
  case (undefined **)0xd3:
  case (undefined **)0xe7:
  case (undefined **)0xef:
  case (undefined **)0xf7:
    break;
  case (undefined **)0x5:
  case (undefined **)0x6:
  case (undefined **)0x34:
  case (undefined **)0x35:
  case (undefined **)0xb8:
    param_3 = param_7;
  case (undefined **)0x54:
    param_4 = param_8;
    break;
  case (undefined **)0x7:
  case (undefined **)0x9:
  case (undefined **)0x36:
  case (undefined **)0x38:
  case (undefined **)0xf8:
    break;
  case (undefined **)0xb:
  case (undefined **)0x3a:
  case (undefined **)0xcc:
    ppuVar5 = param_6;
    ppuVar10 = param_9;
  case (undefined **)0x2e:
    ppuVar2 = param_8;
  case (undefined **)0x4c:
  case (undefined **)0x5c:
  case (undefined **)0x64:
  case (undefined **)0x6c:
  case (undefined **)0x74:
  case (undefined **)0x7c:
  case (undefined **)0x84:
  case (undefined **)0x8c:
  case (undefined **)0x94:
  case (undefined **)0x9c:
  case (undefined **)0xa4:
    param_3 = ppuVar2;
    func_0x000107c61434(ppuVar5);
    param_4 = ppuVar10;
    break;
  case (undefined **)0xf:
    return param_3;
  case (undefined **)0x10:
    goto SUB_10006c00c;
  case (undefined **)0x12:
    param_3 = (undefined **)0x112f77050;
    func_0x0001000285a8(0x112f77050,&UNK_10dbd7bd8);
    unaff_x19 = ppuVar9;
  case (undefined **)0x16:
    func_0x000107c61538();
    *unaff_x19 = (undefined *)param_3;
    return param_3;
  case (undefined **)0x14:
    param_6 = param_6 + 0x1cf;
  case (undefined **)0x2a:
    unaff_x19 = ppuVar9;
  case (undefined **)0xf0:
    (*(code *)param_6)();
  case (undefined **)0xac:
    *unaff_x19 = (undefined *)param_3;
  case (undefined **)0xc2:
    ppuVar9 = (undefined **)((ulong)param_4 >> 8 & 0xffffff);
  case (undefined **)0xbe:
  case (undefined **)0xfa:
    *(char *)(unaff_x19 + 1) = (char)param_4;
    *(char *)((long)unaff_x19 + 9) = (char)ppuVar9;
    return param_3;
  case (undefined **)0x15:
  case (undefined **)0x1d:
    return unaff_x19;
  case (undefined **)0x1a:
  case (undefined **)0x25:
    return param_3;
  case (undefined **)0x1b:
  case (undefined **)0xe:
  case (undefined **)0x2c:
    ppuVar7 = param_3;
    unaff_x19 = param_4;
  case (undefined **)0x1c:
  case (undefined **)0xc1:
    param_3 = unaff_x19;
    param_5 = (undefined **)&UNK_110663938;
    unaff_x19 = param_3;
  case (undefined **)0x20:
    FUN_1035453f4(param_3,ppuVar7,param_5);
    return unaff_x19;
  case (undefined **)0x1e:
    param_2 = param_3[6];
    in_stack_00000070 = &stack0xfffffffffffffff0;
    bVar3 = (byte)param_3[7];
  case (undefined **)0x13:
  case (undefined **)0x1f:
    param_12._0_1_ = bVar3;
    param_13._1_8_ = *(undefined8 *)((long)param_3 + 0x41);
    param_12._1_7_ = (undefined7)*(undefined8 *)((long)param_3 + 0x39);
    param_13[0] = (undefined1)((ulong)*(undefined8 *)((long)param_3 + 0x39) >> 0x38);
    param_11 = param_2;
  case (undefined **)0x21:
    param_20 = param_4[5];
    param_19 = param_4[4];
    param_21 = param_4[6];
    param_22 = SUB81(param_4[7],0);
  case (undefined **)0xd:
    in_register_00005008 = *(undefined8 *)((long)param_4 + 0x41);
    param_1 = *(undefined8 *)((long)param_4 + 0x39);
  case (undefined **)0xad:
  case (undefined **)0xd5:
    uStack0000000000000059 = (undefined7)param_1;
    param_24 = (undefined1)((ulong)param_1 >> 0x38);
    param_16 = param_4[1];
    param_15 = *param_4;
    param_18 = param_4[3];
    param_17 = param_4[2];
    uStack0000000000000061 = in_register_00005008;
    FUN_103541768(&stack0xffffffffffffffd0,&param_15);
    param_3 = ppuVar6;
  case (undefined **)0x11:
    return (undefined **)(ulong)((uint)param_3 & 1);
  case (undefined **)0x22:
    return param_3;
  case (undefined **)0x26:
    return param_3;
  case (undefined **)0x27:
  case (undefined **)0xb0:
  case (undefined **)0x18:
    param_5 = &PTR_DAT_110663000;
    ppuVar7 = param_3;
    unaff_x19 = param_4;
  case (undefined **)0xf9:
    FUN_103544d18(unaff_x19,ppuVar7,param_5 + 0xe4);
    return unaff_x19;
  case (undefined **)0x28:
    return param_3;
  case (undefined **)0x29:
    return param_3;
  case (undefined **)0x48:
    return param_3;
  case (undefined **)0x49:
  case (undefined **)0x51:
  case (undefined **)0x59:
  case (undefined **)0x61:
  case (undefined **)0x69:
  case (undefined **)0x71:
  case (undefined **)0x79:
  case (undefined **)0x81:
  case (undefined **)0x89:
  case (undefined **)0x91:
  case (undefined **)0x99:
  case (undefined **)0xa1:
  case (undefined **)0xc9:
  case (undefined **)0xe9:
  case (undefined **)0xf1:
    param_6 = param_6 + 0x1d2;
  case (undefined **)0xbd:
  case (undefined **)0x2d:
  case (undefined **)0xb1:
  case (undefined **)0x70:
    param_3 = (undefined **)*param_3;
    (*(code *)param_6)();
    *ppuVar9 = (undefined *)param_3;
    unaff_x19 = ppuVar9;
  case (undefined **)0xe4:
  case (undefined **)0xec:
  case (undefined **)0xf4:
    ppuVar9 = (undefined **)((ulong)param_4 >> 8 & 0xffffff);
  case (undefined **)0x78:
    *(char *)(unaff_x19 + 1) = (char)param_4;
    *(char *)((long)unaff_x19 + 9) = (char)ppuVar9;
    return param_3;
  case (undefined **)0x4a:
  case (undefined **)0x52:
  case (undefined **)0x5a:
  case (undefined **)0x62:
  case (undefined **)0x6a:
  case (undefined **)0x72:
  case (undefined **)0x7a:
  case (undefined **)0x82:
  case (undefined **)0x8a:
  case (undefined **)0x92:
  case (undefined **)0x9a:
  case (undefined **)0xa2:
  case (undefined **)0xca:
  case (undefined **)0xea:
  case (undefined **)0xf2:
    param_3 = (undefined **)0x112f77380;
    unaff_x19 = ppuVar9;
  case (undefined **)0xa8:
    func_0x0001000285a8(param_3,&UNK_10dbd7c08);
  case (undefined **)0xbc:
    func_0x000107c61538();
    *unaff_x19 = (undefined *)param_3;
    return param_3;
  case (undefined **)0x50:
  case (undefined **)0x58:
    param_3 = (undefined **)0x112f77260;
    func_0x0001000285a8(0x112f77260,&UNK_10dbd7bf0);
    unaff_x19 = ppuVar9;
  case (undefined **)0x60:
  case (undefined **)0xe8:
    func_0x000107c61538();
    *unaff_x19 = (undefined *)param_3;
    return param_3;
  case (undefined **)0x68:
    return param_3;
  case (undefined **)0x80:
  case (undefined **)0x2b:
    param_3 = (undefined **)0x112f772c0;
    unaff_x19 = ppuVar9;
  case (undefined **)0xd0:
    param_4 = (undefined **)&UNK_10dbd7000;
  case (undefined **)0x88:
    func_0x0001000285a8(param_3,param_4 + 0x17f);
  case (undefined **)0xa9:
  case (undefined **)0xd1:
  case (undefined **)0xe5:
  case (undefined **)0xed:
  case (undefined **)0xf5:
    func_0x000107c61538();
    *unaff_x19 = (undefined *)param_3;
    return param_3;
  case (undefined **)0x90:
    return param_3;
  case (undefined **)0x98:
    param_3 = (undefined **)0x112f77320;
    func_0x0001000285a8(0x112f77320,&UNK_10dbd7c00);
    unaff_x19 = ppuVar9;
  case (undefined **)0xa0:
    func_0x000107c61538();
    *unaff_x19 = (undefined *)param_3;
    return param_3;
  case (undefined **)0xaa:
  case (undefined **)0xb2:
  case (undefined **)0xd2:
  case (undefined **)0xe6:
  case (undefined **)0xee:
  case (undefined **)0xf6:
    return param_3;
  case (undefined **)0xae:
  case (undefined **)0xd6:
    return param_3;
  case (undefined **)0xbf:
  case (undefined **)0xfb:
    func_0x000107c61538(param_3,param_4 + 0x72);
    *unaff_x19 = (undefined *)param_3;
    return param_3;
  case (undefined **)0xc0:
    func_0x0001000285a8(param_3,param_4 + 0x17d);
    func_0x000107c61538();
    *unaff_x19 = (undefined *)param_3;
    return param_3;
  case (undefined **)0xc8:
    return param_3;
  case (undefined **)0xd4:
    param_4 = (undefined **)0x112f77060;
  case (undefined **)0x24:
    func_0x000107c61538(param_3,param_4);
    *unaff_x19 = (undefined *)param_3;
    return param_3;
  }
  puVar4 = (undefined1 *)register0x00000008;
  puVar11 = unaff_x29;
SUB_10006c00c:
  uVar8 = (uint)((ulong)param_4 >> 0x3e);
  if (uVar8 == 1) {
    param_3 = (undefined **)((ulong)param_4 & 0x3fffffffffffffff);
  }
  else {
    if (uVar8 != 2) {
      return param_3;
    }
    *(undefined ***)(puVar4 + -0x20) = unaff_x20;
    *(undefined ***)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar11;
    *(undefined8 *)(puVar4 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return param_3;
}



/* Entry: 10353a420; end: 10353a487;  */

undefined8 FUN_10353a420(undefined8 param_1,undefined8 param_2)

{
  FUN_103544d18(param_2,param_1,&UNK_110663720);
  return param_2;
}



/* Entry: 10353a488; end: 10353a4df;  */

uint FUN_10353a488(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103541768(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10353a4e0; end: 10353a51f;  */

void FUN_10353a4e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f77050;
  func_0x0001000285a8(0x112f77050,&UNK_10dbd7bd8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10353a520; end: 10353a52b;  */

void FUN_10353a520(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x103541e78)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10353a52c; end: 10353a56b;  */

void FUN_10353a52c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f77120;
  func_0x0001000285a8(0x112f77120,&UNK_10dbd7be0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10353a56c; end: 10353a583;  */

void FUN_10353a56c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103541e78)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10353a584; end: 10353a5c3;  */

void FUN_10353a584(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f771e0;
  func_0x0001000285a8(0x112f771e0,&UNK_10dbd7be8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10353a5c4; end: 10353a5db;  */

void FUN_10353a5c4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103541e84)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10353a5dc; end: 10353a64b;  */

void FUN_10353a5dc(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10353a64c; end: 10353a657;  */

void FUN_10353a64c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103541e90)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10353a658; end: 10353a88f;  */

void FUN_10353a658(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10353a890; end: 10353a8d7;  */

void FUN_10353a890(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd9cb0,0x65,2);
  uRam0000000113808078 = uStack_38;
  uRam0000000113808070 = uStack_40;
  uRam0000000113808088 = uStack_28;
  uRam0000000113808080 = uStack_30;
  uRam0000000113808098 = uStack_18;
  uRam0000000113808090 = uStack_20;
  return;
}



/* Entry: 10353a8d8; end: 10353aa53;  */

/* WARNING: Removing unreachable block (ram,0x00010353aa44) */

void FUN_10353a8d8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) {
            if (lVar1 != 3) goto LAB_10353a960;
            pcVar4 = *(code **)(param_3 + 0x180);
            func_0x000103541e9c();
            lVar2 = unaff_x20 + 0x18;
            puVar3 = &UNK_110663608;
            goto LAB_10353aa30;
          }
          pcVar4 = *(code **)(param_3 + 0x90);
        }
LAB_10353a950:
        (*pcVar4)();
      }
      else {
        if (lVar1 < 6) {
          if (lVar1 == 4) {
            pcVar4 = *(code **)(param_3 + 0x160);
          }
          else {
            if (lVar1 != 5) goto LAB_10353a960;
            pcVar4 = *(code **)(param_3 + 0x138);
          }
          goto LAB_10353a950;
        }
        if (lVar1 == 6) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x000103541edc();
          lVar2 = unaff_x20 + 0x38;
          puVar3 = &UNK_110663680;
LAB_10353aa30:
          (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
        }
        else if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000103510fbc();
          lVar2 = unaff_x20 + 0x50;
          puVar3 = &UNK_11066abb0;
          goto LAB_10353aa30;
        }
      }
LAB_10353a960:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10353aa54; end: 10353abeb;  */

void FUN_10353aa54(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar2;
  code *pcVar3;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     ((uVar1 = unaff_x20[2], uVar1 == 0 ||
      ((**(code **)(param_3 + 0x30))(uVar1,2,param_2,param_3), unaff_x21 == 0)))) {
    if (unaff_x20[3] != 0) {
      uStack_58 = (undefined1)unaff_x20[4];
      pcVar3 = *(code **)(param_3 + 0x80);
      uStack_60 = unaff_x20[3];
      FUN_103541e9c();
      (*pcVar3)(&uStack_60,3,&UNK_110663608,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar1 = unaff_x20[5];
    if ((*(long *)(uVar1 + 0x10) == 0) ||
       ((**(code **)(param_3 + 0x100))(uVar1,4,param_2,param_3), unaff_x21 == 0)) {
      if ((char)unaff_x20[6] == '\x01') {
        uVar1 = 1;
        (**(code **)(param_3 + 0x68))(1,5,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      uVar2 = unaff_x20[7];
      if (*(long *)(uVar2 + 0x10) != 0) {
        pcVar3 = *(code **)(param_3 + 0x118);
        func_0x000103541edc();
        (*pcVar3)(uVar2,6,&UNK_110663680,uVar1,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      FUN_10353abec();
      if (unaff_x21 == 0) {
        func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 10353abec; end: 10353ac6b;  */

void FUN_10353abec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x60);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103510fbc();
    (*pcVar1)(&uStack_60,7,&UNK_11066abb0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10353ac6c; end: 10353acd3;  */

uint FUN_10353ac6c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && (param_1[2] == param_2[2])) {
    uVar2 = param_1[3];
    uVar4 = param_2[3];
    if ((char)param_2[4] == '\x01') {
      if (uVar4 == 0) {
        if (uVar2 == 0) goto LAB_103542260;
      }
      else if (uVar4 == 1) {
        if (uVar2 == 1) {
LAB_103542260:
          uVar2 = param_1[5];
          func_0x00010142cfc4(uVar2,param_2[5]);
          if (((uVar2 & 1) != 0) && ((((byte)param_1[6] ^ (byte)param_2[6]) & 1) == 0)) {
            uVar2 = param_1[7];
            FUN_1035411a4(uVar2,param_2[7]);
            if ((uVar2 & 1) != 0) {
              uVar7 = param_1[0xb];
              uVar5 = param_1[10];
              uVar2 = param_1[0xc];
              uVar8 = param_2[0xb];
              uVar6 = param_2[10];
              uVar4 = param_2[0xc];
              uStack_a0 = uVar6;
              uStack_98 = uVar8;
              uStack_90 = uVar4;
              uStack_80 = uVar5;
              uStack_78 = uVar7;
              uStack_70 = uVar2;
              if (uVar2 == 0) {
                if (uVar4 == 0) {
                  FUN_10353a310(&uStack_80,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
                  FUN_10353a310(&uStack_a0,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
                  func_0x00010349f458(uVar5,uVar7,0);
LAB_103542410:
                  uVar2 = param_1[8];
                  func_0x000100e25fcc(uVar2,param_1[9],param_2[8],param_2[9]);
                  uVar1 = (uint)uVar2;
                  goto LAB_103542340;
                }
              }
              else if (uVar4 != 0) {
                FUN_10353a310(&uStack_80,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
                FUN_10353a310(&uStack_a0,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
                uVar3 = uVar5;
                FUN_1035d8f6c(uVar5,uVar7,uVar2,uVar6,uVar8,uVar4);
                func_0x00010349f458(uVar6,uVar8,uVar4);
                func_0x00010349f458(uVar5,uVar7,uVar2);
                if ((uVar3 & 1) != 0) goto LAB_103542410;
                goto LAB_10354233c;
              }
              FUN_10353a310(&uStack_80,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
              FUN_10353a310(&uStack_a0,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
              func_0x00010349f458(uVar5,uVar7,uVar2);
              func_0x00010349f458(uVar6,uVar8,uVar4);
              uVar1 = 0;
              goto LAB_103542340;
            }
          }
        }
      }
      else if (uVar2 == 2) goto LAB_103542260;
    }
    else if (uVar2 == uVar4) goto LAB_103542260;
  }
LAB_10354233c:
  uVar1 = 0;
LAB_103542340:
  return uVar1 & 1;
}



/* Entry: 10353acd4; end: 10353ad03;  */

undefined1  [16] FUN_10353acd4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}


