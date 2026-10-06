/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102691124; end: 102691177;  */

undefined8 * FUN_102691124(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102691178; end: 1026911b3;  */

undefined8 * FUN_102691178(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1026911b4; end: 102691267;  */

int FUN_1026911b4(int *param_1,int param_2)

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



/* Entry: 102691268; end: 102691313;  */

void FUN_102691268(void)

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



/* Entry: 102691314; end: 102691317;  */

void FUN_102691314(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac97f0;
  func_0x000107c61520(&UNK_10dac97f0,&UNK_110533890);
  puRam0000000112eb3b70 = puVar1;
  return;
}



/* Entry: 102691318; end: 102691357;  */

void FUN_102691318(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac97f0;
  func_0x000107c61520(&UNK_10dac97f0,&UNK_110533890);
  puRam0000000112eb3b70 = puVar1;
  return;
}



/* Entry: 102691358; end: 1026914bb;  */

int FUN_102691358(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1026913d4;
        goto LAB_1026913b8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1026913b8:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_1026913d4:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1026914bc; end: 1026916b3;  */

/* WARNING: Possible PIC construction at 0x000102691660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026915cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102691664) */
/* WARNING: Removing unreachable block (ram,0x0001026915d0) */
/* WARNING: Removing unreachable block (ram,0x000102691674) */

undefined * FUN_1026914bc(long param_1,char param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_120 [143];
  undefined1 uStack_91;
  long lStack_90;
  long lStack_88;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_2 == '\0') {
    unaff_x21 = (long *)0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    unaff_x21[3] = 2;
    unaff_x21[2] = 1;
    unaff_x22 = unaff_x21 + 4;
    *unaff_x22 = 0x496e6f6973736573;
    unaff_x21[5] = -0x16ffffffffffffbc;
    unaff_x20 = &lStack_90;
    puVar13 = PTR___sSuN_11034e220;
    puVar10 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    lStack_90 = param_1;
    func_0x000107c6057c();
    unaff_x21[6] = (long)puVar13;
    unaff_x21[7] = (long)puVar10;
    unaff_x30 = 0x1026915d0;
    register0x00000008 = (BADSPACEBASE *)auStack_120;
    plVar9 = unaff_x21;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  else {
    if (param_2 == '\x01') {
      unaff_x20 = (long *)0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61534();
      unaff_x20[3] = 2;
      unaff_x20[2] = 1;
      unaff_x21 = unaff_x20 + 4;
      *unaff_x21 = 0x65707974;
      unaff_x20[5] = -0x1c00000000000000;
      uStack_91 = (undefined1)param_1;
    }
    else {
      plVar9 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (param_1 == 0) goto code_r0x0001001830b8;
      unaff_x20 = (long *)0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61534();
      unaff_x21 = unaff_x20 + 4;
      *unaff_x21 = 0x65707974;
      unaff_x20[3] = 2;
      unaff_x20[2] = 1;
      unaff_x20[5] = -0x1c00000000000000;
    }
    lStack_88 = -0x2000000000000000;
    lStack_90 = 0;
    func_0x000107c603d0();
    unaff_x20[6] = lStack_90;
    unaff_x20[7] = lStack_88;
    unaff_x30 = 0x102691664;
    register0x00000008 = (BADSPACEBASE *)auStack_120;
    plVar9 = unaff_x20;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
code_r0x0001001830b8:
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar13 = (undefined *)plVar9[2];
  puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
    puVar10 = puVar13;
    func_0x000107c60498();
    func_0x000107c6157c();
    plVar9 = plVar9 + 7;
    do {
      uVar4 = plVar9[-3];
      uVar6 = plVar9[-2];
      lVar5 = plVar9[-1];
      lVar7 = *plVar9;
      func_0x000107c61434(uVar6);
      func_0x000107c61434(lVar7);
      uVar11 = uVar4;
      uVar12 = uVar6;
      func_0x000100029284();
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001831c4);
        (*pcVar8)();
      }
      uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar10 + uVar12 + 0x40) =
           *(ulong *)(puVar10 + uVar12 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar10 + 0x30) + uVar11 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      plVar3 = (long *)(*(long *)(puVar10 + 0x38) + uVar11 * 0x10);
      *plVar3 = lVar5;
      plVar3[1] = lVar7;
      if (SCARRY8(*(long *)(puVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001831c8);
        (*pcVar8)();
      }
      plVar9 = plVar9 + 4;
      *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined *)0x0);
    func_0x000107c61574(puVar10);
  }
  return puVar10;
}



/* Entry: 1026916b4; end: 10269179b;  */

/* WARNING: Possible PIC construction at 0x000102691660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026915cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102691664) */
/* WARNING: Removing unreachable block (ram,0x0001026915d0) */
/* WARNING: Removing unreachable block (ram,0x000102691674) */

undefined * FUN_1026916b4(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_120 [143];
  undefined1 uStack_91;
  long lStack_90;
  long lStack_88;
  
  lVar11 = *unaff_x20;
  puVar1 = &stack0xfffffffffffffff0;
  if ((char)unaff_x20[1] == '\0') {
    unaff_x21 = (long *)0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    unaff_x21[3] = 2;
    unaff_x21[2] = 1;
    unaff_x22 = unaff_x21 + 4;
    *unaff_x22 = 0x496e6f6973736573;
    unaff_x21[5] = -0x16ffffffffffffbc;
    unaff_x20 = &lStack_90;
    puVar13 = PTR___sSuN_11034e220;
    puVar9 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    lStack_90 = lVar11;
    func_0x000107c6057c();
    unaff_x21[6] = (long)puVar13;
    unaff_x21[7] = (long)puVar9;
    unaff_x30 = 0x1026915d0;
    register0x00000008 = (BADSPACEBASE *)auStack_120;
    plVar8 = unaff_x21;
    unaff_x19 = lVar11;
    unaff_x29 = puVar1;
  }
  else {
    if ((char)unaff_x20[1] == '\x01') {
      unaff_x20 = (long *)0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61534();
      unaff_x20[3] = 2;
      unaff_x20[2] = 1;
      unaff_x21 = unaff_x20 + 4;
      *unaff_x21 = 0x65707974;
      unaff_x20[5] = -0x1c00000000000000;
      uStack_91 = (undefined1)lVar11;
    }
    else {
      plVar8 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar11 == 0) goto code_r0x0001001830b8;
      unaff_x20 = (long *)0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61534();
      unaff_x21 = unaff_x20 + 4;
      *unaff_x21 = 0x65707974;
      unaff_x20[3] = 2;
      unaff_x20[2] = 1;
      unaff_x20[5] = -0x1c00000000000000;
    }
    lStack_88 = -0x2000000000000000;
    lStack_90 = 0;
    func_0x000107c603d0();
    unaff_x20[6] = lStack_90;
    unaff_x20[7] = lStack_88;
    unaff_x30 = 0x102691664;
    register0x00000008 = (BADSPACEBASE *)auStack_120;
    plVar8 = unaff_x20;
    unaff_x19 = lVar11;
    unaff_x29 = puVar1;
  }
code_r0x0001001830b8:
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar13 = (undefined *)plVar8[2];
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
    puVar9 = puVar13;
    func_0x000107c60498();
    func_0x000107c6157c();
    plVar8 = plVar8 + 7;
    do {
      uVar4 = plVar8[-3];
      uVar5 = plVar8[-2];
      lVar11 = plVar8[-1];
      lVar6 = *plVar8;
      func_0x000107c61434(uVar5);
      func_0x000107c61434(lVar6);
      uVar10 = uVar4;
      uVar12 = uVar5;
      func_0x000100029284();
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001831c4);
        (*pcVar7)();
      }
      uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar9 + uVar12 + 0x40) =
           *(ulong *)(puVar9 + uVar12 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      plVar3 = (long *)(*(long *)(puVar9 + 0x38) + uVar10 * 0x10);
      *plVar3 = lVar11;
      plVar3[1] = lVar6;
      if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001831c8);
        (*pcVar7)();
      }
      plVar8 = plVar8 + 4;
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined *)0x0);
    func_0x000107c61574(puVar9);
  }
  return puVar9;
}



/* Entry: 10269179c; end: 1026917bf;  */

void FUN_10269179c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1026917c0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1026917c0; end: 1026917ff;  */

void FUN_1026917c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac98c4;
  func_0x000107c61520(&UNK_10dac98c4,&UNK_110533970);
  puRam0000000112eb3b78 = puVar1;
  return;
}



/* Entry: 102691800; end: 1026918e3;  */

int FUN_102691800(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1026918e4; end: 10269198f;  */

void FUN_1026918e4(void)

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



/* Entry: 102691990; end: 102691993;  */

void FUN_102691990(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac9910;
  func_0x000107c61520(&UNK_10dac9910,&UNK_110533a28);
  puRam0000000112eb3b80 = puVar1;
  return;
}



/* Entry: 102691994; end: 1026919d3;  */

void FUN_102691994(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac9910;
  func_0x000107c61520(&UNK_10dac9910,&UNK_110533a28);
  puRam0000000112eb3b80 = puVar1;
  return;
}



/* Entry: 1026919d4; end: 102691b3f;  */

int FUN_1026919d4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102691a50;
        goto LAB_102691a34;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102691a34:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102691a50:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102691b40; end: 102691bdf;  */

void FUN_102691b40(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102691be0; end: 102691be3;  */

void FUN_102691be0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac99a0;
  func_0x000107c61520(&UNK_10dac99a0,&UNK_110533af0);
  puRam0000000112eb3b88 = puVar1;
  return;
}



/* Entry: 102691be4; end: 102691c23;  */

void FUN_102691be4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac99a0;
  func_0x000107c61520(&UNK_10dac99a0,&UNK_110533af0);
  puRam0000000112eb3b88 = puVar1;
  return;
}



/* Entry: 102691c24; end: 102691d0f;  */

uint FUN_102691c24(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102691d10; end: 102691e2f;  */

undefined1  [16] FUN_102691d10(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c602fc(0x12);
  func_0x000107c6142c(0xe000000000000000);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar2 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x203a79202c,0xe500000000000000);
  puVar3 = puVar4;
  func_0x000107c6057c(puVar2,puVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x203a7a2c,0xe400000000000000);
  func_0x000107c6057c(puVar2,puVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x203a78;
  return auVar1;
}



/* Entry: 102691e30; end: 102691ec7;  */

bool FUN_102691e30(long *param_1,long *param_2)

{
  if (*param_1 != *param_2 || param_1[1] != param_2[1]) {
    return false;
  }
  return param_1[2] == param_2[2];
}



/* Entry: 102691ec8; end: 102691f83;  */

long FUN_102691ec8(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0x6576654c6d6f6f7a;
  *(undefined8 *)(lVar1 + 0x28) = 0xe90000000000006c;
  puVar2 = PTR___sSiN_11034deb0;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  *(undefined **)(lVar1 + 0x30) = puVar2;
  *(undefined **)(lVar1 + 0x38) = puVar4;
  lVar3 = lVar1;
  func_0x0001001830b8(lVar1);
  func_0x000107c61588(lVar1);
  func_0x000100ab5dc4((undefined8 *)(lVar1 + 0x20));
  return lVar3;
}



/* Entry: 102691f84; end: 102691fbb;  */

long FUN_102691f84(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0x6576654c6d6f6f7a;
  *(undefined8 *)(lVar1 + 0x28) = 0xe90000000000006c;
  puVar2 = PTR___sSiN_11034deb0;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  *(undefined **)(lVar1 + 0x30) = puVar2;
  *(undefined **)(lVar1 + 0x38) = puVar4;
  lVar3 = lVar1;
  func_0x0001001830b8(lVar1);
  func_0x000107c61588(lVar1);
  func_0x000100ab5dc4((undefined8 *)(lVar1 + 0x20));
  return lVar3;
}



/* Entry: 102691fbc; end: 102691fdf;  */

void FUN_102691fbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102691fe0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102691fe0; end: 10269201f;  */

void FUN_102691fe0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac9ae4;
  func_0x000107c61520(&UNK_10dac9ae4,&UNK_110533c78);
  puRam0000000112eb3b90 = puVar1;
  return;
}



/* Entry: 102692020; end: 102692087;  */

int FUN_102692020(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[2] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 102692088; end: 10269220f;  */

long FUN_102692088(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x20) = 0x6e696e6e75527369;
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  bVar3 = (param_1 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar3) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  *(undefined8 *)(lVar4 + 0x28) = 0xe900000000000067;
  *(undefined8 *)(lVar4 + 0x30) = uVar1;
  *(undefined8 *)(lVar4 + 0x38) = uVar2;
  lVar5 = lVar4;
  func_0x0001001830b8();
  func_0x000107c61588(lVar4);
  func_0x000100ab5dc4((undefined8 *)(lVar4 + 0x20));
  return lVar5;
}



/* Entry: 102692210; end: 102692243;  */

byte FUN_102692210(byte *param_1,byte *param_2)

{
  return (*param_1 ^ *param_2 ^ 0xff) & 1;
}



/* Entry: 102692244; end: 102692267;  */

void FUN_102692244(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102692268();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102692268; end: 1026922a7;  */

void FUN_102692268(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac9b74;
  func_0x000107c61520(&UNK_10dac9b74,&UNK_110533d30);
  puRam0000000112eb3b98 = puVar1;
  return;
}



/* Entry: 1026922a8; end: 102692407;  */

int FUN_1026922a8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102692324;
        goto LAB_102692308;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102692308:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102692324:
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102692408; end: 1026925cb;  */

void FUN_102692408(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c520a4();
  func_0x000107c61170(puVar1);
  func_0x000107c60bbc(0,0,param_1,param_2);
  func_0x000107c5fadc(param_4,param_5);
  lVar2 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar5 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c61174(uVar5);
  func_0x000107c5c5fc(param_1 + -5.0);
  func_0x000107c61180();
  uVar5 = 0;
  func_0x0001026931b4(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar2 + 0x40) = uVar5;
  *(undefined **)(lVar2 + 0x28) = puVar1;
  lVar3 = lVar2;
  func_0x000100ecbca8(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100ef0820((undefined8 *)(lVar2 + 0x20));
  uVar4 = 0;
  func_0x000100eca28c(0);
  uVar5 = 0x112d483a0;
  FUN_102693428(0x112d483a0,&UNK_10d90f180);
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
  func_0x000107c6142c(lVar3);
  func_0x000107c422c4(0,0,param_1,param_2,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1026925cc; end: 102692a2b;  */

void FUN_1026925cc(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  unkuint9 Var2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  double dVar18;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  
  func_0x000107c438d4(param_6);
  if (param_5 >> 0x3e == 0) {
    uVar14 = *(ulong *)((param_5 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  }
  else {
    uVar14 = param_5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_5) {
      uVar14 = param_5;
    }
    func_0x000107c60480();
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  }
  PTR__OBJC_CLASS___UIView_1126aec20 = puVar6;
  if (uVar14 != 0) {
    func_0x000107c61168();
    puVar7 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    func_0x000107c61168();
    uVar15 = 0;
    do {
      if ((param_5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_5 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102692a10);
          (*pcVar4)();
        }
        uVar8 = *(ulong *)(param_5 + 0x20 + uVar15 * 8);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar15;
        func_0x000100f95e24(uVar15,param_5);
      }
      bVar5 = SCARRY8(uVar15,1);
      uVar15 = uVar15 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102692a0c);
        (*pcVar4)();
      }
      uVar16 = 1;
      do {
        puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        func_0x000107c610f8();
        func_0x000107c46db4();
        func_0x000107c3d89c(param_6);
        do {
          puStack_d8 = (undefined *)0x0;
          func_0x000107c61598(&puStack_d8,8);
        } while (((long)puStack_d8 * 0x29 & 0xfffffffffffffff0U) == 0);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = puStack_d8;
        Var2 = (unkuint9)(SUB168(auVar1 * ZEXT816(0x29),8) + 0x28);
        dVar18 = (double)(unkint9)Var2;
        fVar17 = (float)param_3 - (float)(unkint9)Var2;
        if (fVar17 < 0.0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102692a04);
          (*pcVar4)();
        }
        if (0x7f7fffff < (uint)ABS(fVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102692a08);
          (*pcVar4)();
        }
        do {
          puStack_d8 = (undefined *)0x0;
          func_0x000107c61598(&puStack_d8,8);
          uVar13 = ((ulong)puStack_d8 & 0xffffffff) * 0x1000001;
        } while ((uint)uVar13 < 0xffff01);
        uVar13 = uVar13 >> 0x20;
        if (uVar13 != 0x1000000) {
          fVar17 = fVar17 * ((float)uVar13 / 16777216.0) + 0.0;
        }
        func_0x000107c54b80((double)fVar17,0xc054000000000000,dVar18,dVar18,puVar9);
        puVar10 = &UNK_110533e08;
        func_0x000107c613fc(&UNK_110533e08,0x38,7);
        *(undefined **)(puVar10 + 0x10) = puVar9;
        *(float *)(puVar10 + 0x18) = fVar17;
        *(double *)(puVar10 + 0x20) = param_3;
        *(undefined8 *)(puVar10 + 0x28) = param_4;
        *(double *)(puVar10 + 0x30) = dVar18;
        puVar3 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_b8 = FUN_102692a2c;
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0x42000000;
        puStack_c8 = &UNK_1000f6b44;
        puStack_c0 = &UNK_110533e20;
        ppuVar11 = &puStack_d8;
        puStack_b0 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar10 = puStack_b0;
        func_0x000107c61174();
        func_0x000107c61574(puVar10);
        func_0x000107c3dcd4(0x4000000000000000,(double)uVar16 * 0.1,puVar6);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c3e740(puVar7);
        puVar10 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
        func_0x000107c610f8(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
        func_0x000107c46154(0x3f800000,0x3f28f5c3,0x3f800000,0x3f51eb85);
        func_0x000107c52720(puVar7);
        func_0x000107c61170(puVar10);
        puVar10 = &UNK_110533e58;
        func_0x000107c613fc(&UNK_110533e58,0x18,7);
        *(undefined **)(puVar10 + 0x10) = puVar9;
        pcStack_b8 = (code *)0x102692a60;
        puStack_d8 = puVar3;
        uStack_d0 = 0x42000000;
        puStack_c8 = &UNK_1000f6b44;
        puStack_c0 = &UNK_110533e70;
        ppuVar11 = &puStack_d8;
        puStack_b0 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar10 = puStack_b0;
        func_0x000107c61174();
        func_0x000107c61574(puVar10);
        puVar10 = &UNK_110533ea8;
        func_0x000107c613fc(&UNK_110533ea8,0x18,7);
        *(undefined **)(puVar10 + 0x10) = puVar9;
        pcStack_b8 = (code *)0x102692a6c;
        puStack_d8 = puVar3;
        uStack_d0 = 0x42000000;
        puStack_c8 = &UNK_100288f10;
        puStack_c0 = &UNK_110533ec0;
        ppuVar12 = &puStack_d8;
        puStack_b0 = puVar10;
        func_0x000107c60bc4(ppuVar12);
        puVar10 = puStack_b0;
        func_0x000107c61174(puVar9);
        func_0x000107c61574(puVar10);
        func_0x000107c3dcd4(0x4000000000000000,(double)uVar16 * 0.1,puVar6);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c3fe58(puVar7);
        func_0x000107c61170(puVar9);
        bVar5 = uVar16 != 0x1e;
        uVar16 = uVar16 + 1;
      } while (bVar5);
      func_0x000107c61170(uVar8);
    } while (uVar15 != uVar14);
  }
  return;
}



/* Entry: 102692a2c; end: 102692a73;  */

void FUN_102692a2c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)*(float *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 102692a74; end: 102692ca7;  */

void FUN_102692a74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  lVar11 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar11 != 0) {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102174274(0,lVar11,0);
    puVar12 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar4 = puStack_78;
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      func_0x000107c61434(uVar3);
      puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      func_0x000107c610f8();
      func_0x000107c486f8(0x4045000000000000,0x4045000000000000);
      puVar7 = &UNK_110533fe8;
      func_0x000107c613fc(&UNK_110533fe8,0x30,7);
      *(undefined8 *)(puVar7 + 0x18) = 0x4045000000000000;
      *(undefined8 *)(puVar7 + 0x10) = 0x4045000000000000;
      *(undefined8 *)(puVar7 + 0x20) = uVar1;
      *(undefined8 *)(puVar7 + 0x28) = uVar3;
      puVar8 = &UNK_110534010;
      func_0x000107c613fc(&UNK_110534010,0x20,7);
      *(undefined8 *)(puVar8 + 0x10) = 0x102693188;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      pcStack_88 = FUN_102693194;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100f9148c;
      puStack_90 = &UNK_110534028;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar10 = puStack_80;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(puVar8);
      func_0x000107c61574(puVar10);
      puVar10 = puVar6;
      func_0x000107c45138();
      func_0x000107c61180();
      func_0x000107c6142c(uVar3);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(puVar6);
      puVar6 = puVar8;
      func_0x000107c61544(puVar8,"",0x72,0xb,0x3c,1);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar8);
      if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102692ca8);
        (*pcVar5)();
      }
      uVar2 = *(ulong *)(puVar4 + 0x10);
      puStack_78 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        func_0x000102174274(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
      }
      puVar12 = puVar12 + 2;
      *(ulong *)(puStack_78 + 0x10) = uVar2 + 1;
      *(undefined **)(puStack_78 + uVar2 * 8 + 0x20) = puVar10;
      lVar11 = lVar11 + -1;
      puVar7 = puStack_78;
    } while (lVar11 != 0);
  }
  FUN_1026925cc(puVar7,param_2);
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 102692ca8; end: 102693167;  */

void FUN_102692ca8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  unkuint9 Var2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  double dVar18;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  
  func_0x000107c438d4(param_6);
  if (param_5 >> 0x3e == 0) {
    uVar14 = *(ulong *)((param_5 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  }
  else {
    uVar14 = param_5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_5) {
      uVar14 = param_5;
    }
    func_0x000107c60480();
    puVar6 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  }
  PTR__OBJC_CLASS___CATransaction_1126b5718 = puVar6;
  if (uVar14 != 0) {
    func_0x000107c61168();
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168();
    uVar15 = 0;
    do {
      if ((param_5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_5 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102693144);
          (*pcVar4)();
        }
        uVar8 = *(ulong *)(param_5 + 0x20 + uVar15 * 8);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar15;
        func_0x000100f95e24(uVar15,param_5);
      }
      bVar5 = SCARRY8(uVar15,1);
      uVar15 = uVar15 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102693140);
        (*pcVar4)();
      }
      uVar16 = 1;
      do {
        puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        func_0x000107c610f8();
        func_0x000107c46db4();
        func_0x000107c3d89c(param_6);
        do {
          puStack_d8 = (undefined *)0x0;
          func_0x000107c61598(&puStack_d8,8);
        } while (((long)puStack_d8 * 0x29 & 0xfffffffffffffff0U) == 0);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = puStack_d8;
        Var2 = (unkuint9)(SUB168(auVar1 * ZEXT816(0x29),8) + 0x28);
        dVar18 = (double)(unkint9)Var2;
        fVar17 = (float)param_3 - (float)(unkint9)Var2;
        if (fVar17 < 0.0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102693138);
          (*pcVar4)();
        }
        if (0x7f7fffff < (uint)ABS(fVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10269313c);
          (*pcVar4)();
        }
        do {
          puStack_d8 = (undefined *)0x0;
          func_0x000107c61598(&puStack_d8,8);
          uVar13 = ((ulong)puStack_d8 & 0xffffffff) * 0x1000001;
        } while ((uint)uVar13 < 0xffff01);
        uVar13 = uVar13 >> 0x20;
        if (uVar13 != 0x1000000) {
          fVar17 = fVar17 * ((float)uVar13 / 16777216.0) + 0.0;
        }
        func_0x000107c54b80((double)fVar17,param_4,dVar18,dVar18,puVar9);
        func_0x000107c3e740(puVar6);
        puVar10 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
        func_0x000107c610f8(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
        func_0x000107c46154(0x3e3851ec,0x3f4a3d71,0x3ef5c28f,0x3f733333);
        func_0x000107c52720(puVar6);
        func_0x000107c61170(puVar10);
        puVar10 = &UNK_110533ef8;
        func_0x000107c613fc(&UNK_110533ef8,0x28,7);
        *(undefined **)(puVar10 + 0x10) = puVar9;
        *(float *)(puVar10 + 0x18) = fVar17;
        *(double *)(puVar10 + 0x20) = dVar18;
        puVar3 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_b8 = FUN_102693168;
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0x42000000;
        puStack_c8 = &UNK_1000f6b44;
        puStack_c0 = &UNK_110533f10;
        ppuVar11 = &puStack_d8;
        puStack_b0 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar10 = puStack_b0;
        func_0x000107c61174();
        func_0x000107c61574(puVar10);
        func_0x000107c3dcd4(0x4000000000000000,(double)uVar16 * 0.1,puVar7);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c3fe58(puVar6);
        func_0x000107c3e740(puVar6);
        puVar10 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
        func_0x000107c610f8(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
        func_0x000107c46154(0x3f800000,0x3f28f5c3,0x3f800000,0x3f51eb85);
        func_0x000107c52720(puVar6);
        func_0x000107c61170(puVar10);
        puVar10 = &UNK_110533f48;
        func_0x000107c613fc(&UNK_110533f48,0x18,7);
        *(undefined **)(puVar10 + 0x10) = puVar9;
        pcStack_b8 = (code *)0x102693490;
        puStack_d8 = puVar3;
        uStack_d0 = 0x42000000;
        puStack_c8 = &UNK_1000f6b44;
        puStack_c0 = &UNK_110533f60;
        ppuVar11 = &puStack_d8;
        puStack_b0 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar10 = puStack_b0;
        func_0x000107c61174();
        func_0x000107c61574(puVar10);
        puVar10 = &UNK_110533f98;
        func_0x000107c613fc(&UNK_110533f98,0x18,7);
        *(undefined **)(puVar10 + 0x10) = puVar9;
        pcStack_b8 = (code *)0x1026934ac;
        puStack_d8 = puVar3;
        uStack_d0 = 0x42000000;
        puStack_c8 = &UNK_100288f10;
        puStack_c0 = &UNK_110533fb0;
        ppuVar12 = &puStack_d8;
        puStack_b0 = puVar10;
        func_0x000107c60bc4(ppuVar12);
        puVar10 = puStack_b0;
        func_0x000107c61174(puVar9);
        func_0x000107c61574(puVar10);
        func_0x000107c3dcd4(0x4000000000000000,(double)uVar16 * 0.1,puVar7);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c3fe58(puVar6);
        func_0x000107c61170(puVar9);
        bVar5 = uVar16 != 0x1e;
        uVar16 = uVar16 + 1;
      } while (bVar5);
      func_0x000107c61170(uVar8);
    } while (uVar15 != uVar14);
  }
  return;
}



/* Entry: 102693168; end: 102693193;  */

void FUN_102693168(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)*(float *)(unaff_x20 + 0x18),0xc054000000000000,
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 102693194; end: 1026931f3;  */

void FUN_102693194(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1026931f4; end: 102693427;  */

void FUN_1026931f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  lVar11 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar11 != 0) {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102174274(0,lVar11,0);
    puVar12 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar4 = puStack_78;
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      func_0x000107c61434(uVar3);
      puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      func_0x000107c610f8();
      func_0x000107c486f8(0x4045000000000000,0x4045000000000000);
      puVar7 = &UNK_110534060;
      func_0x000107c613fc(&UNK_110534060,0x30,7);
      *(undefined8 *)(puVar7 + 0x18) = 0x4045000000000000;
      *(undefined8 *)(puVar7 + 0x10) = 0x4045000000000000;
      *(undefined8 *)(puVar7 + 0x20) = uVar1;
      *(undefined8 *)(puVar7 + 0x28) = uVar3;
      puVar8 = &UNK_110534088;
      func_0x000107c613fc(&UNK_110534088,0x20,7);
      *(undefined8 *)(puVar8 + 0x10) = 0x1026934a4;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      uStack_88 = 0x1026934a8;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100f9148c;
      puStack_90 = &UNK_1105340a0;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar10 = puStack_80;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(puVar8);
      func_0x000107c61574(puVar10);
      puVar10 = puVar6;
      func_0x000107c45138();
      func_0x000107c61180();
      func_0x000107c6142c(uVar3);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(puVar6);
      puVar6 = puVar8;
      func_0x000107c61544(puVar8,"",0x72,0xb,0x3c,1);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar8);
      if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102693428);
        (*pcVar5)();
      }
      uVar2 = *(ulong *)(puVar4 + 0x10);
      puStack_78 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        func_0x000102174274(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
      }
      puVar12 = puVar12 + 2;
      *(ulong *)(puStack_78 + 0x10) = uVar2 + 1;
      *(undefined **)(puStack_78 + uVar2 * 8 + 0x20) = puVar10;
      lVar11 = lVar11 + -1;
      puVar7 = puStack_78;
    } while (lVar11 != 0);
  }
  FUN_102692ca8(puVar7,param_2);
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 102693428; end: 102693467;  */

void FUN_102693428(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000100eca28c(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102693468; end: 1026934af;  */

void FUN_102693468(long param_1,long param_2)

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



/* Entry: 1026934b0; end: 10269356b; -[_TtC41MapReactionFeedbackServicesImplementation28MapReactionFeedbackPerformer performFeedbackWithEmoji:animationDirection:] */

void FUN_1026934b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (param_4 == 1) {
    func_0x000107c6157c(param_1);
    FUN_1026931f4(param_3,uVar2);
  }
  else {
    if (param_4 != 0) {
      lStack_38 = param_4;
      func_0x000107c6157c(param_1);
      func_0x000107c60614(&UNK_1105341c0,&lStack_38,&UNK_1105341c0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10269356c);
      (*pcVar1)();
    }
    func_0x000107c6157c(param_1);
    FUN_102692a74(param_3,uVar2);
  }
  FUN_1026937e8();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10269356c; end: 10269362f; -[_TtC41MapReactionFeedbackServicesImplementation28MapReactionFeedbackPerformer performFeedbackWithReactionImages:animationDirection:] */

void FUN_10269356c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lStack_38;
  
  uVar2 = 0;
  func_0x000100de1f70(0);
  func_0x000107c5fc54(param_3,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (param_4 == 1) {
    func_0x000107c6157c(param_1);
    FUN_102692ca8(param_3,uVar2);
  }
  else {
    if (param_4 != 0) {
      lStack_38 = param_4;
      func_0x000107c6157c(param_1);
      func_0x000107c60614(&UNK_1105341c0,&lStack_38,&UNK_1105341c0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102693630);
      (*pcVar1)();
    }
    func_0x000107c6157c(param_1);
    FUN_1026925cc(param_3,uVar2);
  }
  FUN_1026937e8();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102693630; end: 102693673;  */

void FUN_102693630(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102693674; end: 10269368f;  */

void FUN_102693674(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb3c40,&UNK_10dac9c20);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026936d8,param_1);
  return;
}



/* Entry: 102693690; end: 1026936d7;  */

void FUN_102693690(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_102693e38(0);
  func_0x000107c610f8();
  func_0x000102693d7c(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1026936d8; end: 1026936fb;  */

void FUN_1026936d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_102693e38(0);
  func_0x000107c610f8();
  func_0x000102693d7c(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1026936fc; end: 1026937bf;  */

void FUN_1026936fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1026937c0; end: 1026937e7;  */

void FUN_1026937c0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4f934();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  lVar2 = 0;
  func_0x000102693654();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *param_1 = lVar2;
  return;
}



/* Entry: 1026937e8; end: 102693923;  */

void FUN_1026937e8(void)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  double dVar7;
  
  bVar3 = false;
  dVar7 = 0.0;
  uVar6 = 1;
  puVar1 = PTR___sytN_11034f1b0 + 8;
  do {
    if (dVar7 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10269391c);
      (*pcVar2)();
    }
    if (1.8446744073709552e+19 <= dVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102693920);
      (*pcVar2)();
    }
    puVar4 = &UNK_110534118;
    func_0x000107c613fc(&UNK_110534118,0x18,7);
    *(long *)(puVar4 + 0x10) = (long)dVar7;
    uVar5 = 0x12;
    func_0x000100859150(0x12,0,0x3c,4,0,0,&UNK_10dac9c98,puVar4,puVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar5);
    if (bVar3) {
      return;
    }
    bVar3 = uVar6 == 0x12;
    dVar7 = (double)uVar6 * 0.16666666666666666 * 1000000000.0;
    uVar6 = uVar6 + 1;
  } while ((dVar7 != INFINITY) && (!NAN(dVar7)));
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102693924);
  (*pcVar2)();
}



/* Entry: 102693924; end: 10269398b;  */

void FUN_102693924(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10269398c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(param_2);
  return;
}



/* Entry: 10269398c; end: 102693a0b;  */

void FUN_10269398c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x28) = unaff_x20;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102693a0c;
  }
  else {
    pcVar2 = (code *)0x102693a44;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar1);
  return;
}



/* Entry: 102693a0c; end: 102693a77;  */

void FUN_102693a0c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  FUN_102693b0c();
                    /* WARNING: Could not recover jumptable at 0x000102693a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102693a78; end: 102693acf;  */

void FUN_102693a78(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102693ad0;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[2] = lVar1;
  func_0x000107c5fce8();
  plVar3[3] = lVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  plVar3[4] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_10269398c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(uVar4);
  return;
}



/* Entry: 102693ad0; end: 102693b0b;  */

void FUN_102693ad0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102693b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102693b0c; end: 102693be3;  */

void FUN_102693b0c(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar2 = 10;
  func_0x0001016e7c78();
  puVar3 = PTR_PTR_1126affa8;
  if (uVar2 < 4) {
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102693bdc);
      (*pcVar1)();
    }
  }
  else if (uVar2 - 4 < 3) {
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102693be0);
      (*pcVar1)();
    }
  }
  else {
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (uVar2 - 7 < 4) {
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102693be4);
        (*pcVar1)();
      }
    }
    else if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102693bd8);
      (*pcVar1)();
    }
  }
  func_0x000107c4e57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 102693be4; end: 102693bfb;  */

bool FUN_102693be4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102693bfc; end: 102693c3b;  */

void FUN_102693bfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac9ca0;
  func_0x000107c61520(&UNK_10dac9ca0,&UNK_1105341c0);
  puRam0000000112eb3c50 = puVar1;
  return;
}



/* Entry: 102693c3c; end: 102693ce7;  */

void FUN_102693c3c(void)

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



/* Entry: 102693ce8; end: 102693d1f;  */

void FUN_102693ce8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 102693d20; end: 102693d2f; -[_TtC27MapReactionFeedbackServices27MapReactionFeedbackServices feedbackPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102693d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb3c58));
  return;
}



/* Entry: 102693d30; end: 102693dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102693d30(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb3c58) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102693dc8; end: 102693e27; -[_TtC27MapReactionFeedbackServices27MapReactionFeedbackServices init] */

void FUN_102693dc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapReactionFeedbackServices.MapReactionFeedbackServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102693df4);
  (*pcVar1)();
}



/* Entry: 102693e28; end: 102693e37; -[_TtC27MapReactionFeedbackServices27MapReactionFeedbackServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102693e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb3c58));
  return;
}



/* Entry: 102693e38; end: 102693e57;  */

void FUN_102693e38(void)

{
  func_0x000107c61168(&PTR_PTR_1128573a0);
  return;
}



/* Entry: 102693e58; end: 102694003;  */

void FUN_102693e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb3c88,&UNK_10dac9da0);
  puVar1 = &UNK_1105342c0;
  func_0x000107c613fc(&UNK_1105342c0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(0x102693f20,puVar1);
  return;
}



/* Entry: 102694004; end: 102694013;  */

undefined1  [16] FUN_102694004(void)

{
  return ZEXT816(0x1105342e8);
}



/* Entry: 102694014; end: 10269405f;  */

void FUN_102694014(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102694060; end: 10269432f;  */

void FUN_102694060(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *param_2;
  func_0x0001000285a8(0x112eb3c98,&UNK_10dac9df0);
  puVar6 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec(puVar6);
  func_0x000102694124(uVar7,uVar3,uVar1,uVar4,uVar2,uVar5,puVar6);
  func_0x000107c61574(puVar6);
  func_0x000100082720("MapRequestRealTimeLocationPresenterEntryPointProvider",0x35,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102694330; end: 102694343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102694330(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar10 = &lStack_70;
  lVar8 = lVar1;
  FUN_102695d5c();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar9 + _DAT_112eb3ca8) = 0;
  *(undefined8 *)(lVar9 + _DAT_112eb3cb0) = 0;
  *(long *)(lVar9 + _DAT_112eb3cb8) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112eb3cc0) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112eb3cc8) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112eb3cd0) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112eb3cd8) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112eb3ce0) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112eb3ce8) = uVar11;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar11);
  func_0x000107c61154(&lStack_70,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 102694344; end: 10269441f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102694344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb3ca8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb3cb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb3cb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb3cc0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb3cc8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb3cd0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb3cd8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eb3ce0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eb3ce8) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102694420; end: 10269471b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102694420(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      FUN_102694760();
      if (param_2 != 0) {
        puVar3 = PTR_PTR_1126aad48;
        func_0x000107c610f8(PTR_PTR_1126aad48);
        func_0x000107c5fadc(lVar2,param_2);
        func_0x000107c6142c(param_2);
        func_0x000107c46a28(puVar3);
        func_0x000107c61170(lVar2);
        puVar4 = PTR_PTR_1126aad50;
        func_0x000107c610f8(PTR_PTR_1126aad50);
        func_0x000107c453e4();
        func_0x000107c52168();
        puVar5 = PTR_PTR_1126aad58;
        func_0x000107c610f8(PTR_PTR_1126aad58);
        func_0x000107c61174(puVar3);
        func_0x000107c61174(puVar4);
        func_0x000107c49520(puVar5);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(lVar1);
        return puVar5;
      }
      func_0x000107c615e8(lVar1);
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10269471c; end: 102694757; -[_TtC26MapRequestRealTimeLocation35MapRequestRealTimeLocationPresenter present] */

/* WARNING: Possible PIC construction at 0x000102694744: Changing call to branch */

void FUN_10269471c(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_102694420();
  if (lVar1 != 0) {
    func_0x0001026945b4();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102694758; end: 10269475f; -[_TtC26MapRequestRealTimeLocation35MapRequestRealTimeLocationPresenter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_102694758(void)

{
  return 0;
}



/* Entry: 102694760; end: 1026948d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102694760(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar4 = lStack_38;
  lVar3 = *(long *)(lStack_38 + _DAT_112fcd5d8);
  func_0x000107c61174();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    goto LAB_1026948b8;
  }
  func_0x000100083b20(&lStack_38);
  uVar5 = *(undefined8 *)(lStack_38 + _DAT_112eb7b08);
  uVar2 = ((undefined8 *)(lStack_38 + _DAT_112eb7b08))[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x000107c5fadc(uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  lVar3 = lVar4;
  func_0x000107c4c39c();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(lVar4);
  if (lVar3 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    goto LAB_1026948b8;
  }
  uVar6 = ((ulong *)(lVar3 + _DAT_112fcd620))[1];
  if (uVar6 == 0) {
LAB_102694880:
    uVar7 = *(ulong *)(lVar3 + _DAT_112fcd618);
    uVar6 = ((ulong *)(lVar3 + _DAT_112fcd618))[1];
  }
  else {
    uVar7 = *(ulong *)(lVar3 + _DAT_112fcd620);
    uVar1 = uVar7 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar1 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_102694880;
  }
  func_0x000107c61434(uVar6);
  func_0x000107c61170(lVar3);
LAB_1026948b8:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 1026948d4; end: 10269493f;  */

void FUN_1026948d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102694940,uVar1,uVar2);
  return;
}



/* Entry: 102694940; end: 102694a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102694940(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  lVar3 = _DAT_112eb3ca8;
  uVar1 = 0;
  if (*(long *)(lVar2 + _DAT_112eb3ca8) != 0) {
    func_0x000107c42018();
    uVar1 = *(undefined8 *)(lVar2 + lVar3);
  }
  lVar4 = *(long *)(unaff_x22 + 0x28);
  *(undefined8 *)(lVar2 + lVar3) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(lVar4 + _DAT_112eb3cb0);
  *(undefined8 *)(lVar4 + _DAT_112eb3cb0) = 0;
  func_0x000107c61170(uVar1);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar2 = _DAT_112eb7b00;
  lVar3 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61428(lVar3 + _DAT_112eb7b00,unaff_x22 + 0x10,0,0);
  lVar2 = lVar3 + lVar2;
  func_0x000107c61618();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    func_0x000107c503e8(lVar2);
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102694a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102694a14; end: 102694a4f;  */

void FUN_102694a14(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102694a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102694a50; end: 102694b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102694a50(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c4d80c();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
    FUN_102694b9c();
    if (lVar1 == 0) {
      func_0x000107c615e8(lVar2);
    }
    else {
      puVar3 = &UNK_110534540;
      func_0x000107c613fc(&UNK_110534540,0x20,7);
      *(long *)(puVar3 + 0x10) = lVar2;
      *(long *)(puVar3 + 0x18) = lVar1;
      puVar4 = &UNK_110534568;
      func_0x000107c613fc(&UNK_110534568,0x20,7);
      *(undefined **)(puVar4 + 0x10) = &UNK_10dac9f10;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      func_0x000107c615f0(lVar2);
      func_0x000107c61174(lVar1);
      uVar5 = 0x10;
      func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac9f18,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar5);
    }
  }
  return;
}



/* Entry: 102694b9c; end: 102694e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102694b9c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  lVar1 = *(long *)(lStack_58 + _DAT_112fcd5d8);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    return (undefined *)0x0;
  }
  func_0x000100083b20(&lStack_58);
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_112eb7b08);
  uVar10 = ((undefined8 *)(lStack_58 + _DAT_112eb7b08))[1];
  func_0x000107c61434(uVar10);
  func_0x000107c61170(lStack_58);
  uVar11 = uVar10;
  func_0x000107c5fadc(uVar3,uVar10);
  func_0x000107c6142c(uVar10);
  lVar1 = lVar2;
  func_0x000107c4c39c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (lVar1 == 0) {
    func_0x000107c615e8(lVar2);
    return (undefined *)0x0;
  }
  uVar10 = ((ulong *)(lVar1 + _DAT_112fcd620))[1];
  if (uVar10 != 0) {
    uVar11 = *(ulong *)(lVar1 + _DAT_112fcd620);
    func_0x000107c61434(uVar10);
    uVar9 = uVar10;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar10);
    uVar10 = uVar11;
    func_0x00010901e6c8();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    uVar11 = uVar9;
    if (uVar10 != 0) {
      uVar4 = uVar10;
      func_0x000107c5faec();
      uVar11 = uVar9;
      func_0x000107c61170();
      uVar5 = uVar4 & 0xffffffffffff;
      if ((uVar9 & 0x2000000000000000) != 0) {
        uVar5 = uVar9 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) goto LAB_102694d38;
      func_0x000107c6142c(uVar9);
    }
  }
  uVar4 = *(ulong *)(lVar1 + _DAT_112fcd618);
  uVar9 = ((ulong *)(lVar1 + _DAT_112fcd618))[1];
  uVar10 = uVar9;
  func_0x000107c61434();
LAB_102694d38:
  func_0x0001068753c4();
  func_0x000107c61180();
  if (uVar10 == 0) {
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(uVar9);
    return (undefined *)0x0;
  }
  uVar5 = uVar10;
  func_0x000107c5faec();
  func_0x000107c61170(uVar10);
  lVar6 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
  lVar7 = lVar6;
  func_0x00010075bbf0();
  *(long *)(lVar6 + 0x40) = lVar7;
  *(ulong *)(lVar6 + 0x20) = uVar4;
  *(ulong *)(lVar6 + 0x28) = uVar9;
  func_0x000107c61434(uVar9);
  uVar10 = uVar11;
  func_0x000107c5fb00(uVar5,uVar11,lVar6);
  func_0x000107c6142c(uVar11);
  puVar8 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  func_0x000107c5fadc(uVar5,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c40930(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c6142c(uVar9);
  return puVar8;
}



/* Entry: 102694e80; end: 102694eeb;  */

void FUN_102694e80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102694eec,uVar1,uVar2);
  return;
}



/* Entry: 102694eec; end: 102694f2b;  */

void FUN_102694eec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c5c2e0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102694f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102694f2c; end: 102694f97;  */

void FUN_102694f2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102694f98,uVar1,uVar2);
  return;
}



/* Entry: 102694f98; end: 102695273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102694f98(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x90,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xf8) = lVar8;
  if (lVar8 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  }
  else {
    func_0x000100083b20(unaff_x22 + 0xa8);
    lVar9 = *(long *)(unaff_x22 + 0xa8);
    lVar10 = lVar9;
    func_0x000107c4c3ec();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    lVar9 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x100) = lVar9;
    func_0x000107c61170(lVar10);
    if (lVar9 == 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
      func_0x000107c61170(lVar8);
      func_0x000107c61574(uVar11);
    }
    else {
      func_0x000100083b20(unaff_x22 + 0xb0);
      lVar10 = *(long *)(unaff_x22 + 0xb0);
      lVar3 = *(long *)(lVar10 + _DAT_11307fc48);
      func_0x000107c61174();
      func_0x000107c61170(lVar10);
      lVar10 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x108) = lVar10;
      func_0x000107c61170(lVar3);
      if (lVar10 != 0) {
        uVar4 = 0;
        func_0x000104522c9c(0);
        puVar5 = &SUB_104522c9c;
        *(undefined8 *)(unaff_x22 + 0x110) = _DAT_112eb3ce8;
        func_0x000100083b20(unaff_x22 + 0xb8);
        lVar8 = *(long *)(unaff_x22 + 0xb8);
        puVar1 = (undefined8 *)(lVar8 + _DAT_112eb7b08);
        uVar11 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c61434(uVar2);
        func_0x000107c61170(lVar8);
        func_0x00010452281c(uVar11,uVar2);
        *(undefined8 *)(unaff_x22 + 0x118) = uVar11;
        func_0x000107c6142c(uVar2);
        func_0x0001000285a8(0x112ea3c80,&UNK_10dab6860);
        FUN_102695ef4(&SUB_104522c9c,0x112d65a40,&UNK_10d92b760);
        func_0x000107c613fc();
        *(undefined8 *)(puVar5 + 0x18) = 3;
        *(undefined8 *)(puVar5 + 0x10) = 1;
        *(undefined8 *)(puVar5 + 0x20) = uVar11;
        func_0x000107c61174(uVar11);
        puVar6 = puVar5;
        func_0x000107c5fc48(puVar5,uVar4);
        func_0x000107c61574(puVar5);
        func_0x000107c5b59c();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        lVar8 = lVar10;
        func_0x000100759c94(lVar10,0);
        *(long *)(unaff_x22 + 0x120) = lVar8;
        func_0x000107c61170(lVar10);
        plVar7 = (long *)0x80;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x128) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_102695274;
                    /* WARNING: Could not recover jumptable at 0x000102695210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        FUN_102524b30();
        return;
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
      func_0x000107c61170(lVar8);
      func_0x000107c61574(uVar11);
      func_0x000107c615e8(lVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000102695270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102695274; end: 10269537b;  */

void FUN_102695274(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x130) = param_1;
  *(undefined1 *)(lVar1 + 0x148) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1026952c8,0,0);
  return;
}



/* Entry: 10269537c; end: 102695597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269537c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(unaff_x22 + 0x130);
  if (lVar6 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
    func_0x000107c61170(uVar8);
    func_0x000107c615e8(uVar4);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(uVar7);
  }
  else {
    lVar5 = *(long *)(lVar6 + _DAT_11307fc78);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
    if (*(long *)(lVar5 + 0x10) != 0) {
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      uVar8 = *(undefined8 *)(lVar5 + 0x28);
      func_0x000107c61434(uVar8);
      func_0x000100083b20(unaff_x22 + 200);
      lVar6 = *(long *)(unaff_x22 + 200);
      puVar1 = (undefined8 *)(lVar6 + _DAT_112eb7b08);
      uVar7 = *puVar1;
      uVar9 = puVar1[1];
      func_0x000107c61434(uVar9);
      func_0x000107c61170(lVar6);
      FUN_102695fb0(uVar7,uVar9,uVar4,uVar8);
      *(undefined8 *)(unaff_x22 + 0x138) = uVar7;
      func_0x000107c6142c(uVar9);
      func_0x000107c5fadc(uVar4,uVar8);
      *(undefined8 *)(unaff_x22 + 0x140) = uVar4;
      func_0x000107c6142c(uVar8);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1026955fc;
      lVar6 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar6,0);
      uVar4 = 0x112ea3c70;
      func_0x0001000285a8(0x112ea3c70,&UNK_10dac9f00);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_1025242b8;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110534508;
      *(long *)(unaff_x22 + 0x70) = lVar6;
      func_0x000107c51dfc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x148);
    func_0x000107c61434(lVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar2);
    func_0x00010253310c(lVar6,uVar3);
    func_0x000107c615e8(uVar8);
    func_0x000107c61574(uVar9);
    func_0x000107c6142c(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000102695594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102695598; end: 1026955fb;  */

void FUN_102695598(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001026955f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026955fc; end: 102695637;  */

void FUN_1026955fc(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102695638,*(undefined8 *)(*unaff_x22 + 0xe8),*(undefined8 *)(*unaff_x22 + 0xf0));
  return;
}



/* Entry: 102695638; end: 1026956df;  */

void FUN_102695638(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  lVar8 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c61170(uVar5);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  if (lVar8 == 0) {
    FUN_102694a50();
  }
  func_0x000107c61170(uVar2);
  func_0x00010253310c(uVar5,uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(uVar3);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001026956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026956e0; end: 10269573f; -[_TtC26MapRequestRealTimeLocation35MapRequestRealTimeLocationPresenter init] */

void FUN_1026956e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRequestRealTimeLocation.MapRequestRealTimeLocationPresenter",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269570c);
  (*pcVar1)();
}



/* Entry: 102695740; end: 1026957e7; -[_TtC26MapRequestRealTimeLocation35MapRequestRealTimeLocationPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026957cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026957d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102695740(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb3ce8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb3cb8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb3cd8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb3cd0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb3cc0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb3cc8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb3ce0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb3ca8));
  return;
}



/* Entry: 1026957e8; end: 1026959e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026957e8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_60);
  lVar3 = lStack_60;
  uVar6 = *(undefined8 *)(lStack_60 + _DAT_112fa9390);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lVar3);
  func_0x0001000d224c(&lStack_60);
  func_0x000107c61574(uVar6);
  lVar3 = lStack_60;
  func_0x000107c614f0(lStack_60);
  func_0x000100083b20(&lStack_68);
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_112eb7b08);
  uVar2 = ((undefined8 *)(lStack_68 + _DAT_112eb7b08))[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61170(lStack_68);
  (**(code **)(lStack_58 + 0x18))(uVar6,uVar2,1,2,lVar3,lStack_58);
  func_0x000107c615e8(lStack_60);
  func_0x000107c6142c(uVar2);
  puVar4 = &UNK_1105343e0;
  func_0x000107c613fc(&UNK_1105343e0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar1 = PTR___sytN_11034f1b0 + 8;
  uVar6 = 0x10;
  func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac9e10,puVar4,puVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar6);
  puVar4 = &UNK_110534408;
  func_0x000107c613fc(&UNK_110534408,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
  puVar5 = &UNK_110534430;
  func_0x000107c613fc(&UNK_110534430,0x20,7);
  *(undefined **)(puVar5 + 0x10) = &UNK_10dac9e20;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  func_0x000107c61174();
  uVar6 = 0x10;
  func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac9e30,puVar5,puVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1026959e8; end: 102695a0f; -[_TtC26MapRequestRealTimeLocation35MapRequestRealTimeLocationPresenter didTapRequest] */

void FUN_1026959e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026957e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102695a10; end: 102695adb; -[_TtC26MapRequestRealTimeLocation35MapRequestRealTimeLocationPresenter didTapGoBack] */

void FUN_102695a10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1105344c8;
  func_0x000107c613fc(&UNK_1105344c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_1105344f0;
  func_0x000107c613fc(&UNK_1105344f0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac9ed8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x10;
  func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac9ee0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102695adc; end: 102695bb7; -[_TtC26MapRequestRealTimeLocation35MapRequestRealTimeLocationPresenter tray:positionDidChange:] */

void FUN_102695adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_4 == 2) {
    puVar1 = &UNK_110534478;
    func_0x000107c613fc(&UNK_110534478,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    puVar2 = &UNK_1105344a0;
    func_0x000107c613fc(&UNK_1105344a0,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10dac9ec8;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    uVar3 = 0x10;
    func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac9ed0,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102695bb8; end: 102695c3b; -[_TtC26MapRequestRealTimeLocation35MapRequestRealTimeLocationPresenter tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102695bb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xbff0000000000000;
  if (param_4 == 8) {
    lVar1 = *(long *)(param_1 + _DAT_112eb3cb0);
    if (lVar1 == 0) {
      uVar2 = 0x4082200000000000;
    }
    else {
      func_0x000107c61174(0xbff0000000000000);
      func_0x000107c61174(lVar1);
      FUN_1026962e0();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
    }
  }
  return uVar2;
}



/* Entry: 102695c3c; end: 102695c8f;  */

void FUN_102695c3c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026962d8;
  plVar3[0x1b] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x1c] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x1d] = lVar1;
  plVar3[0x1e] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102694f98,lVar1,lVar2);
  return;
}



/* Entry: 102695c90; end: 102695cdb;  */

void FUN_102695c90(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1026962c0;
  plVar2[5] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[6] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102694940,lVar1,lVar3);
  return;
}



/* Entry: 102695cdc; end: 102695d4b;  */

void FUN_102695cdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026962c4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}


