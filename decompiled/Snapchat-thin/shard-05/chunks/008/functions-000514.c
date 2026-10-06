/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040c2010; end: 1040c206f;  */

void FUN_1040c2010(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040c2070;
  plVar3[3] = param_2;
  plVar3[4] = unaff_x20;
  plVar3[2] = param_1;
  lVar5 = *(long *)(param_2 + 0x20);
  plVar3[5] = lVar5;
  lVar4 = *(long *)(param_2 + 0x10);
  plVar3[6] = lVar4;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar5,lVar4,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar3[7] = lVar1;
  lVar4 = 0;
  __sSqMa(0,lVar1);
  plVar3[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[9] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[10] = uVar2;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0xb] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c191c,0,0);
  return;
}



/* Entry: 1040c2070; end: 1040c20ab;  */

void FUN_1040c2070(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040c20a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040c20ac; end: 1040c2183;  */

void FUN_1040c20ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x10),
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
  plVar3[1] = (long)FUN_1040c2184;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040c2184; end: 1040c21f3;  */

void FUN_1040c2184(void)

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
                    /* WARNING: Could not recover jumptable at 0x0001040c21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040c21f4; end: 1040c23af;  */

void FUN_1040c21f4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  
  lVar4 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(lVar4 + -8);
  lVar2 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar1 = PTR___s13AsyncIteratorSciTl_11034fb50;
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar10 = *(long *)(param_2 + 0x10);
  lVar8 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,lVar10,PTR___sSciTL_11034fea8,puVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = lVar5 - extraout_x8_02;
  (**(code **)(lVar8 + 0x10))(lVar5,unaff_x20,lVar10);
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar2,lVar10,uVar6);
  (**(code **)(lVar3 + 0x10))
            (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             unaff_x20 + *(int *)(param_2 + 0x34),lVar4);
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar9,lVar4,uVar7);
  FUN_1040c16dc(param_1,lVar2,lVar9,lVar10,lVar4,uVar6,uVar7);
  return;
}



/* Entry: 1040c23b0; end: 1040c243f;  */

void FUN_1040c23b0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
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



/* Entry: 1040c2440; end: 1040c244f;  */

void FUN_1040c2440(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd6368,param_1);
  return;
}



/* Entry: 1040c2450; end: 1040c250b;  */

void FUN_1040c2450(long param_1)

{
  FUN_1040c21f4();
                    /* WARNING: Could not recover jumptable at 0x0001040c247c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040c250c; end: 1040c25d7;  */

long * FUN_1040c250c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_3 + 0x18);
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar7 = *(long *)(lVar6 + -8);
  uVar5 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  uVar1 = *(long *)(lVar4 + 0x40) + uVar5;
  uVar3 = *(uint *)(lVar4 + 0x50) | *(uint *)(lVar7 + 0x50);
  uVar2 = uVar3 & 0xff;
  if ((uVar2 < 8 && (uVar3 & 0x100000) == 0) &&
      (uVar1 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40) < 0x19) {
    (**(code **)(lVar4 + 0x10))(param_1);
    (**(code **)(lVar7 + 0x10))(uVar1 + (long)param_1 & ~uVar5,uVar1 + (long)param_2 & ~uVar5,lVar6)
    ;
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)uVar2 + 0x10 & ((ulong)uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040c25d8; end: 1040c27df;  */

void FUN_1040c25d8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar1 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001040c262c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(long *)(lVar3 + 0x40) + param_1 + uVar2 & (uVar2 ^ 0xffffffffffffffff))
  ;
  return;
}



/* Entry: 1040c27e0; end: 1040c292b;  */

uint * FUN_1040c27e0(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(uint *)(lVar9 + 0x54);
  lVar10 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(uint *)(lVar10 + 0x54);
  uVar3 = uVar7;
  if (uVar7 <= uVar4) {
    uVar3 = uVar4;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar1 = *(long *)(lVar9 + 0x40) + uVar11;
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_1040c28a4;
  lVar2 = (uVar1 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar10 + 0x40);
  uVar8 = (uint)lVar2;
  uVar5 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar12 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar5 & 0x1f)) + 1;
    if (0xff < uVar12) {
      if (uVar12 >> 0x10 == 0) {
        uVar12 = (uint)*(ushort *)((long)param_1 + lVar2);
      }
      else {
        uVar12 = *(uint *)((long)param_1 + lVar2);
      }
      goto LAB_1040c283c;
    }
    if (1 < uVar12) goto LAB_1040c2838;
  }
  else {
LAB_1040c2838:
    uVar12 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_1040c283c:
    if (uVar12 != 0) {
      uVar4 = 0;
      if (uVar8 < 4) {
        uVar4 = uVar12 - 1 << (ulong)(uVar5 & 0x1f);
      }
      if (uVar8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
        if (uVar8 < 4) {
          uVar7 = uVar8;
        }
        if ((int)uVar7 < 3) {
          if (uVar7 == 1) {
            uVar7 = (uint)(byte)*param_1;
          }
          else {
            uVar7 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar7 == 3) {
          uVar7 = (uint)(uint3)*param_1;
        }
        else {
          uVar7 = *param_1;
        }
      }
      return (uint *)(ulong)(uVar3 + (uVar7 | uVar4) + 1);
    }
  }
  if (uVar3 == 0) {
    return (uint *)0x0;
  }
LAB_1040c28a4:
  if (uVar7 <= uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001040c28d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))();
    return param_1;
  }
  puVar6 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001040c28c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 0x30))(puVar6,uVar7,*(long *)(param_3 + 0x18));
  return puVar6;
}



/* Entry: 1040c292c; end: 1040c2b27;  */

void FUN_1040c292c(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  
  lVar8 = *(long *)(param_4 + 0x10);
  lVar9 = *(long *)(param_4 + 0x18);
  lVar10 = *(long *)(lVar8 + -8);
  uVar7 = *(uint *)(lVar10 + 0x54);
  lVar11 = *(long *)(lVar9 + -8);
  uVar4 = *(uint *)(lVar11 + 0x54);
  uVar3 = uVar4;
  if (uVar4 <= uVar7) {
    uVar3 = uVar7;
  }
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar1 = *(long *)(lVar10 + 0x40) + uVar12;
  lVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar11 + 0x40);
  uVar13 = (uint)lVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar15 = 0;
  }
  else if (uVar13 < 4) {
    uVar6 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar13 << 3 & 0x1f)) >> (ulong)(uVar13 << 3 & 0x1f)
            ) + 1;
    bVar15 = 2;
    if (0xffff < uVar6) {
      bVar15 = 4;
    }
    if (uVar6 < 0x100) {
      bVar15 = 1 < uVar6;
    }
  }
  else {
    bVar15 = 1;
  }
  uVar6 = (uint)param_2;
  if (uVar3 < uVar6) {
    uVar6 = uVar6 + ~uVar3;
    if (uVar13 < 4) {
      iVar14 = (uVar6 >> (ulong)(uVar13 << 3 & 0x1f)) + 1;
      if (uVar13 != 0) {
        uVar3 = uVar6 & (-1 << (ulong)(uVar13 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar13 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar13 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)uVar6;
        }
      }
    }
    else {
      _bzero(param_1,lVar2);
      *param_1 = uVar6;
      iVar14 = 1;
    }
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar14;
      }
    }
    else if (bVar15 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar14;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar14;
    }
  }
  else {
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar15 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (uVar6 != 0) {
      if (uVar7 < uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x38);
        param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar12);
        lVar8 = lVar9;
        uVar7 = uVar4;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001040c2ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar7,lVar8);
      return;
    }
  }
  return;
}



/* Entry: 1040c2b28; end: 1040c2bf3;  */

void FUN_1040c2b28(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar2 = 0x13f;
  __sSqMa();
  if (uVar1 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    uVar1 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
               PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    lVar2 = 0x13f;
    __sSqMa();
    if (uVar1 < 0x40) {
      lStack_28 = *(long *)(lVar2 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x30);
    }
  }
  return;
}



/* Entry: 1040c2bf4; end: 1040c2db3;  */

long * FUN_1040c2bf4(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar6 = PTR___sSciTL_11034fea8;
  puVar5 = PTR___s13AsyncIteratorSciTl_11034fb50;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar15 = *(long *)(lVar7 + -8);
  lVar12 = *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),puVar6,puVar5);
  lVar14 = *(long *)(lVar8 + -8);
  uVar11 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  uVar1 = lVar12 + uVar11;
  lVar13 = *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar13 = lVar13 + 1;
  }
  uVar4 = *(uint *)(lVar15 + 0x50) | *(uint *)(lVar14 + 0x50);
  uVar3 = uVar4 & 0xff;
  if ((uVar3 < 8 && (uVar4 & 0x100000) == 0) &&
      (uVar1 & (uVar11 ^ 0xffffffffffffffff)) + lVar13 < 0x19) {
    uVar11 = ~uVar11;
    plVar9 = param_2;
    (**(code **)(lVar15 + 0x30))(param_2,1,lVar7);
    if ((int)plVar9 == 0) {
      (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar7);
      (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar7);
    }
    else {
      _memcpy(param_1,param_2,lVar12);
    }
    uVar2 = uVar1 + (long)param_1;
    uVar1 = uVar1 + (long)param_2;
    uVar10 = uVar1 & uVar11;
    (**(code **)(lVar14 + 0x30))(uVar10,1,lVar8);
    if ((int)uVar10 == 0) {
      (**(code **)(lVar14 + 0x10))(uVar2 & uVar11,uVar1 & uVar11,lVar8);
      (**(code **)(lVar14 + 0x38))(uVar2 & uVar11,0,1,lVar8);
    }
    else {
      _memcpy(uVar2 & uVar11,uVar1 & uVar11,lVar13);
    }
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    param_1 = (long *)(lVar12 + ((ulong)uVar3 + 0x10 & ((ulong)uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040c2db4; end: 1040c301f;  */

void FUN_1040c2db4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar4 = *(long *)(lVar2 + -8);
  lVar6 = param_1;
  (**(code **)(lVar4 + 0x30))(param_1,1,lVar2);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar4 + 8))(param_1,lVar2);
  }
  iVar1 = *(int *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar6 = lVar6 + param_1;
  if (iVar1 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar3 = lVar6 + uVar5 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar3,1,lVar2);
  if ((int)uVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040c2eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(lVar6 + uVar5 & (uVar5 ^ 0xffffffffffffffff),lVar2);
  return;
}



/* Entry: 1040c3020; end: 1040c321f;  */

long FUN_1040c3020(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar3 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar7 = param_1;
  (*pcVar10)(param_1,1,lVar3);
  lVar4 = param_2;
  (*pcVar10)(param_2,1,lVar3);
  if ((int)lVar7 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar9 + 0x18))(param_1,param_2,lVar3);
      goto LAB_1040c30fc;
    }
    (**(code **)(lVar9 + 8))(param_1,lVar3);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar3);
    goto LAB_1040c30fc;
  }
  lVar7 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  _memcpy(param_1,param_2,lVar7);
LAB_1040c30fc:
  lVar7 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar3 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar1 = lVar7 + uVar8 + param_1;
  uVar2 = lVar7 + uVar8 + param_2;
  pcVar10 = *(code **)(lVar3 + 0x30);
  uVar5 = uVar1 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar5,1,lVar4);
  uVar6 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar6,1,lVar4);
  if ((int)uVar5 == 0) {
    if ((int)uVar6 == 0) {
      (**(code **)(lVar3 + 0x18))
                (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar4);
      return param_1;
    }
    (**(code **)(lVar3 + 8))(uVar1 & (uVar8 ^ 0xffffffffffffffff),lVar4);
  }
  else if ((int)uVar6 == 0) {
    (**(code **)(lVar3 + 0x10))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar4);
    (**(code **)(lVar3 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar4);
    return param_1;
  }
  lVar7 = *(long *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  _memcpy(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  return param_1;
}



/* Entry: 1040c3220; end: 1040c338f;  */

long FUN_1040c3220(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar3 + -8);
  lVar8 = param_2;
  (**(code **)(lVar7 + 0x30))(param_2,1,lVar3);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar3);
    iVar5 = *(int *)(lVar7 + 0x54);
    lVar8 = *(long *)(lVar7 + 0x40);
  }
  else {
    iVar5 = *(int *)(lVar7 + 0x54);
    lVar8 = *(long *)(lVar7 + 0x40);
    lVar3 = lVar8;
    if (iVar5 == 0) {
      lVar3 = lVar8 + 1;
    }
    _memcpy(param_1,param_2,lVar3);
  }
  if (iVar5 == 0) {
    lVar8 = lVar8 + 1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = lVar8 + uVar6 + param_1;
  uVar2 = lVar8 + uVar6 + param_2;
  uVar4 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x30))(uVar4,1,lVar3);
  if ((int)uVar4 == 0) {
    (**(code **)(lVar7 + 0x20))
              (uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar3);
    (**(code **)(lVar7 + 0x38))(uVar1 & (uVar6 ^ 0xffffffffffffffff),0,1,lVar3);
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x40);
    if (*(int *)(lVar7 + 0x54) == 0) {
      lVar8 = lVar8 + 1;
    }
    _memcpy(uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar8);
  }
  return param_1;
}



/* Entry: 1040c3390; end: 1040c358f;  */

long FUN_1040c3390(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar3 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar7 = param_1;
  (*pcVar10)(param_1,1,lVar3);
  lVar4 = param_2;
  (*pcVar10)(param_2,1,lVar3);
  if ((int)lVar7 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar9 + 0x28))(param_1,param_2,lVar3);
      goto LAB_1040c346c;
    }
    (**(code **)(lVar9 + 8))(param_1,lVar3);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar3);
    goto LAB_1040c346c;
  }
  lVar7 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  _memcpy(param_1,param_2,lVar7);
LAB_1040c346c:
  lVar7 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar3 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar1 = lVar7 + uVar8 + param_1;
  uVar2 = lVar7 + uVar8 + param_2;
  pcVar10 = *(code **)(lVar3 + 0x30);
  uVar5 = uVar1 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar5,1,lVar4);
  uVar6 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar6,1,lVar4);
  if ((int)uVar5 == 0) {
    if ((int)uVar6 == 0) {
      (**(code **)(lVar3 + 0x28))
                (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar4);
      return param_1;
    }
    (**(code **)(lVar3 + 8))(uVar1 & (uVar8 ^ 0xffffffffffffffff),lVar4);
  }
  else if ((int)uVar6 == 0) {
    (**(code **)(lVar3 + 0x20))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar4);
    (**(code **)(lVar3 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar4);
    return param_1;
  }
  lVar7 = *(long *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  _memcpy(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  return param_1;
}



/* Entry: 1040c3590; end: 1040c3ad3;  */

int FUN_1040c3590(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  
  puVar5 = PTR___sSciTL_11034fea8;
  puVar4 = PTR___s13AsyncIteratorSciTl_11034fb50;
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar17 = *(long *)(lVar8 + -8);
  iVar7 = *(int *)(lVar17 + 0x54);
  uVar2 = 0;
  if (iVar7 != 0) {
    uVar2 = iVar7 - 1;
  }
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),puVar5,puVar4);
  lVar10 = *(long *)(lVar9 + -8);
  iVar6 = *(int *)(lVar10 + 0x54);
  uVar11 = 0;
  if (iVar6 != 0) {
    uVar11 = iVar6 - 1;
  }
  uVar1 = uVar11;
  if (uVar11 <= uVar2) {
    uVar1 = uVar2;
  }
  lVar12 = *(long *)(lVar17 + 0x40);
  if (iVar7 == 0) {
    lVar12 = lVar12 + 1;
  }
  lVar13 = *(long *)(lVar10 + 0x40);
  if (iVar6 == 0) {
    lVar13 = lVar13 + 1;
  }
  if (param_2 == 0) {
LAB_1040c36f4:
    iVar7 = 0;
  }
  else {
    uVar14 = (ulong)*(byte *)(lVar10 + 0x50);
    if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
      lVar13 = lVar13 + (lVar12 + uVar14 & (uVar14 ^ 0xffffffffffffffff));
      uVar15 = (uint)lVar13;
      uVar3 = uVar15 << 3;
      if (uVar15 < 4) {
        uVar16 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
        if (0xff < uVar16) {
          if (uVar16 >> 0x10 == 0) {
            uVar16 = (uint)*(ushort *)((long)param_1 + lVar13);
          }
          else {
            uVar16 = *(uint *)((long)param_1 + lVar13);
          }
          goto LAB_1040c366c;
        }
        if (1 < uVar16) goto LAB_1040c3668;
      }
      else {
LAB_1040c3668:
        uVar16 = (uint)*(byte *)((long)param_1 + lVar13);
LAB_1040c366c:
        if (uVar16 != 0) {
          uVar2 = 0;
          if (uVar15 < 4) {
            uVar2 = uVar16 - 1 << (ulong)(uVar3 & 0x1f);
          }
          if (uVar15 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = 4;
            if (uVar15 < 4) {
              uVar11 = uVar15;
            }
            if ((int)uVar11 < 3) {
              if (uVar11 == 1) {
                uVar11 = (uint)(byte)*param_1;
              }
              else {
                uVar11 = (uint)(ushort)*param_1;
              }
            }
            else if (uVar11 == 3) {
              uVar11 = (uint)(uint3)*param_1;
            }
            else {
              uVar11 = *param_1;
            }
          }
          return uVar1 + (uVar11 | uVar2) + 1;
        }
      }
      if (uVar1 == 0) goto LAB_1040c36f4;
    }
    if (uVar2 < uVar11) {
      uVar14 = (ulong)(lVar12 + uVar14 + (long)param_1) & ~uVar14;
      (**(code **)(lVar10 + 0x30))(uVar14,iVar6,lVar9);
      iVar6 = (int)uVar14;
    }
    else {
      (**(code **)(lVar17 + 0x30))(param_1,iVar7,lVar8);
      iVar6 = (int)param_1;
    }
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar7 = iVar6 + -1;
    }
  }
  return iVar7;
}



/* Entry: 1040c3ad4; end: 1040c3ae7;  */

void FUN_1040c3ad4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040c3ae8; end: 1040c3d13;  */

void FUN_1040c3ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___s13AsyncIteratorSciTl_11034fb50;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_5,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar2 + -8);
  pcVar6 = *(code **)(lVar9 + 0x38);
  (*pcVar6)(param_1,1,1,lVar2);
  uStack_68 = param_10;
  lVar3 = 0;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_9;
  FUN_1040c3d14(0,&uStack_90);
  lVar13 = (long)*(int *)(lVar3 + 0x44);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,param_9,param_6,PTR___sSciTL_11034fea8,puVar1);
  lVar12 = *(long *)(lVar4 + -8);
  pcVar7 = *(code **)(lVar12 + 0x38);
  (*pcVar7)(param_1 + lVar13,1,1,lVar4);
  lVar11 = (long)*(int *)(lVar3 + 0x48);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,param_10,param_7,PTR___sSciTL_11034fea8,puVar1);
  lVar10 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar10 + 0x38);
  (*pcVar8)(param_1 + lVar11,1,1,lVar3);
  lVar5 = 0;
  __sSqMa(0,lVar2);
  (**(code **)(*(long *)(lVar5 + -8) + 8))(param_1,lVar5);
  (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar2);
  (*pcVar6)(param_1,0,1,lVar2);
  lVar2 = 0;
  __sSqMa(0,lVar4);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar13,lVar2);
  (**(code **)(lVar12 + 0x20))(param_1 + lVar13,param_3,lVar4);
  (*pcVar7)(param_1 + lVar13,0,1,lVar4);
  lVar2 = 0;
  __sSqMa(0,lVar3);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar11,lVar2);
  (**(code **)(lVar10 + 0x20))(param_1 + lVar11,param_4,lVar3);
  (*pcVar8)(param_1 + lVar11,0,1,lVar3);
  return;
}



/* Entry: 1040c3d14; end: 1040c3d1f;  */

void FUN_1040c3d14(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7ef94c);
  return;
}



/* Entry: 1040c3d20; end: 1040c3def;  */

void FUN_1040c3d20(undefined8 param_1,long param_2)

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
  uVar6 = *(undefined8 *)(param_2 + 0x28);
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
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar4;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c3df0,0,0);
  return;
}



/* Entry: 1040c3df0; end: 1040c4157;  */

void FUN_1040c3df0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar10,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  lVar5 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar5;
  (**(code **)(lVar5 + 0x30))(uVar9,1,lVar2);
  if ((int)uVar9 == 0) {
    _swift_getAssociatedConformanceWitness
              (uVar8,uVar10,lVar2,PTR___sSciTL_11034fea8,
               PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1040c4158;
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x58),1,1,*(undefined8 *)(unaff_x22 + 0x38));
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar7 = *(long *)(unaff_x22 + 0x80);
    lVar2 = *(long *)(unaff_x22 + 0x18);
    lVar5 = *(long *)(unaff_x22 + 0x20);
    pcVar6 = *(code **)(*(long *)(unaff_x22 + 0x48) + 8);
    *(code **)(unaff_x22 + 0x98) = pcVar6;
    (*pcVar6)(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x40));
    lVar3 = 0;
    __sSqMa(0,uVar8);
    (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar5,lVar3);
    (**(code **)(lVar7 + 0x38))(lVar5,1,1,uVar8);
    iVar1 = *(int *)(lVar2 + 0x44);
    *(int *)(unaff_x22 + 0xd0) = iVar1;
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    uVar10 = *(undefined8 *)(lVar2 + 0x18);
    lVar2 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar8,uVar10,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    *(long *)(unaff_x22 + 0xa0) = lVar2;
    lVar7 = *(long *)(lVar2 + -8);
    *(long *)(unaff_x22 + 0xa8) = lVar7;
    lVar5 = lVar5 + iVar1;
    (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
    if ((int)lVar5 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar8,uVar10,lVar2,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar4 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xb0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1040c44c4;
      uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    }
    else {
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x50),1,1,*(undefined8 *)(unaff_x22 + 0x38));
      uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar7 = *(long *)(unaff_x22 + 0xa8);
      iVar1 = *(int *)(unaff_x22 + 0xd0);
      lVar2 = *(long *)(unaff_x22 + 0x18);
      lVar5 = *(long *)(unaff_x22 + 0x20);
      (**(code **)(unaff_x22 + 0x98))
                (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
      lVar3 = 0;
      __sSqMa(0,uVar8);
      (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar5 + iVar1,lVar3);
      (**(code **)(lVar7 + 0x38))(lVar5 + iVar1,1,1,uVar8);
      iVar1 = *(int *)(lVar2 + 0x48);
      uVar8 = *(undefined8 *)(lVar2 + 0x38);
      uVar10 = *(undefined8 *)(lVar2 + 0x20);
      lVar2 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar8,uVar10,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      lVar5 = lVar5 + iVar1;
      (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar5,1,lVar2);
      if ((int)lVar5 != 0) {
        (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
                  (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x38));
        uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
        _swift_task_dealloc(uVar8);
        _swift_task_dealloc(uVar9);
        _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001040c4038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      _swift_getAssociatedConformanceWitness
                (uVar8,uVar10,lVar2,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar4 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xc0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1040c4718;
      uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar4,uVar10,lVar2,uVar8);
  return;
}



/* Entry: 1040c4158; end: 1040c41b3;  */

void FUN_1040c4158(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040c41b4;
  }
  else {
    pcVar1 = FUN_1040c47b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040c41b4; end: 1040c44c3;  */

void FUN_1040c41b4(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar4 = *(long *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar9 = uVar10;
  (**(code **)(lVar4 + 0x30))(uVar10,1,uVar8);
  if ((int)uVar9 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar7 = *(long *)(unaff_x22 + 0x80);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    lVar4 = *(long *)(unaff_x22 + 0x20);
    pcVar6 = *(code **)(*(long *)(unaff_x22 + 0x48) + 8);
    *(code **)(unaff_x22 + 0x98) = pcVar6;
    (*pcVar6)(uVar10,*(undefined8 *)(unaff_x22 + 0x40));
    lVar2 = 0;
    __sSqMa(0,uVar9);
    (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar4,lVar2);
    (**(code **)(lVar7 + 0x38))(lVar4,1,1,uVar9);
    iVar1 = *(int *)(lVar3 + 0x44);
    *(int *)(unaff_x22 + 0xd0) = iVar1;
    uVar9 = *(undefined8 *)(lVar3 + 0x30);
    uVar10 = *(undefined8 *)(lVar3 + 0x18);
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar9,uVar10,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    *(long *)(unaff_x22 + 0xa0) = lVar3;
    lVar7 = *(long *)(lVar3 + -8);
    *(long *)(unaff_x22 + 0xa8) = lVar7;
    lVar4 = lVar4 + iVar1;
    (**(code **)(lVar7 + 0x30))(lVar4,1,lVar3);
    if ((int)lVar4 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar9,uVar10,lVar3,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xb0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1040c44c4;
      uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    }
    else {
      uVar10 = 1;
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x50),1,1,*(undefined8 *)(unaff_x22 + 0x38));
      uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar7 = *(long *)(unaff_x22 + 0xa8);
      iVar1 = *(int *)(unaff_x22 + 0xd0);
      lVar3 = *(long *)(unaff_x22 + 0x18);
      lVar4 = *(long *)(unaff_x22 + 0x20);
      (**(code **)(unaff_x22 + 0x98))
                (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
      lVar2 = 0;
      __sSqMa(0,uVar9);
      (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar4 + iVar1,lVar2);
      (**(code **)(lVar7 + 0x38))(lVar4 + iVar1,1,1,uVar9);
      iVar1 = *(int *)(lVar3 + 0x48);
      uVar9 = *(undefined8 *)(lVar3 + 0x38);
      uVar8 = *(undefined8 *)(lVar3 + 0x20);
      lVar3 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar9,uVar8,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      lVar4 = lVar4 + iVar1;
      (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar4,1,lVar3);
      if ((int)lVar4 != 0) goto LAB_1040c43e8;
      _swift_getAssociatedConformanceWitness
                (uVar9,uVar8,lVar3,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xc0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1040c4718;
      uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar5,uVar10,lVar3,uVar9);
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
  pcVar6 = *(code **)(lVar4 + 0x20);
  (*pcVar6)(uVar9,uVar10,uVar8);
  (*pcVar6)(uVar11,uVar9,uVar8);
  uVar10 = 0;
LAB_1040c43e8:
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar10,1,*(undefined8 *)(unaff_x22 + 0x38));
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001040c4448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c44c4; end: 1040c451f;  */

void FUN_1040c44c4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040c4520;
  }
  else {
    pcVar1 = FUN_1040c4938;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040c4520; end: 1040c4717;  */

void FUN_1040c4520(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  
  lVar10 = *(long *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar8 = uVar7;
  (**(code **)(lVar10 + 0x30))(uVar7,1,uVar6);
  if ((int)uVar8 == 1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar1 = *(long *)(unaff_x22 + 0xa8);
    iVar2 = *(int *)(unaff_x22 + 0xd0);
    lVar4 = *(long *)(unaff_x22 + 0x18);
    lVar10 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 0x98))(uVar7,*(undefined8 *)(unaff_x22 + 0x40));
    lVar3 = 0;
    __sSqMa(0,uVar6);
    (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar10 + iVar2,lVar3);
    uVar8 = 1;
    (**(code **)(lVar1 + 0x38))(lVar10 + iVar2,1,1,uVar6);
    iVar2 = *(int *)(lVar4 + 0x48);
    uVar6 = *(undefined8 *)(lVar4 + 0x38);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    lVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar6,uVar7,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    lVar10 = lVar10 + iVar2;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar10,1,lVar4);
    if ((int)lVar10 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar6,uVar7,lVar4,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xc0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1040c4718;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
                (plVar5,*(undefined8 *)(unaff_x22 + 0x10),lVar4,uVar6);
      return;
    }
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar11 = *(code **)(lVar10 + 0x20);
    (*pcVar11)(uVar8,uVar7,uVar6);
    (*pcVar11)(uVar9,uVar8,uVar6);
    uVar8 = 0;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar8,1,*(undefined8 *)(unaff_x22 + 0x38));
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001040c4714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c4718; end: 1040c47af;  */

void FUN_1040c4718(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar4 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xc0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c4ac0,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x68);
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  uVar3 = *(undefined8 *)(lVar4 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x70));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001040c47ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 1040c47b0; end: 1040c4937;  */

void FUN_1040c47b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar11 = *(long *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar12 = *(long *)(unaff_x22 + 0x18);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  lVar10 = 0;
  __sSqMa(0,uVar1);
  (**(code **)(*(long *)(lVar10 + -8) + 8))(lVar6,lVar10);
  (**(code **)(lVar11 + 0x38))(lVar6,1,1,uVar1);
  puVar9 = PTR___sSciTL_11034fea8;
  puVar8 = PTR___s13AsyncIteratorSciTl_11034fb50;
  iVar7 = *(int *)(lVar12 + 0x44);
  lVar11 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar12 + 0x30),*(undefined8 *)(lVar12 + 0x18),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar10 = 0;
  __sSqMa(0,lVar11);
  (**(code **)(*(long *)(lVar10 + -8) + 8))(lVar6 + iVar7,lVar10);
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar6 + iVar7,1,1,lVar11);
  iVar7 = *(int *)(lVar12 + 0x48);
  lVar11 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar12 + 0x38),*(undefined8 *)(lVar12 + 0x20),puVar9,puVar8);
  lVar12 = 0;
  __sSqMa(0,lVar11);
  (**(code **)(*(long *)(lVar12 + -8) + 8))(lVar6 + iVar7,lVar12);
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar6 + iVar7,1,1,lVar11);
  _swift_willThrow();
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040c4934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c4938; end: 1040c4abf;  */

void FUN_1040c4938(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar11 = *(long *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar12 = *(long *)(unaff_x22 + 0x18);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  lVar10 = 0;
  __sSqMa(0,uVar1);
  (**(code **)(*(long *)(lVar10 + -8) + 8))(lVar6,lVar10);
  (**(code **)(lVar11 + 0x38))(lVar6,1,1,uVar1);
  puVar9 = PTR___sSciTL_11034fea8;
  puVar8 = PTR___s13AsyncIteratorSciTl_11034fb50;
  iVar7 = *(int *)(lVar12 + 0x44);
  lVar11 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar12 + 0x30),*(undefined8 *)(lVar12 + 0x18),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar10 = 0;
  __sSqMa(0,lVar11);
  (**(code **)(*(long *)(lVar10 + -8) + 8))(lVar6 + iVar7,lVar10);
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar6 + iVar7,1,1,lVar11);
  iVar7 = *(int *)(lVar12 + 0x48);
  lVar11 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar12 + 0x38),*(undefined8 *)(lVar12 + 0x20),puVar9,puVar8);
  lVar12 = 0;
  __sSqMa(0,lVar11);
  (**(code **)(*(long *)(lVar12 + -8) + 8))(lVar6 + iVar7,lVar12);
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar6 + iVar7,1,1,lVar11);
  _swift_willThrow();
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040c4abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c4ac0; end: 1040c4c47;  */

void FUN_1040c4ac0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar11 = *(long *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar12 = *(long *)(unaff_x22 + 0x18);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  lVar10 = 0;
  __sSqMa(0,uVar1);
  (**(code **)(*(long *)(lVar10 + -8) + 8))(lVar6,lVar10);
  (**(code **)(lVar11 + 0x38))(lVar6,1,1,uVar1);
  puVar9 = PTR___sSciTL_11034fea8;
  puVar8 = PTR___s13AsyncIteratorSciTl_11034fb50;
  iVar7 = *(int *)(lVar12 + 0x44);
  lVar11 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar12 + 0x30),*(undefined8 *)(lVar12 + 0x18),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar10 = 0;
  __sSqMa(0,lVar11);
  (**(code **)(*(long *)(lVar10 + -8) + 8))(lVar6 + iVar7,lVar10);
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar6 + iVar7,1,1,lVar11);
  iVar7 = *(int *)(lVar12 + 0x48);
  lVar11 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar12 + 0x38),*(undefined8 *)(lVar12 + 0x20),puVar9,puVar8);
  lVar12 = 0;
  __sSqMa(0,lVar11);
  (**(code **)(*(long *)(lVar12 + -8) + 8))(lVar6 + iVar7,lVar12);
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar6 + iVar7,1,1,lVar11);
  _swift_willThrow();
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040c4c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c4c48; end: 1040c4ca7;  */

void FUN_1040c4c48(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1040c4ca8;
  plVar4[3] = param_2;
  plVar4[4] = unaff_x20;
  plVar4[2] = param_1;
  lVar6 = *(long *)(param_2 + 0x28);
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
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xb] = uVar3;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xc] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xd] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xe] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c3df0,0,0);
  return;
}



/* Entry: 1040c4ca8; end: 1040c4ce3;  */

void FUN_1040c4ca8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040c4ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040c4ce4; end: 1040c4dbb;  */

void FUN_1040c4ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  plVar3[1] = (long)FUN_1040c4dbc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040c4dbc; end: 1040c4e2b;  */

void FUN_1040c4dbc(void)

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
                    /* WARNING: Could not recover jumptable at 0x0001040c4e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040c4e2c; end: 1040c50b3;  */

void FUN_1040c4e2c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  
  lStack_98 = *(long *)(param_2 + 0x20);
  lVar6 = *(long *)(lStack_98 + -8);
  lVar4 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s13AsyncIteratorSciTl_11034fb50;
  lVar7 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(lVar4 + 0x38);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar7 - extraout_x8_00;
  lVar15 = *(long *)(param_2 + 0x18);
  lVar9 = *(long *)(lVar15 + -8);
  lStack_90 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_a0 = *(undefined8 *)(param_2 + 0x30);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uStack_a0,lVar15,puVar2,puVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar8 - extraout_x8_02;
  lVar12 = *(long *)(param_2 + 0x10);
  lVar16 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar10 = lVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar13,lVar12,puVar2,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar10 - extraout_x8_04;
  (**(code **)(lVar16 + 0x10))(lVar10,unaff_x20,lVar12);
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar14,lVar12,uVar13);
  (**(code **)(lVar9 + 0x10))(lVar8,unaff_x20 + *(int *)(param_2 + 0x44),lVar15);
  uVar3 = uStack_a0;
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar11,lVar15,uStack_a0);
  lVar4 = lStack_98;
  (**(code **)(lVar6 + 0x10))(lVar7,unaff_x20 + *(int *)(param_2 + 0x48),lStack_98);
  lVar6 = lStack_90;
  __sSci17makeAsyncIterator0bC0QzyFTj(lStack_90,lVar4,uVar5);
  *(undefined8 *)(lVar14 + -0x10) = uVar5;
  FUN_1040c3ae8(param_1,lVar14,lVar11,lVar6,lVar12,lVar15,lVar4,uVar13,uVar3);
  return;
}



/* Entry: 1040c50b4; end: 1040c5143;  */

void FUN_1040c50b4(undefined8 param_1,long param_2)

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



/* Entry: 1040c5144; end: 1040c5153;  */

void FUN_1040c5144(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd6468,param_1);
  return;
}



/* Entry: 1040c5154; end: 1040c522f;  */

void FUN_1040c5154(long param_1)

{
  FUN_1040c4e2c();
                    /* WARNING: Could not recover jumptable at 0x0001040c5180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040c5230; end: 1040c5363;  */

long * FUN_1040c5230(long *param_1,long *param_2,long param_3)

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



/* Entry: 1040c5364; end: 1040c53e3;  */

void FUN_1040c5364(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001040c53e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(uVar2 + *(long *)(lVar4 + 0x40) + uVar1 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 1040c53e4; end: 1040c5683;  */

long FUN_1040c53e4(long param_1,long param_2,long param_3)

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



/* Entry: 1040c5684; end: 1040c5833;  */

uint * FUN_1040c5684(uint *param_1,uint param_2,long param_3)

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
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_1040c5770;
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
      goto LAB_1040c5708;
    }
    if (1 < uVar9) goto LAB_1040c5704;
  }
  else {
LAB_1040c5704:
    uVar9 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_1040c5708:
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
LAB_1040c5770:
  if (uVar4 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001040c5788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar14 + 0x30))(param_1,uVar4,*(long *)(param_3 + 0x10));
    return param_1;
  }
  puVar7 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar8);
  if (uVar5 != uVar3) {
    puVar7 = (uint *)((long)puVar7 + uVar15 + *(long *)(lVar12 + 0x40) & ~uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001040c57d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x30))(puVar7,uVar6,*(long *)(param_3 + 0x20));
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040c57b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x30))();
  return puVar7;
}



/* Entry: 1040c5834; end: 1040c5a7b;  */

void FUN_1040c5834(uint *param_1,undefined8 param_2,uint param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0001040c5a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar10,lVar12);
      return;
    }
  }
  return;
}



/* Entry: 1040c5a7c; end: 1040c5b87;  */

void FUN_1040c5a7c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar2 = 0x13f;
  __sSqMa();
  if (uVar1 < 0x40) {
    lStack_38 = *(long *)(lVar2 + -8) + 0x40;
    uVar1 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18),
               PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    lVar2 = 0x13f;
    __sSqMa();
    if (uVar1 < 0x40) {
      lStack_30 = *(long *)(lVar2 + -8) + 0x40;
      uVar1 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
                 PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      lVar2 = 0x13f;
      __sSqMa();
      if (uVar1 < 0x40) {
        lStack_28 = *(long *)(lVar2 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0,3,&lStack_38,param_1 + 0x40);
      }
    }
  }
  return;
}



/* Entry: 1040c5b88; end: 1040c5e1b;  */

long * FUN_1040c5b88(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  
  puVar5 = PTR___sSciTL_11034fea8;
  puVar4 = PTR___s13AsyncIteratorSciTl_11034fb50;
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar13 = *(long *)(lVar6 + -8);
  lVar10 = *(long *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    lVar10 = lVar10 + 1;
  }
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar5,puVar4);
  lVar19 = *(long *)(lVar7 + -8);
  uVar2 = *(uint *)(lVar19 + 0x50);
  uVar16 = (ulong)uVar2 & 0xff;
  uVar15 = lVar10 + uVar16;
  lVar11 = *(long *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    lVar11 = lVar11 + 1;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar5,puVar4);
  lVar18 = *(long *)(lVar8 + -8);
  uVar14 = (ulong)*(uint *)(lVar18 + 0x50) & 0xff;
  lVar1 = lVar11 + uVar14;
  lVar12 = *(long *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  uVar3 = uVar2 | *(uint *)(lVar13 + 0x50) | *(uint *)(lVar18 + 0x50);
  uVar2 = uVar3 & 0xff;
  if ((uVar2 < 8 &&
      lVar12 + (lVar1 + (uVar15 & (uVar16 ^ 0xffffffffffffffff)) & (uVar14 ^ 0xffffffffffffffff)) <
      0x19) && (uVar3 & 0x100000) == 0) {
    plVar9 = param_2;
    (**(code **)(lVar13 + 0x30))(param_2,1,lVar6);
    if ((int)plVar9 == 0) {
      (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar6);
      (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar6);
    }
    else {
      _memcpy(param_1,param_2,lVar10);
    }
    uVar14 = ~uVar14;
    uVar17 = uVar15 + (long)param_1 & ~uVar16;
    uVar15 = uVar15 + (long)param_2 & ~uVar16;
    uVar16 = uVar15;
    (**(code **)(lVar19 + 0x30))(uVar15,1,lVar7);
    if ((int)uVar16 == 0) {
      (**(code **)(lVar19 + 0x10))(uVar17,uVar15,lVar7);
      (**(code **)(lVar19 + 0x38))(uVar17,0,1,lVar7);
    }
    else {
      _memcpy(uVar17,uVar15,lVar11);
    }
    uVar17 = lVar1 + uVar17;
    uVar15 = lVar1 + uVar15;
    uVar16 = uVar15 & uVar14;
    (**(code **)(lVar18 + 0x30))(uVar16,1,lVar8);
    if ((int)uVar16 == 0) {
      (**(code **)(lVar18 + 0x10))(uVar17 & uVar14,uVar15 & uVar14,lVar8);
      (**(code **)(lVar18 + 0x38))(uVar17 & uVar14,0,1,lVar8);
    }
    else {
      _memcpy(uVar17 & uVar14,uVar15 & uVar14,lVar12);
    }
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    param_1 = (long *)(lVar10 + ((ulong)uVar2 + 0x10 & ((ulong)uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040c5e1c; end: 1040c5f87;  */

void FUN_1040c5e1c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar4 = *(long *)(lVar2 + -8);
  lVar6 = param_1;
  (**(code **)(lVar4 + 0x30))(param_1,1,lVar2);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar4 + 8))(param_1,lVar2);
  }
  iVar1 = *(int *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x18),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar4 = *(long *)(lVar2 + -8);
  lVar6 = lVar6 + param_1;
  if (iVar1 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar3 = lVar6 + (ulong)*(byte *)(lVar4 + 0x50) &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = uVar3;
  (**(code **)(lVar4 + 0x30))(uVar3,1,lVar2);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar4 + 8))(uVar3,lVar2);
  }
  iVar1 = *(int *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x20),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar6 = lVar6 + uVar3;
  if (iVar1 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar3 = lVar6 + uVar5 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar3,1,lVar2);
  if ((int)uVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040c5f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(lVar6 + uVar5 & (uVar5 ^ 0xffffffffffffffff),lVar2);
  return;
}



/* Entry: 1040c5f88; end: 1040c69cf;  */

long FUN_1040c5f88(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = *(long *)(lVar1 + -8);
  lVar7 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar1);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar1);
    iVar4 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar4 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar1 = lVar7;
    if (iVar4 == 0) {
      lVar1 = lVar7 + 1;
    }
    _memcpy(param_1,param_2,lVar1);
  }
  if (iVar4 == 0) {
    lVar7 = lVar7 + 1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar5 = lVar7 + uVar3 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar7 + uVar3 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  uVar2 = uVar3;
  (**(code **)(lVar6 + 0x30))(uVar3,1,lVar1);
  if ((int)uVar2 == 0) {
    (**(code **)(lVar6 + 0x10))(uVar5,uVar3,lVar1);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar1);
    iVar4 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar4 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar1 = lVar7;
    if (iVar4 == 0) {
      lVar1 = lVar7 + 1;
    }
    _memcpy(uVar5,uVar3,lVar1);
  }
  if (iVar4 == 0) {
    lVar7 = lVar7 + 1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = *(long *)(lVar1 + -8);
  uVar8 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar5 = lVar7 + uVar8 + uVar5;
  uVar3 = lVar7 + uVar8 + uVar3;
  uVar2 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar1);
  if ((int)uVar2 == 0) {
    (**(code **)(lVar6 + 0x10))
              (uVar5 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar1);
    (**(code **)(lVar6 + 0x38))(uVar5 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar1);
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x40);
    if (*(int *)(lVar6 + 0x54) == 0) {
      lVar7 = lVar7 + 1;
    }
    _memcpy(uVar5 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  }
  return param_1;
}



/* Entry: 1040c69d0; end: 1040c6fdb;  */

int FUN_1040c69d0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  
  puVar6 = PTR___sSciTL_11034fea8;
  puVar5 = PTR___s13AsyncIteratorSciTl_11034fb50;
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar23 = *(long *)(lVar9 + -8);
  iVar7 = *(int *)(lVar23 + 0x54);
  uVar2 = 0;
  if (iVar7 != 0) {
    uVar2 = iVar7 - 1;
  }
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar6,puVar5);
  lVar22 = *(long *)(lVar10 + -8);
  iVar8 = *(int *)(lVar22 + 0x54);
  uVar14 = 0;
  if (iVar8 != 0) {
    uVar14 = iVar8 - 1;
  }
  uVar4 = uVar14;
  if (uVar14 <= uVar2) {
    uVar4 = uVar2;
  }
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar6,puVar5);
  lVar13 = *(long *)(lVar11 + -8);
  iVar3 = *(int *)(lVar13 + 0x54);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = iVar3 - 1;
  }
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  lVar15 = *(long *)(lVar23 + 0x40);
  if (iVar7 == 0) {
    lVar15 = lVar15 + 1;
  }
  lVar16 = *(long *)(lVar22 + 0x40);
  if (iVar8 == 0) {
    lVar16 = lVar16 + 1;
  }
  lVar18 = *(long *)(lVar13 + 0x40);
  if (iVar3 == 0) {
    lVar18 = lVar18 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar19 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar17 = (ulong)*(byte *)(lVar13 + 0x50);
  if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
    lVar18 = lVar18 + (lVar16 + uVar17 + (lVar15 + uVar19 & (uVar19 ^ 0xffffffffffffffff)) &
                      (uVar17 ^ 0xffffffffffffffff));
    uVar20 = (uint)lVar18;
    uVar4 = uVar20 << 3;
    if (uVar20 < 4) {
      uVar21 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
      if (0xff < uVar21) {
        if (uVar21 >> 0x10 == 0) {
          uVar21 = (uint)*(ushort *)((long)param_1 + lVar18);
        }
        else {
          uVar21 = *(uint *)((long)param_1 + lVar18);
        }
        goto LAB_1040c6b08;
      }
      if (1 < uVar21) goto LAB_1040c6b04;
    }
    else {
LAB_1040c6b04:
      uVar21 = (uint)*(byte *)((long)param_1 + lVar18);
LAB_1040c6b08:
      if (uVar21 != 0) {
        uVar2 = 0;
        if (uVar20 < 4) {
          uVar2 = uVar21 - 1 << (ulong)(uVar4 & 0x1f);
        }
        if (uVar20 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = 4;
          if (uVar20 < 4) {
            uVar14 = uVar20;
          }
          if ((int)uVar14 < 3) {
            if (uVar14 == 1) {
              uVar14 = (uint)(byte)*param_1;
            }
            else {
              uVar14 = (uint)(ushort)*param_1;
            }
          }
          else if (uVar14 == 3) {
            uVar14 = (uint)(uint3)*param_1;
          }
          else {
            uVar14 = *param_1;
          }
        }
        return uVar1 + (uVar14 | uVar2) + 1;
      }
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  if (uVar2 == uVar1) {
    pcVar12 = *(code **)(lVar23 + 0x30);
    lVar10 = lVar9;
    iVar8 = iVar7;
  }
  else {
    param_1 = (uint *)((ulong)(lVar15 + uVar19 + (long)param_1) & ~uVar19);
    if (uVar14 != uVar1) {
      uVar17 = (ulong)((long)param_1 + uVar17 + lVar16) & ~uVar17;
      (**(code **)(lVar13 + 0x30))(uVar17,iVar3,lVar11);
      iVar7 = (int)uVar17;
      goto LAB_1040c6bd4;
    }
    pcVar12 = *(code **)(lVar22 + 0x30);
  }
  (*pcVar12)(param_1,iVar8,lVar10);
  iVar7 = (int)param_1;
LAB_1040c6bd4:
  iVar8 = 0;
  if (iVar7 != 0) {
    iVar8 = iVar7 + -1;
  }
  return iVar8;
}



/* Entry: 1040c6fdc; end: 1040c6fef;  */

void FUN_1040c6fdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040c6ff0; end: 1040c70e3;  */

void FUN_1040c6ff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  uStack_68 = param_8;
  FUN_1040c70e4(0,&uStack_80);
  puVar3 = PTR___sSciTL_11034fea8;
  iVar2 = *(int *)(lVar4 + 0x38);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar2,1,1,lVar5);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,param_7,param_5,puVar3,PTR___s13AsyncIteratorSciTl_11034fb50);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x34));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Entry: 1040c70e4; end: 1040c70ef;  */

void FUN_1040c70e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7efa0c);
  return;
}



/* Entry: 1040c70f0; end: 1040c721f;  */

void FUN_1040c70f0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar3 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x28) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(param_2 + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0x50) = lVar3;
  lVar4 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  lVar4 = 0;
  __sSqMa(0,lVar3);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar3 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c7220,0,0);
  return;
}



/* Entry: 1040c7220; end: 1040c758b;  */

void FUN_1040c7220(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar11 = *(long *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  iVar5 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x38);
  lVar14 = (long)iVar5;
  *(int *)(unaff_x22 + 0x108) = iVar5;
  pcVar18 = *(code **)(lVar1 + 0x10);
  *(code **)(unaff_x22 + 0xb8) = pcVar18;
  (*pcVar18)(uVar12,lVar2 + lVar14,uVar9);
  (*pcVar18)(uVar10,uVar12,uVar9);
  pcVar18 = *(code **)(lVar11 + 0x30);
  *(code **)(unaff_x22 + 0xc0) = pcVar18;
  uVar12 = uVar10;
  (*pcVar18)(uVar10,1,uVar7);
  pcVar18 = *(code **)(lVar1 + 8);
  *(code **)(unaff_x22 + 200) = pcVar18;
  (*pcVar18)(uVar10,uVar9);
  puVar6 = PTR___sSciTL_11034fea8;
  if ((int)uVar12 == 1) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar7 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar10,uVar9,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    _swift_getAssociatedConformanceWitness
              (uVar10,uVar9,uVar7,puVar6,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar8 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd0) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1040c758c;
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x58);
    (*pcVar18)(lVar2 + lVar14,*(undefined8 *)(unaff_x22 + 0x80));
    (**(code **)(lVar1 + 0x38))(lVar2 + lVar14,1,1,uVar10);
    pcVar18 = *(code **)(unaff_x22 + 0xc0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(unaff_x22 + 0xb8))
              (uVar10,*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0x80));
    (*pcVar18)(uVar10,1,uVar9);
    if ((int)uVar10 == 1) {
      pcVar18 = *(code **)(unaff_x22 + 200);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
      (*pcVar18)(*(undefined8 *)(unaff_x22 + 0xb0),uVar10);
      (*pcVar18)(uVar9,uVar10);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
      (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x28));
      _swift_task_dealloc(uVar15);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar16);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar13);
      _swift_task_dealloc(uVar17);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001040c745c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x58);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar11 = *(long *)(unaff_x22 + 0x18);
    pcVar18 = *(code **)(lVar1 + 0x20);
    *(code **)(unaff_x22 + 0xe0) = pcVar18;
    (*pcVar18)(uVar7,*(undefined8 *)(unaff_x22 + 0x98),uVar9);
    uVar17 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar17;
    __sSmxycfCTj(uVar15,uVar16,uVar17);
    pcVar18 = *(code **)(lVar1 + 0x10);
    *(code **)(unaff_x22 + 0xf0) = pcVar18;
    (*pcVar18)(uVar10,uVar7,uVar9);
    __sSm6appendyy7ElementQznFTj(uVar10,uVar16,uVar17);
    (*pcVar18)(uVar12,uVar7,uVar9);
    puVar6 = PTR___sSciTL_11034fea8;
    uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar7 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar10,uVar9,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    _swift_getAssociatedConformanceWitness
              (uVar10,uVar9,uVar7,puVar6,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar8 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf8) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1040c786c;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar8,uVar9,uVar7,uVar10);
  return;
}



/* Entry: 1040c758c; end: 1040c75e7;  */

void FUN_1040c758c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040c75e8;
  }
  else {
    pcVar1 = FUN_1040c7bcc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040c75e8; end: 1040c786b;  */

void FUN_1040c75e8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x88);
  (**(code **)(unaff_x22 + 200))(uVar7,uVar8);
  (**(code **)(lVar1 + 0x20))(uVar7,uVar6,uVar8);
  pcVar10 = *(code **)(unaff_x22 + 0xc0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(unaff_x22 + 0xb8))
            (uVar8,*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0x80));
  (*pcVar10)(uVar8,1,uVar6);
  if ((int)uVar8 == 1) {
    pcVar10 = *(code **)(unaff_x22 + 200);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    (*pcVar10)(*(undefined8 *)(unaff_x22 + 0xb0),uVar8);
    (*pcVar10)(uVar6,uVar8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x28));
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040c773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar9 = *(long *)(unaff_x22 + 0x18);
  pcVar10 = *(code **)(lVar1 + 0x20);
  *(code **)(unaff_x22 + 0xe0) = pcVar10;
  (*pcVar10)(uVar7,*(undefined8 *)(unaff_x22 + 0x98),uVar6);
  uVar15 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar15;
  __sSmxycfCTj(uVar13,uVar14,uVar15);
  pcVar10 = *(code **)(lVar1 + 0x10);
  *(code **)(unaff_x22 + 0xf0) = pcVar10;
  (*pcVar10)(uVar8,uVar7,uVar6);
  __sSm6appendyy7ElementQznFTj(uVar8,uVar14,uVar15);
  (*pcVar10)(uVar11,uVar7,uVar6);
  puVar4 = PTR___sSciTL_11034fea8;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar6,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar8,uVar6,uVar7,puVar4,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1040c786c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar5,*(undefined8 *)(unaff_x22 + 0x90),uVar7,uVar8);
  return;
}



/* Entry: 1040c786c; end: 1040c78c7;  */

void FUN_1040c786c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x100) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040c78c8;
  }
  else {
    pcVar1 = FUN_1040c7c98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040c78c8; end: 1040c7bcb;  */

void FUN_1040c78c8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = uVar11;
  (**(code **)(unaff_x22 + 0xc0))(uVar11,1,uVar10);
  if ((int)uVar7 == 1) {
    pcVar14 = *(code **)(unaff_x22 + 200);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
    pcVar16 = *(code **)(*(long *)(unaff_x22 + 0x58) + 8);
    (*pcVar16)(*(undefined8 *)(unaff_x22 + 0x68),uVar10);
    (*pcVar16)(uVar7,uVar10);
    (*pcVar14)(uVar12,uVar2);
    (*pcVar14)(uVar11,uVar2);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(ulong *)(unaff_x22 + 0x68);
    lVar1 = *(long *)(unaff_x22 + 0x18);
    lVar15 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 0xe0))(uVar7,uVar11,uVar10);
    (**(code **)(lVar15 + *(int *)(lVar1 + 0x34)))(uVar8,uVar7);
    if ((uVar8 & 1) != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
      pcVar14 = *(code **)(unaff_x22 + 0xe0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
      lVar1 = *(long *)(unaff_x22 + 0x58);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x28);
      (**(code **)(unaff_x22 + 0xf0))(uVar11,uVar2,uVar12);
      __sSm6appendyy7ElementQznFTj(uVar11,uVar17,uVar7);
      (**(code **)(lVar1 + 8))(uVar10,uVar12);
      (*pcVar14)(uVar10,uVar2,uVar12);
      puVar6 = PTR___sSciTL_11034fea8;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar11 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar7,uVar10,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      _swift_getAssociatedConformanceWitness
                (uVar7,uVar10,uVar11,puVar6,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar9 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xf8) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_1040c786c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
                (plVar9,*(undefined8 *)(unaff_x22 + 0x90),uVar11,uVar7);
      return;
    }
    pcVar14 = *(code **)(unaff_x22 + 0xe0);
    pcVar18 = *(code **)(unaff_x22 + 200);
    lVar19 = (long)*(int *)(unaff_x22 + 0x108);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x58);
    lVar15 = *(long *)(unaff_x22 + 0x20);
    pcVar16 = *(code **)(lVar1 + 8);
    (*pcVar16)(*(undefined8 *)(unaff_x22 + 0x68),uVar11);
    (*pcVar16)(uVar7,uVar11);
    (*pcVar18)(uVar12,uVar2);
    (*pcVar18)(lVar15 + lVar19,uVar2);
    (*pcVar14)(lVar15 + lVar19,uVar10,uVar11);
    (**(code **)(lVar1 + 0x38))(lVar15 + lVar19,0,1,uVar11);
  }
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x28));
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001040c7bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c7bcc; end: 1040c7c97;  */

void FUN_1040c7bcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 200))(uVar5,*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001040c7c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c7c98; end: 1040c7d9f;  */

void FUN_1040c7c98(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
  pcVar11 = *(code **)(*(long *)(unaff_x22 + 0x58) + 8);
  (*pcVar11)(*(undefined8 *)(unaff_x22 + 0x68),uVar1);
  (**(code **)(lVar2 + 8))(uVar3,uVar10);
  (*pcVar11)(uVar8,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 200))(uVar4,*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001040c7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c7da0; end: 1040c7dff;  */

void FUN_1040c7da0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040c7e00;
  plVar3[3] = param_2;
  plVar3[4] = unaff_x20;
  plVar3[2] = param_1;
  lVar4 = *(long *)(param_2 + 0x18);
  plVar3[5] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[6] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[7] = uVar1;
  plVar3[8] = *(long *)(param_2 + 0x20);
  plVar3[9] = *(long *)(param_2 + 0x10);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness();
  plVar3[10] = lVar4;
  lVar5 = *(long *)(lVar4 + -8);
  plVar3[0xb] = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xc] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xd] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xe] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xf] = uVar1;
  lVar5 = 0;
  __sSqMa(0,lVar4);
  plVar3[0x10] = lVar5;
  lVar4 = *(long *)(lVar5 + -8);
  plVar3[0x11] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x12] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x13] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x14] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x15] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x16] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c7220,0,0);
  return;
}



/* Entry: 1040c7e00; end: 1040c7e3b;  */

void FUN_1040c7e00(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040c7e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040c7e3c; end: 1040c7f13;  */

void FUN_1040c7e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x10),
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
  plVar3[1] = (long)FUN_1040c7f14;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040c7f14; end: 1040c7f83;  */

void FUN_1040c7f14(void)

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
                    /* WARNING: Could not recover jumptable at 0x0001040c7f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040c7f84; end: 1040c8097;  */

void FUN_1040c7f84(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  lVar3 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  uVar5 = *(undefined8 *)(lVar3 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,lVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x8_00;
  (**(code **)(lVar6 + 0x10))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar3,lVar4,uVar5);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x34));
  uVar2 = puVar1[1];
  FUN_1040c6ff0(param_1,lVar3,*puVar1,uVar2,lVar4,*(undefined8 *)(param_2 + 0x18),uVar5,
                *(undefined8 *)(param_2 + 0x28));
  _swift_retain(uVar2);
  return;
}



/* Entry: 1040c8098; end: 1040c8127;  */

void FUN_1040c8098(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
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



/* Entry: 1040c8128; end: 1040c8137;  */

void FUN_1040c8128(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd6568,param_1);
  return;
}



/* Entry: 1040c8138; end: 1040c8167;  */

void FUN_1040c8138(long param_1)

{
  FUN_1040c7f84();
                    /* WARNING: Could not recover jumptable at 0x0001040c8164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040c8168; end: 1040c816f;  */

void FUN_1040c8168(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040c8170; end: 1040c81e7;  */

void FUN_1040c8170(long param_1)

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
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x30);
  }
  return;
}



/* Entry: 1040c81e8; end: 1040c8297;  */

long * FUN_1040c81e8(long *param_1,long *param_2,long param_3)

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



/* Entry: 1040c8298; end: 1040c82d7;  */

void FUN_1040c8298(long param_1,long param_2)

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



/* Entry: 1040c82d8; end: 1040c846b;  */

long FUN_1040c82d8(long param_1,long param_2,long param_3)

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



/* Entry: 1040c846c; end: 1040c855f;  */

uint * FUN_1040c846c(uint *param_1,uint param_2,long param_3)

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
      goto LAB_1040c84fc;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_1040c84fc:
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
      if (uVar9 != 0) goto LAB_1040c84fc;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001040c8538. Too many branches */
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



/* Entry: 1040c8560; end: 1040c86bf;  */

void FUN_1040c8560(int *param_1,uint param_2,uint param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0001040c8670. Too many branches */
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



/* Entry: 1040c86c0; end: 1040c86c7;  */

void FUN_1040c86c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040c86c8; end: 1040c87a3;  */

void FUN_1040c86c8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = 0x13f;
  uVar2 = uVar3;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar3,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___syycWV_11034f1c0 + 0x40;
    uVar2 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar3,uVar4,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    lVar1 = 0x13f;
    __sSqMa();
    if (uVar2 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,3,&lStack_48,param_1 + 0x30);
    }
  }
  return;
}



/* Entry: 1040c87a4; end: 1040c893f;  */

long * FUN_1040c87a4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  
  puVar2 = PTR___sSciTL_11034fea8;
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar9,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar15 = *(long *)(lVar3 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar7,uVar9,puVar2,PTR___s7ElementSciTl_11034fb58);
  lVar12 = *(long *)(lVar4 + -8);
  uVar5 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  lVar6 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar1 = (uint)uVar5 | *(uint *)(lVar15 + 0x50) & 0xf8;
  if ((((*(uint *)(lVar15 + 0x50) | *(uint *)(lVar12 + 0x50)) >> 0x14 & 1) == 0) &&
     (0xffffffffffffffe6 < ((-0x11 - uVar5) - (lVar13 + 7U & 0xfffffffffffffff8) | uVar5) - lVar6 &&
      uVar1 < 8)) {
    (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar3);
    puVar10 = (undefined8 *)((long)param_1 + lVar13 + 7 & 0xffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 + lVar13 + 7 & 0xfffffffffffffff8);
    uVar7 = puVar8[1];
    uVar9 = *puVar8;
    puVar11 = puVar10 + 2;
    puVar10[1] = puVar8[1];
    *puVar10 = uVar9;
    pcVar14 = *(code **)(lVar12 + 0x30);
    _swift_retain(uVar7);
    puVar10 = puVar8 + 2;
    (*pcVar14)(puVar10,1,lVar4);
    if ((int)puVar10 == 0) {
      (**(code **)(lVar12 + 0x10))(puVar11,puVar8 + 2,lVar4);
      (**(code **)(lVar12 + 0x38))(puVar11,0,1,lVar4);
    }
    else {
      _memcpy(puVar11,puVar8 + 2,lVar6);
    }
  }
  else {
    uVar5 = (ulong)(uVar1 | 7);
    lVar6 = *param_2;
    *param_1 = lVar6;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040c8940; end: 1040c8a2b;  */

void FUN_1040c8940(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar5,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar2 + -8);
  (**(code **)(lVar7 + 8))(param_1,lVar2);
  uVar8 = param_1 + *(long *)(lVar7 + 0x40) + 7U & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar8 + 8));
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar5,puVar1,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar2 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar8 + uVar6 + 0x10;
  uVar3 = uVar8 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x30))(uVar3,1,lVar2);
  if ((int)uVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040c8a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))(uVar8 & (uVar6 ^ 0xffffffffffffffff),lVar2);
  return;
}



/* Entry: 1040c8a2c; end: 1040c91eb;  */

long FUN_1040c8a2c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  puVar3 = PTR___sSciTL_11034fea8;
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,uVar8,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar4 + -8);
  (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar4);
  lVar4 = *(long *)(lVar9 + 0x40) + 7;
  puVar11 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar12 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar10 = puVar12[1];
  uVar14 = *puVar12;
  puVar11[1] = puVar12[1];
  *puVar11 = uVar14;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar8,puVar3,PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar4 + -8);
  uVar7 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar1 = uVar7 + 0x10 + (long)puVar11;
  uVar2 = uVar7 + 0x10 + (long)puVar12;
  pcVar13 = *(code **)(lVar9 + 0x30);
  _swift_retain(uVar10);
  uVar5 = uVar2 & (uVar7 ^ 0xffffffffffffffff);
  (*pcVar13)(uVar5,1,lVar4);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar9 + 0x10))
              (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar4);
    (**(code **)(lVar9 + 0x38))(uVar1 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar4);
  }
  else {
    lVar4 = *(long *)(lVar9 + 0x40);
    if (*(int *)(lVar9 + 0x54) == 0) {
      lVar4 = lVar4 + 1;
    }
    _memcpy(uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar4);
  }
  return param_1;
}



/* Entry: 1040c91ec; end: 1040c94a7;  */

void FUN_1040c91ec(uint *param_1,ulong param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  byte bVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  
  puVar6 = PTR___sSciTL_11034fea8;
  uVar19 = *(undefined8 *)(param_4 + 0x20);
  uVar20 = *(undefined8 *)(param_4 + 0x10);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar19,uVar20,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar21 = *(long *)(lVar7 + -8);
  uVar3 = *(uint *)(lVar21 + 0x54);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness(0,uVar19,uVar20,puVar6,PTR___s7ElementSciTl_11034fb58);
  lVar10 = *(long *)(lVar8 + -8);
  uVar9 = *(uint *)(lVar10 + 0x54);
  uVar2 = 0;
  if (uVar9 != 0) {
    uVar2 = uVar9 - 1;
  }
  uVar1 = uVar3;
  if (uVar3 <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar12 = *(long *)(lVar21 + 0x40);
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar15 = *(long *)(lVar10 + 0x40);
  if (uVar9 == 0) {
    lVar15 = lVar15 + 1;
  }
  lVar15 = (uVar11 + (lVar12 + 7U & 0xfffffffffffffff8) + 0x10 & (uVar11 ^ 0xffffffffffffffff)) +
           lVar15;
  uVar18 = (uint)lVar15;
  uVar16 = (uint)param_2;
  bVar14 = 0;
  if (uVar2 <= param_3 && param_3 - uVar2 != 0) {
    if (uVar18 < 4) {
      uVar4 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar18 << 3 & 0x1f)) >>
              (ulong)(uVar18 << 3 & 0x1f);
      bVar14 = 2;
      if (0xfffe < uVar4) {
        bVar14 = 4;
      }
      if (uVar4 < 0xff) {
        bVar14 = uVar4 != 0;
      }
    }
    else {
      bVar14 = 1;
    }
  }
  if (uVar2 < uVar16) {
    uVar16 = uVar16 + ~uVar2;
    if (uVar18 < 4) {
      iVar17 = (uVar16 >> (ulong)(uVar18 << 3 & 0x1f)) + 1;
      if (uVar18 != 0) {
        uVar2 = uVar16 & (-1 << (ulong)(uVar18 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar15);
        uVar5 = (undefined2)uVar2;
        if (uVar18 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar18 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)uVar16;
        }
      }
    }
    else {
      _bzero(param_1,lVar15);
      *param_1 = uVar16;
      iVar17 = 1;
    }
    if (bVar14 < 2) {
      if (bVar14 != 0) {
        *(char *)((long)param_1 + lVar15) = (char)iVar17;
      }
    }
    else if (bVar14 == 2) {
      *(short *)((long)param_1 + lVar15) = (short)iVar17;
    }
    else {
      *(int *)((long)param_1 + lVar15) = iVar17;
    }
  }
  else {
    if (bVar14 < 2) {
      if (bVar14 != 0) {
        *(undefined1 *)((long)param_1 + lVar15) = 0;
      }
    }
    else if (bVar14 == 2) {
      *(undefined2 *)((long)param_1 + lVar15) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar15) = 0;
    }
    if (uVar16 != 0) {
      if (uVar3 == uVar2) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
        lVar8 = lVar7;
        uVar9 = uVar3;
      }
      else {
        puVar13 = (ulong *)((long)param_1 + lVar12 + 7 & 0xfffffffffffffff8);
        if (-1 < (int)uVar1) {
          if (-1 < (int)uVar16) {
            *puVar13 = (ulong)(uVar16 - 1);
            return;
          }
          *puVar13 = (ulong)(uVar16 & 0x7fffffff);
          puVar13[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x38);
        param_1 = (uint *)((long)puVar13 + uVar11 + 0x10 & ~uVar11);
        param_2 = (ulong)(uVar16 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0001040c943c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar9,lVar8);
      return;
    }
  }
  return;
}



/* Entry: 1040c94a8; end: 1040c94b3;  */

void FUN_1040c94a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7efa60);
  return;
}



/* Entry: 1040c94b4; end: 1040c95cb;  */

void FUN_1040c94b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = param_10;
  lVar4 = 0;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_9;
  FUN_1040c95cc(0,&uStack_90);
  puVar3 = PTR___sSciTL_11034fea8;
  iVar2 = *(int *)(lVar4 + 0x48);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar6 = 0;
  _swift_getTupleTypeMetadata2(0,param_6,uVar5,0,0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1 + iVar2,1,1,lVar6);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness(0,param_8,param_5,puVar3,PTR___s13AsyncIteratorSciTl_11034fb50);
  (**(code **)(*(long *)(lVar6 + -8) + 0x20))(param_1,param_2,lVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x44));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Entry: 1040c95cc; end: 1040c95d7;  */

void FUN_1040c95cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7efac0);
  return;
}



/* Entry: 1040c95d8; end: 1040c97a7;  */

void FUN_1040c95d8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long lVar5;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar5 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x28) = lVar5;
  lVar4 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
  lVar4 = *(long *)(param_2 + 0x20);
  *(long *)(unaff_x22 + 0x40) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(param_2 + 0x10);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0x68) = lVar4;
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,lVar5,lVar4,0,0);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  lVar5 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
  lVar5 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  lVar5 = 0;
  __sSqMa(0,lVar4);
  *(long *)(unaff_x22 + 0xb0) = lVar5;
  lVar4 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar1;
  lVar4 = 0;
  __sSqMa(0,lVar2);
  *(long *)(unaff_x22 + 0xd8) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c97a8,0,0);
  return;
}



/* Entry: 1040c97a8; end: 1040c9b6f;  */

void FUN_1040c97a8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar12 = *(long *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  iVar7 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x48);
  lVar19 = (long)iVar7;
  *(int *)(unaff_x22 + 0x158) = iVar7;
  pcVar21 = *(code **)(lVar12 + 0x10);
  *(code **)(unaff_x22 + 0x108) = pcVar21;
  (*pcVar21)(uVar17,lVar2 + lVar19,uVar11);
  (*pcVar21)(uVar15,uVar17,uVar11);
  pcVar21 = *(code **)(lVar1 + 0x30);
  *(code **)(unaff_x22 + 0x110) = pcVar21;
  uVar17 = uVar15;
  (*pcVar21)(uVar15,1,uVar9);
  pcVar21 = *(code **)(lVar12 + 8);
  *(code **)(unaff_x22 + 0x118) = pcVar21;
  (*pcVar21)(uVar15,uVar11);
  puVar8 = PTR___sSciTL_11034fea8;
  if ((int)uVar17 == 1) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar15,uVar11,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    _swift_getAssociatedConformanceWitness
              (uVar15,uVar11,uVar9,puVar8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar10 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x120) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_1040c9b70;
    uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar12 = *(long *)(unaff_x22 + 0x78);
    (*pcVar21)(lVar2 + lVar19,*(undefined8 *)(unaff_x22 + 0xd8));
    (**(code **)(lVar12 + 0x38))(lVar2 + lVar19,1,1,uVar15);
    pcVar21 = *(code **)(unaff_x22 + 0x110);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(unaff_x22 + 0x108))
              (uVar15,*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xd8));
    (*pcVar21)(uVar15,1,uVar11);
    if ((int)uVar15 == 1) {
      pcVar21 = *(code **)(unaff_x22 + 0x118);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x10);
      (*pcVar21)(*(undefined8 *)(unaff_x22 + 0x100),uVar15);
      (*pcVar21)(uVar11,uVar15);
      lVar12 = 0;
      _swift_getTupleTypeMetadata2(0,uVar17,uVar9,0,0);
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar18,1,1,lVar12);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar9 = *(undefined8 *)(unaff_x22 + 200);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar20 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x100));
      _swift_task_dealloc(uVar15);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar20);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar17);
      _swift_task_dealloc(uVar22);
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar18);
      _swift_task_dealloc(uVar14);
      _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001040c9a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar12 = *(long *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar1 = *(long *)(unaff_x22 + 0x70);
    lVar2 = *(long *)(unaff_x22 + 0x78);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar19 = *(long *)(unaff_x22 + 0x30);
    lVar16 = *(long *)(unaff_x22 + 0x18);
    pcVar21 = *(code **)(lVar2 + 0x20);
    *(code **)(unaff_x22 + 0x130) = pcVar21;
    (*pcVar21)(uVar11,*(undefined8 *)(unaff_x22 + 0xe8),lVar1);
    uVar18 = *(undefined8 *)(lVar16 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x138) = uVar18;
    __sSmxycfCTj(uVar9,uVar17,uVar18);
    (**(code **)(lVar2 + 0x10))(lVar12,uVar11,lVar1);
    __sSm6appendyy7ElementQznFTj(lVar12 + *(int *)(lVar1 + 0x30),uVar17,uVar18);
    pcVar21 = *(code **)(lVar19 + 8);
    *(code **)(unaff_x22 + 0x140) = pcVar21;
    (*pcVar21)(lVar12,uVar15);
    puVar8 = PTR___sSciTL_11034fea8;
    uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar15,uVar11,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    _swift_getAssociatedConformanceWitness
              (uVar15,uVar11,uVar9,puVar8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar10 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x148) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_1040c9fa4;
    uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar10,uVar11,uVar9,uVar15);
  return;
}



/* Entry: 1040c9b70; end: 1040c9bcb;  */

void FUN_1040c9b70(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040c9bcc;
  }
  else {
    pcVar1 = FUN_1040ca3d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040c9bcc; end: 1040c9fa3;  */

void FUN_1040c9bcc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 200);
  lVar16 = *(long *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 0x10))
            (uVar14,*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xb0));
  (**(code **)(lVar16 + 0x30))(uVar14,1,uVar13);
  if ((int)uVar14 == 1) {
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
    pcVar17 = *(code **)(*(long *)(unaff_x22 + 0xb8) + 8);
    (*pcVar17)(*(undefined8 *)(unaff_x22 + 0xd0),uVar13);
    (*pcVar17)(uVar14,uVar13);
  }
  else {
    pcVar17 = *(code **)(unaff_x22 + 0x118);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar18 = *(long *)(unaff_x22 + 0xf0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    lVar6 = *(long *)(unaff_x22 + 0xe0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar7 = *(long *)(unaff_x22 + 0xb8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar16 = *(long *)(unaff_x22 + 0x70);
    lVar15 = *(long *)(unaff_x22 + 0x78);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar1 = *(long *)(unaff_x22 + 0x18);
    lVar2 = *(long *)(unaff_x22 + 0x20);
    pcVar21 = *(code **)(*(long *)(unaff_x22 + 0x90) + 0x20);
    (*pcVar21)(uVar22,*(undefined8 *)(unaff_x22 + 200),uVar24);
    iVar8 = *(int *)(lVar16 + 0x30);
    (**(code **)(lVar2 + *(int *)(lVar1 + 0x44)))(lVar18,uVar22);
    (**(code **)(lVar7 + 8))(uVar19,uVar13);
    (*pcVar17)(uVar20,uVar14);
    (*pcVar21)(lVar18 + iVar8,uVar22,uVar24);
    (**(code **)(lVar15 + 0x38))(lVar18,0,1,lVar16);
    (**(code **)(lVar6 + 0x20))(uVar20,lVar18,uVar14);
  }
  pcVar17 = *(code **)(unaff_x22 + 0x110);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(unaff_x22 + 0x108))
            (uVar14,*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xd8));
  (*pcVar17)(uVar14,1,uVar13);
  if ((int)uVar14 == 1) {
    pcVar17 = *(code **)(unaff_x22 + 0x118);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x10);
    (*pcVar17)(*(undefined8 *)(unaff_x22 + 0x100),uVar14);
    (*pcVar17)(uVar13,uVar14);
    lVar16 = 0;
    _swift_getTupleTypeMetadata2(0,uVar20,uVar19,0,0);
    (**(code **)(*(long *)(lVar16 + -8) + 0x38))(uVar22,1,1,lVar16);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar19 = *(undefined8 *)(unaff_x22 + 200);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x100));
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001040c9e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar16 = *(long *)(unaff_x22 + 0x80);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  lVar6 = *(long *)(unaff_x22 + 0x78);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x30);
  lVar15 = *(long *)(unaff_x22 + 0x18);
  pcVar17 = *(code **)(lVar6 + 0x20);
  *(code **)(unaff_x22 + 0x130) = pcVar17;
  (*pcVar17)(uVar13,*(undefined8 *)(unaff_x22 + 0xe8),lVar1);
  uVar22 = *(undefined8 *)(lVar15 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x138) = uVar22;
  __sSmxycfCTj(uVar19,uVar20,uVar22);
  (**(code **)(lVar6 + 0x10))(lVar16,uVar13,lVar1);
  __sSm6appendyy7ElementQznFTj(lVar16 + *(int *)(lVar1 + 0x30),uVar20,uVar22);
  pcVar17 = *(code **)(lVar7 + 8);
  *(code **)(unaff_x22 + 0x140) = pcVar17;
  (*pcVar17)(lVar16,uVar14);
  puVar9 = PTR___sSciTL_11034fea8;
  uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar19 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar14,uVar13,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar14,uVar13,uVar19,puVar9,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar10 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x148) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1040c9fa4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar10,*(undefined8 *)(unaff_x22 + 0xc0),uVar19,uVar14);
  return;
}



/* Entry: 1040c9fa4; end: 1040c9fff;  */

void FUN_1040c9fa4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x150) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x148));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040ca000;
  }
  else {
    pcVar1 = FUN_1040ca4d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040ca000; end: 1040ca3d3;  */

void FUN_1040ca000(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  code *pcVar26;
  undefined8 uVar27;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar22 = *(long *)(unaff_x22 + 0x90);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = uVar16;
  (**(code **)(lVar22 + 0x30))(uVar16,1,uVar14);
  if ((int)uVar8 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar22 = *(long *)(unaff_x22 + 0xb8);
    (**(code **)(unaff_x22 + 0x118))
              (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xd8));
    (**(code **)(lVar22 + 8))(uVar16,uVar8);
  }
  else {
    uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar19 = *(ulong *)(unaff_x22 + 0x38);
    lVar1 = *(long *)(unaff_x22 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar23 = *(long *)(unaff_x22 + 0x18);
    pcVar12 = *(code **)(lVar22 + 0x20);
    (*pcVar12)(uVar17,uVar16,uVar14);
    (**(code **)(lVar1 + *(int *)(lVar23 + 0x44)))(uVar19,uVar17);
    __sSQ2eeoiySbx_xtFZTj(uVar19,uVar20,uVar8,*(undefined8 *)(lVar23 + 0x30));
    if ((uVar19 & 1) != 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
      pcVar12 = *(code **)(unaff_x22 + 0x140);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar22 = *(long *)(unaff_x22 + 0x90);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x28);
      (**(code **)(lVar22 + 0x10))(uVar14,uVar17,uVar18);
      __sSm6appendyy7ElementQznFTj(uVar14,uVar20,uVar8);
      (*pcVar12)(uVar16,uVar24);
      (**(code **)(lVar22 + 8))(uVar17,uVar18);
      puVar7 = PTR___sSciTL_11034fea8;
      uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar16 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar8,uVar14,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      _swift_getAssociatedConformanceWitness
                (uVar8,uVar14,uVar16,puVar7,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar9 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x148) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_1040c9fa4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
                (plVar9,*(undefined8 *)(unaff_x22 + 0xc0),uVar16,uVar8);
      return;
    }
    pcVar26 = *(code **)(unaff_x22 + 0x118);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar1 = *(long *)(unaff_x22 + 0x70);
    lVar2 = *(long *)(unaff_x22 + 0x78);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar22 = *(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x158);
    lVar23 = *(long *)(unaff_x22 + 0x30);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
    (*pcVar26)(*(undefined8 *)(unaff_x22 + 0x100),uVar17);
    (*pcVar26)(lVar22,uVar17);
    iVar5 = *(int *)(lVar1 + 0x30);
    (**(code **)(lVar23 + 0x20))(lVar22,uVar14,uVar8);
    (*pcVar12)(lVar22 + iVar5,uVar16,uVar20);
    (**(code **)(lVar2 + 0x38))(lVar22,0,1,lVar1);
  }
  pcVar12 = *(code **)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  lVar15 = *(long *)(unaff_x22 + 0x80);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar23 = *(long *)(unaff_x22 + 0x70);
  lVar22 = *(long *)(unaff_x22 + 0x48);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  lVar25 = *(long *)(unaff_x22 + 0x10);
  lVar10 = 0;
  _swift_getTupleTypeMetadata2(0,uVar16,uVar20,0,0);
  iVar5 = *(int *)(lVar10 + 0x30);
  (*pcVar12)(lVar15,uVar8,lVar23);
  iVar6 = *(int *)(lVar23 + 0x30);
  (**(code **)(lVar2 + 0x20))(lVar25,lVar15,uVar16);
  (**(code **)(lVar22 + 0x20))(lVar25 + iVar5,uVar17,uVar20);
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar25,0,1,lVar10);
  (**(code **)(lVar1 + 8))(lVar15 + iVar6,uVar14);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar16 = *(undefined8 *)(unaff_x22 + 200);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x100));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001040ca3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040ca3d4; end: 1040ca4d3;  */

void FUN_1040ca3d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0x118))(uVar7,*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001040ca4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040ca4d4; end: 1040ca5fb;  */

void FUN_1040ca4d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar6 = *(long *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(lVar6 + 8))(uVar15,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0x118))(uVar7,*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001040ca5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040ca5fc; end: 1040ca65b;  */

void FUN_1040ca5fc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1040ca65c;
  plVar4[3] = param_2;
  plVar4[4] = unaff_x20;
  plVar4[2] = param_1;
  lVar6 = *(long *)(param_2 + 0x18);
  plVar4[5] = lVar6;
  lVar5 = *(long *)(lVar6 + -8);
  plVar4[6] = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[7] = uVar1;
  lVar5 = *(long *)(param_2 + 0x20);
  plVar4[8] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[9] = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar1;
  plVar4[0xb] = *(long *)(param_2 + 0x28);
  plVar4[0xc] = *(long *)(param_2 + 0x10);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness();
  plVar4[0xd] = lVar5;
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,lVar6,lVar5,0,0);
  plVar4[0xe] = lVar2;
  lVar6 = *(long *)(lVar2 + -8);
  plVar4[0xf] = lVar6;
  uVar1 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x10] = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x11] = uVar1;
  lVar6 = *(long *)(lVar5 + -8);
  plVar4[0x12] = lVar6;
  uVar1 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x13] = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x14] = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x15] = uVar1;
  lVar6 = 0;
  __sSqMa(0,lVar5);
  plVar4[0x16] = lVar6;
  lVar5 = *(long *)(lVar6 + -8);
  plVar4[0x17] = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x18] = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x19] = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x1a] = uVar1;
  lVar5 = 0;
  __sSqMa(0,lVar2);
  plVar4[0x1b] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x1c] = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x1d] = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x1e] = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x1f] = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x20] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c97a8,0,0);
  return;
}



/* Entry: 1040ca65c; end: 1040ca697;  */

void FUN_1040ca65c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040ca694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040ca698; end: 1040ca76f;  */

void FUN_1040ca698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  plVar3[1] = (long)FUN_1040ca770;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040ca770; end: 1040ca7df;  */

void FUN_1040ca770(void)

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
                    /* WARNING: Could not recover jumptable at 0x0001040ca7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040ca7e0; end: 1040ca8fb;  */

void FUN_1040ca7e0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 auStack_60 [2];
  
  lVar8 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  lVar7 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar9 = *(undefined8 *)(lVar7 + 0x28);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar8,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x8_00;
  (**(code **)(lVar10 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar7,lVar8,uVar9);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x44));
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar7 + -0x10) = *(undefined8 *)(param_2 + 0x38);
  FUN_1040c94b4(param_1,lVar7,uVar2,uVar5,lVar8,uVar3,uVar6,uVar9,uVar4);
  _swift_retain(uVar5);
  return;
}



/* Entry: 1040ca8fc; end: 1040ca98b;  */

void FUN_1040ca8fc(undefined8 param_1,long param_2)

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



/* Entry: 1040ca98c; end: 1040ca99b;  */

void FUN_1040ca98c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd6668,param_1);
  return;
}


