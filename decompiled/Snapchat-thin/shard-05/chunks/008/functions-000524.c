/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10410ba44; end: 10410bab3;  */

void FUN_10410ba44(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010410bab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10410bab4; end: 10410bafb;  */

void FUN_10410bab4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10410b214();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Entry: 10410bafc; end: 10410bb8b;  */

void FUN_10410bafc(undefined8 param_1,long param_2)

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



/* Entry: 10410bb8c; end: 10410bb9b;  */

void FUN_10410bb8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd81c0,param_1);
  return;
}



/* Entry: 10410bb9c; end: 10410bc27;  */

void FUN_10410bb9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x30);
    }
  }
  return;
}



/* Entry: 10410bc28; end: 10410bcf3;  */

long * FUN_10410bc28(long *param_1,long *param_2,long param_3)

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



/* Entry: 10410bcf4; end: 10410befb;  */

void FUN_10410bcf4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar1 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010410bd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(long *)(lVar3 + 0x40) + param_1 + uVar2 & (uVar2 ^ 0xffffffffffffffff))
  ;
  return;
}



/* Entry: 10410befc; end: 10410c047;  */

uint * FUN_10410befc(uint *param_1,uint param_2,long param_3)

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
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_10410bfc0;
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
      goto LAB_10410bf58;
    }
    if (1 < uVar12) goto LAB_10410bf54;
  }
  else {
LAB_10410bf54:
    uVar12 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_10410bf58:
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
LAB_10410bfc0:
  if (uVar7 <= uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010410bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))();
    return param_1;
  }
  puVar6 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010410bfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 0x30))(puVar6,uVar7,*(long *)(param_3 + 0x18));
  return puVar6;
}



/* Entry: 10410c048; end: 10410c243;  */

void FUN_10410c048(uint *param_1,undefined8 param_2,uint param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x00010410c1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar7,lVar8);
      return;
    }
  }
  return;
}



/* Entry: 10410c244; end: 10410c25f;  */

void FUN_10410c244(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e7f0e68);
  return;
}



/* Entry: 10410c260; end: 10410c2a3;  */

void FUN_10410c260(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 10410c2a4; end: 10410c2b7;  */

void FUN_10410c2a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f0ef8);
  return;
}



/* Entry: 10410c2b8; end: 10410c3bf;  */

void FUN_10410c2b8(long param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = 0;
  __sSqMa(0,lVar3);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&uStack_80 - extraout_x8;
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  lStack_70 = lVar3;
  FUN_1041286f4(0,&uStack_80);
  lVar2 = *(long *)(lVar3 + -8);
  (**(code **)(lVar2 + 0x10))(lVar4,unaff_x20 + *(int *)(param_1 + 0x48),lVar3);
  (**(code **)(lVar2 + 0x38))(lVar4,0,1,lVar3);
  FUN_1041290d8();
  (**(code **)(lVar5 + 8))(lVar4,lVar1);
  FUN_10410c3c0(unaff_x20);
  return;
}



/* Entry: 10410c3c0; end: 10410c483;  */

void FUN_10410c3c0(long *param_1)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_48 = *(undefined8 *)(lVar1 + 0x58);
  uStack_50 = *(undefined8 *)(lVar1 + 0x50);
  uStack_38 = *(undefined8 *)(lVar1 + 0x68);
  uStack_40 = *(undefined8 *)(lVar1 + 0x60);
  uStack_28 = *(undefined8 *)(lVar1 + 0x78);
  uStack_30 = *(undefined8 *)(lVar1 + 0x70);
  lVar1 = 0;
  FUN_10410d6b0(0,&uStack_50);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Entry: 10410c484; end: 10410c4a3;  */

void FUN_10410c484(void)

{
  func_0x00010410c444();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10410c4a4; end: 10410c5fb;  */

void FUN_10410c4a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long unaff_x22;
  long lVar10;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = unaff_x20;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar10 = *unaff_x20;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x68),*(undefined8 *)(lVar10 + 0x50),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x70),*(undefined8 *)(lVar10 + 0x58),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x78),*(undefined8 *)(lVar10 + 0x60),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
  lVar10 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,uVar6,0,0);
  *(long *)(unaff_x22 + 0x40) = lVar10;
  lVar7 = 0;
  __sSqMa(0,lVar10);
  *(long *)(unaff_x22 + 0x48) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar8;
  lVar10 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar10;
  uVar8 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar9;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar9;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar9;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410c5fc,0,0);
  return;
}



/* Entry: 10410c5fc; end: 10410c6ab;  */

void FUN_10410c5fc(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = *(long **)(*(long *)(unaff_x22 + 0x18) + 0x10);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10410c650;
  plVar1[2] = *(long *)(unaff_x22 + 0x58);
  plVar1[3] = (long)plVar2;
  plVar1[4] = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104123960,0,0);
  return;
}



/* Entry: 10410c6ac; end: 10410c97f;  */

void FUN_10410c6ac(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  code *pcVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar8 = *(long *)(unaff_x22 + 0x60);
  lVar14 = *(long *)(unaff_x22 + 0x40);
  uVar7 = uVar1;
  (**(code **)(lVar8 + 0x30))(uVar1,1,lVar14);
  if ((int)uVar7 == 1) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x48));
    lVar8 = 0;
    _swift_getTupleTypeMetadata3(0,uVar15,uVar7,uVar12,0,0);
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(uVar17,1,1,lVar8);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar2 = *(long *)(unaff_x22 + 0x68);
    lVar20 = *(long *)(unaff_x22 + 0x70);
    lVar13 = *(long *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    lVar21 = *(long *)(unaff_x22 + 0x20);
    lVar10 = *(long *)(unaff_x22 + 0x10);
    (**(code **)(lVar8 + 0x20))(uVar12,uVar1,lVar14);
    lVar9 = 0;
    _swift_getTupleTypeMetadata3(0,lVar21,lVar13,lVar3,0,0);
    iVar5 = *(int *)(lVar9 + 0x30);
    pcVar19 = *(code **)(lVar8 + 0x10);
    (*pcVar19)(uVar7,uVar12,lVar14);
    lVar11 = *(long *)(lVar21 + -8);
    (**(code **)(lVar11 + 0x20))(lVar10,uVar7,lVar21);
    (*pcVar19)(lVar20,uVar12,lVar14);
    lVar21 = *(long *)(lVar13 + -8);
    (**(code **)(lVar21 + 0x20))(lVar10 + iVar5,lVar20 + *(int *)(lVar14 + 0x30),lVar13);
    (*pcVar19)(lVar2,uVar12,lVar14);
    lVar13 = (long)*(int *)(lVar14 + 0x40);
    lVar20 = *(long *)(lVar3 + -8);
    lVar8 = lVar2 + lVar13;
    (**(code **)(lVar20 + 0x30))(lVar8,1);
    if ((int)lVar8 == 1) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x10410c980);
      (*pcVar19)();
    }
    lVar8 = *(long *)(unaff_x22 + 0x78);
    lVar3 = *(long *)(unaff_x22 + 0x68);
    lVar4 = *(long *)(unaff_x22 + 0x70);
    lVar10 = *(long *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar22 = *(long *)(unaff_x22 + 0x10);
    iVar5 = *(int *)(lVar9 + 0x40);
    iVar6 = *(int *)(lVar14 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x40));
    (**(code **)(lVar20 + 0x20))(lVar22 + iVar5,lVar2 + lVar13,uVar7);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar22,0,1,lVar9);
    pcVar19 = *(code **)(lVar21 + 8);
    (*pcVar19)(lVar3 + iVar6,uVar1);
    pcVar16 = *(code **)(lVar11 + 8);
    (*pcVar16)(lVar3,uVar12);
    pcVar18 = *(code **)(*(long *)(lVar10 + -8) + 8);
    (*pcVar18)(lVar4 + lVar13,lVar10);
    (*pcVar16)(lVar4,uVar12);
    (*pcVar18)(lVar8 + lVar13,lVar10);
    (*pcVar19)(lVar8 + iVar6,uVar1);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010410c978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10410c980; end: 10410c9e3;  */

void FUN_10410c980(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010410c9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10410c9e4; end: 10410c9fb;  */

void FUN_10410c9e4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410c9fc,0,0);
  return;
}



/* Entry: 10410c9fc; end: 10410ca8b;  */

void FUN_10410c9fc(void)

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
  plVar8[1] = 0x10410ca50;
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410c5fc,0,0);
  return;
}



/* Entry: 10410ca8c; end: 10410cadb;  */

void FUN_10410ca8c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10410cadc;
  plVar1[2] = param_1;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410c9fc,0,0);
  return;
}



/* Entry: 10410cadc; end: 10410cb17;  */

void FUN_10410cadc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010410cb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10410cb18; end: 10410cbef;  */

void FUN_10410cb18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  plVar3[1] = (long)FUN_10410cbf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 10410cbf0; end: 10410cc5f;  */

void FUN_10410cbf0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010410cc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10410cc60; end: 10410cca7;  */

void FUN_10410cc60(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10410c2b8();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Entry: 10410cca8; end: 10410cd37;  */

void FUN_10410cca8(undefined8 param_1,long param_2)

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



/* Entry: 10410cd38; end: 10410cd4f;  */

void FUN_10410cd38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd8310,param_1);
  return;
}



/* Entry: 10410cd50; end: 10410cdfb;  */

void FUN_10410cd50(long param_1)

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



/* Entry: 10410cdfc; end: 10410cf2f;  */

long * FUN_10410cdfc(long *param_1,long *param_2,long param_3)

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



/* Entry: 10410cf30; end: 10410cfaf;  */

void FUN_10410cf30(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010410cfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(uVar2 + *(long *)(lVar4 + 0x40) + uVar1 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 10410cfb0; end: 10410d24f;  */

long FUN_10410cfb0(long param_1,long param_2,long param_3)

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



/* Entry: 10410d250; end: 10410d3ff;  */

uint * FUN_10410d250(uint *param_1,uint param_2,long param_3)

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
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_10410d33c;
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
      goto LAB_10410d2d4;
    }
    if (1 < uVar9) goto LAB_10410d2d0;
  }
  else {
LAB_10410d2d0:
    uVar9 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_10410d2d4:
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
LAB_10410d33c:
  if (uVar4 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010410d354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar14 + 0x30))(param_1,uVar4,*(long *)(param_3 + 0x10));
    return param_1;
  }
  puVar7 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar8);
  if (uVar5 != uVar3) {
    puVar7 = (uint *)((long)puVar7 + uVar15 + *(long *)(lVar12 + 0x40) & ~uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010410d3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x30))(puVar7,uVar6,*(long *)(param_3 + 0x20));
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010410d380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x30))();
  return puVar7;
}



/* Entry: 10410d400; end: 10410d647;  */

void FUN_10410d400(uint *param_1,undefined8 param_2,uint param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x00010410d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar10,lVar12);
      return;
    }
  }
  return;
}



/* Entry: 10410d648; end: 10410d66b;  */

void FUN_10410d648(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f0f60);
  return;
}



/* Entry: 10410d66c; end: 10410d6af;  */

void FUN_10410d66c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x80);
  return;
}



/* Entry: 10410d6b0; end: 10410d6bb;  */

void FUN_10410d6b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f1008);
  return;
}



/* Entry: 10410d6bc; end: 10410d743;  */

void FUN_10410d6bc(long param_1)

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
  func_0x00010411146c();
  if (plVar2 < (undefined1 *)0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&lStack_50,param_1 + 0x40);
  }
  return;
}



/* Entry: 10410d744; end: 10411145f;  */

long * FUN_10410d744(long *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  uint uVar33;
  long lVar34;
  undefined8 *puVar35;
  long lVar36;
  ulong uVar37;
  undefined8 *puVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  code *pcVar45;
  
  puVar12 = PTR___sSciTL_11034fea8;
  puVar11 = PTR___s7ElementSciTl_11034fb58;
  lVar16 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(param_3 + 0x20);
  lVar34 = *(long *)(lVar16 + -8);
  lVar20 = *(long *)(lVar6 + -8);
  uVar8 = *(uint *)(lVar20 + 0x50);
  uVar22 = (ulong)uVar8 & 0xff;
  uVar37 = *(long *)(lVar34 + 0x40) + uVar22;
  lVar23 = *(long *)(lVar20 + 0x40);
  lVar26 = *(long *)(lVar7 + -8);
  uVar19 = *(uint *)(lVar26 + 0x50);
  uVar27 = (ulong)uVar19 & 0xff;
  lVar21 = *(long *)(lVar26 + 0x40);
  if (*(int *)(lVar26 + 0x54) == 0) {
    lVar21 = lVar21 + 1;
  }
  uVar25 = lVar21 + (lVar23 + uVar27 + (uVar37 & (uVar22 ^ 0xffffffffffffffff)) &
                    (uVar27 ^ 0xffffffffffffffff));
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar16,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar40 = *(long *)(lVar13 + -8);
  uVar33 = *(uint *)(lVar40 + 0x50);
  uVar41 = (ulong)uVar33 & 0xff;
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar6,puVar12,puVar11);
  lVar43 = *(long *)(lVar14 + -8);
  uVar9 = *(uint *)(lVar43 + 0x50);
  uVar32 = (ulong)uVar9 & 0xff;
  uVar44 = uVar32 | 7;
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar7,puVar12,puVar11);
  lVar36 = *(long *)(lVar15 + -8);
  uVar18 = (ulong)*(uint *)(lVar36 + 0x50) & 0xff;
  uVar39 = uVar18 | 7;
  uVar28 = uVar32 | uVar41 | uVar18;
  lVar29 = *(long *)(lVar40 + 0x40);
  if (*(int *)(lVar40 + 0x54) == 0) {
    lVar29 = lVar29 + 1;
  }
  lVar1 = (uVar41 + 8 & (uVar41 ^ 0xffffffffffffffff)) + 1;
  uVar2 = uVar32 + 8;
  lVar31 = *(long *)(lVar43 + 0x40);
  if (*(int *)(lVar43 + 0x54) == 0) {
    lVar31 = lVar31 + 1;
  }
  lVar3 = (uVar2 & (uVar32 ^ 0xffffffffffffffff)) + 1;
  uVar4 = uVar18 + 8;
  lVar30 = *(long *)(lVar36 + 0x40);
  if (*(int *)(lVar36 + 0x54) == 0) {
    lVar30 = lVar30 + 1;
  }
  lVar5 = (uVar4 & (uVar18 ^ 0xffffffffffffffff)) + lVar30 +
          (lVar3 + uVar39 + lVar31 + (lVar1 + uVar44 + lVar29 & (uVar44 ^ 0xffffffffffffffff)) &
          (uVar39 ^ 0xffffffffffffffff)) + 1;
  uVar24 = lVar5 + ((ulong)((uint)uVar28 & 0xf8 ^ 0x1f8) & uVar28 + 8) + 7 & 0xfffffffffffffff8;
  uVar42 = uVar24 + 8;
  if (uVar42 <= uVar25) {
    uVar42 = uVar25;
  }
  uVar24 = uVar24 + 0x10;
  if (uVar24 <= uVar42) {
    uVar24 = uVar42;
  }
  if (uVar24 < 9) {
    uVar24 = 8;
  }
  uVar19 = uVar19 | uVar8;
  uVar28 = uVar28 | ((uVar19 | *(uint *)(lVar34 + 0x50)) & 0xf8 | 7);
  if (((uVar28 != 7) ||
      (((uVar19 | uVar33 | uVar9 | *(uint *)(lVar36 + 0x50) | *(uint *)(lVar34 + 0x50)) >> 0x14 & 1)
       != 0)) || (0x18 < (uVar24 & 0xfffffffffffffff8) + 0x10)) {
    lVar23 = *(long *)param_2;
    *param_1 = lVar23;
    _swift_retain();
    return (long *)(lVar23 + (uVar28 + 0x10 & (uVar28 ^ 0xffffffffffffffff)));
  }
  bVar10 = *(byte *)((long)param_2 + uVar24);
  uVar19 = (uint)bVar10;
  if (4 < bVar10) {
    uVar33 = (uint)uVar24;
    uVar8 = 4;
    if (uVar33 < 4) {
      uVar8 = uVar33;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10410da50;
      uVar19 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar19 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar19 = (uint)(uint3)*param_2;
    }
    else {
      uVar19 = *param_2;
    }
    if (uVar33 < 4) {
      uVar19 = uVar19 | bVar10 - 5 << (ulong)((uVar33 & 3) << 3);
    }
    uVar19 = uVar19 + 5;
  }
LAB_10410da50:
  uVar25 = ~uVar41;
  uVar42 = ~uVar44;
  uVar32 = ~uVar32;
  uVar28 = ~uVar39;
  uVar18 = ~uVar18;
  if ((int)uVar19 < 2) {
    if (uVar19 == 0) {
      uVar18 = ~uVar27;
      (**(code **)(lVar34 + 0x10))(param_1,param_2,lVar16);
      uVar25 = uVar37 + (long)param_1 & ~uVar22;
      uVar37 = (ulong)(uVar37 + (long)param_2) & ~uVar22;
      (**(code **)(lVar20 + 0x10))(uVar25,uVar37,lVar6);
      lVar23 = lVar23 + uVar27;
      uVar25 = uVar25 + lVar23;
      uVar37 = uVar37 + lVar23;
      uVar22 = uVar37 & uVar18;
      (**(code **)(lVar26 + 0x30))(uVar22,1,lVar7);
      if ((int)uVar22 == 0) {
        (**(code **)(lVar26 + 0x10))(uVar25 & uVar18,uVar37 & uVar18,lVar7);
        (**(code **)(lVar26 + 0x38))(uVar25 & uVar18,0,1,lVar7);
        *(undefined1 *)((long)param_1 + uVar24) = 0;
      }
      else {
        _memcpy(uVar25 & uVar18,uVar37 & uVar18,lVar21);
        *(undefined1 *)((long)param_1 + uVar24) = 0;
      }
      goto LAB_10410e0ac;
    }
    if (uVar19 != 1) goto LAB_10410dc7c;
    *param_1 = *(long *)param_2;
    puVar38 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar35 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar38 = *puVar35;
    uVar22 = (long)puVar38 + uVar41 + 8 & uVar25;
    uVar25 = (long)puVar35 + uVar41 + 8 & uVar25;
    pcVar45 = *(code **)(lVar40 + 0x30);
    _swift_retain();
    uVar37 = uVar25;
    (*pcVar45)(uVar25,1,lVar13);
    if ((int)uVar37 == 0) {
      (**(code **)(lVar40 + 0x10))(uVar22,uVar25,lVar13);
      (**(code **)(lVar40 + 0x38))(uVar22,0,1,lVar13);
    }
    else {
      _memcpy(uVar22,uVar25,lVar29);
    }
    *(undefined1 *)(lVar29 + uVar22) = *(undefined1 *)(lVar29 + uVar25);
    puVar38 = (undefined8 *)((long)puVar38 + lVar1 + lVar29 + uVar44 & uVar42);
    puVar35 = (undefined8 *)((long)puVar35 + lVar1 + lVar29 + uVar44 & uVar42);
    *puVar38 = *puVar35;
    uVar22 = uVar2 + (long)puVar38 & uVar32;
    uVar32 = uVar2 + (long)puVar35 & uVar32;
    uVar37 = uVar32;
    (**(code **)(lVar43 + 0x30))(uVar32,1,lVar14);
    if ((int)uVar37 == 0) {
      (**(code **)(lVar43 + 0x10))(uVar22,uVar32,lVar14);
      (**(code **)(lVar43 + 0x38))(uVar22,0,1,lVar14);
    }
    else {
      _memcpy(uVar22,uVar32,lVar31);
    }
    *(undefined1 *)(uVar22 + lVar31) = *(undefined1 *)(uVar32 + lVar31);
    puVar38 = (undefined8 *)((long)puVar38 + lVar3 + lVar31 + uVar39 & uVar28);
    puVar35 = (undefined8 *)((long)puVar35 + lVar3 + lVar31 + uVar39 & uVar28);
    *puVar38 = *puVar35;
    uVar22 = uVar4 + (long)puVar38 & uVar18;
    uVar18 = uVar4 + (long)puVar35 & uVar18;
    uVar37 = uVar18;
    (**(code **)(lVar36 + 0x30))(uVar18,1,lVar15);
    if ((int)uVar37 == 0) {
      (**(code **)(lVar36 + 0x10))(uVar22,uVar18,lVar15);
      (**(code **)(lVar36 + 0x38))(uVar22,0,1,lVar15);
    }
    else {
      _memcpy(uVar22,uVar18,lVar30);
    }
    *(undefined1 *)(uVar22 + lVar30) = *(undefined1 *)(uVar18 + lVar30);
    *(undefined8 *)(((long)param_1 + 0xfU | 7) + lVar5 & 0xffffffffffffff8) =
         *(undefined8 *)(((ulong)((long)param_2 + 0xf) | 7) + lVar5 & 0xffffffffffffff8);
    uVar17 = 1;
LAB_10410e0a0:
    *(undefined1 *)((long)param_1 + uVar24) = uVar17;
  }
  else {
    if (uVar19 == 2) {
      *param_1 = *(long *)param_2;
      puVar38 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      puVar35 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar38 = *puVar35;
      uVar22 = (long)puVar38 + uVar41 + 8 & uVar25;
      uVar25 = (long)puVar35 + uVar41 + 8 & uVar25;
      pcVar45 = *(code **)(lVar40 + 0x30);
      _swift_retain();
      uVar37 = uVar25;
      (*pcVar45)(uVar25,1,lVar13);
      if ((int)uVar37 == 0) {
        (**(code **)(lVar40 + 0x10))(uVar22,uVar25,lVar13);
        (**(code **)(lVar40 + 0x38))(uVar22,0,1,lVar13);
      }
      else {
        _memcpy(uVar22,uVar25,lVar29);
      }
      *(undefined1 *)(lVar29 + uVar22) = *(undefined1 *)(lVar29 + uVar25);
      puVar38 = (undefined8 *)((long)puVar38 + lVar1 + lVar29 + uVar44 & uVar42);
      puVar35 = (undefined8 *)((long)puVar35 + lVar1 + lVar29 + uVar44 & uVar42);
      *puVar38 = *puVar35;
      uVar22 = uVar2 + (long)puVar38 & uVar32;
      uVar32 = uVar2 + (long)puVar35 & uVar32;
      uVar37 = uVar32;
      (**(code **)(lVar43 + 0x30))(uVar32,1,lVar14);
      if ((int)uVar37 == 0) {
        (**(code **)(lVar43 + 0x10))(uVar22,uVar32,lVar14);
        (**(code **)(lVar43 + 0x38))(uVar22,0,1,lVar14);
      }
      else {
        _memcpy(uVar22,uVar32,lVar31);
      }
      *(undefined1 *)(uVar22 + lVar31) = *(undefined1 *)(uVar32 + lVar31);
      puVar38 = (undefined8 *)((long)puVar38 + lVar3 + lVar31 + uVar39 & uVar28);
      puVar35 = (undefined8 *)((long)puVar35 + lVar3 + lVar31 + uVar39 & uVar28);
      *puVar38 = *puVar35;
      uVar22 = uVar4 + (long)puVar38 & uVar18;
      uVar18 = uVar4 + (long)puVar35 & uVar18;
      uVar37 = uVar18;
      (**(code **)(lVar36 + 0x30))(uVar18,1,lVar15);
      if ((int)uVar37 == 0) {
        (**(code **)(lVar36 + 0x10))(uVar22,uVar18,lVar15);
        (**(code **)(lVar36 + 0x38))(uVar22,0,1,lVar15);
      }
      else {
        _memcpy(uVar22,uVar18,lVar30);
      }
      *(undefined1 *)(uVar22 + lVar30) = *(undefined1 *)(uVar18 + lVar30);
      puVar35 = (undefined8 *)(((long)param_1 + 0xfU | 7) + lVar5 & 0xffffffffffffff8);
      puVar38 = (undefined8 *)(((ulong)((long)param_2 + 0xf) | 7) + lVar5 & 0xfffffffffffffff8);
      *puVar35 = *puVar38;
      *(undefined8 *)((long)puVar35 + 0xfU & 0xffffffffffffff8) =
           *(undefined8 *)((long)puVar38 + 0xfU & 0xffffffffffffff8);
      uVar17 = 2;
      goto LAB_10410e0a0;
    }
    if (uVar19 != 3) {
      if (uVar19 == 4) {
        lVar23 = *(long *)param_2;
        _swift_errorRetain(lVar23);
        *param_1 = lVar23;
        *(undefined1 *)((long)param_1 + uVar24) = 4;
        goto LAB_10410e0ac;
      }
LAB_10410dc7c:
      _memcpy(param_1,param_2,uVar24 + 1);
      goto LAB_10410e0ac;
    }
    *param_1 = *(long *)param_2;
    *(undefined1 *)((long)param_1 + uVar24) = 3;
  }
  _swift_retain();
LAB_10410e0ac:
  *(undefined8 *)((long)param_1 + uVar24 + 8 & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)((long)param_2 + uVar24 + 8) & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 104111460; end: 104111477;  */

void FUN_104111460(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e7f107c);
  return;
}



/* Entry: 104111478; end: 1041159b7;  */

void FUN_104111478(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined *puStack_120;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uVar8 = *(ulong *)(param_1 + 0x10);
  puVar3 = (undefined *)0x13f;
  _swift_checkMetadataState();
  if (uVar8 < 0x40) {
    lVar11 = *(long *)(puVar3 + -8);
    uVar8 = *(ulong *)(param_1 + 0x18);
    lVar4 = 0x13f;
    _swift_checkMetadataState();
    if (uVar8 < 0x40) {
      uVar10 = *(ulong *)(param_1 + 0x20);
      lVar5 = 0x13f;
      uVar8 = uVar10;
      __sSqMa();
      if (uVar8 < 0x40) {
        _swift_getTupleTypeLayout3
                  (auStack_a8,lVar11 + 0x40,*(long *)(lVar4 + -8) + 0x40,
                   *(long *)(lVar5 + -8) + 0x40);
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        uVar6 = 0xff;
        puStack_88 = auStack_a8;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar12,puVar3,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        uVar2 = *(undefined8 *)(param_1 + 0x38);
        ppuVar9 = &puStack_120;
        lVar11 = 0x13f;
        puStack_120 = puVar3;
        puStack_118 = (undefined1 *)lVar4;
        puStack_110 = (undefined *)uVar10;
        puStack_108 = (undefined *)uVar6;
        uStack_100 = uVar12;
        uStack_f8 = uVar1;
        uStack_f0 = uVar2;
        FUN_104115dcc();
        if (ppuVar9 < (undefined **)0x40) {
          lVar5 = *(long *)(lVar11 + -8);
          uVar6 = 0xff;
          _swift_getAssociatedTypeWitness
                    (0xff,uVar1,lVar4,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
          ppuVar9 = &puStack_120;
          lVar11 = 0x13f;
          puStack_120 = puVar3;
          puStack_118 = (undefined1 *)lVar4;
          puStack_110 = (undefined *)uVar10;
          puStack_108 = (undefined *)uVar6;
          uStack_100 = uVar12;
          uStack_f8 = uVar1;
          uStack_f0 = uVar2;
          FUN_104115dcc();
          if (ppuVar9 < (undefined **)0x40) {
            uVar6 = 0xff;
            _swift_getAssociatedTypeWitness
                      (0xff,uVar2,uVar10,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
            ppuVar9 = &puStack_120;
            lVar7 = 0x13f;
            puStack_120 = puVar3;
            puStack_118 = (undefined1 *)lVar4;
            puStack_110 = (undefined *)uVar10;
            puStack_108 = (undefined *)uVar6;
            uStack_100 = uVar12;
            uStack_f8 = uVar1;
            uStack_f0 = uVar2;
            FUN_104115dcc();
            if (ppuVar9 < (undefined **)0x40) {
              lVar4 = *(long *)(lVar11 + -8);
              lVar11 = *(long *)(lVar7 + -8);
              _swift_getTupleTypeLayout3(auStack_e8,lVar5 + 0x40,lVar4 + 0x40,lVar11 + 0x40);
              puVar3 = PTR___sBoWV_11034d678 + 0x40;
              _swift_getTupleTypeLayout3(auStack_c8,puVar3,auStack_e8,puVar3);
              puStack_120 = puVar3;
              puStack_80 = auStack_c8;
              _swift_getTupleTypeLayout3(auStack_160,lVar5 + 0x40,lVar4 + 0x40,lVar11 + 0x40);
              puStack_110 = &UNK_10dcd8478;
              puStack_118 = auStack_160;
              puStack_108 = puVar3;
              _swift_getTupleTypeLayout(auStack_140,0,4,&puStack_120);
              puStack_68 = &UNK_10dcd8490;
              puStack_78 = auStack_140;
              puStack_70 = puVar3;
              _swift_initEnumMetadataMultiPayload(param_1,0,5,&puStack_88);
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1041159b8; end: 1041159bb;  */

void FUN_1041159b8(void)

{
  return;
}



/* Entry: 1041159bc; end: 104115dcb;  */

void FUN_1041159bc(uint *param_1,uint param_2,long param_3)

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
  if (param_2 < 5) {
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
    lVar5 = ((ulong)bVar1 + 8 & ((ulong)bVar1 ^ 0xffffffffffffffff)) +
            (uVar11 | 7) + *(long *)(lVar14 + 0x40);
    if (*(int *)(lVar14 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    lVar14 = (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar15 + 0x40) + (uVar9 | 7);
    if (*(int *)(lVar15 + 0x54) == 0) {
      lVar14 = lVar14 + 1;
    }
    lVar15 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40) +
             ((ulong)(bVar2 & 0xf8 ^ 0x1f8) & (ulong)bVar2 + 8);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar15 = lVar15 + 1;
    }
    uVar11 = lVar15 + (lVar14 + (lVar5 + 1U & ((uVar11 | 7) ^ 0xffffffffffffffff)) + 1 &
                      ((uVar9 | 7) ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
    uVar9 = uVar11 + 0x10;
    uVar11 = uVar11 + 8;
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
    if (uVar9 < 9) {
      uVar9 = 8;
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
    lVar5 = ((ulong)bVar1 + 8 & ((ulong)bVar1 ^ 0xffffffffffffffff)) +
            (uVar10 | 7) + *(long *)(lVar12 + 0x40);
    if (*(int *)(lVar12 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    lVar12 = (uVar10 + 8 & (uVar10 ^ 0xffffffffffffffff)) + (uVar11 | 7) + *(long *)(lVar8 + 0x40);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar12 = lVar12 + 1;
    }
    lVar8 = (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40) +
            ((ulong)(bVar2 & 0xf8 ^ 0x1f8) & (ulong)bVar2 + 8);
    if (*(int *)(lVar7 + 0x54) == 0) {
      lVar8 = lVar8 + 1;
    }
    uVar10 = lVar8 + (lVar12 + (lVar5 + 1U & ((uVar10 | 7) ^ 0xffffffffffffffff)) + 1 &
                     ((uVar11 | 7) ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
    uVar11 = uVar10 + 8;
    if (uVar11 <= uVar9) {
      uVar11 = uVar9;
    }
    uVar10 = uVar10 + 0x10;
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
    }
    if (uVar10 < 9) {
      uVar10 = 8;
    }
    param_2 = param_2 - 5;
    uVar6 = (uint)uVar10;
    if (uVar6 < 4) {
      *(char *)((long)param_1 + uVar10) = (char)(param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + '\x05';
      if (uVar6 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar10) = 5;
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



/* Entry: 104115dcc; end: 104115ddf;  */

void FUN_104115dcc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f115c);
  return;
}



/* Entry: 104115de0; end: 104115e5f;  */

void FUN_104115de0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = &UNK_10dcd84c8;
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  __sSqMa();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dcd84e0;
    _swift_initStructMetadata(param_1,0,3,&puStack_38,param_1 + 0x48);
  }
  return;
}



/* Entry: 104115e60; end: 104115f73;  */

long * FUN_104115e60(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(lVar3 + -8);
  uVar1 = (ulong)*(uint *)(lVar6 + 0x50) & 0xff;
  lVar2 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  if (((uint)uVar1 < 8 && (*(uint *)(lVar6 + 0x50) & 0x100000) == 0) &&
      lVar2 - (-uVar1 - 9 | uVar1) < 0x19) {
    *param_1 = *param_2;
    uVar4 = (long)param_1 + uVar1 + 8 & (uVar1 ^ 0xffffffffffffffff);
    uVar5 = (long)param_2 + uVar1 + 8 & (uVar1 ^ 0xffffffffffffffff);
    uVar1 = uVar5;
    (**(code **)(lVar6 + 0x30))(uVar5,1,lVar3);
    if ((int)uVar1 == 0) {
      (**(code **)(lVar6 + 0x10))(uVar4,uVar5,lVar3);
      (**(code **)(lVar6 + 0x38))(uVar4,0,1,lVar3);
    }
    else {
      _memcpy(uVar4,uVar5,lVar2);
    }
    *(undefined1 *)(uVar4 + lVar2) = *(undefined1 *)(uVar5 + lVar2);
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar1 & 0xf8 ^ 0x1f8) & uVar1 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104115f74; end: 104115fdb;  */

void FUN_104115f74(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000104115fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(uVar1 & (uVar5 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Entry: 104115fdc; end: 1041160af;  */

undefined8 * FUN_104115fdc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(lVar5 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar2 = uVar1 + 8 + (long)param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar3 = uVar1 + 8 + (long)param_2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar3;
  (**(code **)(lVar6 + 0x30))(uVar3,1,lVar5);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x10))(uVar2,uVar3,lVar5);
    (**(code **)(lVar6 + 0x38))(uVar2,0,1,lVar5);
    iVar4 = *(int *)(lVar6 + 0x54);
    lVar5 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar4 = *(int *)(lVar6 + 0x54);
    lVar5 = *(long *)(lVar6 + 0x40);
    lVar6 = lVar5;
    if (iVar4 == 0) {
      lVar6 = lVar5 + 1;
    }
    _memcpy(uVar2,uVar3,lVar6);
  }
  if (iVar4 == 0) {
    lVar5 = lVar5 + 1;
  }
  *(undefined1 *)(lVar5 + uVar2) = *(undefined1 *)(lVar5 + uVar3);
  return param_1;
}



/* Entry: 1041160b0; end: 1041161cf;  */

undefined8 * FUN_1041160b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar3 = uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar4 = uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff);
  pcVar7 = *(code **)(lVar6 + 0x30);
  uVar2 = uVar3;
  (*pcVar7)(uVar3,1,lVar5);
  uVar1 = uVar4;
  (*pcVar7)(uVar4,1,lVar5);
  if ((int)uVar2 == 0) {
    if ((int)uVar1 == 0) {
      (**(code **)(lVar6 + 0x18))(uVar3,uVar4,lVar5);
      goto LAB_104116184;
    }
    (**(code **)(lVar6 + 8))(uVar3,lVar5);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x10))(uVar3,uVar4,lVar5);
    (**(code **)(lVar6 + 0x38))(uVar3,0,1,lVar5);
    goto LAB_104116184;
  }
  lVar5 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  _memcpy(uVar3,uVar4,lVar5);
LAB_104116184:
  lVar5 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  *(undefined1 *)(lVar5 + uVar3) = *(undefined1 *)(lVar5 + uVar4);
  return param_1;
}



/* Entry: 1041161d0; end: 1041162a3;  */

undefined8 * FUN_1041161d0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(lVar5 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar2 = uVar1 + 8 + (long)param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar3 = uVar1 + 8 + (long)param_2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar3;
  (**(code **)(lVar6 + 0x30))(uVar3,1,lVar5);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x20))(uVar2,uVar3,lVar5);
    (**(code **)(lVar6 + 0x38))(uVar2,0,1,lVar5);
    iVar4 = *(int *)(lVar6 + 0x54);
    lVar5 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar4 = *(int *)(lVar6 + 0x54);
    lVar5 = *(long *)(lVar6 + 0x40);
    lVar6 = lVar5;
    if (iVar4 == 0) {
      lVar6 = lVar5 + 1;
    }
    _memcpy(uVar2,uVar3,lVar6);
  }
  if (iVar4 == 0) {
    lVar5 = lVar5 + 1;
  }
  *(undefined1 *)(lVar5 + uVar2) = *(undefined1 *)(lVar5 + uVar3);
  return param_1;
}



/* Entry: 1041162a4; end: 1041163c3;  */

undefined8 * FUN_1041162a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar3 = uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar4 = uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff);
  pcVar7 = *(code **)(lVar6 + 0x30);
  uVar2 = uVar3;
  (*pcVar7)(uVar3,1,lVar5);
  uVar1 = uVar4;
  (*pcVar7)(uVar4,1,lVar5);
  if ((int)uVar2 == 0) {
    if ((int)uVar1 == 0) {
      (**(code **)(lVar6 + 0x28))(uVar3,uVar4,lVar5);
      goto LAB_104116378;
    }
    (**(code **)(lVar6 + 8))(uVar3,lVar5);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x20))(uVar3,uVar4,lVar5);
    (**(code **)(lVar6 + 0x38))(uVar3,0,1,lVar5);
    goto LAB_104116378;
  }
  lVar5 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  _memcpy(uVar3,uVar4,lVar5);
LAB_104116378:
  lVar5 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  *(undefined1 *)(lVar5 + uVar3) = *(undefined1 *)(lVar5 + uVar4);
  return param_1;
}



/* Entry: 1041163c4; end: 104116537;  */

int FUN_1041163c4(ulong *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x28) + -8);
  iVar3 = *(int *)(lVar9 + 0x54);
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar6 = iVar3 - 1;
  }
  uVar2 = uVar6;
  if (uVar6 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  lVar1 = 1;
  if (iVar3 == 0) {
    lVar1 = 2;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar4 = *(byte *)(lVar9 + 0x50);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_104116484;
  uVar8 = lVar1 + *(long *)(lVar9 + 0x40) + ((ulong)bVar4 + 8 & ((ulong)bVar4 ^ 0xffffffffffffffff))
  ;
  uVar7 = (uint)uVar8;
  uVar5 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar10 = (param_2 - uVar2) + ~(-1 << (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar5 & 0x1f);
    if (uVar10 < 0xff) {
      if (uVar10 == 0) goto LAB_104116484;
      goto LAB_104116444;
    }
    if (uVar10 < 0xffff) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_104116444:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar10 != 0) {
    uVar6 = 0;
    if (uVar7 < 4) {
      uVar6 = uVar10 - 1 << (ulong)(uVar5 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar5 = 4;
      if (uVar7 < 4) {
        uVar5 = uVar7;
      }
      if ((int)uVar5 < 3) {
        if (uVar5 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar5 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)(uint)*param_1;
      }
    }
    return uVar2 + ((uint)uVar8 | uVar6) + 1;
  }
LAB_104116484:
  if (uVar6 < 0x7fffffff) {
    uVar8 = *param_1;
    if (0xfffffffe < uVar8) {
      uVar8 = 0xffffffff;
    }
    iVar3 = 0;
    if (1 < (int)uVar8 + 1U) {
      iVar3 = (int)uVar8;
    }
    return iVar3;
  }
  uVar6 = (int)param_1 + (uint)bVar4 + 8 & ~(uint)bVar4;
  (**(code **)(lVar9 + 0x30))();
  iVar3 = 0;
  if (uVar6 != 0) {
    iVar3 = uVar6 - 1;
  }
  return iVar3;
}



/* Entry: 104116538; end: 104116873;  */

void FUN_104116538(ulong *param_1,uint param_2,uint param_3,long param_4)

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
  int iVar12;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x28) + -8);
  iVar12 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar12 != 0) {
    uVar2 = iVar12 - 1;
  }
  uVar7 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar7 = 0x7ffffffe;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar6 = *(long *)(lVar8 + 0x40);
  if (iVar12 == 0) {
    lVar6 = lVar6 + 1;
  }
  lVar1 = lVar6 + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + 1;
  uVar5 = (uint)lVar1;
  bVar10 = 0;
  if (uVar7 <= param_3 && param_3 - uVar7 != 0) {
    if (uVar5 < 4) {
      uVar3 = (param_3 - uVar7) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f);
      bVar10 = 2;
      if (0xfffe < uVar3) {
        bVar10 = 4;
      }
      if (uVar3 < 0xff) {
        bVar10 = uVar3 != 0;
      }
    }
    else {
      bVar10 = 1;
    }
  }
  if (uVar7 < param_2) {
    param_2 = param_2 + ~uVar7;
    if (uVar5 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
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
      iVar12 = 1;
    }
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar12;
      }
    }
    else if (bVar10 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar12;
    }
  }
  else {
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar10 == 2) {
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
                    /* WARNING: Could not recover jumptable at 0x00010411675c. Too many branches */
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



/* Entry: 104116874; end: 10411d5bb;  */

void FUN_104116874(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010411146c(0,&lStack_90);
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
    func_0x000104111460(0,&lStack_90);
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
    func_0x000104111460(0,&lStack_90);
    uVar5 = 3;
  }
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x44)) = uVar5;
  return;
}



/* Entry: 10411d5bc; end: 10411d5ff;  */

void FUN_10411d5bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f1258);
  return;
}



/* Entry: 10411d600; end: 10411d643;  */

undefined8 * FUN_10411d600(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010411d5d4(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010411d5f0(uVar2,uVar4);
  return param_1;
}



/* Entry: 10411d644; end: 10411d67b;  */

undefined8 * FUN_10411d644(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010411d5f0(uVar1,uVar2);
  return param_1;
}



/* Entry: 10411d67c; end: 10411d79f;  */

int FUN_10411d67c(int *param_1,uint param_2)

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



/* Entry: 10411d7a0; end: 10411d7cb;  */

void FUN_10411d7a0(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  if (0x7fffffffffffffff < param_1) {
    uVar1 = param_3;
    param_1 = param_2;
  }
  _swift_retain(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10411d7cc; end: 10411d7db;  */

void FUN_10411d7cc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  if (0x7fffffffffffffff < *param_1) {
    uVar1 = param_1[2];
    uVar2 = param_1[1];
  }
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10411d7dc; end: 10411d807;  */

void FUN_10411d7dc(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  if (0x7fffffffffffffff < param_1) {
    uVar1 = param_3;
    param_1 = param_2;
  }
  _swift_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10411d808; end: 10411d833;  */

undefined8 * FUN_10411d808(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10411d7a0(uVar1,uVar3,uVar6);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  FUN_10411d7dc(uVar2,uVar4,uVar5);
  return param_1;
}



/* Entry: 10411d834; end: 10411d977;  */

void FUN_10411d834(long param_1)

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
    _swift_getTupleTypeLayout2(auStack_60,&UNK_10dcd8478,*(long *)(lVar8 + -8) + 0x40);
    _swift_initEnumMetadataSingleCase(param_1,0,auStack_60);
    *(undefined4 *)(*(long *)(param_1 + -8) + 0x54) = uStack_4c;
  }
  return;
}



/* Entry: 10411d978; end: 10411f4db;  */

long * FUN_10411d978(long *param_1,long *param_2,long param_3)

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
LAB_10411db5c:
    if (uVar21 == 1) {
LAB_10411db64:
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
      if (uVar8 == 0) goto LAB_10411db5c;
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
      goto LAB_10411db5c;
    }
    if ((uVar21 | bVar7 - 2 << (ulong)((uVar28 & 3) << 3)) == 0xffffffff) goto LAB_10411db64;
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
      if ((uVar17 | uVar21) != 0xffffffff) goto LAB_10411dc94;
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
LAB_10411dc94:
      _memcpy(puVar20,puVar26,uVar3);
      goto LAB_10411dd9c;
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
LAB_10411dd9c:
  *(undefined1 *)((long)puVar20 + uVar5) = 0;
  return param_1;
}



/* Entry: 10411f4dc; end: 10411f6f3;  */

uint FUN_10411f4dc(ulong *param_1,int param_2,long param_3)

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
  if (-1 < param_2) goto LAB_10411f5dc;
  uVar12 = (ulong)((*(uint *)(lVar7 + 0x50) | *(uint *)(lVar14 + 0x50) | *(uint *)(lVar8 + 0x50)) &
                   0xf8 | 7);
  uVar11 = uVar11 + (uVar12 + 8 & (uVar12 ^ 0xffffffffffffffff)) + 1;
  uVar9 = (uint)uVar11;
  uVar4 = uVar9 << 3;
  if (uVar9 < 4) {
    uVar10 = (uint)(param_2 + -0x7fffffff + ~(-1 << (ulong)(uVar4 & 0x1f))) >> (ulong)(uVar4 & 0x1f)
    ;
    if (uVar10 < 0xff) {
      if (uVar10 == 0) goto LAB_10411f5dc;
      goto LAB_10411f654;
    }
    if (uVar10 < 0xffff) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar11);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar11);
    }
  }
  else {
LAB_10411f654:
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
LAB_10411f5dc:
  uVar11 = *param_1;
  if (0xfffffffe < uVar11) {
    uVar11 = 0xffffffff;
  }
  return (int)uVar11 + 1;
}



/* Entry: 10411f6f4; end: 10411f987;  */

void FUN_10411f6f4(ulong *param_1,uint param_2,int param_3,long param_4)

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



/* Entry: 10411f988; end: 10411f997;  */

undefined8 FUN_10411f988(void)

{
  return 0;
}



/* Entry: 10411f998; end: 10411f9c3;  */

long FUN_10411f998(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10411f9c4; end: 10411fa0b;  */

void FUN_10411f9c4(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if ((long)param_3 < 0) {
    param_1 = param_3 & 0x7fffffffffffffff;
    _swift_errorRetain(param_2);
    param_2 = param_4;
  }
  _swift_retain(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10411fa0c; end: 10411fa1b;  */

void FUN_10411fa0c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  if (-1 < (long)uVar1) {
    _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  _swift_errorRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10411fa1c; end: 10411fa77;  */

void FUN_10411fa1c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if (-1 < (long)param_3) {
    _swift_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  _swift_errorRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10411fa78; end: 10411fb2b;  */

undefined8 * FUN_10411fa78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  FUN_10411f9c4(uVar1,uVar3,uVar2,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  return param_1;
}



/* Entry: 10411fb2c; end: 10411fb67;  */

undefined8 * FUN_10411fb2c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10411fa1c(uVar3,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 10411fb68; end: 10411fc9f;  */

int FUN_10411fb68(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x3fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x12 & 0x1c00 | ((uint)*(undefined8 *)(param_1 + 4) & 7) << 7 |
          (uint)((ulong)*(undefined8 *)param_1 >> 0x39) & 0x78 | (uint)*(undefined8 *)param_1 & 7)
          << 1) ^ 0x3fff;
  if (0x3ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10411fca0; end: 10411fe6f;  */

void FUN_10411fca0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar10 = *(ulong *)(param_1 + 0x10);
  lVar3 = 0x13f;
  _swift_checkMetadataState();
  if (uVar10 < 0x40) {
    lVar12 = *(long *)(lVar3 + -8);
    uVar10 = *(ulong *)(param_1 + 0x18);
    lVar4 = 0x13f;
    _swift_checkMetadataState();
    if (uVar10 < 0x40) {
      uVar11 = *(ulong *)(param_1 + 0x20);
      lVar5 = 0x13f;
      uVar10 = uVar11;
      __sSqMa();
      if (uVar10 < 0x40) {
        _swift_getTupleTypeLayout3
                  (auStack_80,lVar12 + 0x40,*(long *)(lVar4 + -8) + 0x40,
                   *(long *)(lVar5 + -8) + 0x40);
        puVar2 = PTR___sSciTL_11034fea8;
        puVar1 = PTR___s7ElementSciTl_11034fb58;
        puStack_58 = PTR___sBbWV_11034d660 + 0x40;
        uVar6 = 0xff;
        puStack_60 = auStack_80;
        _swift_getAssociatedTypeWitness
                  (0xff,*(undefined8 *)(param_1 + 0x28),lVar3,PTR___sSciTL_11034fea8,
                   PTR___s7ElementSciTl_11034fb58);
        uVar7 = 0xff;
        _swift_getAssociatedTypeWitness(0xff,*(undefined8 *)(param_1 + 0x30),lVar4,puVar2,puVar1);
        uVar8 = 0xff;
        _swift_getAssociatedTypeWitness(0xff,*(undefined8 *)(param_1 + 0x38),uVar11,puVar2,puVar1);
        uVar9 = 0xff;
        __sSqMa(0xff,uVar8);
        uVar8 = 0xff;
        _swift_getTupleTypeMetadata3(0xff,uVar6,uVar7,uVar9,0,0);
        uVar10 = 0xff;
        __sSqMa(0xff,uVar8);
        uVar6 = 0x112d393f0;
        func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
        lVar3 = 0x13f;
        __ss6ResultOMa(0x13f,uVar10,uVar6,PTR___ss5ErrorWS_11034ee10);
        if (uVar10 < 0x40) {
          _swift_getTupleTypeLayout2(auStack_a0,&UNK_10dcd8478,*(long *)(lVar3 + -8) + 0x40);
          puStack_48 = &UNK_10dcd8478;
          puStack_50 = auStack_a0;
          _swift_initEnumMetadataMultiPayload(param_1,0,4,&puStack_60);
        }
      }
    }
  }
  return;
}



/* Entry: 10411fe70; end: 1041230c7;  */

long * FUN_10411fe70(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint *puVar21;
  long lVar22;
  undefined1 uVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  undefined8 uVar39;
  ulong uVar40;
  undefined8 *puVar41;
  long lVar42;
  long lVar43;
  uint *puVar44;
  
  puVar16 = PTR___sSciTL_11034fea8;
  puVar15 = PTR___s7ElementSciTl_11034fb58;
  lVar22 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar24 = *(long *)(lVar22 + -8);
  lVar27 = *(long *)(lVar9 + -8);
  uVar26 = *(uint *)(lVar27 + 0x50);
  uVar29 = (ulong)uVar26 & 0xff;
  uVar40 = *(long *)(lVar24 + 0x40) + uVar29;
  lVar30 = *(long *)(lVar27 + 0x40);
  lVar33 = *(long *)(lVar10 + -8);
  uVar32 = *(uint *)(lVar33 + 0x50);
  uVar34 = (ulong)uVar32 & 0xff;
  lVar28 = *(long *)(lVar33 + 0x40);
  if (*(int *)(lVar33 + 0x54) == 0) {
    lVar28 = lVar28 + 1;
  }
  uVar1 = lVar28 + (lVar30 + uVar34 + (uVar40 & (uVar29 ^ 0xffffffffffffffff)) &
                   (uVar34 ^ 0xffffffffffffffff));
  lVar18 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar22,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar43 = *(long *)(lVar18 + -8);
  uVar36 = *(uint *)(lVar43 + 0x50);
  lVar19 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar9,puVar16,puVar15);
  lVar38 = *(long *)(lVar19 + -8);
  uVar11 = *(uint *)(lVar38 + 0x50);
  uVar37 = (ulong)uVar11 & 0xff;
  lVar20 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar16,puVar15);
  lVar42 = *(long *)(lVar20 + -8);
  iVar17 = *(int *)(lVar42 + 0x54);
  uVar31 = (ulong)*(uint *)(lVar42 + 0x50) & 0xff;
  uVar14 = uVar11 | uVar36 | *(uint *)(lVar42 + 0x50);
  uVar25 = (ulong)(uVar14 & 0xf8 | 7);
  uVar11 = *(uint *)(lVar43 + 0x54);
  uVar12 = *(uint *)(lVar38 + 0x54);
  uVar36 = uVar12;
  if (uVar12 <= uVar11) {
    uVar36 = uVar11;
  }
  uVar7 = 0;
  if (iVar17 != 0) {
    uVar7 = iVar17 - 1;
  }
  if (uVar7 <= uVar36) {
    uVar7 = uVar36;
  }
  uVar2 = *(long *)(lVar43 + 0x40) + uVar37;
  lVar3 = *(long *)(lVar38 + 0x40) + uVar31;
  lVar35 = *(long *)(lVar42 + 0x40);
  if (iVar17 == 0) {
    lVar35 = lVar35 + 1;
  }
  uVar4 = (lVar3 + (uVar2 & (uVar37 ^ 0xffffffffffffffff)) & (uVar31 ^ 0xffffffffffffffff)) + lVar35
  ;
  uVar6 = uVar4;
  if (uVar7 == 0) {
    uVar6 = uVar4 + 1;
  }
  uVar8 = uVar6;
  if (uVar6 < 9) {
    uVar8 = 8;
  }
  lVar5 = uVar8 + (uVar25 + 8 & (uVar25 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar5 + 1U) {
    uVar1 = lVar5 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  uVar14 = uVar14 | uVar32 | uVar26 | *(uint *)(lVar24 + 0x50);
  if (((uVar14 & 0x1000f8) != 0) || (0x18 < uVar1 + 1)) {
    uVar40 = (ulong)(uVar14 & 0xf8 | 7);
    lVar30 = *param_2;
    *param_1 = lVar30;
    _swift_retain();
    return (long *)(lVar30 + (uVar40 + 0x10 & (uVar40 ^ 0xffffffffffffffff)));
  }
  uVar32 = (uint)*(byte *)((long)param_2 + uVar1);
  if (3 < *(byte *)((long)param_2 + uVar1)) {
    uVar32 = (int)*param_2 + 4;
  }
  if ((int)uVar32 < 2) {
    if (uVar32 != 0) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar1) = 1;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    uVar25 = ~uVar34;
    (**(code **)(lVar24 + 0x10))(param_1,param_2,lVar22);
    uVar37 = uVar40 + (long)param_1 & ~uVar29;
    uVar40 = uVar40 + (long)param_2 & ~uVar29;
    (**(code **)(lVar27 + 0x10))(uVar37,uVar40,lVar9);
    lVar30 = lVar30 + uVar34;
    uVar37 = uVar37 + lVar30;
    uVar40 = uVar40 + lVar30;
    uVar29 = uVar40 & uVar25;
    (**(code **)(lVar33 + 0x30))(uVar29,1,lVar10);
    if ((int)uVar29 != 0) {
      _memcpy(uVar37 & uVar25,uVar40 & uVar25,lVar28);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    (**(code **)(lVar33 + 0x10))(uVar37 & uVar25,uVar40 & uVar25,lVar10);
    (**(code **)(lVar33 + 0x38))(uVar37 & uVar25,0,1,lVar10);
    *(undefined1 *)((long)param_1 + uVar1) = 0;
    return param_1;
  }
  if (uVar32 != 2) {
    *param_1 = *param_2;
    *(undefined1 *)((long)param_1 + uVar1) = 3;
    return param_1;
  }
  *param_1 = *param_2;
  puVar41 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar44 = (uint *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  bVar13 = *(byte *)((long)puVar44 + uVar8);
  uVar32 = (uint)bVar13;
  if (bVar13 < 2) {
LAB_10412023c:
    if (uVar32 != 1) {
LAB_10412027c:
      uVar37 = ~uVar37;
      uVar31 = ~uVar31;
      if (uVar7 == 0) {
        if (*(byte *)((long)puVar44 + uVar4) != 0) {
          uVar26 = (uint)uVar4;
          uVar32 = 0;
          if (uVar26 < 4) {
            uVar32 = *(byte *)((long)puVar44 + uVar4) - 1 << (ulong)((uVar26 & 3) << 3);
          }
          if (uVar26 == 0) {
            uVar26 = 0;
          }
          else {
            uVar36 = 4;
            if (uVar26 < 4) {
              uVar36 = uVar26;
            }
            if ((int)uVar36 < 3) {
              if (uVar36 == 1) {
                uVar26 = (uint)(byte)*puVar44;
              }
              else {
                uVar26 = (uint)(ushort)*puVar44;
              }
            }
            else if (uVar36 == 3) {
              uVar26 = (uint)(uint3)*puVar44;
            }
            else {
              uVar26 = *puVar44;
            }
          }
          iVar17 = (uVar26 | uVar32) + 1;
          goto LAB_1041203a8;
        }
      }
      else {
        if (uVar11 == uVar7) {
          puVar21 = puVar44;
          (**(code **)(lVar43 + 0x30))(puVar44,uVar11,lVar18);
          iVar17 = (int)puVar21;
        }
        else {
          uVar40 = (ulong)(uVar2 + (long)puVar44) & uVar37;
          if (uVar12 == uVar7) {
            (**(code **)(lVar38 + 0x30))(uVar40,uVar12,lVar19);
            iVar17 = (int)uVar40;
          }
          else {
            uVar40 = lVar3 + uVar40 & uVar31;
            (**(code **)(lVar42 + 0x30))(uVar40,iVar17,lVar20);
            iVar17 = 0;
            if ((int)uVar40 != 0) {
              iVar17 = (int)uVar40 + -1;
            }
          }
        }
LAB_1041203a8:
        if (iVar17 != 0) {
          _memcpy(puVar41,puVar44,uVar6);
          uVar23 = 0;
          goto LAB_104120498;
        }
      }
      (**(code **)(lVar43 + 0x10))(puVar41,puVar44,lVar18);
      uVar40 = uVar2 + (long)puVar41 & uVar37;
      uVar37 = (ulong)(uVar2 + (long)puVar44) & uVar37;
      (**(code **)(lVar38 + 0x10))(uVar40,uVar37,lVar19);
      uVar40 = lVar3 + uVar40;
      uVar37 = lVar3 + uVar37;
      uVar29 = uVar37 & uVar31;
      (**(code **)(lVar42 + 0x30))(uVar29,1,lVar20);
      if ((int)uVar29 == 0) {
        (**(code **)(lVar42 + 0x10))(uVar40 & uVar31,uVar37 & uVar31,lVar20);
        (**(code **)(lVar42 + 0x38))(uVar40 & uVar31,0,1,lVar20);
      }
      else {
        _memcpy(uVar40 & uVar31,uVar37 & uVar31,lVar35);
      }
      if (uVar7 == 0) {
        *(undefined1 *)((long)puVar41 + uVar4) = 0;
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
      }
      goto LAB_104120498;
    }
  }
  else {
    uVar36 = (uint)uVar8;
    uVar26 = 4;
    if (uVar36 < 4) {
      uVar26 = uVar36;
    }
    if ((int)uVar26 < 2) {
      if (uVar26 == 0) goto LAB_10412023c;
      uVar32 = (uint)(byte)*puVar44;
    }
    else if (uVar26 == 2) {
      uVar32 = (uint)(ushort)*puVar44;
    }
    else if (uVar26 == 3) {
      uVar32 = (uint)(uint3)*puVar44;
    }
    else {
      uVar32 = *puVar44;
    }
    if (3 < uVar36) {
      uVar32 = uVar32 + 2;
      goto LAB_10412023c;
    }
    if ((uVar32 | bVar13 - 2 << (ulong)((uVar36 & 3) << 3)) != 0xffffffff) goto LAB_10412027c;
  }
  uVar39 = *(undefined8 *)puVar44;
  _swift_errorRetain(uVar39);
  *puVar41 = uVar39;
  uVar23 = 1;
LAB_104120498:
  *(undefined1 *)((long)puVar41 + uVar8) = uVar23;
  *(undefined1 *)((long)param_1 + uVar1) = 2;
  return param_1;
}



/* Entry: 1041230c8; end: 1041230cb;  */

void FUN_1041230c8(void)

{
  return;
}



/* Entry: 1041230cc; end: 104123303;  */

void FUN_1041230cc(uint *param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  puVar6 = PTR___sSciTL_11034fea8;
  puVar5 = PTR___s7ElementSciTl_11034fb58;
  lVar15 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar8 = *(long *)(lVar15 + -8);
  uVar10 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar11 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  uVar10 = lVar12 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar10 &
                     (uVar10 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar8 + 0x40) + (ulong)*(byte *)(lVar11 + 0x50) &
                    ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar8 = *(long *)(lVar12 + -8);
  uVar7 = *(uint *)(lVar8 + 0x50);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar15,puVar6,puVar5);
  lVar15 = *(long *)(lVar12 + -8);
  uVar4 = *(uint *)(lVar15 + 0x50);
  uVar14 = (ulong)uVar4 & 0xff;
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar3,puVar6,puVar5);
  lVar12 = *(long *)(lVar12 + -8);
  iVar2 = *(int *)(lVar12 + 0x54);
  uVar13 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  uVar9 = (ulong)((uVar4 | uVar7 | *(uint *)(lVar12 + 0x50)) & 0xf8 | 7);
  uVar7 = *(uint *)(lVar15 + 0x54);
  if (*(uint *)(lVar15 + 0x54) <= *(uint *)(lVar8 + 0x54)) {
    uVar7 = *(uint *)(lVar8 + 0x54);
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + -1;
  }
  lVar12 = *(long *)(lVar12 + 0x40);
  if (iVar2 == 0) {
    lVar12 = lVar12 + 1;
  }
  if (iVar1 == 0 && uVar7 == 0) {
    lVar12 = lVar12 + 1;
  }
  uVar13 = lVar12 + (*(long *)(lVar15 + 0x40) + uVar13 +
                     (*(long *)(lVar8 + 0x40) + uVar14 & (uVar14 ^ 0xffffffffffffffff)) &
                    (uVar13 ^ 0xffffffffffffffff));
  if (uVar13 < 9) {
    uVar13 = 8;
  }
  lVar12 = uVar13 + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff));
  if (uVar10 <= lVar12 + 1U) {
    uVar10 = lVar12 + 1;
  }
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  if (param_2 < 4) {
    *(char *)((long)param_1 + uVar10) = (char)param_2;
  }
  else {
    param_2 = param_2 - 4;
    uVar7 = (uint)uVar10;
    if (uVar7 < 4) {
      *(char *)((long)param_1 + uVar10) = (char)(param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + '\x04';
      if (uVar7 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar10) = 4;
    }
    if (3 < uVar7) {
      uVar7 = 4;
    }
    _bzero(param_1);
    if ((int)uVar7 < 3) {
      if (uVar7 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar7 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 104123304; end: 104123333;  */

void FUN_104123304(ulong param_1,ulong param_2,ulong param_3)

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



/* Entry: 104123334; end: 104123343;  */

void FUN_104123334(ulong *param_1)

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



/* Entry: 104123344; end: 104123373;  */

void FUN_104123344(ulong param_1,ulong param_2,ulong param_3)

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



/* Entry: 104123374; end: 1041233bb;  */

undefined8 * FUN_104123374(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

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



/* Entry: 1041233bc; end: 1041233cf;  */

undefined8 * FUN_1041233bc(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104123304(uVar1,uVar3,uVar6);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  FUN_104123344(uVar2,uVar4,uVar5);
  return param_1;
}



/* Entry: 1041233d0; end: 10412342f;  */

undefined8 *
FUN_1041233d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
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



/* Entry: 104123430; end: 10412343b;  */

undefined8 * FUN_104123430(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104123344(uVar3,uVar1,uVar2);
  return param_1;
}



/* Entry: 10412343c; end: 10412347b;  */

undefined8 * FUN_10412343c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

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



/* Entry: 10412347c; end: 10412353b;  */

int FUN_10412347c(int *param_1,uint param_2)

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



/* Entry: 10412353c; end: 104123597;  */

void FUN_10412353c(undefined8 *param_1)

{
  _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 104123598; end: 1041235f3;  */

undefined8 * FUN_104123598(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1041235f4; end: 10412362f;  */

undefined8 * FUN_1041235f4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 104123630; end: 104123747;  */

int FUN_104123630(ulong *param_1,int param_2)

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



/* Entry: 104123748; end: 10412378b;  */

void FUN_104123748(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x80);
  return;
}



/* Entry: 10412378c; end: 10412393f;  */

void FUN_10412378c(void)

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
  FUN_104111460(0,&lStack_d8);
  uVar5 = 0xff;
  lStack_d8 = lVar1;
  lStack_d0 = lVar2;
  uStack_c8 = uVar6;
  uStack_c0 = uVar8;
  uStack_b8 = uVar7;
  uStack_b0 = uVar9;
  func_0x0001041236c4(0xff,&lStack_d8);
  uVar6 = 0;
  __sSqMa(0,uVar5);
  FUN_104146aa0(&lStack_d8,FUN_104128700,auStack_a0,lVar12,uVar4,uVar6);
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
    FUN_104128760(lVar1,lVar2);
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 104123940; end: 10412395f;  */

void FUN_104123940(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104123960,0,0);
  return;
}



/* Entry: 104123960; end: 104123a8b;  */

void FUN_104123960(void)

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
  plVar3[1] = (long)FUN_104123a8c;
                    /* WARNING: Could not recover jumptable at 0x000104123a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10396896c)
            (*(undefined8 *)(unaff_x22 + 0x10),&UNK_10dcd86a8,*(undefined8 *)(unaff_x22 + 0x18),
             FUN_10412881c,*(undefined8 *)(unaff_x22 + 0x18),0,0,uVar4);
  return;
}



/* Entry: 104123a8c; end: 104123ac7;  */

void FUN_104123a8c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000104123ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104123ac8; end: 104123bf7;  */

void FUN_104123ac8(undefined8 param_1,long *param_2)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104123bf8,0,0);
  return;
}



/* Entry: 104123bf8; end: 104123cb3;  */

void FUN_104123bf8(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x104123c6c;
                    /* WARNING: Could not recover jumptable at 0x000104123c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_104167d8c(plVar1,*(undefined8 *)(unaff_x22 + 0x30),0,0,0x10412889c,
                *(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
  return;
}



/* Entry: 104123cb4; end: 104123d43;  */

/* WARNING: Removing unreachable block (ram,0x000104123d20) */

void FUN_104123cb4(void)

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
                    /* WARNING: Could not recover jumptable at 0x000104123d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104123d44; end: 10412414b;  */

void FUN_104123d44(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  long alStack_f0 [4];
  long lStack_d0;
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
  lVar15 = *param_2;
  uVar22 = *(undefined8 *)(lVar15 + 0x68);
  uVar24 = *(undefined8 *)(lVar15 + 0x50);
  uVar6 = 0xff;
  plStack_c8 = param_2;
  uStack_c0 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar22,uVar24,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar23 = *(undefined8 *)(lVar15 + 0x70);
  uVar20 = *(undefined8 *)(lVar15 + 0x58);
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar23,uVar20,puVar2,puVar1);
  uVar19 = *(undefined8 *)(lVar15 + 0x78);
  uVar16 = *(undefined8 *)(lVar15 + 0x60);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar19,uVar16,puVar2,puVar1);
  uVar9 = 0xff;
  __sSqMa(0xff,uVar8);
  lVar15 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar6,uVar7,uVar9,0,0);
  uVar7 = 0xff;
  alStack_f0[0] = lVar15;
  __sSqMa(0xff);
  uVar6 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar15 = 0;
  __ss6ResultOMa(0,uVar7,uVar6,PTR___ss5ErrorWS_11034ee10);
  alStack_f0[2] = *(long *)(lVar15 + -8);
  lStack_d0 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_f0[2] + 0x40));
  lVar12 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_f0[1] = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  lVar15 = 0xff;
  alStack_f0[3] = lVar12;
  uStack_90 = uVar24;
  uStack_88 = uVar20;
  uStack_80 = uVar16;
  uStack_78 = uVar22;
  uStack_70 = uVar23;
  uStack_68 = uVar19;
  func_0x00010411d5c8(0xff,&uStack_90);
  lVar10 = 0;
  __sSqMa(0,lVar15);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  plVar21 = (long *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (long)plVar21 - extraout_x12_00;
  lVar12 = plStack_c8[2];
  uStack_a0 = uStack_c0;
  plStack_98 = plStack_c8;
  uVar6 = 0;
  uStack_90 = uVar24;
  uStack_88 = uVar20;
  uStack_80 = uVar16;
  uStack_78 = uVar22;
  uStack_70 = uVar23;
  uStack_68 = uVar19;
  FUN_104111460(0,&uStack_90);
  FUN_104146aa0(lVar18,FUN_1041288a4,auStack_b0,lVar12,uVar6,lVar10);
  (**(code **)(extraout_x13 + 0x10))(plVar21,lVar18,lVar10);
  plVar11 = plVar21;
  (**(code **)(*(long *)(lVar15 + -8) + 0x30))(plVar21,1,lVar15);
  if ((int)plVar11 != 1) {
    plVar11 = plVar21;
    _swift_getEnumCaseMultiPayload(plVar21,lVar15);
    lVar12 = lStack_d0;
    lVar15 = alStack_f0[3];
    iVar5 = (int)plVar11;
    if (iVar5 < 3) {
      if (iVar5 == 1) {
        lVar12 = *plVar21;
        lVar15 = *(long *)(lVar12 + 0x10);
        if (lVar15 != 0) {
          puVar17 = (undefined8 *)(lVar12 + 0x20);
          do {
            _swift_continuation_throwingResume(*puVar17);
            lVar15 = lVar15 + -1;
            puVar17 = puVar17 + 1;
          } while (lVar15 != 0);
        }
        _swift_bridgeObjectRelease(lVar12);
      }
      else {
        if (iVar5 != 2) {
          *(undefined4 *)(lVar18 + -8) = 0;
          *(undefined8 *)(lVar18 + -0x10) = 0x50;
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                    ("Fatal error",0xb,2,0xd000000000000016,0x800000010f1eddb0,
                     "AsyncAlgorithms/CombineLatestStorage.swift",0x2a,2);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10412414c);
          (*pcVar4)();
        }
        lVar14 = *plVar21;
        uVar6 = 0xff;
        __sSccMa(0xff,lStack_d0,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
        lVar15 = 0;
        _swift_getTupleTypeMetadata2(0,uVar6,lVar12,"downstreamContinuation result ",0);
        lVar3 = alStack_f0[3];
        lVar13 = alStack_f0[2];
        (**(code **)(alStack_f0[2] + 0x20))
                  (alStack_f0[3],(long)plVar21 + (long)*(int *)(lVar15 + 0x30),lVar12);
        lVar15 = alStack_f0[1];
        (**(code **)(lVar13 + 0x10))(alStack_f0[1],lVar3,lVar12);
        func_0x000103969044(lVar15,lVar14,lVar12);
        (**(code **)(lVar13 + 8))(lVar3,lVar12);
      }
    }
    else {
      lVar13 = *plVar21;
      (**(code **)(*(long *)(alStack_f0[0] + -8) + 0x38))(alStack_f0[3],1,1);
      lVar12 = lStack_d0;
      _swift_storeEnumTagMultiPayload(lVar15,lStack_d0,0);
      func_0x000103969044(lVar15,lVar13,lVar12);
    }
  }
  (**(code **)(extraout_x13 + 8))(lVar18,lVar10);
  return;
}


