/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104156558; end: 1041565e7;  */

void FUN_104156558(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long unaff_x22;
  long lVar10;
  
  plVar9 = (long *)**(long **)(unaff_x22 + 0x18);
  plVar8 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1041565ac;
  plVar8[2] = *(long *)(unaff_x22 + 0x10);
  plVar8[3] = (long)plVar9;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar10 = *plVar9;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x68),*(undefined8 *)(lVar10 + 0x50),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar8[4] = lVar3;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x70),*(undefined8 *)(lVar10 + 0x58),puVar2,puVar1);
  plVar8[5] = lVar4;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x78),*(undefined8 *)(lVar10 + 0x60),puVar2,puVar1);
  plVar8[6] = lVar5;
  lVar10 = 0xff;
  __sSqMa(0xff,lVar5);
  plVar8[7] = lVar10;
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,lVar3,lVar4,lVar10,0,0);
  plVar8[8] = lVar5;
  lVar3 = 0;
  __sSqMa(0,lVar5);
  plVar8[9] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar8[10] = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xb] = uVar6;
  lVar3 = *(long *)(lVar5 + -8);
  plVar8[0xc] = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xd] = uVar7;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xe] = uVar7;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xf] = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0x10] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104156158,0,0);
  return;
}



/* Entry: 1041565e8; end: 104156637;  */

void FUN_1041565e8(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104156638;
  plVar1[2] = param_1;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104156558,0,0);
  return;
}



/* Entry: 104156638; end: 104156673;  */

void FUN_104156638(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104156670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104156674; end: 10415674b;  */

void FUN_104156674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  plVar3[1] = (long)FUN_10415674c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 10415674c; end: 1041567bb;  */

void FUN_10415674c(void)

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
                    /* WARNING: Could not recover jumptable at 0x0001041567b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1041567bc; end: 104156803;  */

void FUN_1041567bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_104155e14();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Entry: 104156804; end: 104156893;  */

void FUN_104156804(undefined8 param_1,long param_2)

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



/* Entry: 104156894; end: 1041568ab;  */

void FUN_104156894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd9510,param_1);
  return;
}



/* Entry: 1041568ac; end: 104156957;  */

void FUN_1041568ac(long param_1)

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



/* Entry: 104156958; end: 104156a8b;  */

long * FUN_104156958(long *param_1,long *param_2,long param_3)

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



/* Entry: 104156a8c; end: 104156b0b;  */

void FUN_104156a8c(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000104156b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(uVar2 + *(long *)(lVar4 + 0x40) + uVar1 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 104156b0c; end: 104156dab;  */

long FUN_104156b0c(long param_1,long param_2,long param_3)

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



/* Entry: 104156dac; end: 104156f5b;  */

uint * FUN_104156dac(uint *param_1,uint param_2,long param_3)

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
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_104156e98;
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
      goto LAB_104156e30;
    }
    if (1 < uVar9) goto LAB_104156e2c;
  }
  else {
LAB_104156e2c:
    uVar9 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_104156e30:
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
LAB_104156e98:
  if (uVar4 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x000104156eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar14 + 0x30))(param_1,uVar4,*(long *)(param_3 + 0x10));
    return param_1;
  }
  puVar7 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar8);
  if (uVar5 != uVar3) {
    puVar7 = (uint *)((long)puVar7 + uVar15 + *(long *)(lVar12 + 0x40) & ~uVar15);
                    /* WARNING: Could not recover jumptable at 0x000104156f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x30))(puVar7,uVar6,*(long *)(param_3 + 0x20));
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x000104156edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x30))();
  return puVar7;
}



/* Entry: 104156f5c; end: 1041571a3;  */

void FUN_104156f5c(uint *param_1,undefined8 param_2,uint param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x00010415714c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar10,lVar12);
      return;
    }
  }
  return;
}



/* Entry: 1041571a4; end: 1041571c7;  */

void FUN_1041571a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f2410);
  return;
}



/* Entry: 1041571c8; end: 10415720b;  */

void FUN_1041571c8(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x80);
  return;
}



/* Entry: 10415720c; end: 104157217;  */

void FUN_10415720c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f24b8);
  return;
}



/* Entry: 104157218; end: 10415729f;  */

void FUN_104157218(long param_1)

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
  func_0x00010415a7b8();
  if (plVar2 < (undefined1 *)0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&lStack_50,param_1 + 0x40);
  }
  return;
}



/* Entry: 1041572a0; end: 10415a7ab;  */

long * FUN_1041572a0(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  ulong uVar43;
  long lVar44;
  code *pcVar45;
  long lVar46;
  
  puVar15 = PTR___sSciTL_11034fea8;
  puVar14 = PTR___s7ElementSciTl_11034fb58;
  lVar19 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar44 = *(long *)(lVar19 + -8);
  lVar23 = *(long *)(lVar9 + -8);
  uVar11 = *(uint *)(lVar23 + 0x50);
  uVar26 = (ulong)uVar11 & 0xff;
  uVar40 = *(long *)(lVar44 + 0x40) + uVar26;
  lVar27 = *(long *)(lVar23 + 0x40);
  lVar29 = *(long *)(lVar10 + -8);
  uVar28 = *(uint *)(lVar29 + 0x50);
  uVar30 = (ulong)uVar28 & 0xff;
  lVar24 = *(long *)(lVar29 + 0x40);
  if (*(int *)(lVar29 + 0x54) == 0) {
    lVar24 = lVar24 + 1;
  }
  uVar3 = lVar24 + (lVar27 + uVar30 + (uVar40 & (uVar26 ^ 0xffffffffffffffff)) &
                   (uVar30 ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar19,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar36 = *(long *)(lVar16 + -8);
  uVar32 = *(uint *)(lVar36 + 0x50);
  uVar43 = (ulong)uVar32 & 0xff;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar9,puVar15,puVar14);
  lVar46 = *(long *)(lVar17 + -8);
  uVar12 = *(uint *)(lVar46 + 0x50);
  uVar21 = (ulong)uVar12 & 0xff;
  uVar41 = uVar21 | 7;
  lVar18 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar15,puVar14);
  lVar39 = *(long *)(lVar18 + -8);
  uVar22 = (ulong)*(uint *)(lVar39 + 0x50) & 0xff;
  uVar25 = uVar22 | 7;
  uVar31 = uVar21 | uVar43 | uVar22;
  lVar33 = *(long *)(lVar36 + 0x40);
  if (*(int *)(lVar36 + 0x54) == 0) {
    lVar33 = lVar33 + 1;
  }
  uVar4 = lVar33 + uVar41 + (uVar43 + 8 & (uVar43 ^ 0xffffffffffffffff));
  uVar1 = uVar21 + 8;
  lVar35 = *(long *)(lVar46 + 0x40);
  if (*(int *)(lVar46 + 0x54) == 0) {
    lVar35 = lVar35 + 1;
  }
  lVar5 = lVar35 + uVar25 + (uVar1 & (uVar21 ^ 0xffffffffffffffff));
  uVar2 = uVar22 + 8;
  lVar34 = *(long *)(lVar39 + 0x40);
  if (*(int *)(lVar39 + 0x54) == 0) {
    lVar34 = lVar34 + 1;
  }
  lVar6 = lVar34 + (uVar2 & (uVar22 ^ 0xffffffffffffffff)) +
          (lVar5 + (uVar4 & (uVar41 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff));
  uVar7 = lVar6 + ((ulong)((uint)uVar31 & 0xf8 ^ 0x1f8) & uVar31 + 8);
  uVar8 = uVar7;
  if (uVar7 <= uVar3) {
    uVar8 = uVar3;
  }
  uVar3 = (uVar7 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar8) {
    uVar3 = uVar8;
  }
  uVar28 = uVar28 | uVar11;
  uVar31 = uVar31 | ((uVar28 | *(uint *)(lVar44 + 0x50)) & 0xf8 | 7);
  if (((uVar31 != 7) ||
      (((uVar28 | uVar32 | uVar12 | *(uint *)(lVar39 + 0x50) | *(uint *)(lVar44 + 0x50)) >> 0x14 & 1
       ) != 0)) || (0x18 < (uVar3 & 0xfffffffffffffff8) + 0x10)) {
    lVar27 = *(long *)param_2;
    *param_1 = lVar27;
    _swift_retain();
    return (long *)(lVar27 + (uVar31 + 0x10 & (uVar31 ^ 0xffffffffffffffff)));
  }
  bVar13 = *(byte *)((long)param_2 + uVar3);
  uVar28 = (uint)bVar13;
  if (2 < bVar13) {
    uVar32 = (uint)uVar3;
    uVar11 = 4;
    if (uVar32 < 4) {
      uVar11 = uVar32;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_104157588;
      uVar28 = (uint)(byte)*param_2;
    }
    else if (uVar11 == 2) {
      uVar28 = (uint)(ushort)*param_2;
    }
    else if (uVar11 == 3) {
      uVar28 = (uint)(uint3)*param_2;
    }
    else {
      uVar28 = *param_2;
    }
    if (uVar32 < 4) {
      uVar28 = (uVar28 | bVar13 - 3 << (ulong)((uVar32 & 3) << 3)) + 3;
    }
    else {
      uVar28 = uVar28 + 3;
    }
  }
LAB_104157588:
  uVar31 = ~uVar43;
  uVar41 = ~uVar41;
  uVar21 = ~uVar21;
  uVar25 = ~uVar25;
  uVar22 = ~uVar22;
  if (uVar28 == 2) {
    *param_1 = *(long *)param_2;
    puVar37 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar42 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar37 = *puVar42;
    uVar40 = (long)puVar37 + uVar43 + 8;
    uVar26 = (long)puVar42 + uVar43 + 8;
    pcVar45 = *(code **)(lVar36 + 0x30);
    _swift_retain();
    uVar30 = uVar26 & uVar31;
    (*pcVar45)(uVar30,1,lVar16);
    if ((int)uVar30 == 0) {
      (**(code **)(lVar36 + 0x10))(uVar40 & uVar31,uVar26 & uVar31,lVar16);
      (**(code **)(lVar36 + 0x38))(uVar40 & uVar31,0,1,lVar16);
    }
    else {
      _memcpy(uVar40 & uVar31,uVar26 & uVar31,lVar33);
    }
    puVar38 = (undefined8 *)(uVar4 + (long)puVar37 & uVar41);
    puVar37 = (undefined8 *)(uVar4 + (long)puVar42 & uVar41);
    *puVar38 = *puVar37;
    uVar40 = uVar1 + (long)puVar38;
    uVar1 = uVar1 + (long)puVar37;
    uVar26 = uVar1 & uVar21;
    (**(code **)(lVar46 + 0x30))(uVar26,1,lVar17);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar46 + 0x10))(uVar40 & uVar21,uVar1 & uVar21,lVar17);
      (**(code **)(lVar46 + 0x38))(uVar40 & uVar21,0,1,lVar17);
    }
    else {
      _memcpy(uVar40 & uVar21,uVar1 & uVar21,lVar35);
    }
    puVar42 = (undefined8 *)(lVar5 + (long)puVar38 & uVar25);
    puVar37 = (undefined8 *)(lVar5 + (long)puVar37 & uVar25);
    *puVar42 = *puVar37;
    uVar40 = uVar2 + (long)puVar42;
    uVar2 = uVar2 + (long)puVar37;
    uVar26 = uVar2 & uVar22;
    (**(code **)(lVar39 + 0x30))(uVar26,1,lVar18);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar39 + 0x10))(uVar40 & uVar22,uVar2 & uVar22,lVar18);
      (**(code **)(lVar39 + 0x38))(uVar40 & uVar22,0,1,lVar18);
    }
    else {
      _memcpy(uVar40 & uVar22,uVar2 & uVar22,lVar34);
    }
    *(undefined8 *)(((long)param_1 + 0xfU | 7) + lVar6 & 0xffffffffffffff8) =
         *(undefined8 *)(((ulong)((long)param_2 + 0xf) | 7) + lVar6 & 0xffffffffffffff8);
    uVar20 = 2;
  }
  else {
    if (uVar28 != 1) {
      if (uVar28 == 0) {
        uVar22 = ~uVar30;
        (**(code **)(lVar44 + 0x10))(param_1,param_2,lVar19);
        uVar21 = uVar40 + (long)param_1 & ~uVar26;
        uVar40 = (ulong)(uVar40 + (long)param_2) & ~uVar26;
        (**(code **)(lVar23 + 0x10))(uVar21,uVar40,lVar9);
        lVar27 = lVar27 + uVar30;
        uVar21 = uVar21 + lVar27;
        uVar40 = uVar40 + lVar27;
        uVar26 = uVar40 & uVar22;
        (**(code **)(lVar29 + 0x30))(uVar26,1,lVar10);
        if ((int)uVar26 == 0) {
          (**(code **)(lVar29 + 0x10))(uVar21 & uVar22,uVar40 & uVar22,lVar10);
          (**(code **)(lVar29 + 0x38))(uVar21 & uVar22,0,1,lVar10);
          *(undefined1 *)((long)param_1 + uVar3) = 0;
        }
        else {
          _memcpy(uVar21 & uVar22,uVar40 & uVar22,lVar24);
          *(undefined1 *)((long)param_1 + uVar3) = 0;
        }
      }
      else {
        _memcpy(param_1,param_2,uVar3 + 1);
      }
      goto LAB_104157a4c;
    }
    *param_1 = *(long *)param_2;
    puVar42 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar37 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar42 = *puVar37;
    uVar40 = (long)puVar42 + uVar43 + 8;
    uVar26 = (long)puVar37 + uVar43 + 8;
    pcVar45 = *(code **)(lVar36 + 0x30);
    _swift_retain();
    uVar30 = uVar26 & uVar31;
    (*pcVar45)(uVar30,1,lVar16);
    if ((int)uVar30 == 0) {
      (**(code **)(lVar36 + 0x10))(uVar40 & uVar31,uVar26 & uVar31,lVar16);
      (**(code **)(lVar36 + 0x38))(uVar40 & uVar31,0,1,lVar16);
    }
    else {
      _memcpy(uVar40 & uVar31,uVar26 & uVar31,lVar33);
    }
    puVar42 = (undefined8 *)(uVar4 + (long)puVar42 & uVar41);
    puVar37 = (undefined8 *)(uVar4 + (long)puVar37 & uVar41);
    *puVar42 = *puVar37;
    uVar40 = uVar1 + (long)puVar42;
    uVar1 = uVar1 + (long)puVar37;
    uVar26 = uVar1 & uVar21;
    (**(code **)(lVar46 + 0x30))(uVar26,1,lVar17);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar46 + 0x10))(uVar40 & uVar21,uVar1 & uVar21,lVar17);
      (**(code **)(lVar46 + 0x38))(uVar40 & uVar21,0,1,lVar17);
    }
    else {
      _memcpy(uVar40 & uVar21,uVar1 & uVar21,lVar35);
    }
    puVar42 = (undefined8 *)(lVar5 + (long)puVar42 & uVar25);
    puVar37 = (undefined8 *)(lVar5 + (long)puVar37 & uVar25);
    *puVar42 = *puVar37;
    uVar40 = uVar2 + (long)puVar42;
    uVar2 = uVar2 + (long)puVar37;
    uVar26 = uVar2 & uVar22;
    (**(code **)(lVar39 + 0x30))(uVar26,1,lVar18);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar39 + 0x10))(uVar40 & uVar22,uVar2 & uVar22,lVar18);
      (**(code **)(lVar39 + 0x38))(uVar40 & uVar22,0,1,lVar18);
    }
    else {
      _memcpy(uVar40 & uVar22,uVar2 & uVar22,lVar34);
    }
    uVar20 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar3) = uVar20;
LAB_104157a4c:
  *(undefined8 *)((long)param_1 + uVar3 + 8 & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)((long)param_2 + uVar3 + 8) & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 10415a7ac; end: 10415a7c3;  */

void FUN_10415a7ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e7f252c);
  return;
}



/* Entry: 10415a7c4; end: 10415e1f3;  */

void FUN_10415a7c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  uVar9 = *(ulong *)(param_1 + 0x10);
  lVar4 = 0x13f;
  _swift_checkMetadataState();
  if (uVar9 < 0x40) {
    lVar12 = *(long *)(lVar4 + -8);
    uVar9 = *(ulong *)(param_1 + 0x18);
    lVar5 = 0x13f;
    _swift_checkMetadataState();
    if (uVar9 < 0x40) {
      uVar11 = *(ulong *)(param_1 + 0x20);
      lVar6 = 0x13f;
      uVar9 = uVar11;
      __sSqMa();
      if (uVar9 < 0x40) {
        _swift_getTupleTypeLayout3
                  (auStack_98,lVar12 + 0x40,*(long *)(lVar5 + -8) + 0x40,
                   *(long *)(lVar6 + -8) + 0x40);
        uVar13 = *(undefined8 *)(param_1 + 0x28);
        uVar7 = 0xff;
        puStack_78 = auStack_98;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar13,lVar4,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        uVar2 = *(undefined8 *)(param_1 + 0x38);
        plVar10 = &lStack_110;
        lVar12 = 0x13f;
        lStack_110 = lVar4;
        lStack_108 = lVar5;
        uStack_100 = uVar11;
        uStack_f8 = uVar7;
        uStack_f0 = uVar13;
        uStack_e8 = uVar1;
        uStack_e0 = uVar2;
        FUN_10415e5f0();
        if (plVar10 < (long *)0x40) {
          lVar6 = *(long *)(lVar12 + -8);
          uVar7 = 0xff;
          _swift_getAssociatedTypeWitness
                    (0xff,uVar1,lVar5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
          plVar10 = &lStack_110;
          lVar12 = 0x13f;
          lStack_110 = lVar4;
          lStack_108 = lVar5;
          uStack_100 = uVar11;
          uStack_f8 = uVar7;
          uStack_f0 = uVar13;
          uStack_e8 = uVar1;
          uStack_e0 = uVar2;
          FUN_10415e5f0();
          if (plVar10 < (long *)0x40) {
            uVar7 = 0xff;
            _swift_getAssociatedTypeWitness
                      (0xff,uVar2,uVar11,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
            plVar10 = &lStack_110;
            lVar8 = 0x13f;
            lStack_110 = lVar4;
            lStack_108 = lVar5;
            uStack_100 = uVar11;
            uStack_f8 = uVar7;
            uStack_f0 = uVar13;
            uStack_e8 = uVar1;
            uStack_e0 = uVar2;
            FUN_10415e5f0();
            if (plVar10 < (long *)0x40) {
              lVar4 = *(long *)(lVar12 + -8);
              lVar5 = *(long *)(lVar8 + -8);
              _swift_getTupleTypeLayout3(auStack_d8,lVar6 + 0x40,lVar4 + 0x40,lVar5 + 0x40);
              puVar3 = PTR___sBoWV_11034d678;
              _swift_getTupleTypeLayout2(auStack_b8,PTR___sBoWV_11034d678 + 0x40,auStack_d8);
              puStack_70 = auStack_b8;
              _swift_getTupleTypeLayout3(auStack_150,lVar6 + 0x40,lVar4 + 0x40,lVar5 + 0x40);
              _swift_getTupleTypeLayout3(auStack_130,puVar3 + 0x40,auStack_150,&UNK_10dcd9668);
              puStack_68 = auStack_130;
              _swift_initEnumMetadataMultiPayload(param_1,0,3,&puStack_78);
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10415e1f4; end: 10415e1f7;  */

void FUN_10415e1f4(void)

{
  return;
}



/* Entry: 10415e1f8; end: 10415e5ef;  */

void FUN_10415e1f8(uint *param_1,uint param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar4 = PTR___sSciTL_11034fea8;
  puVar3 = PTR___s7ElementSciTl_11034fb58;
  if (param_2 < 3) {
    lVar7 = *(long *)(param_3 + 0x10);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),lVar7,PTR___sSciTL_11034fea8,
               PTR___s7ElementSciTl_11034fb58);
    lVar14 = *(long *)(lVar5 + -8);
    bVar1 = *(byte *)(lVar14 + 0x50);
    lVar13 = *(long *)(param_3 + 0x18);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar13,puVar4,puVar3);
    lVar15 = *(long *)(lVar5 + -8);
    bVar2 = *(byte *)(lVar15 + 0x50);
    uVar11 = (ulong)bVar2;
    lVar12 = *(long *)(param_3 + 0x20);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar12,puVar4,puVar3);
    lVar8 = *(long *)(lVar5 + -8);
    uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
    bVar2 = bVar2 | bVar1 | *(byte *)(lVar8 + 0x50);
    lVar5 = (*(long *)(lVar8 + 0x40) - (-uVar9 - 9 | uVar9)) +
            ((ulong)(bVar2 & 0xf8 ^ 0x1f8) & (ulong)bVar2 + 8);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    lVar5 = lVar5 - ((((-uVar11 - 9 | uVar11) - (*(long *)(lVar15 + 0x40) + (uVar9 | 7))) -
                     (ulong)(*(int *)(lVar15 + 0x54) == 0)) +
                     (((-(ulong)bVar1 - 9 | (ulong)bVar1) -
                      ((uVar11 | 7) + *(long *)(lVar14 + 0x40))) -
                      (ulong)(*(int *)(lVar14 + 0x54) == 0) | uVar11 | 7) + 1 | uVar9 | 7);
    uVar9 = (lVar5 + 5U & 0xfffffffffffffff8) + 8;
    uVar11 = lVar5 - 2;
    lVar8 = *(long *)(lVar13 + -8);
    uVar10 = (ulong)*(byte *)(lVar8 + 0x50);
    lVar12 = *(long *)(lVar12 + -8);
    lVar5 = *(long *)(lVar12 + 0x40);
    if (*(int *)(lVar12 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    uVar10 = lVar5 + ((*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar10 &
                      (uVar10 ^ 0xffffffffffffffff)) +
                      *(long *)(lVar8 + 0x40) + (ulong)*(byte *)(lVar12 + 0x50) &
                     ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    *(char *)((long)param_1 + uVar9) = (char)param_2;
  }
  else {
    lVar8 = *(long *)(param_3 + 0x18);
    lVar12 = *(long *)(lVar8 + -8);
    uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
    lVar7 = *(long *)(param_3 + 0x20);
    lVar13 = *(long *)(lVar7 + -8);
    lVar5 = *(long *)(lVar13 + 0x40);
    if (*(int *)(lVar13 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    uVar9 = lVar5 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar9 &
                     (uVar9 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar12 + 0x40) + (ulong)*(byte *)(lVar13 + 0x50) &
                    ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    lVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),PTR___sSciTL_11034fea8,
               PTR___s7ElementSciTl_11034fb58);
    lVar12 = *(long *)(lVar5 + -8);
    bVar1 = *(byte *)(lVar12 + 0x50);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar8,puVar4,puVar3);
    lVar8 = *(long *)(lVar5 + -8);
    bVar2 = *(byte *)(lVar8 + 0x50);
    uVar10 = (ulong)bVar2;
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar7,puVar4,puVar3);
    lVar7 = *(long *)(lVar5 + -8);
    uVar11 = (ulong)*(byte *)(lVar7 + 0x50);
    bVar2 = bVar2 | bVar1 | *(byte *)(lVar7 + 0x50);
    lVar5 = (*(long *)(lVar7 + 0x40) - (-uVar11 - 9 | uVar11)) +
            ((ulong)(bVar2 & 0xf8 ^ 0x1f8) & (ulong)bVar2 + 8);
    if (*(int *)(lVar7 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    lVar5 = lVar5 - ((((-uVar10 - 9 | uVar10) - ((uVar11 | 7) + *(long *)(lVar8 + 0x40))) -
                     (ulong)(*(int *)(lVar8 + 0x54) == 0)) +
                     (((-(ulong)bVar1 - 9 | (ulong)bVar1) -
                      ((uVar10 | 7) + *(long *)(lVar12 + 0x40))) -
                      (ulong)(*(int *)(lVar12 + 0x54) == 0) | uVar10 | 7) + 1 | uVar11 | 7);
    uVar11 = lVar5 - 2;
    if (uVar11 <= uVar9) {
      uVar11 = uVar9;
    }
    uVar9 = (lVar5 + 5U & 0xfffffffffffffff8) + 8;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    param_2 = param_2 - 3;
    uVar6 = (uint)uVar9;
    if (uVar6 < 4) {
      *(char *)((long)param_1 + uVar9) = (char)(param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + '\x03';
      if (uVar6 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar9) = 3;
    }
    if (3 < uVar6) {
      uVar6 = 4;
    }
    _bzero(param_1);
    if ((int)uVar6 < 3) {
      if (uVar6 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar6 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 10415e5f0; end: 10415e603;  */

void FUN_10415e5f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f260c);
  return;
}



/* Entry: 10415e604; end: 10415e67b;  */

void FUN_10415e604(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dcd96a0;
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  __sSqMa();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&puStack_30,param_1 + 0x48);
  }
  return;
}



/* Entry: 10415e67c; end: 10415e787;  */

long * FUN_10415e67c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_3 + 0x28);
  lVar7 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  lVar4 = *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  if (((uint)uVar6 < 8 && (*(uint *)(lVar7 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar6 - 9 | uVar6) - lVar4) {
    *param_1 = *param_2;
    uVar1 = (long)param_1 + uVar6 + 8;
    uVar2 = (long)param_2 + uVar6 + 8;
    uVar3 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
    (**(code **)(lVar7 + 0x30))(uVar3,1,lVar5);
    if ((int)uVar3 == 0) {
      (**(code **)(lVar7 + 0x10))
                (uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar5);
      (**(code **)(lVar7 + 0x38))(uVar1 & (uVar6 ^ 0xffffffffffffffff),0,1,lVar5);
    }
    else {
      _memcpy(uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar4);
    }
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)((uint)uVar6 & 0xf8 ^ 0x1f8) & uVar6 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10415e788; end: 10415e7ef;  */

void FUN_10415e788(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_2 + 0x28);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = param_1 + uVar5 + 8;
  uVar2 = uVar1 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar3);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010415e7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(uVar1 & (uVar5 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Entry: 10415e7f0; end: 10415e8a3;  */

undefined8 * FUN_10415e7f0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = *param_2;
  lVar4 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(lVar4 + -8);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar1 = uVar5 + 8 + (long)param_1;
  uVar2 = uVar5 + 8 + (long)param_2;
  uVar3 = uVar2 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x30))(uVar3,1,lVar4);
  if ((int)uVar3 == 0) {
    (**(code **)(lVar6 + 0x10))
              (uVar1 & (uVar5 ^ 0xffffffffffffffff),uVar2 & (uVar5 ^ 0xffffffffffffffff),lVar4);
    (**(code **)(lVar6 + 0x38))(uVar1 & (uVar5 ^ 0xffffffffffffffff),0,1,lVar4);
  }
  else {
    lVar4 = *(long *)(lVar6 + 0x40);
    if (*(int *)(lVar6 + 0x54) == 0) {
      lVar4 = lVar4 + 1;
    }
    _memcpy(uVar1 & (uVar5 ^ 0xffffffffffffffff),uVar2 & (uVar5 ^ 0xffffffffffffffff),lVar4);
  }
  return param_1;
}



/* Entry: 10415e8a4; end: 10415e9a3;  */

undefined8 * FUN_10415e8a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(param_3 + 0x28);
  lVar7 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = uVar6 + 8 + (long)param_1;
  uVar2 = uVar6 + 8 + (long)param_2;
  pcVar8 = *(code **)(lVar7 + 0x30);
  uVar3 = uVar1 & (uVar6 ^ 0xffffffffffffffff);
  (*pcVar8)(uVar3,1,lVar5);
  uVar4 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
  (*pcVar8)(uVar4,1,lVar5);
  if ((int)uVar3 == 0) {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar7 + 0x18))
                (uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar5);
      return param_1;
    }
    (**(code **)(lVar7 + 8))(uVar1 & (uVar6 ^ 0xffffffffffffffff),lVar5);
  }
  else if ((int)uVar4 == 0) {
    (**(code **)(lVar7 + 0x10))
              (uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar5);
    (**(code **)(lVar7 + 0x38))(uVar1 & (uVar6 ^ 0xffffffffffffffff),0,1,lVar5);
    return param_1;
  }
  lVar5 = *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  _memcpy(uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar5);
  return param_1;
}



/* Entry: 10415e9a4; end: 10415ea57;  */

undefined8 * FUN_10415e9a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = *param_2;
  lVar4 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(lVar4 + -8);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar1 = uVar5 + 8 + (long)param_1;
  uVar2 = uVar5 + 8 + (long)param_2;
  uVar3 = uVar2 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x30))(uVar3,1,lVar4);
  if ((int)uVar3 == 0) {
    (**(code **)(lVar6 + 0x20))
              (uVar1 & (uVar5 ^ 0xffffffffffffffff),uVar2 & (uVar5 ^ 0xffffffffffffffff),lVar4);
    (**(code **)(lVar6 + 0x38))(uVar1 & (uVar5 ^ 0xffffffffffffffff),0,1,lVar4);
  }
  else {
    lVar4 = *(long *)(lVar6 + 0x40);
    if (*(int *)(lVar6 + 0x54) == 0) {
      lVar4 = lVar4 + 1;
    }
    _memcpy(uVar1 & (uVar5 ^ 0xffffffffffffffff),uVar2 & (uVar5 ^ 0xffffffffffffffff),lVar4);
  }
  return param_1;
}



/* Entry: 10415ea58; end: 10415eb57;  */

undefined8 * FUN_10415ea58(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(param_3 + 0x28);
  lVar7 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = uVar6 + 8 + (long)param_1;
  uVar2 = uVar6 + 8 + (long)param_2;
  pcVar8 = *(code **)(lVar7 + 0x30);
  uVar3 = uVar1 & (uVar6 ^ 0xffffffffffffffff);
  (*pcVar8)(uVar3,1,lVar5);
  uVar4 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
  (*pcVar8)(uVar4,1,lVar5);
  if ((int)uVar3 == 0) {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar7 + 0x28))
                (uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar5);
      return param_1;
    }
    (**(code **)(lVar7 + 8))(uVar1 & (uVar6 ^ 0xffffffffffffffff),lVar5);
  }
  else if ((int)uVar4 == 0) {
    (**(code **)(lVar7 + 0x20))
              (uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar5);
    (**(code **)(lVar7 + 0x38))(uVar1 & (uVar6 ^ 0xffffffffffffffff),0,1,lVar5);
    return param_1;
  }
  lVar5 = *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  _memcpy(uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar5);
  return param_1;
}



/* Entry: 10415eb58; end: 10415ecc3;  */

int FUN_10415eb58(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x28) + -8);
  iVar2 = *(int *)(lVar8 + 0x54);
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = iVar2 - 1;
  }
  uVar1 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar1 = 0x7ffffffe;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  if (iVar2 == 0) {
    lVar9 = lVar9 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar3 = *(byte *)(lVar8 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_10415ec10;
  uVar7 = lVar9 + ((ulong)bVar3 + 8 & ((ulong)bVar3 ^ 0xffffffffffffffff));
  uVar6 = (uint)uVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar10 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f);
    if (uVar10 < 0xff) {
      if (uVar10 == 0) goto LAB_10415ec10;
      goto LAB_10415ebd0;
    }
    if (uVar10 < 0xffff) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_10415ebd0:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar10 != 0) {
    uVar5 = 0;
    if (uVar6 < 4) {
      uVar5 = uVar10 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)(uint)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar5) + 1;
  }
LAB_10415ec10:
  if (uVar5 < 0x7fffffff) {
    uVar7 = *param_1;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    iVar2 = 0;
    if (1 < (int)uVar7 + 1U) {
      iVar2 = (int)uVar7;
    }
    return iVar2;
  }
  uVar5 = (int)param_1 + (uint)bVar3 + 8 & ~(uint)bVar3;
  (**(code **)(lVar8 + 0x30))();
  iVar2 = 0;
  if (uVar5 != 0) {
    iVar2 = uVar5 - 1;
  }
  return iVar2;
}



/* Entry: 10415ecc4; end: 10415ef5b;  */

void FUN_10415ecc4(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  uint *puVar11;
  byte bVar12;
  int iVar13;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x28) + -8);
  iVar13 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar13 != 0) {
    uVar2 = iVar13 - 1;
  }
  uVar7 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar7 = 0x7ffffffe;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar6 = *(long *)(lVar8 + 0x40);
  if (iVar13 == 0) {
    lVar6 = lVar6 + 1;
  }
  lVar1 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + lVar6;
  uVar5 = (uint)lVar1;
  bVar12 = 0;
  if (uVar7 <= param_3 && param_3 - uVar7 != 0) {
    uVar3 = (param_3 - uVar7) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f);
    bVar10 = 2;
    if (0xfffe < uVar3) {
      bVar10 = 4;
    }
    if (uVar3 < 0xff) {
      bVar10 = uVar3 != 0;
    }
    bVar12 = 1;
    if (uVar5 < 4) {
      bVar12 = bVar10;
    }
  }
  if (uVar7 < param_2) {
    param_2 = param_2 + ~uVar7;
    if (uVar5 < 4) {
      iVar13 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar1);
      *(uint *)param_1 = param_2;
      iVar13 = 1;
    }
    if (bVar12 < 2) {
      if (bVar12 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar13;
      }
    }
    else if (bVar12 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar13;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar13;
    }
  }
  else {
    if (bVar12 < 2) {
      if (bVar12 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar12 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (uVar2 < 0x7fffffff) {
        if (param_2 < 0x7fffffff) {
          *param_1 = (ulong)param_2;
        }
        else {
          *param_1 = 0;
          *(uint *)param_1 = param_2 + 0x80000001;
        }
      }
      else {
        puVar11 = (uint *)((long)param_1 + uVar9 + 8 & ~uVar9);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010415eedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(puVar11,param_2 + 1);
          return;
        }
        uVar5 = (uint)lVar6;
        uVar7 = 0xffffffff;
        if (uVar5 < 4) {
          uVar7 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar7 = uVar7 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(puVar11,lVar6);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar11 = (char)uVar7;
            }
            else {
              *(short *)puVar11 = (short)uVar7;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar11 = (short)uVar7;
            *(char *)((long)puVar11 + 2) = (char)(uVar7 >> 0x10);
          }
          else {
            *puVar11 = uVar7;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10415ef5c; end: 10415efdb;  */

void FUN_10415ef5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = param_2;
  uStack_38 = param_10;
  lVar2 = 0;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_50 = param_7;
  uStack_48 = param_8;
  uStack_40 = param_9;
  FUN_10415e5f0(0,&uStack_68);
  iVar1 = *(int *)(lVar2 + 0x4c);
  lVar2 = 0;
  __sSqMa(0,param_7);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))((long)param_1 + (long)iVar1,param_3,lVar2);
  return;
}



/* Entry: 10415efdc; end: 104163d17;  */

void FUN_10415efdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010415a7b8(0,&lStack_90);
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
    func_0x00010415a7ac(0,&lStack_90);
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
    func_0x00010415a7ac(0,&lStack_90);
    uVar5 = 3;
  }
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x44)) = uVar5;
  return;
}



/* Entry: 104163d18; end: 104163e17;  */

undefined * FUN_104163d18(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104163e18);
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
    puVar3 = (undefined *)0x1130654d0;
    func_0x0001000285a8(0x1130654d0,&UNK_10dcd96d0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 104163e18; end: 104163e5b;  */

void FUN_104163e18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f2708);
  return;
}



/* Entry: 104163e5c; end: 104163e9f;  */

undefined8 * FUN_104163e5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x000104163e30(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x000104163e4c(uVar2,uVar4);
  return param_1;
}



/* Entry: 104163ea0; end: 104163ed7;  */

undefined8 * FUN_104163ea0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000104163e4c(uVar1,uVar2);
  return param_1;
}



/* Entry: 104163ed8; end: 104163ffb;  */

int FUN_104163ed8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x11 & 0x3800 | ((uint)*(undefined8 *)(param_1 + 2) & 7) << 8 |
          (byte)((ulong)*(undefined8 *)param_1 >> 0x38) & 0xf0 | (uint)*(undefined8 *)param_1 & 0xf)
          << 1) ^ 0x7fff;
  if (0x7ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104163ffc; end: 10416405f;  */

void FUN_104163ffc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 104164060; end: 1041640c3;  */

undefined8 * FUN_104164060(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1041640c4; end: 104164107;  */

undefined8 * FUN_1041640c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104164108; end: 1041641ab;  */

int FUN_104164108(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1041641ac; end: 1041642ef;  */

void FUN_1041641ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_60 [20];
  undefined4 uStack_4c;
  
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18),puVar2,puVar1);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,uVar6,0,0);
  uVar7 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar8 = 0x13f;
  __ss6ResultOMa(0x13f,uVar7,uVar3,PTR___ss5ErrorWS_11034ee10);
  if (uVar7 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_60,&UNK_10dcd9668,*(long *)(lVar8 + -8) + 0x40);
    _swift_initEnumMetadataSingleCase(param_1,0,auStack_60);
    *(undefined4 *)(*(long *)(param_1 + -8) + 0x54) = uStack_4c;
  }
  return;
}



/* Entry: 1041642f0; end: 104165e53;  */

long * FUN_1041642f0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  uint *puVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  
  puVar10 = PTR___sSciTL_11034fea8;
  puVar9 = PTR___s7ElementSciTl_11034fb58;
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar25 = *(long *)(lVar12 + -8);
  uVar21 = *(uint *)(lVar25 + 0x50);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar10,puVar9);
  lVar27 = *(long *)(lVar13 + -8);
  uVar17 = *(uint *)(lVar27 + 0x50);
  uVar23 = (ulong)uVar17 & 0xff;
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar10,puVar9);
  lVar29 = *(long *)(lVar14 + -8);
  iVar11 = *(int *)(lVar29 + 0x54);
  uVar18 = (ulong)*(uint *)(lVar29 + 0x50) & 0xff;
  uVar8 = uVar17 | uVar21 | *(uint *)(lVar29 + 0x50);
  uVar19 = (ulong)(uVar8 & 0xf8 | 7);
  uVar17 = *(uint *)(lVar25 + 0x54);
  uVar6 = *(uint *)(lVar27 + 0x54);
  uVar21 = uVar6;
  if (uVar6 <= uVar17) {
    uVar21 = uVar17;
  }
  uVar4 = 0;
  if (iVar11 != 0) {
    uVar4 = iVar11 - 1;
  }
  if (uVar4 <= uVar21) {
    uVar4 = uVar21;
  }
  uVar16 = *(long *)(lVar25 + 0x40) + uVar23;
  lVar1 = *(long *)(lVar27 + 0x40) + uVar18;
  lVar22 = *(long *)(lVar29 + 0x40);
  if (iVar11 == 0) {
    lVar22 = lVar22 + 1;
  }
  uVar2 = (lVar1 + (uVar16 & (uVar23 ^ 0xffffffffffffffff)) & (uVar18 ^ 0xffffffffffffffff)) +
          lVar22;
  uVar3 = uVar2;
  if (uVar4 == 0) {
    uVar3 = uVar2 + 1;
  }
  uVar5 = uVar3;
  if (uVar3 < 9) {
    uVar5 = 8;
  }
  if ((uVar8 & 0x1000f8) != 0 || (-uVar19 - 9 | uVar19 & 0xfe) - uVar5 < 0xffffffffffffffe7) {
    lVar12 = *param_2;
    *param_1 = lVar12;
    _swift_retain();
    return (long *)(lVar12 + (uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff)));
  }
  *param_1 = *param_2;
  puVar20 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar26 = (uint *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  bVar7 = *(byte *)((long)puVar26 + uVar5);
  uVar21 = (uint)bVar7;
  if (bVar7 < 2) {
LAB_1041644d4:
    if (uVar21 == 1) {
LAB_1041644dc:
      uVar24 = *(undefined8 *)puVar26;
      _swift_errorRetain(uVar24);
      *puVar20 = uVar24;
      *(undefined1 *)((long)puVar20 + uVar5) = 1;
      return param_1;
    }
  }
  else {
    uVar28 = (uint)uVar5;
    uVar8 = 4;
    if (uVar28 < 4) {
      uVar8 = uVar28;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1041644d4;
      uVar21 = (uint)(byte)*puVar26;
    }
    else if (uVar8 == 2) {
      uVar21 = (uint)(ushort)*puVar26;
    }
    else if (uVar8 == 3) {
      uVar21 = (uint)(uint3)*puVar26;
    }
    else {
      uVar21 = *puVar26;
    }
    if (3 < uVar28) {
      uVar21 = uVar21 + 2;
      goto LAB_1041644d4;
    }
    if ((uVar21 | bVar7 - 2 << (ulong)((uVar28 & 3) << 3)) == 0xffffffff) goto LAB_1041644dc;
  }
  uVar23 = ~uVar23;
  uVar18 = ~uVar18;
  if (uVar4 == 0) {
    if (*(byte *)((long)puVar26 + uVar2) != 0) {
      uVar17 = (uint)uVar2;
      uVar21 = 0;
      if (uVar17 < 4) {
        uVar21 = *(byte *)((long)puVar26 + uVar2) - 1 << (ulong)((uVar17 & 3) << 3);
      }
      if (uVar17 == 0) {
        uVar17 = 0;
      }
      else {
        uVar6 = 4;
        if (uVar17 < 4) {
          uVar6 = uVar17;
        }
        if ((int)uVar6 < 3) {
          if (uVar6 == 1) {
            uVar17 = (uint)(byte)*puVar26;
          }
          else {
            uVar17 = (uint)(ushort)*puVar26;
          }
        }
        else if (uVar6 == 3) {
          uVar17 = (uint)(uint3)*puVar26;
        }
        else {
          uVar17 = *puVar26;
        }
      }
      if ((uVar17 | uVar21) != 0xffffffff) goto LAB_10416460c;
    }
  }
  else {
    if (uVar17 == uVar4) {
      puVar15 = puVar26;
      (**(code **)(lVar25 + 0x30))(puVar26,uVar17,lVar12);
      iVar11 = (int)puVar15;
    }
    else {
      uVar19 = (ulong)(uVar16 + (long)puVar26) & uVar23;
      if (uVar6 == uVar4) {
        (**(code **)(lVar27 + 0x30))(uVar19,uVar6,lVar13);
        iVar11 = (int)uVar19;
      }
      else {
        uVar19 = lVar1 + uVar19 & uVar18;
        (**(code **)(lVar29 + 0x30))(uVar19,iVar11,lVar14);
        iVar11 = 0;
        if ((int)uVar19 != 0) {
          iVar11 = (int)uVar19 + -1;
        }
      }
    }
    if (iVar11 != 0) {
LAB_10416460c:
      _memcpy(puVar20,puVar26,uVar3);
      goto LAB_104164714;
    }
  }
  (**(code **)(lVar25 + 0x10))(puVar20,puVar26,lVar12);
  uVar19 = uVar16 + (long)puVar20 & uVar23;
  uVar23 = (ulong)(uVar16 + (long)puVar26) & uVar23;
  (**(code **)(lVar27 + 0x10))(uVar19,uVar23,lVar13);
  uVar19 = lVar1 + uVar19;
  uVar23 = lVar1 + uVar23;
  uVar16 = uVar23 & uVar18;
  (**(code **)(lVar29 + 0x30))(uVar16,1,lVar14);
  if ((int)uVar16 == 0) {
    (**(code **)(lVar29 + 0x10))(uVar19 & uVar18,uVar23 & uVar18,lVar14);
    (**(code **)(lVar29 + 0x38))(uVar19 & uVar18,0,1,lVar14);
  }
  else {
    _memcpy(uVar19 & uVar18,uVar23 & uVar18,lVar22);
  }
  if (uVar4 == 0) {
    *(undefined1 *)((long)puVar20 + uVar2) = 0;
  }
LAB_104164714:
  *(undefined1 *)((long)puVar20 + uVar5) = 0;
  return param_1;
}



/* Entry: 104165e54; end: 10416606b;  */

uint FUN_104165e54(ulong *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  puVar6 = PTR___sSciTL_11034fea8;
  puVar5 = PTR___s7ElementSciTl_11034fb58;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar14 = *(long *)(lVar7 + -8);
  uVar9 = *(uint *)(lVar14 + 0x54);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar6,puVar5);
  lVar7 = *(long *)(lVar7 + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  if (*(uint *)(lVar7 + 0x54) <= uVar9) {
    uVar4 = uVar9;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar6,puVar5);
  lVar8 = *(long *)(lVar8 + -8);
  iVar3 = *(int *)(lVar8 + 0x54);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar3 + -1;
  }
  uVar11 = (ulong)(iVar1 == 0 && uVar4 == 0);
  uVar12 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  uVar13 = (ulong)*(uint *)(lVar8 + 0x50) & 0xff;
  if (iVar3 == 0) {
    uVar11 = uVar11 + 1;
  }
  uVar11 = uVar11 + *(long *)(lVar8 + 0x40) +
                    ((*(long *)(lVar14 + 0x40) + uVar12 & (uVar12 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar7 + 0x40) + uVar13 & (uVar13 ^ 0xffffffffffffffff));
  if (uVar11 < 9) {
    uVar11 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (-1 < param_2) goto LAB_104165f54;
  uVar12 = (ulong)((*(uint *)(lVar7 + 0x50) | *(uint *)(lVar14 + 0x50) | *(uint *)(lVar8 + 0x50)) &
                   0xf8 | 7);
  uVar11 = uVar11 + (uVar12 + 8 & (uVar12 ^ 0xffffffffffffffff)) + 1;
  uVar9 = (uint)uVar11;
  uVar4 = uVar9 << 3;
  if (uVar9 < 4) {
    uVar10 = (uint)(param_2 + -0x7fffffff + ~(-1 << (ulong)(uVar4 & 0x1f))) >> (ulong)(uVar4 & 0x1f)
    ;
    if (uVar10 < 0xff) {
      if (uVar10 == 0) goto LAB_104165f54;
      goto LAB_104165fcc;
    }
    if (uVar10 < 0xffff) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar11);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar11);
    }
  }
  else {
LAB_104165fcc:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar11);
  }
  if (uVar10 != 0) {
    uVar2 = 0;
    if (uVar9 < 4) {
      uVar2 = uVar10 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar9 != 0) {
      uVar4 = 4;
      if (uVar9 < 4) {
        uVar4 = uVar9;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar11 = (ulong)(byte)*param_1;
        }
        else {
          uVar11 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar11 = (ulong)(uint3)*param_1;
      }
      else {
        uVar11 = (ulong)(uint)*param_1;
      }
    }
    return ((uint)uVar11 | uVar2) ^ 0x80000000;
  }
LAB_104165f54:
  uVar11 = *param_1;
  if (0xfffffffe < uVar11) {
    uVar11 = 0xffffffff;
  }
  return (int)uVar11 + 1;
}



/* Entry: 10416606c; end: 1041662ff;  */

void FUN_10416606c(ulong *param_1,uint param_2,int param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  
  puVar5 = PTR___sSciTL_11034fea8;
  puVar4 = PTR___s7ElementSciTl_11034fb58;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar15 = *(long *)(lVar7 + -8);
  uVar2 = *(uint *)(lVar15 + 0x54);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x18),puVar5,puVar4);
  lVar7 = *(long *)(lVar7 + -8);
  uVar13 = *(uint *)(lVar7 + 0x54);
  if (*(uint *)(lVar7 + 0x54) <= uVar2) {
    uVar13 = uVar2;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x20),puVar5,puVar4);
  bVar6 = 0;
  lVar8 = *(long *)(lVar8 + -8);
  iVar1 = *(int *)(lVar8 + 0x54);
  iVar14 = 0;
  if (iVar1 != 0) {
    iVar14 = iVar1 + -1;
  }
  uVar10 = (ulong)(iVar14 == 0 && uVar13 == 0);
  uVar11 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  uVar12 = (ulong)*(uint *)(lVar8 + 0x50) & 0xff;
  uVar9 = (ulong)((*(uint *)(lVar7 + 0x50) | *(uint *)(lVar15 + 0x50) | *(uint *)(lVar8 + 0x50)) &
                  0xf8 | 7);
  if (iVar1 == 0) {
    uVar10 = uVar10 + 1;
  }
  uVar10 = uVar10 + *(long *)(lVar8 + 0x40) +
                    ((*(long *)(lVar15 + 0x40) + uVar11 & (uVar11 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar7 + 0x40) + uVar12 & (uVar12 ^ 0xffffffffffffffff));
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  lVar7 = uVar10 + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + 1;
  uVar13 = (uint)lVar7;
  if (param_3 < 0) {
    if (uVar13 < 4) {
      uVar2 = (uint)(param_3 + -0x7fffffff + ~(-1 << (ulong)(uVar13 << 3 & 0x1f))) >>
              (ulong)(uVar13 << 3 & 0x1f);
      bVar6 = 2;
      if (0xfffe < uVar2) {
        bVar6 = 4;
      }
      if (uVar2 < 0xff) {
        bVar6 = uVar2 != 0;
      }
    }
    else {
      bVar6 = 1;
    }
  }
  if ((int)param_2 < 0) {
    if (uVar13 < 4) {
      iVar14 = ((param_2 & 0x7fffffff) >> (ulong)(uVar13 << 3 & 0x1f)) + 1;
      if (uVar13 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar13 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar7);
        uVar3 = (undefined2)uVar2;
        if (uVar13 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar13 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar7);
      *(uint *)param_1 = param_2 & 0x7fffffff;
      iVar14 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + lVar7) = (char)iVar14;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + lVar7) = (short)iVar14;
    }
    else {
      *(int *)((long)param_1 + lVar7) = iVar14;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + lVar7) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + lVar7) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar7) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Entry: 104166300; end: 10416630f;  */

undefined8 FUN_104166300(void)

{
  return 0;
}



/* Entry: 104166310; end: 10416636b;  */

long FUN_104166310(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10416636c; end: 10416643b;  */

undefined8 * FUN_10416636c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  _swift_errorRetain(uVar2);
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 10416643c; end: 104166487;  */

undefined8 * FUN_10416643c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_errorRelease(uVar1);
  _swift_release(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104166488; end: 10416652b;  */

int FUN_104166488(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10416652c; end: 1041665fb;  */

void FUN_10416652c(long param_1)

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
        puStack_40 = PTR___sBbWV_11034d660 + 0x40;
        puStack_38 = &UNK_10dcd9668;
        puStack_48 = auStack_68;
        _swift_initEnumMetadataMultiPayload(param_1,0,3,&puStack_48);
      }
    }
  }
  return;
}



/* Entry: 1041665fc; end: 10416740f;  */

long * FUN_1041665fc(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar2 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar13 = *(long *)(lVar2 + -8);
  uVar9 = (ulong)*(uint *)(lVar13 + 0x50) & 0xff;
  uVar6 = *(long *)(lVar8 + 0x40) + uVar9;
  lVar14 = *(long *)(lVar13 + 0x40);
  lVar12 = *(long *)(lVar3 + -8);
  uVar11 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  lVar10 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar10 = lVar10 + 1;
  }
  uVar1 = lVar10 + (lVar14 + uVar11 + (uVar6 & (uVar9 ^ 0xffffffffffffffff)) &
                   (uVar11 ^ 0xffffffffffffffff));
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  uVar5 = *(uint *)(lVar13 + 0x50) | *(uint *)(lVar8 + 0x50) | *(uint *)(lVar12 + 0x50);
  if ((uVar5 & 0x1000f8) == 0 && uVar1 + 1 < 0x19) {
    uVar5 = (uint)*(byte *)((long)param_2 + uVar1);
    if (2 < *(byte *)((long)param_2 + uVar1)) {
      uVar5 = (int)*param_2 + 3;
    }
    if (uVar5 == 2) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar1) = 2;
    }
    else if (uVar5 == 1) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar1) = 1;
      _swift_bridgeObjectRetain();
    }
    else {
      uVar7 = ~uVar11;
      (**(code **)(lVar8 + 0x10))(param_1);
      uVar4 = uVar6 + (long)param_1 & ~uVar9;
      uVar6 = uVar6 + (long)param_2 & ~uVar9;
      (**(code **)(lVar13 + 0x10))(uVar4,uVar6,lVar2);
      lVar14 = lVar14 + uVar11;
      uVar4 = uVar4 + lVar14;
      uVar6 = uVar6 + lVar14;
      uVar9 = uVar6 & uVar7;
      (**(code **)(lVar12 + 0x30))(uVar9,1,lVar3);
      if ((int)uVar9 == 0) {
        (**(code **)(lVar12 + 0x10))(uVar4 & uVar7,uVar6 & uVar7,lVar3);
        (**(code **)(lVar12 + 0x38))(uVar4 & uVar7,0,1,lVar3);
      }
      else {
        _memcpy(uVar4 & uVar7,uVar6 & uVar7,lVar10);
      }
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
  }
  else {
    uVar6 = (ulong)(uVar5 & 0xf8 | 7);
    lVar14 = *param_2;
    *param_1 = lVar14;
    param_1 = (long *)(lVar14 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104167410; end: 104167553;  */

int FUN_104167410(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar7 = lVar9 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar7 &
                   (uVar7 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar6 + 0x40) + (ulong)*(byte *)(lVar8 + 0x50) &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_1041674f8;
  uVar5 = uVar7 + 1;
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar10 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfd >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar10 < 0x100) {
      if (uVar10 < 2) goto LAB_1041674f8;
      goto LAB_104167484;
    }
    if (uVar10 >> 0x10 == 0) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_104167484:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar10 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar10 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return ((uint)uVar5 | uVar1) + 0xfe;
  }
LAB_1041674f8:
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar7)) {
    iVar2 = (*(byte *)((long)param_1 + uVar7) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 104167554; end: 104167737;  */

void FUN_104167554(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  
  lVar3 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  lVar5 = *(long *)(*(long *)(param_4 + 0x20) + -8);
  lVar6 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar4 = lVar6 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar4 &
                   (uVar4 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar3 + 0x40) + (ulong)*(byte *)(lVar5 + 0x50) &
                  ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff));
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar6 = uVar4 + 1;
  uVar7 = (uint)lVar6;
  if (param_3 < 0xfe) {
    bVar8 = 0;
  }
  else if (uVar7 < 4) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar7 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar7 << 3 & 0x1f)) +
            1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
  }
  else {
    bVar8 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + lVar6) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + lVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar6) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar7 < 4) {
      iVar9 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar6);
        uVar2 = (undefined2)uVar1;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar6);
      *param_1 = param_2;
      iVar9 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + lVar6) = (char)iVar9;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + lVar6) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + lVar6) = iVar9;
    }
  }
  return;
}



/* Entry: 104167738; end: 10416780f;  */

uint FUN_104167738(uint *param_1,long param_2)

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
  if (uVar6 < 9) {
    uVar6 = 8;
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



/* Entry: 104167810; end: 104167927;  */

void FUN_104167810(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar4 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar3 = lVar5 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar3 &
                   (uVar3 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar2 + 0x40) + (ulong)*(byte *)(lVar4 + 0x50) &
                  ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff));
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar1 = (uint)uVar3;
    if (uVar1 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar1 << 3 & 0x1f)) + '\x03';
      if (uVar1 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar1 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 3;
    }
    if (3 < uVar1) {
      uVar1 = 4;
    }
    _bzero(param_1);
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



/* Entry: 104167928; end: 104167957;  */

void FUN_104167928(ulong param_1,ulong param_2,ulong param_3)

{
  if (0x7fffffffffffffff < param_1) {
    param_3 = param_2;
    param_2 = param_1 & 0x7fffffffffffffff;
  }
  _swift_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 104167958; end: 104167967;  */

void FUN_104167958(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  if (0x7fffffffffffffff < *param_1) {
    uVar1 = param_1[1];
    uVar2 = *param_1 & 0x7fffffffffffffff;
  }
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 104167968; end: 104167997;  */

void FUN_104167968(ulong param_1,ulong param_2,ulong param_3)

{
  if (0x7fffffffffffffff < param_1) {
    param_3 = param_2;
    param_2 = param_1 & 0x7fffffffffffffff;
  }
  _swift_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 104167998; end: 104167a33;  */

undefined8 * FUN_104167998(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_104167928(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 104167a34; end: 104167a73;  */

undefined8 * FUN_104167a34(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104167968(uVar3,uVar1,uVar2);
  return param_1;
}



/* Entry: 104167a74; end: 104167b63;  */

int FUN_104167a74(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)param_1 & 7) << 1) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104167b64; end: 104167bbf;  */

void FUN_104167b64(undefined8 *param_1)

{
  _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 104167bc0; end: 104167c1b;  */

undefined8 * FUN_104167bc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104167c1c; end: 104167c57;  */

undefined8 * FUN_104167c1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104167c58; end: 104167d47;  */

int FUN_104167c58(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104167d48; end: 104167d8b;  */

void FUN_104167d48(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x80);
  return;
}



/* Entry: 104167d8c; end: 104167df3;  */

void FUN_104167d8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104167df4,param_2,param_3);
  return;
}



/* Entry: 104167df4; end: 104167e43;  */

void FUN_104167df4(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_104167e44;
  _swift_continuation_init(unaff_x22 + 0x10,0);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 104167e44; end: 104167eef;  */

void FUN_104167e44(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000104167e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 8))();
  return;
}



/* Entry: 104167ef0; end: 1041680a3;  */

void FUN_104167ef0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  undefined8 *puVar13;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = *unaff_x20;
  lVar12 = unaff_x20[2];
  lVar1 = *(long *)(lVar11 + 0x50);
  lVar2 = *(long *)(lVar11 + 0x58);
  uVar6 = *(undefined8 *)(lVar11 + 0x60);
  uVar8 = *(undefined8 *)(lVar11 + 0x68);
  uVar7 = *(undefined8 *)(lVar11 + 0x70);
  uVar9 = *(undefined8 *)(lVar11 + 0x78);
  uVar4 = 0;
  lStack_d8 = lVar1;
  lStack_d0 = lVar2;
  uStack_c8 = uVar6;
  uStack_c0 = uVar8;
  uStack_b8 = uVar7;
  uStack_b0 = uVar9;
  lStack_90 = lVar1;
  lStack_88 = lVar2;
  uStack_80 = uVar6;
  uStack_78 = uVar8;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  FUN_10415a7ac(0,&lStack_d8);
  uVar5 = 0xff;
  lStack_d8 = lVar1;
  lStack_d0 = lVar2;
  uStack_c8 = uVar6;
  uStack_c0 = uVar8;
  uStack_b8 = uVar7;
  uStack_b0 = uVar9;
  func_0x000104167cec(0xff,&lStack_d8);
  uVar6 = 0;
  __sSqMa(0,uVar5);
  FUN_104146aa0(&lStack_d8,FUN_10416c790,auStack_a0,lVar12,uVar4,uVar6);
  lVar2 = lStack_d0;
  lVar1 = lStack_d8;
  if (lStack_d8 != 0) {
    lVar11 = *(long *)(lStack_d0 + 0x10);
    if (lVar11 == 0) {
      _swift_retain(lStack_d8);
    }
    else {
      puVar13 = (undefined8 *)(lStack_d0 + 0x20);
      uVar7 = 0;
      __sScEMa();
      uVar6 = uVar7;
      func_0x000100f5abbc();
      _swift_retain(lVar1);
      puVar3 = PTR___ss5ErrorWS_11034ee10;
      do {
        uVar4 = *puVar13;
        uVar8 = uVar7;
        uVar9 = uVar6;
        _swift_allocError(uVar7,uVar6,0,0);
        __sS2cEycfC(uVar9);
        uVar9 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar10 = (undefined8 *)puVar3;
        _swift_allocError();
        *puVar10 = uVar8;
        _swift_continuation_throwingResumeWithError(uVar4,uVar9);
        lVar11 = lVar11 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar11 != 0);
    }
    __sScT6cancelyyF(lVar1,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    FUN_10416c7f0(lVar1,lVar2);
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 1041680a4; end: 1041680c3;  */

void FUN_1041680a4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041680c4,0,0);
  return;
}



/* Entry: 1041680c4; end: 1041681ef;  */

void FUN_1041680c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  
  lVar8 = *(long *)(unaff_x22 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x68),*(undefined8 *)(lVar8 + 0x50),PTR___sSciTL_11034fea8
             ,PTR___s7ElementSciTl_11034fb58);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x58),puVar2,puVar1);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x78),*(undefined8 *)(lVar8 + 0x60),puVar2,puVar1);
  uVar7 = 0xff;
  __sSqMa(0xff,uVar6);
  uVar6 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar4,uVar5,uVar7,0,0);
  uVar4 = 0;
  __sSqMa(0,uVar6);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1041681f0;
                    /* WARNING: Could not recover jumptable at 0x0001041681ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10396896c)
            (*(undefined8 *)(unaff_x22 + 0x10),&UNK_10dcd9860,*(undefined8 *)(unaff_x22 + 0x18),
             FUN_10416c8ac,*(undefined8 *)(unaff_x22 + 0x18),0,0,uVar4);
  return;
}



/* Entry: 1041681f0; end: 10416822b;  */

void FUN_1041681f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000104168228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10416822c; end: 10416835b;  */

void FUN_10416822c(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x22;
  long lVar8;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = param_2;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar8 = *param_2;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x68),*(undefined8 *)(lVar8 + 0x50),PTR___sSciTL_11034fea8
             ,PTR___s7ElementSciTl_11034fb58);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x58),puVar2,puVar1);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x78),*(undefined8 *)(lVar8 + 0x60),puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,uVar6,0,0);
  uVar4 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar8 = 0;
  __ss6ResultOMa(0,uVar4,uVar3,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0x20) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar8;
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10416835c,0,0);
  return;
}



/* Entry: 10416835c; end: 104168417;  */

void FUN_10416835c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1041683d0;
                    /* WARNING: Could not recover jumptable at 0x0001041683cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_104167d8c(plVar1,*(undefined8 *)(unaff_x22 + 0x30),0,0,0x10416c9a4,
                *(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
  return;
}



/* Entry: 104168418; end: 1041684a7;  */

/* WARNING: Removing unreachable block (ram,0x000104168484) */

void FUN_104168418(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar3 = &DAT_10dcd9348;
  _swift_getWitnessTable(&DAT_10dcd9348,uVar4);
  FUN_1041542f8(uVar5,uVar4,puVar3);
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001041684a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041684a8; end: 1041687ef;  */

void FUN_1041684a8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x13;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  long alStack_f0 [4];
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar13 = *param_2;
  uStack_d0 = *(undefined8 *)(lVar13 + 0x68);
  uVar10 = *(undefined8 *)(lVar13 + 0x50);
  uVar4 = 0xff;
  plStack_c8 = param_2;
  uStack_c0 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uStack_d0,uVar10,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar20 = *(undefined8 *)(lVar13 + 0x70);
  uVar18 = *(undefined8 *)(lVar13 + 0x58);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar20,uVar18,puVar2,puVar1);
  uVar11 = *(undefined8 *)(lVar13 + 0x78);
  uVar15 = *(undefined8 *)(lVar13 + 0x60);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar11,uVar15,puVar2,puVar1);
  uVar7 = 0xff;
  __sSqMa(0xff,uVar6);
  lVar13 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar4,uVar5,uVar7,0,0);
  uVar5 = 0xff;
  alStack_f0[3] = lVar13;
  __sSqMa(0xff);
  uVar4 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar13 = 0;
  __ss6ResultOMa(0,uVar5,uVar4,PTR___ss5ErrorWS_11034ee10);
  alStack_f0[2] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = uStack_d0;
  uStack_78 = uStack_d0;
  lVar13 = 0xff;
  alStack_f0[1] = (long)alStack_f0 - extraout_x8;
  uStack_90 = uVar10;
  uStack_88 = uVar18;
  uStack_80 = uVar15;
  uStack_70 = uVar20;
  uStack_68 = uVar11;
  func_0x000104163e24(0xff,&uStack_90);
  lVar8 = 0;
  __sSqMa(0,lVar13);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  plVar19 = (long *)(((long)alStack_f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)
                    );
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = (long)plVar19 - extraout_x12;
  lVar14 = plStack_c8[2];
  uStack_a0 = uStack_c0;
  plStack_98 = plStack_c8;
  uStack_78 = uVar4;
  uVar4 = 0;
  uStack_90 = uVar10;
  uStack_88 = uVar18;
  uStack_80 = uVar15;
  uStack_70 = uVar20;
  uStack_68 = uVar11;
  FUN_10415a7ac(0,&uStack_90);
  FUN_104146aa0(lVar17,FUN_10416c9b0,auStack_b0,lVar14,uVar4,lVar8);
  (**(code **)(extraout_x13 + 0x10))(plVar19,lVar17,lVar8);
  plVar9 = plVar19;
  (**(code **)(*(long *)(lVar13 + -8) + 0x30))(plVar19,1,lVar13);
  if ((int)plVar9 != 1) {
    plVar9 = plVar19;
    _swift_getEnumCaseMultiPayload(plVar19,lVar13);
    lVar13 = alStack_f0[1];
    if ((int)plVar9 == 1) {
      lVar14 = *plVar19;
      lVar13 = *(long *)(lVar14 + 0x10);
      if (lVar13 != 0) {
        puVar16 = (undefined8 *)(lVar14 + 0x20);
        do {
          _swift_continuation_throwingResume(*puVar16);
          lVar13 = lVar13 + -1;
          puVar16 = puVar16 + 1;
        } while (lVar13 != 0);
      }
      _swift_bridgeObjectRelease(lVar14);
    }
    else {
      if ((int)plVar9 != 2) {
        *(undefined4 *)(lVar17 + -8) = 0;
        *(undefined8 *)(lVar17 + -0x10) = 0x44;
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000016,0x800000010f1eddb0,
                   "AsyncAlgorithms/ZipStorage.swift",0x20,2);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1041687f0);
        (*pcVar3)();
      }
      lVar12 = *plVar19;
      (**(code **)(*(long *)(alStack_f0[3] + -8) + 0x38))(alStack_f0[1],1,1);
      lVar14 = alStack_f0[2];
      _swift_storeEnumTagMultiPayload(lVar13,alStack_f0[2],0);
      func_0x000103969044(lVar13,lVar12,lVar14);
    }
  }
  (**(code **)(extraout_x13 + 8))(lVar17,lVar8);
  return;
}



/* Entry: 1041687f0; end: 104168aef;  */

void FUN_1041687f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x13;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = *param_4;
  uVar10 = *(undefined8 *)(lVar12 + 0x60);
  lVar5 = 0;
  plStack_d8 = param_4;
  uStack_a8 = param_1;
  __sSqMa(0,uVar10);
  lStack_b8 = *(long *)(lVar5 + -8);
  lStack_b0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = *(long *)(lVar12 + 0x58);
  lStack_c0 = *(long *)(lVar14 + -8);
  lStack_e0 = (long)&lStack_f0 - extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar8 = ((long)&lStack_f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar12 + 0x50);
  lStack_c8 = *(long *)(lVar9 + -8);
  lStack_e8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar11 = *(undefined8 *)(lVar12 + 0x68);
  uVar7 = *(undefined8 *)(lVar12 + 0x70);
  uVar15 = *(undefined8 *)(lVar12 + 0x78);
  lVar12 = 0;
  lStack_d0 = lVar8;
  lStack_90 = lVar9;
  lStack_88 = lVar14;
  uStack_80 = uVar10;
  uStack_78 = uVar11;
  uStack_70 = uVar7;
  uStack_68 = uVar15;
  func_0x000104163e24(0,&lStack_90);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar8 = lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar8 - extraout_x12;
  uVar6 = 0;
  lStack_90 = lVar9;
  lStack_88 = lVar14;
  uStack_80 = uVar10;
  uStack_78 = uVar11;
  uStack_70 = uVar7;
  uStack_68 = uVar15;
  FUN_10415a7ac(0,&lStack_90);
  func_0x000104163678(lVar13,param_3,uVar6);
  (**(code **)(extraout_x13 + 0x10))(lVar8,lVar13,lVar12);
  lVar5 = lVar8;
  _swift_getEnumCaseMultiPayload(lVar8,lVar12);
  if ((int)lVar5 == 0) {
    lVar5 = 0;
    _swift_getTupleTypeMetadata3(0,lVar9,lVar14,lStack_b0,0,0);
    lVar3 = lStack_d0;
    iVar1 = *(int *)(lVar5 + 0x30);
    lStack_f0 = (long)*(int *)(lVar5 + 0x40);
    (**(code **)(lStack_c8 + 0x20))(lStack_d0,lVar8,lVar9);
    lVar5 = lStack_e8;
    (**(code **)(lStack_c0 + 0x20))(lStack_e8,lVar8 + iVar1,lVar14);
    lVar4 = lStack_b0;
    lVar2 = lStack_e0;
    (**(code **)(lStack_b8 + 0x20))(lStack_e0,lVar8 + lStack_f0,lStack_b0);
    FUN_104168af0(param_2,lVar3,lVar5,lVar2,param_3);
    (**(code **)(lStack_b8 + 8))(lVar2,lVar4);
    (**(code **)(lStack_c0 + 8))(lVar5,lVar14);
    (**(code **)(lStack_c8 + 8))(lStack_d0,lVar9);
    (**(code **)(extraout_x13 + 8))(lVar13,lVar12);
    uVar7 = 1;
    uVar11 = uStack_a8;
  }
  else {
    if ((int)lVar5 == 1) {
      (**(code **)(extraout_x13 + 8))(lVar8,lVar12);
    }
    uVar11 = uStack_a8;
    (**(code **)(extraout_x13 + 0x20))(uStack_a8,lVar13,lVar12);
    uVar7 = 0;
  }
  (**(code **)(extraout_x13 + 0x38))(uVar11,uVar7,1,lVar12);
  return;
}



/* Entry: 104168af0; end: 104169197;  */

void FUN_104168af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar22 = *unaff_x20;
  uVar9 = *(undefined8 *)(lVar22 + 0x60);
  lVar4 = 0;
  uStack_f8 = param_2;
  uStack_f0 = param_3;
  uStack_e0 = param_4;
  __sSqMa();
  lVar10 = *(long *)(lVar4 + -8);
  lStack_d8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_d8 + 0xfU & 0xfffffffffffffff0);
  lVar26 = (long)&lStack_110 - extraout_x8;
  lVar21 = *(long *)(lVar22 + 0x58);
  lVar11 = *(long *)(lVar21 + -8);
  lVar16 = *(long *)(lVar11 + 0x40);
  lStack_100 = lVar26;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar26 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(lVar22 + 0x50);
  lVar20 = *(long *)(lVar12 + -8);
  lVar17 = *(long *)(lVar20 + 0x40);
  lStack_108 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar14 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d453c8;
  lStack_110 = lVar24;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_e8 = lVar24 - extraout_x8_00;
  __sScPMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar24 - extraout_x8_00,1,1,lVar5);
  (**(code **)(lVar20 + 0x10))(lVar24,uStack_f8,lVar12);
  (**(code **)(lVar11 + 0x10))(lVar14,uStack_f0,lVar21);
  (**(code **)(lVar10 + 0x10))(lVar26,uStack_e0,lVar4);
  bVar1 = *(byte *)(lVar20 + 0x50);
  uVar27 = (ulong)bVar1 + 0x50 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  uVar18 = lVar17 + uVar27 + 7 & 0xfffffffffffffff8;
  bVar2 = *(byte *)(lVar11 + 0x50);
  uVar13 = bVar2 + uVar18 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(lVar10 + 0x50);
  uVar15 = lVar16 + (ulong)bVar3 + uVar13 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  puVar6 = &UNK_110749fd0;
  _swift_allocObject(&UNK_110749fd0,uVar15 + lStack_d8,bVar1 | bVar2 | bVar3 | 7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(long *)(puVar6 + 0x20) = lVar12;
  *(long *)(puVar6 + 0x28) = lVar21;
  *(undefined8 *)(puVar6 + 0x30) = uVar9;
  uVar25 = *(undefined8 *)(lVar22 + 0x68);
  *(undefined8 *)(puVar6 + 0x38) = uVar25;
  uVar19 = *(undefined8 *)(lVar22 + 0x70);
  *(undefined8 *)(puVar6 + 0x40) = uVar19;
  uVar23 = *(undefined8 *)(lVar22 + 0x78);
  *(undefined8 *)(puVar6 + 0x48) = uVar23;
  (**(code **)(lVar20 + 0x20))(puVar6 + uVar27,lStack_110);
  *(long **)(puVar6 + uVar18) = unaff_x20;
  (**(code **)(lVar11 + 0x20))(puVar6 + uVar13,lStack_108,lVar21);
  (**(code **)(lVar10 + 0x20))(puVar6 + uVar15,lStack_100,lVar4);
  _swift_retain(unaff_x20);
  uVar7 = 0;
  func_0x0001000abba4(0,0,lStack_e8,&UNK_10dcd9878,puVar6);
  uVar8 = 0;
  lStack_98 = lVar12;
  lStack_90 = lVar21;
  uStack_88 = uVar9;
  uStack_80 = uVar25;
  uStack_78 = uVar19;
  uStack_70 = uVar23;
  FUN_10415a7ac(0,&lStack_98);
  func_0x00010415f734(uVar7,param_5,uVar8);
  _swift_release(uVar7);
  return;
}



/* Entry: 104169198; end: 1041691b7;  */

void FUN_104169198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_6;
  *(undefined8 *)(unaff_x22 + 0x168) = param_7;
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041691b8,0,0);
  return;
}



/* Entry: 1041691b8; end: 1041692ff;  */

void FUN_1041691b8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x160);
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    plVar5 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = 0x1041692ac;
    puVar1 = PTR___sytN_11034f1b0 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )(plVar5,*(undefined8 *)(unaff_x22 + 0x148),puVar1,puVar1,0,0,&UNK_10dcd9888,unaff_x22 + 0x110,
      puVar1,puVar1);
    return;
  }
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar6 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x178) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_104169300;
  lVar3 = *(long *)(unaff_x22 + 0x168);
  lVar2 = *(long *)(unaff_x22 + 0x150);
  plVar5 = *(long **)(unaff_x22 + 0x158);
  plVar6[0x23] = *(long *)(unaff_x22 + 0x160);
  plVar6[0x24] = lVar3;
  plVar6[0x21] = lVar2;
  plVar6[0x22] = (long)plVar5;
  plVar6[0x1b] = unaff_x22 + 0x140;
  plVar6[0x25] = *plVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104169574,0,0);
  return;
}



/* Entry: 104169300; end: 1041693ab;  */

void FUN_104169300(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x180) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x178));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104169424,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  _swift_task_alloc();
  *(long **)(lVar2 + 0x188) = plVar1;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_1041693ac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 1041693ac; end: 104169423;  */

void FUN_1041693ac(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x188));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1041693f4,0,0);
  return;
}



/* Entry: 104169424; end: 1041694bf;  */

void FUN_104169424(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  __sScg9cancelAllyyF(uVar3,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 400) = plVar2;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1041694c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 1041694c0; end: 104169507;  */

void FUN_1041694c0(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104169508,0,0);
  return;
}



/* Entry: 104169508; end: 10416954b;  */

void FUN_104169508(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar1);
  return;
}



/* Entry: 10416954c; end: 104169573;  */

void FUN_10416954c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_5;
  *(undefined8 *)(unaff_x22 + 0x120) = param_6;
  *(undefined8 *)(unaff_x22 + 0x108) = param_3;
  *(undefined8 **)(unaff_x22 + 0x110) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x128) = *param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104169574,0,0);
  return;
}



/* Entry: 104169574; end: 104169aeb;  */

void FUN_104169574(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  ulong *puVar17;
  long lVar18;
  long unaff_x22;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  lVar19 = *(long *)(unaff_x22 + 0x128);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar14 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  lVar3 = 0;
  __sScPMa();
  pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar7)(uVar2,1,1,lVar3);
  lVar18 = *(long *)(lVar19 + 0x50);
  *(long *)(unaff_x22 + 0x130) = lVar18;
  lVar21 = *(long *)(lVar18 + -8);
  lVar3 = *(long *)(lVar21 + 0x40);
  uVar4 = lVar3 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  (**(code **)(lVar21 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar21 + 0x50);
  uVar15 = uVar8 + 0x50 & (uVar8 ^ 0xffffffffffffffff);
  uVar20 = lVar3 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_110749ff8;
  _swift_allocObject(&UNK_110749ff8,uVar20 + 8,uVar8 | 7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(long *)(puVar5 + 0x20) = lVar18;
  lVar22 = *(long *)(lVar19 + 0x58);
  *(long *)(unaff_x22 + 0x138) = lVar22;
  *(long *)(puVar5 + 0x28) = lVar22;
  lVar9 = *(long *)(lVar19 + 0x60);
  *(long *)(unaff_x22 + 0x140) = lVar9;
  *(long *)(puVar5 + 0x30) = lVar9;
  uVar10 = *(undefined8 *)(lVar19 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar10;
  *(undefined8 *)(puVar5 + 0x38) = uVar10;
  uVar11 = *(undefined8 *)(lVar19 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x150) = uVar11;
  *(undefined8 *)(puVar5 + 0x40) = uVar11;
  uVar12 = *(undefined8 *)(lVar19 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x158) = uVar12;
  *(undefined8 *)(puVar5 + 0x48) = uVar12;
  (**(code **)(lVar21 + 0x20))(puVar5 + uVar15,uVar4,lVar18);
  *(undefined8 *)(puVar5 + uVar20) = uVar13;
  _swift_task_dealloc(uVar4);
  _swift_retain(uVar13);
  func_0x000101e9558c(uVar2,&UNK_10dcd9898,puVar5);
  func_0x0001000abe54(uVar2);
  _swift_task_dealloc(uVar2);
  uVar2 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  (*pcVar7)();
  lVar3 = *(long *)(lVar22 + -8);
  lVar19 = *(long *)(lVar3 + 0x40);
  uVar4 = lVar19 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  (**(code **)(lVar3 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar20 = uVar8 + 0x50 & (uVar8 ^ 0xffffffffffffffff);
  uVar15 = lVar19 + uVar20 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_11074a020;
  _swift_allocObject(&UNK_11074a020,uVar15 + 8,uVar8 | 7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(long *)(puVar5 + 0x20) = lVar18;
  *(long *)(puVar5 + 0x28) = lVar22;
  *(long *)(puVar5 + 0x30) = lVar9;
  *(undefined8 *)(puVar5 + 0x38) = uVar10;
  *(undefined8 *)(puVar5 + 0x40) = uVar11;
  *(undefined8 *)(puVar5 + 0x48) = uVar12;
  (**(code **)(lVar3 + 0x20))(puVar5 + uVar20,uVar4,lVar22);
  *(undefined8 *)(puVar5 + uVar15) = uVar13;
  _swift_task_dealloc(uVar4);
  _swift_retain(uVar13);
  func_0x000101e9558c(uVar2,&UNK_10dcd98a8,puVar5);
  func_0x0001000abe54(uVar2);
  _swift_task_dealloc(uVar2);
  lVar19 = *(long *)(lVar9 + -8);
  lVar23 = *(long *)(lVar19 + 0x40);
  uVar2 = lVar23 + 0xf;
  uVar8 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  lVar3 = 0;
  __sSqMa(0,lVar9);
  lVar21 = *(long *)(lVar3 + -8);
  uVar15 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar21 + 0x10))();
  uVar4 = uVar15;
  (**(code **)(lVar19 + 0x30))(uVar15,1,lVar9);
  if ((int)uVar4 == 1) {
    (**(code **)(lVar21 + 8))(uVar15,lVar3);
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x110);
    pcVar16 = *(code **)(lVar19 + 0x20);
    (*pcVar16)(uVar8,uVar15,lVar9);
    _swift_task_dealloc(uVar15);
    uVar15 = uVar14 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar15);
    (*pcVar7)();
    uVar2 = uVar2 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar2);
    (**(code **)(lVar19 + 0x10))();
    uVar14 = (ulong)*(byte *)(lVar19 + 0x50);
    uVar4 = uVar14 + 0x50 & (uVar14 ^ 0xffffffffffffffff);
    uVar20 = lVar23 + uVar4 + 7 & 0xfffffffffffffff8;
    puVar5 = &UNK_11074a048;
    _swift_allocObject(&UNK_11074a048,uVar20 + 8,uVar14 | 7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(long *)(puVar5 + 0x20) = lVar18;
    *(long *)(puVar5 + 0x28) = lVar22;
    *(long *)(puVar5 + 0x30) = lVar9;
    *(undefined8 *)(puVar5 + 0x38) = uVar10;
    *(undefined8 *)(puVar5 + 0x40) = uVar11;
    *(undefined8 *)(puVar5 + 0x48) = uVar12;
    (*pcVar16)(puVar5 + uVar4,uVar2,lVar9);
    *(undefined8 *)(puVar5 + uVar20) = uVar13;
    _swift_task_dealloc(uVar2);
    _swift_retain(uVar13);
    func_0x000101e9558c(uVar15,&UNK_10dcd98b8,puVar5);
    func_0x0001000abe54(uVar15);
    (**(code **)(lVar19 + 8))(uVar8,lVar9);
  }
  puVar17 = *(ulong **)(unaff_x22 + 0xd8);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar8);
  uVar2 = *puVar17;
  uVar13 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar13;
  uVar14 = uVar2;
  __sScg7isEmptySbvg(uVar2,PTR___sytN_11034f1b0 + 8,uVar13,PTR___ss5ErrorWS_11034ee10);
  if ((uVar14 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104169a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x110);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  *(int *)(unaff_x22 + 0x180) = iVar1;
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(lVar3 + 0x10);
  if (iVar1 != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar6;
    uVar13 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_104169aec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x184,0,0,uVar13);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x185,uVar2,FUN_104169b48,unaff_x22 + 0xe0);
  return;
}



/* Entry: 104169aec; end: 104169b47;  */

void FUN_104169aec(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104169b70;
  }
  else {
    *(long *)(lVar2 + 0x178) = unaff_x20;
    pcVar1 = FUN_104169c54;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104169b48; end: 104169b6f;  */

void FUN_104169b48(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104169b70;
  }
  else {
    *(long *)(unaff_x22 + 0x178) = unaff_x20;
    pcVar1 = FUN_104169c54;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104169b70; end: 104169c53;  */

void FUN_104169b70(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x22;
  
  uVar4 = **(ulong **)(unaff_x22 + 0xd8);
  uVar1 = uVar4;
  __sScg7isEmptySbvg(uVar4,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x160),
                     PTR___ss5ErrorWS_11034ee10);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104169bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(int *)(unaff_x22 + 0x180) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar2;
    uVar3 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_104169aec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x184,0,0,uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x185,uVar4,FUN_104169b48,unaff_x22 + 0xe0);
  return;
}



/* Entry: 104169c54; end: 10416a04b;  */

void FUN_104169c54(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long unaff_x22;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar7;
  uVar4 = 0;
  FUN_10415a7ac(0);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
  uVar5 = 0xff;
  func_0x000104166520(0xff,(undefined8 *)(unaff_x22 + 0x88));
  uVar6 = 0;
  __sSqMa(0,uVar5);
  FUN_104146aa0(unaff_x22 + 0xb8,FUN_10416cce0,unaff_x22 + 0x10,uVar16,uVar4,uVar6);
  lVar1 = *(long *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  lVar2 = *(long *)(unaff_x22 + 0xd0);
  puVar20 = PTR___sytN_11034f1b0;
  if (lVar1 != 0) {
    lVar18 = *(long *)(lVar2 + 0x10);
    if (lVar18 == 0) {
      _swift_errorRetain(uVar6);
      _swift_retain(uVar5);
    }
    else {
      _swift_errorRetain(uVar6);
      uVar7 = 0;
      __sScEMa();
      uVar10 = uVar7;
      func_0x000100f5abbc();
      _swift_retain(uVar5);
      puVar20 = PTR___ss5ErrorWS_11034ee10;
      puVar11 = (undefined8 *)(lVar2 + 0x20);
      do {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
        uVar16 = *puVar11;
        uVar9 = uVar7;
        uVar14 = uVar10;
        _swift_allocError(uVar7,uVar10,0,0);
        __sS2cEycfC(uVar14);
        puVar15 = (undefined8 *)puVar20;
        _swift_allocError(uVar4,puVar20,0,0);
        *puVar15 = uVar9;
        _swift_continuation_throwingResumeWithError(uVar16,uVar4);
        lVar18 = lVar18 + -1;
        puVar11 = puVar11 + 1;
      } while (lVar18 != 0);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x130);
    __sScT6cancelyyF(uVar5,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    puVar3 = PTR___sSciTL_11034fea8;
    puVar20 = PTR___s7ElementSciTl_11034fb58;
    uVar8 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar7,uVar19,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    uVar7 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,uVar4,uVar9,puVar3,puVar20);
    uVar9 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,uVar10,uVar16,puVar3,puVar20);
    uVar10 = 0xff;
    __sSqMa(0xff,uVar9);
    puVar20 = PTR___sytN_11034f1b0;
    uVar9 = 0xff;
    _swift_getTupleTypeMetadata3(0xff,uVar8,uVar7,uVar10,0,0);
    uVar10 = 0xff;
    __sSqMa(0xff,uVar9);
    lVar18 = 0;
    __ss6ResultOMa(0,uVar10,uVar14,PTR___ss5ErrorWS_11034ee10);
    puVar11 = (undefined8 *)(*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    *puVar11 = uVar6;
    _swift_storeEnumTagMultiPayload();
    func_0x000103969044(puVar11,lVar1,lVar18);
    _swift_release(uVar5);
    _swift_task_dealloc(puVar11);
  }
  puVar3 = PTR___ss5ErrorWS_11034ee10;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x178);
  __sScg9cancelAllyyF(**(undefined8 **)(unaff_x22 + 0xd8),puVar20 + 8,
                      *(undefined8 *)(unaff_x22 + 0x160),PTR___ss5ErrorWS_11034ee10);
  FUN_10416cd58(lVar1,uVar6,uVar5,lVar2);
  _swift_errorRelease(uVar10);
  uVar17 = **(ulong **)(unaff_x22 + 0xd8);
  uVar12 = uVar17;
  __sScg7isEmptySbvg(uVar17,puVar20 + 8,*(undefined8 *)(unaff_x22 + 0x160),puVar3);
  if ((uVar12 & 1) == 0) {
    if (*(int *)(unaff_x22 + 0x180) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
                (unaff_x22 + 0x185,uVar17,FUN_104169b48,unaff_x22 + 0xe0);
      return;
    }
    plVar13 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar13;
    uVar5 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar13 = unaff_x22;
    plVar13[1] = (long)FUN_104169aec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x184,0,0,uVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104169f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10416a04c; end: 10416a2d3;  */

void FUN_10416a04c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 in_x3;
  long *in_x4;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar14 = *in_x4;
  uVar9 = *(undefined8 *)(lVar14 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar9;
  lVar10 = *(long *)(lVar14 + 0x50);
  *(long *)(unaff_x22 + 0x1c8) = lVar10;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,lVar10,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x1d0) = lVar3;
  uVar11 = *(undefined8 *)(lVar14 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar11;
  uVar12 = *(undefined8 *)(lVar14 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar12;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar11,uVar12,puVar2,puVar1);
  uVar13 = *(undefined8 *)(lVar14 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar13;
  uVar15 = *(undefined8 *)(lVar14 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar15;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar13,uVar15,puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,lVar3,uVar4,uVar6,0,0);
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar5;
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar4 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar4;
  lVar14 = 0;
  __ss6ResultOMa(0,uVar6,uVar4,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0x208) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x210) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(long *)(unaff_x22 + 0x58) = lVar10;
  *(ulong *)(unaff_x22 + 0x220) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  uVar4 = 0xff;
  FUN_104163e18();
  *(undefined8 *)(unaff_x22 + 0x228) = uVar4;
  lVar14 = 0;
  __sSqMa(0,uVar4);
  *(long *)(unaff_x22 + 0x230) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x238) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar8;
  lVar14 = 0;
  __sSqMa(0,lVar3);
  *(long *)(unaff_x22 + 0x250) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 600) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar8;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar8;
  lVar3 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar8;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar10,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x288) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10416a2d4,0,0);
  return;
}



/* Entry: 10416a2d4; end: 10416a373;  */

void FUN_10416a2d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  lVar3 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),uVar2);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar4,uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_10416a374;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_10416b6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 10416a374; end: 10416a443;  */

void FUN_10416a374(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10416d2a8,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1c0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1c8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_10416a444;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 10416a444; end: 10416a49f;  */

void FUN_10416a444(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10416a4a0;
  }
  else {
    pcVar1 = (code *)0x10416d2ac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}


