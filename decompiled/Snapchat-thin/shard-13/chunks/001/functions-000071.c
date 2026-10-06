/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a021e20; end: 10a021eb3;  */

long FUN_10a021e20(long param_1,uint param_2)

{
  short sVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((ulong)param_2 < (ulong)(*(long *)(param_1 + 0x610) - *(long *)(param_1 + 0x608) >> 1)) {
    sVar1 = *(short *)(*(long *)(param_1 + 0x608) + (ulong)param_2 * 2);
    uVar3 = (ulong)sVar1;
    if ((long)uVar3 < 0) {
      uVar3 = uVar3 & 0x7fff;
      uVar4 = (*(long *)(param_1 + 0x628) - *(long *)(param_1 + 0x620) >> 3) * 0x51b3bea3677d46cf;
      if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
        return *(long *)(param_1 + 0x620) + uVar3 * 0x178;
      }
    }
    else {
      uVar4 = (*(long *)(param_1 + 0x1e8) - *(long *)(param_1 + 0x1e0) >> 3) * 0x51b3bea3677d46cf;
      if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
        return *(long *)(param_1 + 0x1e0) + (long)(int)sVar1 * 0x178;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a021eb4);
  (*pcVar2)();
}



/* Entry: 10a021eb4; end: 10a021eff;  */

/* WARNING: Removing unreachable block (ram,0x00010a021ee0) */

void FUN_10a021eb4(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a021f00; end: 10a021f47;  */

void FUN_10a021f00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a5e19b4(param_1,param_2,0,0,&uStack_30);
  return;
}



/* Entry: 10a021f48; end: 10a02205f;  */

void FUN_10a021f48(long param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = *(ulong *)(param_1 + 0xb0);
  uVar3 = *(ulong *)(param_1 + 0xa0);
  if (uVar3 <= uVar4) {
    return;
  }
  uVar6 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
  uVar7 = uVar4;
  if (uVar4 <= uVar6) {
    uVar7 = uVar6;
  }
  lVar8 = -uVar4;
  plVar5 = (long *)(*(long *)(param_1 + 0x88) + uVar4 * 0x18);
  while( true ) {
    if (-lVar8 == uVar7) goto LAB_10a02205c;
    if (*plVar5 == param_2) break;
    lVar8 = lVar8 + -1;
    plVar5 = plVar5 + 3;
    if (uVar3 + lVar8 == 0) {
      return;
    }
  }
  uVar4 = -lVar8;
  if (uVar4 < *(ulong *)(param_1 + 0xa8)) {
    FUN_10a048bc4(param_1);
    uVar4 = *(long *)(param_1 + 0xb0) - lVar8;
    uVar3 = *(ulong *)(param_1 + 0xa0);
  }
  uVar7 = uVar4 + 1;
  if (uVar3 <= uVar7) goto LAB_10a022048;
  lVar8 = uVar4 * 0x18;
  while( true ) {
    uVar3 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
    if ((uVar3 < uVar7 || uVar3 - uVar7 == 0) || (uVar3 < uVar7 - 1 || uVar3 - (uVar7 - 1) == 0))
    break;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x88) + lVar8);
    puVar1[1] = puVar1[4];
    *puVar1 = puVar1[3];
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar1 + 5);
    uVar3 = *(ulong *)(param_1 + 0xa0);
    lVar8 = lVar8 + 0x18;
    uVar7 = uVar7 + 1;
    if (uVar3 <= uVar7) {
LAB_10a022048:
      *(ulong *)(param_1 + 0xa0) = uVar3 - 1;
      return;
    }
  }
LAB_10a02205c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a022060);
  (*pcVar2)();
}



/* Entry: 10a022060; end: 10a022467;  */

void FUN_10a022060(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  float fStack_84;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  plVar1 = param_2 + 4;
  FUN_10a5dfd94(plVar1,*(undefined8 *)(param_1 + 0x748));
  plVar2 = param_2 + 4;
  FUN_10a01eacc(plVar2,plVar1);
  func_0x000107c2b07c(&lStack_80,&UNK_10f631b33);
  FUN_10a01671c(plVar2,&lStack_80,param_1 + 0x14);
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
  }
  func_0x000107c2b07c(&lStack_80,&UNK_10f6320a1);
  func_0x00010a01f3c4(plVar2,&lStack_80,param_1 + 0x30);
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
  }
  func_0x000107c2b07c(&lStack_80,&UNK_10f632092);
  func_0x00010a01f3c4(plVar2,&lStack_80,param_1 + 0x24);
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
  }
  fStack_84 = 16777215.0 / *(float *)(param_1 + 0x14);
  func_0x000107c2b07c(&lStack_80,&DAT_10f6322b7);
  lStack_a0 = CONCAT44(lStack_a0._4_4_,fStack_84 * *(float *)(param_1 + 0x50));
  FUN_10a01671c(plVar2,&lStack_80,&lStack_a0);
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
  }
  func_0x000107c2b07c(&lStack_80,&UNK_10f6322c3);
  FUN_10a01671c(plVar2,&lStack_80,&fStack_84);
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
  }
  func_0x000107c2b07c(&lStack_80,&UNK_10f6322d3);
  lStack_a0 = CONCAT44(lStack_a0._4_4_,*(float *)(param_1 + 0x4c) * (float)*(int *)(param_1 + 0x5c))
  ;
  FUN_10a01671c(plVar2,&lStack_80,&lStack_a0);
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
  }
  func_0x000107c2b07c(&lStack_80,&UNK_10f6322ea);
  func_0x00010a01edd4(plVar2,&lStack_80,param_1 + 0x87);
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
  }
  plVar4 = param_2 + 4;
  FUN_10a01f6d4(plVar4,*(undefined2 *)(param_1 + 0x40));
  func_0x000107c2b07c(&lStack_80,&DAT_10f524f67);
  lStack_a0 = plVar4[0x23];
  uStack_98 = CONCAT44(uStack_98._4_4_,(int)plVar4[0x24]);
  func_0x00010a01f3c4(plVar2,&lStack_80,&lStack_a0);
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
  }
  for (plVar4 = *(long **)(param_1 + 0x6c0); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    FUN_10a0ee900(&lStack_a0,&UNK_10f6322fc,0x16);
    lStack_70 = lStack_90;
    uStack_78 = uStack_98;
    lStack_80 = lStack_a0;
    uStack_98 = 0;
    lStack_90 = 0;
    lStack_a0 = 0;
    uStack_68 = 0;
    func_0x000107c2b080(&lStack_80);
    FUN_10a022468(plVar2,&lStack_80,(long)plVar4 + 0x14);
    if (lStack_70 < 0) {
      __ZdlPv(lStack_80);
    }
    if (lStack_90 < 0) {
      __ZdlPv(lStack_a0);
    }
  }
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x7e8),param_3);
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x7f8),param_4);
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x808),param_5);
  lVar3 = 0;
  FUN_10a2421c8();
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar3 + 0x208),plVar1,&UNK_10e482b48,3);
  lVar3 = *(long *)(param_1 + 0x7e8);
  FUN_10a18cbd8(lVar3 + 0x288);
  FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
  lVar3 = *(long *)(param_1 + 0x7f8);
  FUN_10a18cbd8(lVar3 + 0x288);
  FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
  lVar3 = *(long *)(param_1 + 0x808);
  FUN_10a18cbd8(lVar3 + 0x288);
  FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
  return;
}



/* Entry: 10a022468; end: 10a022677;  */

void FUN_10a022468(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar9 = *(ulong *)(param_1 + 0xb0);
  if (uVar9 < *(ulong *)(param_1 + 0xa0)) {
    uVar4 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
    uVar6 = uVar9;
    if (uVar9 <= uVar4) {
      uVar6 = uVar4;
    }
    piVar5 = (int *)(*(long *)(param_1 + 0x88) + uVar9 * 0x18 + 0x10);
    do {
      if (uVar6 == uVar9) goto LAB_10a022674;
      if (*(long *)(piVar5 + -4) == *(long *)(param_2 + 0x18)) {
        if ((short)piVar5[-2] != 7) {
          return;
        }
        if (uVar9 < *(ulong *)(param_1 + 0xa8)) {
          if ((*piVar5 == 8) &&
             (*(long *)(*(long *)(param_1 + 0xb8) + (ulong)(uint)piVar5[-1]) == *param_3)) {
            return;
          }
          FUN_10a048bc4(param_1);
          uVar9 = *(long *)(param_1 + 0xb0) + uVar9;
        }
        plVar10 = (long *)(param_1 + 0xb8);
        lVar3 = *plVar10;
        uVar1 = *(uint *)(param_1 + 0xd0);
        uVar6 = (ulong)uVar1 + 8;
        uVar4 = *(long *)(param_1 + 0xc0) - lVar3;
        lVar7 = uVar6 - uVar4;
        if (uVar4 <= uVar6 && lVar7 != 0) {
          func_0x0001092bf294(plVar10,lVar7);
          lVar3 = *plVar10;
        }
        *(long *)(lVar3 + (ulong)uVar1) = *param_3;
        *(int *)(param_1 + 0xd0) = (int)uVar6;
        uVar6 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
        if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
          lVar7 = *(long *)(param_1 + 0x88) + uVar9 * 0x18;
          *(uint *)(lVar7 + 0xc) = uVar1;
          *(undefined4 *)(lVar7 + 0x10) = 8;
          return;
        }
        goto LAB_10a022674;
      }
      uVar9 = uVar9 + 1;
      piVar5 = piVar5 + 6;
    } while (*(ulong *)(param_1 + 0xa0) != uVar9);
  }
  plVar10 = (long *)(param_1 + 0xb8);
  lVar3 = *plVar10;
  uVar1 = *(uint *)(param_1 + 0xd0);
  uVar9 = (ulong)uVar1 + 8;
  uVar6 = *(long *)(param_1 + 0xc0) - lVar3;
  lVar7 = uVar9 - uVar6;
  if (uVar6 <= uVar9 && lVar7 != 0) {
    func_0x0001092bf294(plVar10,lVar7);
    lVar3 = *plVar10;
  }
  *(long *)(lVar3 + (ulong)uVar1) = *param_3;
  lVar7 = *(long *)(param_1 + 0x88);
  *(int *)(param_1 + 0xd0) = (int)uVar9;
  uVar9 = *(ulong *)(param_1 + 0xa0);
  if (uVar9 < (ulong)((*(long *)(param_1 + 0x90) - lVar7 >> 3) * -0x5555555555555555)) {
    puVar8 = (undefined8 *)(lVar7 + uVar9 * 0x18);
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10a063efc((long *)(param_1 + 0x88),&uStack_58);
    if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x90)) {
LAB_10a022674:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a022678);
      (*pcVar2)();
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x90) + -0x18);
    uVar9 = *(ulong *)(param_1 + 0xa0);
  }
  *puVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(puVar8 + 1) = 7;
  *(uint *)((long)puVar8 + 0xc) = uVar1;
  *(undefined4 *)(puVar8 + 2) = 8;
  *(ulong *)(param_1 + 0xa0) = uVar9 + 1;
  return;
}



/* Entry: 10a022678; end: 10a022afb;  */

void FUN_10a022678(long param_1,long *param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 auStack_90 [2];
  char cStack_79;
  
  lVar5 = 0x7b8;
  if (param_4 == 0) {
    lVar5 = 0x758;
  }
  plVar2 = param_2 + 4;
  FUN_10a5dfd94(plVar2,*(undefined8 *)(param_1 + lVar5));
  plVar3 = param_2 + 4;
  FUN_10a01eacc(plVar3,plVar2);
  func_0x000107c2b07c(auStack_90,&UNK_10f632313);
  FUN_10a048040(plVar3[0x2b],auStack_90);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  func_0x000107c2b07c(auStack_90,&UNK_10f632327);
  uVar6 = 0;
  uVar1 = 0x3f800000;
  if (param_3 == 0) {
    uVar6 = 0x3f800000;
    uVar1 = 0;
  }
  uStack_a0 = CONCAT44(uVar6,uVar1);
  FUN_10a022468(plVar3,auStack_90,&uStack_a0);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  func_0x000107c2b07c(auStack_90,&UNK_10f6320a1);
  func_0x00010a01f3c4(plVar3,auStack_90,param_1 + 0x30);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  func_0x000107c2b07c(auStack_90,&UNK_10f632092);
  func_0x00010a01f3c4(plVar3,auStack_90,param_1 + 0x24);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  func_0x000107c2b07c(auStack_90,&UNK_10f631b33);
  FUN_10a01671c(plVar3,auStack_90,param_1 + 0x14);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  func_0x000107c2b07c(auStack_90,&UNK_10f6322ea);
  func_0x00010a01edd4(plVar3,auStack_90,param_1 + 0x87);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (param_4 != 0) {
    fVar7 = *(float *)(param_1 + 0x14);
    func_0x000107c2b07c(auStack_90,&UNK_10f632332);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,(16777215.0 / fVar7) * *(float *)(param_1 + 0x70));
    FUN_10a01671c(plVar3,auStack_90,&uStack_a0);
    if (cStack_79 < '\0') {
      __ZdlPv(auStack_90[0]);
    }
    func_0x000107c2b07c(auStack_90,&UNK_10f63233e);
    FUN_10a01671c(plVar3,auStack_90,param_1 + 0x74);
    if (cStack_79 < '\0') {
      __ZdlPv(auStack_90[0]);
    }
  }
  plVar4 = param_2 + 4;
  FUN_10a01f6d4(plVar4,*(undefined2 *)(param_1 + 0x40));
  func_0x000107c2b07c(auStack_90,&DAT_10f524f67);
  uStack_a0 = plVar4[0x23];
  uStack_98 = (undefined4)plVar4[0x24];
  func_0x00010a01f3c4(plVar3,auStack_90,&uStack_a0);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  func_0x000107c2b07c(auStack_90,&UNK_10f63234f);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,*(float *)(param_1 + 0x4c) * (float)*(int *)(param_1 + 0x60))
  ;
  FUN_10a01671c(plVar3,auStack_90,&uStack_a0);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x7f8),param_5);
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x808),param_6);
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x7e8),param_7);
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x828),param_8);
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x838),param_9);
  lVar5 = 0;
  FUN_10a2421c8();
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar5 + 0x208),plVar2,&UNK_10e482b48,3);
  lVar5 = *(long *)(param_1 + 0x7f8);
  FUN_10a18cbd8(lVar5 + 0x288);
  FUN_10a1da3a4(lVar5,0,0,0,4,0,0,0);
  lVar5 = *(long *)(param_1 + 0x808);
  FUN_10a18cbd8(lVar5 + 0x288);
  FUN_10a1da3a4(lVar5,0,0,0,4,0,0,0);
  lVar5 = *(long *)(param_1 + 0x7e8);
  FUN_10a18cbd8(lVar5 + 0x288);
  FUN_10a1da3a4(lVar5,0,0,0,4,0,0,0);
  lVar5 = *(long *)(param_1 + 0x828);
  FUN_10a18cbd8(lVar5 + 0x288);
  FUN_10a1da3a4(lVar5,0,0,0,4,0,0,0);
  lVar5 = *(long *)(param_1 + 0x838);
  FUN_10a18cbd8(lVar5 + 0x288);
  FUN_10a1da3a4(lVar5,0,0,0,4,0,0,0);
  return;
}



/* Entry: 10a022afc; end: 10a022d7f;  */

void FUN_10a022afc(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 auStack_80 [2];
  char cStack_69;
  
  if ((*(char *)(param_1 + 0x6a8) != -1) && (*(float *)(param_1 + 0x68) != 0.0)) {
    plVar2 = param_2 + 4;
    FUN_10a5dfd94(plVar2,*(undefined8 *)(param_1 + 0x768));
    plVar3 = param_2 + 4;
    FUN_10a01eacc(plVar3,plVar2);
    uVar6 = (ulong)*(byte *)(param_1 + 0x6a8);
    lVar4 = param_2[0x2b];
    uVar5 = (param_2[0x2c] - lVar4 >> 3) * -0x7063e7063e7063e7;
    if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a022d54);
      (*pcVar1)();
    }
    func_0x000107c2b07c(auStack_80,&UNK_10f632366);
    func_0x00010a01f3c4(plVar3,auStack_80,lVar4 + uVar6 * 0x148 + 0x34);
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
    }
    func_0x000107c2b07c(auStack_80,&UNK_10f632086);
    func_0x00010a01f3c4(plVar3,auStack_80,param_1 + 0x18);
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
    }
    func_0x000107c2b07c(auStack_80,&UNK_10f631b33);
    FUN_10a01671c(plVar3,auStack_80,param_1 + 0x14);
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
    }
    func_0x000107c2b07c(auStack_80,&UNK_10f6320a1);
    func_0x00010a01f3c4(plVar3,auStack_80,param_1 + 0x30);
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
    }
    func_0x000107c2b07c(auStack_80,&UNK_10f6320cb);
    FUN_10a01671c(plVar3,auStack_80,(float *)(param_1 + 0x68));
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
    }
    FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x7e8),param_3);
    FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x868),param_4);
    lVar4 = 0;
    FUN_10a2421c8();
    (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar4 + 0x208),plVar2,&UNK_10e482b48,3);
    lVar4 = *(long *)(param_1 + 0x7e8);
    FUN_10a18cbd8(lVar4 + 0x288);
    FUN_10a1da3a4(lVar4,0,0,0,4,0,0,0);
    lVar4 = *(long *)(param_1 + 0x868);
    FUN_10a18cbd8(lVar4 + 0x288);
    FUN_10a1da3a4(lVar4,0,0,0,4,0,0,0);
  }
  return;
}



/* Entry: 10a022d80; end: 10a02331f;  */

void FUN_10a022d80(long param_1,undefined4 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_90;
  ulong uStack_88;
  undefined8 auStack_80 [2];
  char cStack_69;
  
  if (*(char *)(param_1 + 0x6a8) == -1) {
LAB_10a023030:
    if (*(char *)(param_1 + 0x6a9) == -1) {
      return;
    }
  }
  else {
    if (0.0 < *(float *)(param_1 + 0x68)) {
      plVar4 = param_3 + 4;
      FUN_10a5dfd94(plVar4,*(undefined8 *)(param_1 + 0x778));
      plVar5 = param_3 + 4;
      FUN_10a01eacc(plVar5,plVar4);
      func_0x000107c2b07c(auStack_80,&UNK_10f63236f);
      lStack_90 = CONCAT44(lStack_90._4_4_,0xf);
      FUN_10a016278(plVar5,auStack_80,&lStack_90);
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
      func_0x000107c2b07c(auStack_80,&UNK_10f63237f);
      lStack_90 = CONCAT44(lStack_90._4_4_,param_2);
      FUN_10a016278(plVar5,auStack_80,&lStack_90);
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
      plVar2 = param_3 + 4;
      FUN_10a01f6d4(plVar2,*(undefined2 *)(param_1 + 0x40));
      func_0x000107c2b07c(auStack_80,&UNK_10f632391);
      lStack_90 = plVar2[0x23];
      uStack_88 = CONCAT44(uStack_88._4_4_,(int)plVar2[0x24]);
      func_0x00010a01f3c4(plVar5,auStack_80,&lStack_90);
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
      func_0x000107c2b07c(auStack_80,&UNK_10f63239b);
      FUN_10a01671c(plVar5,auStack_80,(long)plVar2 + 0x4c);
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
      uVar7 = (ulong)*(byte *)(param_1 + 0x6a8);
      lVar3 = param_3[0x2b];
      uVar6 = (param_3[0x2c] - lVar3 >> 3) * -0x7063e7063e7063e7;
      if (uVar6 < uVar7 || uVar6 - uVar7 == 0) goto LAB_10a0232d0;
      func_0x000107c2b07c(auStack_80,&UNK_10f632366);
      func_0x00010a01f3c4(plVar5,auStack_80,lVar3 + uVar7 * 0x148 + 0x34);
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
      func_0x000107c2b07c(auStack_80,&UNK_10f632086);
      func_0x00010a01f3c4(plVar5,auStack_80,param_1 + 0x18);
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
      func_0x000107c2b07c(auStack_80,&UNK_10f6320a1);
      func_0x00010a01f3c4(plVar5,auStack_80,param_1 + 0x30);
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
      FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x7e8),param_4);
      plVar5 = (long *)(param_1 + 0x868);
      FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x868),param_6);
      plVar2 = (long *)(param_1 + 0x858);
      FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x858),param_5);
      lVar3 = 0;
      FUN_10a2421c8();
      (**(code **)(*param_3 + 0x58))(param_3,*(undefined8 *)(lVar3 + 0x208),plVar4,&UNK_10e482b48,3)
      ;
      lVar3 = *(long *)(param_1 + 0x7e8);
      FUN_10a18cbd8(lVar3 + 0x288);
      FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
      goto LAB_10a023250;
    }
    if (*(float *)(param_1 + 0x68) != 0.0) goto LAB_10a023030;
  }
  plVar4 = param_3 + 4;
  FUN_10a5dfd94(plVar4,*(undefined8 *)(param_1 + 0x788));
  plVar5 = param_3 + 4;
  FUN_10a01eacc(plVar5,plVar4);
  uVar6 = (ulong)*(byte *)(param_1 + 0x6a8);
  if ((uVar6 == 0xff) || (*(float *)(param_1 + 0x68) != 0.0)) {
    uVar6 = (ulong)*(byte *)(param_1 + 0x6a9);
    uVar7 = (param_3[0x29] - param_3[0x28] >> 4) * -0x30c30c30c30c30c3;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) goto LAB_10a0232d0;
    lVar3 = param_3[0x28] + uVar6 * 0x150;
    func_0x000107c2b07c(auStack_80,&UNK_10f6320d7);
    lStack_90 = *(long *)(lVar3 + 0x2c);
    uStack_88 = (ulong)*(uint *)(lVar3 + 0x34);
    FUN_10a015dcc(plVar5,auStack_80,&lStack_90);
  }
  else {
    lVar3 = param_3[0x2b];
    uVar7 = (param_3[0x2c] - lVar3 >> 3) * -0x7063e7063e7063e7;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
LAB_10a0232d0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0232d4);
      (*pcVar1)();
    }
    func_0x000107c2b07c(auStack_80,&UNK_10f6320d7);
    lStack_90 = 0;
    uStack_88 = 0;
    FUN_10a015dcc(plVar5,auStack_80,&lStack_90);
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
    }
    func_0x000107c2b07c(auStack_80,&UNK_10f632366);
    func_0x00010a01f3c4(plVar5,auStack_80,lVar3 + uVar6 * 0x148 + 0x34);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  func_0x000107c2b07c(auStack_80,&UNK_10f632086);
  func_0x00010a01f3c4(plVar5,auStack_80,param_1 + 0x18);
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  func_0x000107c2b07c(auStack_80,&UNK_10f6320a1);
  func_0x00010a01f3c4(plVar5,auStack_80,param_1 + 0x30);
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  func_0x000107c2b07c(auStack_80,&UNK_10f631b33);
  FUN_10a01671c(plVar5,auStack_80,param_1 + 0x14);
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  plVar5 = (long *)(param_1 + 0x7e8);
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x7e8),param_4);
  plVar2 = (long *)(param_1 + 0x868);
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x868),param_6);
  lVar3 = 0;
  FUN_10a2421c8();
  (**(code **)(*param_3 + 0x58))(param_3,*(undefined8 *)(lVar3 + 0x208),plVar4,&UNK_10e482b48,3);
LAB_10a023250:
  lVar3 = *plVar5;
  FUN_10a18cbd8(lVar3 + 0x288);
  FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
  lVar3 = *plVar2;
  FUN_10a18cbd8(lVar3 + 0x288);
  FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
  return;
}



/* Entry: 10a023320; end: 10a02348f;  */

void FUN_10a023320(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fStack_74;
  undefined8 auStack_70 [2];
  char cStack_59;
  
  plVar1 = param_2 + 4;
  FUN_10a5dfd94(plVar1,*(undefined8 *)(param_1 + 0x7a8));
  plVar2 = param_2 + 4;
  FUN_10a01eacc(plVar2,plVar1);
  func_0x000107c2b07c(auStack_70,&UNK_10f631b33);
  FUN_10a01671c(plVar2,auStack_70,param_1 + 0x14);
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  fVar4 = *(float *)(param_1 + 0x14);
  func_0x000107c2b07c(auStack_70,&UNK_10f6323a6);
  fStack_74 = *(float *)(param_1 + 0x70);
  if (fStack_74 <= 0.0) {
    fStack_74 = 0.0;
  }
  fStack_74 = (16777215.0 / fVar4) * fStack_74;
  FUN_10a01671c(plVar2,auStack_70,&fStack_74);
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x7e8),param_3);
  lVar3 = 0;
  FUN_10a2421c8();
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar3 + 0x208),plVar1,&UNK_10e482b48,3);
  lVar3 = *(long *)(param_1 + 0x7e8);
  FUN_10a18cbd8(lVar3 + 0x288);
  FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
  return;
}



/* Entry: 10a023490; end: 10a023553;  */

ulong * FUN_10a023490(ulong *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  long *plVar17;
  undefined8 uStack_330;
  long *plStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong auStack_2b8 [4];
  long *plStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_240;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  long lStack_a0;
  
  plVar6 = (long *)param_1[1];
  if (plVar6 < (long *)param_1[2]) {
    plVar17 = plVar6 + 1;
    *plVar6 = *param_2;
    puVar5 = param_1;
  }
  else {
    lVar13 = (long)plVar6 - *param_1;
    uVar12 = (lVar13 >> 3) + 1;
    if (uVar12 >> 0x3d != 0) {
      FUN_10a048dec();
      lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      auStack_2b8[2] = 0;
      uStack_100 = 0;
      uStack_f0 = 0;
      plStack_f8 = (long *)0x0;
      uStack_e8 = 0xffffffffffffffff;
      uStack_e0 = 0xffffffffffffffff;
      uStack_d8 = 0;
      plStack_d0 = (long *)0x0;
      uStack_c8 = 0;
      uStack_c0 = 0xffffffffffffffff;
      uStack_b8 = 0xffffffffffffffff;
      uStack_b0 = 0x3f800000;
      uStack_a8 = 0;
      uStack_ac = 0;
      uStack_2d8 = 0;
      plStack_328 = (long *)0x0;
      uStack_330 = 0;
      lStack_320 = 0;
      uStack_318 = 0xffffffffffffffff;
      uStack_310 = 0xffffffffffffffff;
      uStack_308 = 0;
      plStack_300 = (long *)0x0;
      uStack_2f8 = 0;
      uStack_2f0 = 0xffffffffffffffff;
      uStack_2e8 = 0xffffffffffffffff;
      uStack_2e0 = 0;
      uStack_2d0 = 0;
      uStack_2c8 = param_5;
      uStack_2c0 = param_6;
      FUN_10a061728(auStack_2b8 + 2,&uStack_330);
      plVar6 = plStack_300;
      if (plStack_300 != (long *)0x0) {
        plVar17 = plStack_300 + 1;
        do {
          lVar13 = *plVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_300 + 0x10))(plStack_300);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_328;
      if (plStack_328 != (long *)0x0) {
        plVar17 = plStack_328 + 1;
        do {
          lVar13 = *plVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_328 + 0x10))(plStack_328);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_298;
      plVar17 = (long *)param_3[1];
      auStack_2b8[3] = *param_3;
      if (param_3[1] != 0) {
        plVar1 = (long *)(param_3[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plStack_298 != (long *)0x0) {
        plVar1 = plStack_298 + 1;
        do {
          lVar13 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          lVar13 = *plStack_298;
          plStack_298 = plVar17;
          (**(code **)(lVar13 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          plVar17 = plStack_298;
        }
      }
      plStack_298 = plVar17;
      plVar6 = plStack_f8;
      uStack_290 = 0;
      uStack_288 = 0xffffffffffffffff;
      uStack_280 = 0xffffffffffffffff;
      uStack_240 = 0;
      plVar17 = (long *)param_4[1];
      uStack_100 = *param_4;
      if (param_4[1] != 0) {
        plVar1 = (long *)(param_4[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plStack_f8 != (long *)0x0) {
        plVar1 = plStack_f8 + 1;
        do {
          lVar13 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          lVar13 = *plStack_f8;
          plStack_f8 = plVar17;
          (**(code **)(lVar13 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          plVar17 = plStack_f8;
        }
      }
      plStack_f8 = plVar17;
      uStack_e8 = 0xffffffffffffffff;
      uStack_e0 = 0xffffffffffffffff;
      uStack_f0 = 0;
      uStack_a8 = 0;
      (**(code **)(*param_2 + 0x88))(param_2,auStack_2b8 + 2);
      (**(code **)(*param_2 + 0xc0))(param_2,&uStack_2c8);
      puVar15 = (undefined8 *)param_1[0xd2];
      puVar14 = (undefined8 *)param_1[0xd3];
      if (puVar15 != puVar14) {
        lVar13 = param_2[8];
        do {
          puVar16 = (undefined4 *)*puVar15;
          plVar6 = param_2 + 4;
          func_0x00010a01e9ec(plVar6,*puVar16);
          lVar7 = plVar6[0x35] + 0x390;
          func_0x00010a01ea70(lVar7,param_7);
          if ((int)lVar7 == 0) {
            plVar6 = param_2 + 4;
            FUN_10a01eacc(plVar6,*(undefined2 *)(puVar16 + 1));
            if ((int)lVar13 < 0x141) {
              if (*(char *)((long)param_1 + 0x674) == '\x01') {
                func_0x000107c2b07c(&uStack_330,&UNK_10f631ff2);
                auStack_2b8[0] = auStack_2b8[0] & 0xffffffffffffff00;
                func_0x00010a01edd4(plVar6,&uStack_330,auStack_2b8);
              }
              else {
                func_0x000107c2b074(&uStack_330,&PTR_DAT_110b9d3f0);
                FUN_10a047898(plVar6[0x2b],&uStack_330,&uStack_330);
              }
            }
            else {
              func_0x000107c2b07c(&uStack_330,&DAT_10f631fd1);
              auStack_2b8[0] = 0;
              auStack_2b8[1] = 0;
              FUN_10a01ebbc(plVar6,&uStack_330,auStack_2b8);
            }
            if (lStack_320 < 0) {
              __ZdlPv(uStack_330);
            }
            if (*(byte *)(plVar6 + 4) < 9 &&
                (1 << (ulong)(*(byte *)(plVar6 + 4) & 0x1f) & 0x160U) != 0) {
              uVar8 = 0;
              FUN_10a01efe8(0,(int)lVar13);
              FUN_10a047898(plVar6[0x2b],uVar8,uVar8);
            }
            plVar17 = param_2;
            ___dynamic_cast(param_2,&PTR_DAT_110c558e0,&PTR_DAT_110c545a0,0);
            if (plVar17 == (long *)0x0) {
              FUN_10a0ee06c(&UNK_10f633a98);
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a023a04);
              (*pcVar4)();
            }
            *(undefined4 *)(plVar17[0x136] + 8) = *puVar16;
            FUN_10abbb2a8();
            func_0x000107c2b074(&uStack_330,&PTR_DAT_110b9d3f0);
            FUN_10a048040(plVar6[0x2b],&uStack_330);
            if (lStack_320 < 0) {
              __ZdlPv(uStack_330);
            }
          }
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar14);
      }
      (**(code **)(*param_2 + 0x90))(param_2,3,0,3);
      plVar6 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        plVar17 = plStack_d0 + 1;
        do {
          lVar13 = *plVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar17 = plStack_f8 + 1;
        do {
          lVar13 = *plVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      puVar9 = auStack_2b8 + 3;
      func_0x00010a048e34(puVar9,auStack_2b8[2]);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
        return puVar9;
      }
      ___stack_chk_fail();
      if (lStack_320 < 0) {
        __ZdlPv(uStack_330);
      }
      FUN_10a023a44(auStack_2b8 + 2);
      __Unwind_Resume();
      func_0x00010a0523dc(puVar9 + 0x3a);
      func_0x00010a0523dc(puVar9 + 0x35);
      func_0x00010a048e34(puVar9 + 1,*puVar9);
      return puVar9;
    }
    uVar10 = (long)param_1[2] - *param_1;
    uVar11 = (long)uVar10 >> 2;
    if (uVar11 <= uVar12) {
      uVar11 = uVar12;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    puVar9 = param_1;
    FUN_10a048e00();
    plVar6 = (long *)((long)puVar9 + lVar13);
    plVar17 = plVar6 + 1;
    *plVar6 = *param_2;
    uVar12 = (long)plVar6 - (param_1[1] - *param_1);
    _memcpy(uVar12);
    puVar5 = (ulong *)*param_1;
    *param_1 = uVar12;
    param_1[1] = (ulong)plVar17;
    param_1[2] = (ulong)(puVar9 + uVar11);
    if (puVar5 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (ulong)plVar17;
  return puVar5;
}



/* Entry: 10a023554; end: 10a023a43;  */

ulong * FUN_10a023554(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined8 uStack_300;
  long *plStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong auStack_288 [4];
  long *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_210;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_288[2] = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  plStack_c8 = (long *)0x0;
  uStack_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffffffffffff;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_98 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_88 = 0xffffffffffffffff;
  uStack_80 = 0x3f800000;
  uStack_78 = 0;
  uStack_7c = 0;
  uStack_2a8 = 0;
  plStack_2f8 = (long *)0x0;
  uStack_300 = 0;
  lStack_2f0 = 0;
  uStack_2e8 = 0xffffffffffffffff;
  uStack_2e0 = 0xffffffffffffffff;
  uStack_2d8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2c0 = 0xffffffffffffffff;
  uStack_2b8 = 0xffffffffffffffff;
  uStack_2b0 = 0;
  uStack_2a0 = 0;
  uStack_298 = param_5;
  uStack_290 = param_6;
  FUN_10a061728(auStack_288 + 2,&uStack_300);
  plVar5 = plStack_2d0;
  if (plStack_2d0 != (long *)0x0) {
    plVar13 = plStack_2d0 + 1;
    do {
      lVar9 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_2f8;
  if (plStack_2f8 != (long *)0x0) {
    plVar13 = plStack_2f8 + 1;
    do {
      lVar9 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_268;
  plVar13 = (long *)param_3[1];
  auStack_288[3] = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plStack_268 != (long *)0x0) {
    plVar1 = plStack_268 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      lVar9 = *plStack_268;
      plStack_268 = plVar13;
      (**(code **)(lVar9 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      plVar13 = plStack_268;
    }
  }
  plStack_268 = plVar13;
  plVar5 = plStack_c8;
  uStack_260 = 0;
  uStack_258 = 0xffffffffffffffff;
  uStack_250 = 0xffffffffffffffff;
  uStack_210 = 0;
  plVar13 = (long *)param_4[1];
  uStack_d0 = *param_4;
  if (param_4[1] != 0) {
    plVar1 = (long *)(param_4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      lVar9 = *plStack_c8;
      plStack_c8 = plVar13;
      (**(code **)(lVar9 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      plVar13 = plStack_c8;
    }
  }
  plStack_c8 = plVar13;
  uStack_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffffffffffff;
  uStack_c0 = 0;
  uStack_78 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,auStack_288 + 2);
  (**(code **)(*param_2 + 0xc0))(param_2,&uStack_298);
  puVar11 = *(undefined8 **)(param_1 + 0x690);
  puVar10 = *(undefined8 **)(param_1 + 0x698);
  if (puVar11 != puVar10) {
    lVar9 = param_2[8];
    do {
      puVar12 = (undefined4 *)*puVar11;
      plVar5 = param_2 + 4;
      func_0x00010a01e9ec(plVar5,*puVar12);
      lVar6 = plVar5[0x35] + 0x390;
      func_0x00010a01ea70(lVar6,param_7);
      if ((int)lVar6 == 0) {
        plVar5 = param_2 + 4;
        FUN_10a01eacc(plVar5,*(undefined2 *)(puVar12 + 1));
        if ((int)lVar9 < 0x141) {
          if (*(char *)(param_1 + 0x674) == '\x01') {
            func_0x000107c2b07c(&uStack_300,&UNK_10f631ff2);
            auStack_288[0] = auStack_288[0] & 0xffffffffffffff00;
            func_0x00010a01edd4(plVar5,&uStack_300,auStack_288);
          }
          else {
            func_0x000107c2b074(&uStack_300,&PTR_DAT_110b9d3f0);
            FUN_10a047898(plVar5[0x2b],&uStack_300,&uStack_300);
          }
        }
        else {
          func_0x000107c2b07c(&uStack_300,&DAT_10f631fd1);
          auStack_288[0] = 0;
          auStack_288[1] = 0;
          FUN_10a01ebbc(plVar5,&uStack_300,auStack_288);
        }
        if (lStack_2f0 < 0) {
          __ZdlPv(uStack_300);
        }
        if (*(byte *)(plVar5 + 4) < 9 && (1 << (ulong)(*(byte *)(plVar5 + 4) & 0x1f) & 0x160U) != 0)
        {
          uVar7 = 0;
          FUN_10a01efe8(0,(int)lVar9);
          FUN_10a047898(plVar5[0x2b],uVar7,uVar7);
        }
        plVar13 = param_2;
        ___dynamic_cast(param_2,&PTR_DAT_110c558e0,&PTR_DAT_110c545a0,0);
        if (plVar13 == (long *)0x0) {
          FUN_10a0ee06c(&UNK_10f633a98);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a023a04);
          (*pcVar4)();
        }
        *(undefined4 *)(plVar13[0x136] + 8) = *puVar12;
        FUN_10abbb2a8();
        func_0x000107c2b074(&uStack_300,&PTR_DAT_110b9d3f0);
        FUN_10a048040(plVar5[0x2b],&uStack_300);
        if (lStack_2f0 < 0) {
          __ZdlPv(uStack_300);
        }
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar10);
  }
  (**(code **)(*param_2 + 0x90))(param_2,3,0,3);
  plVar5 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar13 = plStack_a0 + 1;
    do {
      lVar9 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar13 = plStack_c8 + 1;
    do {
      lVar9 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  puVar8 = auStack_288 + 3;
  func_0x00010a048e34(puVar8,auStack_288[2]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail();
  if (lStack_2f0 < 0) {
    __ZdlPv(uStack_300);
  }
  FUN_10a023a44(auStack_288 + 2);
  __Unwind_Resume();
  func_0x00010a0523dc(puVar8 + 0x3a);
  func_0x00010a0523dc(puVar8 + 0x35);
  func_0x00010a048e34(puVar8 + 1,*puVar8);
  return puVar8;
}



/* Entry: 10a023a44; end: 10a023a7f;  */

undefined8 * FUN_10a023a44(undefined8 *param_1)

{
  func_0x00010a0523dc(param_1 + 0x3a);
  func_0x00010a0523dc(param_1 + 0x35);
  func_0x00010a048e34(param_1 + 1,*param_1);
  return param_1;
}



/* Entry: 10a023a80; end: 10a024e8f;  */

/* WARNING: Removing unreachable block (ram,0x00010a024b74) */

uint FUN_10a023a80(long *param_1,long param_2,long *param_3,long *param_4,uint param_5,
                  undefined8 *param_6,undefined8 *param_7,undefined8 param_8,long *param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  byte *pbVar8;
  code *pcVar9;
  long *plVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *****pppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 ******ppppppuVar16;
  long lVar17;
  undefined8 ****ppppuVar18;
  undefined8 ***pppuVar19;
  uint uVar20;
  long lVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  ulong uVar24;
  byte bVar25;
  long lVar26;
  undefined8 *puVar27;
  byte bVar28;
  byte *pbVar29;
  int iVar30;
  int iVar31;
  long lVar32;
  byte bVar33;
  ulong uVar34;
  uint *puVar35;
  uint *puVar36;
  ulong uVar37;
  long *plVar38;
  int iStack_484;
  uint uStack_468;
  undefined8 *puStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 ******ppppppuStack_430;
  ulong uStack_428;
  undefined4 uStack_420;
  byte bStack_419;
  undefined8 ******ppppppuStack_418;
  ulong uStack_410;
  byte bStack_401;
  undefined8 ****ppppuStack_400;
  undefined8 ****ppppuStack_3f8;
  undefined8 ****ppppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  char cStack_391;
  undefined **appuStack_380 [20];
  int iStack_2e0;
  undefined1 uStack_2d9;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_208;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined7 uStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  long lStack_99;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_440 = param_10;
  uStack_438 = param_11;
  uStack_2d8 = 0;
  uStack_108 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_e8 = 0xffffffffffffffff;
  uStack_e0 = 0x3f800000;
  if (param_9 != (long *)0x0) {
    plVar10 = param_9 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = *plVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plStack_128 = param_9;
  uStack_120 = 0;
  uStack_118 = 0xffffffffffffffff;
  uStack_110 = 0xffffffffffffffff;
  uStack_d8 = 0x100000001;
  uStack_3a8 = 0;
  ppppuStack_3f8 = (undefined8 ****)0x0;
  ppppuStack_400 = (undefined8 ****)0x0;
  ppppuStack_3f0 = (undefined8 ****)0x0;
  ppuStack_3e8 = (undefined **)0xffffffffffffffff;
  uStack_3e0 = 0xffffffffffffffff;
  uStack_3d8 = 0;
  plStack_3d0 = (long *)0x0;
  uStack_3c8 = 0;
  uStack_3c0 = 0xffffffffffffffff;
  uStack_3b8 = 0xffffffffffffffff;
  uStack_3b0 = 0;
  uStack_3a0 = 0;
  uStack_130 = param_8;
  FUN_10a061728(&uStack_2d8,&ppppuStack_400);
  plVar10 = plStack_3d0;
  if (plStack_3d0 != (long *)0x0) {
    plVar38 = plStack_3d0 + 1;
    do {
      lVar21 = *plVar38;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar7) {
        *plVar38 = lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_3d0 + 0x10))(plStack_3d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  ppppuVar18 = ppppuStack_3f8;
  if (ppppuStack_3f8 != (undefined8 ****)0x0) {
    plVar10 = (long *)(ppppuStack_3f8 + 1);
    do {
      lVar21 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar21 == 0) {
      (**(code **)((long)*ppppuStack_3f8 + 0x10))(ppppuStack_3f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar18);
    }
  }
  plVar10 = plStack_2c8;
  plVar38 = (long *)param_6[1];
  uStack_2d0 = *param_6;
  if (param_6[1] != 0) {
    plVar13 = (long *)(param_6[1] + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = *plVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plStack_2c8 != (long *)0x0) {
    plVar13 = plStack_2c8 + 1;
    do {
      lVar21 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar21 == 0) {
      lVar21 = *plStack_2c8;
      plStack_2c8 = plVar38;
      (**(code **)(lVar21 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      plVar38 = plStack_2c8;
    }
  }
  plStack_2c8 = plVar38;
  uStack_2c0 = 0;
  uStack_2b8 = 0xffffffffffffffff;
  uStack_2b0 = 0xffffffffffffffff;
  uStack_270 = 0;
  uStack_3a8 = 0;
  ppppuStack_3f8 = (undefined8 *****)0x0;
  ppppuStack_400 = (undefined8 *****)0x0;
  ppppuStack_3f0 = (undefined8 *****)0x0;
  ppuStack_3e8 = (undefined **)0xffffffffffffffff;
  uStack_3e0 = 0xffffffffffffffff;
  uStack_3d8 = 0;
  plStack_3d0 = (long *)0x0;
  uStack_3c8 = 0;
  uStack_3c0 = 0xffffffffffffffff;
  uStack_3b8 = 0xffffffffffffffff;
  uStack_3b0 = 0;
  uStack_3a0 = 0;
  FUN_10a061728(&uStack_2d8,&ppppuStack_400);
  plVar10 = plStack_3d0;
  if (plStack_3d0 != (long *)0x0) {
    plVar38 = plStack_3d0 + 1;
    do {
      lVar21 = *plVar38;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar7) {
        *plVar38 = lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_3d0 + 0x10))(plStack_3d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  ppppuVar18 = ppppuStack_3f8;
  if ((undefined8 *****)ppppuStack_3f8 != (undefined8 *****)0x0) {
    pppppuVar14 = (undefined8 *****)(ppppuStack_3f8 + 1);
    do {
      ppppuVar22 = *pppppuVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
      if (bVar7) {
        *pppppuVar14 = (undefined8 ****)((long)ppppuVar22 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppuVar22 == (undefined8 ****)0x0) {
      (*(code *)(*ppppuStack_3f8)[2])(ppppuStack_3f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar18);
    }
  }
  plVar10 = plStack_260;
  plVar38 = (long *)param_7[1];
  uStack_268 = *param_7;
  if (param_7[1] != 0) {
    plVar13 = (long *)(param_7[1] + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = *plVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plStack_260 != (long *)0x0) {
    plVar13 = plStack_260 + 1;
    do {
      lVar21 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar21 == 0) {
      lVar21 = *plStack_260;
      plStack_260 = plVar38;
      (**(code **)(lVar21 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      plVar38 = plStack_260;
    }
  }
  plStack_260 = plVar38;
  uStack_258 = 0;
  uStack_250 = 0xffffffffffffffff;
  uStack_248 = 0xffffffffffffffff;
  uStack_208 = 0;
  (**(code **)(*param_3 + 0x88))(param_3,&uStack_2d8);
  (**(code **)(*param_3 + 0xc0))(param_3,&uStack_440);
  iVar2 = (int)param_3[8];
  if (param_5 == 2) {
    *(undefined2 *)(param_1 + 0xd5) = 0xffff;
  }
  else if ((param_5 == 1) && (param_1[0xd9] != 0)) {
    plVar10 = (long *)param_1[0xd8];
    while (plVar10 != (long *)0x0) {
      plVar10 = (long *)*plVar10;
      __ZdlPv();
    }
    param_1[0xd8] = 0;
    lVar21 = param_1[0xd7];
    if (lVar21 != 0) {
      lVar23 = 0;
      do {
        *(undefined8 *)(param_1[0xd6] + lVar23 * 8) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar21 != lVar23);
    }
    param_1[0xd9] = 0;
  }
  puVar11 = (undefined4 *)(param_2 + 0x10);
  FUN_10a00edf0(puVar11,0,&UNK_10f630f1d,0,param_2 + 8);
  lVar21 = param_1[0xc3];
  if ((char)lVar21 == '\x01') {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    puVar27 = (undefined8 *)*param_4;
    puStack_450 = (undefined8 *)param_4[1];
    if (puVar27 != puStack_450) goto LAB_10a023e6c;
    uVar20 = 0;
    iVar30 = 0;
LAB_10a024a68:
    *puVar11 = 4;
    FUN_10a01f5fc(&ppppppuStack_418,param_5);
    pppppppuVar15 = &ppppppuStack_418;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar15,": ",2);
    pppppuStack_b8 = pppppppuVar15[1];
    pppppuStack_c0 = *pppppppuVar15;
    pppppuStack_b0 = pppppppuVar15[2];
    pppppppuVar15[1] = (undefined8 ******)0x0;
    pppppppuVar15[2] = (undefined8 ******)0x0;
    *pppppppuVar15 = (undefined8 ******)0x0;
    __ZNSt3__19to_stringEj(&ppppppuStack_430,iVar30);
    uVar24 = uStack_428;
    pppppppuVar15 = (undefined8 *******)ppppppuStack_430;
    if (-1 < (char)bStack_419) {
      uVar24 = (ulong)bStack_419;
      pppppppuVar15 = &ppppppuStack_430;
    }
    ppppppuVar16 = &pppppuStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppuVar16,pppppppuVar15,uVar24);
    ppppuStack_3f8 = ppppppuVar16[1];
    ppppuStack_400 = *ppppppuVar16;
    ppppuStack_3f0 = ppppppuVar16[2];
    ppppppuVar16[1] = (undefined8 *****)0x0;
    ppppppuVar16[2] = (undefined8 *****)0x0;
    *ppppppuVar16 = (undefined8 *****)0x0;
    pppppuVar14 = &ppppuStack_400;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar14,&UNK_10f632071,0x14);
    ppppuVar18 = *pppppuVar14;
    uStack_d0 = (uint)pppppuVar14[1];
    uStack_cc._0_3_ = (undefined3)((ulong)pppppuVar14[1] >> 0x20);
    uStack_cc._3_1_ = (undefined1)*(undefined8 *)((long)pppppuVar14 + 0xf);
    uStack_c8 = (undefined7)((ulong)*(undefined8 *)((long)pppppuVar14 + 0xf) >> 8);
    uVar5 = *(undefined1 *)((long)pppppuVar14 + 0x17);
    pppppuVar14[1] = (undefined8 ****)0x0;
    pppppuVar14[2] = (undefined8 ****)0x0;
    *pppppuVar14 = (undefined8 ****)0x0;
    if (*(char *)((long)puVar11 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(puVar11 + 2));
    }
    *(undefined8 *****)(puVar11 + 2) = ppppuVar18;
    *(ulong *)(puVar11 + 4) = CONCAT44(uStack_cc,uStack_d0);
    *(ulong *)((long)puVar11 + 0x17) = CONCAT71(uStack_c8,uStack_cc._3_1_);
    *(undefined1 *)((long)puVar11 + 0x1f) = uVar5;
    if ((long)ppppuStack_3f0 < 0) {
      __ZdlPv(ppppuStack_400);
    }
    if ((char)bStack_419 < '\0') {
      __ZdlPv(ppppppuStack_430);
    }
    if ((char)bStack_401 < '\0') {
      __ZdlPv(ppppppuStack_418);
    }
  }
  else {
    puVar27 = (undefined8 *)*param_4;
    puStack_450 = (undefined8 *)param_4[1];
    if (puVar27 == puStack_450) {
      iVar30 = 0;
      uVar20 = 0;
      goto LAB_10a024bb8;
    }
LAB_10a023e6c:
    iVar31 = 0;
    iVar30 = 0;
    ppuVar1 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    do {
      puVar35 = (uint *)*puVar27;
      uVar20 = *puVar35;
      puVar36 = puVar35;
      if (uVar20 == 0xffffffff) {
        if (puVar35[0xc] == 7) {
          puVar36 = *(uint **)(puVar35 + 6);
          if ((long)*(uint **)(puVar35 + 8) - (long)puVar36 == 0x108) {
            if (puVar36 != *(uint **)(puVar35 + 8)) {
              uVar20 = *puVar36;
              goto LAB_10a023ea8;
            }
            goto LAB_10a024cc4;
          }
        }
      }
      else {
LAB_10a023ea8:
        if ((ulong)(param_1[0xd0] - param_1[0xcf] >> 3) <= (ulong)uVar20) goto LAB_10a024cc4;
        if (*(uint **)(param_1[0xcf] + (ulong)uVar20 * 8) == puVar36) {
          plVar10 = param_3 + 4;
          func_0x00010a01e9ec();
          lVar32 = plVar10[0x35];
          lVar23 = lVar32 + 0x390;
          func_0x00010a01ea70(lVar23,param_5);
          uStack_468 = (uint)lVar23;
          uStack_d0 = uStack_468;
          if (uStack_468 != 0) {
            plVar38 = param_3 + 4;
            FUN_10a01eacc(plVar38,(short)puVar36[1]);
            func_0x000107c2b074(&ppppuStack_400,&PTR_DAT_110b9d408);
            FUN_10a047898(plVar38[0x2b],&ppppuStack_400,&ppppuStack_400);
            if ((long)ppppuStack_3f0 < 0) {
              __ZdlPv(ppppuStack_400);
            }
            if (iVar2 < 0x141) {
              if (*(char *)((long)param_1 + 0x674) == '\x01') {
                func_0x000107c2b07c(&ppppuStack_400,&UNK_10f631ff2);
                pppppuStack_c0 = (undefined8 *****)((ulong)pppppuStack_c0 & 0xffffffffffffff00);
                func_0x00010a01edd4(plVar38,&ppppuStack_400,&pppppuStack_c0);
              }
              else {
                func_0x000107c2b074(&ppppuStack_400,&PTR_DAT_110b9d3f0);
                FUN_10a047898(plVar38[0x2b],&ppppuStack_400,&ppppuStack_400);
              }
            }
            else {
              func_0x000107c2b07c(&ppppuStack_400,&DAT_10f631fd1);
              pppppuStack_c0 = (undefined8 ******)0x0;
              pppppuStack_b8 = (undefined8 ******)0x0;
              FUN_10a01ebbc(plVar38,&ppppuStack_400,&pppppuStack_c0);
            }
            if ((long)ppppuStack_3f0 < 0) {
              __ZdlPv(ppppuStack_400);
            }
            pbVar29 = (byte *)(plVar38 + 4);
            bVar25 = *pbVar29;
            if ((bVar25 < 9) && ((1 << (ulong)(bVar25 & 0x1f) & 0x160U) != 0)) {
              uVar12 = 0;
              FUN_10a01efe8(0,iVar2);
              FUN_10a047898(plVar38[0x2b],uVar12,uVar12);
              bVar25 = *pbVar29;
            }
            pppppuStack_b8 = *(undefined8 ******)((long)plVar38 + 0x29);
            pppppuStack_c0 = *(undefined8 ******)((long)plVar38 + 0x21);
            pppppuStack_b0 = *(undefined8 ******)((long)plVar38 + 0x31);
            uStack_a8 = (undefined7)*(undefined8 *)((long)plVar38 + 0x39);
            lStack_99 = plVar38[9];
            uStack_428 = plVar38[0xb];
            ppppppuStack_430 = (undefined8 ******)plVar38[10];
            uStack_a1 = (undefined1)plVar38[8];
            uStack_a0 = (undefined7)((ulong)plVar38[8] >> 8);
            bVar3 = *(byte *)(plVar38 + 3);
            uVar5 = *(undefined1 *)((long)plVar38 + 0x65);
            uVar4 = *(undefined1 *)((long)plVar38 + 0x1b);
            uStack_420 = (undefined4)plVar38[0xc];
            if ((bVar25 != 5) && (bVar25 != 8)) {
              plVar38[5] = 0;
              pbVar29[0] = 6;
              pbVar29[1] = 0;
              pbVar29[2] = 0;
              pbVar29[3] = 0;
              pbVar29[4] = 0;
              pbVar29[5] = 0;
              pbVar29[6] = 0;
              pbVar29[7] = 0;
              plVar38[7] = 0;
              plVar38[6] = 0;
              plVar38[9] = 0;
              plVar38[8] = 0;
            }
            lVar23 = plVar38[0xe];
            if (((param_5 >> 1 & 1) == 0) || (*(char *)(lVar32 + 0x411) != '\x01')) {
              bVar33 = 0;
            }
            else {
              if (((char)param_1[0xd5] == -1) || (*(char *)((long)param_1 + 0x6a9) == -1)) {
                plVar13 = param_3 + 4;
                FUN_10a01f140(plVar13,*puVar36);
                if ((char)param_1[0xd5] == -1) {
                  pbVar29 = (byte *)plVar13[4];
                  pbVar8 = (byte *)plVar13[3];
                  do {
                    if (pbVar8 == pbVar29) {
                      bVar33 = 0xff;
                      break;
                    }
                    bVar33 = *pbVar8;
                    uVar34 = (ulong)bVar33;
                    uVar24 = (param_3[0x2c] - param_3[0x2b] >> 3) * -0x7063e7063e7063e7;
                    if (uVar24 < uVar34 || uVar24 - uVar34 == 0) goto LAB_10a024cc4;
                    lVar17 = param_3[0x2b] + uVar34 * 0x148;
                    ppppuStack_3f8 = (undefined8 ****)plVar10[7];
                    ppppuStack_400 = (undefined8 ****)plVar10[6];
                    uVar34 = plVar10[6];
                    uVar37 = *(ulong *)(lVar17 + 8);
                    uVar24 = (ulong)&ppppuStack_400 | 8;
                    FUN_10a3c8d60(uVar24,lVar17 + 0x10);
                    pbVar8 = pbVar8 + 1;
                  } while ((uVar37 & uVar34) == 0 && uVar24 == 0);
                  *(byte *)(param_1 + 0xd5) = bVar33;
                }
                if (*(char *)((long)param_1 + 0x6a9) == -1) {
                  pbVar29 = (byte *)plVar13[1];
                  pbVar8 = (byte *)*plVar13;
                  do {
                    if (pbVar8 == pbVar29) {
                      bVar33 = 0xff;
                      break;
                    }
                    bVar33 = *pbVar8;
                    uVar34 = (ulong)bVar33;
                    uVar24 = (param_3[0x29] - param_3[0x28] >> 4) * -0x30c30c30c30c30c3;
                    if (uVar24 < uVar34 || uVar24 - uVar34 == 0) goto LAB_10a024cc4;
                    lVar17 = param_3[0x28] + uVar34 * 0x150;
                    ppppuStack_3f8 = (undefined8 ****)plVar10[7];
                    ppppuStack_400 = (undefined8 ****)plVar10[6];
                    uVar34 = plVar10[6];
                    uVar37 = *(ulong *)(lVar17 + 8);
                    uVar24 = (ulong)&ppppuStack_400 | 8;
                    FUN_10a3c8d60(uVar24,lVar17 + 0x10);
                    pbVar8 = pbVar8 + 1;
                  } while ((uVar37 & uVar34) == 0 && uVar24 == 0);
                  *(byte *)((long)param_1 + 0x6a9) = bVar33;
                  bVar33 = 0x80;
                  goto LAB_10a024284;
                }
              }
              bVar33 = 0x80;
            }
LAB_10a024284:
            bVar28 = 0;
            if (3 < param_5) {
              bVar28 = *(char *)(lVar32 + 0x461) << 6;
            }
            bVar28 = bVar28 | bVar33;
            iStack_484 = iVar31;
            if (((param_5 & 1) != 0) && (*(char *)(lVar32 + 0x3a1) == '\x01')) {
              iStack_2e0 = 0x1e;
              if ((*(char *)(lVar32 + 0x400) == '\x01') &&
                 ((*(byte *)((long)param_1 + 0x86) & 1) == 0)) {
                lVar26 = *param_1;
                lVar17 = lVar26 + 0x48;
                FUN_10a0618a0(lVar17,*(undefined8 *)(lVar32 + 0x40),*(undefined8 *)(lVar32 + 0x48));
                if (lVar17 == 0) goto LAB_10a0244d0;
                uVar20 = *(uint *)(lVar17 + 0x20);
                if ((int)uVar20 < 0) goto LAB_10a0244d0;
                uVar24 = (*(long *)(lVar26 + 0x78) - *(long *)(lVar26 + 0x70) >> 5) *
                         -0x5555555555555555;
                if (uVar24 < uVar20 || uVar24 - uVar20 == 0) goto LAB_10a024cb0;
                bVar28 = *(byte *)(*(long *)(lVar26 + 0x70) + (ulong)uVar20 * 0x60 + 0x30);
                if (bVar28 == 0) goto LAB_10a0244d0;
                plVar13 = param_3;
                ___dynamic_cast(param_3,&PTR_DAT_110c558e0,&PTR_DAT_110c545a0,0);
                if (plVar13 == (long *)0x0) {
                  FUN_10a0ee06c(&UNK_10f633a98);
                  goto LAB_10a024cc4;
                }
                FUN_10abc0b08();
                if ((int)plVar13 != 0) {
                  if ((char)param_1[0xc3] == '\x01') {
                    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
                    FUN_109febc44(&ppppuStack_400);
                    pppppuVar14 = &ppppuStack_3f0;
                    FUN_10a002568(pppppuVar14,&UNK_10f631905,10);
                    FUN_10a00ff18(&ppppppuStack_418,*(undefined8 *)(plVar10[0x35] + 0x168));
                    uVar24 = uStack_410;
                    pppppppuVar15 = (undefined8 *******)ppppppuStack_418;
                    if (-1 < (char)bStack_401) {
                      uVar24 = (ulong)bStack_401;
                      pppppppuVar15 = &ppppppuStack_418;
                    }
                    FUN_10a002568(pppppuVar14,pppppppuVar15,uVar24);
                    FUN_10a002568();
                    if ((char)bStack_401 < '\0') {
                      __ZdlPv(ppppppuStack_418);
                    }
                    func_0x00010a002480(&ppppppuStack_418,&ppuStack_3e8,&uStack_2d9);
                    uVar24 = uStack_410;
                    pppppppuVar15 = (undefined8 *******)ppppppuStack_418;
                    if (-1 < (char)bStack_401) {
                      uVar24 = (ulong)bStack_401;
                      pppppppuVar15 = &ppppppuStack_418;
                    }
                    FUN_10a00edf0(param_2 + 0x10,2,pppppppuVar15,uVar24,param_2 + 8);
                    if ((char)bStack_401 < '\0') {
                      __ZdlPv(ppppppuStack_418);
                    }
                    ppppuStack_400 = (undefined8 ****)&PTR_SUB_1108a5a38;
                    ppppuStack_3f0 = (undefined8 ****)&PTR_DAT_1108a5a60;
                    appuStack_380[0] = &PTR_DAT_1108a5a88;
                    ppuStack_3e8 = &PTR_DAT_11088d7b0;
                    if (cStack_391 < '\0') {
                      __ZdlPv(uStack_3a8);
                    }
                    ppuStack_3e8 = (undefined **)
                                   (
                                   PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20
                                   + 0x10);
                    __ZNSt3__16localeD1Ev(&uStack_3e0);
                    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                              (&ppppuStack_400,&PTR_PTR_1108a5aa0);
                    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_380);
                    iVar31 = *(int *)(param_2 + 8);
                    if (iVar31 < 2) {
                      iVar31 = 1;
                    }
                    *(int *)(param_2 + 8) = iVar31 + -1;
                  }
                  goto LAB_10a0244d0;
                }
                uStack_d0 = 0;
                iStack_484 = iVar31 + 1;
                if (*(char *)((long)param_1 + 0x675) == '\x01') {
                  iStack_2e0 = 0;
                  uVar12 = *(undefined8 *)((long)param_1 + 0x54);
                  ppppuStack_400 = (undefined8 ****)((ulong)ppppuStack_400._1_7_ << 8);
                  plVar13 = param_1 + 0xd6;
                  FUN_10a064574(plVar13,0,&ppppuStack_400);
                  uStack_468 = 0;
                  uVar12 = NEON_rev64(uVar12,4);
                  *(undefined8 *)((long)plVar13 + 0x14) = uVar12;
                  iVar31 = 0;
                }
                else {
                  uVar12 = *(undefined8 *)(lVar32 + 0x404);
                  ppppuStack_400 = (undefined8 ****)CONCAT71(ppppuStack_400._1_7_,(char)iVar31);
                  plVar13 = param_1 + 0xd6;
                  iStack_2e0 = iVar31;
                  FUN_10a064574(plVar13,iVar31,&ppppuStack_400);
                  uStack_468 = 0;
                  *(undefined8 *)((long)plVar13 + 0x14) = uVar12;
                }
              }
              else {
LAB_10a0244d0:
                if (*(char *)((long)param_1 + 0x675) == '\x01') {
                  iStack_2e0 = 0;
                  uVar12 = *(undefined8 *)((long)param_1 + 0x54);
                  ppppuStack_400 = (undefined8 ****)((ulong)ppppuStack_400 & 0xffffffffffffff00);
                  plVar13 = param_1 + 0xd6;
                  FUN_10a064574(plVar13,0,&ppppuStack_400);
                  iVar31 = 0;
                  uVar12 = NEON_rev64(uVar12,4);
                  *(undefined8 *)((long)plVar13 + 0x14) = uVar12;
                }
                else {
                  iVar31 = 0x1e;
                }
                bVar28 = 1;
              }
              if (iVar2 < 0x141) {
                uVar12 = 8;
                FUN_10a01efe8(8,iVar2);
                ppppuStack_400 = (undefined8 ****)CONCAT44(ppppuStack_400._4_4_,iVar31);
                FUN_10a016278(plVar38,uVar12,&ppppuStack_400);
              }
              else {
                uVar12 = 8;
                FUN_10a01efe8(8,iVar2);
                FUN_10a01f1b4(plVar38,uVar12,&iStack_2e0);
              }
            }
            if (iVar2 < 0x141) {
              uVar12 = 9;
              FUN_10a01efe8(9,iVar2);
              ppppuStack_400 = (undefined8 ****)CONCAT44(ppppuStack_400._4_4_,(float)uStack_468);
              FUN_10a01671c(plVar38,uVar12,&ppppuStack_400);
            }
            else {
              uVar12 = 9;
              FUN_10a01efe8(9,iVar2);
              FUN_10a01f1b4(plVar38,uVar12,&uStack_d0);
            }
            uVar12 = 5;
            FUN_10a01efe8(5,iVar2);
            func_0x00010a01f3c4(plVar38,uVar12,param_1 + 3);
            uVar12 = 4;
            FUN_10a01efe8(4,iVar2);
            func_0x00010a01f3c4(plVar38,uVar12,param_1 + 6);
            uVar12 = 6;
            FUN_10a01efe8(6,iVar2);
            func_0x00010a01f3c4(plVar38,uVar12,(long)param_1 + 0x24);
            *(byte *)(plVar38 + 3) = *(byte *)(plVar38 + 3) | 6;
            *(undefined1 *)((long)plVar38 + 0x65) = 3;
            *(undefined1 *)(plVar38 + 10) = 1;
            *(undefined2 *)((long)plVar38 + 0x51) = 0;
            *(undefined1 *)((long)plVar38 + 0x53) = 0;
            *(undefined2 *)((long)plVar38 + 0x54) = 2;
            *(uint *)(plVar38 + 0xb) = (uint)bVar28;
            *(undefined8 *)((long)plVar38 + 0x5c) = 0xff000000ff;
            *(undefined1 *)((long)plVar38 + 0x1b) = 0xf;
            plVar13 = param_3;
            ___dynamic_cast(param_3,&PTR_DAT_110c558e0,&PTR_DAT_110c545a0,0);
            if (plVar13 == (long *)0x0) {
              FUN_10a0ee06c(&UNK_10f633a98);
              goto LAB_10a024cc4;
            }
            FUN_10abc0950();
            plVar38[0xe] = lVar23;
            *(byte *)(plVar38 + 4) = bVar25;
            *(undefined8 ******)((long)plVar38 + 0x29) = pppppuStack_b8;
            *(undefined8 ******)((long)plVar38 + 0x21) = pppppuStack_c0;
            *(ulong *)((long)plVar38 + 0x39) = CONCAT17(uStack_a1,uStack_a8);
            *(undefined8 ******)((long)plVar38 + 0x31) = pppppuStack_b0;
            *(byte *)(plVar38 + 3) = *(byte *)(plVar38 + 3) & 0xf9 | bVar3 & 6;
            *(undefined1 *)((long)plVar38 + 0x65) = uVar5;
            plVar38[9] = lStack_99;
            plVar38[8] = CONCAT71(uStack_a0,uStack_a1);
            plVar38[0xb] = uStack_428;
            plVar38[10] = (long)ppppppuStack_430;
            *(undefined4 *)(plVar38 + 0xc) = uStack_420;
            *(undefined1 *)((long)plVar38 + 0x1b) = uVar4;
            func_0x000107c2b074(&ppppuStack_400,&PTR_DAT_110b9d408);
            FUN_10a048040(plVar38[0x2b],&ppppuStack_400);
            if ((long)ppppuStack_3f0 < 0) {
              __ZdlPv(ppppuStack_400);
            }
            func_0x000107c2b074(&ppppuStack_400,&PTR_DAT_110b9d3f0);
            FUN_10a048040(plVar38[0x2b],&ppppuStack_400);
            if ((long)ppppuStack_3f0 < 0) {
              __ZdlPv(ppppuStack_400);
            }
            iVar30 = iVar30 + 1;
            iVar31 = iStack_484;
            if ((char)param_1[0xc3] == '\x01') {
              FUN_109febc44(&ppppuStack_400);
              FUN_10a002568(&ppppuStack_3f0,&UNK_10f632039,10);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
              pppppuVar14 = &ppppuStack_3f0;
              FUN_10a002568(pppppuVar14,&UNK_10f632044,0xe);
              FUN_10a0130f4();
              ppppuVar18 = *pppppuVar14;
              *(undefined8 *)((long)pppppuVar14 + (long)(ppppuVar18[-3] + 3)) = 2;
              pppuVar19 = ppppuVar18[-3];
              *(uint *)((long)pppppuVar14 + (long)(pppuVar19 + 1)) =
                   *(uint *)((long)pppppuVar14 + (long)(pppuVar19 + 1)) & 0xffffffb5 | 8;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
              pppppuVar14 = &ppppuStack_3f0;
              FUN_10a002568(pppppuVar14,&UNK_10f632053,0xb);
              FUN_10a0130f4();
              ppppuVar18 = *pppppuVar14;
              *(undefined8 *)((long)pppppuVar14 + (long)(ppppuVar18[-3] + 3)) = 4;
              pppuVar19 = ppppuVar18[-3];
              *(uint *)((long)pppppuVar14 + (long)(pppuVar19 + 1)) =
                   *(uint *)((long)pppppuVar14 + (long)(pppuVar19 + 1)) & 0xffffffb5 | 8;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
              pppppuVar14 = &ppppuStack_3f0;
              FUN_10a002568(pppppuVar14,&UNK_10f631ad0,3);
              FUN_10a00ff18(&ppppppuStack_418,*(undefined8 *)(plVar10[0x35] + 0x168));
              uVar24 = uStack_410;
              pppppppuVar15 = (undefined8 *******)ppppppuStack_418;
              if (-1 < (char)bStack_401) {
                uVar24 = (ulong)bStack_401;
                pppppppuVar15 = &ppppppuStack_418;
              }
              FUN_10a002568(pppppuVar14,pppppppuVar15,uVar24);
              FUN_10a002568();
              if ((char)bStack_401 < '\0') {
                __ZdlPv(ppppppuStack_418);
              }
              if ((short)puVar36[1] != 0) {
                FUN_10a002568(&ppppuStack_3f0,&UNK_10f63205f,7);
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt();
              }
              if ((bVar28 & 0x1e) != 0) {
                FUN_10a002568(&ppppuStack_3f0,&UNK_10f632067,9);
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
              }
              func_0x00010a002480(&ppppppuStack_418,&ppuStack_3e8,&iStack_2e0);
              uVar24 = uStack_410;
              pppppppuVar15 = (undefined8 *******)ppppppuStack_418;
              if (-1 < (char)bStack_401) {
                uVar24 = (ulong)bStack_401;
                pppppppuVar15 = &ppppppuStack_418;
              }
              FUN_10a00edf0(param_2 + 0x10,4,pppppppuVar15,uVar24,param_2 + 8);
              if ((char)bStack_401 < '\0') {
                __ZdlPv(ppppppuStack_418);
              }
              ppppuStack_400 = (undefined8 ****)&PTR_SUB_1108a5a38;
              appuStack_380[0] = &PTR_DAT_1108a5a88;
              ppppuStack_3f0 = (undefined8 ****)&PTR_DAT_1108a5a60;
              ppuStack_3e8 = &PTR_DAT_11088d7b0;
              if (cStack_391 < '\0') {
                __ZdlPv(uStack_3a8);
              }
              ppuStack_3e8 = ppuVar1;
              __ZNSt3__16localeD1Ev(&uStack_3e0);
              __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                        (&ppppuStack_400,&PTR_PTR_1108a5aa0);
              __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_380);
            }
          }
        }
      }
      puVar27 = puVar27 + 1;
    } while (puVar27 != puStack_450);
    uVar20 = 0;
    if (iVar31 != 0) {
      uVar20 = 0x100;
    }
    if ((*(byte *)(param_1 + 0xc3) & 1) != 0) goto LAB_10a024a68;
  }
  if ((char)lVar21 != '\0') {
    iVar2 = *(int *)(param_2 + 8);
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    *(int *)(param_2 + 8) = iVar2 + -1;
  }
LAB_10a024bb8:
  (**(code **)(*param_3 + 0x90))(param_3,0,0,0);
  plVar10 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    plVar38 = plStack_100 + 1;
    do {
      lVar21 = *plVar38;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar7) {
        *plVar38 = lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar38 = plStack_128 + 1;
    do {
      lVar21 = *plVar38;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar7) {
        *plVar38 = lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  func_0x00010a048e34(&uStack_2d0,uStack_2d8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return uVar20 | iVar30 != 0;
  }
  ___stack_chk_fail();
LAB_10a024cb0:
  FUN_10a04320c();
LAB_10a024cc4:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a024cc8);
  (*pcVar9)();
}



/* Entry: 10a024e90; end: 10a0258e7;  */

void FUN_10a024e90(long param_1,long *param_2,long *param_3,undefined8 *param_4,undefined8 *param_5,
                  undefined8 param_6,undefined8 param_7,long *param_8,long *param_9,
                  undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined8 *extraout_x8;
  long lVar27;
  ulong uVar28;
  byte *pbVar29;
  byte bVar31;
  int iVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  undefined *puVar36;
  long **pplVar37;
  ulong unaff_x28;
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined8 uStack_6c0;
  long *plStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  long *plStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  ulong uStack_650;
  long **pplStack_648;
  undefined *puStack_640;
  long *plStack_638;
  long *plStack_630;
  undefined8 *puStack_628;
  long *plStack_620;
  long *plStack_618;
  long *plStack_610;
  undefined8 *puStack_608;
  undefined1 **ppuStack_600;
  code *pcStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 auStack_5b8 [2];
  char cStack_5a1;
  undefined4 auStack_598 [2];
  undefined8 auStack_590 [52];
  undefined8 uStack_3f0;
  long *plStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c0;
  long lStack_390;
  undefined1 *puStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined4 uStack_288;
  long *plStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_158;
  undefined4 uStack_148;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  byte *pbVar30;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar37 = &plStack_280;
  uStack_2b8 = param_10;
  uStack_2b0 = param_11;
  plStack_280 = (long *)0x0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  uStack_88 = 0x3f800000;
  if (param_9 != (long *)0x0) {
    plVar15 = param_9 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_d0 = param_9;
  uStack_c8 = 0;
  uStack_c0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0x100000001;
  uStack_2c8 = 0;
  plStack_318 = (long *)0x0;
  uStack_320 = 0;
  lStack_310 = 0;
  uStack_308 = 0xffffffffffffffff;
  uStack_300 = 0xffffffffffffffff;
  uStack_2f8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2e8 = 0;
  uStack_2e0 = 0xffffffffffffffff;
  uStack_2d8 = 0xffffffffffffffff;
  uStack_2d0 = 0;
  uStack_2c0 = 0;
  puVar16 = param_5;
  uVar18 = param_6;
  uVar20 = param_7;
  plStack_d8 = param_8;
  FUN_10a061728(&plStack_280,&uStack_320);
  plVar15 = plStack_2f0;
  if (plStack_2f0 != (long *)0x0) {
    plVar33 = plStack_2f0 + 1;
    do {
      lVar27 = *plVar33;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar6) {
        *plVar33 = lVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_2f0 + 0x10))(plStack_2f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    plVar33 = plStack_318 + 1;
    do {
      lVar27 = *plVar33;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar6) {
        *plVar33 = lVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_318 + 0x10))(plStack_318);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar33 = plStack_270;
  lStack_278 = *param_3;
  plVar15 = (long *)param_3[1];
  if (param_3[1] != 0) {
    plVar35 = (long *)(param_3[1] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar6) {
        *plVar35 = *plVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_270 != (long *)0x0) {
    plVar35 = plStack_270 + 1;
    do {
      lVar27 = *plVar35;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar6) {
        *plVar35 = lVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar27 == 0) {
      lVar27 = *plStack_270;
      plStack_270 = plVar15;
      (**(code **)(lVar27 + 0x10))(plVar33);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
      plVar15 = plStack_270;
    }
  }
  plStack_270 = plVar15;
  uStack_268 = 0;
  uStack_260 = 0xffffffffffffffff;
  uStack_258 = 0xffffffffffffffff;
  uStack_218 = 0;
  uStack_2c8 = 0;
  plStack_318 = (long *)0x0;
  uStack_320 = 0;
  lStack_310 = 0;
  uStack_308 = 0xffffffffffffffff;
  uStack_300 = 0xffffffffffffffff;
  uStack_2f8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2e8 = 0;
  uStack_2e0 = 0xffffffffffffffff;
  uStack_2d8 = 0xffffffffffffffff;
  uStack_2d0 = 0;
  uStack_2c0 = 0;
  FUN_10a061728(&plStack_280,&uStack_320);
  plVar15 = plStack_2f0;
  if (plStack_2f0 != (long *)0x0) {
    plVar33 = plStack_2f0 + 1;
    do {
      lVar27 = *plVar33;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar6) {
        *plVar33 = lVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_2f0 + 0x10))(plStack_2f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    plVar33 = plStack_318 + 1;
    do {
      lVar27 = *plVar33;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar6) {
        *plVar33 = lVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_318 + 0x10))(plStack_318);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar33 = plStack_208;
  uStack_210 = *param_4;
  plVar15 = (long *)param_4[1];
  if (param_4[1] != 0) {
    plVar35 = (long *)(param_4[1] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar6) {
        *plVar35 = *plVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar35 = (long *)(ulong)param_12._2_2_;
  if (plStack_208 != (long *)0x0) {
    plVar11 = plStack_208 + 1;
    do {
      lVar27 = *plVar11;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar27 == 0) {
      lVar27 = *plStack_208;
      plStack_208 = plVar15;
      (**(code **)(lVar27 + 0x10))(plVar33);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
      plVar15 = plStack_208;
    }
  }
  plStack_208 = plVar15;
  uStack_200 = 0;
  uStack_1f8 = 0xffffffffffffffff;
  uStack_1f0 = 0xffffffffffffffff;
  uStack_1b0 = 0;
  if (param_12._2_2_ == 0x80) {
    uStack_2c8 = 0;
    plStack_318 = (long *)0x0;
    uStack_320 = 0;
    lStack_310 = 0;
    uStack_308 = 0xffffffffffffffff;
    uStack_300 = 0xffffffffffffffff;
    uStack_2f8 = 0;
    plStack_2f0 = (long *)0x0;
    uStack_2e8 = 0;
    uStack_2e0 = 0xffffffffffffffff;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2d0 = 0;
    uStack_2c0 = 0;
    FUN_10a061728(&plStack_280,&uStack_320);
    plVar15 = plStack_2f0;
    if (plStack_2f0 != (long *)0x0) {
      plVar33 = plStack_2f0 + 1;
      do {
        lVar27 = *plVar33;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar6) {
          *plVar33 = lVar27 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plStack_2f0 + 0x10))(plStack_2f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    plVar15 = plStack_318;
    if (plStack_318 != (long *)0x0) {
      plVar33 = plStack_318 + 1;
      do {
        lVar27 = *plVar33;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar6) {
          *plVar33 = lVar27 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plStack_318 + 0x10))(plStack_318);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    plVar33 = plStack_1a0;
    uStack_1a8 = *param_5;
    plVar15 = (long *)param_5[1];
    if (param_5[1] != 0) {
      plVar11 = (long *)(param_5[1] + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (plStack_1a0 != (long *)0x0) {
      plVar11 = plStack_1a0 + 1;
      do {
        lVar27 = *plVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar27 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar27 == 0) {
        lVar27 = *plStack_1a0;
        plStack_1a0 = plVar15;
        (**(code **)(lVar27 + 0x10))(plVar33);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
        plVar15 = plStack_1a0;
      }
    }
    plStack_1a0 = plVar15;
    uStack_198 = 0;
    uStack_190 = 0xffffffffffffffff;
    uStack_188 = 0xffffffffffffffff;
    uStack_148 = 0;
    uStack_158 = 0xffffffff;
  }
  (**(code **)(*param_2 + 0x88))(param_2,&plStack_280);
  (**(code **)(*param_2 + 0xc0))(param_2,&uStack_2b8);
  bVar31 = *(byte *)(param_1 + 0x6a8);
  puVar36 = (undefined *)(ulong)bVar31;
  if (((((short)param_12 != -1) || (param_12._2_2_ != 0x80)) || (bVar31 != 0xff)) ||
     (*(char *)(param_1 + 0x6a9) != -1)) {
    if ((short)param_12 == -1) {
      uVar23 = (uint)param_12._2_2_;
      lVar27 = 0x6d8;
      if (uVar23 == 0x80) {
        lVar27 = 0x6f8;
      }
      plVar15 = param_2 + 4;
      FUN_10a5dfd94(plVar15,*(undefined8 *)(param_1 + lVar27));
      plVar33 = param_2 + 4;
      FUN_10a01eacc(plVar33,plVar15);
      *(uint *)((long)plVar33 + 0x5c) = uVar23;
      func_0x000107c2b07c(&uStack_320,&UNK_10f632086);
      func_0x00010a01f3c4(plVar33,&uStack_320,param_1 + 0x18);
      if (lStack_310 < 0) {
        __ZdlPv(uStack_320);
      }
      func_0x000107c2b07c(&uStack_320,&UNK_10f632092);
      func_0x00010a01f3c4(plVar33,&uStack_320,param_1 + 0x24);
      if (lStack_310 < 0) {
        __ZdlPv(uStack_320);
      }
      func_0x000107c2b07c(&uStack_320,&UNK_10f6320a1);
      func_0x00010a01f3c4(plVar33,&uStack_320,param_1 + 0x30);
      if (lStack_310 < 0) {
        __ZdlPv(uStack_320);
      }
      func_0x000107c2b07c(&uStack_320,&UNK_10f631b33);
      FUN_10a01671c(plVar33,&uStack_320,param_1 + 0x14);
      if (lStack_310 < 0) {
        __ZdlPv(uStack_320);
      }
      func_0x000107c2b07c(&uStack_320,&UNK_10f6320ae);
      FUN_10a01671c(plVar33,&uStack_320,param_1 + 0x3c);
      if (lStack_310 < 0) {
        __ZdlPv(uStack_320);
      }
      if (uVar23 == 0x80) {
        if (bVar31 == 0xff) {
          uVar24 = (ulong)*(byte *)(param_1 + 0x6a9);
          uVar28 = (param_2[0x29] - param_2[0x28] >> 4) * -0x30c30c30c30c30c3;
          if (uVar28 < uVar24 || uVar28 - uVar24 == 0) goto LAB_10a025888;
          lVar27 = param_2[0x28] + uVar24 * 0x150;
          uVar24 = *(ulong *)(lVar27 + 0x2c);
          uVar39 = *(undefined4 *)(lVar27 + 0x34);
          uStack_290 = 0;
          uStack_288 = 0;
          uStack_294 = 0;
        }
        else {
          uVar24 = (ulong)*(byte *)(param_1 + 0x6a8);
          uVar28 = (param_2[0x2c] - param_2[0x2b] >> 3) * -0x7063e7063e7063e7;
          if (uVar28 < uVar24 || uVar28 - uVar24 == 0) {
LAB_10a025888:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a02588c);
            (*pcVar5)();
          }
          lVar27 = param_2[0x2b] + uVar24 * 0x148;
          uStack_288 = *(undefined4 *)(lVar27 + 0x3c);
          uStack_290 = *(undefined8 *)(lVar27 + 0x34);
          uStack_294 = *(undefined4 *)(param_1 + 0x68);
          uVar24 = 0;
          uVar39 = 0;
        }
        func_0x000107c2b07c(&uStack_320,&UNK_10f6320c0);
        func_0x00010a01f3c4(plVar33,&uStack_320,&uStack_290);
        if (lStack_310 < 0) {
          __ZdlPv(uStack_320);
        }
        func_0x000107c2b07c(&uStack_320,&UNK_10f6320cb);
        FUN_10a01671c(plVar33,&uStack_320,&uStack_294);
        if (lStack_310 < 0) {
          __ZdlPv(uStack_320);
        }
        func_0x000107c2b07c(&uStack_320,&UNK_10f6320d7);
        uStack_29c = 0;
        uStack_2a8 = uVar24;
        uStack_2a0 = uVar39;
        FUN_10a015dcc(plVar33,&uStack_320,&uStack_2a8);
        if (lStack_310 < 0) {
          __ZdlPv(uStack_320);
        }
        func_0x000107c2b07c(&uStack_320,&UNK_10f6320ee);
        uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
        FUN_10a01671c(plVar33,&uStack_320,&uStack_2a8);
      }
      else {
        func_0x000107c2b07c(&uStack_320,&UNK_10f6320f9);
        uVar39 = 0;
        if (*(char *)(param_1 + 0x87) == '\0') {
          uVar39 = 0x3f800000;
        }
        uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uVar39);
        FUN_10a01671c(plVar33,&uStack_320,&uStack_2a8);
        if (lStack_310 < 0) {
          __ZdlPv(uStack_320);
        }
        func_0x000107c2b07c(&uStack_320,&UNK_10f632105);
        uStack_2a8 = CONCAT71(uStack_2a8._1_7_,uVar23 == 0x1f);
        func_0x00010a01edd4(plVar33,&uStack_320,&uStack_2a8);
        if (lStack_310 < 0) {
          __ZdlPv(uStack_320);
        }
        plVar35 = param_2 + 4;
        FUN_10a01f6d4(plVar35,*(undefined2 *)(param_1 + 0x40));
        func_0x000107c2b07c(&uStack_320,&DAT_10f524f67);
        uStack_2a8 = plVar35[0x23];
        uStack_2a0 = (undefined4)plVar35[0x24];
        func_0x00010a01f3c4(plVar33,&uStack_320,&uStack_2a8);
      }
      if (lStack_310 < 0) {
        __ZdlPv(uStack_320);
      }
      FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x7f8),param_6);
      FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x808),param_7);
      FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x878),param_1 + 0x708);
      FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x888),param_1 + 0x718);
      lVar27 = 0;
      FUN_10a2421c8();
      (**(code **)(*param_2 + 0x58))
                (param_2,*(undefined8 *)(lVar27 + 0x208),plVar15,&UNK_10e482b48,3);
      lVar27 = *(long *)(param_1 + 0x7f8);
      FUN_10a18cbd8(lVar27 + 0x288);
      FUN_10a1da3a4(lVar27,0,0,0,4,0,0,0);
      lVar27 = *(long *)(param_1 + 0x808);
      FUN_10a18cbd8(lVar27 + 0x288);
      FUN_10a1da3a4(lVar27,0,0,0,4,0,0,0);
      lVar27 = *(long *)(param_1 + 0x878);
      FUN_10a18cbd8(lVar27 + 0x288);
      FUN_10a1da3a4(lVar27,0,0,0,4,0,0,0);
      lVar27 = *(long *)(param_1 + 0x888);
      FUN_10a18cbd8(lVar27 + 0x288);
      puVar16 = (undefined8 *)0x4;
      uVar18 = 0;
      uVar20 = 0;
      param_8 = (long *)0x0;
      FUN_10a1da3a4(lVar27,0,0,0);
    }
    else {
      plVar15 = param_2 + 4;
      FUN_10a01eacc(plVar15,(short)param_12);
      *(uint *)((long)plVar15 + 0x5c) = (uint)param_12._2_2_;
      lVar27 = 0;
      FUN_10a2421c8();
      puVar16 = (undefined8 *)0x3;
      (**(code **)(*param_2 + 0x58))
                (param_2,*(undefined8 *)(lVar27 + 0x208),(short)param_12,&UNK_10e482b48);
    }
  }
  uVar13 = 0;
  plVar15 = (long *)0x0;
  (**(code **)(*param_2 + 0x90))(param_2,0,0);
  plVar33 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar11 = plStack_a8 + 1;
    do {
      lVar27 = *plVar11;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
    }
  }
  plVar33 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar11 = plStack_d0 + 1;
    do {
      lVar27 = *plVar11;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
    }
  }
  plVar33 = &lStack_278;
  plVar11 = plStack_280;
  func_0x00010a048e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_310 < 0) {
    __ZdlPv(uStack_320);
  }
  FUN_10a023a44(&plStack_280);
  __Unwind_Resume();
  pcStack_328 = FUN_10a0258e8;
  lStack_390 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar39 = 1;
  uVar19 = 1;
  uVar21 = 0xffffffffffffffff;
  uVar22 = 0xffffffffffffffff;
  uStack_5e0 = uVar18;
  uStack_5d8 = uVar20;
  puStack_330 = &stack0xfffffffffffffff0;
  FUN_10a025e68(auStack_598,uVar13,0,0,0);
  plVar34 = plStack_3e8;
  uStack_3f0 = *puVar16;
  plVar7 = (long *)puVar16[1];
  if (puVar16[1] != 0) {
    plVar1 = (long *)(puVar16[1] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_3e8 != (long *)0x0) {
    plVar1 = plStack_3e8 + 1;
    do {
      lVar27 = *plVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar27 == 0) {
      lVar27 = *plStack_3e8;
      plStack_3e8 = plVar7;
      (**(code **)(lVar27 + 0x10))(plVar34);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar34);
      plVar7 = plStack_3e8;
    }
  }
  plStack_3e8 = plVar7;
  uStack_3e0 = 0;
  uStack_3d8 = 0xffffffffffffffff;
  uStack_3d0 = 0xffffffffffffffff;
  (**(code **)(*plVar11 + 0x88))(plVar11,auStack_598);
  (**(code **)(*plVar11 + 0xc0))(plVar11,&uStack_5e0);
  uVar17 = (undefined4)uVar19;
  if ((byte)uStack_320 < 3) {
    if ((byte)uStack_320 != 1) {
      if ((byte)uStack_320 == 2) {
        iVar32 = (int)param_8;
        if (iVar32 == 1) {
          pbVar26 = *(byte **)(*plVar33 + 0x88);
          pbVar2 = *(byte **)(*plVar33 + 0x90);
          if ((pbVar26 != pbVar2) && (pbVar26 + 1 != pbVar2)) {
            bVar31 = *pbVar26;
            pbVar25 = pbVar26;
            pbVar30 = pbVar26 + 1;
            do {
              pbVar29 = pbVar30 + 1;
              bVar3 = *pbVar30;
              bVar6 = bVar3 <= bVar31;
              if (bVar31 <= bVar3) {
                bVar31 = bVar3;
              }
              pbVar26 = pbVar30;
              if (bVar6) {
                pbVar26 = pbVar25;
              }
              pbVar25 = pbVar26;
              pbVar30 = pbVar29;
            } while (pbVar29 != pbVar2);
          }
          uVar23 = (uint)*pbVar26;
          if (*pbVar26 < 2) {
            uVar23 = 1;
          }
          plVar34 = (long *)(ulong)uVar23;
          param_8 = plVar11 + 4;
          FUN_10a5dfd94(param_8,*(undefined8 *)(plVar33[1] + 0x10));
          plVar33 = plVar11 + 4;
          FUN_10a01eacc(plVar33,param_8);
          plVar35 = (long *)0x0;
          *(undefined1 *)((long)plVar33 + 0x55) = 6;
          *(undefined4 *)((long)plVar33 + 0x5c) = 0x1f;
          pplVar37 = (long **)0xaaaaaaab;
          plVar15 = (long *)&DAT_10f2db963;
          auVar38 = NEON_fmov(0x3f800000,4);
          uStack_5e8 = auVar38._8_8_;
          uStack_5f0 = auVar38._0_8_;
          puVar16 = (undefined8 *)&UNK_10e482b48;
          unaff_x28 = 0xffffffff;
          puVar36 = &UNK_10e482d94;
          do {
            iVar32 = (int)plVar35;
            uStack_5d0 = uStack_5f0;
            uStack_5c8 = uStack_5e8;
            if (iVar32 != 0) {
              lVar27 = (ulong)(iVar32 + ((int)(unaff_x28 / 0xc) * 0xc ^ 0xffffffffU)) * 0x10;
              uStack_5d0 = *(undefined8 *)(&UNK_10e482d94 + lVar27);
              uStack_5c8 = *(undefined8 *)(&UNK_10e482d9c + lVar27);
            }
            func_0x000107c2b07c(auStack_5b8,&DAT_10f2db963);
            FUN_10a015dcc(plVar33,auStack_5b8,&uStack_5d0);
            if (cStack_5a1 < '\0') {
              __ZdlPv(auStack_5b8[0]);
            }
            *(int *)(plVar33 + 0xb) = iVar32 + 1;
            lVar27 = 0;
            FUN_10a2421c8();
            uVar39 = 3;
            (**(code **)(*plVar11 + 0x58))
                      (plVar11,*(undefined8 *)(lVar27 + 0x208),param_8,&UNK_10e482b48);
            uVar17 = (undefined4)uVar19;
            plVar35 = (long *)(ulong)(iVar32 + 1U);
            unaff_x28 = (ulong)((int)unaff_x28 + 1);
          } while (uVar23 != iVar32 + 1U);
        }
        else {
          plVar15 = plVar33 + 1;
          plVar33 = plVar11 + 4;
          FUN_10a5dfd94(plVar33,*(undefined8 *)(*plVar15 + 0x10));
          plVar15 = plVar11 + 4;
          FUN_10a01eacc(plVar15,plVar33);
          func_0x000107c2b07c(auStack_5b8,&DAT_10f2db963);
          auVar38 = NEON_fmov(0x3f800000,4);
          uStack_5c8 = auVar38._8_8_;
          uStack_5d0 = auVar38._0_8_;
          FUN_10a015dcc(plVar15,auStack_5b8,&uStack_5d0);
          if (cStack_5a1 < '\0') {
            __ZdlPv(auStack_5b8[0]);
          }
          uVar39 = 0x40;
          if (iVar32 != 3) {
            uVar39 = 0;
          }
          uVar12 = 0x80;
          if (iVar32 != 2) {
            uVar12 = uVar39;
          }
          *(undefined4 *)((long)plVar15 + 0x5c) = uVar12;
          lVar27 = 0;
          FUN_10a2421c8();
          uVar39 = 3;
          (**(code **)(*plVar11 + 0x58))
                    (plVar11,*(undefined8 *)(lVar27 + 0x208),plVar33,&UNK_10e482b48);
        }
      }
      goto LAB_10a025ca4;
    }
    plVar33 = (long *)plVar33[1];
    plVar7 = plVar11 + 4;
    FUN_10a5dfd94(plVar7,*plVar33);
    FUN_10a01eacc(plVar11 + 4,plVar7);
    FUN_10a1db4cc(plVar33[0x22],puVar16);
    lVar27 = 0;
    FUN_10a2421c8();
    (**(code **)(*plVar11 + 0x58))(plVar11,*(undefined8 *)(lVar27 + 0x208),plVar7,&UNK_10e482b48,3);
  }
  else if ((byte)uStack_320 == 3) {
    plVar33 = (long *)plVar33[1];
    plVar7 = plVar11 + 4;
    FUN_10a5dfd94(plVar7,plVar33[4]);
    FUN_10a1db4cc(plVar33[0x22],plVar15);
    lVar27 = 0;
    FUN_10a2421c8();
    (**(code **)(*plVar11 + 0x58))(plVar11,*(undefined8 *)(lVar27 + 0x208),plVar7,&UNK_10e482b48,3);
  }
  else {
    if ((byte)uStack_320 != 4) goto LAB_10a025ca4;
    plVar33 = (long *)plVar33[1];
    plVar7 = plVar11 + 4;
    FUN_10a5dfd94(plVar7,plVar33[6]);
    FUN_10a1db4cc(plVar33[0x22],plVar15);
    lVar27 = 0;
    FUN_10a2421c8();
    (**(code **)(*plVar11 + 0x58))(plVar11,*(undefined8 *)(lVar27 + 0x208),plVar7,&UNK_10e482b48,3);
  }
  param_8 = (long *)plVar33[0x22];
  FUN_10a18cbd8(param_8 + 0x51);
  uVar39 = 4;
  uVar17 = 0;
  uVar21 = 0;
  uVar22 = 0;
  FUN_10a1da3a4(param_8,0,0,0);
LAB_10a025ca4:
  uVar12 = 0;
  uVar14 = 0;
  (**(code **)(*plVar11 + 0x90))(plVar11,0);
  if (plStack_3c0 != (long *)0x0) {
    plVar11 = plStack_3c0 + 1;
    do {
      lVar27 = *plVar11;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3c0);
    }
  }
  plVar11 = plStack_3e8;
  if (plStack_3e8 != (long *)0x0) {
    plVar7 = plStack_3e8 + 1;
    do {
      lVar27 = *plVar7;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = lVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_3e8 + 0x10))(plStack_3e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  puVar8 = auStack_590;
  uVar10 = auStack_598[0];
  func_0x00010a048e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_390) {
    ___stack_chk_fail();
    if (cStack_5a1 < '\0') {
      __ZdlPv(auStack_5b8[0]);
    }
    FUN_10a023a44(auStack_598);
    puVar9 = puVar8;
    __Unwind_Resume();
    pcStack_5f8 = FUN_10a025e68;
    *extraout_x8 = 0;
    extraout_x8[0x35] = 0;
    extraout_x8[0x37] = 0;
    extraout_x8[0x36] = 0;
    extraout_x8[0x38] = 0xffffffffffffffff;
    extraout_x8[0x39] = 0xffffffffffffffff;
    extraout_x8[0x3a] = 0;
    extraout_x8[0x3c] = 0;
    extraout_x8[0x3b] = 0;
    extraout_x8[0x3d] = 0xffffffffffffffff;
    extraout_x8[0x3e] = 0xffffffffffffffff;
    *(undefined4 *)(extraout_x8 + 0x3f) = 0x3f800000;
    *(undefined8 *)((long)extraout_x8 + 0x1fc) = 0;
    *(undefined4 *)((long)extraout_x8 + 0x204) = 0;
    uStack_668 = 0;
    plStack_6b8 = (long *)0x0;
    uStack_6c0 = 0;
    uStack_6b0 = 0;
    uStack_6a8 = 0xffffffffffffffff;
    uStack_6a0 = 0xffffffffffffffff;
    uStack_698 = 0;
    plStack_690 = (long *)0x0;
    uStack_688 = 0;
    uStack_680 = 0xffffffffffffffff;
    uStack_678 = 0xffffffffffffffff;
    uStack_670 = 0;
    uStack_660 = 0;
    uStack_650 = unaff_x28;
    pplStack_648 = pplVar37;
    puStack_640 = puVar36;
    plStack_638 = plVar35;
    plStack_630 = plVar34;
    puStack_628 = puVar16;
    plStack_620 = plVar15;
    plStack_618 = plVar33;
    plStack_610 = param_8;
    puStack_608 = puVar8;
    ppuStack_600 = &puStack_330;
    FUN_10a061728(extraout_x8,&uStack_6c0);
    plVar15 = plStack_690;
    if (plStack_690 != (long *)0x0) {
      plVar33 = plStack_690 + 1;
      do {
        lVar27 = *plVar33;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar6) {
          *plVar33 = lVar27 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plStack_690 + 0x10))(plStack_690);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    plVar15 = plStack_6b8;
    if (plStack_6b8 != (long *)0x0) {
      plVar33 = plStack_6b8 + 1;
      do {
        lVar27 = *plVar33;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar6) {
          *plVar33 = lVar27 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plStack_6b8 + 0x10))(plStack_6b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    uStack_6c0 = *puVar9;
    plStack_6b8 = (long *)puVar9[1];
    if (puVar9[1] != 0) {
      plVar15 = (long *)(puVar9[1] + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_6b0 = CONCAT44(uVar12,uVar10);
    uStack_6a8 = uVar21;
    uStack_6a0 = uVar22;
    FUN_10a00e5c4(extraout_x8 + 1,&uStack_6c0);
    plVar15 = plStack_6b8;
    extraout_x8[4] = uStack_6a8;
    extraout_x8[3] = uStack_6b0;
    extraout_x8[5] = uStack_6a0;
    if (plStack_6b8 != (long *)0x0) {
      plVar33 = plStack_6b8 + 1;
      do {
        lVar27 = *plVar33;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar6) {
          *plVar33 = lVar27 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plStack_6b8 + 0x10))(plStack_6b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    *(undefined4 *)(extraout_x8 + 0xd) = uVar14;
    *(undefined4 *)(extraout_x8 + 0x40) = uVar39;
    *(undefined4 *)((long)extraout_x8 + 0x204) = uVar17;
    return;
  }
  return;
}



/* Entry: 10a0258e8; end: 10a025e67;  */

void FUN_10a0258e8(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 *param_5,
                  undefined8 param_6,undefined8 param_7,long *param_8,byte param_9)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined4 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 *extraout_x8;
  long lVar20;
  byte *pbVar21;
  byte bVar23;
  int iVar24;
  long *plVar25;
  ulong unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined1 auVar26 [16];
  undefined8 uStack_3a0;
  long *plStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  ulong uStack_318;
  long *plStack_310;
  undefined8 *puStack_308;
  long *plStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined8 *puStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined4 auStack_278 [2];
  undefined8 auStack_270 [52];
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a0;
  long lStack_70;
  byte *pbVar22;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = 1;
  uVar13 = 1;
  uVar14 = 0xffffffffffffffff;
  uVar15 = 0xffffffffffffffff;
  uStack_2c0 = param_6;
  uStack_2b8 = param_7;
  FUN_10a025e68(auStack_278,param_3,0,0,0);
  plVar25 = plStack_c8;
  uStack_d0 = *param_5;
  plVar6 = (long *)param_5[1];
  if (param_5[1] != 0) {
    plVar1 = (long *)(param_5[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar20 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      lVar20 = *plStack_c8;
      plStack_c8 = plVar6;
      (**(code **)(lVar20 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      plVar6 = plStack_c8;
    }
  }
  plStack_c8 = plVar6;
  uStack_c0 = 0;
  uStack_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffffffffffff;
  (**(code **)(*param_2 + 0x88))(param_2,auStack_278);
  (**(code **)(*param_2 + 0xc0))(param_2,&uStack_2c0);
  uVar12 = (undefined4)uVar13;
  if (param_9 < 3) {
    if (param_9 != 1) {
      if (param_9 == 2) {
        iVar24 = (int)param_8;
        if (iVar24 == 1) {
          pbVar19 = *(byte **)(*param_1 + 0x88);
          pbVar2 = *(byte **)(*param_1 + 0x90);
          if ((pbVar19 != pbVar2) && (pbVar19 + 1 != pbVar2)) {
            bVar23 = *pbVar19;
            pbVar18 = pbVar19;
            pbVar22 = pbVar19 + 1;
            do {
              pbVar21 = pbVar22 + 1;
              bVar3 = *pbVar22;
              bVar5 = bVar3 <= bVar23;
              if (bVar23 <= bVar3) {
                bVar23 = bVar3;
              }
              pbVar19 = pbVar22;
              if (bVar5) {
                pbVar19 = pbVar18;
              }
              pbVar18 = pbVar19;
              pbVar22 = pbVar21;
            } while (pbVar21 != pbVar2);
          }
          uVar16 = (uint)*pbVar19;
          if (*pbVar19 < 2) {
            uVar16 = 1;
          }
          plVar25 = (long *)(ulong)uVar16;
          param_8 = param_2 + 4;
          FUN_10a5dfd94(param_8,*(undefined8 *)(param_1[1] + 0x10));
          param_1 = param_2 + 4;
          FUN_10a01eacc(param_1,param_8);
          unaff_x25 = 0;
          *(undefined1 *)((long)param_1 + 0x55) = 6;
          *(undefined4 *)((long)param_1 + 0x5c) = 0x1f;
          unaff_x27 = 0xaaaaaaab;
          param_4 = (long *)&DAT_10f2db963;
          auVar26 = NEON_fmov(0x3f800000,4);
          uStack_2c8 = auVar26._8_8_;
          uStack_2d0 = auVar26._0_8_;
          param_5 = (undefined8 *)&UNK_10e482b48;
          unaff_x28 = 0xffffffff;
          unaff_x26 = &UNK_10e482d94;
          do {
            iVar24 = (int)unaff_x25;
            uStack_2b0 = uStack_2d0;
            uStack_2a8 = uStack_2c8;
            if (iVar24 != 0) {
              lVar20 = (ulong)(iVar24 + ((int)(unaff_x28 / 0xc) * 0xc ^ 0xffffffffU)) * 0x10;
              uStack_2b0 = *(undefined8 *)(&UNK_10e482d94 + lVar20);
              uStack_2a8 = *(undefined8 *)(&UNK_10e482d9c + lVar20);
            }
            func_0x000107c2b07c(auStack_298,&DAT_10f2db963);
            FUN_10a015dcc(param_1,auStack_298,&uStack_2b0);
            if (cStack_281 < '\0') {
              __ZdlPv(auStack_298[0]);
            }
            *(int *)(param_1 + 0xb) = iVar24 + 1;
            lVar20 = 0;
            FUN_10a2421c8();
            uVar17 = 3;
            (**(code **)(*param_2 + 0x58))
                      (param_2,*(undefined8 *)(lVar20 + 0x208),param_8,&UNK_10e482b48);
            uVar12 = (undefined4)uVar13;
            unaff_x25 = (ulong)(iVar24 + 1U);
            unaff_x28 = (ulong)((int)unaff_x28 + 1);
          } while (uVar16 != iVar24 + 1U);
        }
        else {
          plVar6 = param_1 + 1;
          param_1 = param_2 + 4;
          FUN_10a5dfd94(param_1,*(undefined8 *)(*plVar6 + 0x10));
          param_4 = param_2 + 4;
          FUN_10a01eacc(param_4,param_1);
          func_0x000107c2b07c(auStack_298,&DAT_10f2db963);
          auVar26 = NEON_fmov(0x3f800000,4);
          uStack_2a8 = auVar26._8_8_;
          uStack_2b0 = auVar26._0_8_;
          FUN_10a015dcc(param_4,auStack_298,&uStack_2b0);
          if (cStack_281 < '\0') {
            __ZdlPv(auStack_298[0]);
          }
          uVar17 = 0x40;
          if (iVar24 != 3) {
            uVar17 = 0;
          }
          uVar10 = 0x80;
          if (iVar24 != 2) {
            uVar10 = uVar17;
          }
          *(undefined4 *)((long)param_4 + 0x5c) = uVar10;
          lVar20 = 0;
          FUN_10a2421c8();
          uVar17 = 3;
          (**(code **)(*param_2 + 0x58))
                    (param_2,*(undefined8 *)(lVar20 + 0x208),param_1,&UNK_10e482b48);
        }
      }
      goto LAB_10a025ca4;
    }
    param_1 = (long *)param_1[1];
    plVar6 = param_2 + 4;
    FUN_10a5dfd94(plVar6,*param_1);
    FUN_10a01eacc(param_2 + 4,plVar6);
    FUN_10a1db4cc(param_1[0x22],param_5);
    lVar20 = 0;
    FUN_10a2421c8();
    (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar20 + 0x208),plVar6,&UNK_10e482b48,3);
  }
  else if (param_9 == 3) {
    param_1 = (long *)param_1[1];
    plVar6 = param_2 + 4;
    FUN_10a5dfd94(plVar6,param_1[4]);
    FUN_10a1db4cc(param_1[0x22],param_4);
    lVar20 = 0;
    FUN_10a2421c8();
    (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar20 + 0x208),plVar6,&UNK_10e482b48,3);
  }
  else {
    if (param_9 != 4) goto LAB_10a025ca4;
    param_1 = (long *)param_1[1];
    plVar6 = param_2 + 4;
    FUN_10a5dfd94(plVar6,param_1[6]);
    FUN_10a1db4cc(param_1[0x22],param_4);
    lVar20 = 0;
    FUN_10a2421c8();
    (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar20 + 0x208),plVar6,&UNK_10e482b48,3);
  }
  param_8 = (long *)param_1[0x22];
  FUN_10a18cbd8(param_8 + 0x51);
  uVar17 = 4;
  uVar12 = 0;
  uVar14 = 0;
  uVar15 = 0;
  FUN_10a1da3a4(param_8,0,0,0);
LAB_10a025ca4:
  uVar10 = 0;
  uVar11 = 0;
  (**(code **)(*param_2 + 0x90))(param_2,0);
  if (plStack_a0 != (long *)0x0) {
    plVar6 = plStack_a0 + 1;
    do {
      lVar20 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  plVar6 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar20 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  puVar7 = auStack_270;
  uVar9 = auStack_278[0];
  func_0x00010a048e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    FUN_10a023a44(auStack_278);
    puVar8 = puVar7;
    __Unwind_Resume();
    pcStack_2d8 = FUN_10a025e68;
    *extraout_x8 = 0;
    extraout_x8[0x35] = 0;
    extraout_x8[0x37] = 0;
    extraout_x8[0x36] = 0;
    extraout_x8[0x38] = 0xffffffffffffffff;
    extraout_x8[0x39] = 0xffffffffffffffff;
    extraout_x8[0x3a] = 0;
    extraout_x8[0x3c] = 0;
    extraout_x8[0x3b] = 0;
    extraout_x8[0x3d] = 0xffffffffffffffff;
    extraout_x8[0x3e] = 0xffffffffffffffff;
    *(undefined4 *)(extraout_x8 + 0x3f) = 0x3f800000;
    *(undefined8 *)((long)extraout_x8 + 0x1fc) = 0;
    *(undefined4 *)((long)extraout_x8 + 0x204) = 0;
    uStack_348 = 0;
    plStack_398 = (long *)0x0;
    uStack_3a0 = 0;
    uStack_390 = 0;
    uStack_388 = 0xffffffffffffffff;
    uStack_380 = 0xffffffffffffffff;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    uStack_368 = 0;
    uStack_360 = 0xffffffffffffffff;
    uStack_358 = 0xffffffffffffffff;
    uStack_350 = 0;
    uStack_340 = 0;
    uStack_330 = unaff_x28;
    uStack_328 = unaff_x27;
    puStack_320 = unaff_x26;
    uStack_318 = unaff_x25;
    plStack_310 = plVar25;
    puStack_308 = param_5;
    plStack_300 = param_4;
    plStack_2f8 = param_1;
    plStack_2f0 = param_8;
    puStack_2e8 = puVar7;
    puStack_2e0 = &stack0xfffffffffffffff0;
    FUN_10a061728(extraout_x8,&uStack_3a0);
    plVar6 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      plVar25 = plStack_370 + 1;
      do {
        lVar20 = *plVar25;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *plVar25 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = plStack_398;
    if (plStack_398 != (long *)0x0) {
      plVar25 = plStack_398 + 1;
      do {
        lVar20 = *plVar25;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *plVar25 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_398 + 0x10))(plStack_398);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    uStack_3a0 = *puVar8;
    plStack_398 = (long *)puVar8[1];
    if (puVar8[1] != 0) {
      plVar6 = (long *)(puVar8[1] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_390 = CONCAT44(uVar10,uVar9);
    uStack_388 = uVar14;
    uStack_380 = uVar15;
    FUN_10a00e5c4(extraout_x8 + 1,&uStack_3a0);
    plVar6 = plStack_398;
    extraout_x8[4] = uStack_388;
    extraout_x8[3] = uStack_390;
    extraout_x8[5] = uStack_380;
    if (plStack_398 != (long *)0x0) {
      plVar25 = plStack_398 + 1;
      do {
        lVar20 = *plVar25;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *plVar25 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_398 + 0x10))(plStack_398);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    *(undefined4 *)(extraout_x8 + 0xd) = uVar11;
    *(undefined4 *)(extraout_x8 + 0x40) = uVar17;
    *(undefined4 *)((long)extraout_x8 + 0x204) = uVar12;
    return;
  }
  return;
}



/* Entry: 10a025e68; end: 10a02603b;  */

void FUN_10a025e68(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  *param_1 = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0xffffffffffffffff;
  param_1[0x39] = 0xffffffffffffffff;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0xffffffffffffffff;
  param_1[0x3e] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x3f) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0;
  *(undefined4 *)((long)param_1 + 0x204) = 0;
  uStack_78 = 0;
  plStack_c8 = (long *)0x0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffffffffffff;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_98 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_88 = 0xffffffffffffffff;
  uStack_80 = 0;
  uStack_70 = 0;
  FUN_10a061728(param_1,&uStack_d0);
  plVar2 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar1 = plStack_a0 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plStack_c8 = (long *)param_2[1];
  uStack_d0 = *param_2;
  if (param_2[1] != 0) {
    plVar2 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_c0 = CONCAT44(param_4,param_3);
  uStack_b8 = param_8;
  uStack_b0 = param_9;
  FUN_10a00e5c4(param_1 + 1,&uStack_d0);
  plVar2 = plStack_c8;
  param_1[4] = uStack_b8;
  param_1[3] = uStack_c0;
  param_1[5] = uStack_b0;
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xd) = param_5;
  *(undefined4 *)(param_1 + 0x40) = param_6;
  *(undefined4 *)((long)param_1 + 0x204) = param_7;
  return;
}



/* Entry: 10a02603c; end: 10a0265c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a026694) */
/* WARNING: Removing unreachable block (ram,0x00010a026698) */
/* WARNING: Removing unreachable block (ram,0x00010a0266a0) */
/* WARNING: Removing unreachable block (ram,0x00010a0266a8) */
/* WARNING: Removing unreachable block (ram,0x00010a0266ac) */
/* WARNING: Removing unreachable block (ram,0x00010a0267c8) */
/* WARNING: Removing unreachable block (ram,0x00010a0267cc) */
/* WARNING: Removing unreachable block (ram,0x00010a0267d4) */
/* WARNING: Removing unreachable block (ram,0x00010a0267dc) */
/* WARNING: Removing unreachable block (ram,0x00010a0267e0) */

long * FUN_10a02603c(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5
                    ,ulong *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                    undefined8 *param_10,undefined8 param_11,undefined8 param_12)

{
  undefined2 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined2 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plStack_658;
  long *plStack_620;
  long *plStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined4 uStack_5c0;
  long *plStack_5b8;
  long *plStack_5b0;
  long *plStack_5a8;
  long alStack_5a0 [52];
  ulong uStack_400;
  long *plStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  undefined8 uStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_218;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_290 = param_11;
  uStack_288 = param_12;
  plStack_280 = (long *)0x0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  uStack_88 = 0x3f800000;
  plStack_d0 = (long *)param_10[1];
  uStack_d8 = *param_10;
  if (param_10[1] != 0) {
    plVar12 = (long *)(param_10[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_c8 = 0;
  uStack_c0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0x100000001;
  uStack_2a8 = 0;
  plStack_2f8 = (long *)0x0;
  uStack_300 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0xffffffffffffffff;
  uStack_2e0 = 0xffffffffffffffff;
  uStack_2d8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2c0 = 0xffffffffffffffff;
  uStack_2b8 = 0xffffffffffffffff;
  uStack_2b0 = 0;
  uStack_2a0 = 0;
  FUN_10a061728(&plStack_280,&uStack_300);
  plVar12 = plStack_2d0;
  if (plStack_2d0 != (long *)0x0) {
    plVar16 = plStack_2d0 + 1;
    do {
      lVar8 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_2f8;
  if (plStack_2f8 != (long *)0x0) {
    plVar16 = plStack_2f8 + 1;
    do {
      lVar8 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_270;
  plVar16 = (long *)param_4[1];
  lStack_278 = *param_4;
  if (param_4[1] != 0) {
    plVar6 = (long *)(param_4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plStack_270 != (long *)0x0) {
    plVar6 = plStack_270 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      lVar8 = *plStack_270;
      plStack_270 = plVar16;
      (**(code **)(lVar8 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      plVar16 = plStack_270;
    }
  }
  plStack_270 = plVar16;
  uStack_268 = 0;
  uStack_260 = 0xffffffffffffffff;
  uStack_258 = 0xffffffffffffffff;
  uStack_218 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,&plStack_280);
  (**(code **)(*param_2 + 0xc0))(param_2,&uStack_290);
  FUN_10a022678(param_1,param_2,1,param_3,param_6,param_7,param_8,param_9);
  (**(code **)(*param_2 + 0x90))(param_2,0,0,0);
  plVar12 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar16 = plStack_a8 + 1;
    do {
      lVar8 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar16 = plStack_d0 + 1;
    do {
      lVar8 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  func_0x00010a048e34(&lStack_278,plStack_280);
  plStack_280 = (long *)0x0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  uStack_88 = 0x3f800000;
  plStack_d0 = (long *)param_10[1];
  uStack_d8 = *param_10;
  if (param_10[1] != 0) {
    plVar12 = (long *)(param_10[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_c8 = 0;
  uStack_c0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0x100000001;
  uStack_2a8 = 0;
  plStack_2f8 = (long *)0x0;
  uStack_300 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0xffffffffffffffff;
  uStack_2e0 = 0xffffffffffffffff;
  uStack_2d8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2c0 = 0xffffffffffffffff;
  uStack_2b8 = 0xffffffffffffffff;
  uStack_2b0 = 0;
  uStack_2a0 = 0;
  FUN_10a061728(&plStack_280,&uStack_300);
  plVar12 = plStack_2d0;
  if (plStack_2d0 != (long *)0x0) {
    plVar16 = plStack_2d0 + 1;
    do {
      lVar8 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_2f8;
  if (plStack_2f8 != (long *)0x0) {
    plVar16 = plStack_2f8 + 1;
    do {
      lVar8 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_270;
  plVar16 = (long *)param_5[1];
  lStack_278 = *param_5;
  if (param_5[1] != 0) {
    plVar6 = (long *)(param_5[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plStack_270 != (long *)0x0) {
    plVar6 = plStack_270 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      lVar8 = *plStack_270;
      plStack_270 = plVar16;
      (**(code **)(lVar8 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      plVar16 = plStack_270;
    }
  }
  plStack_270 = plVar16;
  uStack_268 = 0;
  uStack_260 = 0xffffffffffffffff;
  uStack_258 = 0xffffffffffffffff;
  uStack_218 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,&plStack_280);
  (**(code **)(*param_2 + 0xc0))(param_2,&uStack_290);
  FUN_10a022678(param_1,param_2,0,param_3,param_6,param_7,param_8,param_9);
  lVar8 = 0;
  uVar7 = 0;
  (**(code **)(*param_2 + 0x90))(param_2,0);
  plVar12 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar16 = plStack_a8 + 1;
    do {
      lVar9 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar16 = plStack_d0 + 1;
    do {
      lVar9 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = &lStack_278;
  plVar16 = plStack_280;
  func_0x00010a048e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar12;
  }
  ___stack_chk_fail();
  FUN_10a023a44(&plStack_280);
  __Unwind_Resume();
  lStack_3a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(lVar8 + 0x50) == 0) {
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar6 = plVar12;
    plVar4 = plVar16;
  }
  else {
    uVar10 = 0;
    uVar13 = *(undefined8 *)(plVar16[0x10b] + 0x1e0);
    *plVar12 = 0;
    plVar12[1] = 0;
    do {
      plStack_5a8 = (long *)0x0;
      uStack_3d8 = 0;
      plStack_3d0 = (long *)0x0;
      uStack_3c8 = 0;
      uStack_3c0 = 0xffffffffffffffff;
      uStack_3b8 = 0xffffffffffffffff;
      uStack_3b0 = 0x3f800000;
      uStack_400 = *param_6;
      plStack_3f8 = (long *)param_6[1];
      if (plStack_3f8 == (long *)0x0) {
        plStack_3f8 = (long *)0x0;
      }
      else {
        plVar6 = plStack_3f8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_3f0 = 0;
      uStack_3e8 = 0xffffffffffffffff;
      uStack_3e0 = 0xffffffffffffffff;
      uStack_3a8 = 0x100000001;
      puVar11 = (undefined2 *)(lVar8 + 0x58 + uVar10 * 0x30);
      if (*(long *)(puVar11 + 4) != 0) {
        uVar14 = 0;
        do {
          plVar15 = *(long **)(puVar11 + uVar14 * 4 + 8);
          plVar4 = (long *)*param_6;
          (**(code **)(*plVar4 + 0x28))();
          plVar5 = (long *)*param_6;
          (**(code **)(*plVar5 + 0x30))();
          plVar6 = plVar15;
          (**(code **)(*plVar15 + 0xe8))(plVar15);
          FUN_10a048e7c(&plStack_5b8,uVar13,0,plVar4,plVar5,1,plVar6,1,0,0);
          (**(code **)(*plStack_5b8 + 0xb0))();
          FUN_10a1de2e4(plVar15,&plStack_5b8);
          uStack_5f8 = 0;
          plStack_5f0 = (long *)0x0;
          uStack_5e8 = 0;
          uStack_5e0 = 0xffffffffffffffff;
          uStack_5d0 = 0;
          uStack_5c8 = 0;
          uStack_5d8 = 0xffffffffffffffff;
          if (plStack_5b0 == (long *)0x0) {
            plStack_618 = (long *)0x0;
          }
          else {
            plVar6 = plStack_5b0 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = *plVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            plStack_618 = plStack_5b0;
          }
          plStack_620 = plStack_5b8;
          uStack_610 = 0;
          uStack_608 = 0xffffffffffffffff;
          uStack_600 = 0xffffffffffffffff;
          uStack_5c0 = 0;
          FUN_10a061728(&plStack_5a8,&plStack_620);
          plVar6 = plStack_5f0;
          if (plStack_5f0 != (long *)0x0) {
            plVar4 = plStack_5f0 + 1;
            do {
              lVar9 = *plVar4;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar3) {
                *plVar4 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_5f0 + 0x10))(plStack_5f0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          plVar6 = plStack_618;
          if (plStack_618 != (long *)0x0) {
            plVar4 = plStack_618 + 1;
            do {
              lVar9 = *plVar4;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar3) {
                *plVar4 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_618 + 0x10))(plStack_618);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          plVar6 = plStack_5b0;
          if (plStack_5b0 != (long *)0x0) {
            plVar4 = plStack_5b0 + 1;
            do {
              lVar9 = *plVar4;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar3) {
                *plVar4 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_5b0 + 0x10))(plStack_5b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ulong *)(puVar11 + 4));
      }
      (**(code **)(*plVar16 + 0x88))(plVar16,&plStack_5a8);
      plVar6 = (long *)*param_6;
      (**(code **)(*plVar6 + 0x28))();
      plVar4 = (long *)*param_6;
      (**(code **)(*plVar4 + 0x30))();
      plStack_618 = (long *)((ulong)plVar6 & 0xffffffff | (long)plVar4 << 0x20);
      plStack_620 = (long *)0x0;
      (**(code **)(*plVar16 + 0xc0))(plVar16,&plStack_620);
      uVar1 = *puVar11;
      plVar6 = plVar16 + 4;
      FUN_10a01eacc(plVar6,uVar1);
      *(undefined4 *)((long)plVar6 + 0x5c) = uVar7;
      lVar9 = 0;
      FUN_10a2421c8();
      (**(code **)(*plVar16 + 0x58))(plVar16,*(undefined8 *)(lVar9 + 0x208),uVar1,&UNK_10e482b48,3);
      (**(code **)(*plVar16 + 0x90))(plVar16,0,0,0);
      if (plStack_5a8 != (long *)0x0) {
        FUN_10a026ab4(plVar12,alStack_5a0);
      }
      plVar6 = plStack_3d0;
      if (plStack_3d0 != (long *)0x0) {
        plVar4 = plStack_3d0 + 1;
        do {
          lVar9 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_3d0 + 0x10))(plStack_3d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_3f8;
      if (plStack_3f8 != (long *)0x0) {
        plVar4 = plStack_3f8 + 1;
        do {
          lVar9 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_3f8 + 0x10))(plStack_3f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = alStack_5a0;
      plVar4 = plStack_5a8;
      func_0x00010a048e34();
      uVar10 = uVar10 + 1;
      plStack_658 = plVar12;
    } while (uVar10 < *(ulong *)(lVar8 + 0x50));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a0) {
    return plVar6;
  }
  ___stack_chk_fail();
  FUN_10a023a44(&plStack_5a8);
  func_0x00010a0523dc(plStack_658);
  __Unwind_Resume();
  lVar9 = plVar4[1];
  lVar8 = *plVar4;
  if (plVar4[1] != 0) {
    plVar12 = (long *)(plVar4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar12 = (long *)plVar6[1];
  plVar6[1] = lVar9;
  *plVar6 = lVar8;
  if (plVar12 != (long *)0x0) {
    plVar16 = plVar12 + 1;
    do {
      lVar8 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  return plVar6;
}



/* Entry: 10a0265c4; end: 10a026ab3;  */

/* WARNING: Removing unreachable block (ram,0x00010a026694) */
/* WARNING: Removing unreachable block (ram,0x00010a026698) */
/* WARNING: Removing unreachable block (ram,0x00010a0266a0) */
/* WARNING: Removing unreachable block (ram,0x00010a0266a8) */
/* WARNING: Removing unreachable block (ram,0x00010a0266ac) */
/* WARNING: Removing unreachable block (ram,0x00010a0267c8) */
/* WARNING: Removing unreachable block (ram,0x00010a0267cc) */
/* WARNING: Removing unreachable block (ram,0x00010a0267d4) */
/* WARNING: Removing unreachable block (ram,0x00010a0267dc) */
/* WARNING: Removing unreachable block (ram,0x00010a0267e0) */

long * FUN_10a0265c4(long *param_1,long *param_2,long param_3,undefined4 param_4,ulong *param_5)

{
  undefined2 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plStack_338;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long alStack_280 [52];
  ulong uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_3 + 0x50) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    plVar6 = param_1;
    plVar4 = param_2;
  }
  else {
    uVar8 = 0;
    uVar10 = *(undefined8 *)(param_2[0x10b] + 0x1e0);
    *param_1 = 0;
    param_1[1] = 0;
    do {
      plStack_288 = (long *)0x0;
      uStack_b8 = 0;
      plStack_b0 = (long *)0x0;
      uStack_a8 = 0;
      uStack_a0 = 0xffffffffffffffff;
      uStack_98 = 0xffffffffffffffff;
      uStack_90 = 0x3f800000;
      uStack_e0 = *param_5;
      plStack_d8 = (long *)param_5[1];
      if (plStack_d8 == (long *)0x0) {
        plStack_d8 = (long *)0x0;
      }
      else {
        plVar6 = plStack_d8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_d0 = 0;
      uStack_c8 = 0xffffffffffffffff;
      uStack_c0 = 0xffffffffffffffff;
      uStack_88 = 0x100000001;
      puVar9 = (undefined2 *)(param_3 + 0x58 + uVar8 * 0x30);
      if (*(long *)(puVar9 + 4) != 0) {
        uVar11 = 0;
        do {
          plVar12 = *(long **)(puVar9 + uVar11 * 4 + 8);
          plVar4 = (long *)*param_5;
          (**(code **)(*plVar4 + 0x28))();
          plVar5 = (long *)*param_5;
          (**(code **)(*plVar5 + 0x30))();
          plVar6 = plVar12;
          (**(code **)(*plVar12 + 0xe8))(plVar12);
          FUN_10a048e7c(&plStack_298,uVar10,0,plVar4,plVar5,1,plVar6,1,0,0);
          (**(code **)(*plStack_298 + 0xb0))();
          FUN_10a1de2e4(plVar12,&plStack_298);
          uStack_2d8 = 0;
          plStack_2d0 = (long *)0x0;
          uStack_2c8 = 0;
          uStack_2c0 = 0xffffffffffffffff;
          uStack_2b0 = 0;
          uStack_2a8 = 0;
          uStack_2b8 = 0xffffffffffffffff;
          if (plStack_290 == (long *)0x0) {
            plStack_2f8 = (long *)0x0;
          }
          else {
            plVar6 = plStack_290 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = *plVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            plStack_2f8 = plStack_290;
          }
          plStack_300 = plStack_298;
          uStack_2f0 = 0;
          uStack_2e8 = 0xffffffffffffffff;
          uStack_2e0 = 0xffffffffffffffff;
          uStack_2a0 = 0;
          FUN_10a061728(&plStack_288,&plStack_300);
          plVar6 = plStack_2d0;
          if (plStack_2d0 != (long *)0x0) {
            plVar4 = plStack_2d0 + 1;
            do {
              lVar7 = *plVar4;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar3) {
                *plVar4 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          plVar6 = plStack_2f8;
          if (plStack_2f8 != (long *)0x0) {
            plVar4 = plStack_2f8 + 1;
            do {
              lVar7 = *plVar4;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar3) {
                *plVar4 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          plVar6 = plStack_290;
          if (plStack_290 != (long *)0x0) {
            plVar4 = plStack_290 + 1;
            do {
              lVar7 = *plVar4;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar3) {
                *plVar4 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plStack_290 + 0x10))(plStack_290);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ulong *)(puVar9 + 4));
      }
      (**(code **)(*param_2 + 0x88))(param_2,&plStack_288);
      plVar6 = (long *)*param_5;
      (**(code **)(*plVar6 + 0x28))();
      plVar4 = (long *)*param_5;
      (**(code **)(*plVar4 + 0x30))();
      plStack_2f8 = (long *)((ulong)plVar6 & 0xffffffff | (long)plVar4 << 0x20);
      plStack_300 = (long *)0x0;
      (**(code **)(*param_2 + 0xc0))(param_2,&plStack_300);
      uVar1 = *puVar9;
      plVar6 = param_2 + 4;
      FUN_10a01eacc(plVar6,uVar1);
      *(undefined4 *)((long)plVar6 + 0x5c) = param_4;
      lVar7 = 0;
      FUN_10a2421c8();
      (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar7 + 0x208),uVar1,&UNK_10e482b48,3);
      (**(code **)(*param_2 + 0x90))(param_2,0,0,0);
      if (plStack_288 != (long *)0x0) {
        FUN_10a026ab4(param_1,alStack_280);
      }
      plVar6 = plStack_b0;
      if (plStack_b0 != (long *)0x0) {
        plVar4 = plStack_b0 + 1;
        do {
          lVar7 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar4 = plStack_d8 + 1;
        do {
          lVar7 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = alStack_280;
      plVar4 = plStack_288;
      func_0x00010a048e34();
      uVar8 = uVar8 + 1;
      plStack_338 = param_1;
    } while (uVar8 < *(ulong *)(param_3 + 0x50));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return plVar6;
  }
  ___stack_chk_fail();
  FUN_10a023a44(&plStack_288);
  func_0x00010a0523dc(plStack_338);
  __Unwind_Resume();
  lVar13 = plVar4[1];
  lVar7 = *plVar4;
  if (plVar4[1] != 0) {
    plVar4 = (long *)(plVar4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)plVar6[1];
  plVar6[1] = lVar13;
  *plVar6 = lVar7;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return plVar6;
}



/* Entry: 10a026ab4; end: 10a026b2f;  */

undefined8 * FUN_10a026ab4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a02be48; end: 10a02bf23;  */

undefined *** FUN_10a02be48(long *param_1,code **param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined *puVar4;
  code **unaff_x20;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  code *pcStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_2;
  if (param_1 != (long *)0x0) {
    ppuVar5 = &PTR_DAT_110c558e0;
    ___dynamic_cast(param_1,&PTR_DAT_110c558e0,&PTR_DAT_110c545a0,0);
    if (param_1 != (long *)0x0) {
      unaff_x20 = &pcStack_68;
      pcStack_68 = FUN_10a04a154;
      ppuStack_60 = &PTR_FUN_110b9d438;
      pcStack_50 = param_2[1];
      pcStack_58 = *param_2;
      pcStack_40 = param_2[3];
      pcStack_48 = param_2[2];
      ppuVar5 = &pcStack_68;
      (**(code **)(*param_1 + 0x20))();
      pppuVar3 = &ppuStack_60;
      (*(code *)*ppuStack_60)();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return pppuVar3;
      }
      goto LAB_10a02bf04;
    }
  }
  pppuVar3 = (undefined ***)&UNK_10f633a98;
  FUN_10a0ee06c();
LAB_10a02bf04:
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(unaff_x20 + 1);
  __Unwind_Resume();
  ppuVar7 = (undefined **)ppuVar5[1];
  ppuVar6 = (undefined **)*ppuVar5;
  *ppuVar5 = (code *)0x0;
  ppuVar5[1] = (code *)0x0;
  ppuVar5 = pppuVar3[1];
  pppuVar3[1] = ppuVar7;
  *pppuVar3 = ppuVar6;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar6 = ppuVar5 + 1;
    do {
      puVar4 = *ppuVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar2) {
        *ppuVar6 = puVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar4 == (undefined *)0x0) {
      (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  return pppuVar3;
}



/* Entry: 10a02bf24; end: 10a02bf87;  */

undefined8 * FUN_10a02bf24(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a02bf88; end: 10a02c13b;  */

undefined1  [16] FUN_10a02bf88(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f633e28;
  return auVar1;
}



/* Entry: 10a02c13c; end: 10a02c643;  */

void FUN_10a02c13c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f633e28,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c538;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x4000000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110b9c538;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10a064dd8,FUN_10a064e90);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6325e4,FUN_10a065044,FUN_10a065100);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f632086,FUN_10a0651f0,FUN_10a0652c4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6320a1,FUN_10a06561c,FUN_10a0656f0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f631b33,FUN_10a0657bc,FUN_10a065878);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6325e8,FUN_10a065968,FUN_10a065a18);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6325fc,FUN_10a06619c,FUN_10a06624c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f632610,FUN_10a066304,FUN_10a0663b4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f632622,FUN_10a06646c,FUN_10a06651c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f632634,FUN_10a0665d4,FUN_10a066684);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f632641,FUN_10a06673c,FUN_10a0667ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f632650,FUN_10a066ff4,FUN_10a0670a4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f632664,FUN_10a06715c,FUN_10a067344);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f633e28,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a02c628);
  (*pcVar6)();
}



/* Entry: 10a02c644; end: 10a02cacb;  */

void FUN_10a02c644(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f633e41,0x17);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c570;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x800000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110b9c570;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f632677,FUN_10a067c30,FUN_10a067ce8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f63267f,FUN_10a067e78,FUN_10a067f30);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f63268a,FUN_10a067ff0,FUN_10a0680a8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f632697,FUN_10a068168,FUN_10a068220);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6326a1,FUN_10a0682e0,FUN_10a068398);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6326ad,FUN_10a068458,FUN_10a068510);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6326b6,FUN_10a0685d0,FUN_10a068688);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6326bf,FUN_10a068748,FUN_10a068800);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6326cc,FUN_10a0688c0,FUN_10a068978);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6326d7,FUN_10a068a38,FUN_10a068af4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6326e5,FUN_10a068c2c,FUN_10a068ce8);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f633e41,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a02cab0);
  (*pcVar6)();
}



/* Entry: 10a02cacc; end: 10a02cc5b;  */

void FUN_10a02cacc(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f49df15;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x800000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f684ec4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02cc5c(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63271f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02cc5c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63272b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02cc5c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63273e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x4000000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02cc5c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a02cc5c; end: 10a02cd03;  */

undefined8 * FUN_10a02cc5c(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a02cd04);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a02cd04; end: 10a02d12f;  */

void FUN_10a02cd04(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f632746;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x800000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f684ec4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f58789e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f632753;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e822;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63275b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f632765;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63276f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63277c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f632785;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f632791;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63279a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6327a6;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3c54b0;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6327b4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6327bd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f2d3be5;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a02d130();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a02d130; end: 10a02d1d7;  */

undefined8 * FUN_10a02d130(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a02d1d8);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a02d1d8; end: 10a02d287;  */

undefined8 * FUN_10a02d1d8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return (undefined8 *)(param_1 + 0x48);
}



/* Entry: 10a02d288; end: 10a02d8cb;  */

void FUN_10a02d288(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  ulong uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined ***pppuStack_298;
  undefined ***pppuStack_290;
  undefined ***pppuStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_230;
  undefined **ppuStack_228;
  long lStack_220;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  long lStack_1a0;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_enabled_110b9aa48,*(undefined1 *)(param_1 + 0x21));
  *(char *)(param_1 + 0x21) = (char)plVar9;
  uVar19 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9d450);
  *(undefined4 *)(param_1 + 0x24) = uVar19;
  FUN_10a02d8cc(param_1 + 0x48);
  FUN_10a02d8cc(param_1 + 0x58);
  FUN_10a02d8cc(param_1 + 0x68);
  FUN_10a02d8cc(param_1 + 0x68);
  FUN_10a02d8cc(param_1 + 0x88);
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_targets_110b9aa68);
  if ((int)plVar9 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_targets_110b9aa68);
    uStack_b0 = 0x10a0696ac;
    ppuStack_a8 = &PTR_DAT_110b9de28;
    lStack_a0 = param_1;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aa88,&uStack_b0,0);
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    uStack_f0 = 0x10a0696dc;
    ppuStack_e8 = &PTR_DAT_110b9de40;
    lStack_e0 = param_1;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aaa8,&uStack_f0,0);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    uStack_130 = 0x10a06970c;
    ppuStack_128 = &PTR_DAT_110b9de58;
    lStack_120 = param_1;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aac8,&uStack_130,0);
    (*(code *)*ppuStack_128)(&ppuStack_128);
    uStack_170 = 0x10a06973c;
    ppuStack_168 = &PTR_DAT_110b9de70;
    lStack_160 = param_1;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aae8,&uStack_170,0);
    (*(code *)*ppuStack_168)(&ppuStack_168);
    uStack_1b0 = 0x10a06976c;
    ppuStack_1a8 = &PTR_DAT_110b9de88;
    lStack_1a0 = param_1;
    FUN_10a02d928(param_2,&PTR_s_result_110b9ab08,&uStack_1b0,0);
    (*(code *)*ppuStack_1a8)(&ppuStack_1a8);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  FUN_10a019700(param_1 + 0x98);
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110b9ab28);
  if ((int)plVar9 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110b9ab28);
    uStack_1f0 = 0x10a069a58;
    ppuStack_1e8 = &PTR_DAT_110b9dea0;
    lStack_1e0 = param_1;
    FUN_10a02daf4(param_2,&PTR_DAT_110b9ab48,&uStack_1f0,0);
    (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  FUN_10a019700(param_1 + 0xa8);
  plVar9 = (long *)(param_1 + 0xb8);
  pppuVar14 = (undefined ***)*plVar9;
  pppuVar15 = *(undefined ****)(param_1 + 0xc0);
  while (pppuVar15 != pppuVar14) {
    pppuVar15 = pppuVar15 + -3;
    pppuStack_298 = pppuVar15;
    FUN_10a04a568(&pppuStack_298);
  }
  *(undefined ****)(param_1 + 0xc0) = pppuVar14;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110b9ab68);
  if ((int)plVar6 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110b9ab68);
    pppuVar14 = &ppuStack_228;
    uStack_230 = 0x10a069a88;
    ppuStack_228 = &PTR_DAT_110b9deb8;
    lStack_220 = param_1;
    FUN_10a02daf4(param_2,&PTR_DAT_110b9ab48,&uStack_230,0);
    (*(code *)*ppuStack_228)(pppuVar14);
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_targets_110b9aa68);
    if ((int)plVar6 != 0) {
      (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_targets_110b9aa68);
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x208))();
      if ((uint)plVar6 != 0) {
        uVar16 = 0;
        pppuVar14 = &ppuStack_268;
        do {
          uVar8 = uVar16;
          (**(code **)(*param_2 + 0x218))(param_2);
          puVar2 = *(undefined8 **)(param_1 + 0xc0);
          if (puVar2 < *(undefined8 **)(param_1 + 200)) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar18 = puVar2 + 3;
            puVar2[2] = 0;
          }
          else {
            lVar12 = (long)puVar2 - *plVar9;
            uVar10 = (lVar12 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar10) {
              FUN_10a04a398();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10a02d888);
              (*pcVar5)();
            }
            lVar11 = (long)*(undefined8 **)(param_1 + 200) - *plVar9 >> 3;
            uVar13 = lVar11 * 0x5555555555555556;
            if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
              uVar13 = uVar10;
            }
            if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
              uVar13 = 0xaaaaaaaaaaaaaaa;
            }
            plStack_278 = plVar9;
            FUN_10a04a3ac();
            puVar2 = (undefined8 *)(uVar13 + lVar12);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar18 = puVar2 + 3;
            lVar12 = (long)puVar2 - (*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8));
            _memcpy(lVar12);
            pppuStack_298 = *(undefined ****)(param_1 + 0xb8);
            *(long *)(param_1 + 0xb8) = lVar12;
            *(undefined8 **)(param_1 + 0xc0) = puVar18;
            uStack_280 = *(undefined8 *)(param_1 + 200);
            *(ulong *)(param_1 + 200) = uVar13 + uVar8 * 0x18;
            pppuStack_290 = pppuStack_298;
            pppuStack_288 = pppuStack_298;
            FUN_10a04a6a8(&pppuStack_298);
          }
          *(undefined8 **)(param_1 + 0xc0) = puVar18;
          plVar7 = param_2;
          (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_targets_110b9aa68);
          if ((int)plVar7 != 0) {
            plVar7 = param_2;
            (**(code **)(*param_2 + 0x208))();
            if ((int)plVar7 != 0) {
              iVar17 = 0;
              do {
                (**(code **)(*param_2 + 0x218))(param_2,iVar17);
                uStack_270 = 0x10a069ab8;
                ppuStack_268 = &PTR_FUN_110b9ded0;
                puStack_260 = puVar18 + -3;
                FUN_10a02d928(param_2,&PTR_DAT_110b9ab88,&uStack_270,0);
                (*(code *)*ppuStack_268)(pppuVar14);
                (**(code **)(*param_2 + 0x220))(param_2);
                iVar17 = iVar17 + 1;
              } while ((int)plVar7 != iVar17);
            }
          }
          (**(code **)(*param_2 + 0x220))(param_2);
          uVar1 = (int)uVar16 + 1;
          uVar16 = (ulong)uVar1;
        } while (uVar1 != (uint)plVar6);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
    }
    (**(code **)(*param_2 + 0x220))();
    plVar6 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)**pppuVar14)(pppuVar14);
  __Unwind_Resume();
  plVar9 = (long *)plVar6[1];
  *plVar6 = 0;
  plVar6[1] = 0;
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar9);
      return;
    }
  }
  return;
}



/* Entry: 10a02d8cc; end: 10a02d927;  */

void FUN_10a02d8cc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a02d928; end: 10a02daf3;  */

undefined8 **
FUN_10a02d928(undefined8 **param_1,undefined8 **param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  ulong uVar9;
  code **ppcVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 **ppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined ***pppuStack_4b8;
  undefined ***pppuStack_4b0;
  undefined ***pppuStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 **ppuStack_498;
  undefined8 uStack_490;
  undefined **ppuStack_488;
  undefined8 *puStack_480;
  undefined8 uStack_450;
  undefined **ppuStack_448;
  undefined8 **ppuStack_440;
  undefined8 uStack_410;
  undefined **ppuStack_408;
  undefined8 **ppuStack_400;
  undefined8 uStack_3d0;
  undefined **ppuStack_3c8;
  undefined8 **ppuStack_3c0;
  undefined8 uStack_390;
  undefined **ppuStack_388;
  undefined8 **ppuStack_380;
  undefined8 uStack_350;
  undefined **ppuStack_348;
  undefined8 **ppuStack_340;
  undefined8 uStack_310;
  undefined **ppuStack_308;
  undefined8 **ppuStack_300;
  undefined8 uStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 **ppuStack_2c0;
  long lStack_290;
  undefined8 auStack_218 [2];
  char cStack_201;
  code *pcStack_200;
  undefined8 *apuStack_1f8 [7];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  code *pcStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 *puStack_198;
  long lStack_168;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a0693f0;
  ppuStack_90 = &PTR_FUN_110b9fc60;
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  *puVar7 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar7 + 1,apuStack_e8);
  puVar7[9] = uStack_a8;
  puVar7[8] = uStack_b0;
  puVar7[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar7;
  func_0x000107c2b054(auStack_108,&UNK_10f630f1d);
  ppcVar10 = &pcStack_98;
  (*(code *)(*param_1)[0x4a])(param_1,param_2,ppcVar10,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar14 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_200 = *ppcVar10;
  (**(code **)(ppcVar10[1] + 0x10))(apuStack_1f8,ppcVar10 + 1);
  FUN_109ffe064(&uStack_1c0,*param_2,param_2[1]);
  pcStack_1a8 = FUN_10a06979c;
  ppuStack_1a0 = &PTR_FUN_110b9eb30;
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  *puVar7 = pcStack_200;
  (*(code *)apuStack_1f8[0][2])(puVar7 + 1,apuStack_1f8);
  puVar7[9] = uStack_1b8;
  puVar7[8] = uStack_1c0;
  puVar7[10] = lStack_1b0;
  uStack_1b8 = 0;
  lStack_1b0 = 0;
  uStack_1c0 = 0;
  puStack_198 = puVar7;
  func_0x000107c2b054(auStack_218,&UNK_10f630f1d);
  (*(code *)(*ppuVar14)[0x4a])(ppuVar14,param_2,&pcStack_1a8,param_4,auStack_218);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  (*(code *)*ppuStack_1a0)(&ppuStack_1a0);
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  ppuVar8 = apuStack_1f8;
  (*(code *)*apuStack_1f8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return ppuVar14;
  }
  ___stack_chk_fail();
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  (*(code *)*ppuStack_1a0)(&ppuStack_1a0);
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  (*(code *)*apuStack_1f8[0])(apuStack_1f8);
  __Unwind_Resume();
  ppuVar6 = ppuVar8 + -3;
  lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = param_2;
  (*(code *)(*param_2)[0xb])(param_2,&PTR_s_enabled_110b9aa48,*(undefined1 *)((long)ppuVar8 + 9));
  *(char *)((long)ppuVar8 + 9) = (char)ppuVar14;
  uVar21 = 0;
  (*(code *)(*param_2)[9])(param_2,&PTR_DAT_110b9d450);
  *(undefined4 *)((long)ppuVar8 + 0xc) = uVar21;
  FUN_10a02d8cc(ppuVar8 + 6);
  FUN_10a02d8cc(ppuVar8 + 8);
  FUN_10a02d8cc(ppuVar8 + 10);
  FUN_10a02d8cc(ppuVar8 + 10);
  FUN_10a02d8cc(ppuVar8 + 0xe);
  ppuVar14 = param_2;
  (*(code *)(*param_2)[0x40])(param_2,&PTR_s_targets_110b9aa68);
  if ((int)ppuVar14 != 0) {
    (*(code *)(*param_2)[0x42])(param_2,&PTR_s_targets_110b9aa68);
    uStack_2d0 = 0x10a0696ac;
    ppuStack_2c8 = &PTR_DAT_110b9de28;
    ppuStack_2c0 = ppuVar6;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aa88,&uStack_2d0,0);
    (*(code *)*ppuStack_2c8)(&ppuStack_2c8);
    uStack_310 = 0x10a0696dc;
    ppuStack_308 = &PTR_DAT_110b9de40;
    ppuStack_300 = ppuVar6;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aaa8,&uStack_310,0);
    (*(code *)*ppuStack_308)(&ppuStack_308);
    uStack_350 = 0x10a06970c;
    ppuStack_348 = &PTR_DAT_110b9de58;
    ppuStack_340 = ppuVar6;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aac8,&uStack_350,0);
    (*(code *)*ppuStack_348)(&ppuStack_348);
    uStack_390 = 0x10a06973c;
    ppuStack_388 = &PTR_DAT_110b9de70;
    ppuStack_380 = ppuVar6;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aae8,&uStack_390,0);
    (*(code *)*ppuStack_388)(&ppuStack_388);
    uStack_3d0 = 0x10a06976c;
    ppuStack_3c8 = &PTR_DAT_110b9de88;
    ppuStack_3c0 = ppuVar6;
    FUN_10a02d928(param_2,&PTR_s_result_110b9ab08,&uStack_3d0,0);
    (*(code *)*ppuStack_3c8)(&ppuStack_3c8);
    (*(code *)(*param_2)[0x44])(param_2);
  }
  FUN_10a019700(ppuVar8 + 0x10);
  ppuVar14 = param_2;
  (*(code *)(*param_2)[0x40])(param_2,&PTR_DAT_110b9ab28);
  if ((int)ppuVar14 != 0) {
    (*(code *)(*param_2)[0x42])(param_2,&PTR_DAT_110b9ab28);
    uStack_410 = 0x10a069a58;
    ppuStack_408 = &PTR_DAT_110b9dea0;
    ppuStack_400 = ppuVar6;
    FUN_10a02daf4(param_2,&PTR_DAT_110b9ab48,&uStack_410,0);
    (*(code *)*ppuStack_408)(&ppuStack_408);
    (*(code *)(*param_2)[0x44])(param_2);
  }
  FUN_10a019700(ppuVar8 + 0x12);
  ppuVar14 = ppuVar8 + 0x14;
  pppuVar15 = (undefined ***)*ppuVar14;
  pppuVar16 = (undefined ***)ppuVar8[0x15];
  while (pppuVar16 != pppuVar15) {
    pppuVar16 = pppuVar16 + -3;
    pppuStack_4b8 = pppuVar16;
    FUN_10a04a568(&pppuStack_4b8);
  }
  ppuVar8[0x15] = pppuVar15;
  ppuVar5 = param_2;
  (*(code *)(*param_2)[0x40])(param_2,&PTR_DAT_110b9ab68);
  if ((int)ppuVar5 != 0) {
    (*(code *)(*param_2)[0x42])(param_2,&PTR_DAT_110b9ab68);
    pppuVar15 = &ppuStack_448;
    uStack_450 = 0x10a069a88;
    ppuStack_448 = &PTR_DAT_110b9deb8;
    ppuStack_440 = ppuVar6;
    FUN_10a02daf4(param_2,&PTR_DAT_110b9ab48,&uStack_450,0);
    (*(code *)*ppuStack_448)(pppuVar15);
    ppuVar6 = param_2;
    (*(code *)(*param_2)[0x40])(param_2,&PTR_s_targets_110b9aa68);
    if ((int)ppuVar6 != 0) {
      (*(code *)(*param_2)[0x42])(param_2,&PTR_s_targets_110b9aa68);
      ppuVar6 = param_2;
      (*(code *)(*param_2)[0x41])();
      if ((uint)ppuVar6 != 0) {
        uVar17 = 0;
        pppuVar15 = &ppuStack_488;
        do {
          uVar9 = uVar17;
          (*(code *)(*param_2)[0x43])(param_2);
          puVar7 = ppuVar8[0x15];
          if (puVar7 < ppuVar8[0x16]) {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar20 = puVar7 + 3;
            puVar7[2] = 0;
          }
          else {
            lVar18 = (long)puVar7 - (long)*ppuVar14;
            uVar11 = (lVar18 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar11) {
              FUN_10a04a398();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a02d888);
              (*pcVar4)();
            }
            lVar12 = (long)ppuVar8[0x16] - (long)*ppuVar14 >> 3;
            uVar13 = lVar12 * 0x5555555555555556;
            if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
              uVar13 = uVar11;
            }
            if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
              uVar13 = 0xaaaaaaaaaaaaaaa;
            }
            ppuStack_498 = ppuVar14;
            FUN_10a04a3ac();
            puVar7 = (undefined8 *)(uVar13 + lVar18);
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar20 = puVar7 + 3;
            puVar7 = (undefined8 *)((long)puVar7 - ((long)ppuVar8[0x15] - (long)ppuVar8[0x14]));
            _memcpy(puVar7);
            pppuStack_4b8 = (undefined ***)ppuVar8[0x14];
            ppuVar8[0x14] = puVar7;
            ppuVar8[0x15] = puVar20;
            puStack_4a0 = ppuVar8[0x16];
            ppuVar8[0x16] = (undefined8 *)(uVar13 + uVar9 * 0x18);
            pppuStack_4b0 = pppuStack_4b8;
            pppuStack_4a8 = pppuStack_4b8;
            FUN_10a04a6a8(&pppuStack_4b8);
          }
          ppuVar8[0x15] = puVar20;
          ppuVar5 = param_2;
          (*(code *)(*param_2)[0x40])(param_2,&PTR_s_targets_110b9aa68);
          if ((int)ppuVar5 != 0) {
            ppuVar5 = param_2;
            (*(code *)(*param_2)[0x41])();
            if ((int)ppuVar5 != 0) {
              iVar19 = 0;
              do {
                (*(code *)(*param_2)[0x43])(param_2,iVar19);
                uStack_490 = 0x10a069ab8;
                ppuStack_488 = &PTR_FUN_110b9ded0;
                puStack_480 = puVar20 + -3;
                FUN_10a02d928(param_2,&PTR_DAT_110b9ab88,&uStack_490,0);
                (*(code *)*ppuStack_488)(pppuVar15);
                (*(code *)(*param_2)[0x44])(param_2);
                iVar19 = iVar19 + 1;
              } while ((int)ppuVar5 != iVar19);
            }
          }
          (*(code *)(*param_2)[0x44])(param_2);
          uVar1 = (int)uVar17 + 1;
          uVar17 = (ulong)uVar1;
        } while (uVar1 != (uint)ppuVar6);
      }
      (*(code *)(*param_2)[0x44])(param_2);
    }
    (*(code *)(*param_2)[0x44])();
    ppuVar5 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_290) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  (*(code *)**pppuVar15)(pppuVar15);
  __Unwind_Resume();
  ppuVar14 = (undefined8 **)ppuVar5[1];
  *ppuVar5 = (undefined8 *)0x0;
  ppuVar5[1] = (undefined8 *)0x0;
  if (ppuVar14 != (undefined8 **)0x0) {
    ppuVar8 = ppuVar14 + 1;
    do {
      puVar7 = *ppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar3) {
        *ppuVar8 = (undefined8 *)((long)puVar7 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7 == (undefined8 *)0x0) {
      (*(code *)(*ppuVar14)[2])(ppuVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppuVar14);
      return ppuVar14;
    }
  }
  return ppuVar5;
}



/* Entry: 10a02daf4; end: 10a02dcbf;  */

long * FUN_10a02daf4(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  ulong uVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  ulong uVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  undefined ***pppuStack_3a8;
  undefined ***pppuStack_3a0;
  undefined ***pppuStack_398;
  undefined8 *puStack_390;
  undefined8 **ppuStack_388;
  undefined8 uStack_380;
  undefined **ppuStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_340;
  undefined **ppuStack_338;
  undefined8 **ppuStack_330;
  undefined8 uStack_300;
  undefined **ppuStack_2f8;
  undefined8 **ppuStack_2f0;
  undefined8 uStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined8 uStack_280;
  undefined **ppuStack_278;
  undefined8 **ppuStack_270;
  undefined8 uStack_240;
  undefined **ppuStack_238;
  undefined8 **ppuStack_230;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 **ppuStack_1b0;
  long lStack_180;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a06979c;
  ppuStack_90 = &PTR_FUN_110b9eb30;
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  *puVar7 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar7 + 1,apuStack_e8);
  puVar7[9] = uStack_a8;
  puVar7[8] = uStack_b0;
  puVar7[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar7;
  func_0x000107c2b054(auStack_108,&UNK_10f630f1d);
  (**(code **)(*param_1 + 0x250))(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar8 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  __Unwind_Resume();
  ppuVar9 = ppuVar8 + -3;
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))
            (param_2,&PTR_s_enabled_110b9aa48,*(undefined1 *)((long)ppuVar8 + 9));
  *(char *)((long)ppuVar8 + 9) = (char)plVar6;
  uVar22 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9d450);
  *(undefined4 *)((long)ppuVar8 + 0xc) = uVar22;
  FUN_10a02d8cc(ppuVar8 + 6);
  FUN_10a02d8cc(ppuVar8 + 8);
  FUN_10a02d8cc(ppuVar8 + 10);
  FUN_10a02d8cc(ppuVar8 + 10);
  FUN_10a02d8cc(ppuVar8 + 0xe);
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_targets_110b9aa68);
  if ((int)plVar6 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_targets_110b9aa68);
    uStack_1c0 = 0x10a0696ac;
    ppuStack_1b8 = &PTR_DAT_110b9de28;
    ppuStack_1b0 = ppuVar9;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aa88,&uStack_1c0,0);
    (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
    uStack_200 = 0x10a0696dc;
    ppuStack_1f8 = &PTR_DAT_110b9de40;
    ppuStack_1f0 = ppuVar9;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aaa8,&uStack_200,0);
    (*(code *)*ppuStack_1f8)(&ppuStack_1f8);
    uStack_240 = 0x10a06970c;
    ppuStack_238 = &PTR_DAT_110b9de58;
    ppuStack_230 = ppuVar9;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aac8,&uStack_240,0);
    (*(code *)*ppuStack_238)(&ppuStack_238);
    uStack_280 = 0x10a06973c;
    ppuStack_278 = &PTR_DAT_110b9de70;
    ppuStack_270 = ppuVar9;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aae8,&uStack_280,0);
    (*(code *)*ppuStack_278)(&ppuStack_278);
    uStack_2c0 = 0x10a06976c;
    ppuStack_2b8 = &PTR_DAT_110b9de88;
    ppuStack_2b0 = ppuVar9;
    FUN_10a02d928(param_2,&PTR_s_result_110b9ab08,&uStack_2c0,0);
    (*(code *)*ppuStack_2b8)(&ppuStack_2b8);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  FUN_10a019700(ppuVar8 + 0x10);
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110b9ab28);
  if ((int)plVar6 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110b9ab28);
    uStack_300 = 0x10a069a58;
    ppuStack_2f8 = &PTR_DAT_110b9dea0;
    ppuStack_2f0 = ppuVar9;
    FUN_10a02daf4(param_2,&PTR_DAT_110b9ab48,&uStack_300,0);
    (*(code *)*ppuStack_2f8)(&ppuStack_2f8);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  FUN_10a019700(ppuVar8 + 0x12);
  ppuVar11 = ppuVar8 + 0x14;
  pppuVar17 = (undefined ***)*ppuVar11;
  pppuVar18 = (undefined ***)ppuVar8[0x15];
  while (pppuVar18 != pppuVar17) {
    pppuVar18 = pppuVar18 + -3;
    pppuStack_3a8 = pppuVar18;
    FUN_10a04a568(&pppuStack_3a8);
  }
  ppuVar8[0x15] = pppuVar17;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110b9ab68);
  if ((int)plVar6 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110b9ab68);
    pppuVar17 = &ppuStack_338;
    uStack_340 = 0x10a069a88;
    ppuStack_338 = &PTR_DAT_110b9deb8;
    ppuStack_330 = ppuVar9;
    FUN_10a02daf4(param_2,&PTR_DAT_110b9ab48,&uStack_340,0);
    (*(code *)*ppuStack_338)(pppuVar17);
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_targets_110b9aa68);
    if ((int)plVar6 != 0) {
      (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_targets_110b9aa68);
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x208))();
      if ((uint)plVar6 != 0) {
        uVar19 = 0;
        pppuVar17 = &ppuStack_378;
        do {
          uVar10 = uVar19;
          (**(code **)(*param_2 + 0x218))(param_2);
          puVar7 = ppuVar8[0x15];
          if (puVar7 < ppuVar8[0x16]) {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar21 = puVar7 + 3;
            puVar7[2] = 0;
          }
          else {
            lVar14 = (long)puVar7 - (long)*ppuVar11;
            uVar12 = (lVar14 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar12) {
              FUN_10a04a398();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10a02d888);
              (*pcVar5)();
            }
            lVar13 = (long)ppuVar8[0x16] - (long)*ppuVar11 >> 3;
            uVar15 = lVar13 * 0x5555555555555556;
            if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
              uVar15 = uVar12;
            }
            if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
              uVar15 = 0xaaaaaaaaaaaaaaa;
            }
            ppuStack_388 = ppuVar11;
            FUN_10a04a3ac();
            puVar7 = (undefined8 *)(uVar15 + lVar14);
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar21 = puVar7 + 3;
            puVar7 = (undefined8 *)((long)puVar7 - ((long)ppuVar8[0x15] - (long)ppuVar8[0x14]));
            _memcpy(puVar7);
            pppuStack_3a8 = (undefined ***)ppuVar8[0x14];
            ppuVar8[0x14] = puVar7;
            ppuVar8[0x15] = puVar21;
            puStack_390 = ppuVar8[0x16];
            ppuVar8[0x16] = (undefined8 *)(uVar15 + uVar10 * 0x18);
            pppuStack_3a0 = pppuStack_3a8;
            pppuStack_398 = pppuStack_3a8;
            FUN_10a04a6a8(&pppuStack_3a8);
          }
          ppuVar8[0x15] = puVar21;
          plVar16 = param_2;
          (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_targets_110b9aa68);
          if ((int)plVar16 != 0) {
            plVar16 = param_2;
            (**(code **)(*param_2 + 0x208))();
            if ((int)plVar16 != 0) {
              iVar20 = 0;
              do {
                (**(code **)(*param_2 + 0x218))(param_2,iVar20);
                uStack_380 = 0x10a069ab8;
                ppuStack_378 = &PTR_FUN_110b9ded0;
                puStack_370 = puVar21 + -3;
                FUN_10a02d928(param_2,&PTR_DAT_110b9ab88,&uStack_380,0);
                (*(code *)*ppuStack_378)(pppuVar17);
                (**(code **)(*param_2 + 0x220))(param_2);
                iVar20 = iVar20 + 1;
              } while ((int)plVar16 != iVar20);
            }
          }
          (**(code **)(*param_2 + 0x220))(param_2);
          uVar1 = (int)uVar19 + 1;
          uVar19 = (ulong)uVar1;
        } while (uVar1 != (uint)plVar6);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
    }
    (**(code **)(*param_2 + 0x220))();
    plVar6 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return plVar6;
  }
  ___stack_chk_fail();
  (*(code *)**pppuVar17)(pppuVar17);
  __Unwind_Resume();
  plVar16 = (long *)plVar6[1];
  *plVar6 = 0;
  plVar6[1] = 0;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 1;
    do {
      lVar14 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar16);
      return plVar16;
    }
  }
  return plVar6;
}



/* Entry: 10a02dcc0; end: 10a02dcc7;  */

void FUN_10a02dcc0(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  ulong uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined ***pppuStack_298;
  undefined ***pppuStack_290;
  undefined ***pppuStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_230;
  undefined **ppuStack_228;
  long lStack_220;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  long lStack_1a0;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long lStack_70;
  
  lVar8 = param_1 + -0x18;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_enabled_110b9aa48,*(undefined1 *)(param_1 + 9));
  *(char *)(param_1 + 9) = (char)plVar10;
  uVar19 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9d450);
  *(undefined4 *)(param_1 + 0xc) = uVar19;
  FUN_10a02d8cc(param_1 + 0x30);
  FUN_10a02d8cc(param_1 + 0x40);
  FUN_10a02d8cc(param_1 + 0x50);
  FUN_10a02d8cc(param_1 + 0x50);
  FUN_10a02d8cc(param_1 + 0x70);
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_targets_110b9aa68);
  if ((int)plVar10 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_targets_110b9aa68);
    uStack_b0 = 0x10a0696ac;
    ppuStack_a8 = &PTR_DAT_110b9de28;
    lStack_a0 = lVar8;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aa88,&uStack_b0,0);
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    uStack_f0 = 0x10a0696dc;
    ppuStack_e8 = &PTR_DAT_110b9de40;
    lStack_e0 = lVar8;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aaa8,&uStack_f0,0);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    uStack_130 = 0x10a06970c;
    ppuStack_128 = &PTR_DAT_110b9de58;
    lStack_120 = lVar8;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aac8,&uStack_130,0);
    (*(code *)*ppuStack_128)(&ppuStack_128);
    uStack_170 = 0x10a06973c;
    ppuStack_168 = &PTR_DAT_110b9de70;
    lStack_160 = lVar8;
    FUN_10a02d928(param_2,&PTR_DAT_110b9aae8,&uStack_170,0);
    (*(code *)*ppuStack_168)(&ppuStack_168);
    uStack_1b0 = 0x10a06976c;
    ppuStack_1a8 = &PTR_DAT_110b9de88;
    lStack_1a0 = lVar8;
    FUN_10a02d928(param_2,&PTR_s_result_110b9ab08,&uStack_1b0,0);
    (*(code *)*ppuStack_1a8)(&ppuStack_1a8);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  FUN_10a019700(param_1 + 0x80);
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110b9ab28);
  if ((int)plVar10 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110b9ab28);
    uStack_1f0 = 0x10a069a58;
    ppuStack_1e8 = &PTR_DAT_110b9dea0;
    lStack_1e0 = lVar8;
    FUN_10a02daf4(param_2,&PTR_DAT_110b9ab48,&uStack_1f0,0);
    (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  FUN_10a019700(param_1 + 0x90);
  plVar10 = (long *)(param_1 + 0xa0);
  pppuVar14 = (undefined ***)*plVar10;
  pppuVar15 = *(undefined ****)(param_1 + 0xa8);
  while (pppuVar15 != pppuVar14) {
    pppuVar15 = pppuVar15 + -3;
    pppuStack_298 = pppuVar15;
    FUN_10a04a568(&pppuStack_298);
  }
  *(undefined ****)(param_1 + 0xa8) = pppuVar14;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110b9ab68);
  if ((int)plVar6 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110b9ab68);
    pppuVar14 = &ppuStack_228;
    uStack_230 = 0x10a069a88;
    ppuStack_228 = &PTR_DAT_110b9deb8;
    lStack_220 = lVar8;
    FUN_10a02daf4(param_2,&PTR_DAT_110b9ab48,&uStack_230,0);
    (*(code *)*ppuStack_228)(pppuVar14);
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_targets_110b9aa68);
    if ((int)plVar6 != 0) {
      (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_targets_110b9aa68);
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x208))();
      if ((uint)plVar6 != 0) {
        uVar16 = 0;
        pppuVar14 = &ppuStack_268;
        do {
          uVar9 = uVar16;
          (**(code **)(*param_2 + 0x218))(param_2);
          puVar2 = *(undefined8 **)(param_1 + 0xa8);
          if (puVar2 < *(undefined8 **)(param_1 + 0xb0)) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar18 = puVar2 + 3;
            puVar2[2] = 0;
          }
          else {
            lVar8 = (long)puVar2 - *plVar10;
            uVar11 = (lVar8 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar11) {
              FUN_10a04a398();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10a02d888);
              (*pcVar5)();
            }
            lVar12 = (long)*(undefined8 **)(param_1 + 0xb0) - *plVar10 >> 3;
            uVar13 = lVar12 * 0x5555555555555556;
            if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
              uVar13 = uVar11;
            }
            if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
              uVar13 = 0xaaaaaaaaaaaaaaa;
            }
            plStack_278 = plVar10;
            FUN_10a04a3ac();
            puVar2 = (undefined8 *)(uVar13 + lVar8);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar18 = puVar2 + 3;
            lVar8 = (long)puVar2 - (*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0));
            _memcpy(lVar8);
            pppuStack_298 = *(undefined ****)(param_1 + 0xa0);
            *(long *)(param_1 + 0xa0) = lVar8;
            *(undefined8 **)(param_1 + 0xa8) = puVar18;
            uStack_280 = *(undefined8 *)(param_1 + 0xb0);
            *(ulong *)(param_1 + 0xb0) = uVar13 + uVar9 * 0x18;
            pppuStack_290 = pppuStack_298;
            pppuStack_288 = pppuStack_298;
            FUN_10a04a6a8(&pppuStack_298);
          }
          *(undefined8 **)(param_1 + 0xa8) = puVar18;
          plVar7 = param_2;
          (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_targets_110b9aa68);
          if ((int)plVar7 != 0) {
            plVar7 = param_2;
            (**(code **)(*param_2 + 0x208))();
            if ((int)plVar7 != 0) {
              iVar17 = 0;
              do {
                (**(code **)(*param_2 + 0x218))(param_2,iVar17);
                uStack_270 = 0x10a069ab8;
                ppuStack_268 = &PTR_FUN_110b9ded0;
                puStack_260 = puVar18 + -3;
                FUN_10a02d928(param_2,&PTR_DAT_110b9ab88,&uStack_270,0);
                (*(code *)*ppuStack_268)(pppuVar14);
                (**(code **)(*param_2 + 0x220))(param_2);
                iVar17 = iVar17 + 1;
              } while ((int)plVar7 != iVar17);
            }
          }
          (**(code **)(*param_2 + 0x220))(param_2);
          uVar1 = (int)uVar16 + 1;
          uVar16 = (ulong)uVar1;
        } while (uVar1 != (uint)plVar6);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
    }
    (**(code **)(*param_2 + 0x220))();
    plVar6 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)**pppuVar14)(pppuVar14);
  __Unwind_Resume();
  plVar10 = (long *)plVar6[1];
  *plVar6 = 0;
  plVar6[1] = 0;
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 1;
    do {
      lVar8 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar10);
      return;
    }
  }
  return;
}



/* Entry: 10a02dcc8; end: 10a02e187;  */

void FUN_10a02dcc8(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *apuStack_160 [4];
  long lStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_enabled_110b9aa48,*(undefined1 *)(param_1 + 0x21));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x24),param_2,&PTR_DAT_110b9d450);
  apuStack_160[1] = (undefined *)0xd;
  apuStack_160[0] = &DAT_10f631c9c;
  apuStack_160[3] = (undefined *)0xea56cce900003505;
  apuStack_160[2] = (undefined *)0x405e485589143152;
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  lStack_140 = *(long *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x50) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_128 = 0xd;
  puStack_130 = &DAT_10f631caa;
  uStack_118 = 0xf90f37e900003605;
  uStack_120 = 0x405e485589143152;
  uStack_108 = *(undefined8 *)(param_1 + 0x60);
  uStack_110 = *(undefined8 *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_f8 = 0xb;
  puStack_100 = &DAT_10f633e72;
  uStack_e8 = 0x91cc4b4400000003;
  uStack_f0 = 0x505405e485513043;
  uStack_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x70) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_c8 = 0xb;
  puStack_d0 = &DAT_10f633e7e;
  uStack_b8 = 0x91cc4b4400000003;
  uStack_c0 = 0x605405e485513043;
  uStack_a8 = *(undefined8 *)(param_1 + 0x80);
  uStack_b0 = *(undefined8 *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x80) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x80) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_98 = 6;
  pcStack_a0 = "result";
  uStack_88 = 0xc0600bd200000000;
  uStack_90 = 0x50c553152;
  uStack_78 = *(undefined8 *)(param_1 + 0x90);
  uStack_80 = *(undefined8 *)(param_1 + 0x88);
  if (*(long *)(param_1 + 0x90) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x90) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar4 = 0x20;
  do {
    if (*(long *)((long)apuStack_160 + lVar4) == 0) goto LAB_10a02deb0;
    lVar4 = lVar4 + 0x30;
  } while (lVar4 != 0x110);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_targets_110b9aa68);
  plVar5 = &lStack_140;
  lVar4 = 0xf0;
  do {
    if (*plVar5 != 0) {
      FUN_10a02e188(param_2,plVar5 + -4,plVar5,&UNK_10f633e9d,0xd);
    }
    plVar5 = plVar5 + 6;
    lVar4 = lVar4 + -0x30;
  } while (lVar4 != 0);
  (**(code **)(*param_2 + 0x20))(param_2);
LAB_10a02deb0:
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110b9ab28);
    FUN_10a02e230(param_2,&PTR_DAT_110b9ab48,(long *)(param_1 + 0x98),&UNK_10f633eab,0xe);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((*(long *)(param_1 + 0xa8) != 0) && (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xc0)))
  {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110b9ab68);
    FUN_10a02e230(param_2,&PTR_DAT_110b9ab48,(long *)(param_1 + 0xa8),&UNK_10f633eab,0xe);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_targets_110b9aa68);
    if ((int)((ulong)(*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8)) >> 3) * -0x55555555 !=
        0) {
      uVar8 = 0;
      do {
        (**(code **)(*param_2 + 0x10))(param_2);
        uVar6 = (*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) >> 3) * -0x5555555555555555;
        if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
LAB_10a02e150:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a02e154);
          (*pcVar3)();
        }
        plVar5 = (long *)(*(long *)(param_1 + 0xb8) + uVar8 * 0x18);
        if (*plVar5 != plVar5[1]) {
          (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_targets_110b9aa68);
          lVar4 = *(long *)(param_1 + 0xb8);
          uVar6 = (*(long *)(param_1 + 0xc0) - lVar4 >> 3) * -0x5555555555555555;
          if (uVar6 < uVar8 || uVar6 - uVar8 == 0) goto LAB_10a02e150;
          lVar9 = 0;
          uVar6 = 0xffffffffffffffff;
          while (plVar5 = (long *)(lVar4 + uVar8 * 0x18),
                uVar6 + 1 < ((ulong)(plVar5[1] - *plVar5) >> 4 & 0xffffffff)) {
            (**(code **)(*param_2 + 0x10))(param_2);
            uVar7 = (*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) >> 3) *
                    -0x5555555555555555;
            if (uVar7 < uVar8 || uVar7 - uVar8 == 0) goto LAB_10a02e150;
            plVar5 = (long *)(*(long *)(param_1 + 0xb8) + uVar8 * 0x18);
            lVar4 = *plVar5;
            uVar6 = uVar6 + 1;
            if ((ulong)(plVar5[1] - lVar4 >> 4) <= uVar6) goto LAB_10a02e150;
            FUN_10a02e188(param_2,&PTR_DAT_110b9ab88,lVar4 + lVar9,&UNK_10f633e9d,0xd);
            (**(code **)(*param_2 + 0x20))(param_2);
            lVar9 = lVar9 + 0x10;
            lVar4 = *(long *)(param_1 + 0xb8);
            uVar7 = (*(long *)(param_1 + 0xc0) - lVar4 >> 3) * -0x5555555555555555;
            if (uVar7 < uVar8 || uVar7 - uVar8 == 0) goto LAB_10a02e150;
          }
          (**(code **)(*param_2 + 0x20))(param_2);
        }
        (**(code **)(*param_2 + 0x20))(param_2);
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)((int)((ulong)(*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8))
                                   >> 3) * -0x55555555));
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar4 = 0xe0;
  do {
    func_0x00010a05248c((long)apuStack_160 + lVar4);
    lVar4 = lVar4 + -0x30;
  } while (lVar4 != -0x10);
  return;
}



/* Entry: 10a02e188; end: 10a02e22f;  */

void FUN_10a02e188(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a02e230; end: 10a02e2d7;  */

void FUN_10a02e230(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a02e2d8; end: 10a02e2df;  */

void FUN_10a02e2d8(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *apuStack_160 [4];
  long lStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_enabled_110b9aa48,*(undefined1 *)(param_1 + 9));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xc),param_2,&PTR_DAT_110b9d450);
  apuStack_160[1] = (undefined *)0xd;
  apuStack_160[0] = &DAT_10f631c9c;
  apuStack_160[3] = (undefined *)0xea56cce900003505;
  apuStack_160[2] = (undefined *)0x405e485589143152;
  uStack_138 = *(undefined8 *)(param_1 + 0x38);
  lStack_140 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x38) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_128 = 0xd;
  puStack_130 = &DAT_10f631caa;
  uStack_118 = 0xf90f37e900003605;
  uStack_120 = 0x405e485589143152;
  uStack_108 = *(undefined8 *)(param_1 + 0x48);
  uStack_110 = *(undefined8 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x48) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_f8 = 0xb;
  puStack_100 = &DAT_10f633e72;
  uStack_e8 = 0x91cc4b4400000003;
  uStack_f0 = 0x505405e485513043;
  uStack_d8 = *(undefined8 *)(param_1 + 0x58);
  uStack_e0 = *(undefined8 *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_c8 = 0xb;
  puStack_d0 = &DAT_10f633e7e;
  uStack_b8 = 0x91cc4b4400000003;
  uStack_c0 = 0x605405e485513043;
  uStack_a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_b0 = *(undefined8 *)(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x68) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_98 = 6;
  pcStack_a0 = "result";
  uStack_88 = 0xc0600bd200000000;
  uStack_90 = 0x50c553152;
  uStack_78 = *(undefined8 *)(param_1 + 0x78);
  uStack_80 = *(undefined8 *)(param_1 + 0x70);
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x78) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar4 = 0x20;
  do {
    if (*(long *)((long)apuStack_160 + lVar4) == 0) goto LAB_10a02deb0;
    lVar4 = lVar4 + 0x30;
  } while (lVar4 != 0x110);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_targets_110b9aa68);
  plVar5 = &lStack_140;
  lVar4 = 0xf0;
  do {
    if (*plVar5 != 0) {
      FUN_10a02e188(param_2,plVar5 + -4,plVar5,&UNK_10f633e9d,0xd);
    }
    plVar5 = plVar5 + 6;
    lVar4 = lVar4 + -0x30;
  } while (lVar4 != 0);
  (**(code **)(*param_2 + 0x20))(param_2);
LAB_10a02deb0:
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110b9ab28);
    FUN_10a02e230(param_2,&PTR_DAT_110b9ab48,(long *)(param_1 + 0x80),&UNK_10f633eab,0xe);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((*(long *)(param_1 + 0x90) != 0) && (*(long *)(param_1 + 0xa0) != *(long *)(param_1 + 0xa8)))
  {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110b9ab68);
    FUN_10a02e230(param_2,&PTR_DAT_110b9ab48,(long *)(param_1 + 0x90),&UNK_10f633eab,0xe);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_targets_110b9aa68);
    if ((int)((ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0)) >> 3) * -0x55555555 !=
        0) {
      uVar8 = 0;
      do {
        (**(code **)(*param_2 + 0x10))(param_2);
        uVar6 = (*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3) * -0x5555555555555555;
        if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
LAB_10a02e150:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a02e154);
          (*pcVar3)();
        }
        plVar5 = (long *)(*(long *)(param_1 + 0xa0) + uVar8 * 0x18);
        if (*plVar5 != plVar5[1]) {
          (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_targets_110b9aa68);
          lVar4 = *(long *)(param_1 + 0xa0);
          uVar6 = (*(long *)(param_1 + 0xa8) - lVar4 >> 3) * -0x5555555555555555;
          if (uVar6 < uVar8 || uVar6 - uVar8 == 0) goto LAB_10a02e150;
          lVar9 = 0;
          uVar6 = 0xffffffffffffffff;
          while (plVar5 = (long *)(lVar4 + uVar8 * 0x18),
                uVar6 + 1 < ((ulong)(plVar5[1] - *plVar5) >> 4 & 0xffffffff)) {
            (**(code **)(*param_2 + 0x10))(param_2);
            uVar7 = (*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3) *
                    -0x5555555555555555;
            if (uVar7 < uVar8 || uVar7 - uVar8 == 0) goto LAB_10a02e150;
            plVar5 = (long *)(*(long *)(param_1 + 0xa0) + uVar8 * 0x18);
            lVar4 = *plVar5;
            uVar6 = uVar6 + 1;
            if ((ulong)(plVar5[1] - lVar4 >> 4) <= uVar6) goto LAB_10a02e150;
            FUN_10a02e188(param_2,&PTR_DAT_110b9ab88,lVar4 + lVar9,&UNK_10f633e9d,0xd);
            (**(code **)(*param_2 + 0x20))(param_2);
            lVar9 = lVar9 + 0x10;
            lVar4 = *(long *)(param_1 + 0xa0);
            uVar7 = (*(long *)(param_1 + 0xa8) - lVar4 >> 3) * -0x5555555555555555;
            if (uVar7 < uVar8 || uVar7 - uVar8 == 0) goto LAB_10a02e150;
          }
          (**(code **)(*param_2 + 0x20))(param_2);
        }
        (**(code **)(*param_2 + 0x20))(param_2);
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)((int)((ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0))
                                   >> 3) * -0x55555555));
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar4 = 0xe0;
  do {
    func_0x00010a05248c((long)apuStack_160 + lVar4);
    lVar4 = lVar4 + -0x30;
  } while (lVar4 != -0x10);
  return;
}



/* Entry: 10a02e2e0; end: 10a02e45f;  */

void FUN_10a02e2e0(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9aba8,*(undefined1 *)(param_1 + 0x21));
  *(char *)(param_1 + 0x21) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9abc8,*(undefined1 *)(param_1 + 0x22));
  *(char *)(param_1 + 0x22) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9abe8,*(undefined1 *)(param_1 + 0x23));
  *(char *)(param_1 + 0x23) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ac08,*(undefined1 *)(param_1 + 0x24));
  *(char *)(param_1 + 0x24) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ac28,*(undefined1 *)(param_1 + 0x25));
  *(char *)(param_1 + 0x25) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ac48,*(undefined1 *)(param_1 + 0x26));
  *(char *)(param_1 + 0x26) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ac68,*(undefined1 *)(param_1 + 0x27));
  *(char *)(param_1 + 0x27) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ac88,*(undefined1 *)(param_1 + 0x28));
  *(char *)(param_1 + 0x28) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9aca8,*(undefined1 *)(param_1 + 0x29));
  *(char *)(param_1 + 0x29) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110b9acc8,0);
  *(char *)(param_1 + 0x2a) = (char)plVar1;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110b9ace8,0);
  *(char *)(param_1 + 0x2b) = (char)param_2;
  return;
}



/* Entry: 10a02e460; end: 10a02e467;  */

void FUN_10a02e460(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9aba8,*(undefined1 *)(param_1 + 9));
  *(char *)(param_1 + 9) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9abc8,*(undefined1 *)(param_1 + 10));
  *(char *)(param_1 + 10) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9abe8,*(undefined1 *)(param_1 + 0xb));
  *(char *)(param_1 + 0xb) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ac08,*(undefined1 *)(param_1 + 0xc));
  *(char *)(param_1 + 0xc) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ac28,*(undefined1 *)(param_1 + 0xd));
  *(char *)(param_1 + 0xd) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ac48,*(undefined1 *)(param_1 + 0xe));
  *(char *)(param_1 + 0xe) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ac68,*(undefined1 *)(param_1 + 0xf));
  *(char *)(param_1 + 0xf) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ac88,*(undefined1 *)(param_1 + 0x10));
  *(char *)(param_1 + 0x10) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9aca8,*(undefined1 *)(param_1 + 0x11));
  *(char *)(param_1 + 0x11) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110b9acc8,0);
  *(char *)(param_1 + 0x12) = (char)plVar1;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110b9ace8,0);
  *(char *)(param_1 + 0x13) = (char)param_2;
  return;
}



/* Entry: 10a02e468; end: 10a02e5b7;  */

void FUN_10a02e468(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9aba8,*(undefined1 *)(param_1 + 0x21));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9abc8,*(undefined1 *)(param_1 + 0x22));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9abe8,*(undefined1 *)(param_1 + 0x23));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9ac08,*(undefined1 *)(param_1 + 0x24));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9ac28,*(undefined1 *)(param_1 + 0x25));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9ac48,*(undefined1 *)(param_1 + 0x26));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9ac68,*(undefined1 *)(param_1 + 0x27));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9ac88,*(undefined1 *)(param_1 + 0x28));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9aca8,*(undefined1 *)(param_1 + 0x29));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110b9acc8,*(undefined1 *)(param_1 + 0x2a));
                    /* WARNING: Could not recover jumptable at 0x00010a02e5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110b9ace8,*(undefined1 *)(param_1 + 0x2b));
  return;
}



/* Entry: 10a02e5b8; end: 10a02e5bf;  */

void FUN_10a02e5b8(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9aba8,*(undefined1 *)(param_1 + 9));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9abc8,*(undefined1 *)(param_1 + 10));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9abe8,*(undefined1 *)(param_1 + 0xb));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9ac08,*(undefined1 *)(param_1 + 0xc));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9ac28,*(undefined1 *)(param_1 + 0xd));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9ac48,*(undefined1 *)(param_1 + 0xe));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9ac68,*(undefined1 *)(param_1 + 0xf));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9ac88,*(undefined1 *)(param_1 + 0x10));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9aca8,*(undefined1 *)(param_1 + 0x11));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110b9acc8,*(undefined1 *)(param_1 + 0x12));
                    /* WARNING: Could not recover jumptable at 0x00010a02e5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110b9ace8,*(undefined1 *)(param_1 + 0x13));
  return;
}



/* Entry: 10a02e5c0; end: 10a02e7ff;  */

undefined8 * FUN_10a02e5c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  *param_1 = &PTR_DAT_110b9ad18;
  param_1[2] = &PTR_DAT_110b9adb8;
  param_1[7] = &PTR_DAT_110b9ae10;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b9def8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined2 *)(puVar1 + 7) = 0;
  puVar1[3] = &PTR_FUN_110b9a8f8;
  puVar1[6] = &PTR_DAT_110b9a960;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x8c) = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined8 *)((long)puVar1 + 0x94) = 0;
  *(undefined8 *)((long)puVar1 + 0xac) = 0;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0xbc) = 0;
  *(undefined8 *)((long)puVar1 + 0xb4) = 0;
  *(undefined8 *)((long)puVar1 + 0xcc) = 0;
  *(undefined8 *)((long)puVar1 + 0xc4) = 0;
  *(undefined8 *)((long)puVar1 + 0xdc) = 0;
  *(undefined8 *)((long)puVar1 + 0xd4) = 0;
  *(undefined4 *)((long)puVar1 + 0xe4) = 0;
  param_1[0x1d] = puVar1 + 3;
  param_1[0x1e] = puVar1;
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b9def8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined2 *)(puVar1 + 7) = 0;
  puVar1[3] = &PTR_FUN_110b9a8f8;
  puVar1[6] = &PTR_DAT_110b9a960;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x8c) = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined8 *)((long)puVar1 + 0x94) = 0;
  *(undefined8 *)((long)puVar1 + 0xac) = 0;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0xbc) = 0;
  *(undefined8 *)((long)puVar1 + 0xb4) = 0;
  *(undefined8 *)((long)puVar1 + 0xcc) = 0;
  *(undefined8 *)((long)puVar1 + 0xc4) = 0;
  *(undefined8 *)((long)puVar1 + 0xdc) = 0;
  *(undefined8 *)((long)puVar1 + 0xd4) = 0;
  *(undefined4 *)((long)puVar1 + 0xe4) = 0;
  param_1[0x1f] = puVar1 + 3;
  param_1[0x20] = puVar1;
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b9def8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &PTR_FUN_110b9a8f8;
  *(undefined2 *)(puVar1 + 7) = 0;
  puVar1[6] = &PTR_DAT_110b9a960;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x8c) = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined8 *)((long)puVar1 + 0x94) = 0;
  *(undefined8 *)((long)puVar1 + 0xac) = 0;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0xbc) = 0;
  *(undefined8 *)((long)puVar1 + 0xb4) = 0;
  *(undefined8 *)((long)puVar1 + 0xcc) = 0;
  *(undefined8 *)((long)puVar1 + 0xc4) = 0;
  *(undefined8 *)((long)puVar1 + 0xdc) = 0;
  *(undefined8 *)((long)puVar1 + 0xd4) = 0;
  *(undefined4 *)((long)puVar1 + 0xe4) = 0;
  param_1[0x21] = puVar1 + 3;
  param_1[0x22] = puVar1;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b9df48;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[3] = &PTR_DAT_110b9a9a8;
  puVar1[6] = &PTR_FUN_110b9aa10;
  *(undefined8 *)((long)puVar1 + 0x39) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  param_1[0x23] = puVar1 + 3;
  param_1[0x24] = puVar1;
  param_1[0x25] = 0x400000003e4ccccd;
  *(undefined4 *)(param_1 + 0x26) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x134) = 0;
  return param_1;
}



/* Entry: 10a02e800; end: 10a02eb43;  */

/* WARNING: Removing unreachable block (ram,0x00010a02ec70) */

void FUN_10a02e800(long param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  char cVar5;
  bool bVar6;
  code ******ppppppcVar7;
  code ******ppppppcVar8;
  code *****pppppcVar9;
  code *****pppppcVar10;
  long *plVar11;
  code ******ppppppcVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined *puVar15;
  code ****ppppcVar16;
  code ****ppppcVar17;
  long lVar18;
  code *****pppppcVar19;
  code ******unaff_x22;
  undefined **unaff_x23;
  code *****pppppcVar20;
  code ******unaff_x24;
  code ******unaff_x25;
  code ****ppppcStack_130;
  code ****ppppcStack_128;
  code *****pppppcStack_120;
  undefined **ppuStack_118;
  code *****pppppcStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  code *****pppppcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  code *****pppppcStack_d8;
  code ****ppppcStack_d0;
  undefined **ppuStack_c8;
  code *****pppppcStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x134) & 1) != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (param_3 != 0) {
      puVar3 = (undefined8 *)(param_3 + 0xb0);
    }
    FUN_10a02eb44(&pppppcStack_98,*puVar3);
    FUN_10a02eeb0(param_2,&pppppcStack_98);
    ppuVar2 = ppuStack_90;
    if (ppuStack_90 != (undefined **)0x0) {
      ppuVar1 = ppuStack_90 + 1;
      do {
        puVar15 = *ppuVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar6) {
          *ppuVar1 = puVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar15 == (undefined *)0x0) {
        (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
      }
    }
    puVar15 = *param_2;
    puVar15[0xe0] = *(undefined1 *)(param_1 + 0xe0);
    FUN_10a02ef14(*(undefined8 *)(puVar15 + 0xe8),*(undefined8 *)(param_1 + 0xe8));
    FUN_10a02ef14(*(undefined8 *)(*param_2 + 0xf8),*(undefined8 *)(param_1 + 0xf8));
    FUN_10a02ef14(*(undefined8 *)(*param_2 + 0x108),*(undefined8 *)(param_1 + 0x108));
    param_3 = *(long *)(param_1 + 0x118);
    unaff_x22 = *(code *******)(*param_2 + 0x118);
    ppppppcVar7 = unaff_x22 + 1;
    ppppppcVar12 = (code ******)(param_3 + 8);
    func_0x00010a04a7fc();
    *(undefined1 *)(unaff_x22 + 4) = *(undefined1 *)(param_3 + 0x20);
    uVar13 = *(undefined8 *)(param_3 + 0x21);
    *(undefined4 *)(unaff_x22 + 5) = *(undefined4 *)(param_3 + 0x28);
    *(undefined8 *)((long)unaff_x22 + 0x21) = uVar13;
    puVar15 = *param_2;
    *(undefined8 *)(puVar15 + 0x128) = *(undefined8 *)(param_1 + 0x128);
    *(undefined4 *)(puVar15 + 0x130) = *(undefined4 *)(param_1 + 0x130);
    puVar15[0x134] = 1;
    goto LAB_10a02eaa4;
  }
  unaff_x25 = &pppppcStack_d8;
  pppppcStack_d8 = (code *****)FUN_10a06a130;
  ppppcStack_d0 = (code ****)&PTR_FUN_110b9df88;
  ppuStack_c8 = param_2;
  if (param_3 == 0) {
    FUN_10a069d08(&pppppcStack_98,param_1);
    ppppppcVar12 = &pppppcStack_98;
    FUN_10a069c7c(&pppppcStack_d8);
    if (ppuStack_90 != (undefined **)0x0) {
      ppuVar2 = ppuStack_90 + 1;
      do {
        puVar15 = *ppuVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar6) {
          *ppuVar2 = puVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_10a02ea78:
      ppuVar2 = ppuStack_90;
      if (puVar15 == (undefined *)0x0) {
        (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
      }
    }
  }
  else {
    unaff_x22 = *(code *******)(param_1 + 0x40);
    unaff_x23 = *(undefined ***)(param_1 + 0x48);
    if (*(char *)(param_3 + 0xb8) == '\x01') {
      unaff_x24 = &pppppcStack_98;
      pppppcStack_98 = (code *****)FUN_10a06a130;
      ppuStack_90 = &PTR_FUN_110b9df88;
      ppppppcVar12 = unaff_x22;
      ppuStack_88 = param_2;
      FUN_10a069d9c(param_3,unaff_x22,unaff_x23,&pppppcStack_98);
      pcVar14 = (code *)*ppuStack_90;
    }
    else {
      lVar18 = param_3 + 0x88;
      pppppcStack_98 = (code *****)unaff_x22;
      ppuStack_90 = unaff_x23;
      func_0x00010a35bf90(lVar18,&pppppcStack_98);
      pppuVar4 = &ppuStack_90;
      ppppppcVar7 = &pppppcStack_98;
      if (lVar18 != 0) {
        pppuVar4 = (undefined ***)(lVar18 + 0x28);
        ppppppcVar7 = (code ******)(lVar18 + 0x20);
      }
      param_2 = *pppuVar4;
      unaff_x24 = (code ******)*ppppppcVar7;
      if (unaff_x22 == unaff_x24 && unaff_x23 == param_2) {
        FUN_10a069d08(&pppppcStack_98,param_1);
        ppppppcVar12 = &pppppcStack_98;
        FUN_10a069c7c(&pppppcStack_d8);
        if (ppuStack_90 != (undefined **)0x0) {
          ppuVar2 = ppuStack_90 + 1;
          do {
            puVar15 = *ppuVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
            if (bVar6) {
              *ppuVar2 = puVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_10a02ea78;
        }
        goto LAB_10a02ea94;
      }
      pppppcStack_98 = pppppcStack_d8;
      unaff_x22 = &pppppcStack_98;
      (*(code *)ppppcStack_d0[3])(&ppuStack_90,&ppppcStack_d0);
      ppppppcVar12 = unaff_x24;
      FUN_10a069d9c(param_3,unaff_x24,param_2,&pppppcStack_98);
      pcVar14 = (code *)*ppuStack_90;
    }
    (*pcVar14)(&ppuStack_90);
  }
LAB_10a02ea94:
  ppppppcVar7 = (code ******)&ppppcStack_d0;
  (*(code *)*ppppcStack_d0)();
LAB_10a02eaa4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a06a560(&pppppcStack_98);
  (*(code *)*ppppcStack_d0)(unaff_x25 + 1);
  ppppppcVar8 = ppppppcVar7;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a02eb44;
  pppppcStack_120 = (code *****)unaff_x24;
  ppuStack_118 = unaff_x23;
  pppppcStack_110 = (code *****)unaff_x22;
  lStack_108 = param_3;
  ppuStack_100 = param_2;
  pppppcStack_f8 = (code *****)ppppppcVar7;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (ppppppcVar12 == (code ******)0x0) {
    plVar11 = (long *)0x150;
    __Znwm();
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_DAT_110b9e018;
    ppppcVar17 = (code ****)(plVar11 + 3);
    FUN_10a02e5c0(ppppcVar17,0);
    ppppcStack_130 = ppppcVar17;
    ppppcStack_128 = (code ****)plVar11;
    FUN_10a06a380(&ppppcStack_130,plVar11 + 8,ppppcVar17);
    FUN_10a06a21c(ppppppcVar8,&ppppcStack_130);
    ppppcVar17 = ppppcStack_128;
    if (ppppcStack_128 != (code ****)0x0) {
      plVar11 = (long *)(ppppcStack_128 + 1);
      do {
        lVar18 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)((long)*ppppcStack_128 + 0x10))(ppppcStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar17);
      }
    }
  }
  else {
    pppppcVar20 = ppppppcVar12[0x10b];
    pppppcVar19 = ppppppcVar12[0x10c];
    if (pppppcVar19 != (code *****)0x0) {
      pppppcVar9 = pppppcVar19 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppcVar9,0x10);
        if (bVar6) {
          *pppppcVar9 = (code ****)((long)*pppppcVar9 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppppcVar9 = (code *****)0x138;
    __Znwm();
    FUN_10a02e5c0();
    if (pppppcVar19 != (code *****)0x0) {
      pppppcVar10 = pppppcVar19 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppcVar10,0x10);
        if (bVar6) {
          *pppppcVar10 = (code ****)((long)*pppppcVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pppppcVar10 = pppppcVar19 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppcVar10,0x10);
        if (bVar6) {
          *pppppcVar10 = (code ****)((long)*pppppcVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppcVar10,0x10);
        if (bVar6) {
          *pppppcVar10 = (code ****)((long)*pppppcVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar19);
    }
    pppppcVar10 = (code *****)0x30;
    ppppcStack_130 = (code ****)pppppcVar9;
    __Znwm();
    *pppppcVar10 = (code ****)&PTR_DAT_110b9dfb8;
    pppppcVar10[1] = (code ****)0x0;
    pppppcVar10[2] = (code ****)0x0;
    pppppcVar10[3] = (code ****)pppppcVar9;
    pppppcVar10[4] = (code ****)pppppcVar20;
    pppppcVar10[5] = (code ****)pppppcVar19;
    ppppcStack_128 = (code ****)pppppcVar10;
    FUN_10a06a380(&ppppcStack_130,pppppcVar9 + 5,pppppcVar9);
    FUN_10a06a21c(ppppppcVar8,&ppppcStack_130);
    ppppcVar17 = ppppcStack_128;
    if ((code *****)ppppcStack_128 != (code *****)0x0) {
      pppppcVar9 = (code *****)(ppppcStack_128 + 1);
      do {
        ppppcVar16 = *pppppcVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppcVar9,0x10);
        if (bVar6) {
          *pppppcVar9 = (code ****)((long)ppppcVar16 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppcVar16 == (code ****)0x0) {
        (*(code *)(*ppppcStack_128)[2])(ppppcStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar17);
      }
    }
    if (pppppcVar19 != (code *****)0x0) {
      pppppcVar9 = pppppcVar19 + 1;
      do {
        ppppcVar17 = *pppppcVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppcVar9,0x10);
        if (bVar6) {
          *pppppcVar9 = (code ****)((long)ppppcVar17 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppcVar17 == (code ****)0x0) {
        (*(code *)(*pppppcVar19)[2])(pppppcVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar19);
      }
    }
    if ((pppppcVar20 != (code *****)0x0) &&
       (pppppcVar9 = *ppppppcVar8, pppppcVar9 != (code *****)0x0)) {
      ppppcStack_128 = (code ****)ppppppcVar8[1];
      if ((code *****)ppppcStack_128 != (code *****)0x0) {
        pppppcVar10 = (code *****)(ppppcStack_128 + 1);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppcVar10,0x10);
          if (bVar6) {
            *pppppcVar10 = (code ****)((long)*pppppcVar10 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppcStack_130 = (code ****)pppppcVar9;
      FUN_10aa88c30(pppppcVar20,&ppppcStack_130);
      ppppcVar17 = ppppcStack_128;
      if ((code *****)ppppcStack_128 != (code *****)0x0) {
        pppppcVar20 = (code *****)(ppppcStack_128 + 1);
        do {
          ppppcVar16 = *pppppcVar20;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppcVar20,0x10);
          if (bVar6) {
            *pppppcVar20 = (code ****)((long)ppppcVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppcVar16 == (code ****)0x0) {
          (*(code *)(*ppppcStack_128)[2])(ppppcStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar17);
        }
      }
    }
    if (pppppcVar19 != (code *****)0x0) {
      pppppcVar20 = pppppcVar19 + 1;
      do {
        ppppcVar17 = *pppppcVar20;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppcVar20,0x10);
        if (bVar6) {
          *pppppcVar20 = (code ****)((long)ppppcVar17 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppcVar17 == (code ****)0x0) {
        (*(code *)(*pppppcVar19)[2])(pppppcVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(pppppcVar19);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a02eb44; end: 10a02eeaf;  */

/* WARNING: Removing unreachable block (ram,0x00010a02ec70) */

void FUN_10a02eb44(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    plVar3 = (long *)0x150;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110b9e018;
    plVar6 = plVar3 + 3;
    FUN_10a02e5c0(plVar6,0);
    plStack_50 = plVar6;
    plStack_48 = plVar3;
    FUN_10a06a380(&plStack_50,plVar3 + 8,plVar6);
    FUN_10a06a21c(param_1,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x138;
    __Znwm();
    FUN_10a02e5c0();
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_50 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_DAT_110b9dfb8;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_48 = plVar4;
    FUN_10a06a380(&plStack_50,plVar3 + 5,plVar3);
    FUN_10a06a21c(param_1,&plStack_50);
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar3 = (long *)*param_1, plVar3 != (long *)0x0)) {
      plStack_48 = (long *)param_1[1];
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_50 = plVar3;
      FUN_10aa88c30(lVar7,&plStack_50);
      plVar3 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a02eeb0; end: 10a02ef13;  */

undefined8 * FUN_10a02eeb0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a02ef14; end: 10a02f0ff;  */

long * FUN_10a02ef14(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long *extraout_x8;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_48;
  
  func_0x00010a04a7fc(param_1 + 1,param_2 + 1);
  *(char *)(param_1 + 4) = (char)param_2[4];
  uVar16 = *(undefined8 *)((long)param_2 + 0x39);
  uVar15 = *(undefined8 *)((long)param_2 + 0x31);
  uVar19 = *(undefined8 *)((long)param_2 + 0x29);
  uVar18 = *(undefined8 *)((long)param_2 + 0x21);
  param_1[8] = param_2[8];
  *(undefined8 *)((long)param_1 + 0x29) = uVar19;
  *(undefined8 *)((long)param_1 + 0x21) = uVar18;
  *(undefined8 *)((long)param_1 + 0x39) = uVar16;
  *(undefined8 *)((long)param_1 + 0x31) = uVar15;
  func_0x00010a04a704(param_1 + 9,param_2 + 9);
  func_0x00010a04a704(param_1 + 0xb,param_2 + 0xb);
  func_0x00010a04a704(param_1 + 0xd,param_2 + 0xd);
  func_0x00010a04a704(param_1 + 0xf,param_2 + 0xf);
  func_0x00010a04a704(param_1 + 0x11,param_2 + 0x11);
  func_0x00010a04a780(param_1 + 0x13,param_2 + 0x13);
  plVar6 = param_2 + 0x15;
  func_0x00010a04a780(param_1 + 0x15);
  if (param_1 == param_2) {
    return param_1;
  }
  plVar2 = param_1 + 0x17;
  lVar10 = param_2[0x17];
  lVar12 = param_2[0x18];
  uVar8 = lVar12 - lVar10;
  if (uVar8 <= (ulong)(param_1[0x19] - *plVar2)) {
    uVar13 = param_1[0x18] - *plVar2;
    if (uVar8 <= uVar13) {
      FUN_10a04a878(lVar10,lVar12);
      lVar12 = param_1[0x18];
      while (lVar12 != lVar10) {
        lVar12 = lVar12 + -0x18;
        lStack_48 = lVar12;
        func_0x00010a04a568(&lStack_48);
      }
      param_1[0x18] = lVar10;
      return param_1;
    }
    FUN_10a04a878(lVar10,lVar10 + uVar13);
    FUN_10a04a3f0(plVar2,lVar10 + uVar13,lVar12,param_1[0x18]);
LAB_10a02f094:
    param_1[0x18] = (long)plVar2;
    return param_1;
  }
  uVar13 = ((long)uVar8 >> 3) * -0x5555555555555555;
  plVar1 = plVar2;
  func_0x00010a04a638();
  if (uVar13 < 0xaaaaaaaaaaaaaab) {
    lVar9 = param_1[0x19] - param_1[0x17] >> 3;
    uVar11 = lVar9 * 0x5555555555555556;
    if (uVar11 < uVar13 || uVar11 + ((long)uVar8 >> 3) * 0x5555555555555555 == 0) {
      uVar11 = uVar13;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    FUN_10a04a34c(plVar2,uVar11);
    FUN_10a04a3f0(plVar2,lVar10,lVar12,param_1[0x18]);
    goto LAB_10a02f094;
  }
  FUN_10a04a398();
  param_1[0x18] = 0xaaaaaaaaaaaaaaa;
  __Unwind_Resume();
  plVar2 = plVar6;
  FUN_10a2421c8();
  if (plVar2[0x39] == 0) {
LAB_10a02f4d4:
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    return plVar2;
  }
  plVar3 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9ae20,0);
  plVar4 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9ae40,plVar3);
  plVar5 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9ae60,0);
  plVar2 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9ae80,0);
  if ((((uint)plVar4 | (uint)plVar5 | (uint)plVar2) & 1) == 0) goto LAB_10a02f4d4;
  FUN_10a02eb44(extraout_x8,plVar6);
  lVar10 = *extraout_x8;
  *(char *)(lVar10 + 0xe0) = (char)plVar3;
  lVar10 = *(long *)(lVar10 + 0xe8);
  *(char *)(lVar10 + 0x21) = (char)plVar4;
  uVar14 = 0x3f800000;
  (**(code **)(*plVar1 + 0x48))(plVar1,&PTR_DAT_110b9aea0);
  *(undefined4 *)(lVar10 + 0x24) = uVar14;
  lVar10 = *(long *)(*extraout_x8 + 0xe8);
  uVar14 = 0x3d4ccccd;
  (**(code **)(*plVar1 + 0x48))(plVar1,&PTR_DAT_110b9aec0);
  *(undefined4 *)(lVar10 + 0x28) = uVar14;
  fVar17 = *(float *)(*(long *)(*extraout_x8 + 0xe8) + 0x28);
  if (fVar17 == 0.0) {
    uVar14 = 0x3a83126f;
  }
  else {
    uVar14 = 0x3f000000;
    if ((fVar17 <= 1.0) && (uVar14 = 0x3f000000, 0.0 <= fVar17)) goto LAB_10a02f240;
  }
  *(undefined4 *)(*(long *)(*extraout_x8 + 0xe8) + 0x28) = uVar14;
LAB_10a02f240:
  uVar14 = 0xbf800000;
  (**(code **)(*plVar1 + 0x48))(plVar1,&PTR_DAT_110b9aee0);
  *(undefined4 *)(*extraout_x8 + 0x128) = uVar14;
  uVar14 = 0xbf800000;
  (**(code **)(*plVar1 + 0x48))(plVar1,&PTR_DAT_110b9af00);
  lVar10 = *extraout_x8;
  *(undefined4 *)(lVar10 + 300) = uVar14;
  lVar12 = *(long *)(lVar10 + 0xf8);
  *(char *)(lVar12 + 0x21) = (char)plVar5;
  uVar14 = *(undefined4 *)(*(long *)(lVar10 + 0xe8) + 0x24);
  (**(code **)(*plVar1 + 0x48))(plVar1,&PTR_DAT_110b9af20);
  *(undefined4 *)(lVar12 + 0x24) = uVar14;
  lVar10 = *(long *)(*extraout_x8 + 0xf8);
  uVar14 = 0x3f000000;
  (**(code **)(*plVar1 + 0x48))(plVar1,&PTR_DAT_110b9af40);
  *(undefined4 *)(lVar10 + 0x28) = uVar14;
  lVar10 = *extraout_x8;
  uVar14 = *(undefined4 *)(lVar10 + 0x130);
  (**(code **)(*plVar1 + 0x48))(plVar1,&PTR_DAT_110b9af60);
  *(undefined4 *)(lVar10 + 0x130) = uVar14;
  lVar10 = *(long *)(*extraout_x8 + 0x108);
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9ae80,0);
  *(char *)(lVar10 + 0x21) = (char)plVar6;
  lVar10 = *(long *)(*extraout_x8 + 0x108);
  uVar14 = *(undefined4 *)(*(long *)(*extraout_x8 + 0xe8) + 0x24);
  (**(code **)(*plVar1 + 0x48))(plVar1,&PTR_DAT_110b9af80);
  *(undefined4 *)(lVar10 + 0x24) = uVar14;
  lVar10 = *(long *)(*extraout_x8 + 0x108);
  uVar14 = 0x3f800000;
  (**(code **)(*plVar1 + 0x48))(plVar1,&PTR_DAT_110b9afa0);
  *(undefined4 *)(lVar10 + 0x28) = uVar14;
  lVar10 = *(long *)(*extraout_x8 + 0x118);
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9afc0,*(undefined1 *)(lVar10 + 0x21));
  *(char *)(lVar10 + 0x21) = (char)plVar6;
  lVar10 = *(long *)(*extraout_x8 + 0x118);
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9afe0,*(undefined1 *)(lVar10 + 0x23));
  *(char *)(lVar10 + 0x23) = (char)plVar6;
  lVar10 = *(long *)(*extraout_x8 + 0x118);
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9b000,*(undefined1 *)(lVar10 + 0x24));
  *(char *)(lVar10 + 0x24) = (char)plVar6;
  lVar10 = *(long *)(*extraout_x8 + 0x118);
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9b020,*(undefined1 *)(lVar10 + 0x25));
  *(char *)(lVar10 + 0x25) = (char)plVar6;
  lVar10 = *(long *)(*extraout_x8 + 0x118);
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9b040,*(undefined1 *)(lVar10 + 0x26));
  *(char *)(lVar10 + 0x26) = (char)plVar6;
  lVar10 = *(long *)(*extraout_x8 + 0x118);
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9b060,*(undefined1 *)(lVar10 + 0x22));
  *(char *)(lVar10 + 0x22) = (char)plVar6;
  lVar10 = *(long *)(*extraout_x8 + 0x118);
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9b080,*(undefined1 *)(lVar10 + 0x27));
  *(char *)(lVar10 + 0x27) = (char)plVar6;
  lVar10 = *(long *)(*extraout_x8 + 0x118);
  if ((int)plVar1[0xd] < 0xd2) {
    plVar6 = plVar1;
    (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9b0a0,0);
    bVar7 = (byte)plVar6 ^ 1;
    lVar12 = *(long *)(*extraout_x8 + 0x118);
  }
  else {
    bVar7 = 0;
    lVar12 = lVar10;
  }
  *(byte *)(lVar10 + 0x28) = bVar7;
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x200))(plVar1,&PTR_DAT_110b9b0c0);
  if ((int)plVar6 == 0) {
    plVar6 = plVar1;
    (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9b0e0,0);
    bVar7 = (byte)plVar6;
  }
  else {
    plVar6 = plVar1;
    (**(code **)(*plVar1 + 0x58))(plVar1,&PTR_DAT_110b9b0c0,1);
    bVar7 = (byte)plVar6 ^ 1;
  }
  *(byte *)(lVar12 + 0x29) = bVar7;
  lVar10 = *(long *)(*extraout_x8 + 0x118);
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x38))(plVar1,&PTR_DAT_110b9b100,0);
  *(char *)(lVar10 + 0x2a) = (char)plVar6;
  lVar10 = *(long *)(*extraout_x8 + 0x118);
  (**(code **)(*plVar1 + 0x38))(plVar1,&PTR_DAT_110b9b120,0);
  *(char *)(lVar10 + 0x2b) = (char)plVar1;
  *(undefined1 *)(*extraout_x8 + 0x134) = 1;
  return plVar1;
}



/* Entry: 10a02f100; end: 10a02f5cf;  */

void FUN_10a02f100(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  
  lVar6 = param_3;
  FUN_10a2421c8();
  if (*(long *)(lVar6 + 0x1c8) == 0) {
LAB_10a02f4d4:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ae20,0);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ae40,plVar1);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ae60,0);
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ae80,0);
  if ((((uint)plVar2 | (uint)plVar3 | (uint)plVar4) & 1) == 0) goto LAB_10a02f4d4;
  FUN_10a02eb44(param_1,param_3);
  lVar6 = *param_1;
  *(char *)(lVar6 + 0xe0) = (char)plVar1;
  lVar6 = *(long *)(lVar6 + 0xe8);
  *(char *)(lVar6 + 0x21) = (char)plVar2;
  uVar8 = 0x3f800000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9aea0);
  *(undefined4 *)(lVar6 + 0x24) = uVar8;
  lVar6 = *(long *)(*param_1 + 0xe8);
  uVar8 = 0x3d4ccccd;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9aec0);
  *(undefined4 *)(lVar6 + 0x28) = uVar8;
  fVar9 = *(float *)(*(long *)(*param_1 + 0xe8) + 0x28);
  if (fVar9 == 0.0) {
    uVar8 = 0x3a83126f;
  }
  else {
    uVar8 = 0x3f000000;
    if ((fVar9 <= 1.0) && (0.0 <= fVar9)) goto LAB_10a02f240;
  }
  *(undefined4 *)(*(long *)(*param_1 + 0xe8) + 0x28) = uVar8;
LAB_10a02f240:
  uVar8 = 0xbf800000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9aee0);
  *(undefined4 *)(*param_1 + 0x128) = uVar8;
  uVar8 = 0xbf800000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9af00);
  lVar6 = *param_1;
  *(undefined4 *)(lVar6 + 300) = uVar8;
  lVar7 = *(long *)(lVar6 + 0xf8);
  *(char *)(lVar7 + 0x21) = (char)plVar3;
  uVar8 = *(undefined4 *)(*(long *)(lVar6 + 0xe8) + 0x24);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9af20);
  *(undefined4 *)(lVar7 + 0x24) = uVar8;
  lVar6 = *(long *)(*param_1 + 0xf8);
  uVar8 = 0x3f000000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9af40);
  *(undefined4 *)(lVar6 + 0x28) = uVar8;
  lVar6 = *param_1;
  uVar8 = *(undefined4 *)(lVar6 + 0x130);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9af60);
  *(undefined4 *)(lVar6 + 0x130) = uVar8;
  lVar6 = *(long *)(*param_1 + 0x108);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9ae80,0);
  *(char *)(lVar6 + 0x21) = (char)plVar1;
  lVar6 = *(long *)(*param_1 + 0x108);
  uVar8 = *(undefined4 *)(*(long *)(*param_1 + 0xe8) + 0x24);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9af80);
  *(undefined4 *)(lVar6 + 0x24) = uVar8;
  lVar6 = *(long *)(*param_1 + 0x108);
  uVar8 = 0x3f800000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9afa0);
  *(undefined4 *)(lVar6 + 0x28) = uVar8;
  lVar6 = *(long *)(*param_1 + 0x118);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9afc0,*(undefined1 *)(lVar6 + 0x21));
  *(char *)(lVar6 + 0x21) = (char)plVar1;
  lVar6 = *(long *)(*param_1 + 0x118);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9afe0,*(undefined1 *)(lVar6 + 0x23));
  *(char *)(lVar6 + 0x23) = (char)plVar1;
  lVar6 = *(long *)(*param_1 + 0x118);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9b000,*(undefined1 *)(lVar6 + 0x24));
  *(char *)(lVar6 + 0x24) = (char)plVar1;
  lVar6 = *(long *)(*param_1 + 0x118);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9b020,*(undefined1 *)(lVar6 + 0x25));
  *(char *)(lVar6 + 0x25) = (char)plVar1;
  lVar6 = *(long *)(*param_1 + 0x118);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9b040,*(undefined1 *)(lVar6 + 0x26));
  *(char *)(lVar6 + 0x26) = (char)plVar1;
  lVar6 = *(long *)(*param_1 + 0x118);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9b060,*(undefined1 *)(lVar6 + 0x22));
  *(char *)(lVar6 + 0x22) = (char)plVar1;
  lVar6 = *(long *)(*param_1 + 0x118);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9b080,*(undefined1 *)(lVar6 + 0x27));
  *(char *)(lVar6 + 0x27) = (char)plVar1;
  lVar6 = *(long *)(*param_1 + 0x118);
  if ((int)param_2[0xd] < 0xd2) {
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9b0a0,0);
    bVar5 = (byte)plVar1 ^ 1;
    lVar7 = *(long *)(*param_1 + 0x118);
  }
  else {
    bVar5 = 0;
    lVar7 = lVar6;
  }
  *(byte *)(lVar6 + 0x28) = bVar5;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110b9b0c0);
  if ((int)plVar1 == 0) {
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9b0e0,0);
    bVar5 = (byte)plVar1;
  }
  else {
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9b0c0,1);
    bVar5 = (byte)plVar1 ^ 1;
  }
  *(byte *)(lVar7 + 0x29) = bVar5;
  lVar6 = *(long *)(*param_1 + 0x118);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110b9b100,0);
  *(char *)(lVar6 + 0x2a) = (char)plVar1;
  lVar6 = *(long *)(*param_1 + 0x118);
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110b9b120,0);
  *(char *)(lVar6 + 0x2b) = (char)param_2;
  *(undefined1 *)(*param_1 + 0x134) = 1;
  return;
}



/* Entry: 10a02f5d0; end: 10a02f82f;  */

void FUN_10a02f5d0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_140 [2];
  undefined *puStack_130;
  long alStack_128 [3];
  char *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010aa70acc();
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_enabled_110b9b140,*(undefined1 *)(param_1 + 0xe0));
  *(char *)(param_1 + 0xe0) = (char)plVar4;
  auStack_140[1] = *(undefined8 *)(param_1 + 0xf0);
  auStack_140[0] = *(undefined8 *)(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xf0) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0xf0) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  alStack_128[0] = 0xb;
  puStack_130 = &DAT_10f6326f2;
  alStack_128[2] = 0x2725f43d00000001;
  alStack_128[1] = 0x338f2540c5306152;
  uStack_108 = 4;
  pcStack_110 = "null";
  uStack_f8 = 0x13c72ce00000000;
  uStack_100 = 0x30c54e;
  uStack_e8 = *(undefined8 *)(param_1 + 0x100);
  uStack_f0 = *(undefined8 *)(param_1 + 0xf8);
  if (*(long *)(param_1 + 0x100) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x100) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_d8 = 2;
  puStack_e0 = &DAT_10f6327cc;
  uStack_c8 = 0x1049a10700000000;
  uStack_d0 = 0x247;
  uStack_b8 = 0xf;
  puStack_c0 = &DAT_10f6327cf;
  uStack_a8 = 0xeeda59d10054d518;
  uStack_b0 = 0x625e503152244389;
  lStack_98 = *(long *)(param_1 + 0x110);
  uStack_a0 = *(undefined8 *)(param_1 + 0x108);
  if (lStack_98 != 0) {
    plVar4 = (long *)(lStack_98 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = 0;
  uStack_88 = 7;
  puStack_90 = &DAT_10f415adf;
  uStack_78 = 0xcbcb67d300000000;
  uStack_80 = 0x135cf101213;
  uStack_68 = 4;
  pcStack_70 = "null";
  uStack_58 = 0x13c72ce00000000;
  uStack_60 = 0x30c54e;
  do {
    lVar6 = 0;
    do {
      lVar3 = lVar6 + lVar5 + -0x140;
      if (((*(long *)((long)alStack_128 + lVar3 + 0x140) != 4) ||
          (**(int **)((long)&puStack_130 + lVar3 + 0x140) != 0x6c6c756e)) &&
         (plVar4 = param_2,
         (**(code **)(*param_2 + 0x200))(param_2,(long)&puStack_130 + lVar3 + 0x140),
         (int)plVar4 != 0)) {
        (**(code **)(*param_2 + 0x210))(param_2,(long)&puStack_130 + lVar5 + lVar6);
        (**(code **)(**(long **)((long)auStack_140 + lVar5) + 0x48))
                  (*(long **)((long)auStack_140 + lVar5),param_2);
        (**(code **)(*param_2 + 0x220))(param_2);
        break;
      }
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != 0x40);
    lVar5 = lVar5 + 0x50;
    if (lVar5 == 0xf0) {
      lVar5 = 0xa0;
      do {
        func_0x00010a061814((long)auStack_140 + lVar5);
        lVar5 = lVar5 + -0x50;
      } while (lVar5 != -0x50);
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110b9b220);
      if (((ulong)plVar4 & 1) != 0) {
        (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110b9b220);
        (**(code **)(**(long **)(param_1 + 0x118) + 0x48))(*(long **)(param_1 + 0x118),param_2);
        (**(code **)(*param_2 + 0x220))(param_2);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a02f830; end: 10a02fd73;  */

/* WARNING: Removing unreachable block (ram,0x00010a02fae4) */
/* WARNING: Removing unreachable block (ram,0x00010a02fae8) */
/* WARNING: Removing unreachable block (ram,0x00010a02faf0) */
/* WARNING: Removing unreachable block (ram,0x00010a02faf8) */
/* WARNING: Removing unreachable block (ram,0x00010a02fafc) */
/* WARNING: Removing unreachable block (ram,0x00010a02f9cc) */
/* WARNING: Removing unreachable block (ram,0x00010a02f9d0) */
/* WARNING: Removing unreachable block (ram,0x00010a02f9d8) */
/* WARNING: Removing unreachable block (ram,0x00010a02f9e0) */
/* WARNING: Removing unreachable block (ram,0x00010a02f9e4) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa04) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa08) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa10) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa18) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa1c) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa3c) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa40) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa48) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa50) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa54) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa74) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa78) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa80) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa88) */
/* WARNING: Removing unreachable block (ram,0x00010a02fa8c) */
/* WARNING: Removing unreachable block (ram,0x00010a02faac) */
/* WARNING: Removing unreachable block (ram,0x00010a02fab0) */
/* WARNING: Removing unreachable block (ram,0x00010a02fab8) */
/* WARNING: Removing unreachable block (ram,0x00010a02fac0) */
/* WARNING: Removing unreachable block (ram,0x00010a02fac4) */
/* WARNING: Removing unreachable block (ram,0x00010a02fb1c) */
/* WARNING: Removing unreachable block (ram,0x00010a02fb20) */
/* WARNING: Removing unreachable block (ram,0x00010a02fb28) */
/* WARNING: Removing unreachable block (ram,0x00010a02fb30) */
/* WARNING: Removing unreachable block (ram,0x00010a02fb34) */
/* WARNING: Removing unreachable block (ram,0x00010a02fb58) */
/* WARNING: Removing unreachable block (ram,0x00010a02fb5c) */
/* WARNING: Removing unreachable block (ram,0x00010a02fb64) */
/* WARNING: Removing unreachable block (ram,0x00010a02fb6c) */
/* WARNING: Removing unreachable block (ram,0x00010a02fbbc) */
/* WARNING: Removing unreachable block (ram,0x00010a02fbd8) */

void FUN_10a02f830(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long alStack_100 [2];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_enabled_110b9b140,*(undefined1 *)(param_1 + 0xe0));
  uStack_118 = 0xb;
  puStack_120 = &DAT_10f6326f2;
  uStack_108 = 0x2725f43d00000001;
  uStack_110 = 0x338f2540c5306152;
  alStack_100[1] = *(undefined8 *)(param_1 + 0xf0);
  alStack_100[0] = *(long *)(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xf0) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0xf0) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_e8 = 2;
  puStack_f0 = &DAT_10f6327cc;
  uStack_d8 = 0x1049a10700000000;
  uStack_e0 = 0x247;
  uStack_c8 = *(undefined8 *)(param_1 + 0x100);
  uStack_d0 = *(undefined8 *)(param_1 + 0xf8);
  if (*(long *)(param_1 + 0x100) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x100) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_b8 = 7;
  puStack_c0 = &DAT_10f415adf;
  uStack_a8 = 0xcbcb67d300000000;
  uStack_b0 = 0x135cf101213;
  lStack_98 = *(long *)(param_1 + 0x110);
  uStack_a0 = *(undefined8 *)(param_1 + 0x108);
  if (lStack_98 != 0) {
    plVar1 = (long *)(lStack_98 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = 0;
  do {
    lVar5 = *(long *)((long)alStack_100 + lVar6);
    uStack_138 = 0;
    uStack_12c = 0;
    uStack_134 = 0;
    uStack_124 = 0;
    if (((((((((*(byte *)(lVar5 + 0x21) & 1) != 0) || (*(float *)(lVar5 + 0x24) != 1.0)) ||
            (*(float *)(lVar5 + 0x28) != 0.2)) ||
           ((*(float *)(lVar5 + 0x2c) != 0.0 || (*(float *)(lVar5 + 0x30) != 0.0)))) ||
          (*(float *)(lVar5 + 0x34) != 0.0)) ||
         (((*(float *)(lVar5 + 0x38) != 0.0 || (*(float *)(lVar5 + 0x3c) != 0.0)) ||
          ((*(float *)(lVar5 + 0x40) != 0.0 ||
           (((NAN(*(float *)(lVar5 + 0x44)) || (*(long *)(lVar5 + 0x48) != 0)) ||
            (*(long *)(lVar5 + 0x68) != 0)))))))) ||
        ((*(long *)(lVar5 + 0x88) != 0 || (*(long *)(lVar5 + 0x98) != 0)))) ||
       (*(long *)(lVar5 + 0xa8) != 0)) {
      uVar7 = 1;
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + 0xb8);
      func_0x00010a02d210(uVar4,*(undefined8 *)(lVar5 + 0xc0),0,0);
      uVar7 = (uint)uVar4 ^ 1;
    }
    FUN_10a0431a4(&uStack_138);
    if (uVar7 != 0) {
      (**(code **)(*param_2 + 0x18))(param_2,(long)&puStack_120 + lVar6);
      (**(code **)(**(long **)((long)alStack_100 + lVar6) + 0x50))
                (*(long **)((long)alStack_100 + lVar6),param_2);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    lVar6 = lVar6 + 0x30;
  } while (lVar6 != 0x90);
  lVar6 = 0x80;
  do {
    func_0x00010a061814((long)&puStack_120 + lVar6);
    lVar6 = lVar6 + -0x30;
  } while (lVar6 != -0x10);
  lVar6 = *(long *)(param_1 + 0x118);
  if (((((*(byte *)(lVar6 + 0x21) & 1) != 0) || (*(char *)(lVar6 + 0x2a) != '\0')) ||
      ((*(char *)(lVar6 + 0x2b) != '\0' ||
       ((((*(byte *)(lVar6 + 0x22) & 1) != 0 || ((*(byte *)(lVar6 + 0x23) & 1) != 0)) ||
        ((*(byte *)(lVar6 + 0x24) & 1) != 0)))))) ||
     ((((*(byte *)(lVar6 + 0x25) & 1) != 0 || ((*(byte *)(lVar6 + 0x26) & 1) != 0)) ||
      (((*(byte *)(lVar6 + 0x27) & 1) != 0 ||
       (((*(byte *)(lVar6 + 0x28) & 1) != 0 || (*(char *)(lVar6 + 0x29) != '\0')))))))) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110b9b220);
    (**(code **)(**(long **)(param_1 + 0x118) + 0x50))(*(long **)(param_1 + 0x118),param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



/* Entry: 10a02fd74; end: 10a02fecb;  */

undefined8 * FUN_10a02fd74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9a8f8;
  param_1[3] = &PTR_DAT_110b9a960;
  FUN_10a0431a4(param_1 + 0x17);
  FUN_10a0617bc(param_1 + 0x15);
  FUN_10a0617bc(param_1 + 0x13);
  func_0x00010a05248c(param_1 + 0x11);
  func_0x00010a05248c(param_1 + 0xf);
  func_0x00010a05248c(param_1 + 0xd);
  func_0x00010a05248c(param_1 + 0xb);
  func_0x00010a05248c(param_1 + 9);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a02fecc; end: 10a03002b;  */

bool FUN_10a02fecc(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *param_1;
  if (param_1[1] - lVar8 == param_2[1] - *param_2) {
    if (param_1[1] == lVar8) {
      bVar5 = true;
    }
    else {
      uVar9 = 0;
      do {
        plVar1 = (long *)(lVar8 + uVar9 * 0x10);
        plVar6 = (long *)plVar1[1];
        if (plVar6 == (long *)0x0) {
          lVar8 = 0;
          plVar6 = (long *)0x0;
        }
        else {
          __ZNSt3__119__shared_weak_count4lockEv();
          if (plVar6 == (long *)0x0) {
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar1;
          }
        }
        if ((ulong)(param_2[1] - *param_2 >> 4) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a03002c);
          (*pcVar4)();
        }
        plVar1 = (long *)(*param_2 + uVar9 * 0x10);
        plVar7 = (long *)plVar1[1];
        if ((plVar7 == (long *)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0)) {
          bVar5 = lVar8 == 0;
        }
        else {
          bVar5 = lVar8 == *plVar1;
          plVar1 = plVar7 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        if (bVar5 == false) {
          return false;
        }
        uVar9 = uVar9 + 1;
        lVar8 = *param_1;
      } while (uVar9 < (ulong)(param_1[1] - lVar8 >> 4));
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



/* Entry: 10a03002c; end: 10a0300fb;  */

void FUN_10a03002c(void)

{
  func_0x00010a02fe2c();
  return;
}



/* Entry: 10a0300fc; end: 10a03028f;  */

undefined8 FUN_10a0300fc(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_104 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  ppuStack_180 = &PTR_FUN_110b9ec48;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_138 = 1;
  uStack_120 = 0;
  plStack_118 = (long *)0x0;
  uStack_110 = 0;
  uStack_10c = 0x3f000000;
  uStack_108 = 0x40000000;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 1;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 1;
  uStack_60 = 0;
  func_0x00010a03009c(param_1,&ppuStack_180);
  ppuStack_180 = &PTR_FUN_110b9ec48;
  puStack_58 = &uStack_90;
  func_0x00010a04aad4(&puStack_58);
  puStack_58 = &uStack_a8;
  func_0x00010a04aad4(&puStack_58);
  puStack_58 = &uStack_e0;
  func_0x00010a04aad4(&puStack_58);
  puStack_58 = &uStack_f8;
  func_0x00010a04aad4(&puStack_58);
  plVar4 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar1 = plStack_118 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  puStack_58 = &uStack_150;
  func_0x00010a04aad4(&puStack_58);
  puStack_58 = &uStack_168;
  func_0x00010a04aad4(&puStack_58);
  return param_1;
}



/* Entry: 10a030290; end: 10a0303d7;  */

undefined8 * FUN_10a030290(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x1e;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x1b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x14;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x11;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0xc);
  puStack_28 = param_1 + 6;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 3;
  func_0x00010a04aad4(&puStack_28);
  return param_1;
}



/* Entry: 10a0303d8; end: 10a03066b;  */

void FUN_10a0303d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  code **unaff_x26;
  undefined8 auStack_160 [2];
  char cStack_149;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a03066c(param_3);
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x200))(param_1,param_2);
  if ((int)plVar2 != 0) {
    (**(code **)(*param_1 + 0x210))(param_1,param_2);
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x208))();
    if ((int)plVar2 != 0) {
      iVar5 = 0;
      unaff_x26 = &pcStack_108;
      do {
        (**(code **)(*param_1 + 0x218))(param_1,iVar5);
        pcStack_148 = FUN_10a06a7f8;
        ppuStack_140 = &PTR_FUN_110b9e070;
        pcStack_108 = FUN_10a06a7f8;
        ppuStack_100 = &PTR_FUN_110b9e070;
        uStack_b8 = CONCAT17(4,(undefined7)uStack_b8);
        uStack_c8 = CONCAT35(uStack_c8._5_3_,0x74736e69);
        pcStack_b0 = FUN_10a06a5b8;
        ppuStack_a8 = &PTR_FUN_110b9e058;
        puVar3 = (undefined8 *)0x58;
        uStack_138 = param_3;
        uStack_f8 = param_3;
        __Znwm();
        *puVar3 = FUN_10a06a7f8;
        puVar3[1] = &PTR_FUN_110b9e070;
        puVar3[2] = param_3;
        puVar3[9] = uStack_c0;
        puVar3[8] = uStack_c8;
        puVar3[10] = uStack_b8;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        puStack_a0 = puVar3;
        func_0x000107c2b054(auStack_160,&UNK_10f630f1d);
        (**(code **)(*param_1 + 0x250))(param_1,&PTR_DAT_110b9d490,&pcStack_b0,0,auStack_160);
        if (cStack_149 < '\0') {
          __ZdlPv(auStack_160[0]);
        }
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        if (uStack_b8 < 0) {
          __ZdlPv(uStack_c8);
        }
        (*(code *)*ppuStack_100)(&ppuStack_100);
        (*(code *)*ppuStack_140)(&ppuStack_140);
        (**(code **)(*param_1 + 0x220))(param_1);
        iVar5 = iVar5 + 1;
      } while ((int)plVar2 != iVar5);
    }
    (**(code **)(*param_1 + 0x220))();
    plVar2 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_100)(unaff_x26 + 1);
  (*(code *)*ppuStack_140)(&ppuStack_140);
  __Unwind_Resume();
  lVar1 = *plVar2;
  for (lVar4 = plVar2[1]; lVar4 != lVar1; lVar4 = lVar4 + -0x10) {
    if (*(long *)(lVar4 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  plVar2[1] = lVar1;
  return;
}



/* Entry: 10a03066c; end: 10a0306b3;  */

void FUN_10a03066c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a0306b4; end: 10a030aff;  */

void FUN_10a0306b4(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long alStack_f8 [8];
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  long *plStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110b9b240);
  if ((int)plVar6 == 0) {
    alStack_f8[7] = 0;
    alStack_f8[6] = 1;
    uStack_b8 = 0;
    uStack_b0 = 0;
    plStack_a8 = (long *)0x0;
    uStack_a0 = uStack_a0 & 0xffffff00;
    uStack_9c = 0x3f000000;
    uStack_98 = 0x40000000;
    uStack_94 = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    func_0x00010a04ab14(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    alStack_f8[1] = 0;
    alStack_f8[2] = 0;
    alStack_f8[0] = 0;
    func_0x00010a04ab14(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    alStack_f8[4] = 0;
    alStack_f8[5] = 0;
    alStack_f8[3] = 0;
    *(long *)(param_1 + 0x50) = alStack_f8[7];
    *(long *)(param_1 + 0x48) = alStack_f8[6];
    *(undefined4 *)(param_1 + 0x58) = uStack_b8;
    func_0x00010a015c50(param_1 + 0x60,&uStack_b0);
    plVar6 = plStack_a8;
    *(ulong *)(param_1 + 0x70) = CONCAT44(uStack_9c,uStack_a0);
    *(ulong *)(param_1 + 0x75) = CONCAT17(uStack_94,CONCAT43(uStack_98,uStack_9c._1_3_));
    if (plStack_a8 != (long *)0x0) {
      plVar3 = plStack_a8 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plStack_90 = alStack_f8 + 3;
    func_0x00010a04aad4(&plStack_90);
    plStack_90 = alStack_f8;
    func_0x00010a04aad4(&plStack_90);
  }
  else {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110b9b240);
    func_0x00010a03032c(param_2,param_1 + 0x10);
    uStack_88 = 0x10a06aa98;
    ppuStack_80 = &PTR_DAT_110b9e088;
    lStack_78 = param_1;
    FUN_10a02daf4(param_2,&PTR_DAT_110b9b320,&uStack_88,0);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9b340,*(undefined1 *)(param_1 + 0x70));
    *(undefined1 *)(param_1 + 0x70) = (char)plVar6;
    uVar7 = *(undefined4 *)(param_1 + 0x78);
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9b360);
    *(undefined4 *)(param_1 + 0x78) = uVar7;
    plVar6 = (long *)(param_1 + 0x74);
    uVar7 = *(undefined4 *)plVar6;
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110b9b380);
    *(undefined4 *)plVar6 = uVar7;
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110b9b260);
  if ((int)plVar3 == 0) {
    plVar6 = alStack_f8;
    alStack_f8[7] = 0;
    alStack_f8[6] = 1;
    uStack_b8 = 0;
    *(undefined2 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x82) = 0;
    func_0x00010a04ab14(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    alStack_f8[1] = 0;
    alStack_f8[2] = 0;
    alStack_f8[0] = 0;
    func_0x00010a04ab14(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    alStack_f8[4] = 0;
    alStack_f8[5] = 0;
    alStack_f8[3] = 0;
    *(long *)(param_1 + 0xc0) = alStack_f8[7];
    *(long *)(param_1 + 0xb8) = alStack_f8[6];
    *(undefined4 *)(param_1 + 200) = uStack_b8;
    plStack_90 = alStack_f8 + 3;
    func_0x00010a04aad4(&plStack_90);
    plStack_90 = plVar6;
    func_0x00010a04aad4(&plStack_90);
  }
  else {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110b9b260);
    func_0x00010a03032c(param_2,param_1 + 0x80);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110b9b3a0);
  if ((int)plVar3 == 0) {
    plVar6 = alStack_f8;
    alStack_f8[7] = 0;
    alStack_f8[6] = 1;
    uStack_b8 = 0;
    *(undefined2 *)(param_1 + 0xd0) = 0;
    *(undefined1 *)(param_1 + 0xd2) = 0;
    func_0x00010a04ab14(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    alStack_f8[1] = 0;
    alStack_f8[2] = 0;
    alStack_f8[0] = 0;
    func_0x00010a04ab14(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    alStack_f8[4] = 0;
    alStack_f8[5] = 0;
    alStack_f8[3] = 0;
    *(long *)(param_1 + 0x110) = alStack_f8[7];
    *(long *)(param_1 + 0x108) = alStack_f8[6];
    *(undefined4 *)(param_1 + 0x118) = uStack_b8;
    plStack_90 = alStack_f8 + 3;
    func_0x00010a04aad4(&plStack_90);
    plStack_90 = plVar6;
    func_0x00010a04aad4(&plStack_90);
  }
  else {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110b9b3a0);
    func_0x00010a03032c(param_2,param_1 + 0xd0);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  ppuVar4 = &PTR_DAT_110b9b3c0;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110b9b3c0,*(undefined1 *)(param_1 + 0x120));
  *(char *)(param_1 + 0x120) = (char)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(plVar6 + 1);
  __Unwind_Resume();
  (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110b9b240);
  (**(code **)(*ppuVar4 + 0x70))(ppuVar4,&PTR_DAT_110b9b280,(char)param_2[2]);
  (**(code **)(*ppuVar4 + 0x70))(ppuVar4,&PTR_DAT_110b9b2a0,*(undefined1 *)((long)param_2 + 0x11));
  (**(code **)(*ppuVar4 + 0x58))(ppuVar4,&PTR_DAT_110bd0108,param_2[9]);
  FUN_10a02e230(ppuVar4,&PTR_DAT_110b9b320,param_2 + 0xc,&UNK_10f633eab,0xe);
  (**(code **)(*ppuVar4 + 0x70))(ppuVar4,&PTR_DAT_110b9b340,(char)param_2[0xe]);
  (**(code **)(*ppuVar4 + 0x60))((int)param_2[0xf],ppuVar4,&PTR_DAT_110b9b360);
  (**(code **)(*ppuVar4 + 0x60))(*(undefined4 *)((long)param_2 + 0x74),ppuVar4,&PTR_DAT_110b9b380);
  (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
  (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110b9b260);
  (**(code **)(*ppuVar4 + 0x70))(ppuVar4,&PTR_DAT_110b9b280,(char)param_2[0x10]);
  (**(code **)(*ppuVar4 + 0x70))(ppuVar4,&PTR_DAT_110b9b2a0,*(undefined1 *)((long)param_2 + 0x81));
  (**(code **)(*ppuVar4 + 0x58))(ppuVar4,&PTR_DAT_110bd0108,param_2[0x17]);
  (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
  if (((*(byte *)(param_2 + 0x1a) & 1) != 0) || (*(char *)((long)param_2 + 0xd1) == '\x01')) {
    (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110b9b3a0);
    (**(code **)(*ppuVar4 + 0x70))(ppuVar4,&PTR_DAT_110b9b280,(char)param_2[0x1a]);
    (**(code **)(*ppuVar4 + 0x70))(ppuVar4,&PTR_DAT_110b9b2a0,*(undefined1 *)((long)param_2 + 0xd1))
    ;
    (**(code **)(*ppuVar4 + 0x58))(ppuVar4,&PTR_DAT_110bd0108,param_2[0x21]);
    (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a030d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar4 + 0x70))(ppuVar4,&PTR_DAT_110b9b3c0,(char)param_2[0x24]);
  return;
}



/* Entry: 10a030b00; end: 10a030d43;  */

void FUN_10a030b00(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110b9b240);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9b280,*(undefined1 *)(param_1 + 0x10));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9b2a0,*(undefined1 *)(param_1 + 0x11));
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd0108,*(undefined8 *)(param_1 + 0x48));
  FUN_10a02e230(param_2,&PTR_DAT_110b9b320,param_1 + 0x60,&UNK_10f633eab,0xe);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9b340,*(undefined1 *)(param_1 + 0x70));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x78),param_2,&PTR_DAT_110b9b360);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x74),param_2,&PTR_DAT_110b9b380);
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110b9b260);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9b280,*(undefined1 *)(param_1 + 0x80));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9b2a0,*(undefined1 *)(param_1 + 0x81));
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd0108,*(undefined8 *)(param_1 + 0xb8));
  (**(code **)(*param_2 + 0x20))(param_2);
  if (((*(byte *)(param_1 + 0xd0) & 1) != 0) || (*(char *)(param_1 + 0xd1) == '\x01')) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110b9b3a0);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9b280,*(undefined1 *)(param_1 + 0xd0));
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9b2a0,*(undefined1 *)(param_1 + 0xd1));
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd0108,*(undefined8 *)(param_1 + 0x108));
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a030d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110b9b3c0,*(undefined1 *)(param_1 + 0x120));
  return;
}



/* Entry: 10a030d44; end: 10a0310ab;  */

long * FUN_10a030d44(long param_1,long *param_2)

{
  long *plVar1;
  undefined1 *unaff_x21;
  undefined4 uVar2;
  undefined8 uStack_250;
  undefined **ppuStack_248;
  long lStack_240;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0xb;
  puStack_70 = &DAT_10f6327df;
  uStack_58 = 0x519f3f700000001;
  uStack_60 = 0x215450935f64148c;
  uStack_88 = 0xb;
  puStack_90 = &DAT_10f6327eb;
  uStack_78 = 0x5219f3f700000001;
  uStack_80 = 0x406730616c64148c;
  uStack_a8 = 0xc;
  puStack_b0 = &DAT_10f6327f7;
  uStack_98 = 0xaa2f19a400000048;
  uStack_a0 = 0x558914316c64148c;
  uStack_c8 = 0xd;
  puStack_d0 = &DAT_10f632804;
  uStack_b8 = 0x7c7855be00000316;
  uStack_c0 = 0xc5cf10122d64148c;
  uStack_e8 = 0xe;
  puStack_f0 = &DAT_10f632812;
  uStack_d8 = 0x351bc6a300051305;
  uStack_e0 = 0xd5cf10122d64148c;
  uStack_108 = 0xc;
  puStack_110 = &DAT_10f632821;
  uStack_f8 = 0x93c80eb700000041;
  uStack_100 = 0x87c316c32a64148c;
  uStack_128 = 0xd;
  puStack_130 = &DAT_10f63282e;
  uStack_118 = 0x2310c5a400000448;
  uStack_120 = 0x188316c32a64148c;
  uStack_148 = 0xf;
  puStack_150 = &DAT_10f63283c;
  uStack_138 = 0xded6b73801204e04;
  uStack_140 = 0xca850d23e064148c;
  uStack_168 = 0xc;
  puStack_170 = &DAT_10f63284c;
  uStack_158 = 0x9978b3bb0000004d;
  uStack_160 = 0x54f4a135f64148c;
  uStack_188 = 0xd;
  puStack_190 = &DAT_10f632859;
  uStack_178 = 0x6d77ffb700001341;
  uStack_180 = 0x53d284316c64148c;
  uStack_1a8 = 10;
  puStack_1b0 = &DAT_10f632867;
  uStack_198 = 0xbc0b3b8c00000000;
  uStack_1a0 = 0x38510426264148c;
  uStack_1c8 = 9;
  puStack_1d0 = &DAT_10f632872;
  uStack_1b8 = 0x870b3b8c00000000;
  uStack_1c0 = 0x558526d64148c;
  uStack_1e8 = 0xf;
  puStack_1f0 = &DAT_10f63287c;
  uStack_1d8 = 0xf33abe6001424d7c;
  uStack_1e0 = 0x43a318625e64148c;
  uStack_208 = 0xe;
  puStack_210 = &DAT_10f63288c;
  uStack_1f8 = 0x56145c1c0000c5b0;
  uStack_200 = 0x43a318625e64148c;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&puStack_70);
  if ((int)plVar1 != 0) {
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&puStack_70,*(undefined1 *)(param_1 + 0x10));
    *(undefined1 *)(param_1 + 0x10) = (char)plVar1;
    uStack_250 = 0x10a06aac8;
    ppuStack_248 = &PTR_DAT_110b9e0a0;
    lStack_240 = param_1;
    FUN_10a02daf4(param_2,&puStack_90,&uStack_250,0);
    (*(code *)*ppuStack_248)(&ppuStack_248);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&puStack_b0,*(undefined1 *)(param_1 + 0x11));
    *(undefined1 *)(param_1 + 0x11) = (char)plVar1;
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    (**(code **)(*param_2 + 0x48))(param_2,&puStack_110);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x74);
    (**(code **)(*param_2 + 0x48))(param_2,&puStack_130);
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&puStack_150,1);
    *(char *)(param_1 + 0x70) = (char)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&puStack_d0,*(undefined1 *)(param_1 + 0x81));
    *(undefined1 *)(param_1 + 0x81) = (char)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&puStack_f0,*(undefined1 *)(param_1 + 0x80));
    *(undefined1 *)(param_1 + 0x80) = (char)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&puStack_210,*(undefined1 *)(param_1 + 0xd1));
    *(undefined1 *)(param_1 + 0xd1) = (char)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&puStack_1f0,*(undefined1 *)(param_1 + 0xd0));
    *(undefined1 *)(param_1 + 0xd0) = (char)plVar1;
    unaff_x21 = (undefined1 *)(param_1 + 0x7c);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&puStack_1d0,*unaff_x21);
    *unaff_x21 = (char)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&puStack_170,0xffff);
    *(ushort *)(param_1 + 0x58) = (ushort)plVar1 & 0xfff;
    if (((ulong)plVar1 & 0xfff) == 0) {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&puStack_190,0xffff);
    if (((ulong)plVar1 & 0xfff) == 0) {
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    *(ushort *)(param_1 + 0x5a) = (ushort)plVar1 & 0xfff;
    (**(code **)(*param_2 + 0x58))(param_2,&puStack_1b0,*(undefined1 *)(param_1 + 0x120));
    *(char *)(param_1 + 0x120) = (char)param_2;
    plVar1 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_248)(unaff_x21 + 8);
  __Unwind_Resume(plVar1);
  return (long *)0x2000;
}



/* Entry: 10a0310ac; end: 10a03114f;  */

undefined8 FUN_10a0310ac(void)

{
  return 0x2000;
}



/* Entry: 10a031150; end: 10a0311ab;  */

void FUN_10a031150(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f630f1d;
  uStack_38 = 0;
  puStack_30 = &UNK_10f630f1d;
  uStack_28 = 0;
  uStack_20 = 0xf5;
  uStack_18 = 0xffffffff;
  FUN_10a0311ac(param_1,&uStack_58);
  FUN_10a06abf4();
  return;
}



/* Entry: 10a0311ac; end: 10a031283;  */

/* WARNING: Removing unreachable block (ram,0x00010a031244) */

undefined1  [16] FUN_10a0311ac(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6340a7,0x1d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a06aaf8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a031284; end: 10a03131f;  */

void FUN_10a031284(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a031320; end: 10a03137b;  */

void FUN_10a031320(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f630f1d;
  uStack_38 = 0;
  puStack_30 = &UNK_10f630f1d;
  uStack_28 = 0;
  uStack_20 = 0xf5;
  uStack_18 = 0xffffffff;
  FUN_10a03137c(param_1,&uStack_58);
  FUN_10a06adac();
  return;
}



/* Entry: 10a03137c; end: 10a031453;  */

/* WARNING: Removing unreachable block (ram,0x00010a031414) */

undefined1  [16] FUN_10a03137c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6340c5,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a06acb0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a031454; end: 10a0314e7;  */

void FUN_10a031454(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a0314e8; end: 10a03163b;  */

void FUN_10a0314e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f6328bd,0x15);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,4);
  puStack_80 = &UNK_10f630f1d;
  uStack_78 = 0;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_60 = 0x16b00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a03163c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6328d3;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a06af64();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6328db;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a06b0d8(uVar1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6328e2;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a06b24c(uVar1,&puStack_98);
  FUN_10a06b35c(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a03163c; end: 10a031713;  */

/* WARNING: Removing unreachable block (ram,0x00010a0316d4) */

undefined1  [16] FUN_10a03163c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6340dd,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a06ae68(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a031714; end: 10a0317ef;  */

undefined8 * FUN_10a031714(undefined8 *param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    uVar1 = *(uint *)((long)param_1 + 0x1c);
    if (uVar1 < 6) {
      uVar3 = *(undefined8 *)(&UNK_10e492f48 + (ulong)uVar1 * 8);
      puVar4 = (&PTR_DAT_110b9fe88)[uVar1];
    }
    else {
      puVar4 = &UNK_10f6340ec;
      uVar3 = 9;
    }
    FUN_10ae03140(0,puVar4,uVar3);
    ppuVar2 = &PTR_PTR_1132ff660;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar2,&PTR_PTR_1132ff660);
    if (*(char *)(param_1 + 3) == '\x01') {
      *(undefined1 *)(param_1 + 3) = 0;
      func_0x00010a031808(param_1[4]);
    }
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a0317f0; end: 10a0317f3;  */

undefined8 * FUN_10a0317f0(undefined8 *param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    uVar1 = *(uint *)((long)param_1 + 0x1c);
    if (uVar1 < 6) {
      uVar3 = *(undefined8 *)(&UNK_10e492f48 + (ulong)uVar1 * 8);
      puVar4 = (&PTR_DAT_110b9fe88)[uVar1];
    }
    else {
      puVar4 = &UNK_10f6340ec;
      uVar3 = 9;
    }
    FUN_10ae03140(0,puVar4,uVar3);
    ppuVar2 = &PTR_PTR_1132ff660;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar2,&PTR_PTR_1132ff660);
    if (*(char *)(param_1 + 3) == '\x01') {
      *(undefined1 *)(param_1 + 3) = 0;
      func_0x00010a031808(param_1[4]);
    }
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a0317f4; end: 10a03186f;  */

void FUN_10a0317f4(void)

{
  FUN_10a031714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a031870; end: 10a031a83;  */

void FUN_10a031870(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_78 = 0x4ffffffff;
  uStack_80 = 0x100000019;
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Category";
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "AudioPlayback";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a031a84(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Call";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a031a84();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Navigation";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a031a84();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Network";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a031a84();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "VideoPlayback";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a031a84();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "ShortTask";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a031a84();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a031a84; end: 10a031bef;  */

undefined8 * FUN_10a031a84(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a031b28);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a031bf0; end: 10a031cc7;  */

/* WARNING: Removing unreachable block (ram,0x00010a031c88) */

undefined1  [16] FUN_10a031bf0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6340f6,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a06b418(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a031cc8; end: 10a031fdb;  */

/* WARNING: Removing unreachable block (ram,0x00010a031dc4) */
/* WARNING: Removing unreachable block (ram,0x00010a031dc8) */
/* WARNING: Removing unreachable block (ram,0x00010a031dd0) */
/* WARNING: Removing unreachable block (ram,0x00010a031dd8) */
/* WARNING: Removing unreachable block (ram,0x00010a031de4) */
/* WARNING: Removing unreachable block (ram,0x00010a031dec) */
/* WARNING: Removing unreachable block (ram,0x00010a031df4) */
/* WARNING: Removing unreachable block (ram,0x00010a031df8) */
/* WARNING: Removing unreachable block (ram,0x00010a031f0c) */
/* WARNING: Removing unreachable block (ram,0x00010a031f10) */
/* WARNING: Removing unreachable block (ram,0x00010a031f18) */
/* WARNING: Removing unreachable block (ram,0x00010a031f20) */
/* WARNING: Removing unreachable block (ram,0x00010a031f2c) */
/* WARNING: Removing unreachable block (ram,0x00010a031f34) */
/* WARNING: Removing unreachable block (ram,0x00010a031f3c) */
/* WARNING: Removing unreachable block (ram,0x00010a031f40) */

void FUN_10a031cc8(long *param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plStack_70;
  long *plStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  if ((*(byte *)((long)param_1 + 0xc) & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0xc) = 1;
    ppuVar7 = &PTR_PTR_1132ff6f0;
    FUN_10ae079a0(0,&PTR_PTR_1132ff6f0);
    FUN_10ae07cd4(ppuVar7,&PTR_PTR_1132ff6f0);
    lVar8 = *(long *)(*param_1 + 0x100);
    puVar1 = (undefined8 *)(lVar8 + 0x28);
    puVar3 = puVar1;
    if (*(char *)(lVar8 + 0xe0) == '\0') {
      puVar3 = (undefined8 *)0x0;
    }
    plVar11 = *(long **)(lVar8 + 0x38);
    plStack_68 = (long *)0x0;
    if (plVar11 == (long *)0x0) {
      plStack_70 = (long *)0xc0;
      __Znwm();
      plStack_70[2] = 0;
      plStack_70[1] = 0x200000006;
      *(undefined2 *)(plStack_70 + 3) = 4;
      plStack_70[5] = 0;
      plStack_70[4] = 0;
      plStack_70[7] = 0;
      plStack_70[6] = 0;
      plStack_70[9] = 0;
      plStack_70[8] = 0;
      plStack_70[0xb] = 0;
      plStack_70[10] = 0;
      plStack_70[0xd] = 0;
      plStack_70[0xc] = 0;
      plStack_70[0xf] = 0;
      plStack_70[0xe] = 0;
      plStack_70[0x10] = 0;
      plStack_70[0x11] = (long)(plStack_70 + 3);
      plStack_70[0x12] = 0;
      *(undefined2 *)(plStack_70 + 0x13) = 0;
      *plStack_70 = (long)&PTR_DAT_110b9d4f8;
      plVar10 = plStack_70 + 0x14;
      *plVar10 = (long)param_1;
      *(undefined1 *)(plStack_70 + 0x16) = 1;
      plStack_70[0x17] = 0;
      pcStack_60 = FUN_10a04ab7c;
      plStack_68 = plStack_70;
    }
    else {
      pcStack_58 = (code *)0x0;
      (**(code **)(*plVar11 + 0x28))(plVar11,0,&pcStack_58);
      if (pcStack_58 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a031fb8);
        (*pcVar6)();
      }
      plStack_70 = (long *)0xc8;
      __Znwm();
      plStack_70[2] = 0;
      plStack_70[1] = 0x200000006;
      *(undefined2 *)(plStack_70 + 3) = 4;
      plStack_70[5] = 0;
      plStack_70[4] = 0;
      plStack_70[7] = 0;
      plStack_70[6] = 0;
      plStack_70[9] = 0;
      plStack_70[8] = 0;
      plStack_70[0xb] = 0;
      plStack_70[10] = 0;
      plStack_70[0xd] = 0;
      plStack_70[0xc] = 0;
      plStack_70[0xf] = 0;
      plStack_70[0xe] = 0;
      plStack_70[0x10] = 0;
      plStack_70[0x11] = (long)(plStack_70 + 3);
      plStack_70[0x12] = 0;
      *(undefined2 *)(plStack_70 + 0x13) = 0;
      plVar10 = plStack_70 + 0x14;
      *plVar10 = (long)param_1;
      *plStack_70 = (long)&PTR_FUN_110b9d4c0;
      *(undefined1 *)(plStack_70 + 0x16) = 1;
      plStack_70[0x17] = 0;
      plStack_70[0x18] = (long)plVar11;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
      }
      pcStack_60 = (code *)0x10a04ab4c;
      plStack_68 = plStack_70;
      __ZNSt13exception_ptrD1Ev(&pcStack_58);
    }
    if (plVar10[3] != 0) {
      func_0x0001092b4274();
    }
    plVar10[3] = (long)plStack_68;
    plStack_68 = (long *)0x0;
    pcStack_58 = pcStack_60;
    plStack_50 = plVar10;
    puStack_48 = puVar3;
    (**(code **)*puVar1)(puVar1,&pcStack_58);
    if (plStack_68 != (long *)0x0) {
      func_0x0001092b4274(&plStack_68);
    }
    if (plStack_70 != (long *)0x0) {
      puVar2 = (ulong *)(plStack_70 + 1);
      do {
        uVar9 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar9 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar9 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plStack_70 + 8))(plStack_70);
        }
      }
    }
  }
  return;
}



/* Entry: 10a031fdc; end: 10a032123;  */

long **** FUN_10a031fdc(long ****param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  long ****pppplVar1;
  char cVar2;
  bool bVar3;
  long ***ppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long ***ppplStack_58;
  undefined8 uStack_50;
  long ***ppplStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_48 = (long ***)param_2[1];
  uStack_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  plStack_70 = (long *)0x0;
  FUN_10a04ae84(&plStack_70,&uStack_50,auStack_40,1);
  FUN_10a10f1dc(param_1,&plStack_70,1);
  pppplVar5 = &ppplStack_58;
  ppplStack_58 = (long ***)&plStack_70;
  FUN_10a04afa0();
  ppplVar4 = ppplStack_48;
  if ((long ****)ppplStack_48 != (long ****)0x0) {
    pppplVar1 = (long ****)(ppplStack_48 + 1);
    do {
      ppplVar6 = *pppplVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar3) {
        *pppplVar1 = (long ***)((long)ppplVar6 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppplVar6 == (long ***)0x0) {
      (*(code *)(*ppplStack_48)[2])(ppplStack_48);
      pppplVar5 = (long ****)ppplVar4;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = (long ***)&PTR_FUN_110b9b838;
  param_1[3] = (long ***)&PTR_DAT_110b9b8a0;
  param_1[0xd] = (long ***)0x0;
  param_1[0xe] = (long ***)0x0;
  param_1[0xc] = (long ***)0x0;
  ppplVar6 = (long ***)*param_3;
  param_1[0xd] = (long ***)param_3[1];
  param_1[0xc] = ppplVar6;
  param_1[0xe] = (long ***)param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 0xf) = param_4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  ppplStack_58 = ppplVar4;
  FUN_10a04afa0(&ppplStack_58);
  func_0x00010a06b8b0(&uStack_50);
  __Unwind_Resume();
  *pppplVar5 = (long ***)&PTR_FUN_110b9b838;
  pppplVar5[3] = (long ***)&PTR_DAT_110b9b8a0;
  if (pppplVar5[0xc] != (long ***)0x0) {
    pppplVar5[0xd] = pppplVar5[0xc];
    __ZdlPv();
  }
  FUN_10a04b010(pppplVar5 + 3);
  *pppplVar5 = (long ***)&PTR_DAT_110b17898;
  func_0x00010a004dac(pppplVar5 + 1);
  return pppplVar5;
}



/* Entry: 10a032124; end: 10a032187;  */

undefined8 * FUN_10a032124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9b838;
  param_1[3] = &PTR_DAT_110b9b8a0;
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  FUN_10a04b010(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a032188; end: 10a032193;  */

undefined8 * FUN_10a032188(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9b838;
  param_1[3] = &PTR_DAT_110b9b8a0;
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  FUN_10a04b010(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a032194; end: 10a0321bf;  */

void FUN_10a032194(void)

{
  FUN_10a032124();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0321c0; end: 10a03220f;  */

void FUN_10a0321c0(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (param_3 == 0) break;
    unaff_x30 = FUN_10a032210;
    FUN_10a00946c(&UNK_10f63295b);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_1 = extraout_x8;
  }
  func_0x00010a06b908((undefined1 *)((long)register0x00000008 + -0x30));
  lVar2 = *(long *)((long)register0x00000008 + -0x28);
  lVar1 = 0;
  if (*(long *)((long)register0x00000008 + -0x30) != 0) {
    lVar1 = *(long *)((long)register0x00000008 + -0x30) + 0x18;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return;
}



/* Entry: 10a032210; end: 10a032213;  */

void FUN_10a032210(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (param_3 == 0) break;
    unaff_x30 = FUN_10a032210;
    FUN_10a00946c(&UNK_10f63295b);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_1 = extraout_x8;
  }
  func_0x00010a06b908((undefined1 *)((long)register0x00000008 + -0x30));
  lVar2 = *(long *)((long)register0x00000008 + -0x28);
  lVar1 = 0;
  if (*(long *)((long)register0x00000008 + -0x30) != 0) {
    lVar1 = *(long *)((long)register0x00000008 + -0x30) + 0x18;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return;
}



/* Entry: 10a032214; end: 10a0323bf;  */

void FUN_10a032214(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined2 uStack_40;
  char cStack_31;
  
  *param_1 = 0x546f546567616d49;
  *(undefined4 *)(param_1 + 1) = 0x6f736e65;
  *(undefined2 *)((long)param_1 + 0xc) = 0x72;
  *(undefined1 *)((long)param_1 + 0x17) = 0xd;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  if (*(undefined4 **)(param_2 + 0x68) != *(undefined4 **)(param_2 + 0x60)) {
    FUN_10a0323c0(param_3,param_4,param_1,"height",6,**(undefined4 **)(param_2 + 0x60));
    if (4 < (ulong)(*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60))) {
      FUN_10a0323c0(param_3,param_4,param_1,"width",5,*(undefined4 *)(*(long *)(param_2 + 0x60) + 4)
                   );
      if (8 < (ulong)(*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60))) {
        FUN_10a0323c0(param_3,param_4,param_1,&UNK_10f41549f,8,
                      *(undefined4 *)(*(long *)(param_2 + 0x60) + 8));
        uVar1 = *(undefined4 *)(param_2 + 0x78);
        func_0x000109a21d80(&uStack_48,param_4);
        uStack_4c = uVar1;
        FUN_10a032ebc(param_3,&uStack_48,&uStack_4c);
        if (cStack_31 < '\0') {
          __ZdlPv(uStack_48);
        }
        cStack_31 = '\t';
        uStack_40 = 0x65;
        uStack_48 = 0x7079745f61746164;
        FUN_10a032e10(param_1,&uStack_48,param_3 & 0xffffffff);
        if (cStack_31 < '\0') {
          __ZdlPv(uStack_48);
        }
        return;
      }
    }
  }
  FUN_10a04b1c0();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a032390);
  (*pcVar2)();
}



/* Entry: 10a0323c0; end: 10a0324eb;  */

void FUN_10a0323c0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined4 param_6)

{
  undefined8 ***pppuVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 *extraout_x8;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  char cStack_b1;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  ulong auStack_58 [2];
  char cStack_41;
  
  func_0x000109a21d80(auStack_58,param_2);
  puVar4 = auStack_58;
  puVar8 = &uStack_5c;
  uStack_5c = param_6;
  FUN_10a032ebc(param_1,puVar4,puVar8);
  uVar6 = param_1;
  if (cStack_41 < '\0') {
    __ZdlPv();
    uVar6 = auStack_58[0];
  }
  if (0x7ffffffffffffff7 < param_5) {
    func_0x000109ffde50();
    if ((long)uStack_68 < 0) {
      __ZdlPv(ppuStack_78);
    }
    uVar7 = uVar6;
    __Unwind_Resume();
    pcStack_88 = FUN_10a0324ec;
    *extraout_x8 = 0x546f546567616d49;
    *(undefined4 *)(extraout_x8 + 1) = 0x6f736e65;
    *(undefined2 *)((long)extraout_x8 + 0xc) = 0x72;
    *(undefined1 *)((long)extraout_x8 + 0x17) = 0xd;
    extraout_x8[4] = 0;
    extraout_x8[5] = 0;
    extraout_x8[3] = 0;
    uStack_b0 = param_1;
    uStack_a8 = param_4;
    uStack_a0 = param_5;
    uStack_98 = uVar6;
    puStack_90 = &stack0xfffffffffffffff0;
    if (*(undefined4 **)(uVar7 + 0x50) != *(undefined4 **)(uVar7 + 0x48)) {
      FUN_10a0323c0(puVar4,puVar8,extraout_x8,"height",6,**(undefined4 **)(uVar7 + 0x48));
      if (4 < (ulong)(*(long *)(uVar7 + 0x50) - *(long *)(uVar7 + 0x48))) {
        FUN_10a0323c0(puVar4,puVar8,extraout_x8,"width",5,
                      *(undefined4 *)(*(long *)(uVar7 + 0x48) + 4));
        if (8 < (ulong)(*(long *)(uVar7 + 0x50) - *(long *)(uVar7 + 0x48))) {
          FUN_10a0323c0(puVar4,puVar8,extraout_x8,&UNK_10f41549f,8,
                        *(undefined4 *)(*(long *)(uVar7 + 0x48) + 8));
          uVar2 = *(undefined4 *)(uVar7 + 0x60);
          func_0x000109a21d80(&uStack_c8,puVar8);
          uStack_cc = uVar2;
          FUN_10a032ebc(puVar4,&uStack_c8,&uStack_cc);
          if (cStack_b1 < '\0') {
            __ZdlPv(uStack_c8);
          }
          cStack_b1 = '\t';
          uStack_c0 = 0x65;
          uStack_c8 = 0x7079745f61746164;
          FUN_10a032e10(extraout_x8,&uStack_c8,(ulong)puVar4 & 0xffffffff);
          if (cStack_b1 < '\0') {
            __ZdlPv(uStack_c8);
          }
          return;
        }
      }
    }
    FUN_10a04b1c0();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a032390);
    (*pcVar3)();
  }
  if (param_5 < 0x17) {
    uStack_68 = CONCAT17((char)param_5,(undefined7)uStack_68);
    pppuVar5 = &ppuStack_78;
    if (param_5 == 0) goto LAB_10a03247c;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((param_5 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((param_5 | 7) + 1);
    }
    pppuVar5 = pppuVar1;
    __Znwm();
    uStack_68 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_78 = pppuVar5;
    uStack_70 = param_5;
  }
  _memmove(pppuVar5,param_4,param_5);
LAB_10a03247c:
  *(undefined1 *)((long)pppuVar5 + param_5) = 0;
  FUN_10a032e10(param_3,&ppuStack_78,param_1 & 0xffffffff);
  if ((long)uStack_68 < 0) {
    __ZdlPv(ppuStack_78);
  }
  return;
}



/* Entry: 10a0324ec; end: 10a03254b;  */

void FUN_10a0324ec(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined2 uStack_40;
  char cStack_31;
  
  *param_1 = 0x546f546567616d49;
  *(undefined4 *)(param_1 + 1) = 0x6f736e65;
  *(undefined2 *)((long)param_1 + 0xc) = 0x72;
  *(undefined1 *)((long)param_1 + 0x17) = 0xd;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  if (*(undefined4 **)(param_2 + 0x50) != *(undefined4 **)(param_2 + 0x48)) {
    FUN_10a0323c0(param_3,param_4,param_1,"height",6,**(undefined4 **)(param_2 + 0x48));
    if (4 < (ulong)(*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48))) {
      FUN_10a0323c0(param_3,param_4,param_1,"width",5,*(undefined4 *)(*(long *)(param_2 + 0x48) + 4)
                   );
      if (8 < (ulong)(*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48))) {
        FUN_10a0323c0(param_3,param_4,param_1,&UNK_10f41549f,8,
                      *(undefined4 *)(*(long *)(param_2 + 0x48) + 8));
        uVar1 = *(undefined4 *)(param_2 + 0x60);
        func_0x000109a21d80(&uStack_48,param_4);
        uStack_4c = uVar1;
        FUN_10a032ebc(param_3,&uStack_48,&uStack_4c);
        if (cStack_31 < '\0') {
          __ZdlPv(uStack_48);
        }
        cStack_31 = '\t';
        uStack_40 = 0x65;
        uStack_48 = 0x7079745f61746164;
        FUN_10a032e10(param_1,&uStack_48,param_3 & 0xffffffff);
        if (cStack_31 < '\0') {
          __ZdlPv(uStack_48);
        }
        return;
      }
    }
  }
  FUN_10a04b1c0();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a032390);
  (*pcVar2)();
}



/* Entry: 10a03254c; end: 10a032813;  */

void FUN_10a03254c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&UNK_10f632981,0xf);
  FUN_10a003e74(param_1,&UNK_10f632991,8);
  func_0x000109887da8(appuStack_c8,&UNK_10f6329f2,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c638;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x16f;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110b9c638;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110ba7678;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a06ba2c,1,1);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a0327f4;
    FUN_10a054dac(param_1,&UNK_10f63299a,FUN_10a06c1cc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a0327f4;
    FUN_10a054dac(param_1,&UNK_10f6329a3,FUN_10a06c3e0,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6329f2,0xd);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a0327f4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0327f8);
  (*pcVar6)();
}



/* Entry: 10a032814; end: 10a03288f;  */

undefined8 * FUN_10a032814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9b8d0;
  param_1[3] = &PTR_DAT_110b9b938;
  func_0x000109240b0c(param_1 + 0x16);
  func_0x000109240b0c(param_1 + 0x11);
  FUN_10a06c570(param_1 + 0xf);
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  FUN_10a04b010(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a032890; end: 10a03289b;  */

undefined8 * FUN_10a032890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9b8d0;
  param_1[3] = &PTR_DAT_110b9b938;
  func_0x000109240b0c(param_1 + 0x16);
  func_0x000109240b0c(param_1 + 0x11);
  FUN_10a06c570(param_1 + 0xf);
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  FUN_10a04b010(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a03289c; end: 10a0328c7;  */

void FUN_10a03289c(void)

{
  FUN_10a032814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0328c8; end: 10a032947;  */

void FUN_10a0328c8(long *param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x00010a06b908(&lStack_30);
  lVar1 = 0;
  if (lStack_30 != 0) {
    lVar1 = lStack_30 + 0x18;
  }
  *param_1 = lVar1;
  param_1[1] = lStack_28;
  return;
}



/* Entry: 10a032948; end: 10a032a77;  */

ulong FUN_10a032948(long *param_1,ulong param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 auStack_90 [24];
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar8 = param_2 + 0x88;
  func_0x0001099ae6c8();
  if (lVar8 == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_90,&UNK_10f6329ad,param_2 + 0x60);
    FUN_10a012db0(auStack_78,auStack_90,&UNK_10f6329bd);
    uVar1 = param_3[1];
    puVar5 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar5 = param_3;
    }
    puVar9 = auStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar9,puVar5,uVar1);
    uStack_58 = puVar9[1];
    uStack_60 = *puVar9;
    uStack_50 = puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    FUN_10a012db0(auStack_48,&uStack_60,&DAT_10f638984);
    FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a032a14);
    (*pcVar6)();
  }
  plVar10 = *(long **)(lVar8 + 0x28);
  if ((long *)(*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 4) <= plVar10) {
    func_0x000105688514(&UNK_10f59499e);
    if (param_4 == 0xc) {
      bVar7 = false;
      if (*plVar10 == 0x624f747069726353) {
        bVar7 = (int)plVar10[1] == 0x7463656a;
      }
    }
    else {
      if (param_4 != 6) {
        return 0;
      }
      bVar7 = (int)*plVar10 == 0x7074754f && *(short *)((long)plVar10 + 4) == 0x7475;
    }
    return (ulong)bVar7;
  }
  plVar10 = (long *)(*(long *)(param_2 + 0x30) + (long)plVar10 * 0x10);
  lVar8 = *plVar10;
  lVar3 = plVar10[1];
  if (lVar3 != 0) {
    plVar10 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar2 = 0;
  if (lVar8 != 0) {
    lVar2 = lVar8 + -0x18;
  }
  *param_1 = lVar2;
  param_1[1] = lVar3;
  return param_2;
}



/* Entry: 10a032a78; end: 10a032bbf;  */

void FUN_10a032a78(long *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_90 [24];
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  
  lVar4 = param_2 + 0xb0;
  func_0x000109240a28();
  if (lVar4 == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_90,&UNK_10f6329ad,param_2 + 0x60);
    FUN_10a012db0(auStack_78,auStack_90,&UNK_10f6329d7);
    uVar1 = param_3[1];
    puVar2 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar2 = param_3;
    }
    puVar5 = auStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puVar2,uVar1);
    uStack_58 = puVar5[1];
    uStack_60 = *puVar5;
    uStack_50 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a012db0(&lStack_48,&uStack_60,&DAT_10f638984);
    FUN_10a0029c0(&lStack_48);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a032b5c);
    (*pcVar3)();
  }
  func_0x000109a22a14(&lStack_48,param_2 + 0x18,*(undefined8 *)(lVar4 + 0x28));
  lVar4 = 0;
  if (lStack_48 != 0) {
    lVar4 = lStack_48 + -0x18;
  }
  *param_1 = lVar4;
  param_1[1] = lStack_40;
  return;
}



/* Entry: 10a032bc0; end: 10a032e0f;  */

void FUN_10a032bc0(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined5 uStack_220;
  undefined3 uStack_21b;
  undefined5 uStack_218;
  undefined1 uStack_213;
  char cStack_209;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined2 uStack_1fc;
  undefined2 uStack_1fa;
  char cStack_1e9;
  undefined1 auStack_1e8 [56];
  undefined1 auStack_1b0 [32];
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined **appuStack_178 [5];
  undefined1 auStack_150 [200];
  undefined1 auStack_88 [56];
  
  *param_1 = 0x636e657265666e49;
  *(undefined2 *)(param_1 + 1) = 0x65;
  *(undefined1 *)((long)param_1 + 0x17) = 9;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_109d2f334(appuStack_178,*(undefined8 *)(param_2 + 0x78));
  func_0x000109a21d80(auStack_190,param_4);
  FUN_109d2f4b4(auStack_1b0,appuStack_178);
  func_0x000107c31558(auStack_1e8,0,auStack_88);
  uVar1 = param_3;
  func_0x000109a2331c(param_3,auStack_190,auStack_1b0,auStack_1e8);
  func_0x000107c3155c(auStack_1e8);
  func_0x000109a1cb94(auStack_1b0);
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  cStack_1e9 = '\x05';
  uStack_200 = 0x65646f6d;
  uStack_1fc = 0x6c;
  FUN_10a032e10(param_1,&uStack_200,uVar1 & 0xffffffff);
  if (cStack_1e9 < '\0') {
    __ZdlPv(CONCAT26(uStack_1fa,CONCAT24(uStack_1fc,uStack_200)));
  }
  func_0x000109a21d80(auStack_190,param_4);
  uStack_204 = *(undefined4 *)(param_2 + 0xd8);
  FUN_10a032ebc(param_3,auStack_190,&uStack_204);
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  cStack_209 = '\r';
  uStack_220 = 0x75706d6f63;
  uStack_21b = 0x5f6574;
  uStack_218 = 0x7374696e75;
  uStack_213 = 0;
  FUN_10a032e10(param_1,&uStack_220,param_3 & 0xffffffff);
  if (cStack_209 < '\0') {
    __ZdlPv(CONCAT35(uStack_21b,uStack_220));
  }
  appuStack_178[0] = &PTR_FUN_110b3fa18;
  func_0x000107c3155c(auStack_88);
  func_0x000109a1ab0c(auStack_150);
  FUN_109d2f478(appuStack_178);
  return;
}



/* Entry: 10a032e10; end: 10a032ebb;  */

long FUN_10a032e10(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined4 uStack_28;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  lStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 < *(undefined8 **)(param_1 + 0x28)) {
    puVar1[2] = lStack_30;
    puVar1[1] = uStack_38;
    *puVar1 = uStack_40;
    *(undefined4 *)(puVar1 + 3) = param_3;
    *(undefined8 **)(param_1 + 0x20) = puVar1 + 4;
  }
  else {
    lVar2 = param_1 + 0x18;
    uStack_28 = param_3;
    FUN_10a04b3c4(lVar2,&uStack_40);
    *(long *)(param_1 + 0x20) = lVar2;
    if (lStack_30 < 0) {
      __ZdlPv(uStack_40);
    }
  }
  return param_1;
}



/* Entry: 10a032ebc; end: 10a032f1f;  */

undefined8 FUN_10a032ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [48];
  
  FUN_10a06c5c8(auStack_50,param_2,param_3);
  func_0x000109a22f0c(param_1,auStack_50);
  func_0x000109a1ce74(auStack_50);
  return param_1;
}



/* Entry: 10a032f20; end: 10a032f9f;  */

void FUN_10a032f20(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined5 uStack_220;
  undefined3 uStack_21b;
  undefined5 uStack_218;
  undefined1 uStack_213;
  char cStack_209;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined2 uStack_1fc;
  undefined2 uStack_1fa;
  char cStack_1e9;
  undefined1 auStack_1e8 [56];
  undefined1 auStack_1b0 [32];
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined **appuStack_178 [5];
  undefined1 auStack_150 [200];
  undefined1 auStack_88 [56];
  
  *param_1 = 0x636e657265666e49;
  *(undefined2 *)(param_1 + 1) = 0x65;
  *(undefined1 *)((long)param_1 + 0x17) = 9;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_109d2f334(appuStack_178,*(undefined8 *)(param_2 + 0x60));
  func_0x000109a21d80(auStack_190,param_4);
  FUN_109d2f4b4(auStack_1b0,appuStack_178);
  func_0x000107c31558(auStack_1e8,0,auStack_88);
  uVar1 = param_3;
  func_0x000109a2331c(param_3,auStack_190,auStack_1b0,auStack_1e8);
  func_0x000107c3155c(auStack_1e8);
  func_0x000109a1cb94(auStack_1b0);
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  cStack_1e9 = '\x05';
  uStack_200 = 0x65646f6d;
  uStack_1fc = 0x6c;
  FUN_10a032e10(param_1,&uStack_200,uVar1 & 0xffffffff);
  if (cStack_1e9 < '\0') {
    __ZdlPv(CONCAT26(uStack_1fa,CONCAT24(uStack_1fc,uStack_200)));
  }
  func_0x000109a21d80(auStack_190,param_4);
  uStack_204 = *(undefined4 *)(param_2 + 0xc0);
  FUN_10a032ebc(param_3,auStack_190,&uStack_204);
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  cStack_209 = '\r';
  uStack_220 = 0x75706d6f63;
  uStack_21b = 0x5f6574;
  uStack_218 = 0x7374696e75;
  uStack_213 = 0;
  FUN_10a032e10(param_1,&uStack_220,param_3 & 0xffffffff);
  if (cStack_209 < '\0') {
    __ZdlPv(CONCAT35(uStack_21b,uStack_220));
  }
  appuStack_178[0] = &PTR_FUN_110b3fa18;
  func_0x000107c3155c(auStack_88);
  func_0x000109a1ab0c(auStack_150);
  FUN_109d2f478(appuStack_178);
  return;
}



/* Entry: 10a032fa0; end: 10a0332b3;  */

void FUN_10a032fa0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&UNK_10f632981,0xf);
  FUN_10a003e74(param_1,&UNK_10f632991,8);
  FUN_10a003e74(param_1,&UNK_10f6329f2,0xd);
  func_0x000109887da8(appuStack_c8,&DAT_10f6341ba,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c6a8;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x16f;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110b9c6a8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a06c878,0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f148,FUN_10a06ca00,FUN_10a06cb40);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2f76b6,FUN_10a06cd28,FUN_10a06cf78);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2e5c64,FUN_10a06d678,FUN_10a06d794);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f6341ba,10);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a033298);
  (*pcVar6)();
}



/* Entry: 10a0332b4; end: 10a033317;  */

void FUN_10a0332b4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a033318; end: 10a033357;  */

undefined1  [16] FUN_10a033318(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 8;
  auVar1._0_8_ = &UNK_10f632991;
  return auVar1;
}


