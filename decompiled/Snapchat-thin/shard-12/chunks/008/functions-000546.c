/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098d1d68; end: 1098d1dcf;  */

undefined8 * FUN_1098d1d68(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b19f58;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 1098d1dd0; end: 1098d1dff;  */

long FUN_1098d1dd0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d1e00; end: 1098d1e03;  */

long FUN_1098d1e00(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d1e04; end: 1098d1e17;  */

void FUN_1098d1e04(void)

{
  FUN_1098d1dd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d1e18; end: 1098d1e23;  */

undefined ** FUN_1098d1e18(void)

{
  return &PTR_DAT_110b19f98;
}



/* Entry: 1098d1e24; end: 1098d1f43;  */

void FUN_1098d1e24(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098d1f44; end: 1098d1f47;  */

void FUN_1098d1f44(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098d1f48; end: 1098d1fb7;  */

void FUN_1098d1f48(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098d1fb8; end: 1098d1fbf;  */

void FUN_1098d1fb8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110b19f58;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1098d1fc0; end: 1098d200f;  */

void FUN_1098d1fc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110b19f58;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1098d2010; end: 1098d2017;  */

void FUN_1098d2010(void)

{
  return;
}



/* Entry: 1098d2018; end: 1098d2047;  */

undefined8 * FUN_1098d2018(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110b1a000;
  param_1[1] = param_2;
  FUN_1098d2048();
  return param_1;
}



/* Entry: 1098d2048; end: 1098d2087;  */

void FUN_1098d2048(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x50) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x58) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}



/* Entry: 1098d2088; end: 1098d20bb;  */

long FUN_1098d2088(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d20bc(param_1);
  return param_1;
}



/* Entry: 1098d20bc; end: 1098d216b;  */

/* WARNING: Possible PIC construction at 0x0001098d2158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098d215c) */

long FUN_1098d20bc(long param_1)

{
  char in_NG;
  char in_OV;
  
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_1098daa20();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_1098d5e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_1098dbaac();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_1098d7960();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_1098d1dd0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_1098d7444();
  }
  __ZdlPv();
  func_0x00010006804c(param_1 + 0x30);
  if (in_NG == in_OV) {
    func_0x0001002a998c(param_1);
  }
  return param_1;
}



/* Entry: 1098d216c; end: 1098d216f;  */

long FUN_1098d216c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d20bc(param_1);
  return param_1;
}



/* Entry: 1098d2170; end: 1098d2183;  */

void FUN_1098d2170(void)

{
  FUN_1098d2088();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d2184; end: 1098d218f;  */

undefined ** FUN_1098d2184(void)

{
  return &PTR_DAT_110b1a040;
}



/* Entry: 1098d2190; end: 1098d226b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098d2190(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001098da778(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1098d5ef8(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1098dbb5c(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_1098d79b4(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_1098d1e24(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_1098d749c(*(undefined8 *)(param_1 + 0x90));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1098d226c; end: 1098d2597;  */

long * FUN_1098d226c(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  
  uVar3 = *(uint *)(param_1 + 2);
  plVar5 = param_1;
  if ((uVar3 & 1) != 0) {
    plVar5 = (long *)0x1;
    func_0x0001098d2c5c(1,param_1[0xc],*(undefined4 *)(param_1[0xc] + 0x14));
    param_2 = plVar5;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    plVar5 = (long *)0x2;
    func_0x0001098d2c5c(2,param_1[0xd],*(undefined4 *)(param_1[0xd] + 0x14));
    param_2 = plVar5;
  }
  puVar11 = (undefined8 *)(param_1[9] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    if (puVar11[1] != 0) {
      puVar11 = (undefined8 *)*puVar11;
      goto LAB_1098d22e8;
    }
  }
  else if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_1098d22e8:
    func_0x0001098d2ce8(puVar11);
    plVar5 = param_3;
    func_0x0001098d2c80(param_3,3);
    param_2 = plVar5;
  }
  plVar6 = plVar5;
  if ((int)param_1[0x13] != 0) {
    func_0x0001098d2c68();
    plVar6 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar5);
    func_0x0001098d2c74();
    param_2 = plVar6;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    plVar6 = (long *)0x5;
    func_0x0001098d2c5c(5,param_1[0xe],*(undefined4 *)(param_1[0xe] + 0x14));
    param_2 = plVar6;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    plVar6 = (long *)0x6;
    func_0x0001098d2c5c(6,param_1[0xf],*(undefined4 *)(param_1[0xf] + 0x18));
    param_2 = plVar6;
  }
  if ((uVar3 >> 4 & 1) != 0) {
    plVar6 = (long *)0x7;
    func_0x0001098d2c5c(7,param_1[0x10],*(undefined4 *)(param_1[0x10] + 0x18));
    param_2 = plVar6;
  }
  uVar4 = *(uint *)(param_1 + 5);
  if (uVar4 != 0) {
    func_0x0001098d2c68();
    *(undefined1 *)plVar6 = 0x42;
    plVar5 = plVar6;
    while (0x7f < uVar4) {
      func_0x0001098d2cf0();
    }
    *(char *)((long)plVar6 + 1) = (char)uVar4;
    piVar12 = (int *)param_1[4];
    piVar2 = piVar12 + (int)param_1[3];
    do {
      func_0x0001098d2c68();
      uVar8 = (ulong)*piVar12;
      param_2 = (long *)((long)plVar5 + 1);
      plVar6 = plVar5;
      while (0x7f < uVar8) {
        func_0x0001098d2d04();
        uVar8 = extraout_x8;
      }
      piVar12 = piVar12 + 1;
      *(char *)plVar5 = (char)uVar8;
      plVar5 = plVar6;
    } while (piVar12 < piVar2);
  }
  plVar5 = plVar6;
  if (*(int *)((long)param_1 + 0x9c) != 0) {
    func_0x0001098d2c68();
    plVar5 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar6);
    func_0x0001098d2c74();
    param_2 = plVar5;
  }
  plVar6 = plVar5;
  if ((int)param_1[0x14] != 0) {
    func_0x0001098d2c68();
    plVar6 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar5);
    func_0x0001098d2c74();
    param_2 = plVar6;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    plVar6 = (long *)0xb;
    func_0x0001098d2c5c(0xb,param_1[0x11],*(undefined4 *)(param_1[0x11] + 0x1c));
    param_2 = plVar6;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    plVar6 = (long *)0xc;
    func_0x0001098d2c5c(0xc,param_1[0x12],*(undefined4 *)(param_1[0x12] + 0x44));
    param_2 = plVar6;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 != 0) {
    func_0x0001098d2c68();
    *(undefined1 *)plVar6 = 0x6a;
    plVar5 = plVar6;
    while (0x7f < uVar3) {
      func_0x0001098d2cf0();
    }
    *(char *)((long)plVar6 + 1) = (char)uVar3;
    piVar12 = (int *)param_1[7];
    piVar2 = piVar12 + (int)param_1[6];
    do {
      func_0x0001098d2c68();
      uVar8 = (ulong)*piVar12;
      param_2 = (long *)((long)plVar5 + 1);
      plVar6 = plVar5;
      while (0x7f < uVar8) {
        func_0x0001098d2d04();
        uVar8 = extraout_x8_00;
      }
      piVar12 = piVar12 + 1;
      *(char *)plVar5 = (char)uVar8;
      plVar5 = plVar6;
    } while (piVar12 < piVar2);
  }
  puVar11 = (undefined8 *)(param_1[10] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    if (puVar11[1] != 0) {
      puVar11 = (undefined8 *)*puVar11;
      goto LAB_1098d24e4;
    }
  }
  else if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_1098d24e4:
    func_0x0001098d2ce8(puVar11);
    param_2 = param_3;
    func_0x0001098d2c80(param_3,0xe);
  }
  puVar11 = (undefined8 *)(param_1[0xb] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    if (puVar11[1] == 0) goto LAB_1098d2544;
    puVar11 = (undefined8 *)*puVar11;
  }
  else if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_1098d2544;
  func_0x0001098d2ce8(puVar11);
  param_2 = param_3;
  func_0x0001098d2c80(param_3,0xf);
LAB_1098d2544:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar9 = param_1[1] & 0xfffffffffffffffe;
  uVar8 = (ulong)*(char *)(uVar9 + 0x1f);
  if ((long)uVar8 < 0) {
    lVar7 = *(long *)(uVar9 + 8);
    uVar8 = *(ulong *)(uVar9 + 0x10);
  }
  else {
    lVar7 = uVar9 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar8) {
    while( true ) {
      iVar13 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar10 = (int)uVar8;
      uVar8 = (ulong)(uint)(iVar10 - iVar13);
      if (iVar10 - iVar13 == 0 || iVar10 < iVar13) break;
      func_0x00010b4d5738();
      puVar1 = (undefined1 *)((long)param_2 + (long)iVar13);
      param_2 = param_3;
      func_0x000107c303e4(param_3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar10);
  }
  _memcpy(param_2,lVar7,uVar8 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar8);
}



/* Entry: 1098d2598; end: 1098d27ef;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_1098d2598(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = 0;
  lVar4 = 0;
  for (lVar5 = (long)*(int *)(param_1 + 0x18); lVar5 != 0; lVar5 = lVar5 + -1) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x20) + (lVar3 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar4;
    lVar3 = lVar3 + 0x100000000;
  }
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar3 = lVar4 + (ulong)((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
  }
  lVar6 = 0;
  lVar5 = 0;
  *(int *)(param_1 + 0x28) = (int)lVar4;
  for (lVar4 = (long)*(int *)(param_1 + 0x30); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x38) + (lVar6 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar5;
    lVar6 = lVar6 + 0x100000000;
  }
  lVar3 = lVar5 + lVar3;
  if (lVar5 != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)(int)lVar5) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x40) = (int)lVar5;
  uVar2 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x0001098d2c9c();
  }
  uVar2 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x0001098d2c9c();
  }
  uVar2 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x0001098d2c9c();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001098d27f0(*(undefined8 *)(param_1 + 0x60));
      func_0x0001098d2c9c();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1098d6050(*(undefined8 *)(param_1 + 0x68));
      func_0x0001098d2c44();
      func_0x0001098d2c8c();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001098d280c(*(undefined8 *)(param_1 + 0x70));
      func_0x0001098d2c9c();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0001098d7a6c(*(undefined8 *)(param_1 + 0x78));
      func_0x0001098d2c44();
      func_0x0001098d2c8c();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x0001098d1edc(*(undefined8 *)(param_1 + 0x80));
      func_0x0001098d2c44();
      func_0x0001098d2c8c();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x0001059918cc(*(undefined8 *)(param_1 + 0x88));
      func_0x0001098d2c9c();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_1098d76f0(*(undefined8 *)(param_1 + 0x90));
      func_0x0001098d2c44();
      func_0x0001098d2c8c();
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    func_0x0001098d2ca8();
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    func_0x0001098d2ca8();
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xa0)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 1098d27f0; end: 1098d2827;  */

long FUN_1098d27f0(long param_1)

{
  long extraout_x8;
  
  func_0x0001098dac60();
  FUN_1098d2c44();
  return param_1 + extraout_x8;
}



/* Entry: 1098d2828; end: 1098d2aa7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098d2828(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  func_0x000107c282d0(param_1 + 0x30,param_2 + 0x30);
  uVar2 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar5;
        func_0x0001098d2aec(uVar5,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_1098da7ec();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar5;
        func_0x0001098d2b28(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        FUN_1098d6100();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar5;
        func_0x0001098d2b64(uVar5,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_1098dbf50();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar2 = uVar5;
        func_0x0001098d2ba0(uVar5,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar2;
      }
      else {
        FUN_1098d7ad8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar5;
        func_0x0001098d2bd4(uVar5,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        FUN_1098d1f48();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar5;
        func_0x000105992a88(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        func_0x0001098d2c08(uVar5,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar5;
      }
      else {
        FUN_1098d77f8();
      }
    }
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_2 + 0x98);
  }
  if (*(int *)(param_2 + 0x9c) != 0) {
    *(int *)(param_1 + 0x9c) = *(int *)(param_2 + 0x9c);
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    *(int *)(param_1 + 0xa0) = *(int *)(param_2 + 0xa0);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098d2aa8; end: 1098d2aaf;  */

undefined8 * FUN_1098d2aa8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xa8;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0xa8);
  }
  *puVar1 = &PTR_FUN_110b1a000;
  puVar1[1] = param_2;
  FUN_1098d2048();
  return puVar1;
}



/* Entry: 1098d2ab0; end: 1098d2c43;  */

undefined8 * FUN_1098d2ab0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xa8;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0xa8);
  }
  *puVar1 = &PTR_FUN_110b1a000;
  puVar1[1] = param_1;
  FUN_1098d2048();
  return puVar1;
}



/* Entry: 1098d2c44; end: 1098d2d53;  */

void FUN_1098d2c44(void)

{
  return;
}



/* Entry: 1098d2d54; end: 1098d2d7b;  */

long FUN_1098d2d54(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 1098d2d7c; end: 1098d2dc7;  */

undefined8 * FUN_1098d2d7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110b1a0a8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x0001098d2d18(param_1,param_3);
  return param_1;
}



/* Entry: 1098d2dc8; end: 1098d2dcb;  */

long FUN_1098d2dc8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 1098d2dcc; end: 1098d2ddf;  */

void FUN_1098d2dcc(void)

{
  FUN_1098d2d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d2de0; end: 1098d2dff;  */

undefined ** FUN_1098d2de0(void)

{
  return &PTR_DAT_110b1a0e8;
}



/* Entry: 1098d2e00; end: 1098d2eab;  */

long * FUN_1098d2e00(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = param_1;
  if (param_1[2] != 0) {
    puVar2 = param_1;
    func_0x0001098d2f50();
    uVar6 = param_1[2];
    puVar1 = (undefined8 *)0x9;
    func_0x000107c280a8(9,puVar2);
    param_2 = puVar1 + 1;
    *puVar1 = uVar6;
  }
  if (param_1[3] != 0) {
    func_0x0001098d2f50();
    uVar6 = param_1[3];
    puVar2 = (undefined8 *)0x11;
    func_0x000107c280a8(0x11,puVar1);
    param_2 = puVar2 + 1;
    *puVar2 = uVar6;
  }
  if ((param_1[1] & 1) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 1098d2eac; end: 1098d2eff;  */

long FUN_1098d2eac(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 1098d2f00; end: 1098d2f47;  */

void FUN_1098d2f00(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110b1a0a8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1098d2f48; end: 1098d2f5b;  */

void FUN_1098d2f48(void)

{
  return;
}



/* Entry: 1098d2f5c; end: 1098d2faf;  */

void FUN_1098d2f5c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_1098d17dc();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1098d2fb0; end: 1098d2ff3;  */

long FUN_1098d2fb0(long param_1)

{
  func_0x0001098d40b0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098ce1b0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1098d2f5c(param_1);
  }
  return param_1;
}



/* Entry: 1098d2ff4; end: 1098d2ff7;  */

long FUN_1098d2ff4(long param_1)

{
  func_0x0001098d40b0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098ce1b0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1098d2f5c(param_1);
  }
  return param_1;
}



/* Entry: 1098d2ff8; end: 1098d300b;  */

void FUN_1098d2ff8(void)

{
  FUN_1098d2fb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d300c; end: 1098d3017;  */

undefined ** FUN_1098d300c(void)

{
  return &PTR_DAT_110b1a278;
}



/* Entry: 1098d3018; end: 1098d3063;  */

void FUN_1098d3018(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1098ce22c(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1098d2f5c(param_1);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098d3064; end: 1098d311b;  */

long * FUN_1098d3064(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  int iVar5;
  int iVar6;
  
  plVar1 = param_1;
  plVar4 = param_3;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(param_1[3] + 0x20);
    plVar1 = (long *)0x1;
    func_0x0001098d40a8();
    param_2 = plVar1;
  }
  if ((int)param_1[6] == 2) {
    plVar4 = (long *)(ulong)*(uint *)(param_1[5] + 0x14);
    plVar1 = (long *)0x2;
    func_0x0001098d40a8();
    param_2 = plVar1;
  }
  if ((int)param_1[4] != 0) {
    func_0x0001098d4064();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 4);
    uVar2 = 0x18;
    func_0x000107c280a8(0x18,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x0001098d4108();
    if ((long)plVar4 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar4 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar4) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)plVar4;
        plVar4 = (long *)(ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar3,(ulong)plVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar4);
  }
  return param_2;
}



/* Entry: 1098d311c; end: 1098d31bf;  */

long FUN_1098d311c(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    FUN_1098ce360();
    func_0x0001098d4040();
    lVar2 = lVar2 + extraout_x8 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x30) == 2) {
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_1098d31c0();
    lVar2 = lVar2 + lVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x14) = (int)lVar2;
  return lVar2;
}



/* Entry: 1098d31c0; end: 1098d31db;  */

long FUN_1098d31c0(long param_1)

{
  long extraout_x8;
  
  FUN_1098d1940();
  func_0x0001098d4040();
  return param_1 + extraout_x8;
}



/* Entry: 1098d31dc; end: 1098d32bf;  */

void FUN_1098d31dc(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  ulong uVar4;
  
  func_0x0001098d40fc();
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      uVar3 = uVar4;
      func_0x0001098d3ed8(uVar4,*(undefined8 *)(unaff_x20 + 0x18));
      *(ulong *)(unaff_x21 + 0x18) = uVar3;
    }
    else {
      FUN_1098ce3f4();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x30);
  if (iVar2 != 0) {
    if (*(int *)(unaff_x21 + 0x30) == iVar2) {
      if (iVar2 == 2) {
        FUN_1098d19d8(*(undefined8 *)(unaff_x21 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      }
    }
    else {
      if (*(int *)(unaff_x21 + 0x30) != 0) {
        FUN_1098d2f5c();
      }
      *(int *)(unaff_x21 + 0x30) = iVar2;
      if (iVar2 == 2) {
        func_0x0001098d3f10(uVar4,*(undefined8 *)(unaff_x20 + 0x28));
        *(ulong *)(unaff_x21 + 0x28) = uVar4;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098d32c0; end: 1098d32eb;  */

undefined8 FUN_1098d32c0(undefined8 param_1)

{
  func_0x0001098d40b0();
  FUN_1098d32ec(param_1);
  return param_1;
}



/* Entry: 1098d32ec; end: 1098d330f;  */

/* WARNING: Possible PIC construction at 0x0001098d32fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098d3300) */

void FUN_1098d32ec(ulong *param_1)

{
  ulong uVar1;
  
  func_0x0001098d4128();
  uVar1 = *param_1 ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 1098d3310; end: 1098d3313;  */

undefined8 FUN_1098d3310(undefined8 param_1)

{
  func_0x0001098d40b0();
  FUN_1098d32ec(param_1);
  return param_1;
}



/* Entry: 1098d3314; end: 1098d3327;  */

void FUN_1098d3314(void)

{
  FUN_1098d32c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d3328; end: 1098d3333;  */

undefined ** FUN_1098d3328(void)

{
  return &PTR_DAT_110b1a2c0;
}



/* Entry: 1098d3334; end: 1098d336b;  */

void FUN_1098d3334(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098d4128();
  func_0x000107c3025c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098d336c; end: 1098d3443;  */

long * FUN_1098d336c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  
  plVar4 = param_3;
  func_0x0001098d40fc();
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    if (puVar3[1] != 0) {
      puVar3 = (undefined8 *)*puVar3;
      goto LAB_1098d33ac;
    }
  }
  else if (*(char *)((long)puVar3 + 0x17) != '\0') {
LAB_1098d33ac:
    func_0x0001098d40c4(puVar3);
    unaff_x20 = param_3;
    func_0x0001098d40b8(param_3,1);
  }
  puVar3 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    if (puVar3[1] == 0) goto LAB_1098d340c;
    puVar3 = (undefined8 *)*puVar3;
  }
  else if (*(char *)((long)puVar3 + 0x17) == '\0') goto LAB_1098d340c;
  func_0x0001098d40c4(puVar3);
  unaff_x20 = param_3;
  func_0x0001098d40b8(param_3,2);
LAB_1098d340c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001098d4108();
  if ((long)plVar4 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar2 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar2 - iVar5);
      if (iVar2 - iVar5 == 0 || iVar2 < iVar5) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x20 + (long)iVar5;
      unaff_x20 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar2);
  }
  _memcpy(unaff_x20,lVar1,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)plVar4);
}



/* Entry: 1098d3444; end: 1098d356f;  */

long FUN_1098d3444(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_1098d347c;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_1098d347c:
    lVar3 = 0;
    goto LAB_1098d3480;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_1098d3480:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 1098d3570; end: 1098d359b;  */

long FUN_1098d3570(long param_1)

{
  func_0x0001098d40b0();
  FUN_1098d3d54(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d359c; end: 1098d359f;  */

long FUN_1098d359c(long param_1)

{
  func_0x0001098d40b0();
  FUN_1098d3d54(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d35a0; end: 1098d35b3;  */

void FUN_1098d35a0(void)

{
  FUN_1098d3570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d35b4; end: 1098d35d7;  */

undefined ** FUN_1098d35b4(void)

{
  return &PTR_DAT_110b1a310;
}



/* Entry: 1098d35d8; end: 1098d36bf;  */

/* WARNING: Possible PIC construction at 0x0001098d3634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001098d3680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098d3638) */
/* WARNING: Removing unreachable block (ram,0x0001098d3684) */

long * FUN_1098d35d8(undefined1 *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  long *extraout_x8;
  long *plVar5;
  long *extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  int iVar6;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar7;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(int *)(param_1 + 0x10) < 1) {
    if (*(int *)(param_1 + 0x20) < 1) {
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        return param_2;
      }
      plVar4 = param_3;
      func_0x0001098d4108();
      if ((long)plVar4 < 0) {
        lVar3 = *(long *)(extraout_x8_01 + 8);
        plVar4 = *(long **)(extraout_x8_01 + 0x10);
      }
      else {
        lVar3 = extraout_x8_01 + 8;
      }
    }
    else {
      puVar2 = param_1;
      func_0x0001098d4064();
      plVar4 = (long *)(ulong)(uint)(*(int *)(param_1 + 0x20) << 3);
      param_2 = (long *)(puVar2 + 2);
      *puVar2 = 0x12;
      plVar5 = plVar4;
      while (0x7f < (uint)plVar5) {
        func_0x0001098d4114();
        plVar5 = extraout_x8_00;
      }
      *(char *)((long)param_2 + -1) = (char)plVar5;
      lVar3 = *(long *)(param_1 + 0x28);
      unaff_x30 = 0x1098d3684;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x19 = param_3;
      unaff_x20 = param_1;
      unaff_x29 = puVar1;
    }
  }
  else {
    puVar2 = param_1;
    func_0x0001098d4064();
    plVar4 = (long *)(ulong)(uint)(*(int *)(param_1 + 0x10) << 3);
    param_2 = (long *)(puVar2 + 2);
    *puVar2 = 10;
    plVar5 = plVar4;
    while (0x7f < (uint)plVar5) {
      func_0x0001098d4114();
      plVar5 = extraout_x8;
    }
    *(char *)((long)param_2 + -1) = (char)plVar5;
    lVar3 = *(long *)(param_1 + 0x18);
    unaff_x30 = 0x1098d3638;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_3;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      puVar1 = (undefined1 *)((long)param_2 + (long)iVar7);
      param_2 = param_3;
      func_0x000107c303e4(param_3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 1098d36c0; end: 1098d373b;  */

long FUN_1098d36c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar4 = 0;
  if (uVar1 != 0) {
    lVar4 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1c) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  lVar3 = 0;
  if (uVar2 != 0) {
    lVar3 = (ulong)((int)LZCOUNT(-((ulong)(uVar2 >> 0x1c) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar2 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  lVar3 = lVar4 + ((ulong)uVar2 + (ulong)uVar1) * 8 + lVar3;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 1098d373c; end: 1098d378b;  */

void FUN_1098d373c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001098d4128();
  FUN_1098d378c();
  FUN_1098d378c(unaff_x19 + 0x20,param_2 + 0x20);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098d378c; end: 1098d37ef;  */

void FUN_1098d378c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long unaff_x20;
  int *unaff_x21;
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    func_0x0001098d40fc();
    FUN_1098d3f48();
    iVar1 = *unaff_x21;
    *unaff_x21 = iVar1 + iVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 8);
    puVar4 = (undefined8 *)(*(long *)(unaff_x21 + 2) + (long)iVar1 * 8);
    while (0 < iVar3) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    }
    return;
  }
  return;
}



/* Entry: 1098d37f0; end: 1098d381b;  */

undefined8 FUN_1098d37f0(undefined8 param_1)

{
  func_0x0001098d40b0();
  FUN_1098d381c(param_1);
  return param_1;
}



/* Entry: 1098d381c; end: 1098d3853;  */

long * FUN_1098d381c(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_1098d3570();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 1098d3854; end: 1098d3857;  */

undefined8 FUN_1098d3854(undefined8 param_1)

{
  func_0x0001098d40b0();
  FUN_1098d381c(param_1);
  return param_1;
}



/* Entry: 1098d3858; end: 1098d386b;  */

void FUN_1098d3858(void)

{
  FUN_1098d37f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d386c; end: 1098d3877;  */

undefined ** FUN_1098d386c(void)

{
  return &PTR_DAT_110b1a360;
}



/* Entry: 1098d3878; end: 1098d38d7;  */

void FUN_1098d3878(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c3025c(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001098d35c0(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098d38d8; end: 1098d3c7f;  */

long * FUN_1098d38d8(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  int iVar7;
  int iVar8;
  
  lVar4 = param_1[4];
  plVar2 = param_1;
  plVar5 = param_3;
  for (iVar7 = 0; (int)lVar4 != iVar7; iVar7 = iVar7 + 1) {
    uVar6 = param_1[3];
    puVar1 = (ulong *)(param_1 + 3);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar7 * 8 + 7);
    }
    plVar5 = (long *)(ulong)*(uint *)(*puVar1 + 0x14);
    plVar2 = (long *)0x1;
    func_0x0001098d40a8();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[8] != 0) {
    func_0x0001098d401c();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x0001098d4034();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)((long)param_1 + 0x44) != 0) {
    func_0x0001098d401c();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar3);
    func_0x0001098d4034();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[9] != 0) {
    func_0x0001098d401c();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x0001098d4034();
    param_2 = plVar3;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(param_1[7] + 0x30);
    plVar3 = (long *)0x5;
    func_0x0001098d40a8();
    param_2 = plVar3;
  }
  if (*(int *)((long)param_1 + 0x4c) != 0) {
    func_0x0001098d401c();
    param_2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar3);
    func_0x0001098d4034();
  }
  plVar2 = (long *)(param_1[6] & 0xfffffffffffffffc);
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    if (plVar2[1] == 0) goto LAB_1098d3a3c;
    plVar3 = (long *)*plVar2;
  }
  else {
    plVar3 = plVar2;
    if (*(char *)((long)plVar2 + 0x17) == '\0') goto LAB_1098d3a3c;
  }
  func_0x0001098d40c4(plVar3);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,7,plVar2,param_2);
  plVar5 = plVar2;
  param_2 = plVar3;
LAB_1098d3a3c:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x0001098d4108();
  if ((long)plVar5 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar5) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar7 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar7 - iVar8);
      if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar7);
  }
  _memcpy(param_2,lVar4,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar5);
}



/* Entry: 1098d3c80; end: 1098d3c9f;  */

void FUN_1098d3c80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x0001098d40f4();
  }
  else {
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110b1a148;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1098d3ca0; end: 1098d3cf3;  */

int * FUN_1098d3ca0(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_109340710(param_1,0,iVar1);
    *param_1 = iVar1;
    FUN_1098d3cf4(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 1098d3cf4; end: 1098d3d0b;  */

void FUN_1098d3cf4(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  while (0 < param_2) {
    *param_3 = *param_1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    param_2 = param_2 + -1;
  }
  return;
}



/* Entry: 1098d3d0c; end: 1098d3d3f;  */

long FUN_1098d3d0c(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    FUN_1098d3d40(param_1);
  }
  return param_1;
}



/* Entry: 1098d3d40; end: 1098d3d53;  */

void FUN_1098d3d40(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d3d54; end: 1098d3d77;  */

void FUN_1098d3d54(void)

{
  long unaff_x19;
  
  func_0x0001098d4128();
  FUN_1098d3d0c();
  if (0 < *(int *)(unaff_x19 + 4)) {
    FUN_1098d3d40();
  }
  return;
}



/* Entry: 1098d3d78; end: 1098d3da7;  */

long * FUN_1098d3d78(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1098d3da8; end: 1098d3f47;  */

void FUN_1098d3da8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098d40f4();
  }
  else {
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110b1a148;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1098d3f48; end: 1098d3f63;  */

void FUN_1098d3f48(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((int)param_2 <= (int)param_1[1]) {
    return;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  plVar4 = *(long **)(param_1 + 2);
  if (uVar1 == 0) {
    if ((int)param_2 < 1) goto LAB_109340780;
  }
  else {
    plVar4 = (long *)plVar4[-1];
    if ((int)param_2 < 1) {
LAB_109340780:
      uVar5 = 1;
      goto LAB_109340784;
    }
    if (0x3ffffffb < (int)uVar1) {
      uVar5 = 0x7fffffff;
      goto LAB_109340784;
    }
  }
  if ((int)param_2 < (int)(uVar1 << 1 | 1)) {
    param_2 = uVar1 * 2 + 1;
  }
  uVar5 = (ulong)param_2;
LAB_109340784:
  if (plVar4 == (long *)0x0) {
    plVar3 = (long *)(uVar5 * 8 + 8);
    __Znwm();
  }
  else {
    plVar3 = plVar4;
    func_0x00010b4d810c(plVar4,uVar5 * 8 + 0xf & 0x7fffffff8);
  }
  *plVar3 = (long)plVar4;
  if (0 < (int)param_1[1]) {
    if (0 < (int)uVar2) {
      _memcpy(plVar3 + 1,*(undefined8 *)(param_1 + 2),(ulong)uVar2 << 3);
    }
    FUN_1093407fc(param_1);
  }
  param_1[1] = (uint)uVar5;
  *(long **)(param_1 + 2) = plVar3 + 1;
  return;
}



/* Entry: 1098d3f64; end: 1098d3ff7;  */

undefined8 * FUN_1098d3f64(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098d40cc();
  }
  else {
    func_0x0001098d4058();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b1a198;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_1098d3ca0(puVar1 + 2,param_1,param_2 + 0x10);
  FUN_1098d3ca0(puVar1 + 4,param_1,param_2 + 0x20);
  *(undefined4 *)(puVar1 + 6) = 0;
  return puVar1;
}



/* Entry: 1098d3ff8; end: 1098d417f;  */

void FUN_1098d3ff8(void)

{
  return;
}



/* Entry: 1098d4180; end: 1098d41a3;  */

undefined8 FUN_1098d4180(undefined8 param_1)

{
  func_0x0001098d5c64();
  return param_1;
}



/* Entry: 1098d41a4; end: 1098d41a7;  */

undefined8 FUN_1098d41a4(undefined8 param_1)

{
  func_0x0001098d5c64();
  return param_1;
}



/* Entry: 1098d41a8; end: 1098d41bb;  */

void FUN_1098d41a8(void)

{
  FUN_1098d4180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d41bc; end: 1098d41df;  */

undefined ** FUN_1098d41bc(void)

{
  return &PTR_DAT_110b1a5a0;
}



/* Entry: 1098d41e0; end: 1098d4293;  */

long * FUN_1098d41e0(undefined4 *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x0001098d5cf0();
  puVar3 = param_1;
  if (param_1[4] != 0) {
    func_0x0001098d5c38();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    puVar3 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,param_1);
    param_4 = (long *)(puVar3 + 1);
    *puVar3 = uVar1;
  }
  puVar4 = puVar3;
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x0001098d5c38();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
    puVar4 = (undefined4 *)0x15;
    func_0x000107c280a8(0x15,puVar3);
    param_4 = (long *)(puVar4 + 1);
    *puVar4 = uVar1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x0001098d5c38();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
    puVar3 = (undefined4 *)0x1d;
    func_0x000107c280a8(0x1d,puVar4);
    param_4 = (long *)(puVar3 + 1);
    *puVar3 = uVar1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098d5d10();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar2 = iVar6 - iVar7;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1098d4294; end: 1098d42ef;  */

long FUN_1098d4294(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 1098d42f0; end: 1098d4353;  */

long FUN_1098d42f0(long param_1)

{
  func_0x0001098d5c64();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098d4180();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1098d4180();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1098d4180();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1098d4180();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1098d4354; end: 1098d4357;  */

long FUN_1098d4354(long param_1)

{
  func_0x0001098d5c64();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098d4180();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1098d4180();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1098d4180();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1098d4180();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1098d4358; end: 1098d436b;  */

void FUN_1098d4358(void)

{
  FUN_1098d42f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d436c; end: 1098d4377;  */

undefined ** FUN_1098d436c(void)

{
  return &PTR_DAT_110b1a5e0;
}



/* Entry: 1098d4378; end: 1098d43f3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098d4378(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001098d41c8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001098d41c8(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001098d41c8(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0001098d41c8(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1098d43f4; end: 1098d4557;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1098d43f4(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098d5cf0();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x1c);
    param_4 = (long *)0x4;
    func_0x0001098d5c14();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x1c);
    param_4 = (long *)0x5;
    func_0x0001098d5c14();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x1c);
    param_4 = (long *)0x6;
    func_0x0001098d5c14();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x1c);
    param_4 = (long *)0x7;
    func_0x0001098d5c14();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098d5d10();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1098d4558; end: 1098d4573;  */

long FUN_1098d4558(long param_1)

{
  long extraout_x8;
  
  FUN_1098d4294();
  func_0x0001098d5be0();
  return param_1 + extraout_x8;
}



/* Entry: 1098d4574; end: 1098d4577;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098d4574(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098d5c1c();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x0001098d5cc0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x0001098d4134();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x0001098d5cc0();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x0001098d4134();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x0001098d5cc0();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x0001098d4134();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x0001098d5cc0();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x0001098d4134();
      }
    }
  }
  func_0x0001098d5d90();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098d5d00();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098d4578; end: 1098d465f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098d4578(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098d5c1c();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x0001098d5cc0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x0001098d4134();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x0001098d5cc0();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x0001098d4134();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x0001098d5cc0();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x0001098d4134();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x0001098d5cc0();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x0001098d4134();
      }
    }
  }
  func_0x0001098d5d90();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098d5d00();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098d4660; end: 1098d4693;  */

long FUN_1098d4660(long param_1)

{
  func_0x0001098d5c64();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 1098d4694; end: 1098d4697;  */

long FUN_1098d4694(long param_1)

{
  func_0x0001098d5c64();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 1098d4698; end: 1098d46ab;  */

void FUN_1098d4698(void)

{
  FUN_1098d4660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d46ac; end: 1098d46b7;  */

undefined ** FUN_1098d46ac(void)

{
  return &PTR_DAT_110b1a620;
}



/* Entry: 1098d46b8; end: 1098d46f3;  */

void FUN_1098d46b8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098d46f4; end: 1098d47cb;  */

long * FUN_1098d46f4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  
  plVar4 = param_3;
  func_0x0001098d5c94();
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    if (puVar3[1] != 0) {
      puVar3 = (undefined8 *)*puVar3;
      goto LAB_1098d4734;
    }
  }
  else if (*(char *)((long)puVar3 + 0x17) != '\0') {
LAB_1098d4734:
    func_0x0001098d5d78(puVar3);
    unaff_x20 = param_3;
    func_0x0001098d5c44(param_3,1);
  }
  puVar3 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    if (puVar3[1] == 0) goto LAB_1098d4794;
    puVar3 = (undefined8 *)*puVar3;
  }
  else if (*(char *)((long)puVar3 + 0x17) == '\0') goto LAB_1098d4794;
  func_0x0001098d5d78(puVar3);
  unaff_x20 = param_3;
  func_0x0001098d5c44(param_3,2);
LAB_1098d4794:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001098d5d10();
  if ((long)plVar4 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar2 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar2 - iVar5);
      if (iVar2 - iVar5 == 0 || iVar2 < iVar5) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x20 + (long)iVar5;
      unaff_x20 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar2);
  }
  _memcpy(unaff_x20,lVar1,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)plVar4);
}


