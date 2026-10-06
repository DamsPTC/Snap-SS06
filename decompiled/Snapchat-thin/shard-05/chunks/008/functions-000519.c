/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040e978c; end: 1040e981f;  */

void FUN_1040e978c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001040e981c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e9820; end: 1040e993b;  */

void FUN_1040e9820(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  
  iVar7 = *(int *)(unaff_x22 + 0xd8);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x58);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar8 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(lVar8 + iVar7,*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar1 + 0x38))(lVar8 + iVar7,1,1,uVar9);
  _swift_willThrow();
  pcVar12 = *(code **)(lVar1 + 8);
  (*pcVar12)(uVar5,uVar9);
  (**(code **)(lVar4 + 8))(uVar10,uVar11);
  (**(code **)(lVar6 + 8))(uVar2,uVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
  (*pcVar12)(uVar5,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001040e9938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e993c; end: 1040e999b;  */

void FUN_1040e993c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1040e999c;
  plVar4[3] = param_2;
  plVar4[4] = unaff_x20;
  plVar4[2] = param_1;
  plVar4[5] = *(long *)(param_2 + 0x20);
  plVar4[6] = *(long *)(param_2 + 0x10);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness();
  plVar4[7] = lVar1;
  lVar5 = *(long *)(lVar1 + -8);
  plVar4[8] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[9] = uVar2;
  lVar5 = 0;
  __sSqMa(0,lVar1);
  plVar4[10] = lVar5;
  lVar1 = *(long *)(lVar5 + -8);
  plVar4[0xb] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xd] = uVar2;
  lVar5 = *(long *)(param_2 + 0x18);
  plVar4[0xe] = lVar5;
  lVar1 = 0;
  __sSqMa(0,lVar5);
  plVar4[0xf] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x10] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x11] = uVar2;
  lVar1 = *(long *)(lVar5 + -8);
  plVar4[0x12] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x13] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x14] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040e9200,0,0);
  return;
}



/* Entry: 1040e999c; end: 1040e99d7;  */

void FUN_1040e999c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040e99d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040e99d8; end: 1040e9a63;  */

void FUN_1040e99d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1040e9a64;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar1,param_1,param_2,param_3,param_5,param_6,unaff_x22 + 0x10);
  return;
}



/* Entry: 1040e9a64; end: 1040e9ab7;  */

void FUN_1040e9a64(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040e9ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040e9ab8; end: 1040e9c23;  */

void FUN_1040e9ab8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar5 = *(long *)(param_2 + 0x18);
  lVar11 = *(long *)(lVar5 + -8);
  lVar4 = param_2;
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar4 + 0x10);
  lVar7 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(lVar4 + 0x20);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar9,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar6 - extraout_x8_01;
  (**(code **)(lVar7 + 0x10))(lVar6);
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar4,lVar9,uVar10);
  (**(code **)(lVar11 + 0x10))(puVar8,unaff_x20 + *(int *)(param_2 + 0x2c),lVar5);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x30));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  _swift_retain(uVar3);
  FUN_1040e8fb0(uStack_68,lVar4,puVar8,uVar2,uVar3,lVar9,lVar5,uVar10);
  return;
}



/* Entry: 1040e9c24; end: 1040e9c3f;  */

undefined * FUN_1040e9c24(void)

{
  return PTR___ss5ErrorWS_11034ee10;
}



/* Entry: 1040e9c40; end: 1040e9d07;  */

void FUN_1040e9c40(long param_1)

{
  FUN_1040e9ab8();
                    /* WARNING: Could not recover jumptable at 0x0001040e9c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040e9d08; end: 1040e9e13;  */

long * FUN_1040e9d08(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar10 = *(long *)(lVar8 + -8);
  uVar6 = (ulong)*(uint *)(lVar10 + 0x50) & 0xff;
  uVar4 = *(long *)(lVar3 + 0x40) + uVar6;
  lVar2 = *(long *)(lVar10 + 0x40) + 7;
  uVar1 = (uint)uVar6 | *(uint *)(lVar3 + 0x50) & 0xf8;
  if ((uVar1 < 8 && ((*(uint *)(lVar3 + 0x50) | *(uint *)(lVar10 + 0x50)) & 0x100000) == 0) &&
      (lVar2 + (uVar4 & (uVar6 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1);
    uVar9 = uVar4 + (long)param_1 & ~uVar6;
    uVar4 = uVar4 + (long)param_2 & ~uVar6;
    (**(code **)(lVar10 + 0x10))(uVar9,uVar4,lVar8);
    puVar5 = (undefined8 *)(lVar2 + uVar9 & 0xffffffffffffff8);
    puVar7 = (undefined8 *)(lVar2 + uVar4 & 0xfffffffffffffff8);
    lVar2 = puVar7[1];
    uVar11 = *puVar7;
    puVar5[1] = puVar7[1];
    *puVar5 = uVar11;
  }
  else {
    uVar4 = (ulong)(uVar1 | 7);
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Entry: 1040e9e14; end: 1040ea0fb;  */

void FUN_1040e9e14(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar2 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar1 = *(long *)(lVar3 + 0x40) + param_1 + (ulong)*(byte *)(lVar2 + 0x50) &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar2 + 8))(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*(undefined8 *)((*(long *)(lVar2 + 0x40) + uVar1 + 7 & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 1040ea0fc; end: 1040ea237;  */

int * FUN_1040ea0fc(int *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar13 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  lVar12 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(uint *)(lVar12 + 0x54);
  uVar3 = uVar7;
  if (uVar7 <= uVar6) {
    uVar3 = uVar6;
  }
  if (uVar3 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  uVar14 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar11 = *(long *)(lVar13 + 0x40) + uVar14;
  lVar1 = *(long *)(lVar12 + 0x40) + 7;
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar2 = (lVar1 + (uVar11 & (uVar14 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
    uVar10 = 2;
    uVar5 = uVar10;
    if ((uVar2 & 0xfffffff8) == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar10 = 4;
    }
    if (uVar5 < 0x100) {
      uVar10 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar10;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar10 = (uint)*(byte *)((long)param_1 + uVar2), *(byte *)((long)param_1 + uVar2) != 0))
      goto LAB_1040ea1b0;
    }
    else if (uVar4 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar2);
      if (*(ushort *)((long)param_1 + uVar2) != 0) {
LAB_1040ea1b0:
        iVar8 = uVar10 - 1;
        if ((uVar2 & 0xfffffff8) != 0) {
          iVar8 = *param_1;
        }
        return (int *)(ulong)(uVar3 + iVar8 + 1);
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar2);
      if (uVar10 != 0) goto LAB_1040ea1b0;
    }
  }
  if (uVar6 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001040ea1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x30))(param_1,uVar6,*(long *)(param_3 + 0x10));
    return param_1;
  }
  piVar9 = (int *)(uVar11 + (long)param_1 & ~uVar14);
  if (uVar7 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001040ea200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x30))();
    return piVar9;
  }
  uVar11 = *(ulong *)(lVar1 + (long)piVar9 & 0xffffffffffffff8);
  if (0xfffffffe < uVar11) {
    uVar11 = 0xffffffff;
  }
  return (int *)(ulong)((int)uVar11 + 1);
}



/* Entry: 1040ea238; end: 1040ea3d7;  */

void FUN_1040ea238(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  lVar6 = *(long *)(param_4 + 0x10);
  lVar11 = *(long *)(param_4 + 0x18);
  lVar15 = *(long *)(lVar6 + -8);
  uVar7 = *(uint *)(lVar15 + 0x54);
  lVar14 = *(long *)(lVar11 + -8);
  uVar10 = *(uint *)(lVar14 + 0x54);
  uVar4 = uVar10;
  if (uVar10 <= uVar7) {
    uVar4 = uVar7;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar16 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar3 = *(long *)(lVar15 + 0x40) + uVar16;
  lVar1 = *(long *)(lVar14 + 0x40) + 7;
  lVar2 = (lVar1 + (uVar3 & (uVar16 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  uVar12 = 2;
  uVar9 = uVar12;
  if ((int)lVar2 == 0) {
    uVar9 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar9) {
    uVar12 = 4;
  }
  if (uVar9 < 0x100) {
    uVar12 = 1;
  }
  uVar5 = 0;
  if (1 < uVar9) {
    uVar5 = uVar12;
  }
  uVar12 = 0;
  if (uVar4 < param_3) {
    uVar12 = uVar5;
  }
  uVar9 = (uint)param_2;
  iVar8 = uVar9 - uVar4;
  if (uVar9 < uVar4 || iVar8 == 0) {
    if (uVar12 < 2) {
      if (uVar12 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (uVar12 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (uVar9 != 0) {
      if (uVar7 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x38);
        lVar11 = lVar6;
        uVar10 = uVar7;
      }
      else {
        param_1 = (int *)(uVar3 + (long)param_1 & ~uVar16);
        if (uVar10 != uVar4) {
          puVar13 = (ulong *)(lVar1 + (long)param_1 & 0xfffffffffffffff8);
          if (-1 < (int)uVar9) {
            *puVar13 = (ulong)(uVar9 - 1);
            return;
          }
          *puVar13 = (ulong)(uVar9 & 0x7fffffff);
          puVar13[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001040ea38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar10,lVar11);
      return;
    }
  }
  else {
    if ((int)lVar2 != 0) {
      iVar8 = 1;
      _bzero(param_1,lVar2);
      *param_1 = uVar9 + ~uVar4;
    }
    if (uVar12 < 2) {
      if (uVar12 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar8;
      }
    }
    else if (uVar12 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar8;
    }
  }
  return;
}



/* Entry: 1040ea3d8; end: 1040ea483;  */

void FUN_1040ea3d8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    __sSqMa();
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
      _swift_initStructMetadata(param_1,0,3,&lStack_38,param_1 + 0x28);
    }
  }
  return;
}



/* Entry: 1040ea484; end: 1040ea607;  */

long * FUN_1040ea484(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar3 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar11 = *(long *)(lVar9 + -8);
  uVar6 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar4 = *(long *)(lVar3 + 0x40) + uVar6;
  lVar8 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar1 = (uint)uVar6 | *(uint *)(lVar3 + 0x50) & 0xf8;
  if ((uVar1 < 8 && ((*(uint *)(lVar3 + 0x50) | *(uint *)(lVar11 + 0x50)) & 0x100000) == 0) &&
      (lVar8 + (uVar4 & (uVar6 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar2);
    uVar10 = uVar4 + (long)param_1 & ~uVar6;
    uVar6 = uVar4 + (long)param_2 & ~uVar6;
    uVar4 = uVar6;
    (**(code **)(lVar11 + 0x30))(uVar6,1,lVar9);
    if ((int)uVar4 == 0) {
      (**(code **)(lVar11 + 0x10))(uVar10,uVar6,lVar9);
      (**(code **)(lVar11 + 0x38))(uVar10,0,1,lVar9);
    }
    else {
      _memcpy(uVar10,uVar6,lVar8);
    }
    puVar5 = (undefined8 *)(uVar10 + lVar8 + 7 & 0xffffffffffffff8);
    puVar7 = (undefined8 *)(uVar6 + lVar8 + 7 & 0xfffffffffffffff8);
    lVar8 = puVar7[1];
    uVar12 = *puVar7;
    puVar5[1] = puVar7[1];
    *puVar5 = uVar12;
  }
  else {
    uVar4 = (ulong)(uVar1 | 7);
    lVar8 = *param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar8);
  return param_1;
}



/* Entry: 1040ea608; end: 1040ea6c7;  */

void FUN_1040ea608(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 8))(param_1,lVar1);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar4 + 0x40) + param_1 + (ulong)*(byte *)(lVar5 + 0x50) &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  uVar2 = uVar3;
  (**(code **)(lVar5 + 0x30))(uVar3,1,lVar1);
  if ((int)uVar2 == 0) {
    (**(code **)(lVar5 + 8))(uVar3,lVar1);
  }
  lVar1 = uVar3 + *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)((lVar1 + 7U & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 1040ea6c8; end: 1040ea7f7;  */

long FUN_1040ea6c8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar1 + -8);
  (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar1);
  lVar10 = *(long *)(param_3 + 0x18);
  lVar11 = *(long *)(lVar10 + -8);
  uVar4 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar1 = *(long *)(lVar9 + 0x40) + uVar4;
  uVar6 = lVar1 + param_1 & (uVar4 ^ 0xffffffffffffffff);
  uVar7 = lVar1 + param_2 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = uVar7;
  (**(code **)(lVar11 + 0x30))(uVar7,1,lVar10);
  if ((int)uVar4 == 0) {
    (**(code **)(lVar11 + 0x10))(uVar6,uVar7,lVar10);
    (**(code **)(lVar11 + 0x38))(uVar6,0,1,lVar10);
    iVar8 = *(int *)(lVar11 + 0x54);
    lVar1 = *(long *)(lVar11 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar11 + 0x54);
    lVar1 = *(long *)(lVar11 + 0x40);
    lVar9 = lVar1;
    if (iVar8 == 0) {
      lVar9 = lVar1 + 1;
    }
    _memcpy(uVar6,uVar7,lVar9);
  }
  if (iVar8 == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar5 = (undefined8 *)(uVar6 + lVar1 + 7 & 0xffffffffffffff8);
  puVar3 = (undefined8 *)(uVar7 + lVar1 + 7 & 0xfffffffffffffff8);
  uVar2 = puVar3[1];
  uVar12 = *puVar3;
  puVar5[1] = puVar3[1];
  *puVar5 = uVar12;
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 1040ea7f8; end: 1040ea97f;  */

long FUN_1040ea7f8(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar10 = *(long *)(lVar1 + -8);
  (**(code **)(lVar10 + 0x18))(param_1,param_2,lVar1);
  lVar11 = *(long *)(param_3 + 0x18);
  lVar12 = *(long *)(lVar11 + -8);
  uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar1 = *(long *)(lVar10 + 0x40) + uVar5;
  uVar7 = lVar1 + param_1 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar1 + param_2 & (uVar5 ^ 0xffffffffffffffff);
  pcVar13 = *(code **)(lVar12 + 0x30);
  uVar5 = uVar7;
  (*pcVar13)(uVar7,1,lVar11);
  uVar2 = uVar9;
  (*pcVar13)(uVar9,1,lVar11);
  if ((int)uVar5 == 0) {
    if ((int)uVar2 == 0) {
      (**(code **)(lVar12 + 0x18))(uVar7,uVar9,lVar11);
      goto LAB_1040ea908;
    }
    (**(code **)(lVar12 + 8))(uVar7,lVar11);
  }
  else if ((int)uVar2 == 0) {
    (**(code **)(lVar12 + 0x10))(uVar7,uVar9,lVar11);
    (**(code **)(lVar12 + 0x38))(uVar7,0,1,lVar11);
    goto LAB_1040ea908;
  }
  lVar1 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  _memcpy(uVar7,uVar9,lVar1);
LAB_1040ea908:
  lVar1 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar6 = (undefined8 *)(uVar7 + lVar1 + 7 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(uVar9 + lVar1 + 7 & 0xfffffffffffffff8);
  uVar8 = puVar6[1];
  uVar3 = puVar4[1];
  uVar14 = *puVar4;
  puVar6[1] = puVar4[1];
  *puVar6 = uVar14;
  _swift_retain(uVar3);
  _swift_release(uVar8);
  return param_1;
}



/* Entry: 1040ea980; end: 1040eaaa7;  */

long FUN_1040ea980(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar8 = *(long *)(lVar1 + -8);
  (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar1);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar9 + -8);
  uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar1 = *(long *)(lVar8 + 0x40) + uVar3;
  uVar5 = lVar1 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar6 = lVar1 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = uVar6;
  (**(code **)(lVar10 + 0x30))(uVar6,1,lVar9);
  if ((int)uVar3 == 0) {
    (**(code **)(lVar10 + 0x20))(uVar5,uVar6,lVar9);
    (**(code **)(lVar10 + 0x38))(uVar5,0,1,lVar9);
    iVar7 = *(int *)(lVar10 + 0x54);
    lVar1 = *(long *)(lVar10 + 0x40);
  }
  else {
    iVar7 = *(int *)(lVar10 + 0x54);
    lVar1 = *(long *)(lVar10 + 0x40);
    lVar8 = lVar1;
    if (iVar7 == 0) {
      lVar8 = lVar1 + 1;
    }
    _memcpy(uVar5,uVar6,lVar8);
  }
  if (iVar7 == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar4 = (undefined8 *)(uVar5 + lVar1 + 7 & 0xffffffffffffff8);
  puVar2 = (undefined8 *)(uVar6 + lVar1 + 7 & 0xffffffffffffff8);
  uVar11 = *puVar2;
  puVar4[1] = puVar2[1];
  *puVar4 = uVar11;
  return param_1;
}



/* Entry: 1040eaaa8; end: 1040eac23;  */

long FUN_1040eaaa8(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar1 + -8);
  (**(code **)(lVar9 + 0x28))(param_1,param_2,lVar1);
  lVar10 = *(long *)(param_3 + 0x18);
  lVar11 = *(long *)(lVar10 + -8);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar1 = *(long *)(lVar9 + 0x40) + uVar5;
  uVar7 = lVar1 + param_1 & (uVar5 ^ 0xffffffffffffffff);
  uVar8 = lVar1 + param_2 & (uVar5 ^ 0xffffffffffffffff);
  pcVar12 = *(code **)(lVar11 + 0x30);
  uVar5 = uVar7;
  (*pcVar12)(uVar7,1,lVar10);
  uVar2 = uVar8;
  (*pcVar12)(uVar8,1,lVar10);
  if ((int)uVar5 == 0) {
    if ((int)uVar2 == 0) {
      (**(code **)(lVar11 + 0x28))(uVar7,uVar8,lVar10);
      goto LAB_1040eabb8;
    }
    (**(code **)(lVar11 + 8))(uVar7,lVar10);
  }
  else if ((int)uVar2 == 0) {
    (**(code **)(lVar11 + 0x20))(uVar7,uVar8,lVar10);
    (**(code **)(lVar11 + 0x38))(uVar7,0,1,lVar10);
    goto LAB_1040eabb8;
  }
  lVar1 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  _memcpy(uVar7,uVar8,lVar1);
LAB_1040eabb8:
  lVar1 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar6 = (undefined8 *)(uVar7 + lVar1 + 7 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(uVar8 + lVar1 + 7 & 0xffffffffffffff8);
  uVar3 = puVar6[1];
  uVar13 = *puVar4;
  puVar6[1] = puVar4[1];
  *puVar6 = uVar13;
  _swift_release(uVar3);
  return param_1;
}



/* Entry: 1040eac24; end: 1040eadd7;  */

int * FUN_1040eac24(int *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar13 = *(long *)(lVar9 + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  lVar12 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(uint *)(lVar12 + 0x54);
  uVar4 = 0;
  if (uVar7 != 0) {
    uVar4 = uVar7 - 1;
  }
  uVar2 = uVar4;
  if (uVar4 <= uVar6) {
    uVar2 = uVar6;
  }
  if (uVar2 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar14 = *(long *)(lVar12 + 0x40);
  if (uVar7 == 0) {
    lVar14 = lVar14 + 1;
  }
  if (param_2 != 0) {
    uVar15 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar10 = *(long *)(lVar13 + 0x40) + uVar15;
    if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
      uVar1 = (lVar14 + 7 + (uVar10 & (uVar15 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
      uVar11 = 2;
      uVar5 = uVar11;
      if ((uVar1 & 0xfffffff8) == 0) {
        uVar5 = (param_2 - uVar2) + 1;
      }
      if (0xffff < uVar5) {
        uVar11 = 4;
      }
      if (uVar5 < 0x100) {
        uVar11 = 1;
      }
      uVar3 = 0;
      if (1 < uVar5) {
        uVar3 = uVar11;
      }
      if (uVar3 < 2) {
        if ((uVar3 != 0) &&
           (uVar11 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
        {
LAB_1040ead04:
          iVar8 = uVar11 - 1;
          if ((uVar1 & 0xfffffff8) != 0) {
            iVar8 = *param_1;
          }
          return (int *)(ulong)(uVar2 + iVar8 + 1);
        }
      }
      else {
        if (uVar3 == 2) {
          uVar11 = (uint)*(ushort *)((long)param_1 + uVar1);
        }
        else {
          uVar11 = *(uint *)((long)param_1 + uVar1);
        }
        if (uVar11 != 0) goto LAB_1040ead04;
      }
    }
    if (uVar6 == uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001040ead5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar13 + 0x30))(param_1,uVar6,lVar9);
      return param_1;
    }
    uVar10 = uVar10 + (long)param_1 & ~uVar15;
    if (uVar4 != uVar2) {
      uVar10 = *(ulong *)(lVar14 + 7 + uVar10 & 0xffffffffffffff8);
      if (0xfffffffe < uVar10) {
        uVar10 = 0xffffffff;
      }
      return (int *)(ulong)((int)uVar10 + 1);
    }
    if (1 < uVar7) {
      (**(code **)(lVar12 + 0x30))();
      uVar4 = 0;
      if ((int)uVar10 != 0) {
        uVar4 = (int)uVar10 - 1;
      }
      return (int *)(ulong)uVar4;
    }
  }
  return (int *)0x0;
}



/* Entry: 1040eadd8; end: 1040eafbb;  */

void FUN_1040eadd8(int *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar14 = *(long *)(lVar8 + -8);
  uVar6 = *(uint *)(lVar14 + 0x54);
  lVar11 = *(long *)(param_4 + 0x18);
  lVar13 = *(long *)(lVar11 + -8);
  uVar10 = *(uint *)(lVar13 + 0x54);
  uVar3 = 0;
  if (uVar10 != 0) {
    uVar3 = uVar10 - 1;
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar6) {
    uVar4 = uVar6;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar16 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar2 = *(long *)(lVar14 + 0x40) + uVar16;
  lVar15 = *(long *)(lVar13 + 0x40);
  if (uVar10 == 0) {
    lVar15 = lVar15 + 1;
  }
  lVar1 = (lVar15 + 7 + (uVar2 & (uVar16 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  uVar9 = 2;
  uVar17 = uVar9;
  if ((int)lVar1 == 0) {
    uVar17 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar17) {
    uVar9 = 4;
  }
  if (uVar17 < 0x100) {
    uVar9 = 1;
  }
  uVar5 = 0;
  if (1 < uVar17) {
    uVar5 = uVar9;
  }
  uVar9 = 0;
  if (uVar4 < param_3) {
    uVar9 = uVar5;
  }
  uVar17 = (uint)param_2;
  iVar7 = uVar17 - uVar4;
  if (uVar17 < uVar4 || iVar7 == 0) {
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar9 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (uVar17 != 0) {
      if (uVar6 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
        lVar11 = lVar8;
        uVar10 = uVar6;
      }
      else {
        param_1 = (int *)(uVar2 + (long)param_1 & ~uVar16);
        if (uVar3 != uVar4) {
          puVar12 = (ulong *)(lVar15 + 7 + (long)param_1 & 0xfffffffffffffff8);
          if (-1 < (int)uVar17) {
            *puVar12 = (ulong)(uVar17 - 1);
            return;
          }
          *puVar12 = (ulong)(uVar17 & 0x7fffffff);
          puVar12[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
        param_2 = (ulong)(uVar17 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0001040eaf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar10,lVar11);
      return;
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar7 = 1;
      _bzero(param_1,lVar1);
      *param_1 = uVar17 + ~uVar4;
    }
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar7;
      }
    }
    else if (uVar9 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar7;
    }
  }
  return;
}



/* Entry: 1040eafbc; end: 1040eafcf;  */

void FUN_1040eafbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040eafd0; end: 1040eb10f;  */

void FUN_1040eafd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  puVar3 = PTR___sSciTL_11034fea8;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar4 + -8);
  pcVar8 = *(code **)(lVar7 + 0x38);
  (*pcVar8)(param_1,1,1,lVar4);
  lVar5 = 0;
  FUN_1040eb110(0,param_5,param_6);
  iVar2 = *(int *)(lVar5 + 0x24);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness(0,param_6,param_5,puVar3,PTR___s7ElementSciTl_11034fb58);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1 + iVar2,1,1,lVar6);
  lVar6 = 0;
  __sSqMa(0,lVar4);
  (**(code **)(*(long *)(lVar6 + -8) + 8))(param_1,lVar6);
  (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar4);
  (*pcVar8)(param_1,0,1,lVar4);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x28));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Entry: 1040eb110; end: 1040eb11b;  */

void FUN_1040eb110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f036c);
  return;
}



/* Entry: 1040eb11c; end: 1040eb203;  */

void FUN_1040eb11c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,uVar5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar2 = 0;
  __sSqMa(0,lVar1);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040eb204,0,0);
  return;
}



/* Entry: 1040eb204; end: 1040eb4fb;  */

void FUN_1040eb204(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  iVar2 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x24);
  *(int *)(unaff_x22 + 0xe0) = iVar2;
  pcVar5 = *(code **)(*(long *)(unaff_x22 + 0x48) + 0x10);
  *(code **)(unaff_x22 + 0x88) = pcVar5;
  (*pcVar5)(uVar8,*(long *)(unaff_x22 + 0x20) + (long)iVar2,*(undefined8 *)(unaff_x22 + 0x40));
  pcVar5 = *(code **)(lVar3 + 0x30);
  *(code **)(unaff_x22 + 0x90) = pcVar5;
  (*pcVar5)(uVar8,1,uVar7);
  if ((int)uVar8 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x40));
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar8,uVar7,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(uVar9,1,lVar3);
    if ((int)uVar9 == 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
      _swift_getAssociatedConformanceWitness
                (uVar8,*(undefined8 *)(unaff_x22 + 0x30),lVar3,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar4 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xd0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1040eb808;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
LAB_1040eb4d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar4,uVar7,lVar3,uVar8);
      return;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x50),1,1,*(undefined8 *)(unaff_x22 + 0x38));
    pcVar5 = *(code **)(unaff_x22 + 0x88);
    iVar2 = *(int *)(unaff_x22 + 0xe0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x28))
              (lVar3 + iVar2,*(undefined8 *)(unaff_x22 + 0x50),uVar7);
    (*pcVar5)(uVar8,lVar3 + iVar2,uVar7);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    pcVar5 = *(code **)(*(long *)(unaff_x22 + 0x70) + 0x20);
    *(code **)(unaff_x22 + 0x98) = pcVar5;
    (*pcVar5)(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x68),
              *(undefined8 *)(unaff_x22 + 0x38));
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar9,uVar8,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    *(long *)(unaff_x22 + 0xa0) = lVar3;
    lVar6 = *(long *)(lVar3 + -8);
    *(long *)(unaff_x22 + 0xa8) = lVar6;
    (**(code **)(lVar6 + 0x30))(uVar7,1,lVar3);
    if ((int)uVar7 == 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
      _swift_getAssociatedConformanceWitness
                (uVar8,*(undefined8 *)(unaff_x22 + 0x30),lVar3,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar4 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xb0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1040eb4fc;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
      goto LAB_1040eb4d4;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x60),1,1,*(undefined8 *)(unaff_x22 + 0x38));
    lVar6 = *(long *)(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(lVar6 + 8))(*(undefined8 *)(unaff_x22 + 0x80),uVar9);
    (**(code **)(lVar3 + 8))(uVar7,uVar8);
    (**(code **)(lVar6 + 0x38))(uVar10,1,1,uVar9);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001040eb43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040eb4fc; end: 1040eb557;  */

void FUN_1040eb4fc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040eb558;
  }
  else {
    pcVar1 = FUN_1040eb984;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040eb558; end: 1040eb6af;  */

void FUN_1040eb558(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = uVar7;
  (**(code **)(unaff_x22 + 0x90))(uVar7,1,uVar8);
  if ((int)uVar5 == 1) {
    lVar10 = *(long *)(unaff_x22 + 0x70);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(lVar10 + 8))(*(undefined8 *)(unaff_x22 + 0x80),uVar8);
    (**(code **)(lVar3 + 8))(uVar7,uVar5);
    (**(code **)(lVar10 + 0x38))(uVar9,1,1,uVar8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001040eb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar10 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0x98))(*(undefined8 *)(unaff_x22 + 0x78),uVar7,uVar8);
  piVar2 = *(int **)(lVar10 + *(int *)(lVar3 + 0x28));
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1040eb6b0;
                    /* WARNING: Could not recover jumptable at 0x0001040eb6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (plVar6,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x80),
             *(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 1040eb6b0; end: 1040eb70b;  */

void FUN_1040eb6b0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040eb70c;
  }
  else {
    pcVar1 = FUN_1040eba0c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040eb70c; end: 1040eb807;  */

void FUN_1040eb70c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  
  iVar6 = *(int *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  pcVar4 = *(code **)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  pcVar10 = *(code **)(lVar2 + 8);
  (*pcVar10)(*(undefined8 *)(unaff_x22 + 0x78),uVar9);
  (*pcVar10)(uVar1,uVar9);
  (**(code **)(lVar2 + 0x38))(uVar8,0,1,uVar9);
  (**(code **)(lVar5 + 0x28))(lVar11 + iVar6,uVar8,uVar3);
  (*pcVar4)(uVar7,lVar11 + iVar6,uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001040eb804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040eb808; end: 1040eb863;  */

void FUN_1040eb808(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040eb864;
  }
  else {
    pcVar1 = FUN_1040eb910;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040eb864; end: 1040eb90f;  */

void FUN_1040eb864(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x22;
  long lVar8;
  
  pcVar7 = *(code **)(unaff_x22 + 0x88);
  iVar4 = *(int *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar8 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x28))
            (lVar8 + iVar4,*(undefined8 *)(unaff_x22 + 0x50),uVar6);
  (*pcVar7)(uVar5,lVar8 + iVar4,uVar6);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001040eb90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040eb910; end: 1040eb983;  */

void FUN_1040eb910(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040eb980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040eb984; end: 1040eba0b;  */

void FUN_1040eb984(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040eba08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040eba0c; end: 1040ebaff;  */

void FUN_1040eba0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar9 = *(long *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar5 = 0;
  __sSqMa(0,uVar1);
  (**(code **)(*(long *)(lVar5 + -8) + 8))(uVar8,lVar5);
  (**(code **)(lVar3 + 0x38))(uVar8,1,1,uVar1);
  _swift_willThrow();
  pcVar6 = *(code **)(lVar9 + 8);
  (*pcVar6)(uVar2,uVar7);
  (*pcVar6)(uVar4,uVar7);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001040ebafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040ebb00; end: 1040ebb5f;  */

void FUN_1040ebb00(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1040ebb60;
  plVar4[3] = param_2;
  plVar4[4] = unaff_x20;
  plVar4[2] = param_1;
  lVar6 = *(long *)(param_2 + 0x18);
  plVar4[5] = lVar6;
  lVar5 = *(long *)(param_2 + 0x10);
  plVar4[6] = lVar5;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar6,lVar5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar4[7] = lVar1;
  lVar5 = 0;
  __sSqMa(0,lVar1);
  plVar4[8] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[9] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xb] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xd] = uVar3;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xe] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xf] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040eb204,0,0);
  return;
}



/* Entry: 1040ebb60; end: 1040ebb9b;  */

void FUN_1040ebb60(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040ebb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040ebb9c; end: 1040ebc27;  */

void FUN_1040ebb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1040ebc28;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar1,param_1,param_2,param_3,param_5,param_6,unaff_x22 + 0x10);
  return;
}



/* Entry: 1040ebc28; end: 1040ebc7b;  */

void FUN_1040ebc28(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040ebc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040ebc7c; end: 1040ebd8b;  */

void FUN_1040ebc7c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  lVar4 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,lVar5,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x8_00;
  (**(code **)(lVar7 + 0x10))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar4,lVar5,uVar6);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  _swift_retain(uVar3);
  FUN_1040eafd0(param_1,lVar4,uVar2,uVar3,lVar5,uVar6);
  return;
}



/* Entry: 1040ebd8c; end: 1040ebda7;  */

undefined * FUN_1040ebd8c(void)

{
  return PTR___ss5ErrorWS_11034ee10;
}



/* Entry: 1040ebda8; end: 1040ebdd7;  */

void FUN_1040ebda8(long param_1)

{
  FUN_1040ebc7c();
                    /* WARNING: Could not recover jumptable at 0x0001040ebdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040ebdd8; end: 1040ebddf;  */

void FUN_1040ebdd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040ebde0; end: 1040ebe57;  */

void FUN_1040ebde0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 1040ebe58; end: 1040ebf07;  */

long * FUN_1040ebe58(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x10 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    lVar2 = puVar4[1];
    uVar6 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar6;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Entry: 1040ebf08; end: 1040ebf47;  */

void FUN_1040ebf08(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*(undefined8 *)((param_1 + *(long *)(lVar1 + 0x40) + 7U & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 1040ebf48; end: 1040ec0db;  */

long FUN_1040ebf48(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = puVar2[1];
  uVar5 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 1040ec0dc; end: 1040ec1cf;  */

uint * FUN_1040ec0dc(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x10;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_1040ec16c;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_1040ec16c:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_1040ec16c;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001040ec1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xffffffffffffff8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Entry: 1040ec1d0; end: 1040ec32f;  */

void FUN_1040ec1d0(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  lVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x10;
  uVar10 = 2;
  uVar4 = uVar10;
  if ((int)lVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar4) {
    uVar10 = 4;
  }
  if (uVar4 < 0x100) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if (1 < uVar4) {
    uVar3 = uVar10;
  }
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  iVar6 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar6 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001040ec2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))();
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if ((int)param_2 < 0) {
        *puVar7 = (ulong)(param_2 & 0x7fffffff);
        puVar7[1] = 0;
      }
      else {
        *puVar7 = (ulong)(param_2 - 1);
      }
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar6 = 1;
      _bzero(param_1,lVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  return;
}



/* Entry: 1040ec330; end: 1040ec337;  */

void FUN_1040ec330(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040ec338; end: 1040ec41b;  */

void FUN_1040ec338(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar4 = 0x13f;
  __sSqMa();
  if (uVar3 < 0x40) {
    lStack_48 = *(long *)(lVar4 + -8) + 0x40;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    lVar4 = 0x13f;
    __sSqMa();
    if (uVar3 < 0x40) {
      lStack_40 = *(long *)(lVar4 + -8) + 0x40;
      puStack_38 = PTR___syycWV_11034f1c0 + 0x40;
      _swift_initStructMetadata(param_1,0,3,&lStack_48,param_1 + 0x20);
    }
  }
  return;
}



/* Entry: 1040ec41c; end: 1040ec61b;  */

long * FUN_1040ec41c(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar3 = PTR___sSciTL_11034fea8;
  uVar16 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar1,uVar16,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar15 = *(long *)(lVar4 + -8);
  lVar10 = *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar10 = lVar10 + 1;
  }
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar16,puVar3,PTR___s7ElementSciTl_11034fb58);
  lVar14 = *(long *)(lVar5 + -8);
  uVar7 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  uVar8 = lVar10 + uVar7;
  lVar12 = *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  uVar2 = (uint)uVar7 | *(uint *)(lVar15 + 0x50) & 0xf8;
  if ((uVar2 < 8 && ((*(uint *)(lVar15 + 0x50) | *(uint *)(lVar14 + 0x50)) & 0x100000) == 0) &&
      (lVar12 + (uVar8 & (uVar7 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x10 < 0x19) {
    plVar6 = param_2;
    (**(code **)(lVar15 + 0x30))(param_2,1,lVar4);
    if ((int)plVar6 == 0) {
      (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar4);
      (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar4);
    }
    else {
      _memcpy(param_1,param_2,lVar10);
    }
    uVar13 = uVar8 + (long)param_1 & ~uVar7;
    uVar7 = uVar8 + (long)param_2 & ~uVar7;
    uVar8 = uVar7;
    (**(code **)(lVar14 + 0x30))(uVar7,1,lVar5);
    if ((int)uVar8 == 0) {
      (**(code **)(lVar14 + 0x10))(uVar13,uVar7,lVar5);
      (**(code **)(lVar14 + 0x38))(uVar13,0,1,lVar5);
    }
    else {
      _memcpy(uVar13,uVar7,lVar12);
    }
    puVar9 = (undefined8 *)(uVar13 + lVar12 + 7 & 0xffffffffffffff8);
    puVar11 = (undefined8 *)(uVar7 + lVar12 + 7 & 0xfffffffffffffff8);
    lVar10 = puVar11[1];
    uVar16 = *puVar11;
    puVar9[1] = puVar11[1];
    *puVar9 = uVar16;
  }
  else {
    uVar8 = (ulong)(uVar2 | 7);
    lVar10 = *param_2;
    *param_1 = lVar10;
    param_1 = (long *)(lVar10 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar10);
  return param_1;
}



/* Entry: 1040ec61c; end: 1040ec8db;  */

void FUN_1040ec61c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar4 + -8);
  lVar8 = param_1;
  (**(code **)(lVar7 + 0x30))(param_1,1,lVar4);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar7 + 8))(param_1,lVar4);
  }
  iVar3 = *(int *)(lVar7 + 0x54);
  lVar8 = *(long *)(lVar7 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar4 + -8);
  lVar8 = lVar8 + param_1;
  if (iVar3 == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar6 = lVar8 + (ulong)*(byte *)(lVar7 + 0x50) &
          ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = uVar6;
  (**(code **)(lVar7 + 0x30))(uVar6,1,lVar4);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar7 + 8))(uVar6,lVar4);
  }
  lVar8 = uVar6 + *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)((lVar8 + 7U & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 1040ec8dc; end: 1040ecb27;  */

long FUN_1040ec8dc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar10 = *(undefined8 *)(param_3 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar12 = *(long *)(lVar1 + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar7 = param_1;
  (*pcVar13)(param_1,1,lVar1);
  lVar2 = param_2;
  (*pcVar13)(param_2,1,lVar1);
  if ((int)lVar7 == 0) {
    if ((int)lVar2 != 0) {
      (**(code **)(lVar12 + 8))(param_1,lVar1);
      goto LAB_1040ec99c;
    }
    (**(code **)(lVar12 + 0x18))(param_1,param_2,lVar1);
  }
  else if ((int)lVar2 == 0) {
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar1);
  }
  else {
LAB_1040ec99c:
    lVar7 = *(long *)(lVar12 + 0x40);
    if (*(int *)(lVar12 + 0x54) == 0) {
      lVar7 = lVar7 + 1;
    }
    _memcpy(param_1,param_2,lVar7);
  }
  lVar7 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar4,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar1 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar11 = lVar7 + uVar5 + param_1 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar7 + uVar5 + param_2 & (uVar5 ^ 0xffffffffffffffff);
  pcVar13 = *(code **)(lVar1 + 0x30);
  uVar5 = uVar11;
  (*pcVar13)(uVar11,1,lVar2);
  uVar3 = uVar9;
  (*pcVar13)(uVar9,1,lVar2);
  if ((int)uVar5 == 0) {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar1 + 0x18))(uVar11,uVar9,lVar2);
      goto LAB_1040eca98;
    }
    (**(code **)(lVar1 + 8))(uVar11,lVar2);
  }
  else if ((int)uVar3 == 0) {
    (**(code **)(lVar1 + 0x10))(uVar11,uVar9,lVar2);
    (**(code **)(lVar1 + 0x38))(uVar11,0,1,lVar2);
    goto LAB_1040eca98;
  }
  lVar7 = *(long *)(lVar1 + 0x40);
  if (*(int *)(lVar1 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  _memcpy(uVar11,uVar9,lVar7);
LAB_1040eca98:
  lVar7 = *(long *)(lVar1 + 0x40);
  if (*(int *)(lVar1 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  puVar8 = (undefined8 *)(uVar11 + lVar7 + 7 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(uVar9 + lVar7 + 7 & 0xfffffffffffffff8);
  uVar10 = puVar8[1];
  uVar4 = puVar6[1];
  uVar14 = *puVar6;
  puVar8[1] = puVar6[1];
  *puVar8 = uVar14;
  _swift_retain(uVar4);
  _swift_release(uVar10);
  return param_1;
}



/* Entry: 1040ecb28; end: 1040ecccf;  */

long FUN_1040ecb28(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar1,uVar11,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar2 + -8);
  lVar10 = param_2;
  (**(code **)(lVar9 + 0x30))(param_2,1,lVar2);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar2);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar2);
    iVar8 = *(int *)(lVar9 + 0x54);
    lVar10 = *(long *)(lVar9 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar9 + 0x54);
    lVar10 = *(long *)(lVar9 + 0x40);
    lVar2 = lVar10;
    if (iVar8 == 0) {
      lVar2 = lVar10 + 1;
    }
    _memcpy(param_1,param_2,lVar2);
  }
  if (iVar8 == 0) {
    lVar10 = lVar10 + 1;
  }
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar1,uVar11,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar7 = lVar10 + uVar3 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar6 = lVar10 + uVar3 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = uVar6;
  (**(code **)(lVar9 + 0x30))(uVar6,1,lVar2);
  if ((int)uVar3 == 0) {
    (**(code **)(lVar9 + 0x20))(uVar7,uVar6,lVar2);
    (**(code **)(lVar9 + 0x38))(uVar7,0,1,lVar2);
    iVar8 = *(int *)(lVar9 + 0x54);
    lVar10 = *(long *)(lVar9 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar9 + 0x54);
    lVar10 = *(long *)(lVar9 + 0x40);
    lVar2 = lVar10;
    if (iVar8 == 0) {
      lVar2 = lVar10 + 1;
    }
    _memcpy(uVar7,uVar6,lVar2);
  }
  if (iVar8 == 0) {
    lVar10 = lVar10 + 1;
  }
  puVar5 = (undefined8 *)(uVar7 + lVar10 + 7 & 0xffffffffffffff8);
  puVar4 = (undefined8 *)(uVar6 + lVar10 + 7 & 0xffffffffffffff8);
  uVar11 = *puVar4;
  puVar5[1] = puVar4[1];
  *puVar5 = uVar11;
  return param_1;
}



/* Entry: 1040eccd0; end: 1040ecf0f;  */

long FUN_1040eccd0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar13 = *(undefined8 *)(param_3 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar13,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar11 = *(long *)(lVar1 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar7 = param_1;
  (*pcVar12)(param_1,1,lVar1);
  lVar2 = param_2;
  (*pcVar12)(param_2,1,lVar1);
  if ((int)lVar7 == 0) {
    if ((int)lVar2 != 0) {
      (**(code **)(lVar11 + 8))(param_1,lVar1);
      goto LAB_1040ecd90;
    }
    (**(code **)(lVar11 + 0x28))(param_1,param_2,lVar1);
  }
  else if ((int)lVar2 == 0) {
    (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar11 + 0x38))(param_1,0,1,lVar1);
  }
  else {
LAB_1040ecd90:
    lVar7 = *(long *)(lVar11 + 0x40);
    if (*(int *)(lVar11 + 0x54) == 0) {
      lVar7 = lVar7 + 1;
    }
    _memcpy(param_1,param_2,lVar7);
  }
  lVar7 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar13,uVar4,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar1 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar10 = lVar7 + uVar5 + param_1 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar7 + uVar5 + param_2 & (uVar5 ^ 0xffffffffffffffff);
  pcVar12 = *(code **)(lVar1 + 0x30);
  uVar5 = uVar10;
  (*pcVar12)(uVar10,1,lVar2);
  uVar3 = uVar9;
  (*pcVar12)(uVar9,1,lVar2);
  if ((int)uVar5 == 0) {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar1 + 0x28))(uVar10,uVar9,lVar2);
      goto LAB_1040ece8c;
    }
    (**(code **)(lVar1 + 8))(uVar10,lVar2);
  }
  else if ((int)uVar3 == 0) {
    (**(code **)(lVar1 + 0x20))(uVar10,uVar9,lVar2);
    (**(code **)(lVar1 + 0x38))(uVar10,0,1,lVar2);
    goto LAB_1040ece8c;
  }
  lVar7 = *(long *)(lVar1 + 0x40);
  if (*(int *)(lVar1 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  _memcpy(uVar10,uVar9,lVar7);
LAB_1040ece8c:
  lVar7 = *(long *)(lVar1 + 0x40);
  if (*(int *)(lVar1 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  puVar8 = (undefined8 *)(uVar10 + lVar7 + 7 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(uVar9 + lVar7 + 7 & 0xffffffffffffff8);
  uVar4 = puVar8[1];
  uVar13 = *puVar6;
  puVar8[1] = puVar6[1];
  *puVar8 = uVar13;
  _swift_release(uVar4);
  return param_1;
}



/* Entry: 1040ecf10; end: 1040ed4ab;  */

int FUN_1040ecf10(int *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  
  puVar11 = PTR___sSciTL_11034fea8;
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar7,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar21 = *(long *)(lVar14 + -8);
  uVar9 = *(uint *)(lVar21 + 0x54);
  uVar2 = 0;
  if (uVar9 != 0) {
    uVar2 = uVar9 - 1;
  }
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,uVar8,uVar7,puVar11,PTR___s7ElementSciTl_11034fb58);
  lVar16 = *(long *)(lVar15 + -8);
  uVar10 = *(uint *)(lVar16 + 0x54);
  uVar3 = 0;
  if (uVar10 != 0) {
    uVar3 = uVar10 - 1;
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  lVar18 = *(long *)(lVar21 + 0x40);
  if (uVar9 == 0) {
    lVar18 = lVar18 + 1;
  }
  lVar19 = *(long *)(lVar16 + 0x40);
  if (uVar10 == 0) {
    lVar19 = lVar19 + 1;
  }
  if (param_2 == 0) {
LAB_1040ed0a4:
    iVar13 = 0;
  }
  else {
    uVar20 = (ulong)*(byte *)(lVar16 + 0x50);
    if (uVar4 <= param_2 && param_2 - uVar4 != 0) {
      uVar1 = (lVar19 + 7 + (lVar18 + uVar20 & (uVar20 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8)
              + 0x10;
      uVar12 = 2;
      uVar6 = uVar12;
      if ((uVar1 & 0xfffffff8) == 0) {
        uVar6 = (param_2 - uVar4) + 1;
      }
      if (0xffff < uVar6) {
        uVar12 = 4;
      }
      if (uVar6 < 0x100) {
        uVar12 = 1;
      }
      uVar5 = 0;
      if (1 < uVar6) {
        uVar5 = uVar12;
      }
      if (uVar5 < 2) {
        if ((uVar5 != 0) &&
           (uVar12 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
        {
LAB_1040ed030:
          iVar13 = uVar12 - 1;
          if ((uVar1 & 0xfffffff8) != 0) {
            iVar13 = *param_1;
          }
          return uVar4 + iVar13 + 1;
        }
      }
      else {
        if (uVar5 == 2) {
          uVar12 = (uint)*(ushort *)((long)param_1 + uVar1);
        }
        else {
          uVar12 = *(uint *)((long)param_1 + uVar1);
        }
        if (uVar12 != 0) goto LAB_1040ed030;
      }
    }
    if (uVar2 == uVar4) {
      if (uVar9 < 2) goto LAB_1040ed0a4;
      pcVar17 = *(code **)(lVar21 + 0x30);
      lVar15 = lVar14;
      uVar10 = uVar9;
    }
    else {
      param_1 = (int *)(lVar18 + uVar20 + (long)param_1 & ~uVar20);
      if (uVar3 != uVar4) {
        uVar20 = *(ulong *)(lVar19 + 7 + (long)param_1 & 0xffffffffffffff8);
        if (0xfffffffe < uVar20) {
          uVar20 = 0xffffffff;
        }
        return (int)uVar20 + 1;
      }
      if (uVar10 < 2) goto LAB_1040ed0a4;
      pcVar17 = *(code **)(lVar16 + 0x30);
    }
    (*pcVar17)(param_1,uVar10,lVar15);
    iVar13 = 0;
    if ((int)param_1 != 0) {
      iVar13 = (int)param_1 + -1;
    }
  }
  return iVar13;
}



/* Entry: 1040ed4ac; end: 1040ed5bb;  */

void FUN_1040ed4ac(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long lVar6;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  lVar6 = *(long *)(param_2 + 0x10);
  *(long *)(unaff_x22 + 0x30) = lVar6;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar5,lVar6,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar2 = 0;
  __sSqMa(0,lVar1);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  lVar1 = 0;
  __sSqMa(0,lVar6);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  lVar1 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040ed5bc,0,0);
  return;
}



/* Entry: 1040ed5bc; end: 1040ed7fb;  */

void FUN_1040ed5bc(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar8 = *(long *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 0x10))
            (uVar7,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x70));
  (**(code **)(lVar8 + 0x30))(uVar7,1,uVar4);
  lVar8 = *(long *)(unaff_x22 + 0x58);
  if ((int)uVar7 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x70));
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(lVar8 + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x38));
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001040ed694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar10 = *(long *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar12 = *(long *)(unaff_x22 + 0x18);
  lVar1 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x80),
             *(undefined8 *)(unaff_x22 + 0x30));
  iVar2 = *(int *)(lVar12 + 0x2c);
  *(int *)(unaff_x22 + 0xb0) = iVar2;
  (**(code **)(lVar10 + 0x10))(uVar4,lVar1 + iVar2,uVar5);
  pcVar9 = *(code **)(lVar8 + 0x30);
  (*pcVar9)(uVar4,1,uVar7);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  if ((int)uVar4 == 1) {
    __ss5ClockP3now7InstantQzvgTj
              (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x30),
               *(undefined8 *)(unaff_x22 + 0x28));
    (*pcVar9)(uVar7,1,uVar5);
    if ((int)uVar7 != 1) {
      (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
                (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x20))(*(undefined8 *)(unaff_x22 + 0x60),uVar7,uVar5)
    ;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar10 = *(long *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar8 = *(long *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar12 = *(long *)(unaff_x22 + 0x18);
  iVar2 = *(int *)(lVar12 + 0x24);
  _swift_getAssociatedConformanceWitness
            (uVar6,*(undefined8 *)(unaff_x22 + 0x30),uVar5,PTR___ss5ClockTL_110350028,
             PTR___ss5ClockP7InstantAB_s0B8ProtocolTn_110350018);
  __ss15InstantProtocolP8advanced2byx8DurationQz_tFTj(uVar4,lVar8 + iVar2,uVar5,uVar6);
  pcVar9 = *(code **)(lVar10 + 8);
  *(code **)(unaff_x22 + 0x98) = pcVar9;
  (*pcVar9)(uVar7,uVar5);
  iVar2 = *(int *)(lVar12 + 0x28);
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTjTu_110350010
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040ed7fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTj_110350008)
            (*(undefined8 *)(unaff_x22 + 0x68),lVar8 + iVar2,*(undefined8 *)(unaff_x22 + 0x30),
             *(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Entry: 1040ed7fc; end: 1040ed857;  */

void FUN_1040ed7fc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040ed858;
  }
  else {
    pcVar1 = FUN_1040ed964;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040ed858; end: 1040ed963;  */

void FUN_1040ed858(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  code *pcVar10;
  long lVar11;
  
  lVar9 = (long)*(int *)(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar11 = *(long *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  __ss5ClockP3now7InstantQzvgTj
            (*(undefined8 *)(unaff_x22 + 0x10),uVar3,*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar1 + 8))(uVar7,uVar3);
  (**(code **)(lVar5 + 8))(lVar4 + lVar9,uVar2);
  (**(code **)(lVar11 + 0x20))(lVar4 + lVar9,uVar6,uVar8);
  pcVar10 = *(code **)(lVar11 + 0x38);
  (*pcVar10)(lVar4 + lVar9,0,1,uVar8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  (*pcVar10)(*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001040ed960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040ed964; end: 1040eda57;  */

void FUN_1040ed964(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar7 = *(long *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar8 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0x98))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar7 + 8))(uVar1,uVar4);
  _swift_errorRelease(uVar5);
  (**(code **)(lVar3 + 8))(uVar6,uVar2);
  (**(code **)(lVar7 + 0x38))(uVar6,1,1,uVar4);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(lVar8 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001040eda54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040eda58; end: 1040edab7;  */

void FUN_1040eda58(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1040edab8;
  plVar4[3] = param_2;
  plVar4[4] = unaff_x20;
  plVar4[2] = param_1;
  lVar5 = *(long *)(param_2 + 0x18);
  plVar4[5] = lVar5;
  lVar6 = *(long *)(param_2 + 0x10);
  plVar4[6] = lVar6;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar5,lVar6,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  plVar4[7] = lVar1;
  lVar5 = 0;
  __sSqMa(0,lVar1);
  plVar4[8] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[9] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar2;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xb] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xd] = uVar2;
  lVar1 = 0;
  __sSqMa(0,lVar6);
  plVar4[0xe] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xf] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x10] = uVar2;
  lVar1 = *(long *)(lVar6 + -8);
  plVar4[0x11] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x12] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040ed5bc,0,0);
  return;
}



/* Entry: 1040edab8; end: 1040edaf7;  */

void FUN_1040edab8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040edaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040edaf8; end: 1040edb7b;  */

void FUN_1040edaf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1040edb7c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar1,param_1,param_2,param_3,param_5,param_6);
  return;
}



/* Entry: 1040edb7c; end: 1040edbbf;  */

void FUN_1040edb7c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040edbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040edbc0; end: 1040edbcb;  */

void FUN_1040edbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f03a8);
  return;
}



/* Entry: 1040edbcc; end: 1040edd2b;  */

void FUN_1040edbcc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(lVar3 + -8);
  lVar2 = param_2;
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_70 = *(undefined8 *)(lVar2 + 0x18);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uStack_70,lVar3,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar2 = 0;
  __sSqMa(0,uVar1);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar5 - extraout_x8_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(extraout_x8_01 + 0x10))
            (lVar7 - extraout_x12,unaff_x20 + *(int *)(param_2 + 0x24),uVar1);
  (**(code **)(lVar6 + 0x10))(lVar7,unaff_x20 + *(int *)(param_2 + 0x28),lVar2);
  (**(code **)(lVar4 + 0x10))(lVar5);
  func_0x0001040ed33c(uStack_68,lVar7 - extraout_x12,lVar7,lVar5,lVar3,uStack_70);
  return;
}



/* Entry: 1040edd2c; end: 1040edd5b;  */

void FUN_1040edd2c(long param_1)

{
  FUN_1040edbcc();
                    /* WARNING: Could not recover jumptable at 0x0001040edd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040edd5c; end: 1040edd77;  */

undefined * FUN_1040edd5c(void)

{
  return PTR___ss5NeverOs5ErrorsWP_11034ee90;
}



/* Entry: 1040edd78; end: 1040ede43;  */

undefined1  [16] FUN_1040edd78(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(uVar1 - 8) + 0x40;
    uVar3 = *(ulong *)(param_1 + 0x18);
    uVar2 = 0x13f;
    _swift_getAssociatedTypeWitness();
    uVar1 = uVar2;
    if (uVar3 < 0x40) {
      lStack_30 = *(long *)(uVar2 - 8) + 0x40;
      uVar1 = 0x13f;
      __sSqMa();
      if (uVar2 < 0x40) {
        lStack_28 = *(long *)(uVar1 - 8) + 0x40;
        _swift_initStructMetadata(param_1,0,3,&lStack_38,param_1 + 0x20);
        uVar1 = 0;
        uVar4 = 0;
        goto LAB_1040ede30;
      }
    }
  }
  uVar4 = 0x3f;
LAB_1040ede30:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 1040ede44; end: 1040edfb7;  */

long * FUN_1040ede44(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar2,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar11 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar8 = lVar10 + uVar6;
  lVar7 = *(long *)(lVar11 + 0x40);
  lVar10 = lVar7 + uVar6;
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar3 = *(uint *)(lVar12 + 0x50) | *(uint *)(lVar11 + 0x50);
  uVar1 = uVar3 & 0xff;
  if ((uVar1 < 8 && (uVar3 & 0x100000) == 0) &&
      (lVar10 + (uVar8 & (uVar6 ^ 0xffffffffffffffff)) & (uVar6 ^ 0xffffffffffffffff)) + lVar7 <
      0x19) {
    uVar6 = ~uVar6;
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar2);
    uVar9 = uVar8 + (long)param_1 & uVar6;
    uVar8 = uVar8 + (long)param_2 & uVar6;
    pcVar13 = *(code **)(lVar11 + 0x10);
    (*pcVar13)(uVar9,uVar8,lVar4);
    uVar9 = lVar10 + uVar9;
    uVar8 = lVar10 + uVar8;
    uVar5 = uVar8 & uVar6;
    (**(code **)(lVar11 + 0x30))(uVar5,1,lVar4);
    if ((int)uVar5 == 0) {
      (*pcVar13)(uVar9 & uVar6,uVar8 & uVar6,lVar4);
      (**(code **)(lVar11 + 0x38))(uVar9 & uVar6,0,1,lVar4);
    }
    else {
      _memcpy(uVar9 & uVar6,uVar8 & uVar6,lVar7);
    }
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    param_1 = (long *)(lVar10 + ((ulong)uVar1 + 0x10 & ((ulong)uVar1 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040edfb8; end: 1040ee08f;  */

void FUN_1040edfb8(long param_1,long param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  (**(code **)(lVar6 + 8))(param_1,lVar4);
  lVar2 = *(long *)(lVar6 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),lVar4,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar4 = *(long *)(lVar6 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar3 = lVar2 + param_1 + uVar5 & (uVar5 ^ 0xffffffffffffffff);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  (*UNRECOVERED_JUMPTABLE)(uVar3,lVar6);
  uVar3 = *(long *)(lVar4 + 0x40) + uVar5 + uVar3;
  uVar1 = uVar3 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar1,1,lVar6);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040ee08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3 & (uVar5 ^ 0xffffffffffffffff),lVar6);
  return;
}



/* Entry: 1040ee090; end: 1040ee1a7;  */

long FUN_1040ee090(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar4);
  lVar6 = *(long *)(lVar6 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar4,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar4 = *(long *)(lVar1 + -8);
  uVar7 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar6 = lVar6 + uVar7;
  uVar5 = lVar6 + param_1 & (uVar7 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar7 ^ 0xffffffffffffffff);
  pcVar8 = *(code **)(lVar4 + 0x10);
  (*pcVar8)(uVar5,uVar3,lVar1);
  lVar6 = *(long *)(lVar4 + 0x40);
  uVar5 = lVar6 + uVar7 + uVar5;
  uVar3 = lVar6 + uVar7 + uVar3;
  uVar2 = uVar3 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar1);
  if ((int)uVar2 == 0) {
    (*pcVar8)(uVar5 & (uVar7 ^ 0xffffffffffffffff),uVar3 & (uVar7 ^ 0xffffffffffffffff),lVar1);
    (**(code **)(lVar4 + 0x38))(uVar5 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar1);
  }
  else {
    if (*(int *)(lVar4 + 0x54) == 0) {
      lVar6 = lVar6 + 1;
    }
    _memcpy(uVar5 & (uVar7 ^ 0xffffffffffffffff),uVar3 & (uVar7 ^ 0xffffffffffffffff),lVar6);
  }
  return param_1;
}



/* Entry: 1040ee1a8; end: 1040ee30b;  */

long FUN_1040ee1a8(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  code *pcVar10;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  (**(code **)(lVar7 + 0x18))(param_1,param_2,lVar5);
  lVar7 = *(long *)(lVar7 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar5,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar5 = *(long *)(lVar1 + -8);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar7 = lVar7 + uVar8;
  uVar6 = lVar7 + param_1 & (uVar8 ^ 0xffffffffffffffff);
  uVar4 = lVar7 + param_2 & (uVar8 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x18);
  (*pcVar9)(uVar6,uVar4,lVar1);
  lVar7 = *(long *)(lVar5 + 0x40);
  uVar6 = lVar7 + uVar8 + uVar6;
  uVar4 = lVar7 + uVar8 + uVar4;
  pcVar10 = *(code **)(lVar5 + 0x30);
  uVar2 = uVar6 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar2,1,lVar1);
  uVar3 = uVar4 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar3,1,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 == 0) {
      (*pcVar9)(uVar6 & (uVar8 ^ 0xffffffffffffffff),uVar4 & (uVar8 ^ 0xffffffffffffffff),lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))(uVar6 & (uVar8 ^ 0xffffffffffffffff),lVar1);
  }
  else if ((int)uVar3 == 0) {
    (**(code **)(lVar5 + 0x10))
              (uVar6 & (uVar8 ^ 0xffffffffffffffff),uVar4 & (uVar8 ^ 0xffffffffffffffff),lVar1);
    (**(code **)(lVar5 + 0x38))(uVar6 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar1);
    return param_1;
  }
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  _memcpy(uVar6 & (uVar8 ^ 0xffffffffffffffff),uVar4 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  return param_1;
}



/* Entry: 1040ee30c; end: 1040ee423;  */

long FUN_1040ee30c(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar4);
  lVar6 = *(long *)(lVar6 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar4,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar4 = *(long *)(lVar1 + -8);
  uVar7 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar6 = lVar6 + uVar7;
  uVar5 = lVar6 + param_1 & (uVar7 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar7 ^ 0xffffffffffffffff);
  pcVar8 = *(code **)(lVar4 + 0x20);
  (*pcVar8)(uVar5,uVar3,lVar1);
  lVar6 = *(long *)(lVar4 + 0x40);
  uVar5 = lVar6 + uVar7 + uVar5;
  uVar3 = lVar6 + uVar7 + uVar3;
  uVar2 = uVar3 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar1);
  if ((int)uVar2 == 0) {
    (*pcVar8)(uVar5 & (uVar7 ^ 0xffffffffffffffff),uVar3 & (uVar7 ^ 0xffffffffffffffff),lVar1);
    (**(code **)(lVar4 + 0x38))(uVar5 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar1);
  }
  else {
    if (*(int *)(lVar4 + 0x54) == 0) {
      lVar6 = lVar6 + 1;
    }
    _memcpy(uVar5 & (uVar7 ^ 0xffffffffffffffff),uVar3 & (uVar7 ^ 0xffffffffffffffff),lVar6);
  }
  return param_1;
}



/* Entry: 1040ee424; end: 1040ee587;  */

long FUN_1040ee424(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  code *pcVar10;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  (**(code **)(lVar7 + 0x28))(param_1,param_2,lVar5);
  lVar7 = *(long *)(lVar7 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar5,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar5 = *(long *)(lVar1 + -8);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar7 = lVar7 + uVar8;
  uVar6 = lVar7 + param_1 & (uVar8 ^ 0xffffffffffffffff);
  uVar4 = lVar7 + param_2 & (uVar8 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x28);
  (*pcVar9)(uVar6,uVar4,lVar1);
  lVar7 = *(long *)(lVar5 + 0x40);
  uVar6 = lVar7 + uVar8 + uVar6;
  uVar4 = lVar7 + uVar8 + uVar4;
  pcVar10 = *(code **)(lVar5 + 0x30);
  uVar2 = uVar6 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar2,1,lVar1);
  uVar3 = uVar4 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar3,1,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 == 0) {
      (*pcVar9)(uVar6 & (uVar8 ^ 0xffffffffffffffff),uVar4 & (uVar8 ^ 0xffffffffffffffff),lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))(uVar6 & (uVar8 ^ 0xffffffffffffffff),lVar1);
  }
  else if ((int)uVar3 == 0) {
    (**(code **)(lVar5 + 0x20))
              (uVar6 & (uVar8 ^ 0xffffffffffffffff),uVar4 & (uVar8 ^ 0xffffffffffffffff),lVar1);
    (**(code **)(lVar5 + 0x38))(uVar6 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar1);
    return param_1;
  }
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  _memcpy(uVar6 & (uVar8 ^ 0xffffffffffffffff),uVar4 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  return param_1;
}



/* Entry: 1040ee588; end: 1040ee76f;  */

uint * FUN_1040ee588(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar3 + -8);
  uVar4 = *(uint *)(lVar14 + 0x54);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar3,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar8 = *(long *)(lVar5 + -8);
  uVar7 = *(uint *)(lVar8 + 0x54);
  uVar9 = uVar7;
  if (uVar7 <= uVar4) {
    uVar9 = uVar4;
  }
  uVar2 = 0;
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
  }
  if (uVar2 <= uVar9) {
    uVar2 = uVar9;
  }
  lVar10 = *(long *)(lVar8 + 0x40);
  lVar1 = lVar10;
  if (uVar7 == 0) {
    lVar1 = lVar10 + 1;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar11 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = *(long *)(lVar14 + 0x40) + uVar11;
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_1040ee6a0;
  lVar1 = lVar1 + (lVar10 + uVar11 + (uVar6 & (uVar11 ^ 0xffffffffffffffff)) &
                  (uVar11 ^ 0xffffffffffffffff));
  uVar12 = (uint)lVar1;
  uVar9 = uVar12 << 3;
  if (uVar12 < 4) {
    uVar13 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar9 & 0x1f)) >> (ulong)(uVar9 & 0x1f)) + 1;
    if (0xff < uVar13) {
      if (uVar13 >> 0x10 == 0) {
        uVar13 = (uint)*(ushort *)((long)param_1 + lVar1);
      }
      else {
        uVar13 = *(uint *)((long)param_1 + lVar1);
      }
      goto LAB_1040ee638;
    }
    if (1 < uVar13) goto LAB_1040ee634;
  }
  else {
LAB_1040ee634:
    uVar13 = (uint)*(byte *)((long)param_1 + lVar1);
LAB_1040ee638:
    if (uVar13 != 0) {
      uVar4 = 0;
      if (uVar12 < 4) {
        uVar4 = uVar13 - 1 << (ulong)(uVar9 & 0x1f);
      }
      if (uVar12 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 4;
        if (uVar12 < 4) {
          uVar9 = uVar12;
        }
        if ((int)uVar9 < 3) {
          if (uVar9 == 1) {
            uVar9 = (uint)(byte)*param_1;
          }
          else {
            uVar9 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar9 == 3) {
          uVar9 = (uint)(uint3)*param_1;
        }
        else {
          uVar9 = *param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + (uVar9 | uVar4) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_1040ee6a0:
  if (uVar4 == uVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x30);
    lVar5 = lVar3;
    uVar7 = uVar4;
  }
  else {
    param_1 = (uint *)((ulong)(uVar6 + (long)param_1) & ~uVar11);
    if (uVar7 != uVar2) {
      uVar6 = (ulong)(lVar10 + uVar11 + (long)param_1) & ~uVar11;
      (**(code **)(lVar8 + 0x30))(uVar6,uVar7,lVar5);
      uVar9 = 0;
      if ((int)uVar6 != 0) {
        uVar9 = (int)uVar6 - 1;
      }
      return (uint *)(ulong)uVar9;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040ee6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar7,lVar5);
  return param_1;
}



/* Entry: 1040ee770; end: 1040ee9af;  */

void FUN_1040ee770(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  long lVar16;
  
  lVar8 = *(long *)(param_4 + 0x10);
  lVar16 = *(long *)(lVar8 + -8);
  uVar7 = *(uint *)(lVar16 + 0x54);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),lVar8,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar9 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar9 + 0x54);
  uVar3 = uVar4;
  if (uVar4 <= uVar7) {
    uVar3 = uVar7;
  }
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar1 = *(long *)(lVar16 + 0x40) + uVar10;
  lVar11 = *(long *)(lVar9 + 0x40);
  lVar2 = lVar11 + uVar10;
  if (uVar4 == 0) {
    lVar11 = lVar11 + 1;
  }
  lVar11 = lVar11 + (lVar2 + (uVar1 & (uVar10 ^ 0xffffffffffffffff)) & (uVar10 ^ 0xffffffffffffffff)
                    );
  uVar12 = (uint)lVar11;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar15 = 0;
  }
  else if (uVar12 < 4) {
    uVar13 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar12 << 3 & 0x1f)) >>
             (ulong)(uVar12 << 3 & 0x1f)) + 1;
    bVar15 = 2;
    if (0xffff < uVar13) {
      bVar15 = 4;
    }
    if (uVar13 < 0x100) {
      bVar15 = 1 < uVar13;
    }
  }
  else {
    bVar15 = 1;
  }
  uVar13 = (uint)param_2;
  if (uVar3 < uVar13) {
    uVar13 = uVar13 + ~uVar3;
    if (uVar12 < 4) {
      iVar14 = (uVar13 >> (ulong)(uVar12 << 3 & 0x1f)) + 1;
      if (uVar12 != 0) {
        uVar3 = uVar13 & (-1 << (ulong)(uVar12 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar11);
        uVar5 = (undefined2)uVar3;
        if (uVar12 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar12 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)uVar13;
        }
      }
    }
    else {
      _bzero(param_1,lVar11);
      *param_1 = uVar13;
      iVar14 = 1;
    }
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(char *)((long)param_1 + lVar11) = (char)iVar14;
      }
    }
    else if (bVar15 == 2) {
      *(short *)((long)param_1 + lVar11) = (short)iVar14;
    }
    else {
      *(int *)((long)param_1 + lVar11) = iVar14;
    }
  }
  else {
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(undefined1 *)((long)param_1 + lVar11) = 0;
      }
    }
    else if (bVar15 == 2) {
      *(undefined2 *)((long)param_1 + lVar11) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar11) = 0;
    }
    if (uVar13 != 0) {
      if (uVar7 < uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x38);
        param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar10);
        lVar8 = lVar6;
        uVar7 = uVar4;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001040ee948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar7,lVar8);
      return;
    }
  }
  return;
}



/* Entry: 1040ee9b0; end: 1040eeabf;  */

void FUN_1040ee9b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  uVar3 = uVar4;
  __sSqMa();
  if (uVar3 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    uVar5 = *(ulong *)(param_1 + 0x18);
    uVar2 = 0x13f;
    uVar3 = uVar5;
    _swift_getAssociatedTypeWitness
              (0x13f,uVar5,uVar4,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
    if (uVar3 < 0x40) {
      lStack_48 = *(long *)(uVar2 - 8) + 0x40;
      lVar1 = 0x13f;
      __sSqMa();
      if (uVar2 < 0x40) {
        lStack_40 = *(long *)(lVar1 + -8) + 0x40;
        uVar3 = 0xff;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar5,uVar4,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
        lVar1 = 0x13f;
        __sSqMa();
        if (uVar3 < 0x40) {
          lStack_38 = *(long *)(lVar1 + -8) + 0x40;
          _swift_initStructMetadata(param_1,0,4,&lStack_50,param_1 + 0x20);
        }
      }
    }
  }
  return;
}



/* Entry: 1040eeac0; end: 1040eed7f;  */

long * FUN_1040eeac0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  
  puVar6 = PTR___ss5ClockTL_110350028;
  lVar3 = *(long *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar15 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar11 = lVar11 + 1;
  }
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar3,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar21 = *(long *)(lVar7 + -8);
  uVar2 = *(uint *)(lVar21 + 0x50);
  uVar18 = (ulong)uVar2 & 0xff;
  uVar19 = lVar11 + uVar18;
  lVar12 = *(long *)(lVar21 + 0x40);
  lVar1 = lVar12 + uVar18;
  if (*(int *)(lVar21 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,lVar3,puVar6,PTR___s7Instants5ClockPTl_11034fb68);
  lVar20 = *(long *)(lVar8 + -8);
  uVar16 = (ulong)*(uint *)(lVar20 + 0x50) & 0xff;
  lVar13 = *(long *)(lVar20 + 0x40);
  if (*(int *)(lVar20 + 0x54) == 0) {
    lVar13 = lVar13 + 1;
  }
  uVar5 = uVar2 | *(uint *)(lVar15 + 0x50) | *(uint *)(lVar20 + 0x50);
  uVar2 = uVar5 & 0xff;
  if ((uVar2 < 8 && (uVar5 & 0x100000) == 0) &&
      (lVar12 + uVar16 +
       (lVar1 + (uVar19 & (uVar18 ^ 0xffffffffffffffff)) & (uVar18 ^ 0xffffffffffffffff)) &
      (uVar16 ^ 0xffffffffffffffff)) + lVar13 < 0x19) {
    uVar18 = ~uVar18;
    plVar9 = param_2;
    (**(code **)(lVar15 + 0x30))(param_2,1,lVar3);
    if ((int)plVar9 == 0) {
      (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar3);
      (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,lVar11);
    }
    uVar10 = ~uVar16;
    uVar17 = uVar19 + (long)param_1 & uVar18;
    uVar19 = uVar19 + (long)param_2 & uVar18;
    pcVar14 = *(code **)(lVar21 + 0x10);
    (*pcVar14)(uVar17,uVar19,lVar7);
    uVar17 = lVar1 + uVar17 & uVar18;
    uVar18 = lVar1 + uVar19 & uVar18;
    uVar19 = uVar18;
    (**(code **)(lVar21 + 0x30))(uVar18,1,lVar7);
    if ((int)uVar19 == 0) {
      (*pcVar14)(uVar17,uVar18,lVar7);
      (**(code **)(lVar21 + 0x38))(uVar17,0,1,lVar7);
    }
    else {
      _memcpy(uVar17,uVar18,lVar12);
    }
    uVar19 = uVar17 + lVar12 + uVar16;
    uVar16 = uVar18 + lVar12 + uVar16;
    uVar18 = uVar16 & uVar10;
    (**(code **)(lVar20 + 0x30))(uVar18,1,lVar8);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar20 + 0x10))(uVar19 & uVar10,uVar16 & uVar10,lVar8);
      (**(code **)(lVar20 + 0x38))(uVar19 & uVar10,0,1,lVar8);
    }
    else {
      _memcpy(uVar19 & uVar10,uVar16 & uVar10,lVar13);
    }
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    param_1 = (long *)(lVar11 + ((ulong)uVar2 + 0x10 & ((ulong)uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040eed80; end: 1040eeeef;  */

void FUN_1040eed80(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar5 = *(long *)(lVar2 + -8);
  lVar7 = param_1;
  (**(code **)(lVar5 + 0x30))(param_1,1,lVar2);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar5 + 8))(param_1,lVar2);
  }
  iVar1 = *(int *)(lVar5 + 0x54);
  lVar7 = *(long *)(lVar5 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar6 = *(long *)(lVar5 + -8);
  uVar9 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + param_1;
  if (iVar1 == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar4 = lVar7 + uVar9 & (uVar9 ^ 0xffffffffffffffff);
  pcVar8 = *(code **)(lVar6 + 8);
  (*pcVar8)(uVar4,lVar5);
  lVar7 = *(long *)(lVar6 + 0x40);
  uVar4 = lVar7 + uVar9 + uVar4 & (uVar9 ^ 0xffffffffffffffff);
  uVar9 = uVar4;
  (**(code **)(lVar6 + 0x30))(uVar4,1,lVar5);
  if ((int)uVar9 == 0) {
    (*pcVar8)(uVar4,lVar5);
  }
  iVar1 = *(int *)(lVar6 + 0x54);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar2 = *(long *)(lVar5 + -8);
  uVar9 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar7 = uVar4 + lVar7;
  if (iVar1 == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar4 = lVar7 + uVar9 & (uVar9 ^ 0xffffffffffffffff);
  (**(code **)(lVar2 + 0x30))(uVar4,1,lVar5);
  if ((int)uVar4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040eeeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(lVar7 + uVar9 & (uVar9 ^ 0xffffffffffffffff),lVar5);
  return;
}



/* Entry: 1040eeef0; end: 1040efffb;  */

long FUN_1040eeef0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar2 + -8);
  lVar6 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,1,lVar2);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar2);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar2);
    iVar8 = *(int *)(lVar5 + 0x54);
    lVar6 = *(long *)(lVar5 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar5 + 0x54);
    lVar6 = *(long *)(lVar5 + 0x40);
    lVar5 = lVar6;
    if (iVar8 == 0) {
      lVar5 = lVar6 + 1;
    }
    _memcpy(param_1,param_2,lVar5);
  }
  if (iVar8 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar10 = *(long *)(lVar5 + -8);
  uVar1 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar7 = lVar6 + uVar1 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar9 = lVar6 + uVar1 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  pcVar11 = *(code **)(lVar10 + 0x10);
  (*pcVar11)(uVar7,uVar9,lVar5);
  lVar6 = *(long *)(lVar10 + 0x40);
  uVar7 = lVar6 + uVar1 + uVar7 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = lVar6 + uVar1 + uVar9 & (uVar1 ^ 0xffffffffffffffff);
  uVar9 = uVar1;
  (**(code **)(lVar10 + 0x30))(uVar1,1,lVar5);
  if ((int)uVar9 == 0) {
    (*pcVar11)(uVar7,uVar1,lVar5);
    (**(code **)(lVar10 + 0x38))(uVar7,0,1,lVar5);
    iVar8 = *(int *)(lVar10 + 0x54);
  }
  else {
    iVar8 = *(int *)(lVar10 + 0x54);
    lVar5 = lVar6;
    if (iVar8 == 0) {
      lVar5 = lVar6 + 1;
    }
    _memcpy(uVar7,uVar1,lVar5);
  }
  if (iVar8 == 0) {
    lVar6 = lVar6 + 1;
  }
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar2 = *(long *)(lVar5 + -8);
  uVar4 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar7 = lVar6 + uVar4 + uVar7;
  uVar1 = lVar6 + uVar4 + uVar1;
  uVar9 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar2 + 0x30))(uVar9,1,lVar5);
  if ((int)uVar9 == 0) {
    (**(code **)(lVar2 + 0x10))
              (uVar7 & (uVar4 ^ 0xffffffffffffffff),uVar1 & (uVar4 ^ 0xffffffffffffffff),lVar5);
    (**(code **)(lVar2 + 0x38))(uVar7 & (uVar4 ^ 0xffffffffffffffff),0,1,lVar5);
  }
  else {
    lVar6 = *(long *)(lVar2 + 0x40);
    if (*(int *)(lVar2 + 0x54) == 0) {
      lVar6 = lVar6 + 1;
    }
    _memcpy(uVar7 & (uVar4 ^ 0xffffffffffffffff),uVar1 & (uVar4 ^ 0xffffffffffffffff),lVar6);
  }
  return param_1;
}



/* Entry: 1040efffc; end: 1040f000f;  */

void FUN_1040efffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f03e4);
  return;
}



/* Entry: 1040f0010; end: 1040f0203;  */

void FUN_1040f0010(undefined8 param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar9 = *(long *)(lVar5 + -8);
  lVar3 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  uVar6 = *(undefined8 *)(lVar3 + 0x18);
  lVar3 = 0;
  FUN_1040f0204(0,lVar5,uVar6);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar4 = (long *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) +
                   -extraout_x8_00);
  plVar1 = (long *)(unaff_x20 + *(int *)(param_2 + 0x24));
  lVar7 = *plVar1;
  bVar2 = *(byte *)(plVar1 + 1);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (0 < lVar7) {
        FUN_1040fb638(0,lVar5,uVar6);
        FUN_1040fbb14();
        *plVar4 = unaff_x20;
        uVar6 = 1;
        goto LAB_1040f01c4;
      }
    }
    else if (0 < lVar7) {
      FUN_104103850(0,lVar5,uVar6);
LAB_1040f0150:
      FUN_104103c94();
      *plVar4 = unaff_x20;
      uVar6 = 2;
      goto LAB_1040f01c4;
    }
  }
  else {
    if (bVar2 != 2) {
      FUN_104103850(0,lVar5,uVar6);
      FUN_104103c94();
      uVar6 = 2;
      *plVar4 = unaff_x20;
      goto LAB_1040f01c4;
    }
    if (0 < lVar7) {
      FUN_104103850(0,lVar5,uVar6);
      goto LAB_1040f0150;
    }
  }
  (**(code **)(lVar9 + 0x10))(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __sSci17makeAsyncIterator0bC0QzyFTj(plVar4,lVar5,uVar6);
  uVar6 = 0;
LAB_1040f01c4:
  _swift_storeEnumTagMultiPayload(plVar4,lVar3,uVar6);
  (**(code **)(lVar8 + 0x20))(param_1,plVar4,lVar3);
  return;
}



/* Entry: 1040f0204; end: 1040f020f;  */

void FUN_1040f0204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f04d0);
  return;
}



/* Entry: 1040f0210; end: 1040f0393;  */

void FUN_1040f0210(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  puVar1 = PTR___sSciTL_11034fea8;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,uVar8,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar4 = 0xff;
  __ss6ResultOMa(0xff,uVar2,uVar3,PTR___ss5ErrorWS_11034ee10);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
  lVar5 = 0;
  __sSqMa(0,uVar4);
  *(long *)(unaff_x22 + 0x40) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar7;
  lVar5 = 0;
  __sSqMa(0,uVar2);
  *(long *)(unaff_x22 + 0x60) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar7;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,uVar8,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x78) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar7;
  lVar5 = 0;
  FUN_1040f0204(0,uVar8,uVar9);
  *(long *)(unaff_x22 + 0x90) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040f0394,0,0);
  return;
}



/* Entry: 1040f0394; end: 1040f04f3;  */

void FUN_1040f0394(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0x18),uVar5);
  _swift_getEnumCaseMultiPayload(uVar1,uVar5);
  puVar3 = *(undefined8 **)(unaff_x22 + 0xa0);
  if ((int)uVar1 != 0) {
    if ((int)uVar1 == 1) {
      plVar6 = (long *)*puVar3;
      *(long **)(unaff_x22 + 0xc0) = plVar6;
      plVar2 = (long *)0x30;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 200) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_1040f062c;
      plVar2[2] = *(long *)(unaff_x22 + 0x58);
      plVar2[3] = (long)plVar6;
      plVar2[4] = *plVar6;
      pcVar4 = FUN_1040f9e70;
    }
    else {
      plVar6 = (long *)*puVar3;
      *(long **)(unaff_x22 + 0xd0) = plVar6;
      plVar2 = (long *)0x30;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xd8) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_1040f07f8;
      plVar2[2] = *(long *)(unaff_x22 + 0x50);
      plVar2[3] = (long)plVar6;
      plVar2[4] = *plVar6;
      pcVar4 = FUN_104102440;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  pcVar4 = *(code **)(*(long *)(unaff_x22 + 0x80) + 0x20);
  *(code **)(unaff_x22 + 0xa8) = pcVar4;
  (*pcVar4)(*(undefined8 *)(unaff_x22 + 0x88),puVar3,uVar7);
  _swift_getAssociatedConformanceWitness
            (uVar1,uVar5,uVar7,PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1040f04f4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),uVar1);
  return;
}



/* Entry: 1040f04f4; end: 1040f054f;  */

void FUN_1040f04f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040f0550;
  }
  else {
    pcVar1 = FUN_1040f09c4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040f0550; end: 1040f062b;  */

void FUN_1040f0550(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  code *pcVar9;
  
  pcVar9 = *(code **)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar5,uVar1);
  (*pcVar9)(uVar5,uVar6,uVar3);
  _swift_storeEnumTagMultiPayload(uVar5,uVar1,0);
  (**(code **)(lVar4 + 0x20))(uVar8,uVar2,uVar7);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001040f0628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040f062c; end: 1040f0673;  */

void FUN_1040f062c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040f0674,0,0);
  return;
}



/* Entry: 1040f0674; end: 1040f07f7;  */

/* WARNING: Removing unreachable block (ram,0x0001040f0744) */

void FUN_1040f0674(void)

{
  bool bVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar4 = *(long *)(unaff_x22 + 0x38);
  lVar8 = *(long *)(lVar4 + -8);
  uVar9 = uVar5;
  (**(code **)(lVar8 + 0x30))(uVar5,1,lVar4);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  bVar1 = (int)uVar9 != 1;
  if (bVar1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    puVar2 = &DAT_10dcd9348;
    _swift_getWitnessTable(&DAT_10dcd9348,lVar4);
    FUN_1041542f8(uVar9,lVar4,puVar2);
    _swift_release(uVar7);
    (**(code **)(lVar8 + 8))(uVar5,lVar4);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar3 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar8 = *(long *)(unaff_x22 + 0x48);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_release(uVar7);
    (**(code **)(lVar8 + 8))(uVar5,uVar6);
    pcVar3 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  (*pcVar3)(uVar9,!bVar1,1,lVar4);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001040f07f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040f07f8; end: 1040f083f;  */

void FUN_1040f07f8(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040f0840,0,0);
  return;
}



/* Entry: 1040f0840; end: 1040f09c3;  */

/* WARNING: Removing unreachable block (ram,0x0001040f0910) */

void FUN_1040f0840(void)

{
  bool bVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x38);
  lVar8 = *(long *)(lVar4 + -8);
  uVar9 = uVar5;
  (**(code **)(lVar8 + 0x30))(uVar5,1,lVar4);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  bVar1 = (int)uVar9 != 1;
  if (bVar1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    puVar2 = &DAT_10dcd9348;
    _swift_getWitnessTable(&DAT_10dcd9348,lVar4);
    FUN_1041542f8(uVar9,lVar4,puVar2);
    _swift_release(uVar7);
    (**(code **)(lVar8 + 8))(uVar5,lVar4);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar3 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar8 = *(long *)(unaff_x22 + 0x48);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_release(uVar7);
    (**(code **)(lVar8 + 8))(uVar5,uVar6);
    pcVar3 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  (*pcVar3)(uVar9,!bVar1,1,lVar4);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001040f09c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040f09c4; end: 1040f0a43;  */

void FUN_1040f09c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001040f0a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040f0a44; end: 1040f0aa3;  */

void FUN_1040f0a44(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x22;
  
  plVar8 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1040f0aa4;
  plVar8[2] = param_1;
  plVar8[3] = unaff_x20;
  lVar10 = *(long *)(param_2 + 0x18);
  plVar8[4] = lVar10;
  lVar9 = *(long *)(param_2 + 0x10);
  plVar8[5] = lVar9;
  puVar1 = PTR___sSciTL_11034fea8;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar10,lVar9,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar8[6] = lVar2;
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0xff;
  __ss6ResultOMa(0xff,lVar2,uVar3,PTR___ss5ErrorWS_11034ee10);
  plVar8[7] = lVar4;
  lVar5 = 0;
  __sSqMa(0,lVar4);
  plVar8[8] = lVar5;
  lVar4 = *(long *)(lVar5 + -8);
  plVar8[9] = lVar4;
  uVar7 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[10] = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xb] = uVar7;
  lVar4 = 0;
  __sSqMa(0,lVar2);
  plVar8[0xc] = lVar4;
  lVar2 = *(long *)(lVar4 + -8);
  plVar8[0xd] = lVar2;
  uVar7 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xe] = uVar7;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,lVar10,lVar9,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar8[0xf] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar8[0x10] = lVar2;
  uVar7 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0x11] = uVar7;
  lVar2 = 0;
  FUN_1040f0204(0,lVar9,lVar10);
  plVar8[0x12] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar8[0x13] = lVar2;
  uVar7 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0x14] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040f0394,0,0);
  return;
}



/* Entry: 1040f0aa4; end: 1040f0adf;  */

void FUN_1040f0aa4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040f0adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040f0ae0; end: 1040f0bb3;  */

void FUN_1040f0ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7FailureSciTl_11034fb60);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040f0bb4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040f0bb4; end: 1040f0c23;  */

void FUN_1040f0bb4(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 0x20) + 0x20))
              (*(undefined8 *)(lVar2 + 0x10),uVar1,*(undefined8 *)(lVar2 + 0x18));
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040f0c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


