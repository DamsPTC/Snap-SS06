/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019d2840; end: 1019d289b;  */

void FUN_1019d2840(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3;
  func_0x000107c61174();
  uVar1 = param_2;
  FUN_1019d2bdc();
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  return;
}



/* Entry: 1019d289c; end: 1019d2bdb;  */

undefined1  [16] FUN_1019d289c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  undefined *puVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_7e [4];
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = (uint)(param_2 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar15 = (int)param_1;
  lVar5 = param_1;
  uVar11 = param_2;
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar3 >> 0x1e < 2) {
    if (uVar17 == 0) {
      uVar14 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar13 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar13,iVar15)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d2bd0);
        (*pcVar4)();
      }
      uVar14 = (ulong)(iVar13 - iVar15);
    }
  }
  else {
    if (uVar17 != 2) goto LAB_1019d2b70;
    uVar14 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d290c);
      (*pcVar4)();
    }
  }
  if (uVar14 != 0) {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar5 = 0;
    func_0x000100403514(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if (uVar3 >> 0x1e == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (long)iVar15;
      if (uVar17 == 2) {
        lVar7 = *(long *)(param_1 + 0x10);
      }
    }
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d2bcc);
      (*pcVar4)();
    }
    do {
      puVar16 = puStack_70;
      if (uVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d2bb0);
        (*pcVar4)();
      }
      if (uVar17 == 2) {
        if (lVar7 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d2bb4);
          (*pcVar4)();
        }
        if (*(long *)(param_1 + 0x18) <= lVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d2bc0);
          (*pcVar4)();
        }
        func_0x000107c5ec30();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d2bd8);
          (*pcVar4)();
        }
        lVar6 = lVar5;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar7,lVar6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d2bc8);
          (*pcVar4)();
        }
LAB_1019d2a30:
        uVar2 = *(undefined1 *)(lVar5 + (lVar7 - lVar6));
      }
      else {
        if (uVar3 >> 0x1e == 1) {
          if ((lVar7 < iVar15) || (param_1 >> 0x20 <= lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d2bbc);
            (*pcVar4)();
          }
          func_0x000107c5ec30();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d2bd4);
            (*pcVar4)();
          }
          lVar6 = lVar5;
          func_0x000107c5ec3c();
          if (SBORROW8(lVar7,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d2bc4);
            (*pcVar4)();
          }
          goto LAB_1019d2a30;
        }
        if ((long)(param_2 >> 0x30 & 0xff) <= lVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019d2bb8);
          (*pcVar4)();
        }
        auStack_7e[0] = (char)param_1;
        auStack_7e[1] = (char)((ulong)param_1 >> 8);
        auStack_7e[2] = (char)((ulong)param_1 >> 0x10);
        auStack_7e[3] = (char)((ulong)param_1 >> 0x18);
        uStack_7a = (char)((ulong)param_1 >> 0x20);
        uStack_79 = (char)((ulong)param_1 >> 0x28);
        uStack_78 = (char)((ulong)param_1 >> 0x30);
        uStack_77 = (char)((ulong)param_1 >> 0x38);
        uStack_76 = (char)param_2;
        uStack_75 = (char)(param_2 >> 8);
        uStack_74 = (char)(param_2 >> 0x10);
        uStack_73 = (char)(param_2 >> 0x18);
        uStack_72 = (char)(param_2 >> 0x20);
        uStack_71 = (char)(param_2 >> 0x28);
        uVar2 = auStack_7e[lVar7];
      }
      lVar6 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      *(undefined **)(lVar6 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar6 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(undefined1 *)(lVar6 + 0x20) = uVar2;
      lVar5 = 0x78323025;
      uVar11 = 0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar6);
      puStack_70 = puVar16;
      uVar1 = *(ulong *)(puVar16 + 0x10);
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar16 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
      *(long *)(puStack_70 + uVar1 * 0x10 + 0x20) = lVar5;
      *(ulong *)(puStack_70 + uVar1 * 0x10 + 0x28) = uVar11;
      lVar7 = lVar7 + 1;
      uVar14 = uVar14 - 1;
      puVar16 = puStack_70;
    } while (uVar14 != 0);
  }
LAB_1019d2b70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    lVar7 = lVar5;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar6 = lVar7;
    func_0x000107c5faec();
    uVar14 = uVar11;
    func_0x000107c61170(lVar7);
    func_0x000107c3f9b4();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar7 = lVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar5);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      lVar5 = lVar7;
      FUN_1019d289c(lVar7,uVar14);
      uVar8 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar9 = uVar8;
      func_0x00010011d734();
      uVar10 = 0;
      uVar12 = 0xe000000000000000;
      func_0x000107c5fa80(0,0xe000000000000000,uVar8,uVar9);
      func_0x000107c6142c(lVar5);
      func_0x000107c5fb78(uVar10,uVar12);
      func_0x000107c6142c(uVar12);
      func_0x00010006c090(lVar7,uVar14);
    }
    auVar19._8_8_ = uVar11;
    auVar19._0_8_ = lVar6;
    return auVar19;
  }
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = puVar16;
  return auVar18;
}



/* Entry: 1019d2bdc; end: 1019d2d0b;  */

undefined1  [16] FUN_1019d2bdc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  lVar1 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  uVar7 = param_2;
  func_0x000107c61170(lVar1);
  func_0x000107c3f9b4();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    lVar3 = lVar1;
    FUN_1019d289c(lVar1,uVar7);
    uVar4 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar5 = uVar4;
    func_0x00010011d734();
    uVar6 = 0;
    uVar8 = 0xe000000000000000;
    func_0x000107c5fa80(0,0xe000000000000000,uVar4,uVar5);
    func_0x000107c6142c(lVar3);
    func_0x000107c5fb78(uVar6,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x00010006c090(lVar1,uVar7);
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = lVar2;
  return auVar9;
}



/* Entry: 1019d2d0c; end: 1019d2d6f;  */

long FUN_1019d2d0c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1019d2d70; end: 1019d2e5f;  */

undefined8 * FUN_1019d2d70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar3 = param_2[4];
  param_1[4] = uVar3;
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1019d2e60; end: 1019d2ebb;  */

undefined8 * FUN_1019d2e60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_1[3]);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1019d2ebc; end: 1019d2f5b;  */

int FUN_1019d2ebc(int *param_1,int param_2)

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



/* Entry: 1019d2f5c; end: 1019d2fc7;  */

long FUN_1019d2f5c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1019d2fc8; end: 1019d3037;  */

undefined8 * FUN_1019d2fc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[4];
  uVar4 = param_2[5];
  param_1[4] = uVar1;
  func_0x000107c61434();
  func_0x000107c61174(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c614b0(uVar4);
  param_1[5] = uVar4;
  return param_1;
}



/* Entry: 1019d3038; end: 1019d30e3;  */

undefined8 * FUN_1019d3038(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  func_0x000107c614b0(uVar1);
  uVar2 = param_1[5];
  param_1[5] = uVar1;
  func_0x000107c614ac(uVar2);
  return param_1;
}



/* Entry: 1019d30e4; end: 1019d314f;  */

undefined8 * FUN_1019d30e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_1[3]);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c614ac(uVar1);
  return param_1;
}



/* Entry: 1019d3150; end: 1019d31e3;  */

int FUN_1019d3150(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1019d31e4; end: 1019d32ab;  */

undefined8 FUN_1019d31e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c4c99c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  func_0x000107c4c950(param_1);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 1019d32ac; end: 1019d32df;  */

void FUN_1019d32ac(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = unaff_x20[2];
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  func_0x000107c60690(uVar1);
  return;
}



/* Entry: 1019d32e0; end: 1019d333b;  */

void FUN_1019d32e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  func_0x000107c6068c(auStack_78);
  func_0x000107c5fb58(auStack_78,uVar1,uVar2);
  func_0x000107c60690(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019d333c; end: 1019d3393;  */

bool FUN_1019d333c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  uVar1 = param_1[2];
  uVar3 = param_2[2];
  if ((uVar2 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar2 & 1) == 0))
  {
    return false;
  }
  return uVar1 == uVar3;
}



/* Entry: 1019d3394; end: 1019d339b;  */

void FUN_1019d3394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1019d339c; end: 1019d33cf;  */

undefined8 * FUN_1019d339c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1019d33d0; end: 1019d3423;  */

undefined8 * FUN_1019d33d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1019d3424; end: 1019d345f;  */

undefined8 * FUN_1019d3424(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1019d3460; end: 1019d3503;  */

int FUN_1019d3460(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1019d3504; end: 1019d35af;  */

void FUN_1019d3504(void)

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



/* Entry: 1019d35b0; end: 1019d35b3;  */

void FUN_1019d35b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de7118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b1fe0;
  func_0x000107c61520(&UNK_10d9b1fe0,&UNK_110427458);
  puRam0000000112de7118 = puVar1;
  return;
}



/* Entry: 1019d35b4; end: 1019d35f3;  */

void FUN_1019d35b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de7118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b1fe0;
  func_0x000107c61520(&UNK_10d9b1fe0,&UNK_110427458);
  puRam0000000112de7118 = puVar1;
  return;
}



/* Entry: 1019d35f4; end: 1019d3757;  */

int FUN_1019d35f4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1019d3670;
        goto LAB_1019d3654;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1019d3654:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1019d3670:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1019d3758; end: 1019d37db;  */

void FUN_1019d3758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 1019d37dc; end: 1019d394b;  */

undefined * FUN_1019d37dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3f770();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4b028();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4b178();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar5 = &UNK_110427530;
  func_0x000107c613fc(&UNK_110427530,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar3;
  pcStack_60 = FUN_1019d3a04;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1019d3a10;
  puStack_68 = &UNK_110427548;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  uVar7 = 0;
  func_0x0001002365f0(0);
  func_0x000107c610f8();
  func_0x000103e94848(puVar4,uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  return puVar4;
}



/* Entry: 1019d394c; end: 1019d3a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d394c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c41574();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    lVar3 = 0;
    FUN_1019d5764();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(long *)(lVar4 + _DAT_112de7240) = lVar2;
    *(undefined8 *)(lVar4 + _DAT_112de7248) = param_2;
    *(undefined8 *)(lVar4 + _DAT_112de7250) = param_3;
    puVar1 = PTR_s_init_1125d9248;
    lStack_40 = lVar4;
    lStack_38 = lVar3;
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61154(&lStack_40,puVar1);
  }
  return;
}



/* Entry: 1019d3a04; end: 1019d3a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d3a04(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c41574();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    lVar5 = 0;
    FUN_1019d5764();
    lVar3 = lVar5;
    func_0x000107c610f8();
    *(long *)(lVar3 + _DAT_112de7240) = lVar4;
    *(undefined8 *)(lVar3 + _DAT_112de7248) = uVar1;
    *(undefined8 *)(lVar3 + _DAT_112de7250) = uVar6;
    puVar2 = PTR_s_init_1125d9248;
    lStack_40 = lVar3;
    lStack_38 = lVar5;
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar6);
    func_0x000107c61154(&lStack_40,puVar2);
  }
  return;
}



/* Entry: 1019d3a10; end: 1019d3a47;  */

void FUN_1019d3a10(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1019d3a48; end: 1019d3a63;  */

void FUN_1019d3a48(long param_1,long param_2)

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



/* Entry: 1019d3a64; end: 1019d3a87;  */

/* WARNING: Possible PIC construction at 0x0001019d3a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d3a74) */

void FUN_1019d3a64(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019d3a88; end: 1019d3adb;  */

void FUN_1019d3a88(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019d3adc; end: 1019d3b5b;  */

void FUN_1019d3adc(undefined8 param_1)

{
  if (lRam0000000112de7148 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e664e60);
  return;
}



/* Entry: 1019d3b5c; end: 1019d3b7f;  */

void FUN_1019d3b5c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1019d37dc();
  *param_1 = param_2;
  return;
}



/* Entry: 1019d3b80; end: 1019d3bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d3b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112de7200) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112de7208) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112de7210) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019d3bf4; end: 1019d4003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1019d3bf4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  func_0x000107c614f0();
  lVar7 = *(long *)(param_1 + _DAT_11302a348);
  if (*(long *)(lVar7 + 0x10) == 0) {
    puVar5 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    FUN_1019d53dc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c451b0(puVar5);
  }
  else {
    func_0x0001000d224c(&puStack_80);
    puVar5 = puStack_80;
    if (puStack_80 != (undefined *)0x0) {
      func_0x0001000d224c(&puStack_80);
      puVar1 = puStack_80;
      func_0x0001000d224c(&puStack_80);
      puVar2 = puStack_80;
      func_0x000107c5fc48(lVar7,PTR___sSSN_11034da80);
      puVar3 = puVar5;
      func_0x000107c4b264(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      puVar6 = &UNK_110427598;
      func_0x000107c613fc(&UNK_110427598,0x30,7);
      *(long *)(puVar6 + 0x10) = param_1;
      *(undefined **)(puVar6 + 0x18) = puVar1;
      *(undefined **)(puVar6 + 0x20) = puStack_80;
      *(undefined8 *)(puVar6 + 0x28) = unaff_x20;
      pcStack_60 = FUN_1019d4004;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_1019d4010;
      puStack_68 = &UNK_1104275b0;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar6 = puStack_58;
      func_0x000107c615f0(puVar2);
      func_0x000107c61174(param_1);
      func_0x000107c615f0(puVar1);
      func_0x000107c61574(puVar6);
      puVar6 = puVar3;
      func_0x000107c436a8(puVar3);
      func_0x000107c61180();
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(puVar2);
      func_0x000107c615e8(puVar1);
      func_0x000107c60bd0(ppuVar4);
      return puVar6;
    }
    puVar5 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    FUN_1019d53dc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c451b0(puVar5);
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 1019d4004; end: 1019d400f;  */

undefined * FUN_1019d4004(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  puStack_58 = (undefined *)0x0;
  uVar4 = 0;
  FUN_1019d53dc(0,0x112d68e68,&PTR_PTR_1126de278,uVar2,*(undefined8 *)(unaff_x20 + 0x28));
  ppuVar7 = &puStack_58;
  func_0x000107c5fc50(param_1,ppuVar7,uVar4);
  puVar5 = puStack_58;
  if (puStack_58 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    FUN_1019d53dc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c451b0(puVar5);
  }
  else {
    puVar6 = puStack_58;
    FUN_1019d4f6c();
    func_0x000107c6142c(puVar5);
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar6) {
        puVar5 = puVar6;
      }
      func_0x000107c60480();
    }
    if (puVar5 != (undefined *)0x0) {
      puVar5 = puVar6;
      FUN_1019d40e0(puVar6,uVar1,uVar3,uVar2);
      func_0x000107c6142c(ppuVar7);
      func_0x000107c6142c(puVar6);
      return puVar5;
    }
    func_0x000107c6142c(ppuVar7);
    func_0x000107c6142c(puVar6);
    puVar5 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    FUN_1019d53dc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c451b0(puVar5);
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 1019d4010; end: 1019d4067;  */

void FUN_1019d4010(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1019d4068; end: 1019d4083;  */

void FUN_1019d4068(long param_1,long param_2)

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



/* Entry: 1019d4084; end: 1019d40df; -[SCLensPrefetcher prefetchLensesWithParameters:] */

void FUN_1019d4084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1019d3bf4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1019d40e0; end: 1019d486f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1019d40e0(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_68;
  
  lVar15 = *(long *)(param_2 + _DAT_11302a350);
  if (*(long *)(lVar15 + 0x10) == 0) {
    puVar9 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar10 = 0;
    FUN_1019d53dc(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c5fc48(param_1,uVar10);
    func_0x000107c451b0(puVar9);
  }
  else {
    lVar4 = lVar15;
    func_0x000107c61434();
    func_0x000100403a6c();
    func_0x000107c6142c(lVar15);
    if (param_1 >> 0x3e == 0) {
      uVar16 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar16 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar16 = param_1;
      }
      func_0x000107c60480();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
    if (uVar16 != 0) {
      uStack_b8 = param_1 & 0xffffffffffffff8;
      uVar17 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_b8 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d436c);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(param_1 + 0x20 + uVar17 * 8);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar17;
          param_2 = param_1;
          FUN_1019d4db0(uVar17,param_1,&PTR_PTR_1126ae6a8,0x112d4d630);
        }
        bVar3 = SCARRY8(uVar17,1);
        uVar17 = uVar17 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d4368);
          (*pcVar2)();
        }
        uVar12 = uVar5;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar6 = uVar12;
        func_0x000107c5faec();
        uVar11 = param_2;
        func_0x000107c61170(uVar12);
        if (*(long *)(lVar4 + 0x10) != 0) {
          func_0x000107c6068c(&puStack_b0,*(undefined8 *)(lVar4 + 0x28));
          ppuVar7 = &puStack_b0;
          uVar11 = uVar6;
          func_0x000107c5fb58(ppuVar7,uVar6,param_2);
          func_0x000107c606a8();
          uVar12 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
          uVar14 = (ulong)ppuVar7 & (uVar12 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar4 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(lVar4 + 0x30) + uVar14 * 0x10);
              uVar8 = *puVar1;
              uVar11 = puVar1[1];
              if ((uVar8 == uVar6 && uVar11 == param_2) ||
                 (func_0x000107c605b8(uVar8,uVar11,uVar6,param_2,0), (uVar8 & 1) != 0)) {
                func_0x000107c6142c(param_2);
                puVar13 = puVar9;
                func_0x000107c61558();
                puStack_68 = puVar9;
                if (((ulong)puVar13 & 1) == 0) {
                  uVar11 = *(long *)(puVar9 + 0x10) + 1;
                  func_0x0001019d4adc(0,uVar11,1);
                }
                uVar6 = *(ulong *)(puStack_68 + 0x10);
                uVar12 = uVar6 + 1;
                if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar6) {
                  uVar11 = uVar12;
                  func_0x0001019d4adc(1 < *(ulong *)(puStack_68 + 0x18),uVar12,1);
                }
                *(ulong *)(puStack_68 + 0x10) = uVar12;
                *(ulong *)(puStack_68 + uVar6 * 8 + 0x20) = uVar5;
                param_2 = uVar11;
                puVar9 = puStack_68;
                goto joined_r0x0001019d42d0;
              }
              uVar14 = uVar14 + 1 & ~uVar12;
            } while ((*(ulong *)(lVar4 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c6142c(param_2);
        func_0x000107c61170(uVar5);
        param_2 = uVar11;
joined_r0x0001019d42d0:
      } while (uVar17 != uVar16);
    }
    func_0x000107c6142c(lVar4);
    if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
      puVar13 = puVar9;
      func_0x000107c60480();
    }
    else {
      puVar13 = *(undefined **)(puVar9 + 0x10);
    }
    if (puVar13 != (undefined *)0x0) {
      puVar13 = puVar9;
      func_0x0001019d4500(puVar9,param_3,param_4);
      func_0x000107c61574(puVar9);
      puVar9 = &UNK_1104275e8;
      func_0x000107c613fc(&UNK_1104275e8,0x20,7);
      *(ulong *)(puVar9 + 0x10) = param_1;
      *(undefined8 *)(puVar9 + 0x18) = unaff_x20;
      pcStack_90 = FUN_1019d5370;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_100f17afc;
      puStack_98 = &UNK_110427600;
      ppuVar7 = &puStack_b0;
      puStack_88 = puVar9;
      func_0x000107c60bc4(ppuVar7);
      puVar9 = puStack_88;
      func_0x000107c61434(param_1);
      func_0x000107c61574(puVar9);
      puVar9 = puVar13;
      func_0x000107c4c280(puVar13);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(puVar13);
      return puVar9;
    }
    func_0x000107c61574(puVar9);
    puVar9 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar10 = 0;
    FUN_1019d53dc(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c5fc48(param_1,uVar10);
    func_0x000107c451b0(puVar9);
  }
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return puVar9;
}



/* Entry: 1019d4870; end: 1019d48db;  */

void FUN_1019d4870(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c3ebcc();
  uVar1 = 0;
  FUN_1019d53dc(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc48(param_3,uVar1);
  uVar1 = 0;
  FUN_1019d53dc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  param_1[3] = uVar1;
  *param_1 = param_3;
  return;
}



/* Entry: 1019d48dc; end: 1019d494f;  */

void FUN_1019d48dc(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  FUN_1019d4c2c();
  uVar2 = *param_3 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar2 + 0x10);
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x000100fe2a60(uVar2,uVar1 + 1,1);
    *param_3 = uVar2;
    uVar2 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar2 + uVar1 * 8 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1019d4950; end: 1019d4a13;  */

void FUN_1019d4950(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_4;
  func_0x000107c61434(param_2);
  uVar2 = uVar4;
  func_0x000107c61558();
  *param_4 = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1019d4c9c(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4,PTR__swift_bridgeObjectRelease_11034f258);
    *param_4 = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1019d4c9c(uVar4,uVar2 + 1,1,uVar3,PTR__swift_bridgeObjectRelease_11034f258);
    *param_4 = uVar4;
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  lVar1 = uVar4 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}



/* Entry: 1019d4a14; end: 1019d4a73; -[SCLensPrefetcher init] */

void FUN_1019d4a14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPrefetchingImplementation.LensPrefetcher",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d4a40);
  (*pcVar1)();
}



/* Entry: 1019d4a74; end: 1019d4abb; -[SCLensPrefetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019d4a90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d4a94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d4a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112de7200));
  return;
}



/* Entry: 1019d4abc; end: 1019d4af7;  */

void FUN_1019d4abc(void)

{
  func_0x000107c61168(&PTR_PTR_1127ef690);
  return;
}



/* Entry: 1019d4af8; end: 1019d4c2b;  */

undefined * FUN_1019d4af8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d4c2c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000100fe4188();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1019d53dc(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1019d4c2c; end: 1019d4c9b;  */

void FUN_1019d4c2c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    func_0x000100fe2a60(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1019d4c9c; end: 1019d4daf;  */

undefined *
FUN_1019d4c9c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d4db0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1019d4db0; end: 1019d4f6b;  */

ulong FUN_1019d4db0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d4e94);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d4e98);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1019d53dc(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d4f6c);
  (*pcVar2)();
}



/* Entry: 1019d4f6c; end: 1019d536f;  */

undefined1  [16] FUN_1019d4f6c(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
  if (uVar10 == 0) {
    pcVar7 = (code *)0x0;
    puVar13 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
    puVar12 = (undefined *)0x0;
    puVar9 = puVar3;
  }
  else {
    if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d5370);
      (*pcVar1)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      FUN_1019d4db0(0,param_1,&PTR_PTR_1126de278,0x112d68e68);
    }
    puVar13 = &UNK_110427688;
    func_0x000107c613fc(&UNK_110427688,0x18,7);
    *(undefined ***)(puVar13 + 0x10) = &puStack_78;
    func_0x000100cc2118(0,0);
    puVar3 = &UNK_1104276b0;
    func_0x000107c613fc(&UNK_1104276b0,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_1019d541c;
    *(undefined **)(puVar3 + 0x18) = puVar13;
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = FUN_1019d5424;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100fe2610;
    puStack_98 = &UNK_1104276c8;
    ppuVar4 = &puStack_b0;
    puStack_88 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_88);
    puVar12 = &UNK_110427700;
    func_0x000107c613fc(&UNK_110427700,0x18,7);
    *(undefined ***)(puVar12 + 0x10) = &puStack_80;
    func_0x000100cc2118(0,0);
    puVar3 = &UNK_110427728;
    func_0x000107c613fc(&UNK_110427728,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_1019d5444;
    *(undefined **)(puVar3 + 0x18) = puVar12;
    pcStack_90 = FUN_1019d544c;
    puStack_b0 = puVar9;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100fe2654;
    puStack_98 = &UNK_110427740;
    ppuVar5 = &puStack_b0;
    puStack_88 = puVar3;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_88);
    func_0x000107c4c744(uVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar2);
    if (uVar10 != 1) {
      lVar8 = 5;
      puVar3 = puVar13;
      puVar11 = puVar12;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          lVar6 = *(long *)(param_1 + lVar8 * 8);
          func_0x000107c61174(lVar6);
        }
        else {
          lVar6 = lVar8 + -4;
          FUN_1019d4db0(lVar6,param_1,&PTR_PTR_1126de278,0x112d68e68);
        }
        puVar13 = &UNK_110427688;
        func_0x000107c613fc(&UNK_110427688,0x18,7);
        *(undefined ***)(puVar13 + 0x10) = &puStack_78;
        func_0x000100cc2118(FUN_1019d541c,puVar3);
        puVar3 = &UNK_1104276b0;
        func_0x000107c613fc(&UNK_1104276b0,0x20,7);
        *(code **)(puVar3 + 0x10) = FUN_1019d541c;
        *(undefined **)(puVar3 + 0x18) = puVar13;
        pcStack_90 = FUN_1019d5424;
        puStack_b0 = puVar9;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_100fe2610;
        puStack_98 = &UNK_1104276c8;
        ppuVar4 = &puStack_b0;
        puStack_88 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        func_0x000107c61574(puStack_88);
        puVar12 = &UNK_110427700;
        func_0x000107c613fc(&UNK_110427700,0x18,7);
        *(undefined ***)(puVar12 + 0x10) = &puStack_80;
        func_0x000100cc2118(FUN_1019d5444,puVar11);
        puVar3 = &UNK_110427728;
        func_0x000107c613fc(&UNK_110427728,0x20,7);
        *(code **)(puVar3 + 0x10) = FUN_1019d5444;
        *(undefined **)(puVar3 + 0x18) = puVar12;
        pcStack_90 = FUN_1019d544c;
        puStack_b0 = puVar9;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_100fe2654;
        puStack_98 = &UNK_110427740;
        ppuVar5 = &puStack_b0;
        puStack_88 = puVar3;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_88);
        func_0x000107c4c744(lVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(lVar6);
        lVar8 = lVar8 + 1;
        puVar3 = puVar13;
        puVar11 = puVar12;
      } while ((1 - uVar10) + lVar8 != 5);
    }
    pcVar1 = FUN_1019d5444;
    pcVar7 = FUN_1019d541c;
    puVar3 = puStack_78;
    puVar9 = puStack_80;
  }
  func_0x000100cc2118(pcVar7,puVar13);
  func_0x000100cc2118(pcVar1,puVar12);
  auVar14._8_8_ = puVar9;
  auVar14._0_8_ = puVar3;
  return auVar14;
}



/* Entry: 1019d5370; end: 1019d5377;  */

void FUN_1019d5370(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3ebcc(param_2,uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = 0;
  FUN_1019d53dc(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc48(uVar2,uVar1);
  uVar1 = 0;
  FUN_1019d53dc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  param_1[3] = uVar1;
  *param_1 = uVar2;
  return;
}



/* Entry: 1019d5378; end: 1019d53db;  */

void FUN_1019d5378(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c3ebcc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  uVar2 = 0;
  FUN_1019d53dc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  param_1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1019d53dc; end: 1019d541b;  */

void FUN_1019d53dc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1019d541c; end: 1019d5423;  */

void FUN_1019d541c(undefined8 param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long unaff_x20;
  
  puVar2 = *(ulong **)(unaff_x20 + 0x10);
  FUN_1019d4c2c();
  uVar3 = *puVar2 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x000100fe2a60(uVar3,uVar1 + 1,1);
    *puVar2 = uVar3;
    uVar3 = uVar3 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1019d5424; end: 1019d5443;  */

void FUN_1019d5424(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1019d5444; end: 1019d544b;  */

void FUN_1019d5444(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x20;
  ulong uVar5;
  
  puVar4 = *(ulong **)(unaff_x20 + 0x10);
  uVar5 = *puVar4;
  func_0x000107c61434(param_2);
  uVar2 = uVar5;
  func_0x000107c61558();
  *puVar4 = uVar5;
  uVar3 = uVar5;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1019d4c9c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5,PTR__swift_bridgeObjectRelease_11034f258);
    *puVar4 = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1019d4c9c(uVar5,uVar2 + 1,1,uVar3,PTR__swift_bridgeObjectRelease_11034f258);
    *puVar4 = uVar5;
  }
  *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
  lVar1 = uVar5 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}



/* Entry: 1019d544c; end: 1019d546b;  */

void FUN_1019d544c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1019d546c; end: 1019d548b;  */

void FUN_1019d546c(long param_1,long param_2)

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



/* Entry: 1019d548c; end: 1019d54ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d548c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112de7240) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112de7248) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112de7250) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019d5500; end: 1019d5687; -[SCLensPrefetchingFactoryImpl initWithLensMetadataRetriever:lensDataFetcher:lensFetchTypeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d5500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112de7240) = param_3;
  *(undefined8 *)(param_1 + _DAT_112de7248) = param_4;
  *(undefined8 *)(param_1 + _DAT_112de7250) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1019d5688; end: 1019d56bb; -[SCLensPrefetchingFactoryImpl createLensPrefetcher] */

void FUN_1019d5688(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001019d5590();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1019d56bc; end: 1019d571b; -[SCLensPrefetchingFactoryImpl init] */

void FUN_1019d56bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPrefetchingImplementation.LensPrefetchingFactoryImpl",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d56e8);
  (*pcVar1)();
}



/* Entry: 1019d571c; end: 1019d5763; -[SCLensPrefetchingFactoryImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019d5738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d573c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d571c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de7240));
  return;
}



/* Entry: 1019d5764; end: 1019d5783;  */

void FUN_1019d5764(void)

{
  func_0x000107c61168(&PTR_PTR_1127ef760);
  return;
}



/* Entry: 1019d5784; end: 1019d582b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1019d5784(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112de7298) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112de72a0) = param_1;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000107c615f0();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + _DAT_112de72a8) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 1019d582c; end: 1019d58d3; -[SCLensFetchTypeProvider initWithApplicationState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1019d582c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112de7298) = 0;
  *(undefined8 *)(param_1 + _DAT_112de72a0) = param_3;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  uVar2 = param_3;
  func_0x000107c615f4(param_3,2);
  func_0x00010006a360();
  *(undefined8 *)(param_1 + _DAT_112de72a8) = uVar2;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 1019d58d4; end: 1019d5907;  */

void FUN_1019d58d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019d5908; end: 1019d593f; -[SCLensFetchTypeProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d5908(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112de72a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112de72a8));
  return;
}



/* Entry: 1019d5940; end: 1019d59df; -[SCLensFetchTypeProvider currentFetchType] */

undefined8 FUN_1019d5940(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001019d5974();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1019d59e0; end: 1019d59f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d59e0(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112de7298) = *(undefined1 *)(unaff_x20 + 0x18);
  return;
}



/* Entry: 1019d59f8; end: 1019d5a17;  */

void FUN_1019d59f8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ef830);
  return;
}



/* Entry: 1019d5a18; end: 1019d5a83; -[SCLensFetchTypeProvider setLensCarouselOpen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d5a18(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174();
  func_0x000100087bd4(FUN_1019d5a84,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1019d5a84; end: 1019d5a97;  */

void FUN_1019d5a84(void)

{
  FUN_1019d59e0();
  return;
}



/* Entry: 1019d5a98; end: 1019d5b57; -[SCLensDeviceDependentAssetAnalyticsReporter initWithBlizzardLogger:graphene:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1019d5a98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112de72d8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112de72e0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112de72e8) = 0x3fa47ae147ae147b;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  lVar2 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,lVar2,0x20,7);
  return (undefined1 *)plVar4;
}



/* Entry: 1019d5b58; end: 1019d5dfb;  */

/* WARNING: Possible PIC construction at 0x0001019d5d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d5d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d5d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d5db4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d5d80) */
/* WARNING: Removing unreachable block (ram,0x0001019d5d30) */
/* WARNING: Removing unreachable block (ram,0x0001019d5d4c) */
/* WARNING: Removing unreachable block (ram,0x0001019d5d50) */
/* WARNING: Removing unreachable block (ram,0x0001019d5d04) */
/* WARNING: Removing unreachable block (ram,0x0001019d5db8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d5b58(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar2 = 0xeb000000006c7275;
      uVar3 = 0x5f646e656b636162;
      goto LAB_1019d5c1c;
    }
    if (param_3 == 1) {
      uVar2 = 0xe300000000000000;
      uVar3 = 0x666f63;
      goto LAB_1019d5c1c;
    }
  }
  else {
    if (param_3 == 2) {
      uVar2 = 0xe800000000000000;
      uVar3 = 0x746e696f70646e65;
      goto LAB_1019d5c1c;
    }
    if (param_3 == 3) {
      uVar2 = 0xe400000000000000;
      uVar3 = 0x656e6f6e;
      goto LAB_1019d5c1c;
    }
  }
  uVar2 = 0xe700000000000000;
  uVar3 = 0x6e776f6e6b6e75;
LAB_1019d5c1c:
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112de72e0);
  uVar1 = uVar3;
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c30668(uVar4,uVar1,1,1);
  func_0x000107c61170(uVar1);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c3066c((double)param_6 / 1000.0,uVar4,uVar3,1);
  func_0x000107c61170(uVar3);
  dVar5 = 0.0;
  FUN_1019d6320(0,0x3ff0000000000000);
  if (dVar5 < 0.04) {
    func_0x000107c44fdc();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    func_0x000107c602fc(0x1b);
    uVar2 = 0xe000000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1019d5dfc; end: 1019d5f47;  */

/* WARNING: Possible PIC construction at 0x0001019d5e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d5e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d5ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d5e60) */
/* WARNING: Removing unreachable block (ram,0x0001019d5e84) */
/* WARNING: Removing unreachable block (ram,0x0001019d5efc) */
/* WARNING: Removing unreachable block (ram,0x0001019d5f18) */
/* WARNING: Removing unreachable block (ram,0x0001019d5f2c) */
/* WARNING: Removing unreachable block (ram,0x0001019d5e88) */
/* WARNING: Removing unreachable block (ram,0x0001019d5ea0) */
/* WARNING: Removing unreachable block (ram,0x0001019d5ec0) */
/* WARNING: Removing unreachable block (ram,0x0001019d5ee0) */
/* WARNING: Removing unreachable block (ram,0x0001019d5ee8) */
/* WARNING: Removing unreachable block (ram,0x0001019d5ef4) */

void FUN_1019d5dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc038;
  func_0x000107c610f8(PTR_PTR_1126bc038);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5547c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1019d5f48; end: 1019d600b; -[SCLensDeviceDependentAssetAnalyticsReporter reportURLResolvingSucceededForAsset:lens:source:resolvedURL:durationMs:] */

void FUN_1019d5f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1019d5b58(param_3,param_4,param_5,param_6,param_2,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1019d600c; end: 1019d6207;  */

/* WARNING: Possible PIC construction at 0x0001019d615c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d6188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d61c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d618c) */
/* WARNING: Removing unreachable block (ram,0x0001019d6160) */
/* WARNING: Removing unreachable block (ram,0x0001019d61c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d600c(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar1 = 0xeb000000006c7275;
      uVar2 = 0x5f646e656b636162;
      goto LAB_1019d60c8;
    }
    if (param_3 == 1) {
      uVar1 = 0xe300000000000000;
      uVar2 = 0x666f63;
      goto LAB_1019d60c8;
    }
  }
  else {
    if (param_3 == 2) {
      uVar1 = 0xe800000000000000;
      uVar2 = 0x746e696f70646e65;
      goto LAB_1019d60c8;
    }
    if (param_3 == 3) {
      uVar1 = 0xe400000000000000;
      uVar2 = 0x656e6f6e;
      goto LAB_1019d60c8;
    }
  }
  uVar1 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
LAB_1019d60c8:
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112de72e0);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c30668(uVar3,uVar2,0,1);
  func_0x000107c61170(uVar2);
  func_0x000107c44fdc();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  func_0x000107c602fc("REMOTE_ASSET_FAILURE",0x13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 1019d6208; end: 1019d6287; -[SCLensDeviceDependentAssetAnalyticsReporter reportURLResolvingFailedForAsset:lens:source:] */

/* WARNING: Possible PIC construction at 0x0001019d6264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d6268) */

void FUN_1019d6208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1019d600c(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1019d6288; end: 1019d62e7; -[SCLensDeviceDependentAssetAnalyticsReporter init] */

void FUN_1019d6288(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensDeviceDependentAssetAnalytics.LensDeviceDependentAssetAnalyticsReporter",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d62b4);
  (*pcVar1)();
}



/* Entry: 1019d62e8; end: 1019d631f; -[SCLensDeviceDependentAssetAnalyticsReporter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019d6304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d6308) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d62e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de72d8));
  return;
}



/* Entry: 1019d6320; end: 1019d63bf;  */

void FUN_1019d6320(double param_1,double param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uStack_48;
  
  if (param_1 == param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d63bc);
    (*pcVar1)();
  }
  if ((ulong)ABS(param_2 - param_1) < 0x7ff0000000000000) {
    uStack_48 = 0;
    func_0x000107c61598(&uStack_48,8);
    if (param_1 + (param_2 - param_1) *
                  ((double)(uStack_48 & 0x1fffffffffffff) / 9007199254740992.0) == param_2) {
      FUN_1019d6320(param_1,param_2,param_3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d63c0);
  (*pcVar1)();
}



/* Entry: 1019d63c0; end: 1019d63df;  */

void FUN_1019d63c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127ef900);
  return;
}



/* Entry: 1019d63e0; end: 1019d641b; -[SCNullLensDeviceDependentAssetAnalyticsReporter init] */

void FUN_1019d63e0(undefined8 param_1)

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



/* Entry: 1019d641c; end: 1019d641f; -[SCNullLensDeviceDependentAssetAnalyticsReporter reportURLResolvingSucceededForAsset:lens:source:resolvedURL:durationMs:] */

void FUN_1019d641c(void)

{
  return;
}



/* Entry: 1019d6420; end: 1019d6423; -[SCNullLensDeviceDependentAssetAnalyticsReporter reportURLResolvingFailedForAsset:lens:source:] */

void FUN_1019d6420(void)

{
  return;
}



/* Entry: 1019d6424; end: 1019d6477;  */

void FUN_1019d6424(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019d6478; end: 1019d6487; -[_TtC41LensDeviceDependentAssetAnalyticsServices41LensDeviceDependentAssetAnalyticsServices deviceDependentAssetAnalyticsReporter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d6478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de7340));
  return;
}



/* Entry: 1019d6488; end: 1019d64d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d6488(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112de7340) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019d64d4; end: 1019d6507;  */

void FUN_1019d64d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019d6508; end: 1019d6517; -[_TtC41LensDeviceDependentAssetAnalyticsServices41LensDeviceDependentAssetAnalyticsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d6508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de7340));
  return;
}



/* Entry: 1019d6518; end: 1019d6527; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationActiveStateProvider activeStateAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d6518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de7370));
  return;
}



/* Entry: 1019d6528; end: 1019d65bf; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationActiveStateProvider willEnterActiveStateWithLensId:scaleFactor:] */

/* WARNING: Possible PIC construction at 0x0001019d659c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d65a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d6528(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8388;
  func_0x000107c610f8(PTR_PTR_1126a8388);
  func_0x000107c61174();
  func_0x000107c47324(param_1,puVar1,param_3,param_4,1);
  func_0x000107c61174(*(undefined8 *)(param_2 + _DAT_112de7370));
  func_0x000107c4d664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1019d65c0; end: 1019d664b; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationActiveStateProvider willEnterDefaultStateWithLensId:] */

/* WARNING: Possible PIC construction at 0x0001019d662c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d6630) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d65c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8388;
  func_0x000107c610f8(PTR_PTR_1126a8388);
  func_0x000107c61174();
  func_0x000107c47324(0x3ff0000000000000,puVar1,param_2,param_3,0);
  func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_112de7370));
  func_0x000107c4d664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1019d664c; end: 1019d66d7; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationActiveStateProvider willEnterNoUIStateWithLensId:] */

/* WARNING: Possible PIC construction at 0x0001019d66b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d66bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d664c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8388;
  func_0x000107c610f8(PTR_PTR_1126a8388);
  func_0x000107c61174();
  func_0x000107c47324(0x3ff0000000000000,puVar1,param_2,param_3,2);
  func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_112de7370));
  func_0x000107c4d664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1019d66d8; end: 1019d672f; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationActiveStateProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d66d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = _DAT_112de7370;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar2;
  FUN_1019d6770();
  lStack_30 = param_1;
  puStack_28 = puVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019d6730; end: 1019d675f;  */

void FUN_1019d6730(void)

{
  FUN_1019d6770();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


