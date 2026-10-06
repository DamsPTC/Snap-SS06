/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104147d40; end: 104147dcf;  */

void FUN_104147d40(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = *(long **)(*(long *)(unaff_x22 + 0x18) + 0x10);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x104147d94;
  plVar1[2] = *(long *)(unaff_x22 + 0x10);
  plVar1[3] = (long)plVar2;
  plVar1[4] = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041509a4,0,0);
  return;
}



/* Entry: 104147dd0; end: 104147de7;  */

void FUN_104147dd0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104147de8,0,0);
  return;
}



/* Entry: 104147de8; end: 104147e3b;  */

void FUN_104147de8(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = **(long **)(unaff_x22 + 0x18);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x104148a24;
  plVar1[2] = *(long *)(unaff_x22 + 0x10);
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104147d40,0,0);
  return;
}



/* Entry: 104147e3c; end: 104147e8b;  */

void FUN_104147e3c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104147e8c;
  plVar1[2] = param_1;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104147de8,0,0);
  return;
}



/* Entry: 104147e8c; end: 104147ec7;  */

void FUN_104147e8c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104147ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104147ec8; end: 104147f9f;  */

void FUN_104147ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x10),
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
  plVar3[1] = (long)FUN_104147fa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 104147fa0; end: 10414800f;  */

void FUN_104147fa0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010414800c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104148010; end: 10414801f;  */

void FUN_104148010(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd9008,param_1);
  return;
}



/* Entry: 104148020; end: 1041480af;  */

void FUN_104148020(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar4,uVar2,puVar1,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)();
  return;
}



/* Entry: 1041480b0; end: 1041480b7;  */

void FUN_1041480b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1041480b8; end: 104148163;  */

void FUN_1041480b8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      uVar2 = *(ulong *)(param_1 + 0x20);
      lVar1 = 0x13f;
      _swift_checkMetadataState();
      if (uVar2 < 0x40) {
        lStack_28 = *(long *)(lVar1 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0,3,&lStack_38,param_1 + 0x40);
      }
    }
  }
  return;
}



/* Entry: 104148164; end: 104148297;  */

long * FUN_104148164(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar2 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar11 = *(long *)(lVar2 + -8);
  uVar8 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar9 = *(long *)(lVar7 + 0x40) + uVar8;
  lVar12 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  lVar5 = *(long *)(lVar11 + 0x40) + uVar6;
  uVar4 = *(uint *)(lVar11 + 0x50) | *(uint *)(lVar7 + 0x50) | *(uint *)(lVar12 + 0x50);
  uVar1 = uVar4 & 0xff;
  if ((uVar1 < 8 &&
      (lVar5 + (uVar9 & (uVar8 ^ 0xffffffffffffffff)) & (uVar6 ^ 0xffffffffffffffff)) +
      *(long *)(lVar12 + 0x40) < 0x19) && (uVar4 & 0x100000) == 0) {
    (**(code **)(lVar7 + 0x10))(param_1);
    uVar10 = uVar9 + (long)param_1 & ~uVar8;
    uVar9 = uVar9 + (long)param_2 & ~uVar8;
    (**(code **)(lVar11 + 0x10))(uVar10,uVar9,lVar2);
    (**(code **)(lVar12 + 0x10))(uVar10 + lVar5 & ~uVar6,uVar9 + lVar5 & ~uVar6,lVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + ((ulong)uVar1 + 0x10 & ((ulong)uVar1 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104148298; end: 104148317;  */

void FUN_104148298(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar4 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar2 = *(long *)(lVar3 + 0x40) + param_1 + (ulong)*(byte *)(lVar4 + 0x50) &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 8))(uVar2);
  lVar3 = *(long *)(*(long *)(param_2 + 0x20) + -8);
  uVar1 = (ulong)*(byte *)(lVar3 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000104148314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(uVar2 + *(long *)(lVar4 + 0x40) + uVar1 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 104148318; end: 1041485b7;  */

long FUN_104148318(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar4 = *(long *)(lVar4 + 0x40) + uVar1;
  uVar5 = lVar4 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x10))(uVar5,uVar3);
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar1 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar4 = *(long *)(lVar6 + 0x40) + uVar1;
  (**(code **)(lVar2 + 0x10))
            (lVar4 + uVar5 & (uVar1 ^ 0xffffffffffffffff),
             lVar4 + uVar3 & (uVar1 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 1041485b8; end: 104148767;  */

uint * FUN_1041485b8(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar14 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(uint *)(lVar14 + 0x54);
  lVar12 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar5 = *(uint *)(lVar12 + 0x54);
  uVar10 = uVar5;
  if (uVar5 <= uVar4) {
    uVar10 = uVar4;
  }
  lVar13 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  uVar3 = uVar6;
  if (uVar6 <= uVar10) {
    uVar3 = uVar10;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar1 = *(long *)(lVar14 + 0x40) + uVar8;
  uVar15 = (ulong)*(byte *)(lVar13 + 0x50);
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_1041486a4;
  lVar2 = (*(long *)(lVar12 + 0x40) + uVar15 + (uVar1 & (uVar8 ^ 0xffffffffffffffff)) &
          (uVar15 ^ 0xffffffffffffffff)) + *(long *)(lVar13 + 0x40);
  uVar11 = (uint)lVar2;
  uVar10 = uVar11 << 3;
  if (uVar11 < 4) {
    uVar9 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar10 & 0x1f)) >> (ulong)(uVar10 & 0x1f)) + 1;
    if (0xff < uVar9) {
      if (uVar9 >> 0x10 == 0) {
        uVar9 = (uint)*(ushort *)((long)param_1 + lVar2);
      }
      else {
        uVar9 = *(uint *)((long)param_1 + lVar2);
      }
      goto LAB_10414863c;
    }
    if (1 < uVar9) goto LAB_104148638;
  }
  else {
LAB_104148638:
    uVar9 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_10414863c:
    if (uVar9 != 0) {
      uVar4 = 0;
      if (uVar11 < 4) {
        uVar4 = uVar9 - 1 << (ulong)(uVar10 & 0x1f);
      }
      if (uVar11 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 4;
        if (uVar11 < 4) {
          uVar10 = uVar11;
        }
        if ((int)uVar10 < 3) {
          if (uVar10 == 1) {
            uVar10 = (uint)(byte)*param_1;
          }
          else {
            uVar10 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar10 == 3) {
          uVar10 = (uint)(uint3)*param_1;
        }
        else {
          uVar10 = *param_1;
        }
      }
      return (uint *)(ulong)(uVar3 + (uVar10 | uVar4) + 1);
    }
  }
  if (uVar3 == 0) {
    return (uint *)0x0;
  }
LAB_1041486a4:
  if (uVar4 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001041486bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar14 + 0x30))(param_1,uVar4,*(long *)(param_3 + 0x10));
    return param_1;
  }
  puVar7 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar8);
  if (uVar5 != uVar3) {
    puVar7 = (uint *)((long)puVar7 + uVar15 + *(long *)(lVar12 + 0x40) & ~uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010414870c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x30))(puVar7,uVar6,*(long *)(param_3 + 0x20));
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x0001041486e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x30))();
  return puVar7;
}



/* Entry: 104148768; end: 1041489af;  */

void FUN_104148768(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  byte bVar20;
  
  lVar4 = *(long *)(param_4 + 0x10);
  lVar5 = *(long *)(param_4 + 0x18);
  lVar15 = *(long *)(lVar4 + -8);
  uVar6 = *(uint *)(lVar15 + 0x54);
  lVar13 = *(long *)(lVar5 + -8);
  uVar7 = *(uint *)(lVar13 + 0x54);
  uVar18 = uVar7;
  if (uVar7 <= uVar6) {
    uVar18 = uVar6;
  }
  lVar12 = *(long *)(param_4 + 0x20);
  lVar14 = *(long *)(lVar12 + -8);
  uVar10 = *(uint *)(lVar14 + 0x54);
  uVar3 = uVar10;
  if (uVar10 <= uVar18) {
    uVar3 = uVar18;
  }
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar1 = *(long *)(lVar15 + 0x40) + uVar11;
  lVar17 = *(long *)(lVar13 + 0x40);
  uVar16 = (ulong)*(byte *)(lVar14 + 0x50);
  lVar2 = (lVar17 + uVar16 + (uVar1 & (uVar11 ^ 0xffffffffffffffff)) & (uVar16 ^ 0xffffffffffffffff)
          ) + *(long *)(lVar14 + 0x40);
  uVar18 = (uint)lVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar20 = 0;
  }
  else if (uVar18 < 4) {
    uVar9 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar18 << 3 & 0x1f)) >> (ulong)(uVar18 << 3 & 0x1f)
            ) + 1;
    bVar20 = 2;
    if (0xffff < uVar9) {
      bVar20 = 4;
    }
    if (uVar9 < 0x100) {
      bVar20 = 1 < uVar9;
    }
  }
  else {
    bVar20 = 1;
  }
  uVar9 = (uint)param_2;
  if (uVar3 < uVar9) {
    uVar9 = uVar9 + ~uVar3;
    if (uVar18 < 4) {
      iVar19 = (uVar9 >> (ulong)(uVar18 << 3 & 0x1f)) + 1;
      if (uVar18 != 0) {
        uVar6 = uVar9 & (-1 << (ulong)(uVar18 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar2);
        uVar8 = (undefined2)uVar6;
        if (uVar18 == 3) {
          *(undefined2 *)param_1 = uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar6 >> 0x10);
        }
        else if (uVar18 == 2) {
          *(undefined2 *)param_1 = uVar8;
        }
        else {
          *(char *)param_1 = (char)uVar9;
        }
      }
    }
    else {
      _bzero(param_1,lVar2);
      *param_1 = uVar9;
      iVar19 = 1;
    }
    if (bVar20 < 2) {
      if (bVar20 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar19;
      }
    }
    else if (bVar20 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar19;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar19;
    }
  }
  else {
    if (bVar20 < 2) {
      if (bVar20 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar20 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (uVar9 != 0) {
      if (uVar6 == uVar3) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x38);
        lVar12 = lVar4;
        uVar10 = uVar6;
      }
      else {
        param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar11);
        if (uVar7 == uVar3) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
          lVar12 = lVar5;
          uVar10 = uVar7;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
          param_1 = (uint *)((long)param_1 + uVar16 + lVar17 & ~uVar16);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000104148958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar10,lVar12);
      return;
    }
  }
  return;
}



/* Entry: 1041489b0; end: 1041489d3;  */

void FUN_1041489b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f1cb4);
  return;
}



/* Entry: 1041489d4; end: 104148a17;  */

void FUN_1041489d4(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x80);
  return;
}



/* Entry: 104148a18; end: 104148a27;  */

void FUN_104148a18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f1d8c);
  return;
}



/* Entry: 104148a28; end: 104148aaf;  */

void FUN_104148a28(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar2 = &lStack_50;
  puStack_48 = *(undefined **)(param_1 + 0x18);
  lStack_50 = *(long *)(param_1 + 0x10);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = 0x13f;
  func_0x000104149d84();
  if (plVar2 < (undefined1 *)0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&lStack_50,param_1 + 0x40);
  }
  return;
}



/* Entry: 104148ab0; end: 104149adf;  */

long * FUN_104148ab0(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  
  lVar17 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar13 = *(long *)(lVar17 + -8);
  uVar9 = (ulong)*(uint *)(lVar13 + 0x50) & 0xff;
  uVar6 = *(long *)(lVar8 + 0x40) + uVar9;
  lVar14 = *(long *)(lVar13 + 0x40);
  lVar16 = *(long *)(lVar3 + -8);
  uVar12 = (ulong)*(uint *)(lVar16 + 0x50) & 0xff;
  lVar11 = *(long *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    lVar11 = lVar11 + 1;
  }
  uVar1 = lVar11 + (lVar14 + uVar12 + (uVar6 & (uVar9 ^ 0xffffffffffffffff)) &
                   (uVar12 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  uVar10 = *(uint *)(lVar13 + 0x50) | *(uint *)(lVar8 + 0x50) | *(uint *)(lVar16 + 0x50);
  if ((uVar10 & 0x1000f8) != 0 || 0x18 < (uVar1 & 0xfffffffffffffff8) + 0x10) {
    uVar6 = (ulong)(uVar10 & 0xf8 | 7);
    lVar14 = *(long *)param_2;
    *param_1 = lVar14;
    _swift_retain();
    return (long *)(lVar14 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
  }
  bVar4 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar4;
  if (2 < bVar4) {
    uVar15 = (uint)uVar1;
    uVar2 = 4;
    if (uVar15 < 4) {
      uVar2 = uVar15;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_104148c10;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar2 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar2 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    if (uVar15 < 4) {
      uVar10 = (uVar10 | bVar4 - 3 << (ulong)((uVar15 & 3) << 3)) + 3;
    }
    else {
      uVar10 = uVar10 + 3;
    }
  }
LAB_104148c10:
  if (uVar10 == 2) {
    lVar14 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    _swift_retain();
    _swift_errorRetain(lVar14);
    param_1[1] = lVar14;
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar10 == 1) {
    lVar14 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    param_1[1] = lVar14;
    lVar11 = *(long *)(param_2 + 4);
    param_1[2] = lVar11;
    lVar17 = *(long *)(param_2 + 6);
    param_1[4] = *(long *)(param_2 + 8);
    param_1[3] = lVar17;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
    _swift_retain();
    _swift_retain(lVar14);
    _swift_bridgeObjectRetain(lVar11);
  }
  else if (uVar10 == 0) {
    uVar7 = ~uVar12;
    (**(code **)(lVar8 + 0x10))(param_1,param_2);
    uVar5 = uVar6 + (long)param_1 & ~uVar9;
    uVar6 = (ulong)(uVar6 + (long)param_2) & ~uVar9;
    (**(code **)(lVar13 + 0x10))(uVar5,uVar6,lVar17);
    lVar14 = lVar14 + uVar12;
    uVar5 = uVar5 + lVar14;
    uVar6 = uVar6 + lVar14;
    uVar9 = uVar6 & uVar7;
    (**(code **)(lVar16 + 0x30))(uVar9,1,lVar3);
    if ((int)uVar9 == 0) {
      (**(code **)(lVar16 + 0x10))(uVar5 & uVar7,uVar6 & uVar7,lVar3);
      (**(code **)(lVar16 + 0x38))(uVar5 & uVar7,0,1,lVar3);
    }
    else {
      _memcpy(uVar5 & uVar7,uVar6 & uVar7,lVar11);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar1 + 1);
  }
  *(undefined8 *)((long)param_1 + uVar1 + 8 & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)((long)param_2 + uVar1 + 8) & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 104149ae0; end: 104149c07;  */

int FUN_104149ae0(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  lVar7 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar10 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar11 = lVar11 + 1;
  }
  uVar9 = lVar11 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar9 &
                    (uVar9 ^ 0xffffffffffffffff)) +
                    *(long *)(lVar7 + 0x40) + (ulong)*(byte *)(lVar10 + 0x50) &
                   ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
  if (uVar9 < 0x29) {
    uVar9 = 0x28;
  }
  uVar5 = 0xfc - (1U >> (ulong)(((uint)uVar9 & 3) << 3));
  if (3 < (uint)uVar9) {
    uVar5 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (uVar5 <= param_2 && param_2 - uVar5 != 0) {
    uVar1 = (uVar9 & 0xfffffffffffffff8) + 0x10;
    uVar2 = uVar1 & 0xfffffff8;
    uVar8 = (uint)uVar2;
    uVar12 = 2;
    uVar4 = uVar12;
    if (uVar2 == 0) {
      uVar4 = (param_2 - uVar5) + 1;
    }
    if (0xffff < uVar4) {
      uVar12 = 4;
    }
    if (uVar4 < 0x100) {
      uVar12 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar12;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar12 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_104149bc0;
    }
    else if (uVar3 == 2) {
      uVar12 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_104149bc0:
        uVar12 = uVar12 - 1;
        if (uVar2 != 0) {
          uVar12 = 0;
          uVar8 = *param_1;
        }
        return uVar5 + (uVar8 | uVar12) + 1;
      }
    }
    else {
      uVar12 = *(uint *)((long)param_1 + uVar1);
      if (uVar12 != 0) goto LAB_104149bc0;
    }
  }
  iVar6 = 0x100 - (uint)*(byte *)((long)param_1 + uVar9);
  if (uVar5 <= (*(byte *)((long)param_1 + uVar9) ^ 0xff)) {
    iVar6 = 0;
  }
  return iVar6;
}



/* Entry: 104149c08; end: 104149d77;  */

void FUN_104149c08(int *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar6 = lVar8 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar6 &
                   (uVar6 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar5 + 0x40) + (ulong)*(byte *)(lVar7 + 0x50) &
                  ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
  if (uVar6 < 0x29) {
    uVar6 = 0x28;
  }
  uVar3 = 0xfc - (1U >> (ulong)(((uint)uVar6 & 3) << 3));
  if (3 < (uint)uVar6) {
    uVar3 = 0xfc;
  }
  lVar8 = (uVar6 & 0xfffffffffffffff8) + 0x10;
  uVar9 = 2;
  uVar2 = uVar9;
  if ((int)lVar8 == 0) {
    uVar2 = (param_3 - uVar3) + 1;
  }
  if (0xffff < uVar2) {
    uVar9 = 4;
  }
  if (uVar2 < 0x100) {
    uVar9 = 1;
  }
  uVar1 = 0;
  if (1 < uVar2) {
    uVar1 = uVar9;
  }
  uVar9 = 0;
  if (uVar3 < param_3) {
    uVar9 = uVar1;
  }
  iVar4 = param_2 - uVar3;
  if (param_2 < uVar3 || iVar4 == 0) {
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(undefined1 *)((long)param_1 + lVar8) = 0;
      }
    }
    else if (uVar9 == 2) {
      *(undefined2 *)((long)param_1 + lVar8) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar8) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar6) = -(char)param_2;
    }
  }
  else {
    if ((int)lVar8 != 0) {
      iVar4 = 1;
      _bzero(param_1,lVar8);
      *param_1 = param_2 + ~uVar3;
    }
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(char *)((long)param_1 + lVar8) = (char)iVar4;
      }
    }
    else if (uVar9 == 2) {
      *(short *)((long)param_1 + lVar8) = (short)iVar4;
    }
    else {
      *(int *)((long)param_1 + lVar8) = iVar4;
    }
  }
  return;
}



/* Entry: 104149d78; end: 104149d8f;  */

void FUN_104149d78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e7f1e18);
  return;
}



/* Entry: 104149d90; end: 104149e5b;  */

void FUN_104149d90(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_68 [32];
  undefined1 *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    lVar4 = *(long *)(lVar1 + -8);
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar3 < 0x40) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      lVar2 = 0x13f;
      __sSqMa();
      if (uVar3 < 0x40) {
        _swift_getTupleTypeLayout3
                  (auStack_68,lVar4 + 0x40,*(long *)(lVar1 + -8) + 0x40,*(long *)(lVar2 + -8) + 0x40
                  );
        puStack_40 = &UNK_10dcd9120;
        puStack_38 = &UNK_10dcd9138;
        puStack_48 = auStack_68;
        _swift_initEnumMetadataMultiPayload(param_1,0,3,&puStack_48);
      }
    }
  }
  return;
}



/* Entry: 104149e5c; end: 10414af0b;  */

long * FUN_104149e5c(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar17 = *(long *)(param_3 + 0x18);
  lVar2 = *(long *)(param_3 + 0x20);
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar15 = *(long *)(lVar17 + -8);
  uVar8 = (ulong)*(uint *)(lVar15 + 0x50) & 0xff;
  uVar5 = *(long *)(lVar7 + 0x40) + uVar8;
  lVar16 = *(long *)(lVar15 + 0x40);
  lVar14 = *(long *)(lVar2 + -8);
  uVar12 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  lVar11 = *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar11 = lVar11 + 1;
  }
  uVar1 = lVar11 + (lVar16 + uVar12 + (uVar5 & (uVar8 ^ 0xffffffffffffffff)) &
                   (uVar12 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  uVar9 = *(uint *)(lVar15 + 0x50) | *(uint *)(lVar7 + 0x50) | *(uint *)(lVar14 + 0x50);
  if ((uVar9 & 0x1000f8) != 0 || 0x18 < uVar1 + 1) {
    uVar5 = (ulong)(uVar9 & 0xf8 | 7);
    lVar16 = *(long *)param_2;
    *param_1 = lVar16;
    _swift_retain();
    return (long *)(lVar16 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  }
  bVar3 = *(byte *)((long)param_2 + uVar1);
  uVar9 = (uint)bVar3;
  if (2 < bVar3) {
    uVar13 = (uint)uVar1;
    uVar10 = 4;
    if (uVar13 < 4) {
      uVar10 = uVar13;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_104149fbc;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    uVar9 = uVar10 | bVar3 - 3 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 3;
  }
LAB_104149fbc:
  if (uVar9 == 2) {
    lVar16 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    _swift_retain();
    _swift_errorRetain(lVar16);
    param_1[1] = lVar16;
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar9 == 1) {
    lVar16 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    param_1[1] = lVar16;
    lVar11 = *(long *)(param_2 + 4);
    param_1[2] = lVar11;
    lVar17 = *(long *)(param_2 + 6);
    param_1[4] = *(long *)(param_2 + 8);
    param_1[3] = lVar17;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
    _swift_retain();
    _swift_retain(lVar16);
    _swift_bridgeObjectRetain(lVar11);
  }
  else {
    if (uVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar1 + 1);
      return param_1;
    }
    uVar6 = ~uVar12;
    (**(code **)(lVar7 + 0x10))(param_1);
    uVar4 = uVar5 + (long)param_1 & ~uVar8;
    uVar5 = (ulong)(uVar5 + (long)param_2) & ~uVar8;
    (**(code **)(lVar15 + 0x10))(uVar4,uVar5,lVar17);
    lVar16 = lVar16 + uVar12;
    uVar4 = uVar4 + lVar16;
    uVar5 = uVar5 + lVar16;
    uVar8 = uVar5 & uVar6;
    (**(code **)(lVar14 + 0x30))(uVar8,1,lVar2);
    if ((int)uVar8 == 0) {
      (**(code **)(lVar14 + 0x10))(uVar4 & uVar6,uVar5 & uVar6,lVar2);
      (**(code **)(lVar14 + 0x38))(uVar4 & uVar6,0,1,lVar2);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
    else {
      _memcpy(uVar4 & uVar6,uVar5 & uVar6,lVar11);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
  }
  return param_1;
}



/* Entry: 10414af0c; end: 10414b077;  */

int FUN_10414af0c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar7 = lVar9 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar7 &
                   (uVar7 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar5 + 0x40) + (ulong)*(byte *)(lVar8 + 0x50) &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  if (uVar7 < 0x29) {
    uVar7 = 0x28;
  }
  uVar3 = 0xfc - (1U >> (ulong)(((uint)uVar7 & 3) << 3));
  if (3 < (uint)uVar7) {
    uVar3 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar3) goto LAB_10414b010;
  uVar10 = uVar7 + 1;
  uVar6 = (uint)uVar10;
  uVar2 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar11 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - uVar3 >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar11 < 0x100) {
      if (uVar11 < 2) goto LAB_10414b010;
      goto LAB_10414af9c;
    }
    if (uVar11 >> 0x10 == 0) {
      uVar11 = (uint)*(ushort *)((long)param_1 + uVar10);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + uVar10);
    }
  }
  else {
LAB_10414af9c:
    uVar11 = (uint)*(byte *)((long)param_1 + uVar10);
  }
  if (uVar11 != 0) {
    uVar1 = 0;
    if (uVar6 < 4) {
      uVar1 = uVar11 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar2 = 4;
      if (uVar6 < 4) {
        uVar2 = uVar6;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar10 = (ulong)(byte)*param_1;
        }
        else {
          uVar10 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar10 = (ulong)(uint3)*param_1;
      }
      else {
        uVar10 = (ulong)*param_1;
      }
    }
    return uVar3 + ((uint)uVar10 | uVar1) + 1;
  }
LAB_10414b010:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + uVar7);
  if (uVar3 <= (*(byte *)((long)param_1 + uVar7) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Entry: 10414b078; end: 10414b27b;  */

void FUN_10414b078(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar6 = lVar8 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar6 &
                   (uVar6 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar5 + 0x40) + (ulong)*(byte *)(lVar7 + 0x50) &
                  ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
  if (uVar6 < 0x29) {
    uVar6 = 0x28;
  }
  uVar3 = 0xfc - (1U >> (ulong)(((uint)uVar6 & 3) << 3));
  if (3 < (uint)uVar6) {
    uVar3 = 0xfc;
  }
  lVar8 = uVar6 + 1;
  uVar10 = (uint)lVar8;
  if (uVar3 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar10 << 3 & 0x1f))) - uVar3 >> (ulong)(uVar10 << 3 & 0x1f)
            ) + 1;
    bVar9 = 2;
    if (0xffff < uVar1) {
      bVar9 = 4;
    }
    if (uVar1 < 0x100) {
      bVar9 = 1 < uVar1;
    }
    bVar4 = 1;
    if (uVar10 < 4) {
      bVar4 = bVar9;
    }
  }
  else {
    bVar4 = 0;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar10 < 4) {
      iVar11 = (param_2 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar8);
        uVar2 = (undefined2)uVar3;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar8);
      *param_1 = param_2;
      iVar11 = 1;
    }
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(char *)((long)param_1 + lVar8) = (char)iVar11;
      }
    }
    else if (bVar4 == 2) {
      *(short *)((long)param_1 + lVar8) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + lVar8) = iVar11;
    }
  }
  else {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(undefined1 *)((long)param_1 + lVar8) = 0;
      }
    }
    else if (bVar4 == 2) {
      *(undefined2 *)((long)param_1 + lVar8) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar8) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar6) = -(char)param_2;
    }
  }
  return;
}



/* Entry: 10414b27c; end: 10414b353;  */

uint FUN_10414b27c(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar7 = *(long *)(*(long *)(param_2 + 0x20) + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar6 = lVar8 + ((*(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40) + uVar6 &
                   (uVar6 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar5 + 0x40) + (ulong)*(byte *)(lVar7 + 0x50) &
                  ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
  if (uVar6 < 0x29) {
    uVar6 = 0x28;
  }
  bVar1 = *(byte *)((long)param_1 + uVar6);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar6;
    uVar3 = 4;
    if (uVar4 < 4) {
      uVar3 = uVar4;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) {
        return uVar2;
      }
      uVar3 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_1;
    }
    else {
      uVar3 = *param_1;
    }
    uVar2 = uVar3 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Entry: 10414b354; end: 10414b48b;  */

void FUN_10414b354(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar3 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar4 = (*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar4 &
          (uVar4 ^ 0xffffffffffffffff)) + *(long *)(lVar2 + 0x40) + (ulong)*(byte *)(lVar3 + 0x50) &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  if (param_2 < 3) {
    lVar2 = *(long *)(lVar3 + 0x40);
    if (*(int *)(lVar3 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    uVar4 = lVar2 + uVar4;
    if (uVar4 < 0x29) {
      uVar4 = 0x28;
    }
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    lVar2 = *(long *)(lVar3 + 0x40);
    if (*(int *)(lVar3 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    uVar4 = lVar2 + uVar4;
    if (uVar4 < 0x29) {
      uVar4 = 0x28;
    }
    param_2 = param_2 - 3;
    uVar1 = (uint)uVar4;
    if (uVar1 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar1 << 3 & 0x1f)) + '\x03';
      if (uVar1 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar1 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar4) = 3;
    }
    if (3 < uVar1) {
      uVar1 = 4;
    }
    _bzero(param_1,uVar4);
    if ((int)uVar1 < 3) {
      if (uVar1 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar1 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 10414b48c; end: 10414b623;  */

void FUN_10414b48c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0xff;
  __sSqMa(0xff,param_7);
  lVar4 = 0;
  _swift_getTupleTypeMetadata3(0,param_5,param_6,lVar3,"base1 base2 base3 ",0);
  iVar1 = *(int *)(lVar4 + 0x30);
  iVar2 = *(int *)(lVar4 + 0x40);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1 + iVar1,param_3,param_6);
  lVar4 = *(long *)(lVar3 + -8);
  (**(code **)(lVar4 + 0x10))(param_1 + iVar2,param_4,lVar3);
  uStack_68 = param_10;
  uVar5 = 0;
  lStack_90 = param_5;
  lStack_88 = param_6;
  lStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_9;
  func_0x000104149d84(0,&lStack_90);
  _swift_storeEnumTagMultiPayload(param_1,uVar5,0);
  uVar5 = param_4;
  (**(code **)(*(long *)(param_7 + -8) + 0x30))(param_4,1,param_7);
  (**(code **)(lVar4 + 8))(param_4,lVar3);
  if ((int)uVar5 == 1) {
    uStack_68 = param_10;
    lVar3 = 0;
    lStack_90 = param_5;
    lStack_88 = param_6;
    lStack_80 = param_7;
    uStack_78 = param_8;
    uStack_70 = param_9;
    func_0x000104149d78(0,&lStack_90);
    uVar5 = 2;
  }
  else {
    uStack_68 = param_10;
    lVar3 = 0;
    lStack_90 = param_5;
    lStack_88 = param_6;
    lStack_80 = param_7;
    uStack_78 = param_8;
    uStack_70 = param_9;
    func_0x000104149d78(0,&lStack_90);
    uVar5 = 3;
  }
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x44)) = uVar5;
  return;
}



/* Entry: 10414b624; end: 10414b7db;  */

undefined1  [16] FUN_10414b624(long param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long alStack_80 [8];
  
  lVar10 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  alStack_80[1] = *(undefined8 *)(param_1 + 0x28);
  alStack_80[0] = *(long *)(param_1 + 0x20);
  alStack_80[7] = *(undefined8 *)(param_1 + 0x38);
  alStack_80[6] = *(undefined8 *)(param_1 + 0x30);
  lVar4 = 0;
  alStack_80[2] = lVar10;
  alStack_80[3] = lVar1;
  alStack_80[4] = alStack_80[0];
  alStack_80[5] = alStack_80[1];
  func_0x000104149d84(0,alStack_80 + 2);
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = -extraout_x8;
  puVar9 = (undefined8 *)((long)alStack_80 + lVar7);
  (**(code **)(lVar11 + 0x10))(puVar9);
  puVar5 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 2) {
    if (iVar3 != 0) {
      uVar6 = *puVar9;
      uVar8 = *(undefined8 *)((long)alStack_80 + lVar7 + 0x10);
      lVar10 = *(long *)((long)alStack_80 + lVar7 + 0x20);
      _swift_release(*(undefined8 *)((long)alStack_80 + lVar7 + 8));
      if (lVar10 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10414b7dc);
        (*pcVar2)();
      }
      (**(code **)(lVar11 + 8))();
      _swift_storeEnumTagMultiPayload();
      goto LAB_10414b7c0;
    }
    lVar7 = 0xff;
    __sSqMa(0xff,alStack_80[0]);
    lVar4 = 0;
    _swift_getTupleTypeMetadata3(0,lVar10,lVar1,lVar7,"base1 base2 base3 ",0);
    iVar3 = *(int *)(lVar4 + 0x30);
    (**(code **)(*(long *)(lVar7 + -8) + 8))((long)puVar9 + (long)*(int *)(lVar4 + 0x40),lVar7);
    (**(code **)(*(long *)(lVar1 + -8) + 8))((long)puVar9 + (long)iVar3,lVar1);
    (**(code **)(*(long *)(lVar10 + -8) + 8))(puVar9,lVar10);
  }
  else {
    if (iVar3 != 2) {
      uVar8 = 0;
      uVar6 = 0;
      if (iVar3 != 3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10414b6cc);
        (*pcVar2)();
      }
      goto LAB_10414b7c0;
    }
    pcVar2 = *(code **)(lVar11 + 8);
    (*pcVar2)(puVar9,lVar4);
    (*pcVar2)();
    _swift_storeEnumTagMultiPayload();
  }
  uVar6 = 0;
  uVar8 = 0;
LAB_10414b7c0:
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = uVar6;
  return auVar12;
}



/* Entry: 10414b7dc; end: 10414cbab;  */

void FUN_10414b7dc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long alStack_c0 [5];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  uStack_68 = *(undefined8 *)(param_2 + 0x38);
  alStack_c0[3] = *(undefined8 *)(param_2 + 0x30);
  alStack_c0[2] = *(undefined8 *)(param_2 + 0x28);
  lVar6 = 0;
  alStack_c0[4] = param_1;
  lStack_90 = lVar1;
  lStack_88 = lVar2;
  uStack_80 = uVar11;
  uStack_78 = alStack_c0[2];
  uStack_70 = alStack_c0[3];
  func_0x000104149d84(0,&lStack_90);
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)alStack_c0 + lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar10 - extraout_x12;
  (**(code **)(lVar12 + 0x10))(lVar9);
  lVar8 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,lVar6);
  iVar5 = (int)lVar8;
  if (iVar5 == 0) {
    lVar7 = 0xff;
    __sSqMa(0xff,uVar11);
    lVar8 = 0;
    _swift_getTupleTypeMetadata3(0,lVar1,lVar2,lVar7,"base1 base2 base3 ",0);
    alStack_c0[1] = (long)*(int *)(lVar8 + 0x30);
    iVar5 = *(int *)(lVar8 + 0x40);
    uVar11 = 0;
    _swift_getAssociatedTypeWitness
              (0,alStack_c0[2],lVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    lVar8 = alStack_c0[4];
    _swift_retain(alStack_c0[4]);
    FUN_10417bda0();
    *puVar10 = lVar8;
    *(undefined8 *)((long)alStack_c0 + lVar3 + 8) = uVar11;
    *(undefined8 *)((long)alStack_c0 + lVar3 + 0x18) = 0;
    *(undefined8 *)((long)alStack_c0 + lVar3 + 0x20) = 0;
    *(undefined **)((long)alStack_c0 + lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_storeEnumTagMultiPayload(puVar10,lVar6,1);
    (**(code **)(lVar12 + 0x28))(unaff_x20,puVar10,lVar6);
    (**(code **)(*(long *)(lVar7 + -8) + 8))(lVar9 + iVar5,lVar7);
    (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar9 + alStack_c0[1],lVar2);
    (**(code **)(*(long *)(lVar1 + -8) + 8))(lVar9,lVar1);
    return;
  }
  if (iVar5 - 1U < 2) {
    (**(code **)(lVar12 + 8))(lVar9,lVar6);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10414b9d8);
    (*pcVar4)();
  }
  if (iVar5 == 3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10414b9e4);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10414b9e8);
  (*pcVar4)();
}



/* Entry: 10414cbac; end: 10414cd73;  */

undefined8 FUN_10414cbac(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long extraout_x8;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long alStack_90 [8];
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  alStack_90[1] = *(undefined8 *)(param_2 + 0x28);
  alStack_90[0] = *(long *)(param_2 + 0x20);
  alStack_90[7] = *(undefined8 *)(param_2 + 0x38);
  alStack_90[6] = *(undefined8 *)(param_2 + 0x30);
  lVar7 = 0;
  alStack_90[2] = lVar1;
  alStack_90[3] = lVar3;
  alStack_90[4] = alStack_90[0];
  alStack_90[5] = alStack_90[1];
  func_0x000104149d84(0,alStack_90 + 2);
  lVar13 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = -extraout_x8;
  puVar11 = (undefined8 *)((long)alStack_90 + lVar9);
  (**(code **)(lVar13 + 0x10))(puVar11);
  puVar8 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,lVar7);
  iVar6 = (int)puVar8;
  if (iVar6 == 1) {
    uVar2 = *puVar11;
    uVar4 = *(undefined8 *)((long)alStack_90 + lVar9 + 8);
    uVar10 = *(undefined8 *)((long)alStack_90 + lVar9 + 0x10);
    if (*(long *)((long)alStack_90 + lVar9 + 0x20) == 0) {
      uVar12 = *(undefined8 *)((long)alStack_90 + lVar9 + 0x18);
      (**(code **)(lVar13 + 8))();
      *unaff_x20 = uVar2;
      unaff_x20[1] = uVar4;
      unaff_x20[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
      unaff_x20[3] = uVar12;
      unaff_x20[4] = param_1;
      _swift_storeEnumTagMultiPayload();
      return uVar10;
    }
    _swift_release(uVar2);
    _swift_release(uVar4);
    _swift_bridgeObjectRelease(uVar10);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10414cd74);
    (*pcVar5)();
  }
  if (2 < iVar6) {
    if (iVar6 == 3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10414cd40);
      (*pcVar5)();
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10414cd58);
    (*pcVar5)();
  }
  if (iVar6 == 0) {
    lVar9 = 0xff;
    __sSqMa(0xff,alStack_90[0]);
    lVar7 = 0;
    _swift_getTupleTypeMetadata3(0,lVar1,lVar3,lVar9,"base1 base2 base3 ",0);
    iVar6 = *(int *)(lVar7 + 0x30);
    (**(code **)(*(long *)(lVar9 + -8) + 8))((long)puVar11 + (long)*(int *)(lVar7 + 0x40),lVar9);
    (**(code **)(*(long *)(lVar3 + -8) + 8))((long)puVar11 + (long)iVar6,lVar3);
    (**(code **)(*(long *)(lVar1 + -8) + 8))(puVar11,lVar1);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10414cd34);
    (*pcVar5)();
  }
  (**(code **)(lVar13 + 8))(puVar11,lVar7);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10414cd54);
  (*pcVar5)();
}



/* Entry: 10414cd74; end: 10414cdbb;  */

void FUN_10414cd74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f20f0);
  return;
}



/* Entry: 10414cdbc; end: 10414cdff;  */

undefined8 * FUN_10414cdbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010414cd80(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010414cda4(uVar2,uVar4);
  return param_1;
}



/* Entry: 10414ce00; end: 10414ce37;  */

undefined8 * FUN_10414ce00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010414cda4(uVar1,uVar2);
  return param_1;
}



/* Entry: 10414ce38; end: 10414cf83;  */

int FUN_10414ce38(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffe;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e |
          (uVar1 >> 0x11 & 0x1800 | ((uint)*(undefined8 *)(param_1 + 2) & 7) << 8 |
          (byte)((ulong)*(undefined8 *)param_1 >> 0x38) & 0xf0 | (uint)*(undefined8 *)param_1 & 0xf)
          << 2) ^ 0x7fff;
  if (0x7ffc < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10414cf84; end: 10414cfcf;  */

void FUN_10414cf84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_1 >> 0x3e);
  if ((uVar1 != 0) && (param_1 = param_2, param_2 = param_3, uVar1 != 1)) {
    return;
  }
  _swift_retain(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10414cfd0; end: 10414cfdf;  */

void FUN_10414cfd0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = (uint)((ulong)*param_1 >> 0x3e);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  if ((uVar2 != 0) && (uVar1 = param_1[1], uVar3 = param_1[2], uVar2 != 1)) {
    return;
  }
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 10414cfe0; end: 10414d02b;  */

void FUN_10414cfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_1 >> 0x3e);
  if ((uVar1 != 0) && (param_1 = param_2, param_2 = param_3, uVar1 != 1)) {
    return;
  }
  _swift_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10414d02c; end: 10414d057;  */

undefined8 * FUN_10414d02c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar6 = param_2[2];
  FUN_10414cf84(uVar1,uVar3,uVar6);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  FUN_10414cfe0(uVar2,uVar4,uVar5);
  return param_1;
}



/* Entry: 10414d058; end: 10414d0df;  */

void FUN_10414d058(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_40 [32];
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  if (uVar2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&UNK_10dcd91d8,*(long *)(lVar1 + -8) + 0x40);
    _swift_initEnumMetadataSinglePayload(param_1,0,auStack_40,1);
  }
  return;
}



/* Entry: 10414d0e0; end: 10414d223;  */

ulong * FUN_10414d0e0(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar1 + -8);
  uVar5 = (ulong)*(uint *)(lVar4 + 0x50) & 0xff;
  uVar2 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
  if (((uint)uVar5 < 8 && (*(uint *)(lVar4 + 0x50) & 0x100000) == 0) && uVar2 < 0x19) {
    uVar6 = ~uVar5;
    if (*(int *)(lVar4 + 0x54) < 0) {
      uVar3 = (long)param_2 + uVar5 + 8 & uVar6;
      (**(code **)(lVar4 + 0x30))(uVar3,*(int *)(lVar4 + 0x54),lVar1);
      if ((int)uVar3 != 0) goto LAB_10414d19c;
    }
    else {
      uVar3 = *param_2;
      if (0xfffffffe < uVar3) {
        uVar3 = 0xffffffff;
      }
      if ((int)uVar3 != -1) {
LAB_10414d19c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar2);
        return param_1;
      }
    }
    *param_1 = *param_2;
    (**(code **)(lVar4 + 0x10))
              ((long)param_1 + uVar5 + 8 & uVar6,(long)param_2 + uVar5 + 8 & uVar6,lVar1);
  }
  else {
    uVar2 = *param_2;
    *param_1 = uVar2;
    param_1 = (ulong *)(uVar2 + ((ulong)((uint)uVar5 & 0xf8 ^ 0x1f8) & uVar5 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10414d224; end: 10414d2e7;  */

void FUN_10414d224(ulong *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  if (*(int *)(lVar3 + 0x54) < 0) {
    uVar2 = (long)param_1 + uVar4 + 8 & ~uVar4;
    (**(code **)(lVar3 + 0x30))(uVar2,*(int *)(lVar3 + 0x54),lVar1);
    if ((int)uVar2 == 0) goto LAB_10414d2c0;
  }
  else {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((int)uVar2 == -1) {
LAB_10414d2c0:
                    /* WARNING: Could not recover jumptable at 0x00010414d2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 8))((long)param_1 + uVar4 + 8 & ~uVar4,lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10414d2e8; end: 10414d3eb;  */

ulong * FUN_10414d2e8(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar3 = *(long *)(lVar1 + -8);
  uVar5 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar4 = ~uVar5;
  lVar6 = *(long *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) < 0) {
    uVar2 = (long)param_2 + uVar5 + 8 & uVar4;
    (**(code **)(lVar3 + 0x30))(uVar2,*(int *)(lVar3 + 0x54),lVar1);
    if ((int)uVar2 == 0) goto LAB_10414d3a4;
  }
  else {
    uVar2 = *param_2;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((int)uVar2 == -1) {
LAB_10414d3a4:
      *param_1 = *param_2;
      (**(code **)(lVar3 + 0x10))
                ((long)param_1 + uVar5 + 8 & uVar4,(long)param_2 + uVar5 + 8 & uVar4,lVar1);
      return param_1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)
            (param_1,param_2,(uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + lVar6);
  return param_1;
}



/* Entry: 10414d3ec; end: 10414d587;  */

ulong * FUN_10414d3ec(ulong *param_1,ulong *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar2 + -8);
  iVar1 = *(int *)(lVar7 + 0x54);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = ~uVar8;
  lVar9 = *(long *)(lVar7 + 0x40);
  if (iVar1 < 0) {
    pcVar5 = *(code **)(lVar7 + 0x30);
    uVar4 = (long)param_1 + uVar8 + 8 & uVar6;
    (*pcVar5)(uVar4,iVar1,lVar2);
    uVar3 = (long)param_2 + uVar8 + 8 & uVar6;
    (*pcVar5)(uVar3,iVar1,lVar2);
    iVar1 = (int)uVar3;
    if ((int)uVar4 != 0) goto LAB_10414d4e8;
  }
  else {
    uVar4 = *param_2;
    if (0xfffffffe < uVar4) {
      uVar4 = 0xffffffff;
    }
    iVar1 = (int)uVar4 + 1;
    if (*param_1 < 0xffffffff) {
LAB_10414d4e8:
      if (iVar1 == 0) {
        *param_1 = *param_2;
        pcVar5 = *(code **)(lVar7 + 0x10);
        goto LAB_10414d554;
      }
      goto LAB_10414d4ec;
    }
  }
  if (iVar1 == 0) {
    *param_1 = *param_2;
    pcVar5 = *(code **)(lVar7 + 0x18);
LAB_10414d554:
    (*pcVar5)((long)param_1 + uVar8 + 8 & uVar6,(long)param_2 + uVar8 + 8 & uVar6,lVar2);
    return param_1;
  }
  (**(code **)(lVar7 + 8))((long)param_1 + uVar8 + 8 & uVar6,lVar2);
LAB_10414d4ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)
            (param_1,param_2,(uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + lVar9);
  return param_1;
}



/* Entry: 10414d588; end: 10414d68b;  */

ulong * FUN_10414d588(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar3 = *(long *)(lVar1 + -8);
  uVar5 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar4 = ~uVar5;
  lVar6 = *(long *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) < 0) {
    uVar2 = (long)param_2 + uVar5 + 8 & uVar4;
    (**(code **)(lVar3 + 0x30))(uVar2,*(int *)(lVar3 + 0x54),lVar1);
    if ((int)uVar2 == 0) goto LAB_10414d644;
  }
  else {
    uVar2 = *param_2;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((int)uVar2 == -1) {
LAB_10414d644:
      *param_1 = *param_2;
      (**(code **)(lVar3 + 0x20))
                ((long)param_1 + uVar5 + 8 & uVar4,(long)param_2 + uVar5 + 8 & uVar4,lVar1);
      return param_1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)
            (param_1,param_2,(uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + lVar6);
  return param_1;
}



/* Entry: 10414d68c; end: 10414d827;  */

ulong * FUN_10414d68c(ulong *param_1,ulong *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar2 + -8);
  iVar1 = *(int *)(lVar7 + 0x54);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = ~uVar8;
  lVar9 = *(long *)(lVar7 + 0x40);
  if (iVar1 < 0) {
    pcVar5 = *(code **)(lVar7 + 0x30);
    uVar4 = (long)param_1 + uVar8 + 8 & uVar6;
    (*pcVar5)(uVar4,iVar1,lVar2);
    uVar3 = (long)param_2 + uVar8 + 8 & uVar6;
    (*pcVar5)(uVar3,iVar1,lVar2);
    iVar1 = (int)uVar3;
    if ((int)uVar4 != 0) goto LAB_10414d788;
  }
  else {
    uVar4 = *param_2;
    if (0xfffffffe < uVar4) {
      uVar4 = 0xffffffff;
    }
    iVar1 = (int)uVar4 + 1;
    if (*param_1 < 0xffffffff) {
LAB_10414d788:
      if (iVar1 == 0) {
        *param_1 = *param_2;
        pcVar5 = *(code **)(lVar7 + 0x20);
        goto LAB_10414d7f4;
      }
      goto LAB_10414d78c;
    }
  }
  if (iVar1 == 0) {
    *param_1 = *param_2;
    pcVar5 = *(code **)(lVar7 + 0x28);
LAB_10414d7f4:
    (*pcVar5)((long)param_1 + uVar8 + 8 & uVar6,(long)param_2 + uVar8 + 8 & uVar6,lVar2);
    return param_1;
  }
  (**(code **)(lVar7 + 8))((long)param_1 + uVar8 + 8 & uVar6,lVar2);
LAB_10414d78c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)
            (param_1,param_2,(uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + lVar9);
  return param_1;
}



/* Entry: 10414d828; end: 10414d9a7;  */

int FUN_10414d828(ulong *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
  if (param_2 <= uVar2 - 1) goto LAB_10414d904;
  lVar1 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar10 = (uint)lVar1;
  uVar8 = uVar10 << 3;
  if (uVar10 < 4) {
    uVar11 = (1 << (ulong)(uVar8 & 0x1f)) + (param_2 - uVar2) >> (ulong)(uVar8 & 0x1f);
    if (uVar11 < 0xff) {
      if (uVar11 == 0) goto LAB_10414d904;
      goto LAB_10414d8c4;
    }
    if (uVar11 < 0xffff) {
      uVar11 = (uint)*(ushort *)((long)param_1 + lVar1);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + lVar1);
    }
  }
  else {
LAB_10414d8c4:
    uVar11 = (uint)*(byte *)((long)param_1 + lVar1);
  }
  if (uVar11 != 0) {
    uVar3 = 0;
    if (uVar10 < 4) {
      uVar3 = uVar11 - 1 << (ulong)(uVar8 & 0x1f);
    }
    if (uVar10 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 4;
      if (uVar10 < 4) {
        uVar8 = uVar10;
      }
      if ((int)uVar8 < 3) {
        if (uVar8 == 1) {
          uVar8 = (uint)(byte)*param_1;
        }
        else {
          uVar8 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar8 == 3) {
        uVar8 = (uint)(uint3)*param_1;
      }
      else {
        uVar8 = (uint)*param_1;
      }
    }
    return (uVar8 | uVar3) + uVar2;
  }
LAB_10414d904:
  if ((int)uVar3 < 0) {
    uVar9 = (ulong)((long)param_1 + uVar9 + 8) & ~uVar9;
    (**(code **)(lVar7 + 0x30))(uVar9,uVar3,lVar6);
    iVar4 = (int)uVar9;
  }
  else {
    uVar9 = *param_1;
    if (0xfffffffe < uVar9) {
      uVar9 = 0xffffffff;
    }
    iVar4 = (int)uVar9 + 1;
  }
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = iVar4 + -1;
  }
  return iVar5;
}



/* Entry: 10414d9a8; end: 10414dbc3;  */

void FUN_10414d9a8(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar8 = *(long *)(lVar7 + -8);
  uVar3 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar1 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40);
  uVar11 = (uint)lVar1;
  if (uVar2 - 1 < param_3) {
    uVar4 = (1 << (ulong)(uVar11 << 3 & 0x1f)) + (param_3 - uVar2) >> (ulong)(uVar11 << 3 & 0x1f);
    bVar10 = 2;
    if (0xfffe < uVar4) {
      bVar10 = 4;
    }
    if (uVar4 < 0xff) {
      bVar10 = uVar4 != 0;
    }
    bVar6 = 1;
    if (uVar11 < 4) {
      bVar6 = bVar10;
    }
  }
  else {
    bVar6 = 0;
  }
  if (uVar2 - 1 < param_2) {
    param_2 = param_2 - uVar2;
    if (uVar11 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
      if (uVar11 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar11 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1,uVar3,lVar7);
        uVar5 = (undefined2)uVar2;
        if (uVar11 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar11 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar1,uVar3,lVar7);
      *(uint *)param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar12;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar12;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010414db5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))((ulong)((long)param_1 + uVar9 + 8) & ~uVar9);
        return;
      }
      if ((int)(param_2 + 1) < 0) {
        *param_1 = (ulong)(param_2 + 0x80000001);
      }
      else {
        *param_1 = (ulong)param_2;
      }
    }
  }
  return;
}



/* Entry: 10414dbc4; end: 10414dc47;  */

ulong FUN_10414dbc4(ulong *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar2 = *(long *)(lVar1 + -8);
  if (-1 < *(int *)(lVar2 + 0x54)) {
    uVar3 = *param_1;
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  uVar3 = (long)param_1 + (ulong)*(byte *)(lVar2 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010414dc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x30))(uVar3,*(int *)(lVar2 + 0x54),lVar1);
  return uVar3;
}



/* Entry: 10414dc48; end: 10414dc4b;  */

void FUN_10414dc48(void)

{
  return;
}



/* Entry: 10414dc4c; end: 10414dd7f;  */

void FUN_10414dc4c(ulong *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  bVar3 = *(byte *)(lVar5 + 0x50);
  uVar7 = ~(ulong)bVar3;
  uVar8 = (uint)param_2;
  if (uVar1 < uVar8) {
    uVar2 = (bVar3 + 8 & (uint)uVar7) + *(int *)(lVar5 + 0x40);
    uVar6 = 0xffffffff;
    if (uVar2 < 4) {
      uVar6 = ~(-1 << (ulong)(uVar2 * 8 & 0x1f));
    }
    if (uVar2 != 0) {
      uVar6 = uVar6 & (uVar1 - uVar8 ^ 0xffffffff);
      uVar1 = 4;
      if (uVar2 < 4) {
        uVar1 = uVar2;
      }
      _bzero(param_1);
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          *(char *)param_1 = (char)uVar6;
        }
        else {
          *(short *)param_1 = (short)uVar6;
        }
      }
      else if (uVar1 == 3) {
        *(short *)param_1 = (short)uVar6;
        *(char *)((long)param_1 + 2) = (char)(uVar6 >> 0x10);
      }
      else {
        *(uint *)param_1 = uVar6;
      }
    }
  }
  else if (uVar8 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010414dd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x38))((long)param_1 + (ulong)bVar3 + 8 & uVar7,param_2,uVar2,lVar4);
      return;
    }
    if ((int)uVar8 < 0) {
      uVar8 = uVar8 & 0x7fffffff;
    }
    else {
      uVar8 = uVar8 - 1;
    }
    *param_1 = (ulong)uVar8;
  }
  return;
}



/* Entry: 10414dd80; end: 10414dd8b;  */

void FUN_10414dd80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f2018);
  return;
}



/* Entry: 10414dd8c; end: 10414de0f;  */

long FUN_10414dd8c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10414de10; end: 10414de1f;  */

void FUN_10414de10(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = (uint)(uVar1 >> 0x3e);
  if (uVar4 == 1) {
    _swift_errorRelease(uVar2);
    _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
    return;
  }
  if (uVar4 == 0) {
    _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  return;
}



/* Entry: 10414de20; end: 10414de87;  */

void FUN_10414de20(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    _swift_errorRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3 & 0x3fffffffffffffff);
    return;
  }
  if (uVar1 == 0) {
    _swift_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 10414de88; end: 10414df3b;  */

undefined8 * FUN_10414de88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  func_0x00010414ddb8(uVar1,uVar3,uVar2,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  return param_1;
}



/* Entry: 10414df3c; end: 10414df77;  */

undefined8 * FUN_10414df3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  FUN_10414de20(uVar3,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 10414df78; end: 10414e0e7;  */

int FUN_10414df78(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffd < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x3ffe;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e |
          (uVar1 >> 0x12 & 0xc00 | ((uint)*(undefined8 *)(param_1 + 4) & 7) << 7 |
          (uint)((ulong)*(undefined8 *)param_1 >> 0x39) & 0x78 | (uint)*(undefined8 *)param_1 & 7)
          << 2) ^ 0x3fff;
  if (0x3ffc < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10414e0e8; end: 10414e20f;  */

void FUN_10414e0e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_68 [32];
  undefined1 *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar5 < 0x40) {
    lVar6 = *(long *)(lVar1 + -8);
    uVar5 = *(ulong *)(param_1 + 0x18);
    lVar2 = 0x13f;
    _swift_checkMetadataState();
    if (uVar5 < 0x40) {
      uVar5 = *(ulong *)(param_1 + 0x20);
      lVar3 = 0x13f;
      __sSqMa();
      if (uVar5 < 0x40) {
        _swift_getTupleTypeLayout3
                  (auStack_68,lVar6 + 0x40,*(long *)(lVar2 + -8) + 0x40,*(long *)(lVar3 + -8) + 0x40
                  );
        uVar5 = 0xff;
        puStack_48 = auStack_68;
        _swift_getAssociatedTypeWitness
                  (0xff,*(undefined8 *)(param_1 + 0x28),lVar1,PTR___sSciTL_11034fea8,
                   PTR___s7ElementSciTl_11034fb58);
        uVar4 = 0x112d393f0;
        func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
        lVar1 = 0x13f;
        __ss6ResultOMa(0x13f,uVar5,uVar4,PTR___ss5ErrorWS_11034ee10);
        if (uVar5 < 0x40) {
          lStack_40 = *(long *)(lVar1 + -8) + 0x40;
          puStack_38 = &UNK_10dcd9238;
          _swift_initEnumMetadataMultiPayload(param_1,0,3,&puStack_48);
        }
      }
    }
  }
  return;
}



/* Entry: 10414e210; end: 10414f94f;  */

long * FUN_10414e210(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar18 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(lVar4 + -8);
  uVar5 = *(uint *)(lVar10 + 0x50);
  uVar16 = (ulong)uVar5 & 0xff;
  uVar9 = *(long *)(lVar18 + 0x40) + uVar16;
  lVar13 = *(long *)(lVar10 + 0x40);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar3 + -8);
  uVar12 = *(uint *)(lVar20 + 0x50);
  uVar17 = (ulong)uVar12 & 0xff;
  lVar14 = *(long *)(lVar20 + 0x40);
  if (*(int *)(lVar20 + 0x54) == 0) {
    lVar14 = lVar14 + 1;
  }
  uVar1 = lVar14 + (lVar13 + uVar17 + (uVar9 & (uVar16 ^ 0xffffffffffffffff)) &
                   (uVar17 ^ 0xffffffffffffffff));
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar2,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar8 = *(long *)(lVar7 + -8);
  uVar11 = *(ulong *)(lVar8 + 0x40);
  if (uVar11 < 9) {
    uVar11 = 8;
  }
  if (uVar1 < uVar11 + 1) {
    uVar1 = uVar11 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  uVar12 = *(uint *)(lVar18 + 0x50) | uVar5 | uVar12 | *(uint *)(lVar8 + 0x50);
  if (0x18 < uVar1 + 1 || (uVar12 & 0x1000f8) != 0) {
    uVar9 = (ulong)(uVar12 & 0xf8 | 7);
    lVar13 = *(long *)param_2;
    *param_1 = lVar13;
    _swift_retain();
    return (long *)(lVar13 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  bVar6 = *(byte *)((long)param_2 + uVar1);
  uVar12 = (uint)bVar6;
  if (2 < bVar6) {
    uVar15 = (uint)uVar1;
    uVar5 = 4;
    if (uVar15 < 4) {
      uVar5 = uVar15;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto joined_r0x00010414e3c8;
      uVar12 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar12 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar12 = (uint)(uint3)*param_2;
    }
    else {
      uVar12 = *param_2;
    }
    if (uVar15 < 4) {
      uVar12 = (uVar12 | bVar6 - 3 << (ulong)((uVar15 & 3) << 3)) + 3;
    }
    else {
      uVar12 = uVar12 + 3;
    }
  }
joined_r0x00010414e3c8:
  if (uVar12 == 2) {
    lVar13 = *(long *)param_2;
    _swift_errorRetain(lVar13);
    *param_1 = lVar13;
    *(undefined1 *)((long)param_1 + uVar1) = 2;
    return param_1;
  }
  if (uVar12 != 1) {
    if (uVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2);
      return param_1;
    }
    uVar19 = ~uVar17;
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar2);
    uVar11 = uVar9 + (long)param_1 & ~uVar16;
    uVar9 = (ulong)(uVar9 + (long)param_2) & ~uVar16;
    (**(code **)(lVar10 + 0x10))(uVar11,uVar9,lVar4);
    lVar13 = lVar13 + uVar17;
    uVar11 = uVar11 + lVar13;
    uVar9 = uVar9 + lVar13;
    uVar16 = uVar9 & uVar19;
    (**(code **)(lVar20 + 0x30))(uVar16,1,lVar3);
    if ((int)uVar16 != 0) {
      _memcpy(uVar11 & uVar19,uVar9 & uVar19,lVar14);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    (**(code **)(lVar20 + 0x10))(uVar11 & uVar19,uVar9 & uVar19,lVar3);
    (**(code **)(lVar20 + 0x38))(uVar11 & uVar19,0,1,lVar3);
    *(undefined1 *)((long)param_1 + uVar1) = 0;
    return param_1;
  }
  bVar6 = *(byte *)((long)param_2 + uVar11);
  uVar12 = (uint)bVar6;
  if (1 < bVar6) {
    uVar15 = (uint)uVar11;
    uVar5 = 4;
    if (uVar15 < 4) {
      uVar5 = uVar15;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10414e588;
      uVar12 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar12 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar12 = (uint)(uint3)*param_2;
    }
    else {
      uVar12 = *param_2;
    }
    if (uVar15 < 4) {
      uVar12 = (uVar12 | bVar6 - 2 << (ulong)((uVar15 & 3) << 3)) + 2;
    }
    else {
      uVar12 = uVar12 + 2;
    }
  }
LAB_10414e588:
  if (uVar12 != 1) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar7);
  }
  else {
    lVar13 = *(long *)param_2;
    _swift_errorRetain(lVar13);
    *param_1 = lVar13;
  }
  *(bool *)((long)param_1 + uVar11) = uVar12 == 1;
  *(undefined1 *)((long)param_1 + uVar1) = 1;
  return param_1;
}



/* Entry: 10414f950; end: 10414fb17;  */

int FUN_10414f950(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar8 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar9 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar10 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar10 = lVar10 + 1;
  }
  uVar8 = lVar10 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar8 &
                    (uVar8 ^ 0xffffffffffffffff)) +
                    *(long *)(lVar6 + 0x40) + (ulong)*(byte *)(lVar9 + 0x50) &
                   ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  uVar5 = *(ulong *)(*(long *)(lVar10 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar8 < uVar5 + 1) {
    uVar8 = uVar5 + 1;
  }
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  uVar3 = 0xfc - (1U >> (ulong)(((uint)uVar8 & 3) << 3));
  if (3 < (uint)uVar8) {
    uVar3 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar3) goto LAB_10414faa4;
  uVar5 = uVar8 + 1;
  uVar7 = (uint)uVar5;
  uVar2 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar11 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - uVar3 >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar11 < 0x100) {
      if (uVar11 < 2) goto LAB_10414faa4;
      goto LAB_10414fa30;
    }
    if (uVar11 >> 0x10 == 0) {
      uVar11 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_10414fa30:
    uVar11 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar11 != 0) {
    uVar1 = 0;
    if (uVar7 < 4) {
      uVar1 = uVar11 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar2 = 4;
      if (uVar7 < 4) {
        uVar2 = uVar7;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return uVar3 + ((uint)uVar5 | uVar1) + 1;
  }
LAB_10414faa4:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + uVar8);
  if (uVar3 <= (*(byte *)((long)param_1 + uVar8) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Entry: 10414fb18; end: 10414fd57;  */

void FUN_10414fb18(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar8 = *(long *)(*(long *)(param_4 + 0x20) + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar7 = lVar9 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar7 &
                   (uVar7 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar5 + 0x40) + (ulong)*(byte *)(lVar8 + 0x50) &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(long *)(param_4 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  uVar6 = *(ulong *)(*(long *)(lVar9 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (uVar7 < uVar6 + 1) {
    uVar7 = uVar6 + 1;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  uVar3 = 0xfc - (1U >> (ulong)(((uint)uVar7 & 3) << 3));
  if (3 < (uint)uVar7) {
    uVar3 = 0xfc;
  }
  lVar9 = uVar7 + 1;
  uVar12 = (uint)lVar9;
  if (uVar3 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar12 << 3 & 0x1f))) - uVar3 >> (ulong)(uVar12 << 3 & 0x1f)
            ) + 1;
    bVar10 = 2;
    if (0xffff < uVar1) {
      bVar10 = 4;
    }
    if (uVar1 < 0x100) {
      bVar10 = 1 < uVar1;
    }
    bVar4 = 1;
    if (uVar12 < 4) {
      bVar4 = bVar10;
    }
  }
  else {
    bVar4 = 0;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar12 < 4) {
      iVar11 = (param_2 >> (ulong)(uVar12 << 3 & 0x1f)) + 1;
      if (uVar12 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar12 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar9);
        uVar2 = (undefined2)uVar3;
        if (uVar12 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar12 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar9);
      *param_1 = param_2;
      iVar11 = 1;
    }
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(char *)((long)param_1 + lVar9) = (char)iVar11;
      }
    }
    else if (bVar4 == 2) {
      *(short *)((long)param_1 + lVar9) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + lVar9) = iVar11;
    }
  }
  else {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(undefined1 *)((long)param_1 + lVar9) = 0;
      }
    }
    else if (bVar4 == 2) {
      *(undefined2 *)((long)param_1 + lVar9) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar9) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar7) = -(char)param_2;
    }
  }
  return;
}



/* Entry: 10414fd58; end: 10414fe73;  */

uint FUN_10414fd58(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar7 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar7 = lVar9 + ((*(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40) + uVar7 &
                   (uVar7 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar4 + 0x40) + (ulong)*(byte *)(lVar8 + 0x50) &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(long *)(param_2 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  uVar5 = *(ulong *)(*(long *)(lVar9 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar7 < uVar5 + 1) {
    uVar7 = uVar5 + 1;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar7);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar3 = (uint)uVar7;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) {
        return uVar2;
      }
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar2 = uVar6 | bVar1 - 3 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Entry: 10414fe74; end: 10414fe77;  */

void FUN_10414fe74(void)

{
  return;
}



/* Entry: 10414fe78; end: 10415005f;  */

void FUN_10414fe78(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2 < 3) {
    lVar7 = *(long *)(param_3 + 0x10);
    lVar1 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),lVar7,PTR___sSciTL_11034fea8,
               PTR___s7ElementSciTl_11034fb58);
    uVar3 = *(ulong *)(*(long *)(lVar1 + -8) + 0x40);
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
    uVar6 = (ulong)*(byte *)(lVar4 + 0x50);
    lVar5 = *(long *)(*(long *)(param_3 + 0x20) + -8);
    lVar1 = *(long *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      lVar1 = lVar1 + 1;
    }
    uVar6 = lVar1 + ((*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar6 & (uVar6 ^ 0xffffffffffffffff)
                     ) + *(long *)(lVar4 + 0x40) + (ulong)*(byte *)(lVar5 + 0x50) &
                    ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff));
    if (uVar6 < uVar3 + 1) {
      uVar6 = uVar3 + 1;
    }
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(char *)((long)param_1 + uVar6) = (char)param_2;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_3 + 0x18) + -8);
    uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
    lVar4 = *(long *)(*(long *)(param_3 + 0x20) + -8);
    lVar1 = *(long *)(lVar4 + 0x40);
    if (*(int *)(lVar4 + 0x54) == 0) {
      lVar1 = lVar1 + 1;
    }
    uVar3 = lVar1 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar3 &
                     (uVar3 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar7 + 0x40) + (ulong)*(byte *)(lVar4 + 0x50) &
                    ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff));
    lVar1 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),PTR___sSciTL_11034fea8,
               PTR___s7ElementSciTl_11034fb58);
    uVar6 = *(ulong *)(*(long *)(lVar1 + -8) + 0x40);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    if (uVar3 < uVar6 + 1) {
      uVar3 = uVar6 + 1;
    }
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    param_2 = param_2 - 3;
    uVar2 = (uint)uVar3;
    if (uVar2 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar2 << 3 & 0x1f)) + '\x03';
      if (uVar2 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar2 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 3;
    }
    if (3 < uVar2) {
      uVar2 = 4;
    }
    _bzero(param_1);
    if ((int)uVar2 < 3) {
      if (uVar2 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar2 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 104150060; end: 1041500af;  */

void FUN_104150060(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1 >> 0x3e);
  uVar1 = param_2;
  if (uVar2 != 0) {
    if (uVar2 != 1) {
      return;
    }
    uVar1 = param_1 & 0x3fffffffffffffff;
    param_3 = param_2;
  }
  _swift_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1041500b0; end: 1041500bf;  */

void FUN_1041500b0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = param_1[2];
  uVar3 = (uint)(*param_1 >> 0x3e);
  uVar1 = param_1[1];
  if (uVar3 != 0) {
    if (uVar3 != 1) {
      return;
    }
    uVar1 = *param_1 & 0x3fffffffffffffff;
    uVar2 = param_1[1];
  }
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1041500c0; end: 10415010f;  */

void FUN_1041500c0(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1 >> 0x3e);
  uVar1 = param_2;
  if (uVar2 != 0) {
    if (uVar2 != 1) {
      return;
    }
    uVar1 = param_1 & 0x3fffffffffffffff;
    param_3 = param_2;
  }
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 104150110; end: 104150157;  */

undefined8 * FUN_104150110(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  (*param_4)(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 104150158; end: 10415016b;  */

undefined8 * FUN_104150158(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar6 = param_2[2];
  FUN_104150060(uVar1,uVar3,uVar6);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  FUN_1041500c0(uVar2,uVar4,uVar5);
  return param_1;
}



/* Entry: 10415016c; end: 1041501cb;  */

undefined8 *
FUN_10415016c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar6 = param_2[2];
  (*param_4)(uVar1,uVar3,uVar6);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  (*param_5)(uVar2,uVar4,uVar5);
  return param_1;
}



/* Entry: 1041501cc; end: 1041501d7;  */

undefined8 * FUN_1041501cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  FUN_1041500c0(uVar3,uVar1,uVar2);
  return param_1;
}



/* Entry: 1041501d8; end: 104150217;  */

undefined8 * FUN_1041501d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  (*param_4)(uVar3,uVar1,uVar2);
  return param_1;
}



/* Entry: 104150218; end: 104150307;  */

int FUN_104150218(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104150308; end: 10415039b;  */

void FUN_104150308(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    _swift_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
    return;
  }
  return;
}



/* Entry: 10415039c; end: 104150453;  */

ulong * FUN_10415039c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      uVar1 = param_2[1];
      param_1[1] = uVar1;
      _swift_retain();
      _swift_bridgeObjectRetain(uVar1);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      _swift_retain();
      _swift_release(uVar2);
      uVar1 = param_1[1];
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    _swift_release(uVar2);
    _swift_bridgeObjectRelease(param_1[1]);
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 104150454; end: 1041504df;  */

ulong * FUN_104150454(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffff) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else if (*param_2 < 0xffffffff) {
    _swift_release(uVar1);
    _swift_bridgeObjectRelease(param_1[1]);
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else {
    *param_1 = *param_2;
    _swift_release(uVar1);
    uVar1 = param_1[1];
    param_1[1] = param_2[1];
    _swift_bridgeObjectRelease(uVar1);
  }
  return param_1;
}



/* Entry: 1041504e0; end: 104150643;  */

int FUN_1041504e0(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 104150644; end: 1041506d3;  */

void FUN_104150644(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar2 = &uStack_60;
  puStack_30 = PTR___sBpWV_11034d680 + 0x40;
  uStack_58 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = *(undefined8 *)(param_1 + 0x78);
  uStack_40 = *(undefined8 *)(param_1 + 0x70);
  lVar1 = 0x13f;
  FUN_104149d78();
  if (puVar2 < (undefined1 *)0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&puStack_30,param_1 + 0x80);
  }
  return;
}



/* Entry: 1041506d4; end: 10415073b;  */

void FUN_1041506d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  if (param_2 == 0) {
    param_2 = 0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    __sScA15unownedExecutorScevgTj();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10415073c,param_2,param_3);
  return;
}



/* Entry: 10415073c; end: 1041507c3;  */

void FUN_10415073c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  pcVar2 = *(code **)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1041507c4;
  lVar3 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar3,1);
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x00010416c9ac(lVar3,uVar1,uVar4,PTR___ss5ErrorWS_11034ee10);
  (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1041507c4; end: 10415080f;  */

void FUN_1041507c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    _swift_willThrow();
  }
                    /* WARNING: Could not recover jumptable at 0x00010415080c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104150810; end: 104150983;  */

void FUN_104150810(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar8 = *unaff_x20;
  lStack_98 = *(long *)(lVar8 + 0x58);
  lStack_a0 = *(long *)(lVar8 + 0x50);
  uStack_88 = *(undefined8 *)(lVar8 + 0x68);
  uStack_90 = *(undefined8 *)(lVar8 + 0x60);
  uStack_78 = *(undefined8 *)(lVar8 + 0x78);
  uStack_80 = *(undefined8 *)(lVar8 + 0x70);
  func_0x0001041505c0(0,&lStack_a0);
  FUN_104146b1c(&lStack_a0,FUN_104150bd0);
  lVar2 = lStack_98;
  lVar8 = lStack_a0;
  if (lStack_a0 != 0) {
    lVar11 = *(long *)(lStack_98 + 0x10);
    if (lVar11 == 0) {
      _swift_retain(lStack_a0);
    }
    else {
      puVar9 = (undefined8 *)(lStack_98 + 0x20);
      uVar3 = 0;
      __sScEMa();
      uVar4 = uVar3;
      func_0x000100f5abbc();
      _swift_retain(lVar8);
      puVar1 = PTR___ss5ErrorWS_11034ee10;
      do {
        uVar10 = *puVar9;
        uVar5 = uVar3;
        uVar6 = uVar4;
        _swift_allocError(uVar3,uVar4,0,0);
        __sS2cEycfC(uVar6);
        uVar6 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar7 = (undefined8 *)puVar1;
        _swift_allocError();
        *puVar7 = uVar5;
        _swift_continuation_throwingResumeWithError(uVar10,uVar6);
        lVar11 = lVar11 + -1;
        puVar9 = puVar9 + 1;
      } while (lVar11 != 0);
    }
    __sScT6cancelyyF(lVar8,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    FUN_104150be8(lVar8,lVar2);
    _swift_release(lVar8);
  }
  return;
}



/* Entry: 104150984; end: 1041509a3;  */

void FUN_104150984(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041509a4,0,0);
  return;
}



/* Entry: 1041509a4; end: 104150a57;  */

void FUN_1041509a4(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x20);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar4 + 0x68),*(undefined8 *)(lVar4 + 0x50),PTR___sSciTL_11034fea8
             ,PTR___s7ElementSciTl_11034fb58);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104150a58;
                    /* WARNING: Could not recover jumptable at 0x000104150a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10396896c)
            (*(undefined8 *)(unaff_x22 + 0x10),&UNK_10dcd9300,*(undefined8 *)(unaff_x22 + 0x18),
             FUN_104151c74,*(undefined8 *)(unaff_x22 + 0x18),0,0,uVar3);
  return;
}



/* Entry: 104150a58; end: 104150a93;  */

void FUN_104150a58(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000104150a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104150a94; end: 104150b0b;  */

void FUN_104150a94(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *unaff_x20;
  _swift_slowDealloc(unaff_x20[2],0xffffffffffffffff,0xffffffffffffffff);
  lVar2 = *(long *)(*unaff_x20 + 0x88);
  uStack_58 = *(undefined8 *)(lVar1 + 0x58);
  uStack_60 = *(undefined8 *)(lVar1 + 0x50);
  uStack_48 = *(undefined8 *)(lVar1 + 0x68);
  uStack_50 = *(undefined8 *)(lVar1 + 0x60);
  uStack_38 = *(undefined8 *)(lVar1 + 0x78);
  uStack_40 = *(undefined8 *)(lVar1 + 0x70);
  lVar1 = 0;
  FUN_104149d78(0,&uStack_60);
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  return;
}



/* Entry: 104150b0c; end: 104150b2f;  */

void FUN_104150b0c(void)

{
  FUN_104150a94();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104150b30; end: 104150b3b;  */

void FUN_104150b30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e7f2234);
  return;
}



/* Entry: 104150b3c; end: 104150bcf;  */

void FUN_104150b3c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar2 = &uStack_90;
  lVar3 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar3 + 0x88),auStack_58,0x21,0);
  uStack_88 = *(undefined8 *)(lVar3 + 0x58);
  uStack_90 = *(undefined8 *)(lVar3 + 0x50);
  uStack_78 = *(undefined8 *)(lVar3 + 0x68);
  uStack_80 = *(undefined8 *)(lVar3 + 0x60);
  uStack_68 = *(undefined8 *)(lVar3 + 0x78);
  uStack_70 = *(undefined8 *)(lVar3 + 0x70);
  uVar1 = 0;
  FUN_104149d78();
  FUN_10414b624();
  _swift_endAccess(auStack_58);
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Entry: 104150bd0; end: 104150be7;  */

void FUN_104150bd0(void)

{
  FUN_104150b3c();
  return;
}



/* Entry: 104150be8; end: 104150c13;  */

void FUN_104150be8(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 104150c14; end: 104150daf;  */

void FUN_104150c14(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(long **)(unaff_x22 + 0xa8) = param_2;
  lVar9 = *param_2;
  uVar7 = *(undefined8 *)(lVar9 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
  lVar6 = *(long *)(lVar9 + 0x50);
  *(long *)(unaff_x22 + 0xb8) = lVar6;
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,lVar6,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  uVar5 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  __ss6ResultOMa(0,uVar1,uVar5,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 200) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar3;
  uVar8 = *(undefined8 *)(lVar9 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar8;
  lVar2 = 0;
  __sSqMa(0,uVar8);
  *(long *)(unaff_x22 + 0xe8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar3;
  lVar10 = *(long *)(lVar9 + 0x58);
  *(long *)(unaff_x22 + 0x100) = lVar10;
  lVar2 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x108) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar3;
  lVar2 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar3;
  uVar5 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar5;
  uVar1 = *(undefined8 *)(lVar9 + 0x78);
  *(long *)(unaff_x22 + 0x10) = lVar6;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar1;
  *(long *)(unaff_x22 + 0x18) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  lVar2 = 0;
  FUN_10414cd74();
  *(long *)(unaff_x22 + 0x138) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x140) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104150db0,0,0);
  return;
}



/* Entry: 104150db0; end: 1041511ff;  */

/* WARNING: Removing unreachable block (ram,0x0001041506f4) */

void FUN_104150db0(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x138);
  lVar11 = *(long *)(unaff_x22 + 0x140);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
  plVar15 = *(long **)(unaff_x22 + 0xa8);
  lVar4 = plVar15[2];
  uVar19 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x128);
  _os_unfair_lock_lock();
  lVar8 = *(long *)(*plVar15 + 0x88);
  _swift_beginAccess((long)plVar15 + lVar8,unaff_x22 + 0x70,0x21,0);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar18;
  FUN_104149d78(0);
  func_0x00010414c610(uVar12);
  _swift_endAccess(unaff_x22 + 0x70);
  (**(code **)(lVar11 + 0x10))(uVar13,uVar12,uVar7);
  _swift_getEnumCaseMultiPayload(uVar13,uVar7);
  iVar3 = (int)uVar13;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      lVar17 = *(long *)(unaff_x22 + 0x148);
      lVar11 = *(long *)(unaff_x22 + 0x118);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
      lVar4 = *(long *)(unaff_x22 + 0x108);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar1 = *(long *)(unaff_x22 + 0xf0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
      lVar5 = 0;
      _swift_getTupleTypeMetadata3(0,uVar10,uVar9,uVar7,0,0);
      iVar3 = *(int *)(lVar5 + 0x30);
      iVar2 = *(int *)(lVar5 + 0x40);
      (**(code **)(lVar11 + 0x20))(uVar12,lVar17,uVar10);
      (**(code **)(lVar4 + 0x20))(uVar14,lVar17 + iVar3,uVar9);
      (**(code **)(lVar1 + 0x20))(uVar13,lVar17 + iVar2,uVar7);
      _swift_beginAccess((long)plVar15 + lVar8,unaff_x22 + 0x88,0x21,0);
      FUN_1041515cc((long)plVar15 + lVar8,uVar12,uVar14,uVar13);
      _swift_endAccess(unaff_x22 + 0x88);
      plVar15 = (long *)0x70;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x158) = plVar15;
      lVar8 = 0;
      __sSqMa(0,uVar16);
      *plVar15 = unaff_x22;
      plVar15[1] = (long)FUN_104151200;
      lVar11 = *(long *)(unaff_x22 + 0xa0);
      lVar4 = *(long *)(unaff_x22 + 0xa8);
      UNRECOVERED_JUMPTABLE = FUN_104153e48;
LAB_104151098:
      plVar15[0xc] = lVar4;
      plVar15[0xd] = lVar8;
      plVar15[10] = lVar11;
      plVar15[0xb] = (long)UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10415073c,0,0);
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
    lVar8 = *(long *)(unaff_x22 + 0x140);
    lVar11 = *(long *)(unaff_x22 + 0xd0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
    (**(code **)(lVar11 + 0x20))(uVar10,*(undefined8 *)(unaff_x22 + 0x148),uVar14);
    _os_unfair_lock_unlock(lVar4);
    puVar6 = &DAT_10dcd9348;
    _swift_getWitnessTable(&DAT_10dcd9348,uVar14);
    FUN_1041542f8(uVar12,uVar14,puVar6);
    (**(code **)(lVar11 + 8))(uVar10,uVar14);
    (**(code **)(lVar8 + 8))(uVar7,uVar13);
    lVar11 = *(long *)(unaff_x22 + 0xc0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar11 + -8) + 0x38);
    uVar7 = 0;
  }
  else {
    if (iVar3 == 2) {
      lVar11 = *(long *)(unaff_x22 + 0x140);
      _os_unfair_lock_unlock(lVar4);
      _swift_willThrow();
      (**(code **)(lVar11 + 8))
                (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x138));
      uVar13 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
      _swift_task_dealloc(uVar13);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar14);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1041511e0;
    }
    if (iVar3 != 3) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      plVar15 = (long *)0x70;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x168) = plVar15;
      lVar8 = 0;
      __sSqMa(0,uVar13);
      *plVar15 = unaff_x22;
      plVar15[1] = (long)FUN_10415133c;
      lVar11 = *(long *)(unaff_x22 + 0xa0);
      lVar4 = *(long *)(unaff_x22 + 0xa8);
      UNRECOVERED_JUMPTABLE = (code *)0x104151d30;
      goto LAB_104151098;
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x138);
    lVar8 = *(long *)(unaff_x22 + 0x140);
    lVar11 = *(long *)(unaff_x22 + 0xc0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    _os_unfair_lock_unlock(lVar4);
    (**(code **)(lVar8 + 8))(uVar10,uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar11 + -8) + 0x38);
    uVar7 = 1;
  }
  (*UNRECOVERED_JUMPTABLE)(uVar13,uVar7,1,lVar11);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar14);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1041511e0:
                    /* WARNING: Could not recover jumptable at 0x0001041511fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104151200; end: 10415125b;  */

void FUN_104151200(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x160) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10415125c;
  }
  else {
    pcVar1 = FUN_104151424;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10415125c; end: 10415133b;  */

void FUN_10415125c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  lVar4 = *(long *)(unaff_x22 + 0x140);
  lVar2 = *(long *)(unaff_x22 + 0x118);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar3 = *(long *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0xe8));
  (**(code **)(lVar3 + 8))(uVar7,uVar8);
  (**(code **)(lVar2 + 8))(uVar5,uVar9);
  (**(code **)(lVar4 + 8))(uVar6,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000104151338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10415133c; end: 104151397;  */

void FUN_10415133c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x170) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x168));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104151398;
  }
  else {
    pcVar1 = FUN_1041514ec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}


