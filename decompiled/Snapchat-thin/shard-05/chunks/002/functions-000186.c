/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c5ffd8; end: 103c6001b;  */

undefined8 * FUN_103c5ffd8(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103c6001c; end: 103c600b3;  */

int FUN_103c6001c(int *param_1,int param_2)

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



/* Entry: 103c600b4; end: 103c6015f;  */

void FUN_103c600b4(void)

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



/* Entry: 103c60160; end: 103c60183;  */

void FUN_103c60160(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103c60184; end: 103c60223;  */

void FUN_103c60184(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c60224; end: 103c60227;  */

void FUN_103c60224(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a7a0;
  func_0x000107c61520(&UNK_10dc6a7a0,&UNK_1106f0268);
  puRam0000000112ffc298 = puVar1;
  return;
}



/* Entry: 103c60228; end: 103c60267;  */

void FUN_103c60228(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a7a0;
  func_0x000107c61520(&UNK_10dc6a7a0,&UNK_1106f0268);
  puRam0000000112ffc298 = puVar1;
  return;
}



/* Entry: 103c60268; end: 103c6026b;  */

void FUN_103c60268(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a848;
  func_0x000107c61520(&UNK_10dc6a848,&UNK_1106f02f8);
  puRam0000000112ffc2a0 = puVar1;
  return;
}



/* Entry: 103c6026c; end: 103c602ab;  */

void FUN_103c6026c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a848;
  func_0x000107c61520(&UNK_10dc6a848,&UNK_1106f02f8);
  puRam0000000112ffc2a0 = puVar1;
  return;
}



/* Entry: 103c602ac; end: 103c60513;  */

void FUN_103c602ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103c60514; end: 103c609a3;  */

long * FUN_103c60514(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    func_0x000107c614c4(param_2,param_3);
    bVar3 = (int)plVar4 != 1;
    if (bVar3) {
      lVar5 = *param_2;
      lVar1 = param_2[1];
      func_0x00010006c00c(lVar5,lVar1);
      *param_1 = lVar5;
      param_1[1] = lVar1;
    }
    else {
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    }
    func_0x000107c6159c(param_1,param_3,!bVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103c609a4; end: 103c609b7;  */

bool FUN_103c609a4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c609b8; end: 103c60a63;  */

void FUN_103c609b8(void)

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



/* Entry: 103c60a64; end: 103c60a67;  */

void FUN_103c60a64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a8d0;
  func_0x000107c61520(&UNK_10dc6a8d0,&UNK_1106f03e8);
  puRam0000000112ffc350 = puVar1;
  return;
}



/* Entry: 103c60a68; end: 103c60aa7;  */

void FUN_103c60a68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a8d0;
  func_0x000107c61520(&UNK_10dc6a8d0,&UNK_1106f03e8);
  puRam0000000112ffc350 = puVar1;
  return;
}



/* Entry: 103c60aa8; end: 103c60c0b;  */

int FUN_103c60aa8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103c60b24;
        goto LAB_103c60b08;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103c60b08:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_103c60b24:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103c60c0c; end: 103c60d8b;  */

void FUN_103c60c0c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_103c61120();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar7 = (undefined8 *)(puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_103c61158();
  puVar4 = puVar7;
  func_0x000107c614c4(puVar7,lVar3);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x20))(puVar6,puVar7,lVar2);
    func_0x000107c60690(0);
    uVar5 = 0x112e092e0;
    FUN_103c611c8(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVSHAAMc_1103509a0);
    func_0x000107c5fa50(param_1,lVar2,uVar5);
    (**(code **)(lVar8 + 8))(puVar6,lVar2);
  }
  else if ((int)puVar4 == 1) {
    uVar5 = *puVar7;
    uVar1 = puVar7[1];
    func_0x000107c60690(1);
    func_0x000107c5ee34(param_1,uVar5,uVar1);
    func_0x00010006c090(uVar5,uVar1);
  }
  else {
    uVar5 = *puVar7;
    uVar1 = puVar7[1];
    func_0x000107c60690(2);
    func_0x000107c5fb58(param_1,uVar5,uVar1);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 103c60d8c; end: 103c60dc7;  */

void FUN_103c60d8c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_103c60c0c(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c60dc8; end: 103c60dcb;  */

void FUN_103c60dc8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_103c61120();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar7 = (undefined8 *)(puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_103c61158();
  puVar4 = puVar7;
  func_0x000107c614c4(puVar7,lVar3);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x20))(puVar6,puVar7,lVar2);
    func_0x000107c60690(0);
    uVar5 = 0x112e092e0;
    FUN_103c611c8(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVSHAAMc_1103509a0);
    func_0x000107c5fa50(param_1,lVar2,uVar5);
    (**(code **)(lVar8 + 8))(puVar6,lVar2);
  }
  else if ((int)puVar4 == 1) {
    uVar5 = *puVar7;
    uVar1 = puVar7[1];
    func_0x000107c60690(1);
    func_0x000107c5ee34(param_1,uVar5,uVar1);
    func_0x00010006c090(uVar5,uVar1);
  }
  else {
    uVar5 = *puVar7;
    uVar1 = puVar7[1];
    func_0x000107c60690(2);
    func_0x000107c5fb58(param_1,uVar5,uVar1);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 103c60dcc; end: 103c60e03;  */

void FUN_103c60dcc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_103c60c0c(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c60e04; end: 103c60e07;  */

uint FUN_103c60e04(ulong param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  ulong auStack_70 [2];
  
  lVar6 = 0;
  auStack_70[0] = param_1;
  auStack_70[1] = param_2;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar16 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar16 - extraout_x12;
  lVar7 = 0;
  FUN_103c61120();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar19 = (ulong *)(lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined8 *)((long)puVar19 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (long)puVar14 - extraout_x12_01;
  lVar8 = 0x112ffc408;
  func_0x0001000285a8(0x112ffc408,&UNK_10dc6aa18);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar18 - extraout_x8_01;
  puVar1 = (ulong *)(lVar11 + *(int *)(lVar8 + 0x30));
  FUN_103c61158(auStack_70[0],lVar11);
  FUN_103c61158(auStack_70[1],puVar1);
  lVar8 = lVar11;
  func_0x000107c614c4(lVar11,lVar7);
  if ((int)lVar8 == 0) {
    FUN_103c61158(lVar11,lVar18);
    puVar19 = puVar1;
    func_0x000107c614c4(puVar1,lVar7);
    if ((int)puVar19 == 0) {
      pcVar15 = *(code **)(lVar12 + 0x20);
      (*pcVar15)(lVar17,lVar18,lVar6);
      (*pcVar15)(lVar16,puVar1,lVar6);
      lVar8 = lVar17;
      func_0x000107c5edac(lVar17,lVar16);
      uVar13 = (uint)lVar8;
      pcVar15 = *(code **)(lVar12 + 8);
      (*pcVar15)(lVar16,lVar6);
      (*pcVar15)(lVar17,lVar6);
LAB_103c610d4:
      FUN_103c614e0(lVar11);
      goto LAB_103c610fc;
    }
    (**(code **)(lVar12 + 8))(lVar18,lVar6);
LAB_103c61074:
    func_0x000103c616f4(lVar11);
  }
  else {
    if ((int)lVar8 == 1) {
      FUN_103c61158(lVar11,puVar14);
      uVar2 = *puVar14;
      uVar3 = puVar14[1];
      puVar19 = puVar1;
      func_0x000107c614c4(puVar1,lVar7);
      if ((int)puVar19 == 1) {
        uVar10 = *puVar1;
        uVar4 = puVar1[1];
        uVar9 = uVar2;
        func_0x000100e25fcc(uVar2,uVar3,uVar10,uVar4);
        uVar13 = (uint)uVar9;
        func_0x00010006c090(uVar10,uVar4);
        func_0x00010006c090(uVar2,uVar3);
        goto LAB_103c610d4;
      }
      func_0x00010006c090(uVar2,uVar3);
      goto LAB_103c61074;
    }
    FUN_103c61158(lVar11,puVar19);
    uVar10 = *puVar19;
    uVar4 = puVar19[1];
    puVar19 = puVar1;
    func_0x000107c614c4(puVar1,lVar7);
    if ((int)puVar19 != 2) {
      func_0x000107c6142c(uVar4);
      goto LAB_103c61074;
    }
    uVar5 = puVar1[1];
    if (uVar10 == *puVar1 && uVar4 == uVar5) {
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar5);
LAB_103c610f0:
      FUN_103c614e0(lVar11);
      uVar13 = 1;
      goto LAB_103c610fc;
    }
    func_0x000107c605b8(uVar10,uVar4,*puVar1,uVar5,0);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar5);
    if ((uVar10 & 1) != 0) goto LAB_103c610f0;
    FUN_103c614e0(lVar11);
  }
  uVar13 = 0;
LAB_103c610fc:
  return uVar13 & 1;
}



/* Entry: 103c60e08; end: 103c6111f;  */

uint FUN_103c60e08(ulong param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  ulong auStack_70 [2];
  
  lVar6 = 0;
  auStack_70[0] = param_1;
  auStack_70[1] = param_2;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar16 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar16 - extraout_x12;
  lVar7 = 0;
  FUN_103c61120();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar19 = (ulong *)(lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined8 *)((long)puVar19 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (long)puVar14 - extraout_x12_01;
  lVar8 = 0x112ffc408;
  func_0x0001000285a8(0x112ffc408,&UNK_10dc6aa18);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar18 - extraout_x8_01;
  puVar1 = (ulong *)(lVar11 + *(int *)(lVar8 + 0x30));
  FUN_103c61158(auStack_70[0],lVar11);
  FUN_103c61158(auStack_70[1],puVar1);
  lVar8 = lVar11;
  func_0x000107c614c4(lVar11,lVar7);
  if ((int)lVar8 == 0) {
    FUN_103c61158(lVar11,lVar18);
    puVar19 = puVar1;
    func_0x000107c614c4(puVar1,lVar7);
    if ((int)puVar19 == 0) {
      pcVar15 = *(code **)(lVar12 + 0x20);
      (*pcVar15)(lVar17,lVar18,lVar6);
      (*pcVar15)(lVar16,puVar1,lVar6);
      lVar8 = lVar17;
      func_0x000107c5edac(lVar17,lVar16);
      uVar13 = (uint)lVar8;
      pcVar15 = *(code **)(lVar12 + 8);
      (*pcVar15)(lVar16,lVar6);
      (*pcVar15)(lVar17,lVar6);
LAB_103c610d4:
      FUN_103c614e0(lVar11);
      goto LAB_103c610fc;
    }
    (**(code **)(lVar12 + 8))(lVar18,lVar6);
LAB_103c61074:
    func_0x000103c616f4(lVar11);
  }
  else {
    if ((int)lVar8 == 1) {
      FUN_103c61158(lVar11,puVar14);
      uVar2 = *puVar14;
      uVar3 = puVar14[1];
      puVar19 = puVar1;
      func_0x000107c614c4(puVar1,lVar7);
      if ((int)puVar19 == 1) {
        uVar10 = *puVar1;
        uVar4 = puVar1[1];
        uVar9 = uVar2;
        func_0x000100e25fcc(uVar2,uVar3,uVar10,uVar4);
        uVar13 = (uint)uVar9;
        func_0x00010006c090(uVar10,uVar4);
        func_0x00010006c090(uVar2,uVar3);
        goto LAB_103c610d4;
      }
      func_0x00010006c090(uVar2,uVar3);
      goto LAB_103c61074;
    }
    FUN_103c61158(lVar11,puVar19);
    uVar10 = *puVar19;
    uVar4 = puVar19[1];
    puVar19 = puVar1;
    func_0x000107c614c4(puVar1,lVar7);
    if ((int)puVar19 != 2) {
      func_0x000107c6142c(uVar4);
      goto LAB_103c61074;
    }
    uVar5 = puVar1[1];
    if (uVar10 == *puVar1 && uVar4 == uVar5) {
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar5);
LAB_103c610f0:
      FUN_103c614e0(lVar11);
      uVar13 = 1;
      goto LAB_103c610fc;
    }
    func_0x000107c605b8(uVar10,uVar4,*puVar1,uVar5,0);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar5);
    if ((uVar10 & 1) != 0) goto LAB_103c610f0;
    FUN_103c614e0(lVar11);
  }
  uVar13 = 0;
LAB_103c610fc:
  return uVar13 & 1;
}



/* Entry: 103c61120; end: 103c61157;  */

void FUN_103c61120(undefined8 param_1)

{
  if (lRam0000000112ffc3d0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7bcc2c);
  return;
}



/* Entry: 103c61158; end: 103c6119b;  */

undefined8 FUN_103c61158(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103c61120();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103c6119c; end: 103c611c7;  */

void FUN_103c6119c(void)

{
  FUN_103c611c8(0x112ffc358,FUN_103c61120,&UNK_10dc6a9a0);
  return;
}



/* Entry: 103c611c8; end: 103c61207;  */

void FUN_103c611c8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103c61208; end: 103c612ef;  */

long * FUN_103c61208(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar3 == 2) {
      lVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar4;
      func_0x000107c61434();
      uVar5 = 2;
    }
    else if ((int)plVar3 == 1) {
      lVar4 = *param_2;
      lVar1 = param_2[1];
      func_0x00010006c00c(lVar4,lVar1);
      *param_1 = lVar4;
      param_1[1] = lVar1;
      uVar5 = 1;
    }
    else {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
      uVar5 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar5);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar4 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103c612f0; end: 103c61367;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103c612f0(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  
  puVar3 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)puVar3;
  if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
    return;
  }
  if (iVar1 == 1) {
    uVar2 = *param_1;
    uVar5 = (uint)(param_1[1] >> 0x3e);
    if (uVar5 == 1) {
      uVar2 = param_1[1] & 0x3fffffffffffffff;
    }
    else if (uVar5 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  if (iVar1 != 0) {
    return;
  }
  lVar4 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000103c61338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
  return;
}



/* Entry: 103c61368; end: 103c614df;  */

undefined8 * FUN_103c61368(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar3 == 2) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434();
  }
  else if ((int)puVar3 == 1) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    func_0x00010006c00c(uVar1,uVar2);
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  else {
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  }
  func_0x000107c6159c(param_1,param_3,puVar3);
  return param_1;
}



/* Entry: 103c614e0; end: 103c6151b;  */

undefined8 FUN_103c614e0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103c61120();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103c6151c; end: 103c6164b;  */

undefined8 FUN_103c6151c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
  func_0x000107c6159c(param_1,param_3,0);
  return param_1;
}



/* Entry: 103c6164c; end: 103c6167b;  */

void FUN_103c6164c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103c61654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 103c6167c; end: 103c6173b;  */

void FUN_103c6167c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dc6a9e8;
    puStack_28 = &UNK_10dc6aa00;
    func_0x000107c61528(param_1,0x100,3,&lStack_38);
  }
  return;
}



/* Entry: 103c6173c; end: 103c61773;  */

void FUN_103c6173c(undefined8 param_1)

{
  if (lRam0000000112ffc468 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7bcc54);
  return;
}



/* Entry: 103c61774; end: 103c618d7;  */

long * FUN_103c61774(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    uVar6 = 0;
    FUN_103c61120(0);
    plVar7 = param_2;
    func_0x000107c614c4(param_2,uVar6);
    if ((int)plVar7 == 2) {
      lVar8 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar8;
      func_0x000107c61434();
    }
    else if ((int)plVar7 == 1) {
      lVar8 = *param_2;
      lVar3 = param_2[1];
      func_0x00010006c00c(lVar8,lVar3);
      *param_1 = lVar8;
      param_1[1] = lVar3;
    }
    else {
      lVar8 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
    }
    func_0x000107c6159c(param_1,uVar6,plVar7);
    iVar4 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    lVar8 = puVar2[1];
    if (lVar8 == 0) {
      uVar6 = *puVar2;
      uVar11 = puVar2[3];
      uVar10 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar6;
      puVar1[3] = uVar11;
      puVar1[2] = uVar10;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar8;
      uVar6 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar6;
      func_0x000107c61434();
      func_0x000107c61434(uVar6);
    }
    iVar4 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103c618d8; end: 103c61977;  */

/* WARNING: Possible PIC construction at 0x000103c61958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c61944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c6195c) */

void FUN_103c618d8(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = 0;
  FUN_103c61120(0);
  puVar3 = param_1;
  func_0x000107c614c4(param_1,uVar2);
  iVar1 = (int)puVar3;
  if (iVar1 == 2) {
    lVar4 = param_1[1];
  }
  else {
    if (iVar1 == 1) {
      func_0x00010006c090(*param_1,param_1[1]);
    }
    else if (iVar1 == 0) {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
    }
    lVar4 = *(long *)((long)param_1 + (long)*(int *)(param_2 + 0x18) + 8);
    if (lVar4 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
  return;
}



/* Entry: 103c61978; end: 103c61c77;  */

undefined8 * FUN_103c61978(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = 0;
  FUN_103c61120(0);
  puVar4 = param_2;
  func_0x000107c614c4(param_2,uVar3);
  if ((int)puVar4 == 2) {
    uVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    func_0x000107c61434();
  }
  else if ((int)puVar4 == 1) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    func_0x00010006c00c(uVar6,uVar7);
    *param_1 = uVar6;
    param_1[1] = uVar7;
  }
  else {
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
  }
  func_0x000107c6159c(param_1,uVar3,puVar4);
  iVar2 = *(int *)(param_3 + 0x18);
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar4 = *puVar1;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar1 + 1);
  puVar4 = (undefined8 *)((long)param_1 + (long)iVar2);
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar2);
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    uVar3 = *puVar1;
    uVar7 = puVar1[3];
    uVar6 = puVar1[2];
    puVar4[1] = puVar1[1];
    *puVar4 = uVar3;
    puVar4[3] = uVar7;
    puVar4[2] = uVar6;
  }
  else {
    *puVar4 = *puVar1;
    puVar4[1] = lVar5;
    uVar3 = puVar1[3];
    puVar4[2] = puVar1[2];
    puVar4[3] = uVar3;
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
  }
  iVar2 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  return param_1;
}



/* Entry: 103c61c78; end: 103c61cab;  */

undefined8 FUN_103c61c78(undefined8 param_1)

{
  (*(code *)(undefined *)0x103c5ff08)();
  return param_1;
}



/* Entry: 103c61cac; end: 103c61d8b;  */

long FUN_103c61cac(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = 0;
  FUN_103c61120();
  lVar5 = param_2;
  func_0x000107c614c4(param_2,lVar4);
  if ((int)lVar5 == 0) {
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
    func_0x000107c6159c(param_1,lVar4,0);
  }
  else {
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar6 = *puVar2;
  uVar8 = puVar2[3];
  uVar7 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x24));
  return param_1;
}



/* Entry: 103c61d8c; end: 103c61ebb;  */

long FUN_103c61d8c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 != param_2) {
    FUN_103c614e0(param_1);
    lVar4 = 0;
    FUN_103c61120();
    lVar6 = param_2;
    func_0x000107c614c4(param_2,lVar4);
    if ((int)lVar6 == 0) {
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x20))(param_1,param_2,lVar6);
      func_0x000107c6159c(param_1,lVar4,0);
    }
    else {
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
  }
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  if (puVar1[1] != 0) {
    lVar6 = puVar2[1];
    if (lVar6 != 0) {
      *puVar1 = *puVar2;
      puVar1[1] = lVar6;
      func_0x000107c6142c();
      uVar7 = puVar2[3];
      uVar5 = puVar1[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar7;
      func_0x000107c6142c(uVar5);
      goto LAB_103c61e84;
    }
    FUN_103c61c78(puVar1);
  }
  uVar7 = *puVar2;
  uVar8 = puVar2[3];
  uVar5 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar8;
  puVar1[2] = uVar5;
LAB_103c61e84:
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x24));
  return param_1;
}



/* Entry: 103c61ebc; end: 103c61ed3;  */

void FUN_103c61ebc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103c61ed4; end: 103c61f6f;  */

void FUN_103c61ed4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_103c61120();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10dc6aa30;
    puStack_40 = &UNK_10dc6aa48;
    puStack_38 = &UNK_10dc6aa60;
    puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = &UNK_10dc6aa78;
    func_0x000107c6153c(param_1,0x100,6,&lStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 103c61f70; end: 103c61f83;  */

bool FUN_103c61f70(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c61f84; end: 103c6202f;  */

void FUN_103c61f84(void)

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



/* Entry: 103c62030; end: 103c62033;  */

void FUN_103c62030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc4b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6aaa4;
  func_0x000107c61520(&UNK_10dc6aaa4,&UNK_1106f04e8);
  puRam0000000112ffc4b0 = puVar1;
  return;
}



/* Entry: 103c62034; end: 103c62073;  */

void FUN_103c62034(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc4b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6aaa4;
  func_0x000107c61520(&UNK_10dc6aaa4,&UNK_1106f04e8);
  puRam0000000112ffc4b0 = puVar1;
  return;
}



/* Entry: 103c62074; end: 103c621d7;  */

int FUN_103c62074(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103c620f0;
        goto LAB_103c620d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103c620d4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103c620f0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103c621d8; end: 103c6227f;  */

int FUN_103c621d8(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x12] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c62280; end: 103c6228f;  */

void FUN_103c62280(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 103c62290; end: 103c622bf;  */

void FUN_103c62290(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103c624f0();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103c622c0; end: 103c622c7;  */

undefined8 FUN_103c622c0(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 103c622c8; end: 103c6233b;  */

void FUN_103c622c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ffc5d0;
  func_0x0001000285a8(0x112ffc5d0,&UNK_10dc6ab40);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c6233c; end: 103c62347;  */

void FUN_103c6233c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103c62348; end: 103c623f3;  */

void FUN_103c62348(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c623f4; end: 103c62407;  */

bool FUN_103c623f4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c62408; end: 103c6244f;  */

void FUN_103c62408(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc6acb0,0x8f,2);
  uRam000000011380d1b0 = uStack_38;
  uRam000000011380d1a8 = uStack_40;
  uRam000000011380d1c0 = uStack_28;
  uRam000000011380d1b8 = uStack_30;
  uRam000000011380d1d0 = uStack_18;
  uRam000000011380d1c8 = uStack_20;
  return;
}



/* Entry: 103c62450; end: 103c624ef;  */

/* WARNING: Possible PIC construction at 0x000103c6249c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c624ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c624a0) */
/* WARNING: Removing unreachable block (ram,0x000103c624b0) */

void FUN_103c62450(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffc5d8 != -1) {
    func_0x000107c61568(0x112ffc5d8,FUN_103c62408);
  }
  uVar5 = uRam000000011380d1d0;
  uVar4 = uRam000000011380d1c8;
  uVar3 = uRam000000011380d1c0;
  uVar2 = uRam000000011380d1b8;
  uVar1 = uRam000000011380d1b0;
  *param_1 = uRam000000011380d1a8;
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



/* Entry: 103c624f0; end: 103c624fb;  */

void FUN_103c624f0(void)

{
  return;
}



/* Entry: 103c624fc; end: 103c62527;  */

void FUN_103c624fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c62528();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103c62568();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103c62528; end: 103c625a7;  */

void FUN_103c62528(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc5e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6abe0;
  func_0x000107c61520(&UNK_10dc6abe0,&UNK_1106f06b0);
  puRam0000000112ffc5e0 = puVar1;
  return;
}



/* Entry: 103c625a8; end: 103c625ab;  */

void FUN_103c625a8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ffc5f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ffc5f8;
  func_0x00010002969c(0x112ffc5f8,&UNK_10dc6ab68);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ffc5f0 = puVar2;
  return;
}



/* Entry: 103c625ac; end: 103c625fb;  */

void FUN_103c625ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ffc5f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ffc5f8;
  func_0x00010002969c(0x112ffc5f8,&UNK_10dc6ab68);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ffc5f0 = puVar2;
  return;
}



/* Entry: 103c625fc; end: 103c625ff;  */

void FUN_103c625fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6ac20;
  func_0x000107c61520(&UNK_10dc6ac20,&UNK_1106f06b0);
  puRam0000000112ffc600 = puVar1;
  return;
}



/* Entry: 103c62600; end: 103c6263f;  */

void FUN_103c62600(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6ac20;
  func_0x000107c61520(&UNK_10dc6ac20,&UNK_1106f06b0);
  puRam0000000112ffc600 = puVar1;
  return;
}



/* Entry: 103c62640; end: 103c626df;  */

int FUN_103c62640(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103c626e0; end: 103c6274b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c626e0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103c62ad4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ffc610) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103c6274c; end: 103c627b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c6274c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ffc610) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c627b8; end: 103c62817; -[_TtC42AddFriendsTrayScopedFactoryServiceProvider28AddFriendsTrayScopedServices init] */

void FUN_103c627b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsTrayScopedFactoryServiceProvider.AddFriendsTrayScopedServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c627e4);
  (*pcVar1)();
}



/* Entry: 103c62818; end: 103c62827; -[_TtC42AddFriendsTrayScopedFactoryServiceProvider28AddFriendsTrayScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c62818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ffc610));
  return;
}



/* Entry: 103c62828; end: 103c62893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c62828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106f0948;
  func_0x000107c613fc(&UNK_1106f0948,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  FUN_103dc513c(FUN_103c62b6c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c62894; end: 103c6292f;  */

void FUN_103c62894(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106f0858;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106f0858;
  return;
}



/* Entry: 103c62930; end: 103c62967;  */

void FUN_103c62930(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 103c62968; end: 103c6296f;  */

undefined8 FUN_103c62968(void)

{
  return 0x1b;
}



/* Entry: 103c62970; end: 103c62aa3;  */

void FUN_103c62970(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106f0970;
  func_0x000107c613fc(&UNK_1106f0970,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103c62b44;
  func_0x00010058fa64(FUN_103c62b44,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103c62aa4; end: 103c62ad3;  */

undefined ** FUN_103c62aa4(void)

{
  return &PTR_DAT_1130664f0;
}



/* Entry: 103c62ad4; end: 103c62af3;  */

void FUN_103c62ad4(void)

{
  func_0x000107c61168(&PTR_PTR_112949aa0);
  return;
}



/* Entry: 103c62af4; end: 103c62b43;  */

undefined1  [16] FUN_103c62af4(void)

{
  return ZEXT816(0x1106f08a8);
}



/* Entry: 103c62b44; end: 103c62b6b;  */

void FUN_103c62b44(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103c62b6c; end: 103c62b7f;  */

void FUN_103c62b6c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103c62b80; end: 103c62e7b;  */

void FUN_103c62b80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ffc688,&UNK_10dc6af98);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ffc690,&UNK_10dc6afa0);
  puVar2 = &UNK_1106f09d0;
  func_0x000107c613fc(&UNK_1106f09d0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x103c62e84;
  func_0x0001000823a8(0x103c62e84,puVar2);
  pcVar3 = "AddFriendsTrayFeatureEntryPointWrapperServiceProvider";
  func_0x000100082720("AddFriendsTrayFeatureEntryPointWrapperServiceProvider",0x35,2);
  FUN_103c63a6c();
  func_0x000100082720("AddFriendsTrayScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103c62930;
  func_0x0001000823a8(FUN_103c62930,0);
  func_0x000100082720("AddFriendsTrayScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ffc698,&UNK_10dc6afb0);
  puVar2 = &UNK_1106f09f8;
  func_0x000107c613fc(&UNK_1106f09f8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x103c62e8c;
  func_0x0001000823a8(0x103c62e8c,puVar2);
  func_0x000100082720("AddFriendsTrayScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ffc618,&UNK_10dc6ad60);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x103c62e98;
  func_0x0001000823a8(0x103c62e98,uVar5);
  func_0x000100082720("AddFriendsTrayScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ffc608,&UNK_10dc6ad50);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x103c62ea0;
  func_0x0001000823a8(0x103c62ea0,uVar6);
  func_0x000100082720("AddFriendsTrayScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1106f0a20;
  func_0x000107c613fc(&UNK_1106f0a20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_103c62ed4;
  func_0x0001000823a8(FUN_103c62ed4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("AddFriendsTrayScopeEntryPointProvider",0x25,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 103c62e7c; end: 103c62ea7;  */

void FUN_103c62e7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ffc688,&UNK_10dc6af98);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ffc690,&UNK_10dc6afa0);
  puVar2 = &UNK_1106f09d0;
  func_0x000107c613fc(&UNK_1106f09d0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x103c62e84;
  func_0x0001000823a8(0x103c62e84,puVar2);
  pcVar3 = "AddFriendsTrayFeatureEntryPointWrapperServiceProvider";
  func_0x000100082720("AddFriendsTrayFeatureEntryPointWrapperServiceProvider",0x35,2);
  FUN_103c63a6c();
  func_0x000100082720("AddFriendsTrayScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103c62930;
  func_0x0001000823a8(FUN_103c62930,0);
  func_0x000100082720("AddFriendsTrayScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ffc698,&UNK_10dc6afb0);
  puVar2 = &UNK_1106f09f8;
  func_0x000107c613fc(&UNK_1106f09f8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x103c62e8c;
  func_0x0001000823a8(0x103c62e8c,puVar2);
  func_0x000100082720("AddFriendsTrayScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ffc618,&UNK_10dc6ad60);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x103c62e98;
  func_0x0001000823a8(0x103c62e98,uVar5);
  func_0x000100082720("AddFriendsTrayScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ffc608,&UNK_10dc6ad50);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x103c62ea0;
  func_0x0001000823a8(0x103c62ea0,uVar6);
  func_0x000100082720("AddFriendsTrayScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1106f0a20;
  func_0x000107c613fc(&UNK_1106f0a20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_103c62ed4;
  func_0x0001000823a8(FUN_103c62ed4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("AddFriendsTrayScopeEntryPointProvider",0x25,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 103c62ea8; end: 103c62ed3;  */

void FUN_103c62ea8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103c62ed4; end: 103c62edb;  */

void FUN_103c62ed4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106f0858;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106f0858;
  return;
}



/* Entry: 103c62edc; end: 103c62fbb;  */

void FUN_103c62edc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_103c63154();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_103c64da0(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_103c64b64(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174(uStack_48);
  func_0x000107c6157c(uVar1);
  FUN_103c64b74();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 103c62fbc; end: 103c6306b;  */

long FUN_103c62fbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_103c64da0(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103c64b64(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  FUN_103c64b74();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 103c6306c; end: 103c63097;  */

void FUN_103c6306c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c63098; end: 103c6309f;  */

undefined8 FUN_103c63098(void)

{
  return 0x1b;
}



/* Entry: 103c630a0; end: 103c63123;  */

void FUN_103c630a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103c63194,param_2,FUN_103c63198,param_2,0x103c631c0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103c63124; end: 103c63153;  */

undefined ** FUN_103c63124(void)

{
  return &PTR_DAT_1130664f0;
}



/* Entry: 103c63154; end: 103c63173;  */

void FUN_103c63154(void)

{
  func_0x000107c61168(&PTR_PTR_112ffc708);
  return;
}



/* Entry: 103c63174; end: 103c63197;  */

undefined1  [16] FUN_103c63174(void)

{
  return ZEXT816(0x1106f0a78);
}



/* Entry: 103c63198; end: 103c631eb;  */

void FUN_103c63198(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103c631ec; end: 103c63227;  */

void FUN_103c631ec(undefined8 *param_1,undefined8 param_2)

{
  FUN_103c63228();
  func_0x0001000a7f38("AddFriendsTrayScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103c63228; end: 103c63413;  */

void FUN_103c63228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cab0;
  ppuVar4 = &PTR_DAT_1130664f0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ffc770;
  func_0x0001000285a8(0x112ffc770,&UNK_10dc6b0f8);
  func_0x0001000a6ee8(&UNK_1106f0a78,
                      "AddFriendsTrayFeatureEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_103c63488,param_1,uVar2,&UNK_1106f0a78,&PTR_DAT_112ffc6a0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1106f0ac8;
  func_0x000107c613fc(&UNK_1106f0ac8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106f0cd8,"AddFriendsTrayScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_103c63490,puVar3,uVar2,&UNK_1106f0cd8,&PTR_DAT_112ffc800);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1106f0af0;
  func_0x000107c613fc(&UNK_1106f0af0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106f08e8,"AddFriendsTrayScopedServicesScopeInitializationPluginKey",0x38
                      ,2,FUN_103c63578,puVar3,uVar2,&UNK_1106f08e8,&PTR_DAT_112ffc620);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ffc778;
  func_0x0001000285a8(0x112ffc778,&UNK_10dc6b100);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 103c63414; end: 103c63487;  */

void FUN_103c63414(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x103c635b4;
  func_0x0001000823a8(0x103c635b4,param_3);
  func_0x000100082720("AddFriendsTrayFeatureEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103c63488; end: 103c6348f;  */

void FUN_103c63488(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x103c635b4;
  func_0x0001000823a8();
  func_0x000100082720("AddFriendsTrayFeatureEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103c63490; end: 103c634cf;  */

void FUN_103c63490(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103c63b50(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AddFriendsTrayScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103c634d0; end: 103c63577;  */

void FUN_103c634d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106f0b18;
  func_0x000107c613fc(&UNK_1106f0b18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103c635ac;
  func_0x0001000823a8(FUN_103c635ac,puVar1);
  func_0x000100082720("AddFriendsTrayScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103c63578; end: 103c6357f;  */

void FUN_103c63578(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106f0b18;
  func_0x000107c613fc(&UNK_1106f0b18,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103c635ac;
  func_0x0001000823a8(FUN_103c635ac,puVar3);
  func_0x000100082720("AddFriendsTrayScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103c63580; end: 103c635ab;  */

void FUN_103c63580(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


