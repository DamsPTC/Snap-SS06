/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10889b1b0; end: 10889b343;  */

ulong * FUN_10889b1b0(ulong *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puStack_58;
  ulong *puStack_28;
  
  puVar2 = param_1;
  FUN_10889b344();
  if ((puVar2 != (ulong *)0x0) && (puVar3 = param_1, FUN_10889b36c(), puVar3 != (ulong *)0x0)) {
    puVar3 = param_1;
    func_0x00010889b384();
    FUN_10889b39c();
    puVar4 = puVar3;
    func_0x000108890eb8(puVar3,puVar2);
    puVar2 = param_1;
    FUN_10889b3c8(param_1,puVar4);
    if ((ulong *)*puVar2 != (ulong *)0x0) {
      puStack_58 = *(ulong **)*puVar2;
      while( true ) {
        bVar1 = false;
        if (puStack_58 != (ulong *)0x0) {
          puVar2 = puStack_58;
          func_0x00010889b3f0();
          bVar1 = true;
          if (puVar3 != puVar2) {
            puVar2 = puStack_58;
            func_0x00010889b3f0();
            func_0x000108890eb8();
            bVar1 = puVar2 == puVar4;
          }
        }
        if (!bVar1) break;
        puVar2 = puStack_58;
        func_0x00010889b3f0();
        if (puVar2 == puVar3) {
          puVar2 = param_1;
          func_0x00010889b408();
          puVar5 = puStack_58;
          FUN_108895508(puStack_58);
          func_0x000108895568();
          FUN_10889b420(puVar2,puVar5,param_2);
          if (((ulong)puVar2 & 1) != 0) {
            FUN_10889b458(&puStack_28,puStack_58);
            return puStack_28;
          }
        }
        puStack_58 = (ulong *)*puStack_58;
      }
    }
  }
  FUN_10889b494();
  return param_1;
}



/* Entry: 10889b344; end: 10889b36b;  */

void FUN_10889b344(undefined8 param_1)

{
  FUN_10889b4c0(param_1);
  func_0x00010889b4d8();
  return;
}



/* Entry: 10889b36c; end: 10889b39b;  */

undefined8 FUN_10889b36c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10889b39c; end: 10889b3c7;  */

void FUN_10889b39c(undefined8 param_1,undefined8 param_2)

{
  FUN_1086a9f1c(param_1,param_2);
  return;
}



/* Entry: 10889b3c8; end: 10889b41f;  */

long FUN_10889b3c8(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}



/* Entry: 10889b420; end: 10889b457;  */

uint FUN_10889b420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1086a9f40(param_1,param_2,param_3);
  return (uint)param_1 & 1;
}



/* Entry: 10889b458; end: 10889b493;  */

undefined8 FUN_10889b458(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889b4f0(param_1,param_2);
  return param_1;
}



/* Entry: 10889b494; end: 10889b4bf;  */

undefined8 FUN_10889b494(void)

{
  undefined8 uStack_18;
  
  FUN_10889b458(&uStack_18,0);
  return uStack_18;
}



/* Entry: 10889b4c0; end: 10889b55f;  */

long FUN_10889b4c0(long param_1)

{
  return param_1 + 8;
}



/* Entry: 10889b560; end: 10889b5d3;  */

undefined8 FUN_10889b560(undefined8 param_1)

{
  func_0x0001089229e8(param_1,0);
  return param_1;
}



/* Entry: 10889b5d4; end: 10889b5f3;  */

void FUN_10889b5d4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889b5f4; end: 10889b627;  */

undefined8 FUN_10889b5f4(undefined8 param_1)

{
  FUN_10889b628(param_1);
  return param_1;
}



/* Entry: 10889b628; end: 10889b66b;  */

void FUN_10889b628(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10889b66c(param_1,lVar1);
  }
  return;
}



/* Entry: 10889b66c; end: 10889b6ab;  */

void FUN_10889b66c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108922a5c(param_2);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10889b6ac; end: 10889b6bf;  */

undefined8 FUN_10889b6ac(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10889b6c0; end: 10889b6eb;  */

void FUN_10889b6c0(undefined8 *param_1)

{
  FUN_108895508(*param_1);
  func_0x000108895568();
  return;
}



/* Entry: 10889b6ec; end: 10889b727;  */

undefined8 FUN_10889b6ec(undefined8 param_1,undefined8 param_2)

{
  FUN_10889b728(param_1,param_2);
  return param_1;
}



/* Entry: 10889b728; end: 10889b75b;  */

void FUN_10889b728(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889b75c; end: 10889b787;  */

void FUN_10889b75c(undefined8 *param_1)

{
  func_0x000108891d98(*param_1);
  FUN_108891dbc();
  return;
}



/* Entry: 10889b788; end: 10889b7fb;  */

undefined8 FUN_10889b788(undefined8 param_1)

{
  FUN_1089094bc(param_1,0);
  return param_1;
}



/* Entry: 10889b7fc; end: 10889b81b;  */

void FUN_10889b7fc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889b81c; end: 10889b84f;  */

undefined8 FUN_10889b81c(undefined8 param_1)

{
  FUN_10889b850(param_1);
  return param_1;
}



/* Entry: 10889b850; end: 10889b893;  */

void FUN_10889b850(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10889b894(param_1,lVar1);
  }
  return;
}



/* Entry: 10889b894; end: 10889b8d3;  */

void FUN_10889b894(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108909530(param_2);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10889b8d4; end: 10889b9ef;  */

void FUN_10889b8d4(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar2 = param_2;
  FUN_10889b9f0();
  piVar3 = param_1;
  FUN_108899e2c();
  if ((piVar3 == piVar2) && (piVar4 = param_1, func_0x0001053a91c8(), ((ulong)piVar4 & 1) == 0)) {
    piVar2 = param_1;
    FUN_108899e44();
    iVar1 = param_1[2];
    piVar3 = param_1;
    func_0x000107c28174();
    if (iVar1 < (int)piVar3) {
      uVar5 = *(undefined8 *)(piVar2 + (long)param_1[2] * 2);
      piVar3 = param_1;
      func_0x000107c28174();
      *(undefined8 *)(piVar2 + (long)(int)piVar3 * 2) = uVar5;
    }
    piVar3 = param_1;
    FUN_108899e8c(param_1,param_1[2] + 1);
    *(int **)(piVar2 + (long)(int)piVar3 * 2) = param_2;
    piVar2 = param_1;
    FUN_108896558();
    if (((ulong)piVar2 & 1) == 0) {
      FUN_1088965a4();
      *param_1 = *param_1 + 1;
    }
  }
  else {
    FUN_10889ba14(param_1,param_2,piVar2,piVar3);
  }
  return;
}



/* Entry: 10889b9f0; end: 10889ba13;  */

void FUN_10889b9f0(undefined8 param_1)

{
  FUN_10889bacc(param_1);
  return;
}



/* Entry: 10889ba14; end: 10889bacb;  */

void FUN_10889ba14(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lStack_40;
  
  lStack_40 = param_2;
  if ((param_4 == 0) || (param_3 != 0)) {
    if (param_4 != param_3) {
      func_0x00010889bb38(param_2,param_4);
      func_0x00010b4d193c(param_2,lStack_40);
    }
  }
  else if (param_2 != 0) {
    func_0x00010b4d8014(param_4,param_2,&UNK_1053a933c);
  }
  func_0x0001053a9244(param_1,lStack_40);
  return;
}



/* Entry: 10889bacc; end: 10889bb83;  */

void FUN_10889bacc(undefined8 param_1)

{
  func_0x00010889baf0(param_1);
  return;
}



/* Entry: 10889bb84; end: 10889bc9f;  */

void FUN_10889bb84(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar2 = param_2;
  FUN_10889bca0();
  piVar3 = param_1;
  FUN_108899e2c();
  if ((piVar3 == piVar2) && (piVar4 = param_1, func_0x0001053a91c8(), ((ulong)piVar4 & 1) == 0)) {
    piVar2 = param_1;
    FUN_108899e44();
    iVar1 = param_1[2];
    piVar3 = param_1;
    func_0x000107c28174();
    if (iVar1 < (int)piVar3) {
      uVar5 = *(undefined8 *)(piVar2 + (long)param_1[2] * 2);
      piVar3 = param_1;
      func_0x000107c28174();
      *(undefined8 *)(piVar2 + (long)(int)piVar3 * 2) = uVar5;
    }
    piVar3 = param_1;
    FUN_108899e8c(param_1,param_1[2] + 1);
    *(int **)(piVar2 + (long)(int)piVar3 * 2) = param_2;
    piVar2 = param_1;
    FUN_108896558();
    if (((ulong)piVar2 & 1) == 0) {
      FUN_1088965a4();
      *param_1 = *param_1 + 1;
    }
  }
  else {
    FUN_10889bcc4(param_1,param_2,piVar2,piVar3);
  }
  return;
}



/* Entry: 10889bca0; end: 10889bcc3;  */

void FUN_10889bca0(undefined8 param_1)

{
  FUN_10889bd7c(param_1);
  return;
}



/* Entry: 10889bcc4; end: 10889bd7b;  */

void FUN_10889bcc4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lStack_40;
  
  lStack_40 = param_2;
  if ((param_4 == 0) || (param_3 != 0)) {
    if (param_4 != param_3) {
      func_0x00010889bde8(param_2,param_4);
      func_0x00010b4d193c(param_2,lStack_40);
    }
  }
  else if (param_2 != 0) {
    func_0x00010b4d8014(param_4,param_2,&UNK_1053a933c);
  }
  func_0x0001053a9244(param_1,lStack_40);
  return;
}



/* Entry: 10889bd7c; end: 10889be63;  */

void FUN_10889bd7c(undefined8 param_1)

{
  func_0x00010889bda0(param_1);
  return;
}



/* Entry: 10889be64; end: 10889bedb;  */

undefined8 FUN_10889be64(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889befc(param_1,param_2);
  return param_1;
}



/* Entry: 10889bedc; end: 10889bf1b;  */

void FUN_10889bedc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889bf1c; end: 10889bf47;  */

undefined8 FUN_10889bf1c(void)

{
  undefined8 uStack_18;
  
  func_0x00010889bea0(&uStack_18,0);
  return uStack_18;
}



/* Entry: 10889bf48; end: 10889bf97;  */

bool FUN_10889bf48(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10889bf98; end: 10889bfc3;  */

void FUN_10889bf98(undefined8 *param_1)

{
  FUN_1088960a4(*param_1);
  func_0x000108896104();
  return;
}



/* Entry: 10889bfc4; end: 10889c01b;  */

uint FUN_10889bfc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  uStack_30 = param_2;
  uStack_28 = param_1;
  FUN_10889b1b0(param_1,param_2);
  uStack_38 = uVar1;
  FUN_10889b494();
  puVar2 = &uStack_38;
  uStack_40 = param_1;
  FUN_10889c01c(puVar2,&uStack_40);
  return (uint)puVar2 & 1;
}



/* Entry: 10889c01c; end: 10889c04f;  */

uint FUN_10889c01c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889b530(param_1,param_2);
  return ((uint)param_1 ^ 1) & 1;
}



/* Entry: 10889c050; end: 10889c0f7;  */

undefined8 FUN_10889c050(undefined8 param_1)

{
  func_0x00010889c084(param_1);
  return param_1;
}



/* Entry: 10889c0f8; end: 10889c18f;  */

void FUN_10889c0f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  
  FUN_10889c1c4();
  uStack_30 = param_2;
  while (uStack_30 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*uStack_30;
    func_0x000108891d98();
    puVar1 = uStack_30;
    FUN_108891dbc(uStack_30);
    FUN_10889c204();
    FUN_10889c1dc(param_1,puVar1);
    FUN_10889c218(uStack_30);
    func_0x00010889c23c(param_1,uStack_30);
    uStack_30 = puVar2;
  }
  return;
}



/* Entry: 10889c190; end: 10889c1c3;  */

undefined8 FUN_10889c190(undefined8 param_1)

{
  FUN_10889c350(param_1);
  return param_1;
}



/* Entry: 10889c1c4; end: 10889c1db;  */

long FUN_10889c1c4(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 10889c1dc; end: 10889c203;  */

void FUN_10889c1dc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889c274(param_2);
  return;
}



/* Entry: 10889c204; end: 10889c217;  */

undefined8 FUN_10889c204(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10889c218; end: 10889c297;  */

void FUN_10889c218(undefined8 param_1)

{
  FUN_10889c298(param_1);
  return;
}



/* Entry: 10889c298; end: 10889c2cb;  */

undefined8 FUN_10889c298(undefined8 param_1)

{
  FUN_10889c2cc(param_1);
  return param_1;
}



/* Entry: 10889c2cc; end: 10889c2df;  */

undefined8 FUN_10889c2cc(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10889c2e0; end: 10889c34f;  */

void FUN_10889c2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010889c310(param_2,param_3);
  return;
}



/* Entry: 10889c350; end: 10889c383;  */

undefined8 FUN_10889c350(undefined8 param_1)

{
  FUN_10889c384(param_1);
  return param_1;
}



/* Entry: 10889c384; end: 10889c3c7;  */

void FUN_10889c384(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10889c3c8(param_1 + 1,lVar1);
  }
  return;
}



/* Entry: 10889c3c8; end: 10889c423;  */

void FUN_10889c3c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10889c458(param_1);
  FUN_108891070();
  FUN_10889c424(puVar1,param_2,*param_1);
  return;
}



/* Entry: 10889c424; end: 10889c457;  */

void FUN_10889c424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10889c46c(param_1,param_2,param_3);
  return;
}



/* Entry: 10889c458; end: 10889c46b;  */

undefined8 FUN_10889c458(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10889c46c; end: 10889c553;  */

void FUN_10889c46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010889c49c(param_2,param_3);
  return;
}



/* Entry: 10889c554; end: 10889c58f;  */

undefined8 FUN_10889c554(undefined8 param_1,undefined8 param_2)

{
  FUN_10889d6a0(param_1,param_2);
  return param_1;
}



/* Entry: 10889c590; end: 10889c60f;  */

void FUN_10889c590(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined7 uStack_2f;
  undefined1 uStack_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10889c610(param_1,param_2,param_2);
  uStack_20 = (undefined1)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lVar1 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lVar1,param_1,
                      CONCAT71(uStack_2f,uStack_20));
  }
  return;
}



/* Entry: 10889c610; end: 10889c96f;  */

undefined1  [16] FUN_10889c610(float *param_1,undefined8 param_2,undefined8 param_3)

{
  unkuint9 Var1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined1 auStack_c8 [8];
  float *pfStack_c0;
  long lStack_a8;
  ulong uStack_a0;
  float afStack_98 [6];
  float *pfStack_80;
  float *pfStack_78;
  undefined1 uStack_69;
  float *pfStack_68;
  float *pfStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float *pfStack_48;
  undefined1 auStack_40 [16];
  
  pfVar3 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_2;
  pfStack_48 = param_1;
  FUN_10889c970();
  FUN_10889b39c();
  pfVar4 = param_1;
  pfStack_60 = pfVar3;
  FUN_10889b344();
  uStack_69 = 0;
  pfStack_68 = pfVar4;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfStack_60;
    func_0x000108890eb8(pfStack_60,pfVar4);
    pfVar4 = param_1;
    pfStack_80 = pfVar3;
    FUN_10889b3c8(param_1,pfVar3);
    pfStack_78 = *(float **)pfVar4;
    if (pfStack_78 != (float *)0x0) {
      pfStack_78 = *(float **)pfStack_78;
      do {
        bVar2 = false;
        if (pfStack_78 != (float *)0x0) {
          pfVar3 = pfStack_78;
          func_0x00010889b3f0();
          bVar2 = true;
          if (pfVar3 != pfStack_60) {
            pfVar3 = pfStack_78;
            func_0x00010889b3f0();
            func_0x000108890eb8();
            bVar2 = pfVar3 == pfStack_80;
          }
        }
        if (!bVar2) break;
        pfVar3 = pfStack_78;
        func_0x00010889b3f0();
        if (pfVar3 == pfStack_60) {
          pfVar3 = param_1;
          func_0x00010889c988();
          pfVar4 = pfStack_78;
          FUN_108895508(pfStack_78);
          func_0x000108895568();
          FUN_10889b420(pfVar3,pfVar4,uStack_50);
          if (((ulong)pfVar3 & 1) != 0) goto LAB_10889c930;
        }
        pfStack_78 = *(float **)pfStack_78;
      } while( true );
    }
  }
  FUN_10889c9a0(afStack_98,param_1,pfStack_60,uStack_58);
  pfVar3 = param_1;
  FUN_10889caa0();
  lVar7 = *(long *)pfVar3;
  Var1 = ZEXT89(pfStack_68);
  pfVar4 = param_1;
  func_0x00010889cab8();
  pfVar3 = pfStack_68;
  if (((float)(unkint9)Var1 * *pfVar4 < (float)(lVar7 + 1)) || (pfStack_68 == (float *)0x0)) {
    pfVar4 = pfStack_68;
    FUN_108892ac0();
    uStack_a0 = (ulong)((uint)pfVar4 ^ 1) | (long)pfVar3 << 1;
    pfVar3 = param_1;
    FUN_10889caa0();
    lVar7 = *(long *)pfVar3;
    pfVar3 = param_1;
    func_0x00010889cab8();
    fVar8 = (float)(lVar7 + 1) / *pfVar3;
    func_0x000108892b00();
    lStack_a8 = (long)fVar8;
    puVar5 = &uStack_a0;
    FUN_108891270(puVar5,&lStack_a8);
    FUN_10889cad0(param_1,*puVar5);
    pfVar3 = param_1;
    FUN_10889b344();
    pfVar4 = pfStack_60;
    pfStack_68 = pfVar3;
    func_0x000108890eb8(pfStack_60,pfVar3);
    pfStack_80 = pfVar4;
  }
  pfVar3 = param_1;
  FUN_10889b3c8(param_1,pfStack_80);
  pfStack_c0 = *(float **)pfVar3;
  if (pfStack_c0 == (float *)0x0) {
    pfVar3 = param_1 + 4;
    func_0x00010889cafc();
    lVar7 = *(long *)pfVar3;
    pfVar4 = afStack_98;
    pfStack_c0 = pfVar3;
    FUN_10889cb20();
    *(long *)pfVar4 = lVar7;
    pfVar3 = afStack_98;
    func_0x00010889cb38();
    func_0x00010889cafc();
    pfVar4 = pfStack_c0;
    *(float **)pfStack_c0 = pfVar3;
    pfVar3 = param_1;
    FUN_10889b3c8(param_1,pfStack_80);
    *(float **)pfVar3 = pfVar4;
    pfVar3 = afStack_98;
    FUN_10889cb20();
    if (*(long *)pfVar3 != 0) {
      pfVar3 = afStack_98;
      func_0x00010889cb38();
      func_0x00010889cafc();
      pfVar4 = afStack_98;
      FUN_10889cb20();
      uVar6 = *(undefined8 *)pfVar4;
      func_0x00010889b3f0(uVar6);
      func_0x000108890eb8();
      pfVar4 = param_1;
      FUN_10889b3c8(param_1,uVar6);
      *(float **)pfVar4 = pfVar3;
    }
  }
  else {
    lVar7 = *(long *)pfStack_c0;
    pfVar3 = afStack_98;
    FUN_10889cb20();
    *(long *)pfVar3 = lVar7;
    pfVar3 = afStack_98;
    func_0x00010889cb38();
    *(float **)pfStack_c0 = pfVar3;
  }
  pfVar3 = afStack_98;
  func_0x00010889cb50();
  pfStack_78 = pfVar3;
  FUN_10889caa0();
  *(long *)param_1 = *(long *)param_1 + 1;
  uStack_69 = 1;
  func_0x00010889cb74(afStack_98);
LAB_10889c930:
  func_0x00010889cba8(auStack_c8,pfStack_78);
  func_0x00010889cbe4(auStack_40,auStack_c8,&uStack_69);
  return auStack_40;
}



/* Entry: 10889c970; end: 10889c99f;  */

long FUN_10889c970(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10889c9a0; end: 10889ca9f;  */

/* WARNING: Removing unreachable block (ram,0x00010889ca68) */

void FUN_10889c9a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [23];
  undefined1 uStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_40 = param_4;
  uStack_38 = param_3;
  uStack_30 = param_2;
  lStack_28 = param_1;
  FUN_1088954f0();
  uStack_49 = 0;
  uStack_48 = param_2;
  FUN_10889cc28(param_2);
  FUN_10889cc58(auStack_60,uStack_48);
  func_0x00010889cca0(param_1,param_2,auStack_60);
  FUN_10889cd18(param_1);
  FUN_10889cce4();
  uVar1 = uStack_48;
  lVar2 = param_1;
  FUN_10889cb20(param_1);
  func_0x000108895568();
  func_0x000108895554();
  FUN_10889cd30(uVar1,lVar2,uStack_40);
  FUN_10889cd60();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 10889caa0; end: 10889cacf;  */

long FUN_10889caa0(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10889cad0; end: 10889cb1f;  */

void FUN_10889cad0(undefined8 param_1,undefined8 param_2)

{
  FUN_10889d0d0(param_1,param_2);
  return;
}



/* Entry: 10889cb20; end: 10889cb73;  */

undefined8 FUN_10889cb20(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10889cb74; end: 10889cc27;  */

undefined8 FUN_10889cb74(undefined8 param_1)

{
  FUN_10889d558(param_1);
  return param_1;
}



/* Entry: 10889cc28; end: 10889cc57;  */

void FUN_10889cc28(undefined8 param_1)

{
  FUN_10889cd78(param_1,1);
  return;
}



/* Entry: 10889cc58; end: 10889cce3;  */

undefined8 FUN_10889cc58(undefined8 param_1,undefined8 param_2)

{
  FUN_10889ce24(param_1,param_2,0);
  return param_1;
}



/* Entry: 10889cce4; end: 10889cd17;  */

void FUN_10889cce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10889cf10(param_1,param_2,param_3);
  return;
}



/* Entry: 10889cd18; end: 10889cd2f;  */

undefined8 FUN_10889cd18(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10889cd30; end: 10889cd5f;  */

void FUN_10889cd30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10889cff0(param_2,param_3);
  return;
}



/* Entry: 10889cd60; end: 10889cd77;  */

long FUN_10889cd60(long param_1)

{
  return param_1 + 8;
}



/* Entry: 10889cd78; end: 10889cdbf;  */

void FUN_10889cd78(ulong param_1,ulong param_2)

{
  FUN_10889cdc0();
  if (param_1 < param_2) {
    func_0x000104bd35f4();
  }
  func_0x00010889cde8(param_2);
  return;
}



/* Entry: 10889cdc0; end: 10889ce23;  */

ulong FUN_10889cdc0(ulong param_1)

{
  FUN_10888fbcc();
  return param_1 / 0x58;
}



/* Entry: 10889ce24; end: 10889ce53;  */

void FUN_10889ce24(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  *param_1 = param_2;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Entry: 10889ce54; end: 10889cedf;  */

undefined8 * FUN_10889ce54(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = param_2;
  param_1[1] = *param_3;
  param_1[2] = param_3[1];
  func_0x00010889ceac((long)param_1 + 0x11);
  return param_1;
}



/* Entry: 10889cee0; end: 10889cf0f;  */

undefined1 * FUN_10889cee0(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != param_1 + 7);
  return param_1;
}



/* Entry: 10889cf10; end: 10889cf43;  */

void FUN_10889cf10(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_10889cf44(param_1,*param_3);
  return;
}



/* Entry: 10889cf44; end: 10889cfcf;  */

undefined8 FUN_10889cf44(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889cf88(param_1,0,param_2);
  return param_1;
}



/* Entry: 10889cfd0; end: 10889cfef;  */

void FUN_10889cfd0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889cff0; end: 10889d047;  */

void FUN_10889cff0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889d01c(param_1,param_2);
  return;
}



/* Entry: 10889d048; end: 10889d0cf;  */

undefined8 FUN_10889d048(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889d084(param_1,param_2);
  return param_1;
}



/* Entry: 10889d0d0; end: 10889d21f;  */

void FUN_10889d0d0(float *param_1,float *param_2)

{
  float *pfVar1;
  long lVar2;
  float **ppfVar3;
  ulong uVar4;
  float fVar5;
  long lStack_50;
  float *pfStack_48;
  float *pfStack_40;
  float *pfStack_38;
  
  pfStack_38 = param_1;
  if (param_2 == (float *)0x1) {
    pfStack_40 = (float *)0x2;
  }
  else {
    pfStack_40 = param_2;
    if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      pfStack_40 = param_2;
    }
  }
  pfVar1 = param_1;
  FUN_10889b344();
  pfStack_48 = pfVar1;
  if (pfVar1 < pfStack_40) {
    FUN_10889d220(param_1,pfStack_40);
  }
  else if (pfStack_40 < pfVar1) {
    FUN_108892ac0();
    if (((ulong)pfVar1 & 1) == 0) {
      pfVar1 = param_1;
      FUN_10889caa0();
      uVar4 = *(ulong *)pfVar1;
      pfVar1 = param_1;
      func_0x00010889cab8();
      fVar5 = (float)uVar4 / *pfVar1;
      func_0x000108892b00();
      lVar2 = (long)fVar5;
      __ZNSt3__112__next_primeEm();
    }
    else {
      pfVar1 = param_1;
      FUN_10889caa0();
      uVar4 = *(ulong *)pfVar1;
      pfVar1 = param_1;
      func_0x00010889cab8();
      fVar5 = (float)uVar4 / *pfVar1;
      func_0x000108892b00();
      lVar2 = (long)fVar5;
      FUN_108892b18();
    }
    ppfVar3 = &pfStack_40;
    lStack_50 = lVar2;
    FUN_108891270(ppfVar3,&lStack_50);
    pfStack_40 = *ppfVar3;
    if (pfStack_40 < pfStack_48) {
      FUN_10889d220(param_1,pfStack_40);
    }
  }
  return;
}



/* Entry: 10889d220; end: 10889d423;  */

void FUN_10889d220(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puStack_60;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong uStack_40;
  
  puVar2 = param_1;
  FUN_10889d424();
  FUN_1088957d4();
  if (param_2 == 0) {
    puVar2 = (ulong *)0x0;
  }
  else {
    func_0x00010889d484(puVar2,param_2);
  }
  func_0x00010889d43c(param_1,puVar2);
  puVar2 = param_1;
  FUN_10889d424();
  func_0x0001088957e8();
  *puVar2 = param_2;
  if (param_2 != 0) {
    for (uStack_40 = 0; uStack_40 < param_2; uStack_40 = uStack_40 + 1) {
      puVar2 = param_1;
      FUN_10889b3c8(param_1,uStack_40);
      *puVar2 = 0;
    }
    puVar2 = param_1 + 2;
    func_0x00010889cafc();
    puStack_48 = (ulong *)*puVar2;
    if (puStack_48 != (ulong *)0x0) {
      puStack_60 = puStack_48;
      func_0x00010889b3f0();
      func_0x000108890eb8();
      puVar1 = param_1;
      FUN_10889b3c8(param_1,puStack_60);
      *puVar1 = (ulong)puVar2;
      puStack_50 = (ulong *)*puStack_48;
      while (puStack_50 != (ulong *)0x0) {
        puVar2 = puStack_50;
        func_0x00010889b3f0();
        func_0x000108890eb8();
        if (puVar2 == puStack_60) {
          puStack_48 = puStack_50;
        }
        else {
          puVar1 = param_1;
          FUN_10889b3c8(param_1,puVar2);
          if (*puVar1 == 0) {
            puVar1 = param_1;
            FUN_10889b3c8(param_1,puVar2);
            *puVar1 = (ulong)puStack_48;
            puStack_48 = puStack_50;
            puStack_60 = puVar2;
          }
          else {
            *puStack_48 = *puStack_50;
            puVar1 = param_1;
            FUN_10889b3c8(param_1,puVar2);
            *puStack_50 = *(ulong *)*puVar1;
            puVar1 = param_1;
            FUN_10889b3c8(param_1,puVar2);
            *(ulong **)*puVar1 = puStack_50;
          }
        }
        puStack_50 = (ulong *)*puStack_48;
      }
    }
  }
  return;
}



/* Entry: 10889d424; end: 10889d43b;  */

long FUN_10889d424(long param_1)

{
  return param_1 + 8;
}



/* Entry: 10889d43c; end: 10889d4af;  */

void FUN_10889d43c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_108895744(param_1 + 1,lVar1);
  }
  return;
}



/* Entry: 10889d4b0; end: 10889d4f7;  */

void FUN_10889d4b0(ulong param_1,ulong param_2)

{
  FUN_10889d4f8();
  if (param_1 < param_2) {
    func_0x000104bd35f4();
  }
  func_0x00010889d520(param_2);
  return;
}



/* Entry: 10889d4f8; end: 10889d557;  */

ulong FUN_10889d4f8(ulong param_1)

{
  FUN_10888fbcc();
  return param_1 >> 3;
}



/* Entry: 10889d558; end: 10889d58b;  */

undefined8 FUN_10889d558(undefined8 param_1)

{
  FUN_10889d58c(param_1);
  return param_1;
}



/* Entry: 10889d58c; end: 10889d5d3;  */

void FUN_10889d58c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10889d5d4(param_1 + 1,lVar1);
  }
  return;
}



/* Entry: 10889d5d4; end: 10889d647;  */

void FUN_10889d5d4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    uVar2 = *param_1;
    lVar1 = param_2;
    func_0x000108895568(param_2);
    func_0x000108895554();
    func_0x00010889552c(uVar2,lVar1);
    FUN_108895580(param_2);
  }
  if (param_2 != 0) {
    func_0x0001088955a4(*param_1,param_2);
  }
  return;
}



/* Entry: 10889d648; end: 10889d667;  */

void FUN_10889d648(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889d668; end: 10889d69f;  */

void FUN_10889d668(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  *param_1 = *param_2;
  *(byte *)(param_1 + 1) = *param_3 & 1;
  return;
}



/* Entry: 10889d6a0; end: 10889d733;  */

long FUN_10889d6a0(long param_1,undefined8 *param_2)

{
  func_0x00010889d6f8(param_1,*param_2);
  *(byte *)(param_1 + 8) = *(byte *)(param_2 + 1) & 1;
  return param_1;
}



/* Entry: 10889d734; end: 10889d753;  */

void FUN_10889d734(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889d754; end: 10889d7ab;  */

uint FUN_10889d754(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  uStack_30 = param_2;
  uStack_28 = param_1;
  FUN_1086af50c(param_1,param_2);
  uStack_38 = uVar1;
  func_0x00010889d7e0();
  puVar2 = &uStack_38;
  uStack_40 = param_1;
  func_0x00010889d7ac(puVar2,&uStack_40);
  return (uint)puVar2 & 1;
}



/* Entry: 10889d7ac; end: 10889d80b;  */

uint FUN_10889d7ac(undefined8 param_1,undefined8 param_2)

{
  FUN_10889d80c(param_1,param_2);
  return ((uint)param_1 ^ 1) & 1;
}



/* Entry: 10889d80c; end: 10889d83b;  */

bool FUN_10889d80c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10889d83c; end: 10889d877;  */

undefined8 FUN_10889d83c(undefined8 param_1,undefined8 param_2)

{
  FUN_10889d878(param_1,param_2);
  return param_1;
}



/* Entry: 10889d878; end: 10889d897;  */

void FUN_10889d878(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889d898; end: 10889dc0f;  */

undefined1  [16]
FUN_10889d898(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unkuint9 Var1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined1 auStack_d8 [8];
  float *pfStack_d0;
  long lStack_b8;
  ulong uStack_b0;
  float afStack_a8 [6];
  float *pfStack_90;
  float *pfStack_88;
  undefined1 uStack_79;
  float *pfStack_78;
  float *pfStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  float *pfStack_48;
  undefined1 auStack_40 [16];
  
  puStack_58 = &UNK_10dd5b8f9;
  pfVar3 = param_1;
  uStack_68 = param_4;
  uStack_60 = param_3;
  uStack_50 = param_2;
  pfStack_48 = param_1;
  FUN_10889c970();
  FUN_10889b39c();
  pfVar4 = param_1;
  pfStack_70 = pfVar3;
  FUN_10889b344();
  uStack_79 = 0;
  pfStack_78 = pfVar4;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfStack_70;
    func_0x000108890eb8(pfStack_70,pfVar4);
    pfVar4 = param_1;
    pfStack_90 = pfVar3;
    FUN_10889b3c8(param_1,pfVar3);
    pfStack_88 = *(float **)pfVar4;
    if (pfStack_88 != (float *)0x0) {
      pfStack_88 = *(float **)pfStack_88;
      do {
        bVar2 = false;
        if (pfStack_88 != (float *)0x0) {
          pfVar3 = pfStack_88;
          func_0x00010889b3f0();
          bVar2 = true;
          if (pfVar3 != pfStack_70) {
            pfVar3 = pfStack_88;
            func_0x00010889b3f0();
            func_0x000108890eb8();
            bVar2 = pfVar3 == pfStack_90;
          }
        }
        if (!bVar2) break;
        pfVar3 = pfStack_88;
        func_0x00010889b3f0();
        if (pfVar3 == pfStack_70) {
          pfVar3 = param_1;
          func_0x00010889c988();
          pfVar4 = pfStack_88;
          FUN_108895508(pfStack_88);
          func_0x000108895568();
          FUN_10889b420(pfVar3,pfVar4,uStack_50);
          if (((ulong)pfVar3 & 1) != 0) goto LAB_10889dbd0;
        }
        pfStack_88 = *(float **)pfStack_88;
      } while( true );
    }
  }
  FUN_10889dc40(afStack_a8,param_1,pfStack_70,puStack_58,uStack_60,uStack_68);
  pfVar3 = param_1;
  FUN_10889caa0();
  lVar7 = *(long *)pfVar3;
  Var1 = ZEXT89(pfStack_78);
  pfVar4 = param_1;
  func_0x00010889cab8();
  pfVar3 = pfStack_78;
  if (((float)(unkint9)Var1 * *pfVar4 < (float)(lVar7 + 1)) || (pfStack_78 == (float *)0x0)) {
    pfVar4 = pfStack_78;
    FUN_108892ac0();
    uStack_b0 = (ulong)((uint)pfVar4 ^ 1) | (long)pfVar3 << 1;
    pfVar3 = param_1;
    FUN_10889caa0();
    lVar7 = *(long *)pfVar3;
    pfVar3 = param_1;
    func_0x00010889cab8();
    fVar8 = (float)(lVar7 + 1) / *pfVar3;
    func_0x000108892b00();
    lStack_b8 = (long)fVar8;
    puVar5 = &uStack_b0;
    FUN_108891270(puVar5,&lStack_b8);
    FUN_10889cad0(param_1,*puVar5);
    pfVar3 = param_1;
    FUN_10889b344();
    pfVar4 = pfStack_70;
    pfStack_78 = pfVar3;
    func_0x000108890eb8(pfStack_70,pfVar3);
    pfStack_90 = pfVar4;
  }
  pfVar3 = param_1;
  FUN_10889b3c8(param_1,pfStack_90);
  pfStack_d0 = *(float **)pfVar3;
  if (pfStack_d0 == (float *)0x0) {
    pfVar3 = param_1 + 4;
    func_0x00010889cafc();
    lVar7 = *(long *)pfVar3;
    pfVar4 = afStack_a8;
    pfStack_d0 = pfVar3;
    FUN_10889cb20();
    *(long *)pfVar4 = lVar7;
    pfVar3 = afStack_a8;
    func_0x00010889cb38();
    func_0x00010889cafc();
    pfVar4 = pfStack_d0;
    *(float **)pfStack_d0 = pfVar3;
    pfVar3 = param_1;
    FUN_10889b3c8(param_1,pfStack_90);
    *(float **)pfVar3 = pfVar4;
    pfVar3 = afStack_a8;
    FUN_10889cb20();
    if (*(long *)pfVar3 != 0) {
      pfVar3 = afStack_a8;
      func_0x00010889cb38();
      func_0x00010889cafc();
      pfVar4 = afStack_a8;
      FUN_10889cb20();
      uVar6 = *(undefined8 *)pfVar4;
      func_0x00010889b3f0(uVar6);
      func_0x000108890eb8();
      pfVar4 = param_1;
      FUN_10889b3c8(param_1,uVar6);
      *(float **)pfVar4 = pfVar3;
    }
  }
  else {
    lVar7 = *(long *)pfStack_d0;
    pfVar3 = afStack_a8;
    FUN_10889cb20();
    *(long *)pfVar3 = lVar7;
    pfVar3 = afStack_a8;
    func_0x00010889cb38();
    *(float **)pfStack_d0 = pfVar3;
  }
  pfVar3 = afStack_a8;
  func_0x00010889cb50();
  pfStack_88 = pfVar3;
  FUN_10889caa0();
  *(long *)param_1 = *(long *)param_1 + 1;
  uStack_79 = 1;
  func_0x00010889cb74(afStack_a8);
LAB_10889dbd0:
  func_0x00010889cba8(auStack_d8,pfStack_88);
  func_0x00010889cbe4(auStack_40,auStack_d8,&uStack_79);
  return auStack_40;
}



/* Entry: 10889dc10; end: 10889dc3f;  */

void FUN_10889dc10(undefined8 *param_1)

{
  FUN_108895508(*param_1);
  func_0x000108895568();
  FUN_10889dee0();
  return;
}


