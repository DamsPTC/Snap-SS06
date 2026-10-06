/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10802e114; end: 10802e13f;  */

long * FUN_10802e114(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10802e140; end: 10802e1e7;  */

long * FUN_10802e140(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)param_1[1];
  param_1[5] = 0;
  while( true ) {
    puVar4 = (undefined8 *)param_1[2];
    uVar1 = (long)puVar4 - (long)puVar3 >> 3;
    if (uVar1 < 3) break;
    __ZdlPv(*puVar3);
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar3;
  }
  if (uVar1 == 1) {
    lVar2 = 0x80;
  }
  else {
    if (uVar1 != 2) goto LAB_10802e1b4;
    lVar2 = 0x100;
  }
  param_1[4] = lVar2;
LAB_10802e1b4:
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  func_0x00010802e214(param_1,param_1[1]);
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10802e1e8; end: 10802e22f;  */

long FUN_10802e1e8(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 8) * 8) + (uVar1 & 0xff) * 0x10;
  }
  return 0;
}



/* Entry: 10802e230; end: 10802e357;  */

void FUN_10802e230(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010802e268();
    *(ulong *)(param_1 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 10802e358; end: 10802e363;  */

long FUN_10802e358(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  
  func_0x00010802eae8();
  puVar1 = param_1;
  func_0x00010802ea30(*param_1);
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  FUN_10802e3b4();
  func_0x00010802ea30(*param_1);
  if (!(bool)in_ZR) {
    param_1 = extraout_x9_00;
  }
  return (long)param_1 + ((param_2 - (long)puVar1) * 0x20000000 >> 0x1d);
}



/* Entry: 10802e364; end: 10802e3b3;  */

long FUN_10802e364(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  
  puVar1 = param_1;
  func_0x00010802ea30(*param_1);
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  FUN_10802e3b4();
  func_0x00010802ea30(*param_1);
  if (!(bool)in_ZR) {
    param_1 = extraout_x9_00;
  }
  return (long)param_1 + ((param_2 - (long)puVar1) * 0x20000000 >> 0x1d);
}



/* Entry: 10802e3b4; end: 10802e437;  */

/* WARNING: Removing unreachable block (ram,0x00010802e460) */
/* WARNING: Removing unreachable block (ram,0x00010802e468) */

void FUN_10802e3b4(ulong *param_1,int param_2,uint param_3)

{
  ulong *puVar1;
  undefined1 in_ZR;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  ulong *extraout_x9;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar2 = param_1;
  iVar3 = param_2;
  uVar4 = param_3;
  func_0x00010802ea30(*param_1);
  puVar1 = puVar2;
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  puVar1 = puVar1 + iVar3;
  uVar8 = puVar2[2];
  for (uVar9 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar9 != 0; uVar9 = uVar9 - 1) {
    if ((uVar8 == 0) && ((long *)*puVar1 != (long *)0x0)) {
      (**(code **)(*(long *)*puVar1 + 8))();
    }
    puVar1 = puVar1 + 1;
  }
  if (0 < (int)param_3) {
    if ((*param_1 & 1) == 0) {
      if ((param_2 == 0) && (param_3 == 1)) {
        *param_1 = 0;
      }
    }
    else {
      piVar5 = (int *)(*param_1 - 1);
      iVar3 = *piVar5;
      lVar7 = (long)(int)(param_3 + param_2);
      while (lVar6 = lVar7 + 1, lVar7 < iVar3) {
        *(undefined8 *)(piVar5 + (long)(int)param_3 * -2 + lVar6 * 2) =
             *(undefined8 *)(piVar5 + lVar6 * 2);
        lVar7 = lVar6;
      }
      *piVar5 = iVar3 - param_3;
    }
    *(uint *)(param_1 + 1) = (int)param_1[1] - param_3;
    return;
  }
  return;
}



/* Entry: 10802e438; end: 10802e49b;  */

void FUN_10802e438(ulong *param_1,int param_2,uint param_3,long param_4)

{
  ulong *puVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  ulong *extraout_x9;
  long lVar5;
  long lVar6;
  
  bVar3 = param_3 == 1;
  if (0 < (int)param_3) {
    if (param_4 != 0) {
      func_0x00010802ea30(*param_1);
      puVar1 = param_1;
      if (!bVar3) {
        puVar1 = extraout_x9;
      }
      _memcpy(param_4,puVar1 + param_2,(ulong)param_3 << 3);
    }
    if ((*param_1 & 1) == 0) {
      if ((param_2 == 0) && (param_3 == 1)) {
        *param_1 = 0;
      }
    }
    else {
      piVar4 = (int *)(*param_1 - 1);
      iVar2 = *piVar4;
      lVar6 = (long)(int)(param_3 + param_2);
      while (lVar5 = lVar6 + 1, lVar6 < iVar2) {
        *(undefined8 *)(piVar4 + (long)(int)param_3 * -2 + lVar5 * 2) =
             *(undefined8 *)(piVar4 + lVar5 * 2);
        lVar6 = lVar5;
      }
      *piVar4 = iVar2 - param_3;
    }
    *(uint *)(param_1 + 1) = (int)param_1[1] - param_3;
    return;
  }
  return;
}



/* Entry: 10802e49c; end: 10802e4f3;  */

void FUN_10802e49c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  uVar1 = param_1;
  FUN_10802e4f4();
  if (0x1ff < uVar1) {
    __ZdlPv(*(undefined8 *)(*(long *)(param_1 + 0x10) + -8));
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x10);
    while (lVar2 != lVar3 + -8) {
      lVar2 = lVar2 + -8;
      *(long *)(param_1 + 0x10) = lVar2;
    }
    return;
  }
  return;
}



/* Entry: 10802e4f4; end: 10802e51b;  */

long FUN_10802e4f4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x20 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 10802e51c; end: 10802e837;  */

void FUN_10802e51c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  plVar4 = param_1;
  plVar5 = param_2;
  FUN_10802e4f4();
  if (plVar4 != (long *)0x0) goto LAB_10802e724;
  if ((ulong)param_1[4] < 0x100) {
    puVar15 = (undefined8 *)param_1[1];
    puVar14 = (undefined8 *)param_1[2];
    puVar12 = (undefined8 *)*param_1;
    uVar13 = (long)puVar14 - (long)puVar15;
    plVar4 = param_1 + 3;
    puVar11 = (undefined8 *)*plVar4;
    if ((ulong)((long)puVar11 - (long)puVar12) <= uVar13) {
      puVar8 = (undefined8 *)((long)puVar11 - (long)puVar12 >> 2);
      if (puVar11 == puVar12) {
        puVar8 = (undefined8 *)0x1;
      }
      plStack_98 = plVar4;
      FUN_10802e950();
      puVar11 = (undefined8 *)((long)puVar8 + uVar13);
      puVar12 = puVar8 + (long)plVar5;
      uVar6 = 0x1000;
      plVar7 = plVar5;
      puStack_b8 = puVar8;
      puStack_b0 = puVar11;
      puStack_a8 = puVar11;
      puStack_a0 = puVar12;
      __Znwm();
      plStack_c8 = param_1 + 5;
      uStack_c0 = 0x100;
      puVar9 = puVar11;
      if (uVar13 == (long)plVar5 * 8) {
        if (puVar14 == puVar15) {
          puVar15 = (undefined8 *)0x1;
          uStack_d0 = uVar6;
          plStack_70 = plVar4;
          FUN_10802e950();
          puStack_78 = puVar15 + (long)plVar7;
          puStack_90 = puVar15;
          puStack_88 = puVar15;
          puStack_80 = puVar15;
          FUN_10802e928(&puStack_90,puVar11,puVar11);
          puVar1 = puStack_78;
          puVar9 = puStack_80;
          puVar14 = puStack_88;
          puVar15 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a0 = puStack_78;
          puStack_90 = puVar8;
          puStack_88 = puVar11;
          puStack_80 = puVar11;
          puStack_78 = puVar12;
          func_0x00010802ead8();
          puVar8 = puVar15;
          puVar11 = puVar14;
          puVar12 = puVar1;
        }
        else {
          puVar11 = puVar11 + (((long)puVar11 - (long)puVar8 >> 3) + 1) / -2;
          puVar9 = puVar11;
          puStack_b0 = puVar11;
        }
      }
      puVar15 = puVar9 + 1;
      *puVar9 = uVar6;
      uStack_d0 = 0;
      puVar14 = (undefined8 *)param_1[2];
      puStack_a8 = puVar15;
      while (puVar9 = (undefined8 *)param_1[1], puVar14 != puVar9) {
        puVar9 = puVar11;
        if (puVar11 == puVar8) {
          if (puVar15 < puVar12) {
            lVar10 = (long)puVar15 - (long)puVar8;
            puVar1 = puVar15 + (((long)puVar12 - (long)puVar15 >> 3) + 1) / 2;
            puVar9 = (undefined8 *)((long)puVar1 - ((long)puVar15 - (long)puVar8));
            puVar15 = puVar1;
            if (lVar10 != 0) {
              _memmove(puVar9,puVar11,lVar10);
            }
          }
          else {
            lVar10 = (long)puVar12 - (long)puVar8 >> 2;
            if ((long)puVar12 - (long)puVar8 == 0) {
              lVar10 = 1;
            }
            plStack_70 = plVar4;
            FUN_10802e950(lVar10);
            func_0x00010802ea84(lVar10 * 2 + 6);
            FUN_10802e928(&puStack_90,puVar8,puVar15);
            puVar3 = puStack_78;
            puVar2 = puStack_80;
            puVar9 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar8;
            puStack_88 = puVar11;
            puStack_80 = puVar15;
            puStack_78 = puVar12;
            func_0x00010802ead8();
            puVar8 = puVar1;
            puVar15 = puVar2;
            puVar12 = puVar3;
          }
        }
        puVar14 = puVar14 + -1;
        puVar11 = puVar9 + -1;
        *puVar11 = *puVar14;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (long)puVar8;
      param_1[1] = (long)puVar11;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (long)puVar15;
      param_1[3] = (long)puVar12;
      puStack_b0 = puVar9;
      func_0x00010802e984(&uStack_d0);
      func_0x00010802e9b0(&puStack_b8);
      goto LAB_10802e724;
    }
    uVar6 = 0x1000;
    __Znwm();
    if (puVar11 != puVar14) {
      *puVar14 = uVar6;
      param_1[2] = (long)(puVar14 + 1);
      goto LAB_10802e724;
    }
    if (puVar15 == puVar12) {
      lVar10 = (long)puVar11 - (long)puVar15 >> 2;
      if (puVar14 == puVar15) {
        lVar10 = 1;
      }
      plStack_70 = plVar4;
      FUN_10802e950();
      func_0x00010802ea84(lVar10 * 2 + 6);
      FUN_10802e928(&puStack_90,param_1[1],param_1[2]);
      puVar14 = (undefined8 *)param_1[1];
      puVar15 = (undefined8 *)*param_1;
      puVar12 = (undefined8 *)param_1[3];
      puVar11 = (undefined8 *)param_1[2];
      param_1[1] = (long)puStack_88;
      *param_1 = (long)puStack_90;
      param_1[3] = (long)puStack_78;
      param_1[2] = (long)puStack_80;
      puStack_90 = puVar15;
      puStack_88 = puVar14;
      puStack_80 = puVar11;
      puStack_78 = puVar12;
      func_0x00010802ead8();
      puVar15 = (undefined8 *)param_1[1];
    }
    puVar15[-1] = uVar6;
    param_1[1] = (long)puVar15;
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    uVar6 = *(undefined8 *)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_10802e838(param_1,uVar6);
LAB_10802e724:
  plVar4 = param_1;
  FUN_10802e1e8();
  lVar10 = *param_2;
  plVar4[1] = param_2[1];
  *plVar4 = lVar10;
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 10802e838; end: 10802e927;  */

void FUN_10802e838(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  puStack_50 = param_1 + 3;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10802e950();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10802e928(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar7 = *param_1;
      uVar8 = param_1[3];
      uVar6 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010802e9b0(&uStack_70);
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10802e928; end: 10802e94f;  */

void FUN_10802e928(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10802e950; end: 10802e9ef;  */

undefined1  [16] FUN_10802e950(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10802e9f0; end: 10802eb8b;  */

void FUN_10802e9f0(void)

{
  return;
}



/* Entry: 10802eb8c; end: 10802ebab;  */

long * FUN_10802eb8c(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_3 < (ulong)((long)param_2 - (long)param_1 >> 4)) {
    return param_1 + param_3 * 2;
  }
  FUN_10802fabc();
  plVar3 = (long *)param_1[1];
  if (((ulong)plVar3 & 1) != 0) {
    plVar3 = *(long **)((ulong)plVar3 & 0xfffffffffffffffe);
  }
  plVar1 = param_1;
  if ((plVar3 == (long *)0x0) && (plVar1 = (long *)param_1[8], plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar2 = (long *)param_2[1];
  if (((ulong)plVar2 & 1) != 0) {
    plVar2 = *(long **)((ulong)plVar2 & 0xfffffffffffffffe);
  }
  if (plVar3 != plVar2) {
    func_0x00010b4cf42c(plVar3,param_2);
    plVar1 = plVar3;
    param_2 = plVar3;
  }
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 4;
  param_1[8] = (long)param_2;
  return plVar1;
}



/* Entry: 10802ebac; end: 10802ec33;  */

void FUN_10802ebac(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if ((uVar2 == 0) && (*(long **)(param_1 + 0x40) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x40) + 8))();
  }
  uVar1 = *(ulong *)(param_2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  if (uVar2 != uVar1) {
    func_0x00010b4cf42c(uVar2,param_2);
    param_2 = uVar2;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  *(ulong *)(param_1 + 0x40) = param_2;
  return;
}



/* Entry: 10802ec34; end: 10802f8db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10802ec34(long param_1,ulong *******param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong ******ppppppuVar3;
  ulong ******ppppppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong ******ppppppuVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  ulong ******ppppppuVar12;
  uint *puVar13;
  code *pcVar14;
  undefined1 uVar15;
  bool bVar16;
  long lVar17;
  ulong ******ppppppuVar18;
  ulong *******pppppppuVar19;
  ulong *******pppppppuVar20;
  ulong uVar21;
  ulong *******pppppppuVar22;
  ulong *******pppppppuVar23;
  ulong uVar24;
  ulong ******extraout_x8;
  ulong ******ppppppuVar25;
  ulong *****pppppuVar26;
  ulong ******extraout_x8_00;
  ulong *******extraout_x9;
  long *extraout_x9_00;
  ulong *******extraout_x9_01;
  ulong ******extraout_x9_02;
  ulong ******ppppppuVar27;
  ulong ******extraout_x9_03;
  ulong *******extraout_x9_04;
  long *extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  ulong ******ppppppuVar28;
  ulong ******ppppppuVar29;
  ulong *******extraout_x10_02;
  ulong ******ppppppuVar30;
  ulong ******ppppppuVar31;
  uint *puVar32;
  long *plVar33;
  long lVar34;
  ulong *******pppppppuVar35;
  ulong *******pppppppuVar36;
  int iVar37;
  ulong *******pppppppuVar38;
  ulong *******pppppppuVar39;
  long lVar40;
  ulong ******ppppppuVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  ulong ******ppppppuStack_198;
  ulong *******pppppppuStack_150;
  ulong *******pppppppuStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong ******ppppppuStack_100;
  uint *puStack_f8;
  byte bStack_e8;
  ulong ******ppppppuStack_e0;
  ulong ******ppppppuStack_d8;
  undefined8 uStack_d0;
  ulong *******pppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  undefined8 uStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  uint auStack_7c [3];
  
  uVar15 = *(int *)(param_1 + 0x28) == 2;
  ppuVar5 = *(undefined ***)(param_1 + 0x20);
  if (!(bool)uVar15) {
    ppuVar5 = &PTR_PTR_1133a4998;
  }
  if (((ulong)param_2[2] & 1) == 0) {
    func_0x00010802fc74();
    func_0x0001074668c4();
LAB_10802f7a4:
    func_0x00010802fc5c();
  }
  else {
    pppppppuVar35 = param_2;
    FUN_10802af44();
    if ((((ulong)pppppppuVar35[2] & 1) == 0) || (((ulong)pppppppuVar35[6][2] & 1) == 0)) {
      func_0x00010802fc74();
      func_0x0001074668c4();
      goto LAB_10802f7a4;
    }
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010802af54();
    func_0x00010802af64();
    pppppppuVar38 = (ulong *******)0x0;
    pppppppuVar35 = pppppppuVar35 + 2;
    func_0x00010802fce0(*pppppppuVar35);
    pppppppuVar22 = pppppppuVar35;
    if (!(bool)uVar15) {
      pppppppuVar22 = extraout_x9;
    }
    lVar40 = (long)*(int *)(pppppppuVar35 + 1) << 3;
    pppppppuVar35 = (ulong *******)0x0;
    pppppppuVar36 = (ulong *******)0x0;
    for (; lVar40 != 0; lVar40 = lVar40 + -8) {
      ppppppuVar30 = *pppppppuVar22;
      pppppppuVar19 = pppppppuVar36;
      pppppppuVar23 = pppppppuVar35;
      if ((((ulong)ppppppuVar30[6] & 1) == 0) && ((*(uint *)(ppppppuVar30 + 5) | 2) == 3)) {
        if (pppppppuVar35 < pppppppuVar38) {
          pppppppuVar23 = pppppppuVar35 + 1;
          *pppppppuVar35 = ppppppuVar30;
        }
        else {
          lVar34 = (long)pppppppuVar35 - (long)pppppppuVar36;
          uVar21 = (lVar34 >> 3) + 1;
          if (uVar21 >> 0x3d != 0) {
            func_0x00010802fd6c();
            FUN_10802fb10();
            goto LAB_10802f7d8;
          }
          uVar24 = (long)pppppppuVar38 - (long)pppppppuVar36 >> 2;
          if (uVar24 <= uVar21) {
            uVar24 = uVar21;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pppppppuVar38 - (long)pppppppuVar36)) {
            uVar24 = 0x1fffffffffffffff;
          }
          if (uVar24 == 0) {
            lVar17 = 0;
          }
          else {
            if (uVar24 >> 0x3d != 0) {
              func_0x00010802fd6c();
              func_0x000104bd35f4();
              goto LAB_10802f7d8;
            }
            lVar17 = uVar24 << 3;
            __Znwm();
          }
          puVar1 = (ulong *)(lVar17 + lVar34);
          pppppppuVar38 = (ulong *******)(lVar17 + uVar24 * 8);
          pppppppuVar19 = (ulong *******)(puVar1 + -(lVar34 >> 3));
          pppppppuVar23 = (ulong *******)(puVar1 + 1);
          *puVar1 = (ulong)ppppppuVar30;
          _memcpy(pppppppuVar19,pppppppuVar36,lVar34);
          if (pppppppuVar36 != (ulong *******)0x0) {
            __ZdlPv(pppppppuVar36);
          }
        }
      }
      pppppppuVar22 = pppppppuVar22 + 1;
      pppppppuVar35 = pppppppuVar23;
      pppppppuVar36 = pppppppuVar19;
    }
    func_0x00010802fd6c();
    if (pppppppuVar36 != pppppppuVar35) {
      if ((ulong)((long)pppppppuVar35 - (long)pppppppuVar36) < 9) {
        ppuStack_138 = &PTR_DAT_110d149d0;
        uStack_130 = 0;
        bVar16 = *(undefined ***)(param_1 + 0x18) == (undefined **)0x0;
        ppuVar6 = &PTR_PTR_1133a4970;
        if (!bVar16) {
          ppuVar6 = *(undefined ***)(param_1 + 0x18);
        }
        uStack_128 = *(undefined4 *)(ppuVar6 + 4);
        uStack_124 = 3;
        ppppppuVar30 = *pppppppuVar36;
        pppppppuStack_148 = (ulong *******)0x0;
        lStack_140 = 0;
        func_0x00010802fce0(ppuVar5[2]);
        plVar33 = extraout_x10;
        if (!bVar16) {
          plVar33 = extraout_x9_00;
        }
        plVar2 = plVar33 + (int)extraout_x10[1];
        pppppppuVar35 = (ulong *******)0x1;
        pppppppuStack_150 = (ulong *******)&pppppppuStack_148;
        do {
          if (plVar33 == plVar2) {
            func_0x00010802fc7c();
            func_0x00010802fcd0();
            pppppppuVar22 = extraout_x9_01;
            do {
              if ((ulong ********)pppppppuVar22 == &pppppppuStack_148) {
                func_0x00010802fbd8(pppppppuStack_148);
                func_0x00010b5a78b0(&ppuStack_138);
                func_0x00010802fb1c(&uStack_118);
                return;
              }
              iVar37 = *(int *)((long)pppppppuVar22 + 0x44);
              uVar15 = iVar37 == 2;
              if ((bool)uVar15) {
                ppppppuVar25 = pppppppuVar22[7];
                pppppppuVar19 = param_2;
                FUN_10802af44();
                ppppppuStack_d8 = (ulong ******)0x0;
                uStack_d0 = 0;
                ppppppuStack_e0 = (ulong ******)0x0;
                pppppppuVar36 = pppppppuVar19;
                func_0x00010802fce0(ppppppuVar30[2]);
                ppppppuVar18 = ppppppuVar30 + 2;
                if (!(bool)uVar15) {
                  ppppppuVar18 = extraout_x9_02;
                }
                ppppppuVar27 = ppppppuStack_e0;
                ppppppuVar12 = ppppppuStack_d8;
                for (lVar40 = (long)*(int *)(extraout_x10_00 + 0x18) << 3;
                    ppppppuStack_e0 = ppppppuVar27, ppppppuStack_d8 = ppppppuVar12, lVar40 != 0;
                    lVar40 = lVar40 + -8) {
                  uVar21 = (ulong)uStack_b0 >> 0x20;
                  uStack_b0 = (ulong *******)
                              CONCAT44((int)uVar21,*(undefined4 *)(*ppppppuVar18 + 10));
                  pppppppuVar36 = &ppppppuStack_e0;
                  func_0x00010066048c(pppppppuVar36,&uStack_b0);
                  ppppppuVar18 = ppppppuVar18 + 1;
                  ppppppuVar27 = ppppppuStack_e0;
                  ppppppuVar12 = ppppppuStack_d8;
                }
                for (; uVar15 = ppppppuVar27 == ppppppuVar12, !(bool)uVar15;
                    ppppppuVar27 = (ulong ******)((long)ppppppuVar27 + 4)) {
                  pppppppuVar23 = (ulong *******)(ulong)*(uint *)ppppppuVar27;
                  func_0x00010802fd40();
                  func_0x00010802fce0(ppppppuVar25[2]);
                  ppppppuVar18 = ppppppuVar25 + 2;
                  if (!(bool)uVar15) {
                    ppppppuVar18 = extraout_x9_03;
                  }
                  ppppppuVar3 = ppppppuVar18 + *(int *)(extraout_x10_01 + 0x18);
LAB_10802efd0:
                  if (ppppppuVar18 == ppppppuVar3) goto LAB_10802f670;
                  pppppuVar26 = *ppppppuVar18;
                  pppppppuVar20 = pppppppuVar35;
                  if ((ulong *******)pppppuVar26[6] != (ulong *******)0x0) {
                    pppppppuVar20 = (ulong *******)pppppuVar26[6];
                  }
                  if ((*(int *)((long)pppppppuVar20 + 0x1c) == 2 &&
                       pppppppuVar20[2] != (ulong ******)0x0) &&
                     (pppppppuVar36 = pppppppuVar23, FUN_10802a6b8(pppppppuVar23,param_2),
                     *(int *)((long)pppppppuVar20 + 0x1c) == 2 && pppppppuVar36 < pppppppuVar20[2]))
                  {
LAB_10802f468:
                    ppppppuVar18 = ppppppuVar18 + 1;
                    goto LAB_10802efd0;
                  }
                  pppppppuVar20 = pppppppuVar38;
                  if ((ulong *******)pppppuVar26[7] != (ulong *******)0x0) {
                    pppppppuVar20 = (ulong *******)pppppuVar26[7];
                  }
                  uVar15 = *(int *)((long)pppppppuVar20 + 0x1c) == 2;
                  if ((bool)uVar15) {
                    ppppppuVar41 = pppppppuVar20[2];
                    pppppppuVar36 = param_2;
                    FUN_10802af44();
                    pppppppuVar20 = pppppppuVar23;
                    FUN_10802a92c(pppppppuVar23,pppppppuVar36);
                    if (pppppppuVar20 == (ulong *******)0x0) {
                      ppppppuStack_100._0_1_ = 0;
                      bStack_e8 = 0;
                      pppppppuVar36 = (ulong *******)0x0;
                    }
                    else {
                      if ((*(byte *)(pppppppuVar23 + 2) >> 1 & 1) == 0) {
                        ppppppuStack_198 = (ulong ******)0x0;
                      }
                      else {
                        ppppppuStack_198 = (ulong ******)pppppppuVar23[7][2];
                      }
                      pppppppuVar38 = pppppppuVar23;
                      FUN_10802a6b8(pppppppuVar23,param_2);
                      iVar37 = 0;
                      ppppppuVar4 = (ulong ******)((long)pppppppuVar38 + (long)ppppppuStack_198);
                      pppppppuStack_c8 = (ulong *******)0x0;
                      pppppppuStack_c0 = (ulong *******)0x0;
                      iVar42 = 0x14;
                      pppppppuStack_b8 = (ulong *******)0x0;
                      ppppppuVar29 = ppppppuStack_198;
                      while ((bVar16 = iVar42 != 0, iVar42 = iVar42 + -1,
                             pppppppuVar20 = pppppppuVar38, bVar16 && ppppppuVar29 < ppppppuVar4 &&
                             (*(int *)((long)ppppppuVar41 + 0x34) == 3 ||
                              iVar37 < *(int *)(ppppppuVar41 + 3)))) {
                        pppppppuVar38 = (ulong *******)(ppppppuVar41 + 2);
                        func_0x00010802fb48(pppppppuVar38,iVar37);
                        if (*(int *)((long)ppppppuVar41 + 0x34) == 3) {
                          if (*(int *)((long)pppppppuVar38 + 0x24) != 4) {
                            func_0x00010802fc74();
                            func_0x00010527a174();
LAB_10802f728:
                            func_0x00010802fc5c();
                            goto LAB_10802f7d8;
                          }
                          ppppppuVar31 = pppppppuVar38[2];
                          if (ppppppuVar31 == (ulong ******)0x0) {
                            func_0x00010802fc74();
                            func_0x00010527a174();
                            goto LAB_10802f728;
                          }
                          if (ppppppuVar29 == (ulong ******)0x0) {
                            pppppppuVar35 = (ulong *******)0x0;
                          }
                          else {
                            pppppppuVar35 = (ulong *******)pppppppuVar38[3];
                          }
                          iVar9 = *(int *)(ppppppuVar41 + 3);
                          iVar10 = 0;
                          if (iVar9 != 0) {
                            iVar10 = (iVar37 + 1) / iVar9;
                          }
                          pppppppuVar20 = (ulong *******)(ppppppuVar41 + 2);
                          func_0x00010802fb48(pppppppuVar20,(iVar37 + 1) - iVar10 * iVar9);
                          ppppppuVar28 = pppppppuVar20[3];
                          if (*(int *)((long)pppppppuVar20 + 0x24) != 4) {
                            ppppppuVar28 = (ulong ******)0x0;
                          }
                          if (ppppppuVar4 <
                              (ulong ******)
                              ((long)pppppppuVar35 +
                              (long)ppppppuVar28 + (long)ppppppuVar31 + (long)ppppppuVar29)) break;
                          if ((ppppppuVar29 == (ulong ******)0x0) ||
                             (*(int *)((long)pppppppuVar38 + 0x24) != 4)) {
                            ppppppuVar28 = (ulong ******)0x0;
                          }
                          else {
                            ppppppuVar28 = pppppppuVar38[3];
                          }
                          ppppppuVar28 = (ulong ******)((long)ppppppuVar28 + (long)ppppppuVar29);
                          pppppppuVar38 = pppppppuVar20;
LAB_10802f1d8:
                          ppppppuVar29 = (ulong ******)((long)ppppppuVar28 + (long)ppppppuVar31);
LAB_10802f1dc:
                          pppppppuVar20 = pppppppuVar38;
                          if (ppppppuVar4 <= ppppppuVar28 || ppppppuVar4 < ppppppuVar29) break;
                        }
                        else {
                          ppppppuVar31 = pppppppuVar38[2];
                          uVar8 = *(uint *)((long)pppppppuVar38 + 0x24);
                          ppppppuVar28 = (ulong ******)(ulong)uVar8;
                          if (uVar8 == 0) {
LAB_10802f16c:
                            ppppppuVar28 = (ulong ******)
                                           ((long)ppppppuVar28 + (long)ppppppuStack_198);
                            goto LAB_10802f1d8;
                          }
                          pppppppuVar20 = pppppppuVar38;
                          if (uVar8 != 3) {
                            if (uVar8 == 2) {
                              ppppppuVar28 = pppppppuVar38[3];
                              goto LAB_10802f16c;
                            }
                            break;
                          }
                          if (*(int *)(pppppppuVar38 + 3) != 1) {
                            if (*(int *)(pppppppuVar38 + 3) == 0) {
                              ppppppuVar29 = (ulong ******)
                                             ((long)ppppppuVar31 + (long)ppppppuStack_198);
                              ppppppuVar28 = ppppppuStack_198;
                              goto LAB_10802f1dc;
                            }
                            break;
                          }
                          ppppppuVar28 = (ulong ******)((long)ppppppuVar4 - (long)ppppppuVar29);
                          if (ppppppuVar31 != (ulong ******)0x0) {
                            if (ppppppuVar31 <= ppppppuVar28) {
                              ppppppuVar28 = (ulong ******)
                                             ((long)ppppppuVar29 +
                                             ((ulong)((long)ppppppuVar28 - (long)ppppppuVar31) >> 1)
                                             );
                              goto LAB_10802f1d8;
                            }
                            break;
                          }
                          ppppppuVar28 = (ulong ******)
                                         ((long)ppppppuVar29 + ((ulong)ppppppuVar28 >> 1));
                          if (ppppppuVar4 <= ppppppuVar28) break;
                          ppppppuVar31 = (ulong ******)0x0;
                        }
                        if (((pppppppuStack_c8 == pppppppuStack_c0) ||
                            (ppppppuVar29 = pppppppuStack_c0[-1], ppppppuVar29 == (ulong ******)0x0)
                            ) || ((ulong ******)((long)pppppppuStack_c0[-2] + (long)ppppppuVar29) !=
                                  ppppppuVar28)) {
                          if (pppppppuStack_c0 < pppppppuStack_b8) {
                            *pppppppuStack_c0 = ppppppuVar28;
                            pppppppuStack_c0[1] = ppppppuVar31;
                            pppppppuStack_c0 = pppppppuStack_c0 + 2;
                          }
                          else {
                            pppppppuVar38 = (ulong *******)&pppppppuStack_c8;
                            FUN_10802f8dc(pppppppuVar38,
                                          ((long)pppppppuStack_c0 - (long)pppppppuStack_c8 >> 4) + 1
                                         );
                            FUN_10802f9a0(&uStack_b0,pppppppuVar38,
                                          (long)pppppppuStack_c0 - (long)pppppppuStack_c8 >> 4,
                                          &pppppppuStack_b8);
                            *pppppppuStack_a0 = ppppppuVar28;
                            pppppppuStack_a0[1] = ppppppuVar31;
                            pppppppuVar39 =
                                 (ulong *******)
                                 ((long)pppppppuStack_a8 -
                                 ((long)pppppppuStack_c0 - (long)pppppppuStack_c8));
                            pppppppuStack_a0 = pppppppuStack_a0 + 2;
                            _memcpy(pppppppuVar39);
                            pppppppuVar20 = pppppppuStack_a0;
                            pppppppuVar38 = pppppppuStack_b8;
                            pppppppuStack_b8 = pppppppuStack_98;
                            pppppppuStack_c0 = pppppppuStack_a0;
                            pppppppuStack_a0 = pppppppuStack_c8;
                            pppppppuStack_98 = pppppppuVar38;
                            uStack_b0 = pppppppuStack_c8;
                            pppppppuStack_a8 = pppppppuStack_c8;
                            pppppppuVar38 = (ulong *******)&uStack_b0;
                            pppppppuStack_c8 = pppppppuVar39;
                            FUN_10802fa28(pppppppuVar38);
                            pppppppuStack_c0 = pppppppuVar20;
                          }
                        }
                        else {
                          ppppppuVar7 = (ulong ******)0x0;
                          if (ppppppuVar31 != (ulong ******)0x0) {
                            ppppppuVar7 = (ulong ******)((long)ppppppuVar29 + (long)ppppppuVar31);
                          }
                          pppppppuStack_c0[-1] = ppppppuVar7;
                        }
                        pppppppuVar20 = pppppppuVar38;
                        if (ppppppuVar31 == (ulong ******)0x0) break;
                        iVar37 = iVar37 + 1;
                        if (*(int *)((long)ppppppuVar41 + 0x34) == 3) {
                          iVar9 = *(int *)(ppppppuVar41 + 3);
                          iVar10 = 0;
                          if (iVar9 != 0) {
                            iVar10 = iVar37 / iVar9;
                          }
                          iVar37 = iVar37 - iVar10 * iVar9;
                        }
                        ppppppuVar29 = (ulong ******)((long)ppppppuVar31 + (long)ppppppuVar28);
                      }
                      if (pppppppuStack_c8 == pppppppuStack_c0) {
                        func_0x00010802fc74();
                        __ZNSt13runtime_errorC1EPKc();
                        ___cxa_throw(pppppppuVar20,PTR___ZTISt13runtime_error_110346a40,
                                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                        goto LAB_10802f7d8;
                      }
                      if (pppppppuStack_c0[-1] == (ulong ******)0x0) {
                        pppppppuStack_c0[-1] =
                             (ulong ******)((long)ppppppuVar4 - (long)pppppppuStack_c0[-2]);
                      }
                      uStack_b0 = (ulong *******)0x0;
                      pppppppuStack_a8 = (ulong *******)0x0;
                      pppppppuStack_a0 = (ulong *******)0x0;
                      pppppppuVar38 = pppppppuVar23;
                      FUN_10802dd64();
                      pppppppuVar20 = pppppppuStack_c8;
                      FUN_10802eb8c(pppppppuStack_c8,pppppppuStack_c0,0);
                      pppppppuVar38[2] = *pppppppuVar20;
                      pppppppuVar38 = pppppppuVar23;
                      FUN_10802dd64();
                      pppppppuVar20 = pppppppuStack_c8;
                      FUN_10802eb8c(pppppppuStack_c8,pppppppuStack_c0,0);
                      pppppppuVar38[3] = pppppppuVar20[1];
                      auStack_7c[0] = *(uint *)(pppppppuVar23 + 10);
                      func_0x00010802fd2c();
                      for (pppppppuVar38 = (ulong *******)0x1;
                          pppppppuVar20 =
                               (ulong *******)((long)pppppppuStack_c0 - (long)pppppppuStack_c8 >> 4)
                          , uVar15 = pppppppuVar38 == pppppppuVar20, pppppppuVar38 < pppppppuVar20;
                          pppppppuVar38 = (ulong *******)((long)pppppppuVar38 + 1)) {
                        pppppppuVar20 = pppppppuVar36;
                        FUN_10802b0a0(pppppppuVar36,ppppppuVar30,pppppppuVar23,
                                      (int)pppppppuVar38 + -1,1);
                        auStack_7c[0] = (uint)pppppppuVar20;
                        func_0x0001009eba34(&uStack_b0,auStack_7c);
                        uVar24 = (ulong)auStack_7c[0];
                        FUN_10802af74(pppppppuVar36);
                        uVar21 = uVar24;
                        FUN_10802dd64();
                        pppppppuVar20 = pppppppuStack_c8;
                        FUN_10802eb8c(pppppppuStack_c8,pppppppuStack_c0,pppppppuVar38);
                        *(ulong *******)(uVar21 + 0x10) = *pppppppuVar20;
                        FUN_10802dd64();
                        pppppppuVar20 = pppppppuStack_c8;
                        FUN_10802eb8c(pppppppuStack_c8,pppppppuStack_c0,pppppppuVar38);
                        *(ulong *******)(uVar24 + 0x18) = pppppppuVar20[1];
                      }
                      func_0x00010802fc9c();
                      func_0x00010802fcc8();
                      pppppppuVar36 = (ulong *******)&pppppppuStack_c8;
                      FUN_10802fa78();
                      func_0x00010802fc7c();
                    }
                  }
                  else {
                    uVar15 = *(int *)((long)pppppppuVar20 + 0x1c) == 1;
                    if ((bool)uVar15) {
                      pppppppuStack_c8 =
                           (ulong *******)
                           CONCAT44(pppppppuStack_c8._4_4_,*(undefined4 *)(pppppppuVar23 + 10));
                      pppppppuVar36 = (ulong *******)&uStack_b0;
                      func_0x00010735f350(pppppppuVar36,&pppppppuStack_c8,1);
                      func_0x00010802fc9c();
                      func_0x00010731e26c();
                    }
                    else {
                      ppppppuStack_100._0_1_ = 0;
                      bStack_e8 = 0;
                    }
                  }
                  if ((bStack_e8 & 1) == 0) {
                    func_0x00010802fd38();
                    goto LAB_10802f468;
                  }
                  func_0x00010802fce0(pppppuVar26[3]);
                  pppppppuVar23 = extraout_x10_02;
                  if (!(bool)uVar15) {
                    pppppppuVar23 = extraout_x9_04;
                  }
                  pppppppuVar38 = pppppppuVar23 + *(int *)(extraout_x10_02 + 1);
                  for (; puVar13 = puStack_f8, pppppppuVar23 != pppppppuVar38;
                      pppppppuVar23 = pppppppuVar23 + 1) {
                    ppppppuVar18 = *pppppppuVar23;
                    if (*(int *)((long)ppppppuVar18 + 0x1c) == 2) {
                      uStack_b0 = (ulong *******)0x0;
                      pppppppuStack_a8 = (ulong *******)0x0;
                      pppppppuStack_a0 = (ulong *******)0x0;
                      for (puVar32 = (uint *)CONCAT71(ppppppuStack_100._1_7_,ppppppuStack_100._0_1_)
                          ; puVar32 != puVar13; puVar32 = puVar32 + 1) {
                        pppppppuVar35 = (ulong *******)(ulong)*puVar32;
                        func_0x00010802fd40();
                        *(uint *)(pppppppuVar35 + 2) = *(uint *)(pppppppuVar35 + 2) | 4;
                        pppppppuVar20 = (ulong *******)pppppppuVar35[8];
                        if ((ulong *******)pppppppuVar35[8] == (ulong *******)0x0) {
                          pppppppuVar36 = (ulong *******)pppppppuVar35[1];
                          if (((ulong)pppppppuVar36 & 1) != 0) {
                            pppppppuVar36 =
                                 *(ulong ********)((ulong)pppppppuVar36 & 0xfffffffffffffffe);
                          }
                          FUN_10802fad0();
                          pppppppuVar35[8] = (ulong ******)pppppppuVar36;
                          pppppppuVar20 = pppppppuVar36;
                        }
                        func_0x00010802fd1c();
                        *(undefined4 *)(pppppppuVar36 + 2) = 0;
                        *pppppppuVar36 = (ulong ******)&PTR_DAT_110d9ac98;
                        pppppppuVar36[1] = (ulong ******)0x0;
                        func_0x00010b5ab6e4();
                        func_0x00010802fd24();
                        *pppppppuVar20 = extraout_x8;
                        pppppppuVar20[1] = (ulong ******)0x0;
                        pppppppuVar20[4] = (ulong ******)0x0;
                        *(undefined4 *)(pppppppuVar20 + 2) = 0;
                        func_0x00010802fd1c();
                        func_0x00010802fcec();
                        func_0x00010b5ab6e4(pppppppuVar20);
                        pppppppuVar36 = pppppppuVar19;
                        FUN_10802b0a0(pppppppuVar19,ppppppuVar30,pppppppuVar35,0,1);
                        pppppppuStack_c8 =
                             (ulong *******)CONCAT44(pppppppuStack_c8._4_4_,(int)pppppppuVar36);
                        func_0x00010802fd40();
                        ppppppuVar18 = (ulong ******)&PTR_PTR_1133ab220;
                        if (pppppppuVar35[8] != (ulong ******)0x0) {
                          ppppppuVar18 = pppppppuVar35[8];
                        }
                        fVar43 = *(float *)(ppppppuVar18 + 2);
                        fVar44 = -1.0;
                        if (fVar43 != 0.0) {
                          fVar44 = -fVar43;
                        }
                        fVar11 = -1.0;
                        if (!NAN(fVar43)) {
                          fVar11 = fVar44;
                        }
                        *(float *)(pppppppuVar20 + 2) = fVar11;
                        FUN_10802ebac(pppppppuVar36,pppppppuVar20);
                        auStack_7c[0] = *(uint *)(pppppppuVar35 + 10);
                        func_0x00010802fd2c();
                        pppppppuVar36 = (ulong *******)&uStack_b0;
                        func_0x0001009eba34(pppppppuVar36,&pppppppuStack_c8);
                      }
                    }
                    else if (*(int *)((long)ppppppuVar18 + 0x1c) == 1) {
                      puVar32 = (uint *)CONCAT71(ppppppuStack_100._1_7_,ppppppuStack_100._0_1_);
                      while (pppppppuVar20 = pppppppuVar36, puVar32 != puVar13) {
                        pppppppuVar36 = (ulong *******)(ulong)*puVar32;
                        func_0x00010802fd24();
                        pppppppuVar35 = pppppppuVar20;
                        func_0x00010802fcd0();
                        *pppppppuVar35 = extraout_x8_00;
                        pppppppuVar35[1] = (ulong ******)0x0;
                        pppppppuVar35[4] = (ulong ******)0x0;
                        *(undefined4 *)(pppppppuVar35 + 2) = 0;
                        pppppuVar26 = ppppppuVar18[2];
                        if (*(int *)((long)ppppppuVar18 + 0x1c) != 1) {
                          pppppuVar26 = (ulong *****)&PTR_PTR_1133a4420;
                        }
                        *(undefined4 *)(pppppppuVar35 + 2) = *(undefined4 *)(pppppuVar26 + 2);
                        func_0x00010802fd1c();
                        func_0x00010802fcec();
                        func_0x00010b5ab61c(pppppppuVar20);
                        FUN_10802af74(pppppppuVar19);
                        FUN_10802ebac(pppppppuVar36,pppppppuVar20);
                        puVar32 = puVar32 + 1;
                        pppppppuVar35 = pppppppuVar20;
                      }
                      func_0x00010731e2b0(&uStack_b0,&ppppppuStack_100);
                    }
                    else {
                      uStack_b0 = (ulong *******)0x0;
                      pppppppuStack_a8 = (ulong *******)0x0;
                      pppppppuStack_a0 = (ulong *******)0x0;
                    }
                    pppppppuVar36 = &ppppppuStack_100;
                    func_0x00010014b41c(pppppppuVar36,&uStack_b0);
                    func_0x00010802fcc8();
                  }
                  func_0x00010802fd38();
                  func_0x00010802fc7c();
LAB_10802f670:
                }
                func_0x0001002920a0(&ppppppuStack_e0);
                iVar37 = *(int *)((long)pppppppuVar22 + 0x44);
              }
              if (iVar37 == 3) {
                FUN_10802dd74(&ppuStack_138,pppppppuVar22[7],ppppppuVar30,param_2);
              }
              func_0x000107c27be0();
            } while( true );
          }
          lVar40 = *plVar33;
          pppppppuVar22 = (ulong *******)&pppppppuStack_148;
          pppppppuVar38 = (ulong *******)&pppppppuStack_148;
          if (pppppppuStack_148 != (ulong *******)0x0) {
            iVar37 = *(int *)(lVar40 + 0x10);
            pppppppuVar36 = pppppppuStack_148;
            do {
              while (pppppppuVar22 = pppppppuVar36, iVar37 < *(int *)(pppppppuVar22 + 6)) {
                pppppppuVar36 = (ulong *******)*pppppppuVar22;
                pppppppuVar38 = pppppppuVar22;
                if ((ulong *******)*pppppppuVar22 == (ulong *******)0x0) goto LAB_10802ee68;
              }
              if (iVar37 <= *(int *)(pppppppuVar22 + 6)) goto LAB_10802eed4;
              pppppppuVar36 = (ulong *******)pppppppuVar22[1];
            } while ((ulong *******)pppppppuVar22[1] != (ulong *******)0x0);
            pppppppuVar38 = pppppppuVar22 + 1;
          }
LAB_10802ee68:
          ppppppuVar18 = (ulong ******)0x48;
          __Znwm();
          pppppppuStack_a0 = (ulong *******)0x0;
          uStack_b0 = (ulong *******)ppppppuVar18;
          pppppppuStack_a8 = (ulong *******)&pppppppuStack_148;
          func_0x00010b5923c8(ppppppuVar18 + 4,0,lVar40);
          pppppppuStack_a0 = (ulong *******)CONCAT71(pppppppuStack_a0._1_7_,1);
          *ppppppuVar18 = (ulong *****)0x0;
          ppppppuVar18[1] = (ulong *****)0x0;
          ppppppuVar18[2] = (ulong *****)pppppppuVar22;
          *pppppppuVar38 = ppppppuVar18;
          if ((ulong *******)*pppppppuStack_150 != (ulong *******)0x0) {
            pppppppuStack_150 = (ulong *******)*pppppppuStack_150;
          }
          func_0x000107c27be4(pppppppuStack_148,ppppppuVar18);
          lStack_140 = lStack_140 + 1;
          uStack_b0 = (ulong *******)0x0;
          func_0x00010802fc18(&uStack_b0);
LAB_10802eed4:
          plVar33 = plVar33 + 1;
        } while( true );
      }
      func_0x00010802fc74();
      func_0x00010527a174();
      goto LAB_10802f7d4;
    }
  }
  func_0x00010802fc74();
  func_0x00010527a174();
LAB_10802f7d4:
  func_0x00010802fc5c();
LAB_10802f7d8:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10802f7dc);
  (*pcVar14)();
}



/* Entry: 10802f8dc; end: 10802f91b;  */

undefined8 * FUN_10802f8dc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 3);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0xfffffffffffffff;
    }
    return puVar2;
  }
  FUN_10802f994();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return puVar2;
}



/* Entry: 10802f91c; end: 10802f993;  */

void FUN_10802f91c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10802f994; end: 10802f99f;  */

long * FUN_10802f994(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010802fd60();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010802f9e8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10802f9a0; end: 10802fa0b;  */

long * FUN_10802f9a0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010802f9e8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10802fa0c; end: 10802fa27;  */

long * FUN_10802fa0c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10802fa54();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10802fa28; end: 10802fa53;  */

long * FUN_10802fa28(long *param_1)

{
  FUN_10802fa54();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10802fa54; end: 10802fa77;  */

void FUN_10802fa54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10802fa78; end: 10802faa3;  */

undefined8 FUN_10802fa78(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10802faa4(&uStack_28);
  return param_1;
}



/* Entry: 10802faa4; end: 10802fabb;  */

void FUN_10802faa4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10802fabc; end: 10802facf;  */

void FUN_10802fabc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  
  puVar1 = (undefined8 *)&UNK_10f47207e;
  func_0x000104c03f28();
  puVar2 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    func_0x00010802fd24();
  }
  else {
    func_0x00010b4d80e0(puVar1,0x28);
  }
  func_0x00010802fcd0();
  *puVar2 = extraout_x8;
  puVar2[1] = puVar1;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  return;
}



/* Entry: 10802fad0; end: 10802fb0f;  */

void FUN_10802fad0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010802fd24();
  }
  else {
    func_0x00010b4d80e0(param_1,0x28);
  }
  func_0x00010802fcd0();
  *puVar1 = extraout_x8;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10802fb10; end: 10802fb1b;  */

long * FUN_10802fb10(long *param_1)

{
  func_0x00010802fd60();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10802fb1c; end: 10802fc5b;  */

long * FUN_10802fb1c(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10802fc5c; end: 10802fd77;  */

void FUN_10802fc5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 10802fd78; end: 10802fe07;  */

undefined8 * FUN_10802fd78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a18230;
  param_1[2] = 0;
  param_1[1] = 0;
  func_0x00010802fdac();
  return param_1;
}



/* Entry: 10802fe08; end: 10803014f;  */

void FUN_10802fe08(ulong *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 ***pppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  undefined8 auStack_110 [2];
  undefined1 auStack_100 [16];
  int iStack_f0;
  long lStack_98;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  if (*(int *)(param_3 + 0x24) == 3) {
    if (*(int *)(*(long *)(param_3 + 0x18) + 0x1c) == 2) {
      func_0x00010b59338c(auStack_100,0,*(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10));
      if (0 < iStack_f0 || lStack_98 != 0) {
        func_0x000107c278b8(&pppuStack_128,&UNK_10f472101);
        if (-1 < (char)bStack_111) {
          uStack_120 = (ulong)bStack_111;
          pppuStack_128 = &pppuStack_128;
        }
        func_0x0001005e774c(&uStack_70,pppuStack_128,uStack_120,0,0);
        FUN_108030160(auStack_110);
        func_0x00010006369c(auStack_110[0],uStack_70,(int)uStack_68 - (int)uStack_70);
        func_0x000100100fec(&uStack_70);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_128);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        FUN_108032788();
        if ((int)auStack_110[0] == 0) {
          (**(code **)(**(long **)(param_2 + 8) + 0x10))(&uStack_70,*(long **)(param_2 + 8),param_3)
          ;
          if (*param_1 != 0) {
            FUN_10802caa8(param_1);
            __ZdlPv(*param_1);
          }
          param_1[1] = uStack_68;
          *param_1 = uStack_70;
          param_1[2] = uStack_60;
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_70 = 0;
          FUN_10802ca34(&uStack_70);
        }
        else {
          FUN_108030198(param_1,auStack_110);
        }
        plVar2 = (long *)param_1[1];
        for (plVar6 = (long *)*param_1; plVar6 != plVar2; plVar6 = plVar6 + 2) {
          lVar4 = *plVar6;
          func_0x000108030490();
          uVar5 = *(ulong *)(lVar4 + 0x10);
          puVar1 = (ulong *)(lVar4 + 0x10);
          if ((uVar5 & 1) != 0) {
            puVar1 = (ulong *)(uVar5 + 7);
          }
          for (lVar4 = (long)*(int *)(lVar4 + 0x18) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
            if (*(int *)(*puVar1 + 0x24) == 3) {
              lVar7 = *(long *)(*puVar1 + 0x18);
              *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 1;
              if (*(long *)(lVar7 + 0x40) == 0) {
                uVar5 = *(ulong *)(lVar7 + 8);
                if ((uVar5 & 1) != 0) {
                  uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
                }
                func_0x000108030588();
                *(ulong *)(lVar7 + 0x40) = uVar5;
              }
              func_0x00010b593854();
            }
            puVar1 = puVar1 + 1;
          }
        }
        func_0x000108030760();
        func_0x00010b593440(auStack_100);
        return;
      }
    }
    else {
      func_0x000108030758();
      func_0x0001074668c4();
      func_0x000108030738();
    }
    func_0x000108030758();
    func_0x00010527a174();
    func_0x000108030738();
  }
  else {
    if (*(int *)(param_3 + 0x24) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010802fe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_2 + 8) + 0x10))(param_1,*(long **)(param_2 + 8),param_3);
      return;
    }
    func_0x000108030758();
    uStack_70 = (ulong)*(uint *)(param_3 + 0x24);
    uStack_68 = 0;
    func_0x0001003a91d4(&UNK_10f472117);
    func_0x0001003a9204(auStack_100);
    func_0x0001052768d8(param_2,auStack_100);
    func_0x000108030738();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1080300b4);
  (*pcVar3)();
}



/* Entry: 108030150; end: 10803015f;  */

void FUN_108030150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010803015c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 108030160; end: 10803017f;  */

void FUN_108030160(void)

{
  undefined1 uStack_11;
  
  FUN_1080305f0(&uStack_11);
  return;
}



/* Entry: 108030180; end: 108030183;  */

undefined8 * FUN_108030180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a18230;
  FUN_10802ccc8(param_1 + 1);
  return param_1;
}



/* Entry: 108030184; end: 108030197;  */

void FUN_108030184(void)

{
  func_0x0001080305c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108030198; end: 1080301d3;  */

long FUN_108030198(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1080301d4();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_108030208();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 1080301d4; end: 108030207;  */

void FUN_1080301d4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 **)(param_1 + 8) = puVar4 + 2;
  return;
}



/* Entry: 108030208; end: 1080302c3;  */

long FUN_108030208(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar3 = param_1;
  FUN_1080302c4(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_108030398(auStack_48,plVar3,param_1[1] - *param_1 >> 4,param_1 + 2);
  lVar4 = param_2[1];
  uVar5 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar5;
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puStack_38 = puStack_38 + 2;
  FUN_108030304(param_1,auStack_48);
  lVar4 = param_1[1];
  FUN_108030420(auStack_48);
  return lVar4;
}



/* Entry: 1080302c4; end: 108030303;  */

undefined8 * FUN_1080302c4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 3);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0xfffffffffffffff;
    }
    return puVar2;
  }
  FUN_108030384();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return puVar2;
}



/* Entry: 108030304; end: 108030383;  */

void FUN_108030304(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108030384; end: 108030397;  */

long * FUN_108030384(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001080303e0();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x10;
  return plVar2;
}



/* Entry: 108030398; end: 108030403;  */

long * FUN_108030398(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001080303e0();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 108030404; end: 10803041f;  */

long * FUN_108030404(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10803044c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108030420; end: 10803044b;  */

long * FUN_108030420(long *param_1)

{
  FUN_10803044c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10803044c; end: 108030453;  */

void FUN_10803044c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    FUN_10802cfe0();
  }
  return;
}



/* Entry: 108030454; end: 1080305ef;  */

void FUN_108030454(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    FUN_10802cfe0();
  }
  return;
}



/* Entry: 1080305f0; end: 108030697;  */

undefined1 * FUN_1080305f0(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_108030698(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_110a18288;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110d10ba0;
  *(undefined4 *)(puStack_30 + 8) = 0;
  puStack_30[5] = 0;
  puStack_30[6] = 0;
  puStack_30[4] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x000108030728();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_1080306c0();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 108030698; end: 1080306bf;  */

long FUN_108030698(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1080306c0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1080306c0; end: 1080306ef;  */

void FUN_1080306c0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a18288;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080306f0; end: 1080306f3;  */

void FUN_1080306f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a18288;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080306f4; end: 108030707;  */

void FUN_1080306f4(void)

{
  func_0x000108030714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108030708; end: 108030767;  */

long FUN_108030708(long param_1)

{
  func_0x00010b592248();
  func_0x00010b59175c(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 108030768; end: 1080307f7;  */

void FUN_108030768(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_108030e08(param_1,&uStack_38,*param_2);
  if (*plVar1 == 0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    *(undefined4 *)(puVar2 + 4) = *param_2;
    uVar3 = *(undefined8 *)(param_2 + 2);
    puVar2[6] = *(undefined8 *)(param_2 + 4);
    puVar2[5] = uVar3;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = uStack_38;
    *plVar1 = (long)puVar2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
    }
    func_0x000107c27be4(param_1[1],puVar2);
    param_1[2] = param_1[2] + 1;
  }
  return;
}



/* Entry: 1080307f8; end: 108030b57;  */

void FUN_1080307f8(undefined8 *param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar5;
  ulong auStack_70 [2];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar4 = *(int *)((long)param_3 + 0x24);
  if (iVar4 == 2) {
    plVar2 = param_2;
    if (param_2[0xf] == 0) {
      plVar2 = param_2 + 1;
      __ZNSt3__15mutex4lockEv();
      if (param_2[0xf] == 0) {
        FUN_108030fd8(auStack_70);
        func_0x000108030e54(1);
        func_0x000108030e6c();
        func_0x000108030e90();
        func_0x000108030e78();
        FUN_10803122c(auStack_70);
        func_0x000108030e54(2);
        func_0x000108030e6c();
        func_0x000108030e90();
        func_0x000108030e78();
        FUN_108031540(auStack_70);
        func_0x000108030e54(3);
        func_0x000108030e6c();
        func_0x000108030e90();
        func_0x000108030e78();
        FUN_10803137c(auStack_70);
        func_0x000108030e54(4);
        func_0x000108030e6c();
        func_0x000108030e90();
        func_0x000108030e78();
      }
      func_0x000108030ed0();
    }
    if ((int)param_3[2] == 1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_108030b58(param_2 + 0xd,3);
      func_0x000108030ea8();
      if ((*(int *)((long)param_3 + 0x24) != 2) || ((*(uint *)(param_3 + 3) & 0xfffffffb) == 0)) {
        FUN_108030b58(param_2 + 0xd,4);
        func_0x000108030ea8();
      }
      func_0x000108030ebc();
      func_0x000108030ea8();
      func_0x000108030eb0();
      func_0x000108030ea8();
    }
    else {
      if ((int)param_3[2] != 2) {
        iVar4 = *(int *)((long)param_3 + 0x24);
        goto LAB_1080309ac;
      }
      func_0x000108030ebc();
      lStack_58 = plVar2[1];
      lStack_60 = *plVar2;
      if (plVar2[1] != 0) {
        do {
          func_0x000108030e80();
        } while (extraout_w10 != 0);
      }
      func_0x000108030eb0();
      lStack_48 = plVar2[1];
      lStack_50 = *plVar2;
      if (plVar2[1] != 0) {
        do {
          func_0x000108030e80();
        } while (extraout_w10_00 != 0);
      }
      FUN_108030c74(param_1,&lStack_60,2);
      lVar5 = 0x10;
      do {
        FUN_10802cfe0((long)&lStack_60 + lVar5);
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != -0x10);
    }
  }
  else {
LAB_1080309ac:
    if (iVar4 != 3) goto LAB_108030a44;
    param_3 = param_2 + 0xb;
    lStack_60 = *param_3;
    if (lStack_60 == 0) {
      __ZNSt3__15mutex4lockEv(param_2 + 1);
      FUN_1080316c4(&lStack_60);
      FUN_108030b94(param_3,&lStack_60);
      func_0x000108030ec8();
      func_0x000108030ed0();
      lStack_60 = *param_3;
    }
    lStack_58 = param_2[0xc];
    if (lStack_58 != 0) {
      do {
        func_0x000108030e80();
      } while (extraout_w10_01 != 0);
    }
    FUN_108030c74(param_1,&lStack_60,1);
    func_0x000108030ec8();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
LAB_108030a44:
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  auStack_70[0] = (ulong)*(uint *)((long)param_3 + 0x24);
  auStack_70[1] = 0;
  func_0x0001003a91d4(&UNK_10f47215c);
  func_0x0001003a9204(&lStack_60);
  func_0x0001052768d8(uVar3,&lStack_60);
  ___cxa_throw(uVar3,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108030aa4);
  (*pcVar1)();
}



/* Entry: 108030b58; end: 108030b93;  */

char * FUN_108030b58(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_18;
  
  puVar2 = &uStack_18;
  FUN_108030e08(param_1,puVar2,param_2);
  if (*param_1 != 0) {
    return (char *)(*param_1 + 0x28);
  }
  pcVar1 = "map::at:  key not found";
  func_0x000104c03f28();
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(pcVar1 + 8) = uVar4;
  *(undefined8 *)pcVar1 = uVar3;
  func_0x000108030e78();
  return pcVar1;
}



/* Entry: 108030b94; end: 108030bd3;  */

undefined8 * FUN_108030b94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000108030e78();
  return param_1;
}



/* Entry: 108030bd4; end: 108030c5b;  */

void FUN_108030bd4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long *plVar3;
  undefined1 auStack_40 [16];
  
  plVar3 = (long *)(param_2 + 0x48);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_2 + 8);
    FUN_108030ed8(auStack_40);
    FUN_108030b94(plVar3,auStack_40);
    func_0x000108030e78();
    __ZNSt3__15mutex6unlockEv(param_2 + 8);
    lVar1 = *plVar3;
  }
  lVar2 = *(long *)(param_2 + 0x50);
  *param_1 = lVar1;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000108030e80();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108030c5c; end: 108030c5f;  */

undefined8 * FUN_108030c5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a182d8;
  func_0x000108030dc8(param_1[0xe]);
  FUN_10802cfe0(param_1 + 0xb);
  FUN_10802cfe0(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 108030c60; end: 108030c73;  */

void FUN_108030c60(void)

{
  func_0x000108030d7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108030c74; end: 108030d4b;  */

undefined8 * FUN_108030c74(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = 0;
  puStack_40 = param_1;
  if (param_3 != 0) {
    if (param_3 >> 0x3c != 0) {
      FUN_108030384();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x108030d38);
      (*pcVar5)();
    }
    puVar6 = param_1 + 2;
    uVar7 = param_3;
    func_0x0001080303e0();
    puVar2 = param_2 + param_3 * 2;
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = puVar6 + uVar7 * 2;
    for (; param_2 != puVar2; param_2 = param_2 + 2) {
      lVar8 = param_2[1];
      uVar9 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar9;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
    param_1[1] = puVar6;
  }
  uStack_38 = 1;
  FUN_108030d4c(&puStack_40);
  return param_1;
}



/* Entry: 108030d4c; end: 108030e07;  */

long FUN_108030d4c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010802ca68(param_1);
  }
  return param_1;
}



/* Entry: 108030e08; end: 108030ed7;  */

long * FUN_108030e08(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, (int)plVar2[4] <= param_3) {
      if (param_3 <= (int)plVar2[4]) goto LAB_108030e4c;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108030e4c;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108030e4c:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 108030ed8; end: 108030f57;  */

void FUN_108030ed8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108032670();
  func_0x0001080325c8();
  param_1[2] = &DAT_11383d918;
  *param_1 = &PTR_DAT_110d10b00;
  param_1[1] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[4] = 0;
  func_0x000108032648(param_1 + 2,&UNK_10f47218b);
  if ((param_1[1] & 1) != 0) {
    func_0x000108032678();
  }
  func_0x000108032698();
  func_0x000108032634(*unaff_x19);
  return;
}



/* Entry: 108030f58; end: 108030fd7;  */

void FUN_108030f58(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  func_0x000107c3196c();
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    func_0x0001080326ac();
  }
  if (uVar3 == 0) {
    param_1 = *(long *)(unaff_x19 + 0x18);
    if (param_1 != 0) {
      func_0x00010b591bf8();
    }
    __ZdlPv();
  }
  if (unaff_x20 == 0) {
    uVar2 = *(uint *)(unaff_x19 + 0x10) & 0xfffffffe;
  }
  else {
    uVar1 = *(ulong *)(unaff_x20 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108032678();
    }
    if (uVar3 != uVar1) {
      func_0x00010803263c();
      unaff_x20 = param_1;
    }
    uVar2 = *(uint *)(unaff_x19 + 0x10) | 1;
  }
  *(uint *)(unaff_x19 + 0x10) = uVar2;
  *(long *)(unaff_x19 + 0x18) = unaff_x20;
  return;
}



/* Entry: 108030fd8; end: 10803110f;  */

void FUN_108030fd8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000108032670();
  func_0x0001080325c8();
  func_0x00010803243c();
  func_0x000108032770();
  *(undefined8 *)(unaff_x20 + 0x20) = 1;
  func_0x000108032648();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108032678();
  }
  func_0x000108032698();
  puVar1 = (undefined8 *)*unaff_x19;
  func_0x000108032634();
  func_0x0001080325c8();
  func_0x00010803247c();
  func_0x00010803277c();
  func_0x000108030490();
  func_0x00010803258c();
  func_0x0001080326e0();
  func_0x000108032498();
  func_0x0001080326b8();
  func_0x000108032764();
  func_0x000108032690();
  func_0x0001080324bc();
  func_0x0001080325f0();
  func_0x0001080325d0();
  func_0x000108032530(&UNK_110d10d88);
  FUN_108031110();
  func_0x000108032628();
  func_0x0001080325d0();
  func_0x000108032514();
  func_0x000108032608();
  func_0x000108032540();
  func_0x00010b593dd8();
  func_0x0001080325d8();
  func_0x0001080325d0();
  puVar2 = puVar1;
  func_0x000108032530(&UNK_110d104d8);
  func_0x000108032608();
  *puVar2 = &PTR_DAT_110d10448;
  puVar2[1] = 0;
  puVar2[2] = 0x40800000;
  func_0x00010b58f9c8(puVar1);
  func_0x0001080325fc();
  return;
}



/* Entry: 108031110; end: 10803114f;  */

void FUN_108031110(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x1c) != 2) {
    func_0x00010b592d88(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 2;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



/* Entry: 108031150; end: 10803122b;  */

void FUN_108031150(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  ulong uVar2;
  
  func_0x000107c3196c();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    func_0x0001080326ac();
  }
  if (uVar2 == 0) {
    param_1 = *(long *)(unaff_x19 + 0x30);
    if (param_1 != 0) {
      func_0x00010b592ddc();
    }
    __ZdlPv();
  }
  uVar1 = *(ulong *)(unaff_x20 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x000108032678();
  }
  if (uVar2 != uVar1) {
    func_0x00010803263c();
    unaff_x20 = param_1;
  }
  *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | 1;
  *(long *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10803122c; end: 10803137b;  */

void FUN_10803122c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108032670();
  func_0x0001080325c8();
  func_0x00010803243c();
  func_0x000108032770();
  *(undefined8 *)(unaff_x20 + 0x20) = 2;
  func_0x000108032648();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108032678();
  }
  func_0x000108032698();
  puVar1 = (undefined8 *)*unaff_x19;
  func_0x000108032634();
  func_0x0001080325c8();
  func_0x00010803247c();
  func_0x00010803277c();
  func_0x000108030490();
  func_0x00010803258c();
  func_0x0001080326e0();
  func_0x000108032498();
  func_0x0001080326b8();
  func_0x000108032764();
  func_0x000108032690();
  func_0x0001080324bc();
  func_0x0001080325f0();
  func_0x0001080325d0();
  puVar2 = puVar1;
  func_0x000108032530(&UNK_110d10d88);
  FUN_108031110();
  func_0x000108032628();
  func_0x0001080325d0();
  func_0x000108032514();
  func_0x0001080325d8();
  func_0x00010803270c();
  puVar2[2] = 0;
  func_0x000108032598();
  func_0x000108032608();
  func_0x000108032540();
  func_0x00010b5943b0(puVar2);
  func_0x00010b593eb8(puVar1,puVar2);
  func_0x0001080325c8();
  func_0x000108032618();
  *puVar1 = extraout_x8;
  puVar1[2] = 1000;
  puVar1[1] = 0;
  puVar1[4] = 0x400000000;
  puVar1[3] = 2000;
  FUN_1080322e8(puVar2 + 2);
  return;
}



/* Entry: 10803137c; end: 10803153f;  */

void FUN_10803137c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108032670();
  func_0x0001080325c8();
  func_0x00010803243c();
  func_0x000108032770();
  *(undefined8 *)(unaff_x20 + 0x20) = 3;
  func_0x000108032648();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108032678();
  }
  func_0x000108032698();
  puVar1 = (undefined8 *)*unaff_x19;
  func_0x000108032634();
  func_0x0001080325c8();
  func_0x00010803247c();
  func_0x00010803277c();
  func_0x000108030490();
  func_0x00010803258c();
  func_0x0001080326e0();
  func_0x000108032498();
  func_0x0001080326b8();
  func_0x000108032764();
  func_0x000108032690();
  func_0x0001080324bc();
  func_0x0001080325f0();
  func_0x0001080325d0();
  func_0x000108032530(&UNK_110d10d88);
  FUN_108031110();
  func_0x000108032628();
  func_0x0001080325d0();
  func_0x000108032514();
  func_0x0001080325d8();
  func_0x00010803270c();
  puVar2 = puVar1 + 2;
  *puVar2 = 0;
  func_0x000108032598();
  func_0x000108032608();
  func_0x000108032540();
  func_0x00010b594300();
  func_0x000108032714();
  func_0x0001080325c8();
  func_0x000108032618();
  *puVar1 = extraout_x8;
  puVar1[2] = 2000;
  puVar1[1] = 0;
  puVar1[4] = 0x300000000;
  *(undefined4 *)(puVar1 + 3) = 1;
  FUN_1080322e8();
  func_0x0001080325d0();
  *puVar2 = &PTR_DAT_110d104e8;
  puVar2[1] = 0;
  puVar2[3] = 0;
  func_0x00010b58fa40();
  *(undefined4 *)((long)puVar2 + 0x1c) = 1;
  puVar1 = (undefined8 *)puVar2[1];
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(undefined8 **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  func_0x000108031d48();
  puVar2[2] = puVar1;
  *(undefined4 *)(puVar1 + 2) = 0x40800000;
  func_0x0001080325fc();
  func_0x0001080325d0();
  *puVar1 = &PTR_DAT_110d104e8;
  puVar1[1] = 0;
  puVar1[3] = 0;
  func_0x000108031d80();
  *(undefined1 *)(puVar1 + 2) = 1;
  func_0x0001080325fc();
  return;
}



/* Entry: 108031540; end: 1080316c3;  */

void FUN_108031540(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000108032670();
  func_0x0001080325c8();
  func_0x00010803243c();
  func_0x000108032770();
  *(undefined8 *)(unaff_x20 + 0x20) = 4;
  func_0x000108032648();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108032678();
  }
  func_0x000108032698();
  func_0x000108032634(*unaff_x19);
  func_0x0001080325c8();
  func_0x00010803247c();
  func_0x00010803277c();
  func_0x000108030490();
  func_0x00010803258c();
  func_0x0001080326e0();
  func_0x000108032498();
  func_0x0001080326b8();
  func_0x000108032764();
  func_0x000108032690();
  func_0x0001080324bc();
  func_0x0001080325f0();
  *(uint *)(unaff_x20 + 0x10) = *(uint *)(unaff_x20 + 0x10) | 1;
  puVar1 = *(undefined8 **)(unaff_x20 + 0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(unaff_x20 + 8);
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = *(undefined8 **)((ulong)puVar1 & 0xfffffffffffffffe);
    }
    func_0x000108031e10();
    *(undefined8 **)(unaff_x20 + 0x30) = puVar1;
  }
  FUN_108031110();
  func_0x0001080325d0();
  func_0x000108032514();
  func_0x0001080325d8();
  func_0x00010803270c();
  puVar2 = puVar1 + 2;
  *puVar2 = 0;
  func_0x000108032598();
  func_0x000108032608();
  func_0x000108032540();
  func_0x00010b594300();
  func_0x000108032714();
  func_0x0001080325c8();
  func_0x000108032618();
  *puVar1 = extraout_x8;
  puVar1[2] = 1000;
  puVar1[1] = 0;
  puVar1[4] = 0x300000000;
  *(undefined4 *)(puVar1 + 3) = 1;
  FUN_1080322e8();
  func_0x0001080325d0();
  func_0x000108032530(&UNK_110d104d8);
  func_0x000108031d80();
  *(undefined1 *)(puVar2 + 2) = 1;
  func_0x0001080325fc();
  return;
}



/* Entry: 1080316c4; end: 10803175b;  */

void FUN_1080316c4(void)

{
  long lVar1;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108032670();
  func_0x0001080325c8();
  func_0x00010803243c();
  *(undefined8 *)(unaff_x20 + 0x18) = extraout_x8;
  *(undefined8 *)(unaff_x20 + 0x20) = 5;
  func_0x000108032648();
  lVar1 = *unaff_x19;
  func_0x000108032634();
  func_0x0001080325c8();
  func_0x00010803247c();
  *(undefined4 *)(lVar1 + 0x10) = 10;
  func_0x000108030490(*unaff_x19);
  func_0x00010803258c();
  lVar1 = 0x50;
  __Znwm();
  func_0x00010803272c();
  func_0x00010b592364();
  *(undefined8 *)(lVar1 + 0x48) = 30000;
  return;
}



/* Entry: 10803175c; end: 1080317ef;  */

void FUN_10803175c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_30;
  
  uVar1 = *param_2;
  func_0x00010b5918dc(uVar1);
  func_0x000100291d50(&uStack_38,uVar1);
  func_0x00010b4d1758(*param_2,uStack_38,iStack_30 - (int)uStack_38);
  func_0x00010054f8dc(&uStack_50,&uStack_38);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[2] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  func_0x000100100fec(&uStack_50);
  func_0x000100100fec(&uStack_38);
  return;
}



/* Entry: 1080317f0; end: 108031893;  */

void FUN_1080317f0(undefined1 *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_40;
  long lStack_38;
  long lStack_30;
  
  func_0x00010054f8dc(&lStack_38,param_2);
  ppuStack_68 = &PTR_DAT_110d10ba0;
  uStack_60 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (lStack_38 != lStack_30) {
    pppuVar1 = &ppuStack_68;
    func_0x00010006369c(pppuVar1,lStack_38,(int)lStack_30 - (int)lStack_38);
    if (((ulong)pppuVar1 & 1) != 0) {
      FUN_108031e48(param_1,&ppuStack_68);
      goto LAB_10803185c;
    }
  }
  *param_1 = 0;
  param_1[0x30] = 0;
LAB_10803185c:
  func_0x00010b591730(&ppuStack_68);
  func_0x000100100fec(&lStack_38);
  return;
}



/* Entry: 108031894; end: 108031937;  */

void FUN_108031894(undefined1 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  
  uVar1 = 0;
  func_0x00010054f8dc(&lStack_38,param_2);
  ppuStack_60 = &PTR_DAT_110d106c8;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  if ((lStack_38 == lStack_30) ||
     (func_0x00010006369c(&ppuStack_60,lStack_38,(int)lStack_30 - (int)lStack_38), (uVar1 & 1) == 0)
     ) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    FUN_108031f10(param_1,&ppuStack_60);
  }
  func_0x00010b59019c(&ppuStack_60);
  func_0x000100100fec(&lStack_38);
  return;
}



/* Entry: 108031938; end: 108031b23;  */

void FUN_108031938(ulong param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined **ppuVar3;
  int iVar4;
  uint uVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  long *extraout_x9;
  long *plVar10;
  ulong uVar11;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  
  FUN_10802af44();
  func_0x00010802af54();
  func_0x00010802af64();
  plVar7 = (long *)(param_2 + 0x10);
  func_0x000108032684(*plVar7);
  plVar10 = plVar7;
  if (!(bool)in_ZR) {
    plVar10 = extraout_x9;
  }
  plVar7 = plVar10 + (int)plVar7[1];
  do {
    if (plVar10 == plVar7) {
      return;
    }
    puVar9 = (ulong *)(*plVar10 + 0x10);
    uVar11 = *puVar9;
    if ((uVar11 & 1) != 0) {
      puVar9 = (ulong *)(uVar11 + 7);
    }
    puVar1 = puVar9 + *(int *)(*plVar10 + 0x18);
    for (; uVar6 = puVar9 == puVar1, !(bool)uVar6; puVar9 = puVar9 + 1) {
      uVar11 = *puVar9;
      if ((*(byte *)(uVar11 + 0x10) >> 3 & 1) != 0) {
        uVar8 = uVar11;
        FUN_10802ae94();
        plVar16 = (long *)(uVar8 + 0x10);
        func_0x000108032684(*plVar16);
        plVar17 = plVar16;
        if (!(bool)uVar6) {
          plVar17 = extraout_x9_00;
        }
        do {
          func_0x000108032684();
          plVar2 = plVar16;
          if (!(bool)uVar6) {
            plVar2 = extraout_x9_01;
          }
          lVar13 = (long)plVar17 * 0x20000000 + (long)plVar2 * -0x20000000;
          uVar14 = (long)plVar17 - (long)plVar2;
          uVar12 = uVar14;
          while( true ) {
            uVar12 = uVar12 + 8;
            if (plVar17 == plVar2 + *(int *)(uVar8 + 0x18)) {
              ppuVar3 = &PTR_PTR_1133aa498;
              if (*(undefined ***)(uVar11 + 0x48) != (undefined **)0x0) {
                ppuVar3 = *(undefined ***)(uVar11 + 0x48);
              }
              if (*(int *)(ppuVar3 + 3) == 0) {
                func_0x00010b5a7e90(uVar11);
              }
              goto LAB_108031af0;
            }
            if ((*(int *)(*plVar17 + 0x14) == 3) && (param_1 == *(uint *)(*plVar17 + 0x10))) break;
            plVar17 = plVar17 + 1;
            lVar13 = lVar13 + 0x100000000;
            uVar14 = uVar14 + 8;
          }
          iVar15 = (int)(uVar14 >> 3);
          iVar4 = (int)(uVar14 + 8 >> 3) - iVar15;
          plVar2 = plVar2 + (lVar13 >> 0x20);
          lVar13 = *(long *)(uVar8 + 0x20);
          uVar5 = (int)(uVar12 >> 3) - iVar15;
          for (uVar12 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
              uVar12 = uVar12 - 1) {
            if ((lVar13 == 0) && (*plVar2 != 0)) {
              func_0x000108032720();
            }
            plVar2 = plVar2 + 1;
          }
          uVar6 = iVar4 == 1;
          if (0 < iVar4) {
            func_0x00010b4d370c(plVar16,uVar14 >> 3);
          }
          func_0x00010b5a7e30(uVar11);
          func_0x00010b5a7e60(uVar11);
        } while( true );
      }
LAB_108031af0:
    }
    plVar10 = plVar10 + 1;
  } while( true );
}



/* Entry: 108031b24; end: 108031c47;  */

bool FUN_108031b24(long param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long *extraout_x9;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  plVar2 = (long *)(param_1 + 0x10);
  func_0x000108032684(*plVar2);
  plVar1 = plVar2;
  if (!(bool)in_ZR) {
    plVar1 = extraout_x9;
  }
  for (lVar6 = (long)(int)plVar2[1] << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    lVar7 = *plVar1;
    iVar4 = *(int *)(lVar7 + 0x1c);
    if (iVar4 == 1) {
      uVar3 = param_2;
      FUN_10802a7e8(param_2,param_3);
      if (*(int *)(lVar7 + 0x1c) == 1) {
        iVar4 = *(int *)(lVar7 + 0x10);
      }
      else {
        iVar4 = 0;
      }
      if ((int)uVar3 != iVar4) break;
    }
    else if (iVar4 == 2) {
      lVar7 = *(long *)(lVar7 + 0x10);
      if (((*(uint *)(lVar7 + 0x10) & 1) == 0) && ((*(uint *)(lVar7 + 0x10) >> 1 & 1) == 0)) break;
      uVar3 = param_2;
      FUN_10802a6b8(param_2,param_3);
      if ((*(uint *)(lVar7 + 0x10) & 1) != 0) {
        uVar5 = *(ulong *)(*(long *)(lVar7 + 0x18) + 0x10);
        if (*(char *)(*(long *)(lVar7 + 0x18) + 0x18) == '\x01') {
          if (uVar3 < uVar5) break;
        }
        else if (uVar3 <= uVar5) break;
      }
      if ((*(uint *)(lVar7 + 0x10) >> 1 & 1) != 0) {
        uVar5 = *(ulong *)(*(long *)(lVar7 + 0x20) + 0x10);
        if (*(char *)(*(long *)(lVar7 + 0x20) + 0x18) == '\x01') {
          if (uVar5 < uVar3) break;
        }
        else if (uVar5 <= uVar3) break;
      }
    }
    else if (iVar4 == 0) break;
    plVar1 = plVar1 + 1;
  }
  return lVar6 == 0;
}



/* Entry: 108031c48; end: 108031d1b;  */

undefined4 FUN_108031c48(long param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  
  ppuVar1 = &PTR_PTR_1133aaf30;
  if (*(undefined ***)(param_1 + 0x30) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x30);
  }
  FUN_10802a9f4(&lStack_58,ppuVar1);
  lVar5 = lStack_58;
  do {
    if (lVar5 == lStack_50) {
      uVar4 = 0;
LAB_108031ce0:
      FUN_10802b744(&lStack_58);
      return uVar4;
    }
    lVar3 = lRam0000000113824970;
    if (*(int *)(lVar5 + 0x14) == 3) {
      while (lVar3 != 0x113824978) {
        uStack_5c = *(undefined4 *)(lVar5 + 0x10);
        uVar2 = lVar3 + 0x28;
        FUN_108031d1c(uVar2,&uStack_5c);
        if ((uVar2 & 1) != 0) {
          uVar4 = *(undefined4 *)(lVar3 + 0x20);
          goto LAB_108031ce0;
        }
        func_0x000107c27be0();
      }
    }
    lVar5 = lVar5 + 0x20;
  } while( true );
}



/* Entry: 108031d1c; end: 108031e47;  */

bool FUN_108031d1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001080323d0();
  return param_1 + 8 != lVar1;
}



/* Entry: 108031e48; end: 108031e63;  */

void FUN_108031e48(long param_1)

{
  FUN_108031e64();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 108031e64; end: 108031e6f;  */

undefined8 * FUN_108031e64(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d10ba0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_108031eac(param_1,param_2);
  return param_1;
}



/* Entry: 108031e70; end: 108031eab;  */

undefined8 * FUN_108031e70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110d10ba0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_108031eac(param_1,param_3);
  return param_1;
}



/* Entry: 108031eac; end: 108031f0f;  */

long FUN_108031eac(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b591ba4(param_1);
    }
    else {
      func_0x00010b591b6c(param_1);
    }
  }
  return param_1;
}



/* Entry: 108031f10; end: 108031f2b;  */

void FUN_108031f10(long param_1)

{
  FUN_108031f2c();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108031f2c; end: 108031f37;  */

undefined8 * FUN_108031f2c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d106c8;
  param_1[1] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_108031f74(param_1,param_2);
  return param_1;
}



/* Entry: 108031f38; end: 108031f73;  */

undefined8 * FUN_108031f38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110d106c8;
  param_1[1] = param_2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_108031f74(param_1,param_3);
  return param_1;
}



/* Entry: 108031f74; end: 108031fd7;  */

long FUN_108031f74(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b590594(param_1);
    }
    else {
      func_0x00010b59055c(param_1);
    }
  }
  return param_1;
}



/* Entry: 108031fd8; end: 108032017;  */

void FUN_108031fd8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_108031fd8(*param_1);
    FUN_108031fd8(param_1[1]);
    func_0x000107c28474(param_1 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 108032018; end: 1080320cb;  */

void FUN_108032018(ulong *param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000108032660();
  if ((unaff_x21 & 1) != 0) {
    func_0x0001080326ac();
  }
  func_0x00010803274c();
  if (((bool)in_ZR) && (func_0x0001080326c0(), (int)param_1 == 0)) {
    func_0x000108032460();
    iVar2 = (int)param_1;
    if ((int)unaff_x22 < iVar2) {
      func_0x000108032564();
      *(undefined8 *)(unaff_x21 + (long)iVar2 * 8) = unaff_x22;
    }
    func_0x000108032574();
    if ((extraout_x8 & 1) != 0) {
      func_0x000108032650();
    }
    return;
  }
  func_0x0001080325b4();
  func_0x000107c3196c();
  if ((param_3 == (ulong *)0x0) && (param_4 != (ulong *)0x0)) {
    if (unaff_x20 != 0) {
      func_0x000108032500();
    }
  }
  else if (param_4 != param_3) {
    FUN_1080320cc();
    func_0x0001080324ec();
    param_1 = param_4;
  }
  func_0x000108032758();
  uVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    func_0x000100064580();
code_r0x0001053a9270:
    uVar4 = *param_1;
  }
  else {
    puVar3 = param_1;
    func_0x0001053a91c8();
    uVar4 = param_1[1];
    if ((int)puVar3 != 0) {
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_00;
      }
      if (((long *)*puVar3 != (long *)0x0) && (param_1[2] == 0)) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar3 = param_1;
    func_0x00010006818c();
    uVar1 = (int)uVar4 == (int)puVar3;
    if ((int)uVar4 < (int)puVar3) {
      uVar1 = (*param_1 & 1) == 0;
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar4 = *puVar3;
      func_0x00010006818c(param_1);
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_01;
      }
      *puVar3 = uVar4;
      goto code_r0x0001053a9270;
    }
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar4);
code_r0x0001053a9278:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    param_1 = extraout_x9;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1080320cc; end: 108032107;  */

void FUN_1080320cc(long param_1)

{
  if (param_1 == 0) {
    func_0x0001080325c8();
  }
  else {
    func_0x000108032700();
  }
  func_0x0001080326a0(&UNK_110d10ec8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 108032108; end: 1080321b7;  */

void FUN_108032108(ulong *param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000108032660();
  if ((unaff_x21 & 1) != 0) {
    func_0x0001080326ac();
  }
  func_0x00010803274c();
  if (((bool)in_ZR) && (func_0x0001080326c0(), (int)param_1 == 0)) {
    func_0x000108032460();
    iVar2 = (int)param_1;
    if ((int)unaff_x22 < iVar2) {
      func_0x000108032564();
      *(undefined8 *)(unaff_x21 + (long)iVar2 * 8) = unaff_x22;
    }
    func_0x000108032574();
    if ((extraout_x8 & 1) != 0) {
      func_0x000108032650();
    }
    return;
  }
  func_0x0001080325b4();
  func_0x000107c3196c();
  if ((param_3 == (ulong *)0x0) && (param_4 != (ulong *)0x0)) {
    func_0x000108032500();
  }
  else if (param_4 != param_3) {
    FUN_1080321b8();
    func_0x0001080324ec();
    param_1 = param_4;
  }
  func_0x000108032758();
  uVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    func_0x000100064580();
code_r0x0001053a9270:
    uVar4 = *param_1;
  }
  else {
    puVar3 = param_1;
    func_0x0001053a91c8();
    uVar4 = param_1[1];
    if ((int)puVar3 != 0) {
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_00;
      }
      if (((long *)*puVar3 != (long *)0x0) && (param_1[2] == 0)) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar3 = param_1;
    func_0x00010006818c();
    uVar1 = (int)uVar4 == (int)puVar3;
    if ((int)uVar4 < (int)puVar3) {
      uVar1 = (*param_1 & 1) == 0;
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar4 = *puVar3;
      func_0x00010006818c(param_1);
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_01;
      }
      *puVar3 = uVar4;
      goto code_r0x0001053a9270;
    }
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar4);
code_r0x0001053a9278:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    param_1 = extraout_x9;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1080321b8; end: 1080321ff;  */

void FUN_1080321b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    func_0x000108032690();
  }
  else {
    func_0x00010b4d80e0(param_1,0x40);
  }
  func_0x0001080326a0(&UNK_110d10dd8);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  return;
}



/* Entry: 108032200; end: 1080322af;  */

void FUN_108032200(ulong *param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000108032660();
  if ((unaff_x21 & 1) != 0) {
    func_0x0001080326ac();
  }
  func_0x00010803274c();
  if (((bool)in_ZR) && (func_0x0001080326c0(), (int)param_1 == 0)) {
    func_0x000108032460();
    iVar2 = (int)param_1;
    if ((int)unaff_x22 < iVar2) {
      func_0x000108032564();
      *(undefined8 *)(unaff_x21 + (long)iVar2 * 8) = unaff_x22;
    }
    func_0x000108032574();
    if ((extraout_x8 & 1) != 0) {
      func_0x000108032650();
    }
    return;
  }
  func_0x0001080325b4();
  func_0x000107c3196c();
  if ((param_3 == (ulong *)0x0) && (param_4 != (ulong *)0x0)) {
    func_0x000108032500();
  }
  else if (param_4 != param_3) {
    FUN_1080322b0();
    func_0x0001080324ec();
    param_1 = param_4;
  }
  func_0x000108032758();
  uVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    func_0x000100064580();
code_r0x0001053a9270:
    uVar4 = *param_1;
  }
  else {
    puVar3 = param_1;
    func_0x0001053a91c8();
    uVar4 = param_1[1];
    if ((int)puVar3 != 0) {
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_00;
      }
      if (((long *)*puVar3 != (long *)0x0) && (param_1[2] == 0)) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar3 = param_1;
    func_0x00010006818c();
    uVar1 = (int)uVar4 == (int)puVar3;
    if ((int)uVar4 < (int)puVar3) {
      uVar1 = (*param_1 & 1) == 0;
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar4 = *puVar3;
      func_0x00010006818c(param_1);
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_01;
      }
      *puVar3 = uVar4;
      goto code_r0x0001053a9270;
    }
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar4);
code_r0x0001053a9278:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    param_1 = extraout_x9;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1080322b0; end: 1080322e7;  */

void FUN_1080322b0(long param_1)

{
  if (param_1 == 0) {
    func_0x0001080325d0();
  }
  else {
    func_0x0001080326f4();
  }
  func_0x0001080326a0(&UNK_110d104d8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1080322e8; end: 108032397;  */

void FUN_1080322e8(ulong *param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000108032660();
  if ((unaff_x21 & 1) != 0) {
    func_0x0001080326ac();
  }
  func_0x00010803274c();
  if (((bool)in_ZR) && (func_0x0001080326c0(), (int)param_1 == 0)) {
    func_0x000108032460();
    iVar2 = (int)param_1;
    if ((int)unaff_x22 < iVar2) {
      func_0x000108032564();
      *(undefined8 *)(unaff_x21 + (long)iVar2 * 8) = unaff_x22;
    }
    func_0x000108032574();
    if ((extraout_x8 & 1) != 0) {
      func_0x000108032650();
    }
    return;
  }
  func_0x0001080325b4();
  func_0x000107c3196c();
  if ((param_3 == (ulong *)0x0) && (param_4 != (ulong *)0x0)) {
    func_0x000108032500();
  }
  else if (param_4 != param_3) {
    FUN_108032398();
    func_0x0001080324ec();
    param_1 = param_4;
  }
  func_0x000108032758();
  uVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    func_0x000100064580();
code_r0x0001053a9270:
    uVar4 = *param_1;
  }
  else {
    puVar3 = param_1;
    func_0x0001053a91c8();
    uVar4 = param_1[1];
    if ((int)puVar3 != 0) {
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_00;
      }
      if (((long *)*puVar3 != (long *)0x0) && (param_1[2] == 0)) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar3 = param_1;
    func_0x00010006818c();
    uVar1 = (int)uVar4 == (int)puVar3;
    if ((int)uVar4 < (int)puVar3) {
      uVar1 = (*param_1 & 1) == 0;
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar4 = *puVar3;
      func_0x00010006818c(param_1);
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_01;
      }
      *puVar3 = uVar4;
      goto code_r0x0001053a9270;
    }
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar4);
code_r0x0001053a9278:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    param_1 = extraout_x9;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 108032398; end: 10803240f;  */

void FUN_108032398(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001080325c8();
  }
  else {
    func_0x000108032700();
  }
  func_0x000108032618();
  *puVar1 = extraout_x8;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 108032410; end: 108032787;  */

long FUN_108032410(undefined8 param_1,uint *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(uint *)(param_3 + 0x1c)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 108032788; end: 10803283f;  */

bool FUN_108032788(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) &&
     (*(int *)(*(long *)(param_1 + 0x18) + 0x20) != 0 && *(int *)(param_1 + 0x28) == 2)) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x18);
    if (0 < (int)uVar1) {
      puVar3 = (ulong *)(*(long *)(param_1 + 0x20) + 0x10);
      uVar4 = *puVar3;
      if ((uVar4 & 1) != 0) {
        puVar3 = (ulong *)(uVar4 + 7);
      }
      lVar5 = (ulong)uVar1 << 3;
      do {
        if (lVar5 == 0) {
          return true;
        }
        uVar4 = *puVar3;
        if (*(int *)(uVar4 + 0x24) == 3) {
          iVar2 = (int)*(undefined8 *)(uVar4 + 0x18);
          func_0x00010802d194();
          if (iVar2 == 0) {
            return lVar5 == 0;
          }
        }
        else if (*(int *)(uVar4 + 0x24) == 2) {
          uVar4 = *(ulong *)(uVar4 + 0x18);
          func_0x00010802eb30();
          if ((uVar4 & 1) == 0) {
            return lVar5 == 0;
          }
        }
        puVar3 = puVar3 + 1;
        lVar5 = lVar5 + -8;
      } while( true );
    }
  }
  return false;
}


