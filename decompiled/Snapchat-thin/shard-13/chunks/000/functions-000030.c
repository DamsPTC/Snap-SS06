/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d9fe2c; end: 109d9fe9f;  */

undefined8 * FUN_109d9fe2c(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*param_1 + 0x7e8);
  FUN_109d34148(puVar1,0x20,3);
  *puVar1 = param_1;
  *(undefined4 *)(puVar1 + 1) = 0x10;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  if (param_3 != 0) {
    FUN_109d9fbf8(puVar1,param_2,param_3);
  }
  return puVar1;
}



/* Entry: 109d9fea0; end: 109d9ffbf;  */

void FUN_109d9fea0(long *param_1,ulong *param_2,undefined1 param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  puVar3 = param_2;
  func_0x000107c2af58();
  lVar2 = 0x14;
  if (param_2[1] != *param_2) {
    lVar2 = 0x10;
  }
  puVar1 = (ulong *)(param_2[1] + (ulong)*(uint *)((long)param_2 + lVar2) * 8);
  puVar4 = puVar3;
  for (; (puVar1 != puVar3 && (puVar4 = puVar3, 0xfffffffffffffffd < *puVar3)); puVar3 = puVar3 + 1)
  {
    puVar4 = puVar1;
  }
  *param_1 = (long)puVar4;
  param_1[1] = (long)puVar1;
  *(undefined1 *)(param_1 + 2) = param_3;
  return;
}



/* Entry: 109d9ffc0; end: 109da004b;  */

void FUN_109d9ffc0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)*param_1;
  lVar1 = lVar3 + 0x8e8;
  puStack_40 = param_1;
  uStack_38 = param_2;
  FUN_109da1348(lVar1,&puStack_40);
  if (*(long *)(lVar1 + 0x10) == 0) {
    puVar2 = (undefined8 *)(lVar3 + 0x7e8);
    FUN_109d34148(puVar2,0x28,3);
    *puVar2 = *param_1;
    puVar2[3] = param_1;
    puVar2[4] = param_2;
    puVar2[2] = puVar2 + 3;
    puVar2[1] = 0x100000011;
    *(undefined8 **)(lVar1 + 0x10) = puVar2;
  }
  return;
}



/* Entry: 109da004c; end: 109da0057;  */

void FUN_109da004c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  puStack_40 = param_1;
  if ((param_2 >> 0x20 & 1) == 0) {
    lVar3 = *(long *)*param_1;
    uStack_38 = param_2 & 0xffffffff;
    lVar1 = lVar3 + 0x900;
    FUN_109da1690(lVar1,&puStack_40);
    if (*(long *)(lVar1 + 0x10) == 0) {
      puVar2 = (undefined8 *)(lVar3 + 0x7e8);
      FUN_109d34148(puVar2,0x28,3);
      *puVar2 = *param_1;
      puVar2[3] = param_1;
      *(int *)(puVar2 + 4) = (int)param_2;
      puVar2[2] = puVar2 + 3;
      puVar2[1] = 0x100000012;
      *(undefined8 **)(lVar1 + 0x10) = puVar2;
    }
    return;
  }
  lVar3 = *(long *)*param_1;
  uStack_38 = param_2 & 0xffffffff | 0x100000000;
  lVar1 = lVar3 + 0x900;
  FUN_109da1690(lVar1,&puStack_40);
  if (*(long *)(lVar1 + 0x10) == 0) {
    puVar2 = (undefined8 *)(lVar3 + 0x7e8);
    FUN_109d34148(puVar2,0x28,3);
    *puVar2 = *param_1;
    puVar2[3] = param_1;
    *(int *)(puVar2 + 4) = (int)param_2;
    puVar2[2] = puVar2 + 3;
    puVar2[1] = 0x100000013;
    *(undefined8 **)(lVar1 + 0x10) = puVar2;
  }
  return;
}



/* Entry: 109da0058; end: 109da030f;  */

void FUN_109da0058(undefined8 *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  lVar3 = *(long *)*param_1;
  uStack_38 = (ulong)param_2 | 0x100000000;
  lVar1 = lVar3 + 0x900;
  puStack_40 = param_1;
  FUN_109da1690(lVar1,&puStack_40);
  if (*(long *)(lVar1 + 0x10) == 0) {
    puVar2 = (undefined8 *)(lVar3 + 0x7e8);
    FUN_109d34148(puVar2,0x28,3);
    *puVar2 = *param_1;
    puVar2[3] = param_1;
    *(uint *)(puVar2 + 4) = param_2;
    puVar2[2] = puVar2 + 3;
    puVar2[1] = 0x100000013;
    *(undefined8 **)(lVar1 + 0x10) = puVar2;
  }
  return;
}



/* Entry: 109da0310; end: 109da0377;  */

undefined1  [16] FUN_109da0310(undefined8 *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((5 < (ulong)param_1[4]) &&
     (*(int *)param_1[3] == 0x72697073 && (short)((int *)param_1[3])[1] == 0x2e76)) {
    lVar1 = *(long *)*param_1 + 0x768;
    func_0x000109da017c(lVar1,0);
    auVar3._8_8_ = 3;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(long *)*param_1 + 0x618;
  return auVar2;
}



/* Entry: 109da0378; end: 109da03d3;  */

undefined4 * FUN_109da0378(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puStack_28;
  
  puVar1 = param_1;
  FUN_109da03d4(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109da0468(param_1,param_2,param_2);
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 2) = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109da03d4; end: 109da0467;  */

undefined8 FUN_109da03d4(long *param_1,int *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar4 = 0;
    piVar5 = (int *)0x0;
  }
  else {
    iVar2 = *param_2;
    uVar3 = (int)param_1[2] - 1;
    uVar6 = iVar2 * 0x25 & uVar3;
    piVar5 = (int *)(*param_1 + (ulong)uVar6 * 0x10);
    iVar8 = *piVar5;
    if (iVar2 != iVar8) {
      iVar9 = 1;
      piVar7 = (int *)0x0;
      do {
        if (iVar8 == -1) {
          uVar4 = 0;
          if (piVar7 != (int *)0x0) {
            piVar5 = piVar7;
          }
          goto LAB_109da0414;
        }
        piVar1 = piVar5;
        if (piVar7 != (int *)0x0 || iVar8 != -2) {
          piVar1 = piVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar3;
        piVar5 = (int *)(*param_1 + (ulong)uVar6 * 0x10);
        iVar8 = *piVar5;
        piVar7 = piVar1;
      } while (iVar2 != iVar8);
    }
    uVar4 = 1;
  }
LAB_109da0414:
  *param_3 = (long)piVar5;
  return uVar4;
}



/* Entry: 109da0468; end: 109da050f;  */

int * FUN_109da0468(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  int *piStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109da04b4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109da0510(param_1,uVar1);
  FUN_109da03d4(param_1,param_3,&piStack_28);
  param_4 = piStack_28;
LAB_109da04b4:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109da0510; end: 109da06bf;  */

void FUN_109da0510(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (uint *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined4 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (uint *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xffffffff;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 4;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if (*puVar7 < 0xfffffffe) {
          FUN_109da03d4(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          *(undefined8 *)(puStack_38 + 2) = *(undefined8 *)(puVar7 + 2);
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 4;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xffffffff;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 4;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109da06c0; end: 109da07ab;  */

undefined8 FUN_109da06c0(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  
  lVar3 = param_1[2];
  if ((int)lVar3 == 0) {
    uVar5 = 0;
    plVar8 = (long *)0x0;
  }
  else {
    lVar9 = *param_1;
    uVar4 = param_2;
    FUN_109da080c();
    uVar2 = (int)lVar3 - 1;
    uVar10 = (uint)uVar4 & uVar2;
    plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
    uVar4 = param_2;
    FUN_109da07ac(param_2,*plVar8);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)0x0;
      iVar7 = 1;
      do {
        if (*plVar8 == -0x1000) {
          uVar5 = 0;
          if (plVar6 != (long *)0x0) {
            plVar8 = plVar6;
          }
          goto LAB_109da0724;
        }
        plVar1 = plVar8;
        if (plVar6 != (long *)0x0 || *plVar8 != -0x2000) {
          plVar1 = plVar6;
        }
        uVar10 = uVar10 + iVar7 & uVar2;
        plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
        uVar4 = param_2;
        FUN_109da07ac(param_2,*plVar8);
        plVar6 = plVar1;
        iVar7 = iVar7 + 1;
      } while ((int)uVar4 == 0);
    }
    uVar5 = 1;
  }
LAB_109da0724:
  *param_3 = (long)plVar8;
  return uVar5;
}



/* Entry: 109da07ac; end: 109da080b;  */

undefined8 FUN_109da07ac(undefined8 param_1,ulong param_2)

{
  undefined8 uStack_30;
  undefined8 *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  if ((param_2 | 0x1000) == 0xfffffffffffff000) {
    return 0;
  }
  puStack_28 = *(undefined8 **)(param_2 + 0x10) + 1;
  uStack_30 = **(undefined8 **)(param_2 + 0x10);
  lStack_20 = (long)((ulong)*(uint *)(param_2 + 0xc) * 8 + -8) >> 3;
  uStack_18 = 0xff < *(uint *)(param_2 + 8);
  FUN_109da0a24(param_1,&uStack_30);
  return param_1;
}



/* Entry: 109da080c; end: 109da089f;  */

/* WARNING: Possible PIC construction at 0x000109da0870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109da0874) */
/* WARNING: Removing unreachable block (ram,0x000109da089c) */
/* WARNING: Removing unreachable block (ram,0x000109da088c) */

void FUN_109da080c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1[1];
  func_0x000109da0918(lVar1,lVar1 + param_1[2] * 8);
  FUN_109d2fb48(&uStack_a8);
  uStack_a8 = *param_1;
  uStack_f0 = 0;
  puVar2 = &uStack_a8;
  FUN_109d358f0(&uStack_a8,&uStack_f0,auStack_a0,auStack_68,lVar1);
  uStack_e8 = uStack_f0;
  puVar3 = &uStack_a8;
  FUN_109d35048(&uStack_a8,&uStack_e8,puVar2,auStack_68,*(undefined1 *)(param_1 + 3));
  func_0x000109d353f8(&uStack_a8,uStack_e8,puVar3,auStack_68);
  return;
}



/* Entry: 109da08a0; end: 109da0a23;  */

void FUN_109da08a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined1 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  FUN_109d358f0(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d35048(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109da0a24; end: 109da0a83;  */

undefined8 FUN_109da0a24(long *param_1,long *param_2)

{
  long lVar1;
  
  if (((*param_1 == *param_2) && ((char)param_1[3] == (char)param_2[3])) &&
     (param_1[2] == param_2[2])) {
    lVar1 = param_1[1];
    _memcmp(lVar1,param_2[1],param_1[2] << 3);
    if ((int)lVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 109da0a84; end: 109da0b2b;  */

long * FUN_109da0a84(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109da0ad0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109da0b2c(param_1,uVar1);
  FUN_109da06c0(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109da0ad0:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109da0b2c; end: 109da0cfb;  */

void FUN_109da0b2c(long *param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  int iVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  uVar2 = *(uint *)(param_1 + 2);
  puVar12 = (ulong *)*param_1;
  uVar3 = param_2 - 1U | param_2 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar7 = 0x40;
  if (0x40 < uVar3 + 1) {
    uVar7 = uVar3 + 1;
  }
  *(uint *)(param_1 + 2) = uVar7;
  puVar4 = (undefined8 *)((ulong)uVar7 << 3);
  __ZnwmSt11align_val_t(puVar4,8);
  *param_1 = (long)puVar4;
  if (puVar12 == (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
      do {
        *puVar4 = 0xfffffffffffff000;
        lVar5 = lVar5 + -8;
        puVar4 = puVar4 + 1;
      } while (lVar5 != 0);
    }
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar4 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  if (uVar2 != 0) {
    puVar13 = puVar12;
    do {
      uVar6 = *puVar13;
      if ((uVar6 | 0x1000) != 0xfffffffffffff000) {
        lVar14 = *param_1;
        puStack_68 = *(undefined8 **)(uVar6 + 0x10) + 1;
        uStack_70 = **(undefined8 **)(uVar6 + 0x10);
        lVar5 = param_1[2];
        lStack_60 = (long)((ulong)*(uint *)(uVar6 + 0xc) * 8 + -8) >> 3;
        uStack_58 = 0xff < *(uint *)(uVar6 + 8);
        uVar7 = (uint)&uStack_70;
        FUN_109da080c();
        uVar3 = (int)lVar5 - 1;
        uVar6 = *puVar13;
        uVar7 = uVar7 & uVar3;
        puVar8 = (ulong *)(lVar14 + (ulong)uVar7 * 8);
        uVar10 = *puVar8;
        if (uVar6 != uVar10) {
          iVar11 = 1;
          puVar9 = (ulong *)0x0;
          do {
            if (uVar10 == 0xfffffffffffff000) {
              if (puVar9 != (ulong *)0x0) {
                puVar8 = puVar9;
              }
              break;
            }
            puVar1 = puVar8;
            if (puVar9 != (ulong *)0x0 || uVar10 != 0xffffffffffffe000) {
              puVar1 = puVar9;
            }
            uVar7 = uVar7 + iVar11;
            iVar11 = iVar11 + 1;
            uVar7 = uVar7 & uVar3;
            puVar8 = (ulong *)(lVar14 + (ulong)uVar7 * 8);
            uVar10 = *puVar8;
            puVar9 = puVar1;
          } while (uVar6 != uVar10);
        }
        *puVar8 = uVar6;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar12 + uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar12,8);
  return;
}



/* Entry: 109da0cfc; end: 109da0d83;  */

void FUN_109da0cfc(ulong *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  FUN_109da0d84(param_2,param_4,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109da0f94(param_2,param_3,param_4);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109da0d84; end: 109da0e6f;  */

undefined8 FUN_109da0d84(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  
  lVar3 = param_1[2];
  if ((int)lVar3 == 0) {
    uVar5 = 0;
    plVar8 = (long *)0x0;
  }
  else {
    lVar9 = *param_1;
    uVar4 = param_2;
    FUN_109da0eb8();
    uVar2 = (int)lVar3 - 1;
    uVar10 = (uint)uVar4 & uVar2;
    plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
    uVar4 = param_2;
    FUN_109da0e70(param_2,*plVar8);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)0x0;
      iVar7 = 1;
      do {
        if (*plVar8 == -0x1000) {
          uVar5 = 0;
          if (plVar6 != (long *)0x0) {
            plVar8 = plVar6;
          }
          goto LAB_109da0de8;
        }
        plVar1 = plVar8;
        if (plVar6 != (long *)0x0 || *plVar8 != -0x2000) {
          plVar1 = plVar6;
        }
        uVar10 = uVar10 + iVar7 & uVar2;
        plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
        uVar4 = param_2;
        FUN_109da0e70(param_2,*plVar8);
        plVar6 = plVar1;
        iVar7 = iVar7 + 1;
      } while ((int)uVar4 == 0);
    }
    uVar5 = 1;
  }
LAB_109da0de8:
  *param_3 = (long)plVar8;
  return uVar5;
}



/* Entry: 109da0e70; end: 109da0eb7;  */

undefined8 FUN_109da0e70(undefined8 param_1,ulong param_2)

{
  undefined8 uStack_28;
  ulong uStack_20;
  byte bStack_18;
  
  if ((param_2 | 0x1000) == 0xfffffffffffff000) {
    return 0;
  }
  uStack_28 = *(undefined8 *)(param_2 + 0x10);
  uStack_20 = (ulong)*(uint *)(param_2 + 0xc);
  bStack_18 = (byte)(*(uint *)(param_2 + 8) >> 9) & 1;
  FUN_109da0f44(param_1,&uStack_28);
  return param_1;
}



/* Entry: 109da0eb8; end: 109da0f43;  */

undefined8 * FUN_109da0eb8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lStack_b0;
  undefined8 auStack_a8 [8];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *param_1;
  func_0x000109da0918(lVar1,lVar1 + param_1[1] * 8);
  lStack_b0 = lVar1;
  FUN_109d2fb48(auStack_a8);
  puVar2 = auStack_a8;
  puVar4 = (undefined8 *)0x0;
  func_0x000109da08a0(puVar2,0,auStack_a8,auStack_68,&lStack_b0,param_1 + 2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  if ((*(char *)(puVar2 + 2) == *(char *)(puVar4 + 2)) && (puVar2[1] == puVar4[1])) {
    uVar3 = *puVar2;
    _memcmp(uVar3,*puVar4,puVar2[1] << 3);
    if ((int)uVar3 == 0) {
      return (undefined8 *)0x1;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 109da0f44; end: 109da0f93;  */

undefined8 FUN_109da0f44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 2) == *(char *)(param_2 + 2)) && (param_1[1] == param_2[1])) {
    uVar1 = *param_1;
    _memcmp(uVar1,*param_2,param_1[1] << 3);
    if ((int)uVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 109da0f94; end: 109da103b;  */

long * FUN_109da0f94(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109da0fe0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109da103c(param_1,uVar1);
  FUN_109da0d84(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109da0fe0:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109da103c; end: 109da12ef;  */

void FUN_109da103c(long *param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  int iVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  
  uVar2 = *(uint *)(param_1 + 2);
  puVar12 = (ulong *)*param_1;
  uVar3 = param_2 - 1U | param_2 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar7 = 0x40;
  if (0x40 < uVar3 + 1) {
    uVar7 = uVar3 + 1;
  }
  *(uint *)(param_1 + 2) = uVar7;
  puVar4 = (undefined8 *)((ulong)uVar7 << 3);
  __ZnwmSt11align_val_t(puVar4,8);
  *param_1 = (long)puVar4;
  if (puVar12 == (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
      do {
        *puVar4 = 0xfffffffffffff000;
        lVar5 = lVar5 + -8;
        puVar4 = puVar4 + 1;
      } while (lVar5 != 0);
    }
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar4 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  if (uVar2 != 0) {
    puVar13 = puVar12;
    do {
      uVar6 = *puVar13;
      if ((uVar6 | 0x1000) != 0xfffffffffffff000) {
        lVar14 = *param_1;
        lVar5 = param_1[2];
        uStack_68 = *(undefined8 *)(uVar6 + 0x10);
        uStack_60 = (ulong)*(uint *)(uVar6 + 0xc);
        bStack_58 = (byte)(*(uint *)(uVar6 + 8) >> 9) & 1;
        uVar7 = (uint)&uStack_68;
        FUN_109da0eb8();
        uVar3 = (int)lVar5 - 1;
        uVar6 = *puVar13;
        uVar7 = uVar7 & uVar3;
        puVar8 = (ulong *)(lVar14 + (ulong)uVar7 * 8);
        uVar10 = *puVar8;
        if (uVar6 != uVar10) {
          iVar11 = 1;
          puVar9 = (ulong *)0x0;
          do {
            if (uVar10 == 0xfffffffffffff000) {
              if (puVar9 != (ulong *)0x0) {
                puVar8 = puVar9;
              }
              break;
            }
            puVar1 = puVar8;
            if (puVar9 != (ulong *)0x0 || uVar10 != 0xffffffffffffe000) {
              puVar1 = puVar9;
            }
            uVar7 = uVar7 + iVar11;
            iVar11 = iVar11 + 1;
            uVar7 = uVar7 & uVar3;
            puVar8 = (ulong *)(lVar14 + (ulong)uVar7 * 8);
            uVar10 = *puVar8;
            puVar9 = puVar1;
          } while (uVar6 != uVar10);
        }
        *puVar8 = uVar6;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar12 + uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar12,8);
  return;
}



/* Entry: 109da12f0; end: 109da1347;  */

long * FUN_109da12f0(long *param_1)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 0x40;
  param_1[1] = 0;
  FUN_109d3a7bc();
  return param_1;
}



/* Entry: 109da1348; end: 109da13a3;  */

undefined8 * FUN_109da1348(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_28;
  
  puVar2 = param_1;
  FUN_109da13a4(param_1,param_2,&puStack_28);
  if (((ulong)puVar2 & 1) == 0) {
    FUN_109da1494(param_1,param_2,param_2);
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109da13a4; end: 109da1493;  */

undefined8 FUN_109da13a4(long *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  
  if ((int)param_1[2] == 0) {
    uVar5 = 0;
    puVar8 = (ulong *)0x0;
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar9 = (ulong)(uint)((int)uVar3 * 0x25);
    uVar9 = uVar9 + (uVar9 << 0x20 ^ 0xffffffffffffffff) +
            ((ulong)((uint)(uVar2 >> 4) & 0xfffffff ^ (uint)uVar2 >> 9) << 0x20);
    uVar9 = uVar9 ^ uVar9 >> 0x16;
    uVar9 = uVar9 + (uVar9 << 0xd ^ 0xffffffffffffffff);
    uVar9 = (uVar9 ^ uVar9 >> 8) * 9;
    uVar9 = uVar9 ^ uVar9 >> 0xf;
    uVar9 = uVar9 + (uVar9 << 0x1b ^ 0xffffffffffffffff);
    uVar4 = (int)param_1[2] - 1;
    uVar10 = uVar4 & ((uint)(uVar9 >> 0x1f) ^ (uint)uVar9);
    puVar8 = (ulong *)(*param_1 + (ulong)uVar10 * 0x18);
    uVar9 = *puVar8;
    uVar6 = puVar8[1];
    if (uVar2 != uVar9 || uVar3 != uVar6) {
      iVar7 = 1;
      puVar11 = (ulong *)0x0;
      do {
        if ((uVar9 == 0xfffffffffffff000) && (uVar6 == 0xffffffffffffffff)) {
          uVar5 = 0;
          if (puVar11 != (ulong *)0x0) {
            puVar8 = puVar11;
          }
          goto LAB_109da142c;
        }
        puVar1 = puVar8;
        if ((puVar11 != (ulong *)0x0 || uVar6 != 0xfffffffffffffffe) || uVar9 != 0xffffffffffffe000)
        {
          puVar1 = puVar11;
        }
        uVar10 = uVar10 + iVar7;
        iVar7 = iVar7 + 1;
        uVar10 = uVar10 & uVar4;
        puVar8 = (ulong *)(*param_1 + (ulong)uVar10 * 0x18);
        uVar9 = *puVar8;
        uVar6 = puVar8[1];
        puVar11 = puVar1;
      } while (uVar2 != uVar9 || uVar3 != uVar6);
    }
    uVar5 = 1;
  }
LAB_109da142c:
  *param_3 = puVar8;
  return uVar5;
}



/* Entry: 109da1494; end: 109da153f;  */

long * FUN_109da1494(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109da14e0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109da1540(param_1,uVar1);
  FUN_109da13a4(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109da14e0:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000 || param_4[1] != -1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109da1540; end: 109da168f;  */

void FUN_109da1540(undefined8 *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plStack_38;
  
  uVar2 = *(uint *)(param_1 + 2);
  plVar7 = (long *)*param_1;
  uVar3 = param_2 - 1U | param_2 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar6 = 0x40;
  if (0x40 < uVar3 + 1) {
    uVar6 = uVar3 + 1;
  }
  *(uint *)(param_1 + 2) = uVar6;
  puVar4 = (undefined8 *)((ulong)uVar6 * 0x18);
  __ZnwmSt11align_val_t(puVar4,8);
  *param_1 = puVar4;
  if (plVar7 != (long *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 2) * 0x18;
      do {
        puVar4[1] = 0xffffffffffffffff;
        *puVar4 = 0xfffffffffffff000;
        lVar5 = lVar5 + -0x18;
        puVar4 = puVar4 + 3;
      } while (lVar5 != 0);
    }
    if (uVar2 != 0) {
      lVar5 = (ulong)uVar2 * 0x18;
      plVar8 = plVar7;
      do {
        if ((*plVar8 != -0x1000 || plVar8[1] != -1) && (*plVar8 != -0x2000 || plVar8[1] != -2)) {
          FUN_109da13a4(param_1,plVar8,&plStack_38);
          lVar1 = plVar8[1];
          *plStack_38 = *plVar8;
          plStack_38[1] = lVar1;
          plStack_38[2] = plVar8[2];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        plVar8 = plVar8 + 3;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(plVar7,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) * 0x18;
    do {
      puVar4[1] = 0xffffffffffffffff;
      *puVar4 = 0xfffffffffffff000;
      lVar5 = lVar5 + -0x18;
      puVar4 = puVar4 + 3;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109da1690; end: 109da16fb;  */

undefined8 * FUN_109da1690(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_28;
  
  puVar2 = param_1;
  FUN_109da16fc(param_1,param_2,&puStack_28);
  if (((ulong)puVar2 & 1) == 0) {
    FUN_109da1820(param_1,param_2,param_2);
    *param_1 = *param_2;
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)((long)param_2 + 0xc);
    *(undefined4 *)(param_1 + 1) = uVar1;
    param_1[2] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109da16fc; end: 109da181f;  */

undefined8 FUN_109da16fc(long *param_1,ulong *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  int iVar8;
  
  if ((int)param_1[2] != 0) {
    uVar4 = *param_2;
    uVar6 = (int)param_2[1] * 0x25 - (uint)*(byte *)((long)param_2 + 0xc);
    uVar5 = CONCAT44((uint)(uVar4 >> 4) & 0xfffffff ^ (uint)uVar4 >> 9,uVar6) +
            ((ulong)uVar6 << 0x20 ^ 0xffffffffffffffff);
    uVar5 = uVar5 ^ uVar5 >> 0x16;
    uVar5 = uVar5 + (uVar5 << 0xd ^ 0xffffffffffffffff);
    uVar5 = (uVar5 ^ uVar5 >> 8) * 9;
    uVar5 = uVar5 ^ uVar5 >> 0xf;
    uVar5 = uVar5 + (uVar5 << 0x1b ^ 0xffffffffffffffff);
    uVar6 = (uint)(uVar5 >> 0x1f) ^ (uint)uVar5;
    iVar8 = 1;
    puVar3 = (ulong *)0x0;
    do {
      uVar6 = uVar6 & (int)param_1[2] - 1U;
      puVar7 = (ulong *)(*param_1 + (ulong)uVar6 * 0x18);
      uVar5 = *puVar7;
      if ((uVar4 == uVar5) &&
         ((int)param_2[1] == (int)puVar7[1] &&
          (uint)*(byte *)((long)param_2 + 0xc) == (uint)*(byte *)((long)puVar7 + 0xc))) {
        uVar2 = 1;
        goto LAB_109da1808;
      }
      if (uVar5 == 0xfffffffffffff000) {
        if ((int)puVar7[1] == -1 && *(char *)((long)puVar7 + 0xc) != '\0') goto LAB_109da1810;
LAB_109da17d8:
        bVar1 = false;
      }
      else {
        if (uVar5 != 0xffffffffffffe000) goto LAB_109da17d8;
        bVar1 = *(char *)((long)puVar7 + 0xc) == '\0' && (int)puVar7[1] == -2;
      }
      if (!(bool)(bVar1 & puVar3 == (ulong *)0x0)) {
        puVar7 = puVar3;
      }
      uVar6 = uVar6 + iVar8;
      iVar8 = iVar8 + 1;
      puVar3 = puVar7;
    } while( true );
  }
  uVar2 = 0;
  puVar7 = (ulong *)0x0;
LAB_109da1808:
  *param_3 = puVar7;
  return uVar2;
LAB_109da1810:
  uVar2 = 0;
  if (puVar3 != (ulong *)0x0) {
    puVar7 = puVar3;
  }
  goto LAB_109da1808;
}



/* Entry: 109da1820; end: 109da18df;  */

long * FUN_109da1820(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109da186c;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109da18e0(param_1,uVar1);
  FUN_109da16fc(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109da186c:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (((*param_4 != -0x1000) || ((int)param_4[1] != -1)) ||
     ((*(byte *)((long)param_4 + 0xc) & 1) == 0)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109da18e0; end: 109da1a63;  */

void FUN_109da18e0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar7 = (long *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar6 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar6 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar6;
  puVar4 = (undefined8 *)((ulong)uVar6 * 0x18);
  __ZnwmSt11align_val_t(puVar4,8);
  *param_1 = puVar4;
  if (plVar7 == (long *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 2) * 0x18;
      do {
        puVar4[1] = 0x1ffffffff;
        *puVar4 = 0xfffffffffffff000;
        lVar5 = lVar5 + -0x18;
        puVar4 = puVar4 + 3;
      } while (lVar5 != 0);
    }
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) * 0x18;
    do {
      puVar4[1] = 0x1ffffffff;
      *puVar4 = 0xfffffffffffff000;
      lVar5 = lVar5 + -0x18;
      puVar4 = puVar4 + 3;
    } while (lVar5 != 0);
  }
  if (uVar1 != 0) {
    lVar5 = (ulong)uVar1 * 0x18;
    plVar8 = plVar7;
    do {
      if (*plVar8 == -0x2000) {
        if ((int)plVar8[1] != -2 || *(char *)((long)plVar8 + 0xc) != '\0') goto LAB_109da19c0;
      }
      else if (((*plVar8 != -0x1000) || ((int)plVar8[1] != -1)) ||
              ((*(byte *)((long)plVar8 + 0xc) & 1) == 0)) {
LAB_109da19c0:
        FUN_109da16fc(param_1,plVar8,&plStack_38);
        *plStack_38 = *plVar8;
        lVar3 = plVar8[1];
        *(undefined1 *)((long)plStack_38 + 0xc) = *(undefined1 *)((long)plVar8 + 0xc);
        *(int *)(plStack_38 + 1) = (int)lVar3;
        plStack_38[2] = plVar8[2];
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
      }
      plVar8 = plVar8 + 3;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(plVar7,8);
  return;
}



/* Entry: 109da1a64; end: 109da1abb;  */

undefined8 * FUN_109da1a64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109da1abc(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109da1b54(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109da1abc; end: 109da1b53;  */

undefined8 FUN_109da1abc(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109da1afc;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109da1afc:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109da1b54; end: 109da1bfb;  */

long * FUN_109da1b54(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109da1ba0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109da1bfc(param_1,uVar1);
  FUN_109da1abc(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109da1ba0:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109da1bfc; end: 109da1d27;  */

void FUN_109da1bfc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109da1abc(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          puStack_38[1] = puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109da1d28; end: 109da1d8b;  */

undefined8 * FUN_109da1d28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109da1d8c(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109da1e6c(param_1,param_2,param_2);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    param_1[2] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109da1d8c; end: 109da1e6b;  */

undefined8 FUN_109da1d8c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  lVar8 = param_1[2];
  if ((int)lVar8 == 0) {
    uVar4 = 0;
    plVar5 = (long *)0x0;
  }
  else {
    lVar10 = *param_1;
    plVar5 = param_2;
    FUN_109d3ac40();
    uVar2 = (int)lVar8 - 1;
    uVar6 = (uint)plVar5 & uVar2;
    plVar5 = (long *)(lVar10 + (ulong)uVar6 * 0x18);
    lVar8 = *plVar5;
    iVar9 = (int)plVar5[1];
    if (*param_2 != lVar8 || (int)param_2[1] != iVar9) {
      iVar3 = 1;
      plVar7 = (long *)0x0;
      do {
        if ((lVar8 == -0x1000) && (iVar9 == -1)) {
          uVar4 = 0;
          if (plVar7 != (long *)0x0) {
            plVar5 = plVar7;
          }
          goto LAB_109da1df4;
        }
        plVar1 = plVar5;
        if ((plVar7 != (long *)0x0 || iVar9 != -2) || lVar8 != -0x2000) {
          plVar1 = plVar7;
        }
        uVar6 = uVar6 + iVar3;
        iVar3 = iVar3 + 1;
        uVar6 = uVar6 & uVar2;
        plVar5 = (long *)(lVar10 + (ulong)uVar6 * 0x18);
        lVar8 = *plVar5;
        iVar9 = (int)plVar5[1];
        plVar7 = plVar1;
      } while (*param_2 != lVar8 || (int)param_2[1] != iVar9);
    }
    uVar4 = 1;
  }
LAB_109da1df4:
  *param_3 = (long)plVar5;
  return uVar4;
}



/* Entry: 109da1e6c; end: 109da1f1b;  */

long * FUN_109da1e6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109da1eb8;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109da1f1c(param_1,uVar1);
  FUN_109da1d8c(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109da1eb8:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000 || (int)param_4[1] != -1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109da1f1c; end: 109da2087;  */

void FUN_109da1f1c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar6 = (long *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 * 0x18);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (plVar6 != (long *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      puVar4 = puVar3 + (ulong)*(uint *)(param_1 + 2) * 3;
      do {
        *puVar3 = 0xfffffffffffff000;
        *(undefined4 *)(puVar3 + 1) = 0xffffffff;
        puVar3 = puVar3 + 3;
      } while (puVar3 != puVar4);
    }
    if (uVar1 != 0) {
      lVar8 = (ulong)uVar1 * 0x18;
      plVar7 = plVar6;
      do {
        if ((*plVar7 != -0x1000 || (int)plVar7[1] != -1) &&
           (*plVar7 != -0x2000 || (int)plVar7[1] != -2)) {
          FUN_109da1d8c(param_1,plVar7,&plStack_38);
          *plStack_38 = *plVar7;
          *(int *)(plStack_38 + 1) = (int)plVar7[1];
          plStack_38[2] = plVar7[2];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        plVar7 = plVar7 + 3;
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(plVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    puVar4 = puVar3 + (ulong)*(uint *)(param_1 + 2) * 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      *(undefined4 *)(puVar3 + 1) = 0xffffffff;
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar4);
  }
  return;
}



/* Entry: 109da2088; end: 109da20df;  */

undefined8 * FUN_109da2088(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109da1abc(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109da1b54(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109da20e0; end: 109da2157;  */

void FUN_109da20e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  FUN_109d358f0(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d358f0(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109da2158; end: 109da2197;  */

void FUN_109da2158(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  
  while (plVar2 = param_2, plVar2 != param_1) {
    param_2 = plVar2 + -4;
    if (*param_2 != 0) {
      lVar1 = plVar2[-3];
      *(long *)plVar2[-2] = lVar1;
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = plVar2[-2];
      }
    }
  }
  if (param_3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109da2198; end: 109da228f;  */

void FUN_109da2198(long param_1,uint param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 uStack_51;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff;
  if ((*(uint *)(param_1 + 0x14) >> 0x1e & 1) == 0) {
    lVar4 = param_1 + uVar5 * -0x20;
  }
  else {
    lVar4 = *(long *)(param_1 + -8);
  }
  puVar2 = (undefined8 *)(((ulong)param_2 * 4 + (ulong)param_2) * 8);
  if (param_3 == 0) {
    puVar2 = (undefined8 *)((ulong)param_2 << 5);
  }
  __Znwm();
  *(undefined8 **)(param_1 + -8) = puVar2;
  if (param_2 != 0) {
    puVar3 = puVar2;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = param_1;
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar2 + (ulong)param_2 * 4);
  }
  puVar3 = (undefined8 *)(param_1 + ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20);
  if ((*(uint *)(param_1 + 0x14) & 0x40000000) != 0) {
    puVar3 = puVar2;
  }
  lVar1 = lVar4 + uVar5 * 0x20;
  FUN_109d8d468(&uStack_51,lVar4,lVar1,puVar3);
  if ((param_3 != 0) && ((int)uVar5 != 0)) {
    _memmove(puVar3 + (ulong)param_2 * 4,lVar1,uVar5 << 3);
  }
  FUN_109da2158(lVar4,lVar1,1);
  return;
}



/* Entry: 109da2290; end: 109da22e7;  */

void FUN_109da2290(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + (ulong)param_2 * 0x20);
  __Znwm();
  puVar1 = puVar2 + (ulong)param_2 * 4;
  *(uint *)((long)puVar1 + 0x14) = *(uint *)((long)puVar1 + 0x14) & 0x38000000 | param_2 & 0x7ffffff
  ;
  if (param_2 != 0) {
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = puVar1;
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
  }
  return;
}



/* Entry: 109da22e8; end: 109da237f;  */

undefined8 * FUN_109da22e8(long param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = param_3 + 8;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = 0x80000000;
  }
  lVar3 = param_1 + (ulong)param_2 * 0x20 + (ulong)uVar2;
  __Znwm();
  puVar5 = (undefined8 *)(lVar3 + (ulong)uVar2);
  puVar1 = puVar5 + (ulong)param_2 * 4;
  *(uint *)((long)puVar1 + 0x14) =
       uVar4 | param_2 & 0x7ffffff | *(uint *)((long)puVar1 + 0x14) & 0x38000000;
  if (param_2 != 0) {
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = puVar1;
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
  }
  if (param_3 != 0) {
    *(ulong *)(lVar3 + (ulong)param_3) = (ulong)param_3;
  }
  return puVar1;
}



/* Entry: 109da2380; end: 109da2437;  */

void FUN_109da2380(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((uVar2 >> 0x1e & 1) == 0) {
    uVar3 = uVar2 << 5;
    uVar5 = (ulong)uVar3;
    plVar4 = (long *)(param_1 - uVar5);
    if ((int)uVar2 < 0) {
      if (uVar3 != 0) {
        puVar6 = (undefined8 *)(param_1 + -0x10);
        do {
          if (puVar6[-2] != 0) {
            lVar1 = puVar6[-1];
            *(long *)*puVar6 = lVar1;
            if (lVar1 != 0) {
              *(undefined8 *)(lVar1 + 0x10) = *puVar6;
            }
          }
          puVar6 = puVar6 + -4;
          uVar5 = uVar5 - 0x20;
        } while (uVar5 != 0);
      }
      plVar4 = (long *)((long)(plVar4 + -1) - plVar4[-1]);
    }
    else if (uVar3 != 0) {
      puVar6 = (undefined8 *)(param_1 + -0x10);
      do {
        if (puVar6[-2] != 0) {
          lVar1 = puVar6[-1];
          *(long *)*puVar6 = lVar1;
          if (lVar1 != 0) {
            *(undefined8 *)(lVar1 + 0x10) = *puVar6;
          }
        }
        puVar6 = puVar6 + -4;
        uVar5 = uVar5 - 0x20;
      } while (uVar5 != 0);
    }
  }
  else {
    plVar4 = (long *)(param_1 + -8);
    FUN_109da2158(*plVar4,*plVar4 + ((ulong)uVar2 & 0x7ffffff) * 0x20,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar4);
  return;
}



/* Entry: 109da2438; end: 109da2493;  */

long FUN_109da2438(long param_1)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_109da2494(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 >> 0x1b & 1) != 0) {
    func_0x000109d95478(param_1);
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar1 >> 0x1d & 1) != 0) {
    FUN_109d97d98(param_1);
  }
  FUN_109da258c(param_1);
  return param_1;
}



/* Entry: 109da2494; end: 109da258b;  */

void FUN_109da2494(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_50;
  ulong *apuStack_48 [2];
  undefined8 *puStack_38;
  
  lVar2 = **(long **)*param_1 + 0x960;
  puStack_38 = param_1;
  FUN_109da3bec(lVar2,&puStack_38);
  puVar4 = *(ulong **)(lVar2 + 8);
  FUN_109d2fbf4(&uStack_50,0,puVar4);
  do {
    FUN_109da3580(&uStack_50);
    puVar3 = puVar4 + 1;
    apuStack_48[0] = (ulong *)*puVar3;
    *puVar3 = (ulong)&uStack_50;
    uStack_50 = uStack_50 & 7 | (ulong)puVar3;
    if (apuStack_48[0] != (ulong *)0x0) {
      *apuStack_48[0] = *apuStack_48[0] & 7 | (ulong)apuStack_48;
    }
    uVar1 = (uint)*puVar4 >> 1 & 3;
    if (uVar1 - 2 < 2) {
      FUN_109d2fdf4(puVar4,0);
    }
    else if (uVar1 != 0) {
      (**(code **)(puVar4[-1] + 8))(puVar4 + -1);
    }
    puVar4 = apuStack_48[0];
  } while (apuStack_48[0] != (ulong *)0x0);
  FUN_109d2fb04(&uStack_50);
  return;
}



/* Entry: 109da258c; end: 109da25bf;  */

/* WARNING: Removing unreachable block (ram,0x000109da27ac) */

void FUN_109da258c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  func_0x000109da271c();
  if (puVar1 != (undefined8 *)0x0) {
    __ZdlPvSt11align_val_t();
  }
  uVar2 = *(uint *)((long)param_1 + 0x14);
  if ((uVar2 >> 0x1c & 1) != 0) {
    puStack_28 = param_1;
    func_0x000109da2808(**(long **)*param_1 + 0x90,&puStack_28);
    uVar2 = *(uint *)((long)param_1 + 0x14);
  }
  *(uint *)((long)param_1 + 0x14) = uVar2 & 0xefffffff;
  return;
}



/* Entry: 109da25c0; end: 109da263f;  */

void FUN_109da25c0(long param_1)

{
                    /* WARNING: Could not emulate address calculation at 0x000109da25dc */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e059b00)[*(byte *)(param_1 + 0x10) - 0x15] * 4 + 0x109da25e8))();
  return;
}



/* Entry: 109da2640; end: 109da2857;  */

long FUN_109da2640(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_109da2494(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 >> 0x1b & 1) != 0) {
    func_0x000109d95478(param_1);
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar1 >> 0x1d & 1) != 0) {
    FUN_109d97d98(param_1);
  }
  FUN_109da258c(param_1);
  return param_1;
}



/* Entry: 109da2858; end: 109da2a7b;  */

undefined8 * FUN_109da2858(undefined8 *param_1,undefined8 **param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  long *plVar7;
  long lVar8;
  undefined8 *unaff_x24;
  undefined8 **ppuStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 auStack_158 [32];
  long lStack_58;
  
  pppuVar6 = &ppuStack_180;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_2;
  if (((*(char *)(**(long **)*param_1 + 0xa68) != '\x01') || (*(byte *)(param_1 + 2) < 4)) &&
     ((1 < *(byte *)(param_2 + 4) || ((*(byte *)((long)param_1 + 0x17) >> 4 & 1) != 0)))) {
    unaff_x24 = auStack_158;
    uStack_160 = 0x100;
    uStack_168 = 0;
    ppuVar4 = &puStack_170;
    puStack_170 = unaff_x24;
    func_0x000109d5975c();
    ppuVar5 = ppuVar4;
    if ((*(byte *)((long)param_1 + 0x17) >> 4 & 1) == 0) {
      if (ppuVar4 != (undefined8 **)0x0) {
LAB_109da2928:
        puVar2 = param_1;
        FUN_109da2a7c();
        ppuVar5 = pppuVar6;
        if (((ulong)puVar2 & 1) == 0) {
          if (ppuStack_180 == (undefined8 **)0x0) {
            if (ppuVar4 == (undefined8 **)0x0) {
              FUN_109da258c(param_1);
              ppuVar5 = pppuVar6;
            }
            else {
              FUN_109da258c(param_1);
              puVar2 = (undefined8 *)((long)ppuVar4 + 0x11);
              __ZnwmSt11align_val_t(puVar2,8);
              _memcpy(puVar2 + 2,param_2,ppuVar4);
              *(undefined1 *)((long)(puVar2 + 2) + (long)ppuVar4) = 0;
              *puVar2 = ppuVar4;
              puVar2[1] = 0;
              plVar7 = *(long **)*param_1;
              *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x10000000;
              lVar8 = *plVar7 + 0x90;
              ppuVar5 = &puStack_178;
              puStack_178 = param_1;
              FUN_109da36fc();
              *(undefined8 **)(lVar8 + 8) = puVar2;
              puVar2 = param_1;
              func_0x000109da271c();
              puVar2[1] = param_1;
            }
          }
          else {
            if ((*(byte *)((long)param_1 + 0x17) >> 4 & 1) != 0) {
              puVar2 = param_1;
              func_0x000109da271c();
              ppuVar5 = (undefined8 **)((long)puVar2 + (ulong)*(uint *)((long)ppuStack_180 + 0x14));
              FUN_109e03714(ppuStack_180,ppuVar5,*puVar2);
              FUN_109da258c(param_1);
              if (ppuVar4 == (undefined8 **)0x0) goto LAB_109da2a10;
            }
            FUN_109da3fb4(ppuStack_180,param_2,ppuVar4,param_1);
            func_0x000109da2788(param_1);
            ppuVar5 = ppuStack_180;
          }
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x000109da271c();
      puVar3 = puVar2 + 2;
      if (((undefined8 **)*puVar2 != ppuVar4) ||
         ((ppuVar4 != (undefined8 **)0x0 &&
          (ppuVar5 = param_2, _memcmp(puVar3,param_2,ppuVar4), (int)puVar3 != 0))))
      goto LAB_109da2928;
    }
LAB_109da2a10:
    param_1 = puStack_170;
    if (puStack_170 != unaff_x24) {
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (puStack_170 != unaff_x24) {
    _free();
  }
  __Unwind_Resume();
  *ppuVar5 = (undefined8 *)0x0;
  bVar1 = *(byte *)(param_1 + 2);
  if ((param_1 == (undefined8 *)0x0) || (bVar1 < 0x1c)) {
    if ((param_1 == (undefined8 *)0x0) || (bVar1 != 0x16)) {
      if ((param_1 != (undefined8 *)0x0) && (bVar1 < 4)) {
        if (param_1[5] == 0) {
          return (undefined8 *)0x0;
        }
        puVar2 = (undefined8 *)(param_1[5] + 0x70);
        goto LAB_109da2abc;
      }
      if (param_1 == (undefined8 *)0x0) {
        return (undefined8 *)0x1;
      }
      if (bVar1 != 0x15) {
        return (undefined8 *)0x1;
      }
      lVar8 = param_1[3];
      if (lVar8 == 0) {
        return (undefined8 *)0x0;
      }
    }
    else {
      lVar8 = param_1[7];
      if (lVar8 == 0) {
        return (undefined8 *)0x0;
      }
    }
  }
  else {
    if (param_1[5] == 0) {
      return (undefined8 *)0x0;
    }
    lVar8 = *(long *)(param_1[5] + 0x38);
    if (lVar8 == 0) {
      return (undefined8 *)0x0;
    }
  }
  puVar2 = (undefined8 *)(lVar8 + 0x68);
LAB_109da2abc:
  *ppuVar5 = (undefined8 *)*puVar2;
  return (undefined8 *)0x0;
}



/* Entry: 109da2a7c; end: 109da2b07;  */

undefined8 FUN_109da2a7c(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((param_1 == 0) || (bVar1 < 0x1c)) {
    if ((param_1 == 0) || (bVar1 != 0x16)) {
      if ((param_1 != 0) && (bVar1 < 4)) {
        if (*(long *)(param_1 + 0x28) == 0) {
          return 0;
        }
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
        goto LAB_109da2abc;
      }
      if (param_1 == 0) {
        return 1;
      }
      if (bVar1 != 0x15) {
        return 1;
      }
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        return 0;
      }
    }
    else {
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 == 0) {
        return 0;
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) {
      return 0;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
    if (lVar2 == 0) {
      return 0;
    }
  }
  puVar3 = (undefined8 *)(lVar2 + 0x68);
LAB_109da2abc:
  *param_2 = *puVar3;
  return 0;
}



/* Entry: 109da2b08; end: 109da2b43;  */

void FUN_109da2b08(ulong *param_1)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  FUN_109da2858();
  if ((param_1 == (ulong *)0x0) || ((char)param_1[2] != '\0')) {
    return;
  }
  if ((*(byte *)((long)param_1 + 0x17) >> 4 & 1) != 0) {
    puVar2 = param_1;
    func_0x000109da271c();
    puVar3 = puVar2 + 2;
    if ((4 < *puVar2) && ((int)*puVar3 == 0x6d766c6c && *(char *)((long)puVar2 + 0x14) == '.')) {
      *(uint *)(param_1 + 4) = (uint)param_1[4] | 0x2000;
      FUN_109d85438();
      uVar1 = SUB84(puVar3,0);
      goto LAB_109d85600;
    }
  }
  uVar1 = 0;
  *(uint *)(param_1 + 4) = (uint)param_1[4] & 0xffffdfff;
LAB_109d85600:
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  return;
}



/* Entry: 109da2b44; end: 109da2c43;  */

void FUN_109da2b44(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_109da2c44(param_1,param_2);
  }
  if ((param_3 == 1) && ((*(byte *)(param_1 + 0x17) >> 3 & 1) != 0)) {
    FUN_109d9551c(param_1,param_2);
  }
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    plVar1 = (long *)(param_2 + 8);
    do {
      lVar2 = plVar3[3];
      if (lVar2 == 0 || *(byte *)(lVar2 + 0x10) - 0x15 < 0xffffffef) {
        if (*plVar3 != 0) {
          lVar2 = plVar3[1];
          *(long *)plVar3[2] = lVar2;
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x10) = plVar3[2];
          }
        }
        *plVar3 = param_2;
        if (param_2 != 0) {
          lVar2 = *plVar1;
          plVar3[1] = lVar2;
          if (lVar2 != 0) {
            *(long **)(lVar2 + 0x10) = plVar3 + 1;
          }
          plVar3[2] = (long)plVar1;
          *plVar1 = (long)plVar3;
        }
      }
      else {
        func_0x000109d6b7a4(lVar2,param_1,param_2);
      }
      plVar3 = *(long **)(param_1 + 8);
    } while (plVar3 != (long *)0x0);
  }
  if (*(char *)(param_1 + 0x10) == '\x16') {
    plVar3 = *(long **)(param_1 + 0x28);
    if ((plVar3 != (long *)(param_1 + 0x28)) && (*(byte *)(plVar3 + -1) - 0x1d < 0xb)) {
      lVar2 = (long)(plVar3 + -3);
      func_0x000109d8b3a8();
      if ((int)lVar2 != 0) {
        iVar4 = 0;
        do {
          func_0x000109d8b430(plVar3 + -3,iVar4);
          FUN_109d5d984();
          iVar4 = iVar4 + 1;
        } while ((int)lVar2 != iVar4);
      }
    }
    return;
  }
  return;
}



/* Entry: 109da2c44; end: 109da2d43;  */

void FUN_109da2c44(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_50;
  ulong *apuStack_48 [2];
  undefined8 *puStack_38;
  
  lVar2 = **(long **)*param_1 + 0x960;
  puStack_38 = param_1;
  FUN_109da3bec(lVar2,&puStack_38);
  puVar4 = *(ulong **)(lVar2 + 8);
  FUN_109d2fbf4(&uStack_50,0,puVar4);
  do {
    FUN_109da3580(&uStack_50);
    puVar3 = puVar4 + 1;
    apuStack_48[0] = (ulong *)*puVar3;
    *puVar3 = (ulong)&uStack_50;
    uStack_50 = uStack_50 & 7 | (ulong)puVar3;
    if (apuStack_48[0] != (ulong *)0x0) {
      *apuStack_48[0] = *apuStack_48[0] & 7 | (ulong)apuStack_48;
    }
    uVar1 = (uint)*puVar4 >> 1 & 3;
    if (uVar1 == 1) {
      (**(code **)(puVar4[-1] + 0x10))(puVar4 + -1,param_2);
    }
    else if (uVar1 == 3) {
      FUN_109d2fdf4(puVar4,param_2);
    }
    puVar4 = apuStack_48[0];
  } while (apuStack_48[0] != (ulong *)0x0);
  FUN_109d2fb04(&uStack_50);
  return;
}



/* Entry: 109da2d44; end: 109da2edf;  */

long * FUN_109da2d44(long *param_1)

{
  byte bVar1;
  short sVar2;
  long *plVar3;
  ulong *puVar4;
  undefined1 auStack_78 [16];
  byte bStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 auStack_40 [32];
  
  if (*(char *)(*param_1 + 8) == '\x0f') {
    puStack_60 = auStack_40;
    uStack_50 = 4;
    uStack_48 = 0;
    puStack_58 = puStack_60;
    func_0x000109d2ffd8(auStack_78,&puStack_60,param_1);
    do {
      bVar1 = *(byte *)(param_1 + 2);
      if (bVar1 < 0x1c) {
        if (bVar1 != 5) break;
        sVar2 = *(short *)((long)param_1 + 0x12);
        if (sVar2 == 0x22) {
LAB_109da2de8:
          plVar3 = param_1;
          FUN_109d63ce0();
          if (((ulong)plVar3 & 1) == 0) break;
        }
        else {
          if (sVar2 == 0x31) {
LAB_109da2e3c:
            if ((*(uint *)((long)param_1 + 0x14) >> 0x1e & 1) == 0) {
              puVar4 = (ulong *)(param_1 + ((ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff) * -4
                                );
            }
            else {
              puVar4 = (ulong *)param_1[-1];
            }
            param_1 = (long *)*puVar4;
            plVar3 = param_1;
            if (*(char *)(*param_1 + 8) == '\x0f') goto LAB_109da2e78;
            break;
          }
          if (sVar2 != 0x32) break;
        }
LAB_109da2e28:
        if ((*(uint *)((long)param_1 + 0x14) >> 0x1e & 1) == 0) {
          puVar4 = (ulong *)(param_1 + ((ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff) * -4);
        }
        else {
          puVar4 = (ulong *)param_1[-1];
        }
        plVar3 = (long *)*puVar4;
      }
      else {
        if (bVar1 < 0x4d) {
          if ((bVar1 != 0x21) && (bVar1 != 0x27)) {
            if (bVar1 == 0x3e) goto LAB_109da2de8;
            break;
          }
        }
        else {
          if (bVar1 == 0x4d) goto LAB_109da2e3c;
          if (bVar1 == 0x4e) goto LAB_109da2e28;
          if (bVar1 != 0x54) break;
        }
        plVar3 = param_1;
        FUN_109d8b6f8(param_1,0x2e);
        if (plVar3 == (long *)0x0) break;
      }
LAB_109da2e78:
      param_1 = plVar3;
      func_0x000109d2ffd8(auStack_78,&puStack_60,param_1);
    } while ((bStack_68 & 1) != 0);
    if (puStack_58 != puStack_60) {
      _free();
    }
  }
  return param_1;
}



/* Entry: 109da2ee0; end: 109da308b;  */

long * FUN_109da2ee0(long *param_1)

{
  byte bVar1;
  short sVar2;
  long *plVar3;
  ulong *puVar4;
  undefined1 auStack_78 [16];
  byte bStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 auStack_40 [32];
  
  if (*(char *)(*param_1 + 8) == '\x0f') {
    puStack_60 = auStack_40;
    uStack_50 = 4;
    uStack_48 = 0;
    puStack_58 = puStack_60;
    func_0x000109d2ffd8(auStack_78,&puStack_60,param_1);
    do {
      bVar1 = *(byte *)(param_1 + 2);
      if (bVar1 < 0x1c) {
        if (bVar1 == 1) {
          puVar4 = (ulong *)(param_1 + -4);
        }
        else {
          if (bVar1 != 5) break;
          sVar2 = *(short *)((long)param_1 + 0x12);
          if (sVar2 == 0x22) {
LAB_109da2f8c:
            plVar3 = param_1;
            FUN_109d63ce0();
            if (((ulong)plVar3 & 1) == 0) break;
          }
          else {
            if (sVar2 == 0x31) goto LAB_109da2fe8;
            if (sVar2 != 0x32) break;
          }
LAB_109da2fcc:
          if ((*(uint *)((long)param_1 + 0x14) >> 0x1e & 1) == 0) {
            puVar4 = (ulong *)(param_1 + ((ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff) * -4);
          }
          else {
            puVar4 = (ulong *)param_1[-1];
          }
        }
        plVar3 = (long *)*puVar4;
      }
      else {
        if (bVar1 < 0x4d) {
          if ((bVar1 != 0x21) && (bVar1 != 0x27)) {
            if (bVar1 == 0x3e) goto LAB_109da2f8c;
            break;
          }
        }
        else {
          if (bVar1 == 0x4d) {
LAB_109da2fe8:
            if ((*(uint *)((long)param_1 + 0x14) >> 0x1e & 1) == 0) {
              puVar4 = (ulong *)(param_1 + ((ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff) * -4
                                );
            }
            else {
              puVar4 = (ulong *)param_1[-1];
            }
            param_1 = (long *)*puVar4;
            plVar3 = param_1;
            if (*(char *)(*param_1 + 8) == '\x0f') goto LAB_109da3024;
            break;
          }
          if (bVar1 == 0x4e) goto LAB_109da2fcc;
          if (bVar1 != 0x54) break;
        }
        plVar3 = param_1;
        FUN_109d8b6f8(param_1,0x2e);
        if (plVar3 == (long *)0x0) break;
      }
LAB_109da3024:
      param_1 = plVar3;
      func_0x000109d2ffd8(auStack_78,&puStack_60,param_1);
    } while ((bStack_68 & 1) != 0);
    if (puStack_58 != puStack_60) {
      _free();
    }
  }
  return param_1;
}



/* Entry: 109da308c; end: 109da357f;  */

/* WARNING: Removing unreachable block (ram,0x000109d7335c) */
/* WARNING: Removing unreachable block (ram,0x000109d7333c) */
/* WARNING: Removing unreachable block (ram,0x000109d734b0) */

uint * FUN_109da308c(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  ulong *puVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  uint *puVar18;
  
  bVar1 = (byte)param_1[4];
  uVar11 = (uint)bVar1;
  if (bVar1 < 0x15) {
    if (uVar11 - 2 < 2) {
      uVar11 = param_1[8] >> 0x11 & 0x3f;
      if (uVar11 != 0) {
        return (uint *)(ulong)(uVar11 - 1);
      }
      if (bVar1 != 3) {
        return (uint *)0x0;
      }
      puVar18 = *(uint **)(param_1 + 6);
      puVar9 = puVar18;
      FUN_109d320a4(puVar18,0);
      if ((int)puVar9 == 0) {
        return puVar9;
      }
      uVar11 = param_1[8] & 0xf;
      uVar6 = 1;
      if (uVar11 == 1) {
LAB_109da3380:
        puVar9 = (uint *)&UNK_10e043f98;
        puVar8 = param_2;
        do {
          uVar15 = puVar18[2];
          puVar12 = (uint *)(ulong)uVar15;
          uVar11 = (uint)((ulong)puVar12 & 0xff);
          uVar4 = uVar6;
          puVar7 = puVar8;
          switch((ulong)puVar12 & 0xff) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
            puVar7 = param_2;
code_r0x000109d73188:
            FUN_109d3024c();
            puVar8 = *(uint **)(param_2 + 0x10);
            param_2 = (uint *)(ulong)param_2[0x12];
            puVar18 = puVar7;
            puVar9 = puVar8;
code_r0x000109d731a8:
            func_0x000109d72f48();
            if ((puVar8 == puVar9 + (long)param_2 * 2) ||
               ((*puVar8 & 0xff) != 0x66 || *puVar8 >> 8 != (uint)puVar18)) {
              uVar17 = (ulong)((uint)puVar18 >> 3);
              puVar12 = (uint *)0x0;
              if (uVar17 != 0) {
                uVar17 = uVar17 - 1;
                uVar17 = uVar17 | uVar17 >> 1;
                uVar17 = uVar17 | uVar17 >> 2;
                puVar12 = (uint *)(uVar17 | uVar17 >> 4);
code_r0x000109d731e8:
                uVar17 = (ulong)puVar12 | (ulong)puVar12 >> 8;
                puVar12 = (uint *)(uVar17 | uVar17 >> 0x10);
code_r0x000109d73284:
                puVar12 = (uint *)((long)puVar12 + 1);
              }
code_r0x000109d73288:
              uVar15 = (uint)LZCOUNT(puVar12);
code_r0x000109d7328c:
              puVar8 = (uint *)(ulong)(0x3f - uVar15);
            }
            else {
code_r0x000109d73310:
              uVar6 = 0;
code_r0x000109d73314:
              puVar12 = (uint *)0x4;
code_r0x000109d73318:
              if ((bool)uVar6) {
                puVar12 = (uint *)((long)puVar12 + 1);
              }
code_r0x000109d7331c:
              puVar8 = (uint *)(ulong)*(byte *)((long)puVar8 + (long)puVar12);
            }
code_r0x000109d73320:
code_r0x000109d73324:
code_r0x000109d73328:
            return puVar8;
          case 7:
          case 9:
          case 0xc:
          case 0xe:
          case 0x14:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x109d73378);
            (*pcVar3)();
          case 8:
          case 0xb6:
            puVar12 = *(uint **)(param_2 + 0x3a);
          case 0xc6:
          case 0xd2:
          case 0xe9:
          case 0xfe:
            puVar8 = (uint *)(ulong)(byte)*puVar12;
            goto code_r0x000109d73320;
          case 10:
          case 0x12:
          case 0x13:
            puVar9 = param_2;
            FUN_109d3024c(param_2,puVar18);
            puVar12 = *(uint **)(param_2 + 0x10);
            uVar11 = param_2[0x12];
            puVar8 = puVar12;
            func_0x000109d72f48(puVar12,(ulong)uVar11,0x76,puVar9);
            uVar6 = puVar8 == puVar12 + (ulong)uVar11 * 2;
          case 199:
            if (!(bool)uVar6) {
code_r0x000109d7322c:
              puVar12 = (uint *)(ulong)*puVar8;
code_r0x000109d73230:
              uVar11 = (uint)puVar12 & 0xff;
code_r0x000109d73234:
              uVar15 = (uint)((ulong)puVar12 >> 8);
code_r0x000109d73238:
              uVar4 = uVar11 == 0x76;
code_r0x000109d7323c:
              uVar6 = false;
              if ((bool)uVar4) {
                uVar6 = uVar15 == (uint)puVar9;
              }
code_r0x000109d73240:
              if ((bool)uVar6) goto code_r0x000109d73310;
            }
code_r0x000109d73244:
            FUN_109d3024c(param_2,puVar18);
            if ((undefined *)((long)param_2 + 7) < (undefined *)0x8) {
              puVar12 = (uint *)0x0;
              goto code_r0x000109d73288;
            }
            puVar12 = (uint *)((ulong)((long)param_2 + 7) >> 3);
code_r0x000109d73268:
            puVar12 = (uint *)((long)puVar12 + -1);
code_r0x000109d7326c:
            puVar12 = (uint *)((ulong)puVar12 | (ulong)puVar12 >> 1);
code_r0x000109d73270:
            uVar17 = (ulong)puVar12 | (ulong)puVar12 >> 2;
            puVar12 = (uint *)(uVar17 | uVar17 >> 4);
code_r0x000109d73278:
            puVar12 = (uint *)((ulong)puVar12 | (ulong)puVar12 >> 8);
code_r0x000109d7327c:
            uVar17 = (ulong)puVar12 | (ulong)puVar12 >> 0x10;
            puVar12 = (uint *)(uVar17 | uVar17 >> 0x20);
            goto code_r0x000109d73284;
          case 0xb:
            puVar8 = (uint *)0x6;
            goto code_r0x000109d73320;
          case 0xd:
            puVar18 = param_2 + 0x10;
            param_2 = (uint *)(ulong)param_2[0x12];
            puVar18 = *(uint **)puVar18;
          case 0xa4:
          case 0xab:
          case 0xac:
          case 0xae:
          case 200:
          case 0xd5:
          case 0xd6:
          case 0xdf:
          case 0xeb:
          case 0xf2:
            puVar8 = puVar18;
            puVar18 = puVar8;
code_r0x000109d732ec:
code_r0x000109d732f0:
            func_0x000109d72f48();
code_r0x000109d732f4:
            puVar12 = puVar18 + (long)param_2 * 2;
code_r0x000109d732f8:
            uVar6 = puVar8 == puVar12;
code_r0x000109d732fc:
            if (!(bool)uVar6) {
code_r0x000109d73300:
              uVar15 = (uint)(byte)*puVar8;
code_r0x000109d73304:
              uVar6 = uVar15 == 0x69;
code_r0x000109d73308:
              if ((bool)uVar6) goto code_r0x000109d73310;
            }
code_r0x000109d7330c:
            puVar8 = puVar8 + -2;
            goto code_r0x000109d73310;
          case 0xf:
          case 0xa6:
          case 0xaa:
          case 0xc1:
            puVar8 = param_2;
          case 0x78:
          case 0x93:
          case 0xa1:
          case 0xad:
          case 0xc5:
          case 0xd1:
          case 0xe8:
          case 0xfd:
            func_0x000109d72f9c();
code_r0x000109d732a4:
code_r0x000109d732a8:
            puVar8 = (uint *)(ulong)(byte)*puVar8;
            goto code_r0x000109d73320;
          case 0x10:
            if ((uVar15 >> 9 & 1) == 0) {
              puVar9 = param_2;
              FUN_109d73090(param_2,puVar18);
              uVar15 = (uint)*(byte *)(*(long *)(param_2 + 0x10) + 4);
              uVar11 = (uint)(byte)puVar9[2];
              goto code_r0x000109d73368;
            }
            puVar8 = (uint *)0x0;
            goto code_r0x000109d73320;
          default:
            puVar18 = *(uint **)(puVar18 + 6);
          case 0x19:
          case 0x2c:
          case 0x2d:
          case 0x44:
          case 0x45:
            break;
          case 0x15:
          case 0x34:
          case 0x35:
          case 0x3c:
          case 0x4c:
          case 0x4d:
            puVar8 = puVar18;
          case 0x3d:
          case 0x54:
          case 0x55:
          case 100:
          case 0x65:
          case 0x75:
            FUN_109da0310();
code_r0x000109d73178:
            puVar18 = puVar8;
            break;
          case 0x18:
          case 0x20:
          case 0x28:
          case 0x30:
          case 0x38:
          case 0x81:
          case 0x88:
          case 0xdd:
          case 0xe3:
          case 0xf6:
            goto code_r0x000109d7330c;
          case 0x21:
            goto code_r0x000109d73188;
          case 0x29:
          case 0x41:
            goto code_r0x000109d731a8;
          case 0x31:
          case 0x49:
            goto code_r0x000109d731e8;
          case 0x39:
          case 0x51:
          case 0x61:
            goto code_r0x000109d73268;
          case 0x40:
          case 0x48:
          case 0x50:
          case 0x58:
            goto code_r0x000109d73300;
          case 0x59:
          case 0x69:
code_r0x000109d73368:
            if (uVar15 <= uVar11) {
              uVar15 = uVar11;
            }
            puVar8 = (uint *)(ulong)uVar15;
            goto code_r0x000109d73320;
          case 0x5c:
          case 0x5d:
          case 0x6c:
          case 0x6d:
            goto code_r0x000109d73178;
          case 0x60:
          case 0x68:
          case 0x7c:
          case 0x97:
            goto code_r0x000109d73320;
          case 0x70:
          case 0x82:
          case 0x8b:
          case 0xb3:
          case 0xb9:
          case 0xcb:
          case 0xdb:
          case 0xf0:
          case 0xf5:
            goto code_r0x000109d732ec;
          case 0x79:
          case 0x94:
          case 0xb1:
            goto code_r0x000109d73238;
          case 0x7a:
          case 0x7b:
          case 0x8e:
          case 0x95:
          case 0x96:
          case 0x9b:
            goto code_r0x000109d73318;
          case 0x7d:
          case 0x98:
          case 0xb8:
            goto code_r0x000109d7331c;
          case 0x7e:
          case 0xa2:
          case 0xaf:
          case 0xb0:
          case 0xc3:
          case 0xd7:
          case 0xd8:
          case 0xec:
          case 0xed:
            goto code_r0x000109d7322c;
          case 0x7f:
            goto code_r0x000109d73244;
          case 0x80:
            goto code_r0x000109d73278;
          case 0x83:
          case 0xe5:
            goto code_r0x000109d73304;
          case 0x84:
          case 0x8c:
          case 0xe4:
            goto code_r0x000109d73320;
          case 0x85:
          case 0x9d:
            goto code_r0x000109d73324;
          case 0x86:
          case 0xb4:
          case 0xb5:
          case 0xbc:
          case 0xcd:
          case 0xdc:
          case 0xe0:
          case 0xf8:
            puVar8 = (uint *)(ulong)*(byte *)((long)puVar8 + 1);
          case 0x87:
          case 0x9f:
          case 0xbf:
          case 0xd3:
          case 0xe1:
          case 0xf3:
          case 0xf7:
            goto code_r0x000109d73320;
          case 0x89:
          case 0x9a:
          case 0xde:
          case 0xe7:
          case 0xee:
          case 0xfa:
            goto code_r0x000109d732f4;
          case 0x8a:
            goto code_r0x000109d73288;
          case 0x8d:
            goto code_r0x000109d732f8;
          case 0x8f:
          case 0xb7:
          case 0xce:
            goto code_r0x000109d732fc;
          case 0x90:
          case 0xba:
          case 0xcc:
          case 0xcf:
          case 0xe2:
          case 0xf1:
          case 0xf4:
            return puVar8;
          case 0x91:
          case 0xc0:
          case 0xc4:
          case 0xfb:
          case 0xfc:
            goto code_r0x000109d7327c;
          case 0x99:
          case 0xa3:
          case 0xd9:
            goto code_r0x000109d73230;
          case 0x9c:
          case 0xd4:
            goto code_r0x000109d73234;
          case 0x9e:
          case 0xbe:
          case 0xca:
            goto code_r0x000109d73328;
          case 0xa0:
          case 0xd0:
          case 0xe6:
          case 0xf9:
            goto code_r0x000109d7328c;
          case 0xa5:
            goto code_r0x000109d73284;
          case 0xa7:
          case 0xbd:
            goto code_r0x000109d732a4;
          case 0xa8:
            goto code_r0x000109d73270;
          case 0xa9:
            goto code_r0x000109d7326c;
          case 0xb2:
            goto code_r0x000109d732a8;
          case 0xbb:
            goto code_r0x000109d73314;
          case 0xc2:
          case 0xda:
            goto code_r0x000109d732f0;
          case 0xc9:
            goto code_r0x000109d73240;
          case 0xea:
          case 0xff:
            goto code_r0x000109d7323c;
          case 0xef:
            goto code_r0x000109d73308;
          }
        } while( true );
      }
      if ((char)param_1[4] == '\0') {
        if (((param_1[8] >> 0x18 & 1) == 0) &&
           (uVar6 = 1, *(uint **)(param_1 + 0x12) == param_1 + 0x12)) goto LAB_109da3380;
      }
      else if (((char)param_1[4] == '\x03') && (uVar6 = 1, (param_1[5] & 0x7ffffff) == 0))
      goto LAB_109da3380;
      if ((uVar11 < 0xb) && (uVar6 = 0, (1 << (ulong)uVar11 & 0x63cU) != 0)) goto LAB_109da3380;
      uVar11 = param_1[8] >> 0x11 & 0x3f;
      if (uVar11 != 0) {
        uVar11 = uVar11 - 1;
        if ((param_1[8] >> 0x17 & 1) != 0) {
          return (uint *)(ulong)uVar11;
        }
        uVar16 = *(undefined8 *)(param_1 + 6);
        puVar18 = param_2;
        FUN_109d73128(param_2,uVar16,0);
        uVar15 = uVar11 & 0xff;
        if (uVar15 < ((uint)puVar18 & 0xff)) {
          FUN_109d73128(param_2,uVar16,1);
          if (uVar15 <= ((uint)param_2 & 0xff)) {
            uVar15 = (uint)param_2 & 0xff;
          }
          return (uint *)(ulong)uVar15;
        }
        return (uint *)(ulong)uVar11;
      }
      uVar17 = *(ulong *)(param_1 + 6);
      puVar18 = param_2;
      FUN_109d73128(param_2,uVar17,0);
      if ((char)param_1[4] == '\0') {
        if (*(uint **)(param_1 + 0x12) != param_1 + 0x12) goto LAB_109d734c4;
        bVar5 = (*(byte *)((long)param_1 + 0x23) & 1) == 0;
      }
      else {
        if ((char)param_1[4] != '\x03') goto LAB_109d734c4;
        bVar5 = (param_1[5] & 0x7ffffff) == 0;
      }
      if (bVar5) {
        return puVar18;
      }
LAB_109d734c4:
      if (((uint)puVar18 & 0xff) < 4) {
        FUN_109d3024c();
        if ((uVar17 & 1) != 0) {
          FUN_109e0486c(&UNK_10f602449);
        }
        uVar11 = 4;
        if (param_2 < (uint *)0x81) {
          uVar11 = (uint)puVar18;
        }
        puVar18 = (uint *)(ulong)uVar11;
      }
      return puVar18;
    }
    if (uVar11 == 0) {
      uVar11 = (uint)(ushort)param_2[5] & (int)((uint)(ushort)param_2[5] << 0x17) >> 0x1f;
      if (param_2[6] != 0) {
        uVar2 = (param_1[8] >> 0x11 & 0x3f) - 1;
        uVar15 = uVar11 & 0xff;
        if ((uVar11 & 0xff) <= (uVar2 & 0xff)) {
          uVar15 = uVar2 & 0xff;
        }
        if ((param_1[8] >> 0x11 & 0x3f) != 0) {
          uVar11 = uVar15;
        }
        return (uint *)(ulong)uVar11;
      }
      return (uint *)(ulong)uVar11;
    }
  }
  else {
    uVar6 = uVar11 == 0x15;
    if ((bool)uVar6) {
      puVar18 = (uint *)(*(long *)(param_1 + 6) + 0x70);
      func_0x000109d5b3d8(puVar18,param_1[8]);
      if (((uint)puVar18 >> 8 & 1) != 0) {
        return puVar18;
      }
      puVar18 = param_1;
      FUN_109d8199c();
      if ((int)puVar18 == 0) {
        return puVar18;
      }
      puVar18 = (uint *)(*(long *)(param_1 + 6) + 0x70);
      func_0x000109d5b48c(puVar18,param_1[8]);
      puVar9 = puVar18;
      FUN_109d320a4();
      if ((int)puVar9 == 0) {
        return puVar9;
      }
      goto LAB_109da3380;
    }
    if (uVar11 == 0x3b) {
      return (uint *)(ulong)(*(byte *)((long)param_1 + 0x12) & 0x3f);
    }
  }
  if (bVar1 < 0x1c) {
    if (0x14 < uVar11) {
      return (uint *)0x0;
    }
    puVar18 = param_1;
    FUN_109da2d44(param_1);
    FUN_109d73378(param_2,*(undefined8 *)param_1);
    lVar13 = 0x2f;
    FUN_109d5dfec(0x2f,puVar18,param_2);
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x10) != '\x10') {
        return (uint *)0x0;
      }
      uVar11 = *(uint *)(lVar13 + 0x20);
      if (uVar11 < 0x41) {
        uVar17 = (*(ulong *)(lVar13 + 0x18) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 (*(ulong *)(lVar13 + 0x18) & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar15 = (uint)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
        if (uVar15 <= uVar11) {
          uVar11 = uVar15;
        }
      }
      else {
        uVar11 = (int)lVar13 + 0x18;
        func_0x000109df09c4();
      }
      if (0x1f < uVar11) {
        uVar11 = 0x20;
      }
      return (uint *)(ulong)uVar11;
    }
    return (uint *)0x0;
  }
  if (uVar11 == 0x3b || bVar1 < 0x3b) {
    if ((bVar1 != 0x21) && (bVar1 != 0x27)) {
      return (uint *)0x0;
    }
  }
  else {
    if (bVar1 == 0x3c) {
      if ((*(long *)(param_1 + 0xc) == 0) && ((*(byte *)((long)param_1 + 0x17) >> 5 & 1) == 0)) {
        return (uint *)0x0;
      }
      func_0x000109d97b44(param_1,0x11);
      if (param_1 != (uint *)0x0) {
        uVar17 = *(ulong *)(param_1 + -4);
        if (((uint)uVar17 >> 1 & 1) == 0) {
          puVar14 = (ulong *)((long)(param_1 + -4) + -(uVar17 >> 2 & 0xf) * 8);
        }
        else {
          puVar14 = *(ulong **)(param_1 + -8);
        }
        lVar13 = *(long *)(*puVar14 + 0x80) + 0x18;
        func_0x000109d30394(lVar13,0xffffffffffffffff);
        return (uint *)(ulong)(0x3f - (int)LZCOUNT(lVar13));
      }
      return (uint *)0x0;
    }
    if (bVar1 != 0x54) {
      return (uint *)0x0;
    }
  }
  puVar18 = param_1 + 0x10;
  FUN_109d5b38c();
  if (((ulong)puVar18 >> 8 & 1) == 0) {
    lVar13 = *(long *)(param_1 + -8);
    if (((lVar13 == 0) || (*(char *)(lVar13 + 0x10) != '\0')) ||
       (*(long *)(lVar13 + 0x18) != *(long *)(param_1 + 0x12))) goto LAB_109da32a4;
    puVar18 = (uint *)&stack0xffffffffffffffc8;
    FUN_109d5b38c();
  }
  if (((uint)puVar18 >> 8 & 1) != 0) {
    return puVar18;
  }
LAB_109da32a4:
  lVar13 = *(long *)(param_1 + -8);
  if (((lVar13 != 0) && (*(char *)(lVar13 + 0x10) == '\0')) &&
     (*(long *)(lVar13 + 0x18) == *(long *)(param_1 + 0x12))) {
    puVar10 = &stack0xffffffffffffffc8;
    FUN_109d5b38c(puVar10);
    return (uint *)(ulong)((uint)puVar10 & (int)((uint)puVar10 << 0x17) >> 0x1f);
  }
  return (uint *)0x0;
}



/* Entry: 109da3580; end: 109da3663;  */

void FUN_109da3580(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 *puStack_28;
  
  puVar1 = (ulong *)param_1[1];
  puVar2 = (ulong *)(*param_1 & 0xfffffffffffffff8);
  *puVar2 = (ulong)puVar1;
  if (puVar1 == (ulong *)0x0) {
    puStack_28 = (undefined8 *)param_1[2];
    lVar3 = **(long **)*puStack_28;
    if ((*(ulong **)(lVar3 + 0x960) <= puVar2) &&
       (puVar2 < *(ulong **)(lVar3 + 0x960) + (ulong)*(uint *)(lVar3 + 0x970) * 2)) {
      func_0x000109da3614(lVar3 + 0x960,&puStack_28);
      *(byte *)(param_1[2] + 0x11) = *(byte *)(param_1[2] + 0x11) & 0xfe;
    }
  }
  else {
    *puVar1 = *puVar1 & 7 | (ulong)puVar2;
  }
  return;
}



/* Entry: 109da3664; end: 109da36fb;  */

undefined8 FUN_109da3664(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109da36a4;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109da36a4:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109da36fc; end: 109da37fb;  */

undefined8 * FUN_109da36fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109da3664(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000109da3754(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109da37fc; end: 109da3927;  */

void FUN_109da37fc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109da3664(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          puStack_38[1] = puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109da3928; end: 109da397f;  */

undefined8 * FUN_109da3928(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109da3980(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109da3a18(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109da3980; end: 109da3a17;  */

undefined8 FUN_109da3980(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109da39c0;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109da39c0:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109da3a18; end: 109da3abf;  */

long * FUN_109da3a18(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109da3a64;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109da3ac0(param_1,uVar1);
  FUN_109da3980(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109da3a64:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109da3ac0; end: 109da3beb;  */

void FUN_109da3ac0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109da3980(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          puStack_38[1] = puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109da3bec; end: 109da3c43;  */

undefined8 * FUN_109da3bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109da3980(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109da3a18(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109da3c44; end: 109da3dfb;  */

undefined8 FUN_109da3c44(undefined8 *param_1,long param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long alStack_108 [4];
  undefined2 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  int iStack_c8;
  undefined **appuStack_b0 [2];
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  int iStack_78;
  
  uVar2 = param_3[1];
  do {
    FUN_109d596f0(param_3,(int)uVar2);
    FUN_109d37ad8(appuStack_b0,param_3);
    if ((param_2 != 0) && (*(byte *)(param_2 + 0x10) < 4)) {
      if (*(long *)(param_2 + 0x28) != 0) {
        alStack_108[0] = *(long *)(param_2 + 0x28) + 0xd0;
        uStack_e8 = 0x104;
        FUN_109e0c844(&uStack_e0,alStack_108);
        iVar1 = iStack_c8;
        if (lStack_d0 < 0) {
          __ZdlPv(uStack_e0);
        }
        if (iVar1 - 0x29U < 2) goto LAB_109da3d28;
      }
      if (puStack_98 == puStack_90) {
        FUN_109e0560c(appuStack_b0,&DAT_10f62a9de,1);
      }
      else {
        *puStack_90 = 0x2e;
        puStack_90 = puStack_90 + 1;
      }
    }
LAB_109da3d28:
    iVar1 = *(int *)((long)param_1 + 0x1c) + 1;
    *(int *)((long)param_1 + 0x1c) = iVar1;
    FUN_109df9d4c(appuStack_b0,iVar1,0,0,0);
    uVar4 = *param_3;
    uStack_d8 = param_3[1];
    puVar3 = param_1;
    uStack_e0 = uVar4;
    lStack_d0 = param_2;
    FUN_109da4138();
    if ((uVar4 & 1) != 0) {
      uVar5 = *puVar3;
      appuStack_b0[0] = &PTR_DAT_110b5c4a0;
      if ((iStack_78 == 1) && (lStack_a0 != 0)) {
        __ZdaPv();
      }
      return uVar5;
    }
    appuStack_b0[0] = &PTR_DAT_110b5c4a0;
    if ((iStack_78 == 1) && (lStack_a0 != 0)) {
      __ZdaPv();
    }
  } while( true );
}



/* Entry: 109da3dfc; end: 109da3f43;  */

long * FUN_109da3dfc(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *aplStack_150 [3];
  long alStack_138 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_2;
  func_0x000109da271c();
  plVar2 = param_1;
  FUN_109da3f44();
  if (((ulong)plVar2 & 1) == 0) {
    if ((*(byte *)((long)param_2 + 0x17) >> 4 & 1) == 0) {
      lVar4 = 0;
      plVar2 = (long *)&UNK_10f5fa524;
      plVar1 = plVar2;
    }
    else {
      plVar1 = param_2;
      func_0x000109da271c(param_2);
      plVar1 = plVar1 + 2;
      if ((*(byte *)((long)param_2 + 0x17) >> 4 & 1) == 0) {
        lVar4 = 0;
        plVar2 = (long *)&UNK_10f5fa524;
      }
      else {
        plVar3 = param_2;
        func_0x000109da271c();
        plVar2 = plVar3 + 2;
        lVar4 = *plVar3;
      }
    }
    FUN_109da4238(aplStack_150,plVar1,(undefined *)((long)plVar2 + lVar4));
    func_0x000109da271c(param_2);
    __ZdlPvSt11align_val_t();
    FUN_109da3c44(param_1,param_2,aplStack_150);
    func_0x000109da2788(param_2);
    plVar2 = aplStack_150[0];
    plVar1 = param_1;
    if (aplStack_150[0] != alStack_138) {
      _free();
      plVar1 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (aplStack_150[0] != alStack_138) {
      _free();
    }
    __Unwind_Resume();
    plVar3 = plVar2;
    func_0x000107c2b020();
    lVar4 = *(long *)(*plVar2 + ((ulong)plVar3 & 0xffffffff) * 8);
    if (lVar4 != 0) {
      if (lVar4 != -8) {
        return (long *)0x0;
      }
      *(int *)(plVar2 + 2) = (int)plVar2[2] + -1;
    }
    *(long **)(*plVar2 + ((ulong)plVar3 & 0xffffffff) * 8) = plVar1;
    *(int *)((long)plVar2 + 0xc) = *(int *)((long)plVar2 + 0xc) + 1;
    func_0x000107c2b028(plVar2,0);
    return (long *)0x1;
  }
  return plVar2;
}



/* Entry: 109da3f44; end: 109da3fb3;  */

undefined8 FUN_109da3f44(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  func_0x000107c2b020(param_1,param_2 + 2,*param_2);
  lVar2 = *(long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  if (lVar2 != 0) {
    if (lVar2 != -8) {
      return 0;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  *(undefined8 **)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8) = param_2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  func_0x000107c2b028(param_1,0);
  return 1;
}



/* Entry: 109da3fb4; end: 109da40c7;  */

long * FUN_109da3fb4(long *param_1,long **param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  long alStack_148 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(uint *)(param_1 + 3);
  uVar2 = uVar3;
  if (uVar3 < 2) {
    uVar2 = 1;
  }
  uVar1 = param_3;
  if (uVar2 <= param_3) {
    uVar1 = (ulong)uVar2;
  }
  if (param_3 <= uVar3 || 0x7fffffff < uVar3) {
    uVar1 = param_3;
  }
  plVar4 = param_1;
  plVar6 = (long *)param_2;
  plStack_160 = (long *)param_2;
  uStack_158 = uVar1;
  uStack_150 = param_4;
  FUN_109da4138(param_1,param_2,uVar1,&uStack_150);
  if (((ulong)plVar6 & 1) == 0) {
    FUN_109da4238(&plStack_160,param_2,(undefined1 *)((long)param_2 + uVar1));
    FUN_109da3c44(param_1,param_4,&plStack_160);
    plVar4 = plStack_160;
    param_2 = &plStack_160;
    if (plStack_160 != alStack_148) {
      _free();
      param_2 = &plStack_160;
    }
  }
  else {
    param_1 = (long *)*plVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((long **)plStack_160 != param_2 + 3) {
    _free();
  }
  __Unwind_Resume();
  if ((*(int *)((long)plVar4 + 0xc) != 0) && (uVar2 = *(uint *)(plVar4 + 1), uVar2 != 0)) {
    lVar7 = 0;
    do {
      lVar5 = *(long *)(*plVar4 + lVar7);
      if (lVar5 != -8 && lVar5 != 0) {
        __ZdlPvSt11align_val_t(lVar5,8);
      }
      lVar7 = lVar7 + 8;
    } while ((ulong)uVar2 * 8 - lVar7 != 0);
  }
  _free(*plVar4);
  return plVar4;
}



/* Entry: 109da40c8; end: 109da4137;  */

long * FUN_109da40c8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)((long)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), uVar1 != 0)) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(*param_1 + lVar3);
      if (lVar2 != -8 && lVar2 != 0) {
        __ZdlPvSt11align_val_t(lVar2,8);
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
  _free(*param_1);
  return param_1;
}



/* Entry: 109da4138; end: 109da4237;  */

undefined1  [16] FUN_109da4138(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = param_1;
  func_0x000107c2b020();
  plVar3 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  lVar5 = *plVar3;
  if (lVar5 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar5 != 0) {
    while ((lVar5 == 0 || (lVar5 == -8))) {
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    }
    uVar4 = 0;
    goto LAB_109da421c;
  }
  plVar2 = (long *)(param_3 + 0x11);
  __ZnwmSt11align_val_t(plVar2,8);
  if (param_3 != 0) {
    _memcpy(plVar2 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 2) + param_3) = 0;
  lVar5 = *param_4;
  *plVar2 = param_3;
  plVar2[1] = lVar5;
  *plVar3 = (long)plVar2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar3 = param_1;
  func_0x000107c2b028(param_1,plVar1);
  for (plVar3 = (long *)(*param_1 + ((ulong)plVar3 & 0xffffffff) * 8); *plVar3 == 0 || *plVar3 == -8
      ; plVar3 = plVar3 + 1) {
  }
  uVar4 = 1;
LAB_109da421c:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 109da4238; end: 109da428f;  */

long * FUN_109da4238(long *param_1)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 0x100;
  param_1[1] = 0;
  FUN_109d3a7bc();
  return param_1;
}



/* Entry: 109da4290; end: 109da42e3;  */

void FUN_109da4290(long param_1,ulong param_2)

{
  if (*(ulong *)(param_1 + 8) != param_2) {
    if ((*(ulong *)(param_1 + 8) < param_2) && (*(ulong *)(param_1 + 0x10) < param_2)) {
      FUN_109dffce4(param_1,param_1 + 0x18,param_2,1);
    }
    *(ulong *)(param_1 + 8) = param_2;
  }
  return;
}



/* Entry: 109da42e4; end: 109da43e3;  */

void FUN_109da42e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  int iStack_38;
  
  lVar1 = param_1 + 0xb8;
  lVar3 = lVar1;
  FUN_109d2f848();
  lVar2 = 0x14;
  if (*(long *)(param_1 + 0xc0) != *(long *)(param_1 + 0xb8)) {
    lVar2 = 0x10;
  }
  if ((lVar3 == *(long *)(param_1 + 0xc0) + (ulong)*(uint *)(lVar1 + lVar2) * 8) &&
     ((*(ulong *)(param_2 + 8) & 0x1c00) == 0x800)) {
    *(ulong *)(param_2 + 8) = *(ulong *)(param_2 + 8) | 4;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    lStack_50 = 0;
    lStack_48 = 0;
    iStack_38 = 0;
    uStack_40 = 0;
    FUN_109daffe4(uVar4,&lStack_50,0,0,0,0,0);
    if ((((int)uVar4 != 0) && (((lStack_48 == 0 && (iStack_38 == 0)) && (lStack_50 != 0)))) &&
       ((*(short *)(lStack_50 + 1) == 0 &&
        (FUN_109da42e4(param_1,*(undefined8 *)(lStack_50 + 0x10)), (int)param_1 != 0)))) {
      FUN_109da43e4(auStack_68,lVar1,param_2);
    }
  }
  return;
}



/* Entry: 109da43e4; end: 109da450f;  */

void FUN_109da43e4(long *param_1,ulong *param_2,undefined1 param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  puVar3 = param_2;
  func_0x000107c2af58();
  lVar2 = 0x14;
  if (param_2[1] != *param_2) {
    lVar2 = 0x10;
  }
  puVar1 = (ulong *)(param_2[1] + (ulong)*(uint *)((long)param_2 + lVar2) * 8);
  puVar4 = puVar3;
  for (; (puVar1 != puVar3 && (puVar4 = puVar3, 0xfffffffffffffffd < *puVar3)); puVar3 = puVar3 + 1)
  {
    puVar4 = puVar1;
  }
  *param_1 = (long)puVar4;
  param_1[1] = (long)puVar1;
  *(undefined1 *)(param_1 + 2) = param_3;
  return;
}



/* Entry: 109da4510; end: 109da482b;  */

/* WARNING: Type propagation algorithm not settling */

code ******* FUN_109da4510(code *******param_1,code *******param_2,code *******param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  code *******pppppppcVar4;
  code ******ppppppcVar5;
  code *******pppppppcVar6;
  code *******pppppppcVar7;
  code *******pppppppcVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  ulong uVar12;
  uint uVar13;
  code ******ppppppcVar14;
  code *******apppppppcStack_1d8 [4];
  undefined2 uStack_1b8;
  code ******appppppcStack_1b0 [4];
  undefined2 uStack_190;
  undefined *apuStack_188 [4];
  undefined2 uStack_168;
  code *******apppppppcStack_160 [4];
  undefined2 uStack_140;
  code ******appppppcStack_138 [4];
  undefined2 uStack_118;
  code ******appppppcStack_110 [5];
  code ******appppppcStack_e8 [5];
  code ******appppppcStack_c0 [5];
  code ******ppppppcStack_98;
  code ******ppppppcStack_90;
  long alStack_88 [2];
  code ******ppppppcStack_78;
  undefined4 uStack_70;
  code *******apppppppcStack_68 [4];
  undefined2 uStack_48;
  
  pppppppcVar8 = (code *******)(ulong)*(byte *)(param_3 + 6);
  pppppppcVar4 = (code *******)0x4;
  puVar11 = &UNK_10e059b4b;
  iVar9 = 0xe059b4b;
  iVar10 = 0xe059b4b;
  uVar12 = (ulong)*(byte *)((long)pppppppcVar8 + 0x10e059b4b) * 4 + 0x109da4554;
  pppppppcVar6 = param_2;
  pppppppcVar7 = param_3;
  iVar2 = 0xe059b4b;
  switch(*(byte *)(param_3 + 6)) {
  case 0:
  case 0x49:
  case 0x54:
  case 0xd0:
    pppppppcVar4 = param_2;
  case 0x6b:
  case 0x82:
  case 0xf1:
    FUN_109db0bb4(pppppppcVar4,param_3);
code_r0x000109da46f8:
    pppppppcVar8 = (code *******)(ulong)*(uint *)(param_3 + 4);
    puVar11 = (undefined *)(ulong)*(byte *)((long)param_3 + 0x33);
    uVar12 = 1;
code_r0x000109da4704:
    iVar9 = (int)(uVar12 << ((ulong)puVar11 & 0x3f));
code_r0x000109da4708:
    uVar12 = (ulong)(uint)((int)pppppppcVar8 + iVar9);
    iVar2 = iVar9;
code_r0x000109da470c:
    iVar10 = iVar2;
    uVar12 = (ulong)((int)uVar12 - 1);
code_r0x000109da4710:
    param_2 = (code *******)(ulong)(((uint)uVar12 & -iVar10) - (int)pppppppcVar8);
code_r0x000109da471c:
    apppppppcStack_68[0] = (code *******)CONCAT44(apppppppcStack_68[0]._4_4_,(int)param_2);
code_r0x000109da4720:
    pppppppcVar4 = (code *******)param_3[2];
code_r0x000109da4724:
    pppppppcVar8 = (code *******)*pppppppcVar4;
code_r0x000109da4728:
    pppppppcVar8 = (code *******)pppppppcVar8[1];
code_r0x000109da472c:
    iVar10 = (int)pppppppcVar4;
    (*(code *)pppppppcVar8)();
    uVar13 = (uint)param_2;
    if ((iVar10 == 0) || ((*(byte *)((long)param_3 + 0x34) & 1) == 0)) {
code_r0x000109da475c:
      if ((uVar13 != 0) && ((*(byte *)((long)param_3 + 0x34) & 1) != 0)) {
        ppppppcVar5 = param_1[1];
        (*(code *)(*ppppppcVar5)[0x16])();
        uVar1 = 0;
        uVar3 = (uint)ppppppcVar5;
        if (uVar3 != 0) {
          uVar1 = uVar13 / uVar3;
        }
        if (uVar13 != uVar1 * uVar3) {
          do {
            uVar13 = (uint)apppppppcStack_68[0] +
                     (int)(1L << ((ulong)*(byte *)((long)param_3 + 0x33) & 0x3f));
            apppppppcStack_68[0] = (code *******)CONCAT44(apppppppcStack_68[0]._4_4_,uVar13);
            ppppppcVar5 = param_1[1];
            (*(code *)(*ppppppcVar5)[0x16])();
            uVar1 = 0;
            uVar3 = (uint)ppppppcVar5;
            if (uVar3 != 0) {
              uVar1 = uVar13 / uVar3;
            }
          } while (uVar13 != uVar1 * uVar3);
        }
      }
      uVar13 = 0;
      if ((uint)apppppppcStack_68[0] <= *(uint *)((long)param_3 + 0x44)) {
        uVar13 = (uint)apppppppcStack_68[0];
      }
    }
    else {
      ppppppcVar5 = param_1[1];
      (*(code *)(*ppppppcVar5)[0xc])(ppppppcVar5,param_3,apppppppcStack_68);
      uVar13 = (uint)apppppppcStack_68[0];
      if (((ulong)ppppppcVar5 & 1) == 0) goto code_r0x000109da475c;
    }
    pppppppcVar4 = (code *******)(ulong)uVar13;
    break;
  case 1:
  case 2:
  case 5:
  case 7:
  case 8:
  case 9:
  case 0xd:
  case 0xe:
  case 0x25:
  case 0x3d:
  case 0xc4:
    pppppppcVar4 = (code *******)param_3[9];
    break;
  case 3:
  case 0x3a:
  case 0x5c:
  case 0x74:
  case 0x85:
  case 0xe2:
  case 0xfa:
    appppppcStack_c0[0] = (code ******)0x0;
  case 0x19:
  case 0x30:
  case 0x37:
  case 0x3f:
  case 0x66:
  case 0x77:
  case 0x7b:
  case 0x87:
  case 0x94:
  case 0xa0:
  case 0xad:
  case 0xb6:
  case 0xba:
  case 0xbf:
  case 0xc6:
  case 0xec:
  case 0xfd:
    pppppppcVar4 = (code *******)param_3[8];
    pppppppcVar7 = (code *******)*param_2;
    pppppppcVar6 = appppppcStack_c0;
code_r0x000109da46ac:
    func_0x000109daff5c(pppppppcVar4,pppppppcVar6,pppppppcVar7,param_2,0,0);
    if (((ulong)pppppppcVar4 & 1) == 0) {
      pppppppcVar4 = (code *******)*param_1;
      param_2 = (code *******)param_3[9];
code_r0x000109da47f4:
      pppppppcVar8 = (code *******)&UNK_10f5fa5e0;
    }
    else {
      pppppppcVar4 = (code *******)
                     ((long)appppppcStack_c0[0] * (ulong)*(byte *)((long)param_3 + 0x33));
      if (-1 < (long)pppppppcVar4) {
        return pppppppcVar4;
      }
code_r0x000109da46d0:
      pppppppcVar4 = (code *******)*param_1;
      param_2 = (code *******)param_3[9];
code_r0x000109da46d8:
      pppppppcVar8 = (code *******)&UNK_10f5fa000;
code_r0x000109da46dc:
      pppppppcVar8 = (code *******)((long)pppppppcVar8 + 0x60b);
code_r0x000109da46e0:
    }
code_r0x000109da47fc:
    uStack_48 = 0x103;
    param_3 = (code *******)apppppppcStack_68;
    apppppppcStack_68[0] = pppppppcVar8;
code_r0x000109da480c:
    FUN_109da84a4(pppppppcVar4,param_2,param_3);
    pppppppcVar4 = (code *******)0x0;
    break;
  case 4:
  case 0x9c:
    pppppppcVar4 = (code *******)param_3[7];
  case 0x1a:
  case 0x31:
  case 0x80:
  case 0x8b:
  case 0x9d:
  case 0xde:
    break;
  case 6:
    alStack_88[0] = 0;
    alStack_88[1] = 0;
    uStack_70 = 0;
    ppppppcStack_78 = (code ******)0x0;
    ppppppcVar5 = param_3[7];
    FUN_109daffe4(ppppppcVar5,alStack_88,*param_2,param_2,0,0,1);
    if (((ulong)ppppppcVar5 & 1) == 0) {
      pppppppcVar4 = (code *******)*param_1;
      param_2 = (code *******)param_3[8];
      goto code_r0x000109da47f4;
    }
    FUN_109db0bb4(param_2,param_3);
    ppppppcVar5 = ppppppcStack_78;
    ppppppcVar14 = param_3[4];
    ppppppcStack_98 = ppppppcStack_78;
    ppppppcStack_90 = ppppppcVar14;
    if (alStack_88[0] == 0) {
code_r0x000109da45e4:
      if ((ulong)((long)ppppppcStack_98 - (long)ppppppcVar14) >> 0x1e == 0) {
        return (code *******)((long)ppppppcStack_98 - (long)ppppppcVar14);
      }
      param_1 = (code *******)*param_1;
      param_3 = (code *******)param_3[8];
      appppppcStack_138[0] = (code ******)&UNK_10f5fa640;
      param_2 = (code *******)0x103;
      uStack_118 = 0x103;
      uStack_140 = 0x10d;
      goto code_r0x000109da4614;
    }
    FUN_109db0c44(param_2,*(undefined8 *)(alStack_88[0] + 0x10),0,appppppcStack_c0);
    if ((int)param_2 != 0) {
      ppppppcStack_98 = (code ******)((long)appppppcStack_c0[0] + (long)ppppppcVar5);
      goto code_r0x000109da45e4;
    }
    pppppppcVar4 = (code *******)*param_1;
    param_2 = (code *******)param_3[8];
    pppppppcVar8 = (code *******)&UNK_10f5fa623;
    goto code_r0x000109da47fc;
  case 10:
    pppppppcVar4 = (code *******)param_3[8];
    break;
  case 0xb:
    break;
  case 0xc:
    pppppppcVar4 = (code *******)param_3[0xb];
    break;
  case 0xf:
  case 0x26:
  case 0x3e:
  case 0x5e:
  case 0x76:
  case 0x86:
  case 0x93:
  case 0x9a:
  case 0x9f:
  case 0xb5:
  case 0xc5:
  case 0xe4:
  case 0xfc:
    goto code_r0x000109da468c;
  case 0x10:
  case 0x27:
  case 0x2d:
  case 0x5f:
  case 0xe5:
    goto code_r0x000109da4624;
  case 0x11:
  case 0x12:
  case 0x28:
  case 0x29:
  case 0x60:
  case 0x61:
  case 0xa4:
  case 0xa5:
  case 0xe6:
  case 0xe7:
    goto code_r0x000109da4704;
  case 0x13:
  case 0x2a:
  case 0x5b:
  case 0x62:
  case 0x8a:
  case 0xe1:
  case 0xe8:
    goto code_r0x000109da472c;
  case 0x14:
  case 0x2b:
  case 99:
  case 0xe9:
    goto code_r0x000109da4708;
  case 0x15:
  case 0x2c:
  case 0x44:
  case 0x45:
  case 100:
  case 0xcb:
  case 0xcc:
  case 0xea:
    goto code_r0x000109da4618;
  case 0x16:
  case 0x41:
  case 200:
    goto code_r0x000109da4620;
  case 0x17:
  case 0x2e:
  case 0x67:
  case 0x81:
  case 0x98:
  case 0xed:
    goto code_r0x000109da4688;
  case 0x18:
  case 0x2f:
  case 0xae:
    goto code_r0x000109da4660;
  case 0x1b:
  case 0x32:
  case 0x4c:
  case 0x57:
  case 0x71:
  case 0x7f:
  case 0x8c:
  case 0xa7:
  case 0xd3:
  case 0xf7:
    goto code_r0x000109da46e0;
  case 0x1c:
  case 0x33:
  case 0x40:
  case 0x4d:
  case 0x6f:
  case 0x8d:
  case 0xa9:
  case 199:
  case 0xd4:
  case 0xf5:
    goto code_r0x000109da4724;
  case 0x1d:
  case 0x34:
  case 0x4e:
  case 0x69:
  case 0x70:
  case 0xd5:
  case 0xef:
  case 0xf6:
    goto code_r0x000109da46f8;
  case 0x1e:
  case 0x35:
  case 0x4f:
  case 0x6d:
  case 0x7c:
  case 0x8e:
  case 0x9b:
  case 0xa6:
  case 0xaa:
  case 0xd6:
  case 0xf3:
    goto code_r0x000109da4710;
  case 0x1f:
  case 0x36:
  case 0x4b:
  case 0x50:
  case 0x56:
  case 0x6c:
  case 0xd2:
  case 0xd7:
  case 0xf2:
    goto code_r0x000109da470c;
  case 0x20:
    goto code_r0x000109da4670;
  case 0x21:
    goto code_r0x000109da4690;
  case 0x22:
  case 0x23:
  case 0x5a:
  case 0xe0:
    goto code_r0x000109da466c;
  case 0x24:
  case 0x3c:
  case 0x72:
  case 0x84:
  case 0x9e:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xbd:
  case 0xbe:
  case 0xc2:
  case 0xc3:
  case 0xf8:
    goto code_r0x000109da4668;
  case 0x38:
  case 0x59:
  case 0x91:
    goto code_r0x000109da4694;
  case 0x39:
  case 0x58:
  case 0x90:
  case 0xac:
  case 0xb9:
  case 0xbb:
  case 0xdf:
    goto code_r0x000109da4678;
  case 0x3b:
    goto code_r0x000109da46ac;
  default:
    goto code_r0x000109da46d0;
  case 0x46:
  case 0xcd:
code_r0x000109da4614:
    pppppppcVar8 = &ppppppcStack_98;
code_r0x000109da4618:
    apppppppcStack_160[0] = pppppppcVar8;
code_r0x000109da461c:
    pppppppcVar8 = appppppcStack_110;
code_r0x000109da4620:
    pppppppcVar4 = appppppcStack_138;
code_r0x000109da4624:
    FUN_109d35b30(pppppppcVar8,pppppppcVar4,apppppppcStack_160);
code_r0x000109da462c:
    apuStack_188[0] = &UNK_10f5fa656;
code_r0x000109da4638:
    uStack_168 = SUB82(param_2,0);
    FUN_109d35b30(appppppcStack_e8,appppppcStack_110,apuStack_188);
    uStack_190 = 0x10c;
    appppppcStack_1b0[0] = (code ******)&ppppppcStack_90;
    pppppppcVar8 = appppppcStack_c0;
code_r0x000109da4660:
    pppppppcVar4 = appppppcStack_e8;
    pppppppcVar6 = param_2;
code_r0x000109da4664:
    param_2 = appppppcStack_1b0;
code_r0x000109da4668:
    FUN_109d35b30(pppppppcVar8,pppppppcVar4,param_2);
code_r0x000109da466c:
    pppppppcVar8 = (code *******)&UNK_10f39e000;
code_r0x000109da4670:
    pppppppcVar8 = (code *******)((long)pppppppcVar8 + 0x303);
code_r0x000109da4674:
    apppppppcStack_1d8[0] = pppppppcVar8;
code_r0x000109da4678:
    uStack_1b8 = SUB82(pppppppcVar6,0);
    pppppppcVar8 = (code *******)apppppppcStack_68;
code_r0x000109da4680:
    pppppppcVar4 = appppppcStack_c0;
    param_2 = (code *******)apppppppcStack_1d8;
code_r0x000109da4688:
    FUN_109d35b30(pppppppcVar8,pppppppcVar4,param_2);
    pppppppcVar7 = param_3;
code_r0x000109da468c:
    param_3 = (code *******)apppppppcStack_68;
code_r0x000109da4690:
    pppppppcVar4 = param_1;
code_r0x000109da4694:
    param_2 = pppppppcVar7;
    goto code_r0x000109da480c;
  case 0x4a:
  case 0x55:
  case 0x7d:
  case 0xd1:
    goto code_r0x000109da4728;
  case 0x51:
  case 0x89:
  case 0x97:
  case 0xd8:
    goto code_r0x000109da462c;
  case 0x5d:
  case 0x75:
  case 0x92:
  case 0xe3:
  case 0xfb:
    goto code_r0x000109da4680;
  case 0x65:
  case 0x78:
  case 0x95:
  case 0xeb:
  case 0xfe:
    goto code_r0x000109da461c;
  case 0x68:
  case 0x99:
  case 0xb7:
  case 0xee:
    goto code_r0x000109da4664;
  case 0x6a:
  case 0xa3:
  case 0xa8:
  case 0xdc:
  case 0xf0:
    goto code_r0x000109da46d8;
  case 0x6e:
  case 0xdd:
  case 0xf4:
    goto code_r0x000109da4720;
  case 0x73:
  case 0xdb:
  case 0xf9:
    goto code_r0x000109da46dc;
  case 0x7a:
  case 0xa2:
    goto code_r0x000109da4638;
  case 0x7e:
  case 0x83:
  case 0x8f:
  case 0xab:
    goto code_r0x000109da471c;
  case 0xc0:
    goto code_r0x000109da4674;
  }
  return pppppppcVar4;
}



/* Entry: 109da482c; end: 109da4a33;  */

long * FUN_109da482c(ulong *param_1,long *param_2)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_38;
  
  lStack_38 = param_2[2];
  plVar3 = *(long **)(lStack_38 + 0x70);
  *(undefined1 *)((long)param_2 + 0x31) = 1;
  if (plVar3 == param_2 || *param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*param_2 + 0x20);
    uVar6 = *param_1;
    FUN_109da4510(uVar6,param_1);
    lVar4 = uVar6 + lVar4;
    lStack_38 = param_2[2];
  }
  param_2[4] = lVar4;
  *(undefined1 *)((long)param_2 + 0x31) = 0;
  puVar2 = param_1 + 0x13;
  func_0x000109da4a7c(puVar2,&lStack_38);
  puVar2[1] = (ulong)param_2;
  plVar3 = (long *)*param_1;
  if ((int)plVar3[0x3b] == 0) {
    return plVar3;
  }
  if (*(char *)((long)param_2 + 0x32) != '\x01') {
    return plVar3;
  }
  FUN_109da4510(plVar3,param_1,param_2);
  plVar5 = (long *)(ulong)*(uint *)(*param_1 + 0x1d8);
  if (((*(byte *)(*param_1 + 0x1dc) & 1) == 0) && (plVar5 < plVar3)) {
    plVar3 = (long *)&UNK_10f5fa665;
    goto LAB_109da496c;
  }
  uVar6 = (long)plVar5 - 1U & param_2[4];
  plVar1 = (long *)(uVar6 + (long)plVar3);
  if (*(char *)((long)param_2 + 0x33) == '\x01') {
    if ((long)plVar5 - (long)plVar1 != 0) {
      uVar6 = (long)plVar5 * 2 - (long)plVar1;
      if (plVar1 < plVar5) {
        uVar6 = (long)plVar5 - (long)plVar1;
      }
LAB_109da4930:
      if (0xff < uVar6) {
        plVar3 = (long *)&UNK_10f5fa691;
LAB_109da496c:
        plVar5 = (long *)0x1;
        FUN_109df7828();
        if (plVar3 != plVar5) {
          uVar6 = plVar5[1];
          uVar7 = plVar3[1];
          if (uVar7 < uVar6) {
            if ((ulong)plVar3[2] < uVar6) {
              plVar3[1] = 0;
              FUN_109dffce4(plVar3,plVar3 + 3,uVar6,1);
              uVar7 = 0;
            }
            else if (uVar7 != 0) {
              _memmove(*plVar3,*plVar5,uVar7);
            }
            if (plVar5[1] - uVar7 != 0) {
              _memcpy(*plVar3 + uVar7,*plVar5 + uVar7,plVar5[1] - uVar7);
            }
          }
          else if (uVar6 != 0) {
            _memmove(*plVar3,*plVar5,uVar6);
          }
          plVar3[1] = uVar6;
        }
        return plVar3;
      }
      goto LAB_109da4938;
    }
  }
  else if (uVar6 != 0 && plVar5 < plVar1) {
    uVar6 = (long)plVar5 - uVar6;
    goto LAB_109da4930;
  }
  uVar6 = 0;
LAB_109da4938:
  *(char *)((long)param_2 + 0x34) = (char)uVar6;
  param_2[4] = uVar6 + param_2[4];
  return plVar3;
}



/* Entry: 109da4a34; end: 109da4a47;  */

undefined1  [16] FUN_109da4a34(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puStack_58;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  puVar3 = puVar1;
  puVar4 = param_2;
  FUN_109da4ad4();
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = param_2;
    FUN_109da4b6c(puVar1,param_2,param_2);
    *puVar1 = *param_2;
    puVar1[1] = 0;
    puStack_58 = puVar1;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = puStack_58;
  return auVar6;
}



/* Entry: 109da4a48; end: 109da4ad3;  */

undefined1  [16] FUN_109da4a48(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *puStack_48;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  puVar2 = param_1;
  puVar3 = param_2;
  FUN_109da4ad4();
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = param_2;
    FUN_109da4b6c(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_48 = param_1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = puStack_48;
  return auVar5;
}



/* Entry: 109da4ad4; end: 109da4b6b;  */

undefined8 FUN_109da4ad4(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109da4b14;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109da4b14:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109da4b6c; end: 109da4c13;  */

long * FUN_109da4b6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109da4bb8;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109da4c14(param_1,uVar1);
  FUN_109da4ad4(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109da4bb8:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109da4c14; end: 109da4d73;  */

void FUN_109da4c14(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109da4ccc(param_1,lVar5,lVar5 + (ulong)uVar1 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109da4d74; end: 109da4e1f;  */

void FUN_109da4d74(long param_1)

{
  long lVar1;
  long lStack_28;
  
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) && (lVar1 = *(long *)(param_1 + 0x18), lVar1 != 0)) {
    if (*(long *)(lVar1 + 0x78) != lVar1 + 0x88) {
      _free();
    }
    if (*(long *)(lVar1 + 0x40) != lVar1 + 0x58) {
      _free();
    }
    __ZdlPv(lVar1);
  }
  lStack_28 = param_1 + 0xe8;
  FUN_109da5298(&lStack_28);
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
    __ZdlPv();
  }
  func_0x000109da55e8(param_1 + 0xb8,*(undefined8 *)(param_1 + 0xc0));
  if (*(long *)(param_1 + 0x28) != param_1 + 0x38) {
    _free();
  }
  FUN_109d5993c(param_1);
  return;
}



/* Entry: 109da4e20; end: 109da4f2f;  */

byte FUN_109da4e20(long param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *apuStack_a0 [2];
  undefined4 uStack_90;
  undefined2 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  FUN_109da4f30(&puStack_78,param_1,param_4,param_5);
  uVar6 = (ulong)(param_3 - 1U);
  if (*(uint *)(param_1 + 0x30) <= param_3 - 1U) {
    func_0x000109da5628(param_1 + 0x28,param_3);
  }
  bVar4 = *(byte *)(*(long *)(param_1 + 0x28) + uVar6 * 0x20 + 4);
  if ((bVar4 & 1) == 0) {
    lVar2 = 7;
    if (lStack_70 != 0) {
      lVar2 = lStack_70;
    }
    puVar3 = &UNK_10f5fa6b1;
    if (lStack_70 != 0) {
      puVar3 = puStack_78;
    }
    FUN_109da4f30(apuStack_a0,param_1,puVar3,lVar2);
    uVar5 = *(undefined8 *)(param_2 + 8);
    apuStack_a0[0] = &UNK_10f5fa6b9;
    uStack_80 = 0x103;
    FUN_109da7f80(uVar5,apuStack_a0,0);
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x28) + uVar6 * 0x20);
    *puVar1 = uStack_90;
    *(undefined8 *)(puVar1 + 4) = param_7;
    *(undefined8 *)(puVar1 + 6) = uVar5;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(puVar1 + 2) = param_6;
    *(undefined1 *)(*(long *)(param_1 + 0x28) + uVar6 * 0x20 + 5) = param_8;
  }
  return bVar4 ^ 1;
}



/* Entry: 109da4f30; end: 109da4fcb;  */

void FUN_109da4f30(long *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 auStack_48 [2];
  
  puVar2 = param_2;
  FUN_109da51b8();
  auStack_48[0] = (undefined4)puVar2[9];
  FUN_109d8e014(param_2,param_3,param_4,auStack_48);
  plVar4 = (long *)*param_2;
  plVar1 = plVar4 + 2;
  lVar3 = *plVar4;
  *param_1 = (long)plVar1;
  param_1[1] = lVar3;
  *(int *)(param_1 + 2) = (int)plVar4[1];
  if ((param_3 & 1) != 0) {
    FUN_109d3a7bc(puVar2 + 8,plVar1,(long)plVar1 + lVar3 + 1);
  }
  return;
}



/* Entry: 109da4fcc; end: 109da503b;  */

bool FUN_109da4fcc(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0xe8);
  lVar2 = *plVar5;
  uVar3 = (*(long *)(param_1 + 0xf0) - lVar2 >> 4) * -0x5555555555555555;
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    FUN_109da503c(plVar5,param_2 + 1);
    lVar2 = *plVar5;
  }
  piVar4 = (int *)(lVar2 + (ulong)param_2 * 0x30);
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    *piVar4 = -1;
  }
  return iVar1 == 0;
}



/* Entry: 109da503c; end: 109da50cb;  */

long ***** FUN_109da503c(long *****param_1,ulong param_2)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  long *****ppppplVar5;
  long ****pppplVar6;
  long *****ppppplVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x21;
  undefined8 *puVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  long ***ppplStack_70;
  long ****pppplStack_68;
  
  pppplVar15 = param_1[1];
  lVar8 = (long)pppplVar15 - (long)*param_1 >> 4;
  bVar4 = param_2 < (ulong)(lVar8 * -0x5555555555555555);
  uVar10 = param_2 + lVar8 * 0x5555555555555555;
  if (bVar4 || uVar10 == 0) {
    ppppplVar5 = param_1;
    if (bVar4) {
      pppplVar6 = *param_1 + param_2 * 6;
      for (; pppplVar15 != pppplVar6; pppplVar15 = pppplVar15 + -6) {
        ppppplVar5 = (long *****)pppplVar15[-3];
        __ZdlPvSt11align_val_t(ppppplVar5,4);
      }
      param_1[1] = pppplVar6;
    }
    return ppppplVar5;
  }
  ppppplVar5 = (long *****)param_1[1];
  pppplVar15 = param_1[2];
  if ((ulong)(((long)pppplVar15 - (long)ppppplVar5 >> 4) * -0x5555555555555555) < uVar10) {
    ppppplVar14 = (long *****)*param_1;
    lVar8 = (long)ppppplVar5 - (long)ppppplVar14;
    uVar9 = uVar10 + (lVar8 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar9) {
      FUN_109da5580();
LAB_109da5544:
      func_0x000104c4f740();
      if (lVar8 != 0) {
        lVar11 = -lVar8;
        puVar13 = (undefined8 *)(unaff_x21 + lVar8 + -0x18);
        do {
          __ZdlPvSt11align_val_t(*puVar13,4);
          lVar11 = lVar11 + 0x30;
          puVar13 = puVar13 + -6;
        } while (lVar11 != 0);
      }
      FUN_109da5594(&pppplStack_88);
      __Unwind_Resume(param_1);
      ppppplVar5 = (long *****)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      pppplVar15 = ppppplVar5[1];
      pppplVar6 = ppppplVar5[2];
      while (pppplVar6 != pppplVar15) {
        ppppplVar5[2] = pppplVar6 + -6;
        __ZdlPvSt11align_val_t(pppplVar6[-3],4);
        pppplVar6 = ppppplVar5[2];
      }
      if (*ppppplVar5 != (long ****)0x0) {
        __ZdlPv();
      }
      return ppppplVar5;
    }
    lVar11 = (long)pppplVar15 - (long)ppppplVar14 >> 4;
    uVar12 = lVar11 * 0x5555555555555556;
    if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
      uVar12 = uVar9;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar12 = 0x555555555555555;
    }
    pppplStack_68 = (long ****)param_1;
    if (uVar12 == 0) {
      pppplVar6 = (long ****)0x0;
    }
    else {
      if (0x555555555555555 < uVar12) goto LAB_109da5544;
      pppplVar6 = (long ****)(uVar12 * 0x30);
      __Znwm();
    }
    lVar8 = (long)pppplVar6 + lVar8;
    lVar11 = ((uVar10 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
    pppplStack_88 = pppplVar6;
    pppplStack_80 = (long ****)lVar8;
    ppplStack_70 = (long ***)(pppplVar6 + uVar12 * 6);
    _bzero(lVar8,lVar11);
    pppplVar1 = (long ****)(lVar8 + lVar11);
    pppplVar16 = pppplVar6 + uVar12 * 6;
    if (ppppplVar14 != ppppplVar5) {
      lVar8 = 0;
      pppplStack_78 = pppplVar1;
      do {
        puVar13 = (undefined8 *)((long)pppplVar6 + lVar8);
        puVar2 = (undefined8 *)((long)ppppplVar14 + lVar8);
        uVar18 = puVar2[1];
        uVar17 = *puVar2;
        puVar13[2] = puVar2[2];
        puVar13[1] = uVar18;
        *puVar13 = uVar17;
        puVar13[3] = 0;
        puVar13[4] = 0;
        *(undefined4 *)(puVar13 + 5) = 0;
        __ZdlPvSt11align_val_t(0,4);
        uVar3 = *(uint *)(puVar2 + 5);
        *(uint *)(puVar13 + 5) = uVar3;
        if (uVar3 == 0) {
          puVar13[3] = 0;
          puVar13[4] = 0;
        }
        else {
          lVar11 = (ulong)uVar3 << 4;
          __ZnwmSt11align_val_t(lVar11,4);
          puVar13[3] = lVar11;
          *(undefined8 *)((long)pppplVar6 + lVar8 + 0x20) =
               *(undefined8 *)((long)ppppplVar14 + lVar8 + 0x20);
          _memcpy();
        }
        lVar8 = lVar8 + 0x30;
      } while ((long *****)(puVar2 + 6) != ppppplVar5);
      do {
        __ZdlPvSt11align_val_t(ppppplVar14[3],4);
        ppppplVar14 = ppppplVar14 + 6;
      } while (ppppplVar14 != ppppplVar5);
      ppppplVar14 = (long *****)*param_1;
      pppplVar15 = param_1[2];
      pppplVar16 = (long ****)ppplStack_70;
    }
    *param_1 = pppplVar6;
    param_1[1] = pppplVar1;
    param_1[2] = pppplVar16;
    ppppplVar7 = &pppplStack_88;
    pppplStack_88 = (long ****)ppppplVar14;
    pppplStack_80 = (long ****)ppppplVar14;
    pppplStack_78 = (long ****)ppppplVar14;
    ppplStack_70 = (long ***)pppplVar15;
    FUN_109da5594(ppppplVar7);
  }
  else {
    ppppplVar7 = param_1;
    if (uVar10 != 0) {
      uVar10 = (uVar10 * 0x30 - 0x30) / 0x30;
      ppppplVar7 = ppppplVar5;
      _bzero(ppppplVar5,uVar10 * 0x30 + 0x30);
      ppppplVar5 = ppppplVar5 + uVar10 * 6 + 6;
    }
    param_1[1] = (long ****)ppppplVar5;
  }
  return ppppplVar7;
}



/* Entry: 109da50cc; end: 109da51b7;  */

bool FUN_109da50cc(long param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uStack_54;
  
  plVar6 = (long *)(param_1 + 0xe8);
  lVar3 = *plVar6;
  uVar5 = (*(long *)(param_1 + 0xf0) - lVar3 >> 4) * -0x5555555555555555;
  uStack_54 = param_2;
  if (uVar5 < param_2 || uVar5 - param_2 == 0) {
    FUN_109da503c(plVar6,param_2 + 1);
    lVar3 = *plVar6;
  }
  piVar4 = (int *)(lVar3 + (ulong)param_2 * 0x30);
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    *piVar4 = param_3 + 1;
    piVar4[1] = param_4;
    piVar4[2] = param_5;
    piVar4[3] = param_6;
    while (param_3 < 0xfffffffe) {
      iVar2 = piVar4[3];
      piVar7 = (int *)(*plVar6 + (ulong)param_3 * 0x30);
      uVar8 = *(undefined8 *)(piVar4 + 1);
      piVar4 = piVar7 + 6;
      func_0x000109da5698(piVar4,&uStack_54);
      *(undefined8 *)(piVar4 + 1) = uVar8;
      piVar4[3] = iVar2;
      piVar4 = piVar7;
      param_3 = *piVar7 - 1;
    }
  }
  return iVar1 == 0;
}



/* Entry: 109da51b8; end: 109da5297;  */

long FUN_109da51b8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)0xe8;
    __Znwm();
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[4] = 0xffffffffffffffff;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 1;
    puVar2[7] = 0;
    *(undefined4 *)((long)puVar2 + 0x31) = 0;
    puVar2[10] = 0x20;
    puVar2[9] = 0;
    puVar2[0xf] = puVar2 + 0x11;
    puVar2[0x10] = 0x400000000;
    *(undefined8 **)(param_1 + 0x18) = puVar2;
    puVar2[8] = puVar2 + 0xb;
    func_0x000109d3acdc(puVar2 + 8,0);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  return lVar1;
}



/* Entry: 109da5298; end: 109da530f;  */

void FUN_109da5298(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x30;
        __ZdlPvSt11align_val_t(*(undefined8 *)(lVar1 + -0x18),4);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 109da5310; end: 109da557f;  */

long ***** FUN_109da5310(long *****param_1,ulong param_2)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  uint uVar3;
  long ****pppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x21;
  undefined8 *puVar10;
  long lVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  long ***ppplStack_70;
  long ****pppplStack_68;
  
  ppppplVar6 = (long *****)param_1[1];
  pppplVar13 = param_1[2];
  if ((ulong)(((long)pppplVar13 - (long)ppppplVar6 >> 4) * -0x5555555555555555) < param_2) {
    ppppplVar12 = (long *****)*param_1;
    lVar11 = (long)ppppplVar6 - (long)ppppplVar12;
    uVar7 = param_2 + (lVar11 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar7) {
      FUN_109da5580();
LAB_109da5544:
      func_0x000104c4f740();
      if (lVar11 != 0) {
        lVar8 = -lVar11;
        puVar10 = (undefined8 *)(unaff_x21 + lVar11 + -0x18);
        do {
          __ZdlPvSt11align_val_t(*puVar10,4);
          lVar8 = lVar8 + 0x30;
          puVar10 = puVar10 + -6;
        } while (lVar8 != 0);
      }
      FUN_109da5594(&pppplStack_88);
      __Unwind_Resume(param_1);
      ppppplVar6 = (long *****)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      pppplVar13 = ppppplVar6[1];
      pppplVar4 = ppppplVar6[2];
      while (pppplVar4 != pppplVar13) {
        ppppplVar6[2] = pppplVar4 + -6;
        __ZdlPvSt11align_val_t(pppplVar4[-3],4);
        pppplVar4 = ppppplVar6[2];
      }
      if (*ppppplVar6 != (long ****)0x0) {
        __ZdlPv();
      }
      return ppppplVar6;
    }
    lVar8 = (long)pppplVar13 - (long)ppppplVar12 >> 4;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
      uVar9 = uVar7;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    pppplStack_68 = (long ****)param_1;
    if (uVar9 == 0) {
      pppplVar4 = (long ****)0x0;
    }
    else {
      if (0x555555555555555 < uVar9) goto LAB_109da5544;
      pppplVar4 = (long ****)(uVar9 * 0x30);
      __Znwm();
    }
    lVar11 = (long)pppplVar4 + lVar11;
    lVar8 = ((param_2 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
    pppplStack_88 = pppplVar4;
    pppplStack_80 = (long ****)lVar11;
    ppplStack_70 = (long ***)(pppplVar4 + uVar9 * 6);
    _bzero(lVar11,lVar8);
    pppplVar1 = (long ****)(lVar11 + lVar8);
    pppplVar14 = pppplVar4 + uVar9 * 6;
    if (ppppplVar12 != ppppplVar6) {
      lVar11 = 0;
      pppplStack_78 = pppplVar1;
      do {
        puVar10 = (undefined8 *)((long)pppplVar4 + lVar11);
        puVar2 = (undefined8 *)((long)ppppplVar12 + lVar11);
        uVar16 = puVar2[1];
        uVar15 = *puVar2;
        puVar10[2] = puVar2[2];
        puVar10[1] = uVar16;
        *puVar10 = uVar15;
        puVar10[3] = 0;
        puVar10[4] = 0;
        *(undefined4 *)(puVar10 + 5) = 0;
        __ZdlPvSt11align_val_t(0,4);
        uVar3 = *(uint *)(puVar2 + 5);
        *(uint *)(puVar10 + 5) = uVar3;
        if (uVar3 == 0) {
          puVar10[3] = 0;
          puVar10[4] = 0;
        }
        else {
          lVar8 = (ulong)uVar3 << 4;
          __ZnwmSt11align_val_t(lVar8,4);
          puVar10[3] = lVar8;
          *(undefined8 *)((long)pppplVar4 + lVar11 + 0x20) =
               *(undefined8 *)((long)ppppplVar12 + lVar11 + 0x20);
          _memcpy();
        }
        lVar11 = lVar11 + 0x30;
      } while ((long *****)(puVar2 + 6) != ppppplVar6);
      do {
        __ZdlPvSt11align_val_t(ppppplVar12[3],4);
        ppppplVar12 = ppppplVar12 + 6;
      } while (ppppplVar12 != ppppplVar6);
      ppppplVar12 = (long *****)*param_1;
      pppplVar13 = param_1[2];
      pppplVar14 = (long ****)ppplStack_70;
    }
    *param_1 = pppplVar4;
    param_1[1] = pppplVar1;
    param_1[2] = pppplVar14;
    ppppplVar5 = &pppplStack_88;
    pppplStack_88 = (long ****)ppppplVar12;
    pppplStack_80 = (long ****)ppppplVar12;
    pppplStack_78 = (long ****)ppppplVar12;
    ppplStack_70 = (long ***)pppplVar13;
    FUN_109da5594(ppppplVar5);
  }
  else {
    ppppplVar5 = param_1;
    if (param_2 != 0) {
      uVar7 = (param_2 * 0x30 - 0x30) / 0x30;
      ppppplVar5 = ppppplVar6;
      _bzero(ppppplVar6,uVar7 * 0x30 + 0x30);
      ppppplVar6 = ppppplVar6 + uVar7 * 6 + 6;
    }
    param_1[1] = (long ****)ppppplVar6;
  }
  return ppppplVar5;
}



/* Entry: 109da5580; end: 109da5593;  */

long * FUN_109da5580(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x30;
    __ZdlPvSt11align_val_t(*(undefined8 *)(lVar3 + -0x18),4);
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 109da5594; end: 109da56f7;  */

long * FUN_109da5594(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    __ZdlPvSt11align_val_t(*(undefined8 *)(lVar2 + -0x18),4);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109da56f8; end: 109da578b;  */

undefined8 FUN_109da56f8(long *param_1,int *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar4 = 0;
    piVar5 = (int *)0x0;
  }
  else {
    iVar2 = *param_2;
    uVar3 = (int)param_1[2] - 1;
    uVar6 = iVar2 * 0x25 & uVar3;
    piVar5 = (int *)(*param_1 + (ulong)uVar6 * 0x10);
    iVar8 = *piVar5;
    if (iVar2 != iVar8) {
      iVar9 = 1;
      piVar7 = (int *)0x0;
      do {
        if (iVar8 == -1) {
          uVar4 = 0;
          if (piVar7 != (int *)0x0) {
            piVar5 = piVar7;
          }
          goto LAB_109da5738;
        }
        piVar1 = piVar5;
        if (piVar7 != (int *)0x0 || iVar8 != -2) {
          piVar1 = piVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar3;
        piVar5 = (int *)(*param_1 + (ulong)uVar6 * 0x10);
        iVar8 = *piVar5;
        piVar7 = piVar1;
      } while (iVar2 != iVar8);
    }
    uVar4 = 1;
  }
LAB_109da5738:
  *param_3 = (long)piVar5;
  return uVar4;
}



/* Entry: 109da578c; end: 109da5833;  */

int * FUN_109da578c(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  int *piStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109da57d8;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109da5834(param_1,uVar1);
  FUN_109da56f8(param_1,param_3,&piStack_28);
  param_4 = piStack_28;
LAB_109da57d8:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}


