/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040f9ac4; end: 1040f9c43;  */

void FUN_1040f9ac4(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 < 2) {
    lVar2 = *(long *)(param_3 + 0x10);
    lVar1 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x18),lVar2,PTR___sSciTL_11034fea8,
               PTR___s7ElementSciTl_11034fb58);
    uVar4 = *(ulong *)(*(long *)(lVar1 + -8) + 0x40);
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    uVar3 = *(uint *)(*(long *)(lVar1 + -8) + 0x50) & 0xf8;
    lVar1 = uVar4 + ((ulong)(uVar3 + 0xf & (uVar3 ^ 0xffffffff)) & 0x1f8);
    uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
    if (uVar4 < lVar1 + 1U) {
      uVar4 = lVar1 + 1;
    }
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
    lVar2 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x18),*(long *)(param_3 + 0x10),PTR___sSciTL_11034fea8,
               PTR___s7ElementSciTl_11034fb58);
    uVar3 = *(uint *)(*(long *)(lVar2 + -8) + 0x50) & 0xf8;
    uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    lVar2 = uVar4 + ((ulong)(uVar3 + 0xf & (uVar3 ^ 0xffffffff)) & 0x1f8);
    if (uVar5 < lVar2 + 1U) {
      uVar5 = lVar2 + 1;
    }
    param_2 = param_2 - 2;
    uVar3 = (uint)uVar5;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + uVar5) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x02';
      if (uVar3 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar5) = 2;
    }
    if (3 < uVar3) {
      uVar3 = 4;
    }
    _bzero(param_1);
    if ((int)uVar3 < 3) {
      if (uVar3 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar3 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 1040f9c44; end: 1040f9c4b;  */

void FUN_1040f9c44(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1040f9c4c; end: 1040f9c9f;  */

undefined8 * FUN_1040f9c4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1040f9ca0; end: 1040f9cdb;  */

undefined8 * FUN_1040f9ca0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 1040f9cdc; end: 1040f9e0b;  */

int FUN_1040f9cdc(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[3] != '\0')) {
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



/* Entry: 1040f9e0c; end: 1040f9e4f;  */

void FUN_1040f9e0c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x60);
  return;
}



/* Entry: 1040f9e50; end: 1040f9e6f;  */

void FUN_1040f9e50(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040f9e70,0,0);
  return;
}



/* Entry: 1040f9e70; end: 1040f9f4f;  */

void FUN_1040f9e70(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x20);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar5 + 0x58),*(undefined8 *)(lVar5 + 0x50),PTR___sSciTL_11034fea8
             ,PTR___s7ElementSciTl_11034fb58);
  uVar4 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0xff;
  __ss6ResultOMa(0xff,uVar2,uVar4,PTR___ss5ErrorWS_11034ee10);
  uVar4 = 0;
  __sSqMa(0,uVar3);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1040f9f50;
                    /* WARNING: Could not recover jumptable at 0x0001040f9f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10396896c)
            (*(undefined8 *)(unaff_x22 + 0x10),&UNK_10dcd7a08,*(undefined8 *)(unaff_x22 + 0x18),
             FUN_1040fb720,*(undefined8 *)(unaff_x22 + 0x18),0,0,uVar4);
  return;
}



/* Entry: 1040f9f50; end: 1040fa033;  */

void FUN_1040f9f50(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040f9fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040fa034; end: 1040fa323;  */

void FUN_1040fa034(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar5 = *(long *)(unaff_x22 + 0x40);
  lVar8 = *(long *)(unaff_x22 + 0x30);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar10 = *(undefined8 *)(lVar4 + 0x10);
  uVar1 = 0;
  FUN_1040f3524(0,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  FUN_104146aa0(uVar3,FUN_1040fb724,lVar4,uVar10,uVar1,uVar6);
  (**(code **)(lVar5 + 0x10))(uVar7,uVar3,uVar6);
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(uVar7,1,lVar8);
  if ((int)uVar7 != 1) {
    plVar9 = *(long **)(unaff_x22 + 0x48);
    plVar2 = plVar9;
    _swift_getEnumCaseMultiPayload(plVar9,*(undefined8 *)(unaff_x22 + 0x30));
    if ((int)plVar2 == 0) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd000000000000016,0x800000010f1eddb0,
                 "AsyncAlgorithms/BoundedBufferStorage.swift",0x2a,2,0x27,0);
      return;
    }
    if ((int)plVar2 == 1) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
      lVar8 = *plVar9;
      uVar7 = 0x113062210;
      func_0x00010002969c(0x113062210,&UNK_10dcd7a10);
      uVar1 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar3,uVar6,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
      uVar6 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      uVar3 = 0xff;
      __ss6ResultOMa(0xff,uVar1,uVar6,PTR___ss5ErrorWS_11034ee10);
      lVar4 = 0xff;
      __sSqMa(0xff,uVar3);
      lVar5 = 0;
      _swift_getTupleTypeMetadata2(0,uVar7,lVar4,"producerContinuation result ",0);
      (**(code **)(*(long *)(lVar4 + -8) + 0x20))
                (uVar10,(long)plVar9 + (long)*(int *)(lVar5 + 0x30),lVar4);
      if (lVar8 != 0) {
        _swift_continuation_throwingResume(lVar8);
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
      (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x38));
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001040fa1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  plVar2 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,uVar7,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar7 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar6 = 0xff;
  __ss6ResultOMa(0xff,uVar3,uVar7,PTR___ss5ErrorWS_11034ee10);
  uVar7 = 0;
  __sSqMa(0,uVar6);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1040fa324;
                    /* WARNING: Could not recover jumptable at 0x0001040fa2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_104167d8c(*(undefined8 *)(unaff_x22 + 0x10),0,0,FUN_1040fb73c,
                *(undefined8 *)(unaff_x22 + 0x18),uVar7);
  return;
}



/* Entry: 1040fa324; end: 1040fa36b;  */

void FUN_1040fa324(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040fa36c,0,0);
  return;
}



/* Entry: 1040fa36c; end: 1040fa3bb;  */

void FUN_1040fa36c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001040fa3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040fa3bc; end: 1040fa647;  */

void FUN_1040fa3bc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar7;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plStack_70;
  undefined8 uStack_68;
  
  lVar12 = *(long *)(*param_3 + 0x50);
  lVar13 = *(long *)(lVar12 + -8);
  plStack_70 = param_3;
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = (long)&plStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(extraout_x12 + 0x58);
  lVar2 = 0;
  FUN_1040f64b4(0,lVar12,uVar8);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_00;
  FUN_1040f3524(0,lVar12,uVar8);
  func_0x0001040f510c(lVar11);
  (**(code **)(lVar9 + 0x10))(lVar10,lVar11,lVar2);
  lVar6 = lVar10;
  _swift_getEnumCaseMultiPayload(lVar10,lVar2);
  uVar3 = uStack_68;
  if ((int)lVar6 == 0) {
    (**(code **)(lVar13 + 0x20))(lVar14,lVar10,lVar12);
    FUN_1040fa648(param_2,lVar14);
    (**(code **)(lVar13 + 8))(lVar14,lVar12);
    (**(code **)(lVar9 + 8))(lVar11,lVar2);
    pcVar7 = *(code **)(lVar9 + 0x38);
    uVar8 = 1;
    uVar3 = uStack_68;
  }
  else {
    if ((int)lVar6 == 1) {
      uVar3 = 0x113062210;
      func_0x00010002969c(0x113062210,&UNK_10dcd7a10);
      uVar4 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar8,lVar12,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
      uVar8 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      uVar5 = 0xff;
      __ss6ResultOMa(0xff,uVar4,uVar8,PTR___ss5ErrorWS_11034ee10);
      lVar6 = 0xff;
      __sSqMa(0xff,uVar5);
      lVar12 = 0;
      _swift_getTupleTypeMetadata2(0,uVar3,lVar6,"producerContinuation result ",0);
      uVar3 = uStack_68;
      iVar1 = *(int *)(lVar12 + 0x30);
      (**(code **)(lVar9 + 0x20))(uStack_68,lVar11,lVar2);
      (**(code **)(lVar9 + 0x38))(uVar3,0,1,lVar2);
      (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar10 + iVar1,lVar6);
      return;
    }
    (**(code **)(lVar9 + 0x20))(uStack_68,lVar11,lVar2);
    pcVar7 = *(code **)(lVar9 + 0x38);
    uVar8 = 0;
  }
  (*pcVar7)(uVar3,uVar8,1,lVar2);
  return;
}



/* Entry: 1040fa648; end: 1040faa5f;  */

void FUN_1040fa648(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar11 = *unaff_x20;
  lVar6 = *(long *)(lVar11 + 0x50);
  lVar12 = *(long *)(lVar6 + -8);
  lVar9 = *(long *)(lVar12 + 0x40);
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = auStack_70 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))((long)puVar8 - extraout_x8,1,1,lVar1);
  (**(code **)(lVar12 + 0x10))(puVar8,param_2,lVar6);
  uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff);
  uVar7 = lVar9 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar2 = &UNK_110746d40;
  _swift_allocObject(&UNK_110746d40,uVar7 + 8,uVar5 | 7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(long *)(puVar2 + 0x20) = lVar6;
  uVar10 = *(undefined8 *)(lVar11 + 0x58);
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  (**(code **)(lVar12 + 0x20))(puVar2 + uVar13,puVar8,lVar6);
  *(long **)(puVar2 + uVar7) = unaff_x20;
  _swift_retain();
  uVar3 = 0;
  func_0x0001000abba4(0,0,(long)puVar8 - extraout_x8,&UNK_10dcd7a28,puVar2);
  uVar4 = 0;
  FUN_1040f3524(0,lVar6,uVar10);
  FUN_1040f42c0(uVar3,uVar4);
  _swift_release(uVar3);
  return;
}



/* Entry: 1040faa60; end: 1040fabef;  */

void FUN_1040faa60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long *unaff_x20;
  long lVar7;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x58);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0xff;
  __ss6ResultOMa(0xff,uVar3,uVar6,PTR___ss5ErrorWS_11034ee10);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = unaff_x20[2];
  uVar6 = 0;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  FUN_1040f3524(0,uVar1,uVar2);
  uVar3 = 0;
  func_0x0001040f9da8(0,uVar1,uVar2);
  FUN_104146aa0(&lStack_68,FUN_1040fb644,auStack_90,lVar7,uVar6,uVar3);
  if (lStack_68 != 0) {
    __sScT6cancelyyF(lStack_68,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    if (lStack_60 != 0) {
      _swift_continuation_throwingResume(lStack_60);
    }
    if (lStack_58 != 0) {
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(auStack_a0 + -extraout_x8,1,1,lVar4);
      func_0x000103969044(auStack_a0 + -extraout_x8,lStack_58,lVar5);
    }
    _swift_release(lStack_68);
  }
  return;
}



/* Entry: 1040fabf0; end: 1040fadcb;  */

void FUN_1040fabf0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 in_x3;
  long *in_x4;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = in_x3;
  *(long **)(unaff_x22 + 0xf8) = in_x4;
  lVar7 = *in_x4;
  uVar9 = *(undefined8 *)(lVar7 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar9;
  lVar8 = *(long *)(lVar7 + 0x50);
  *(long *)(unaff_x22 + 0x108) = lVar8;
  puVar1 = PTR___sSciTL_11034fea8;
  lVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,lVar8,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x110) = lVar7;
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0xff;
  __ss6ResultOMa(0xff,lVar7,uVar2,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0x118) = lVar3;
  lVar4 = 0;
  __sSqMa(0,lVar3);
  *(long *)(unaff_x22 + 0x120) = lVar4;
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar5;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x130) = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar5;
  lVar3 = 0;
  FUN_1040f7918(0,lVar8,uVar9);
  *(long *)(unaff_x22 + 0x140) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x148) = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar5;
  lVar3 = 0;
  __sSqMa(0,lVar7);
  *(long *)(unaff_x22 + 0x160) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x168) = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar5;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar5;
  lVar7 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x188) = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar5;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,lVar8,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x198) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x1a0) = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040fadcc,0,0);
  return;
}



/* Entry: 1040fadcc; end: 1040faf1b;  */

void FUN_1040fadcc(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar1 = *(long *)(unaff_x22 + 0xf8);
  (**(code **)(*(long *)(unaff_x22 + 0x188) + 0x10))
            (*(undefined8 *)(unaff_x22 + 400),*(undefined8 *)(unaff_x22 + 0xf0),uVar5);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar4,uVar5,uVar2);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = 0;
  FUN_1040f3524();
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar2;
  FUN_104146aa0(unaff_x22 + 0x1d0,FUN_1040fb870,unaff_x22 + 0xb0,uVar5,uVar2,PTR___sSbN_11034dd40);
  if (*(char *)(unaff_x22 + 0x1d0) == '\x01') {
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1040faf1c;
    _swift_continuation_init(unaff_x22 + 0x10,0);
    FUN_1040fb56c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  _swift_getAssociatedConformanceWitness
            (uVar2,*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x198),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1c0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040fafd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar3,*(undefined8 *)(unaff_x22 + 0x170),*(undefined8 *)(unaff_x22 + 0x198),uVar2);
  return;
}



/* Entry: 1040faf1c; end: 1040faf5b;  */

void FUN_1040faf1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040faf5c,0,0);
  return;
}



/* Entry: 1040faf5c; end: 1040fafd7;  */

void FUN_1040faf5c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x198),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1c0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1040fafd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(unaff_x22 + 0x170),*(undefined8 *)(unaff_x22 + 0x198),uVar1);
  return;
}



/* Entry: 1040fafd8; end: 1040fb033;  */

void FUN_1040fafd8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1c8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1c0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040fb034;
  }
  else {
    pcVar1 = FUN_1040fb41c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040fb034; end: 1040fb41b;  */

void FUN_1040fb034(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar5 = *(long *)(unaff_x22 + 0x178);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar7 = uVar4;
  (**(code **)(lVar5 + 0x30))(uVar4,1,uVar11);
  if ((int)uVar7 == 1) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
    (**(code **)(*(long *)(unaff_x22 + 0x168) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x160));
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar10;
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar11;
    uVar4 = 0;
    func_0x0001040f6780(0,uVar10,uVar11);
    FUN_104146aa0(unaff_x22 + 0xa8,FUN_1040fb910,unaff_x22 + 0xd0,uVar7,uVar8,uVar4);
    uVar9 = *(ulong *)(unaff_x22 + 0xa8);
    lVar5 = *(long *)(unaff_x22 + 0x1a0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
    if (1 < uVar9) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
      (**(code **)(*(long *)(unaff_x22 + 0x130) + 0x38))
                (uVar11,1,1,*(undefined8 *)(unaff_x22 + 0x118));
      func_0x000103969044(uVar11,uVar9,uVar8);
    }
    (**(code **)(lVar5 + 8))(uVar4,uVar7);
    uVar8 = *(undefined8 *)(unaff_x22 + 400);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x128);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a8));
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001040fb194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar2 = *(long *)(unaff_x22 + 0x148);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  auVar15 = *(undefined1 (*) [16])(unaff_x22 + 0x100);
  (**(code **)(lVar5 + 0x20))(uVar14,uVar4,uVar11);
  auVar15 = NEON_ext(auVar15,auVar15,8,1);
  *(long *)(unaff_x22 + 0x98) = auVar15._8_8_;
  *(long *)(unaff_x22 + 0x90) = auVar15._0_8_;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
  FUN_104146aa0(uVar1,FUN_1040fb960,unaff_x22 + 0x80,uVar7,uVar13,uVar10);
  (**(code **)(lVar2 + 0x10))(uVar8,uVar1,uVar10);
  uVar4 = 0xff;
  __sSccMa(0xff,uVar3,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,uVar4,uVar12,"continuation result ",0);
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(uVar8,1,lVar5);
  if ((int)uVar8 != 1) {
    lVar2 = *(long *)(unaff_x22 + 0x130);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar10 = **(undefined8 **)(unaff_x22 + 0x150);
    (**(code **)(lVar2 + 0x20))
              (uVar7,(long)*(undefined8 **)(unaff_x22 + 0x150) + (long)*(int *)(lVar5 + 0x30),uVar8)
    ;
    (**(code **)(lVar2 + 0x10))(uVar11,uVar7,uVar8);
    (**(code **)(lVar2 + 0x38))(uVar11,0,1,uVar8);
    func_0x000103969044(uVar11,uVar10,uVar4);
    (**(code **)(lVar2 + 8))(uVar7,uVar8);
  }
  lVar5 = *(long *)(unaff_x22 + 0x178);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  (**(code **)(*(long *)(unaff_x22 + 0x148) + 8))
            (*(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x140));
  (**(code **)(lVar5 + 8))(uVar4,uVar7);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = 0;
  FUN_1040f3524();
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar4;
  FUN_104146aa0(unaff_x22 + 0x1d0,FUN_1040fb870,unaff_x22 + 0xb0,uVar7,uVar4,PTR___sSbN_11034dd40);
  if ((*(byte *)(unaff_x22 + 0x1d0) & 1) != 0) {
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1040faf1c;
    _swift_continuation_init(unaff_x22 + 0x10,0);
    FUN_1040fb56c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  _swift_getAssociatedConformanceWitness
            (uVar4,*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x198),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1c0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1040fafd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar6,*(undefined8 *)(unaff_x22 + 0x170),*(undefined8 *)(unaff_x22 + 0x198),uVar4);
  return;
}



/* Entry: 1040fb41c; end: 1040fb56b;  */

void FUN_1040fb41c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
  (**(code **)(*(long *)(unaff_x22 + 0x1a0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1a8),*(undefined8 *)(unaff_x22 + 0x198));
  *(undefined8 *)(unaff_x22 + 0x60) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar8;
  uVar8 = 0;
  func_0x0001040f6780(0,uVar7,uVar2);
  FUN_104146aa0(unaff_x22 + 0x78,FUN_1040fb8bc,unaff_x22 + 0x50,uVar1,uVar5,uVar8);
  lVar6 = *(long *)(unaff_x22 + 0x78);
  if ((lVar6 == 0) || (lVar6 == 1)) {
    _swift_errorRelease();
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x128);
    lVar4 = *(long *)(unaff_x22 + 0x130);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
    *puVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_storeEnumTagMultiPayload(puVar3,uVar1,1);
    (**(code **)(lVar4 + 0x38))(puVar3,0,1,uVar1);
    func_0x000103969044(puVar3,lVar6,uVar2);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 400);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a8));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001040fb568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040fb56c; end: 1040fb60f;  */

void FUN_1040fb56c(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_41;
  
  lVar5 = param_2[2];
  uVar1 = *(undefined8 *)(*param_2 + 0x50);
  uVar2 = *(undefined8 *)(*param_2 + 0x58);
  uVar3 = 0;
  uStack_60 = uVar1;
  uStack_58 = uVar2;
  uStack_50 = param_1;
  FUN_1040f3524(0,uVar1,uVar2);
  uVar4 = 0;
  func_0x0001040f666c(0,uVar1,uVar2);
  FUN_104146aa0(&cStack_41,FUN_1040fb9b4,auStack_70,lVar5,uVar3,uVar4);
  if (cStack_41 == '\x01') {
    _swift_continuation_throwingResume(param_1);
  }
  return;
}



/* Entry: 1040fb610; end: 1040fb637;  */

void FUN_1040fb610(void)

{
  long unaff_x20;
  
  FUN_1040faa60();
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040fb638; end: 1040fb643;  */

void FUN_1040fb638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7f070c);
  return;
}



/* Entry: 1040fb644; end: 1040fb68f;  */

void FUN_1040fb644(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = 0;
  FUN_1040f3524();
  func_0x0001040f5f9c();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}



/* Entry: 1040fb690; end: 1040fb6e3;  */

void FUN_1040fb690(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1040fb6e4;
  plVar4[2] = param_1;
  plVar4[3] = (long)unaff_x20;
  lVar5 = *unaff_x20;
  plVar4[4] = *(long *)(lVar5 + 0x50);
  plVar4[5] = *(long *)(lVar5 + 0x58);
  lVar5 = 0xff;
  FUN_1040f64b4();
  plVar4[6] = lVar5;
  lVar1 = 0;
  __sSqMa(0,lVar5);
  plVar4[7] = lVar1;
  lVar5 = *(long *)(lVar1 + -8);
  plVar4[8] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[9] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040fa034,0,0);
  return;
}



/* Entry: 1040fb6e4; end: 1040fb71f;  */

void FUN_1040fb6e4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040fb71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040fb720; end: 1040fb723;  */

void FUN_1040fb720(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  long *unaff_x20;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x58);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0xff;
  __ss6ResultOMa(0xff,uVar3,uVar6,PTR___ss5ErrorWS_11034ee10);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = unaff_x20[2];
  uVar6 = 0;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  FUN_1040f3524(0,uVar1,uVar2);
  uVar3 = 0;
  func_0x0001040f9da8(0,uVar1,uVar2);
  FUN_104146aa0(&lStack_68,FUN_1040fb644,auStack_90,lVar7,uVar6,uVar3);
  if (lStack_68 != 0) {
    __sScT6cancelyyF(lStack_68,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    if (lStack_60 != 0) {
      _swift_continuation_throwingResume(lStack_60);
    }
    if (lStack_58 != 0) {
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(auStack_a0 + -extraout_x8,1,1,lVar4);
      func_0x000103969044(auStack_a0 + -extraout_x8,lStack_58,lVar5);
    }
    _swift_release(lStack_68);
  }
  return;
}



/* Entry: 1040fb724; end: 1040fb73b;  */

void FUN_1040fb724(void)

{
  FUN_1040fa3bc();
  return;
}



/* Entry: 1040fb73c; end: 1040fb743;  */

void FUN_1040fb73c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long alStack_b0 [4];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x58);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar7 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar4 = 0xff;
  __ss6ResultOMa(0xff,uVar3,uVar7,PTR___ss5ErrorWS_11034ee10);
  lVar5 = 0;
  __sSqMa(0,uVar4);
  alStack_b0[0] = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_b0[0] + 0x40));
  lVar11 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_b0[1] = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  lVar6 = 0;
  FUN_1040f8838(0,uVar1,uVar2);
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  plVar15 = (long *)(lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)plVar15 - extraout_x12_00;
  lVar13 = unaff_x20[2];
  uVar7 = 0;
  alStack_b0[2] = param_1;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  uStack_70 = param_1;
  FUN_1040f3524(0,uVar1,uVar2);
  FUN_104146aa0(lVar12,FUN_1040fb744,auStack_90,lVar13,uVar7,lVar6);
  (**(code **)(lVar10 + 0x10))(plVar15,lVar12,lVar6);
  uVar7 = 0x113062210;
  func_0x00010002969c(0x113062210,&UNK_10dcd7a10);
  lVar8 = 0;
  _swift_getTupleTypeMetadata2(0,uVar7,lVar5,"producerContinuation result ",0);
  plVar9 = plVar15;
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(plVar15,1,lVar8);
  lVar13 = alStack_b0[0];
  if ((int)plVar9 != 1) {
    lVar14 = *plVar15;
    (**(code **)(alStack_b0[0] + 0x20))(lVar11,(long)plVar15 + (long)*(int *)(lVar8 + 0x30),lVar5);
    if (lVar14 != 0) {
      _swift_continuation_throwingResume(lVar14);
    }
    lVar8 = alStack_b0[1];
    (**(code **)(lVar13 + 0x10))(alStack_b0[1],lVar11,lVar5);
    func_0x000103969044(lVar8,alStack_b0[2],lVar5);
    (**(code **)(lVar13 + 8))(lVar11,lVar5);
  }
  (**(code **)(lVar10 + 8))(lVar12,lVar6);
  return;
}



/* Entry: 1040fb744; end: 1040fb797;  */

void FUN_1040fb744(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_1040f3524(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001040f58e8(param_1,uVar2,uVar1);
  return;
}



/* Entry: 1040fb798; end: 1040fb833;  */

void FUN_1040fb798(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x22;
  long *plVar11;
  
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff);
  plVar11 = *(long **)(unaff_x20 + (*(long *)(lVar7 + 0x40) + uVar8 + 7 & 0xffffffffffffff8));
  plVar6 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1040fb834;
  plVar6[0x1e] = unaff_x20 + uVar8;
  plVar6[0x1f] = (long)plVar11;
  lVar7 = *plVar11;
  lVar10 = *(long *)(lVar7 + 0x58);
  plVar6[0x20] = lVar10;
  lVar9 = *(long *)(lVar7 + 0x50);
  plVar6[0x21] = lVar9;
  puVar1 = PTR___sSciTL_11034fea8;
  lVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar10,lVar9,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar6[0x22] = lVar7;
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0xff;
  __ss6ResultOMa(0xff,lVar7,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar6[0x23] = lVar3;
  lVar4 = 0;
  __sSqMa(0,lVar3);
  plVar6[0x24] = lVar4;
  uVar8 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x25] = uVar8;
  lVar3 = *(long *)(lVar3 + -8);
  plVar6[0x26] = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x27] = uVar8;
  lVar3 = 0;
  FUN_1040f7918(0,lVar9,lVar10);
  plVar6[0x28] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar6[0x29] = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x2a] = uVar5;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x2b] = uVar8;
  lVar3 = 0;
  __sSqMa(0,lVar7);
  plVar6[0x2c] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar6[0x2d] = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x2e] = uVar8;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x2f] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x30] = uVar8;
  lVar7 = *(long *)(lVar9 + -8);
  plVar6[0x31] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x32] = uVar8;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,lVar10,lVar9,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar6[0x33] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x34] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x35] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040fadcc,0,0);
  return;
}



/* Entry: 1040fb834; end: 1040fb86f;  */

void FUN_1040fb834(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040fb86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040fb870; end: 1040fb8bb;  */

void FUN_1040fb870(byte *param_1)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = 0;
  FUN_1040f3524(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1040f44a0();
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 1040fb8bc; end: 1040fb90f;  */

void FUN_1040fb8bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_1040f3524(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001040f4e24(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1040fb910; end: 1040fb95f;  */

void FUN_1040fb910(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_1040f3524(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = 0;
  func_0x0001040f4e24(0,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1040fb960; end: 1040fb9b3;  */

void FUN_1040fb960(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_1040f3524(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001040f49bc(param_1,uVar2,uVar1);
  return;
}



/* Entry: 1040fb9b4; end: 1040fba07;  */

void FUN_1040fb9b4(undefined1 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_1040f3524(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1040f4724(uVar2,uVar1);
  *param_1 = (char)uVar2;
  return;
}



/* Entry: 1040fba08; end: 1040fbb13;  */

void FUN_1040fba08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long *unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(extraout_x12 + 0x58);
  lVar1 = 0;
  FUN_1040f3524(0,lVar2,uVar4);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar3 - extraout_x8_00;
  (**(code **)(lVar6 + 0x10))(puVar3,param_1,lVar2);
  func_0x0001040f4244(lVar5,puVar3,param_2,lVar2,uVar4);
  lVar2 = lVar5;
  FUN_104146c54(lVar5,lVar1);
  (**(code **)(lVar7 + 8))(lVar5,lVar1);
  unaff_x20[2] = lVar2;
  return;
}



/* Entry: 1040fbb14; end: 1040fbb5b;  */

void FUN_1040fbb14(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  FUN_1040fba08(param_1,param_2);
  return;
}



/* Entry: 1040fbb5c; end: 1040fbbcf;  */

void FUN_1040fbb5c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x0001040fc674(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18));
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dcd7a50;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 1040fbbd0; end: 1040fbec3;  */

long * FUN_1040fbbd0(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) != 0 || 0x18 < (uVar4 & 0xfffffffffffffff8) + 0x11) {
    uVar6 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *(long *)param_2;
    *param_1 = lVar2;
    _swift_retain();
    return (long *)(lVar2 + ((ulong)(uVar6 + 0x17 & (uVar6 ^ 0xffffffff)) & 0x1f8));
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar9 = (uint)uVar4;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1040fbcb8;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_1040fbcb8:
  if (uVar6 == 2) {
    *param_1 = *(long *)param_2;
    *(undefined1 *)((long)param_1 + uVar4) = 2;
    _swift_retain();
  }
  else if (uVar6 == 1) {
    lVar2 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    param_1[1] = lVar2;
    param_1[2] = *(long *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    _swift_retain();
    _swift_retain(lVar2);
  }
  else if (uVar6 == 0) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar4 + 1);
  }
  puVar3 = (undefined8 *)((ulong)(uVar4 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar8 = *puVar3;
  puVar5 = (undefined8 *)(uVar4 + 8 + (long)param_1 & 0xfffffffffffffff8);
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
  *puVar5 = uVar8;
  return param_1;
}



/* Entry: 1040fbec4; end: 1040fc0eb;  */

uint * FUN_1040fbec4(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar2 = *(ulong *)(lVar10 + 0x40);
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  if (param_1 == param_2) goto LAB_1040fc0b0;
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar4 = (uint)bVar1;
  uVar9 = (uint)uVar2;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar9 < 4) {
      uVar5 = uVar9;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040fbf74;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040fbf74:
  if (uVar4 == 2) {
    uVar7 = *(undefined8 *)param_1;
LAB_1040fbfb0:
    _swift_release(uVar7);
  }
  else {
    if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar7 = *(undefined8 *)(param_1 + 2);
      goto LAB_1040fbfb0;
    }
    if (uVar4 == 0) {
      (**(code **)(lVar10 + 8))(param_1,lVar8);
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar9 < 4) {
      uVar5 = uVar9;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040fc028;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040fc028:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar2) = 2;
    _swift_retain();
  }
  else if (uVar4 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 2) = uVar7;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(byte *)((long)param_1 + uVar2) = 1;
    _swift_retain();
    _swift_retain(uVar7);
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar8);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar2 + 1);
  }
LAB_1040fc0b0:
  puVar3 = (undefined8 *)((ulong)(uVar2 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar7 = *puVar3;
  puVar6 = (undefined8 *)((ulong)(uVar2 + 8 + (long)param_1) & 0xfffffffffffffff8);
  *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar3 + 1);
  *puVar6 = uVar7;
  return param_1;
}



/* Entry: 1040fc0ec; end: 1040fc233;  */

void FUN_1040fc0ec(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar9 = (uint)uVar4;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1040fc18c;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_1040fc18c:
  if (uVar6 == 2) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar4) = 2;
  }
  else if (uVar6 == 1) {
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    param_1[2] = *(undefined8 *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + uVar4) = 1;
  }
  else if (uVar6 == 0) {
    (**(code **)(lVar2 + 0x20))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar4 + 1);
  }
  puVar3 = (undefined8 *)((ulong)(uVar4 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar8 = *puVar3;
  puVar5 = (undefined8 *)(uVar4 + 8 + (long)param_1 & 0xfffffffffffffff8);
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
  *puVar5 = uVar8;
  return;
}



/* Entry: 1040fc234; end: 1040fc443;  */

uint * FUN_1040fc234(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar2 = *(ulong *)(lVar10 + 0x40);
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  if (param_1 == param_2) goto LAB_1040fc408;
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar4 = (uint)bVar1;
  uVar9 = (uint)uVar2;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar9 < 4) {
      uVar5 = uVar9;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040fc2e4;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040fc2e4:
  if (uVar4 == 2) {
    uVar7 = *(undefined8 *)param_1;
LAB_1040fc320:
    _swift_release(uVar7);
  }
  else {
    if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar7 = *(undefined8 *)(param_1 + 2);
      goto LAB_1040fc320;
    }
    if (uVar4 == 0) {
      (**(code **)(lVar10 + 8))(param_1,lVar8);
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar9 < 4) {
      uVar5 = uVar9;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040fc398;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040fc398:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar2) = 2;
  }
  else if (uVar4 == 1) {
    uVar7 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar7;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(byte *)((long)param_1 + uVar2) = 1;
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar8);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar2 + 1);
  }
LAB_1040fc408:
  puVar3 = (undefined8 *)((ulong)(uVar2 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar7 = *puVar3;
  puVar6 = (undefined8 *)((ulong)(uVar2 + 8 + (long)param_1) & 0xfffffffffffffff8);
  *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar3 + 1);
  *puVar6 = uVar7;
  return param_1;
}



/* Entry: 1040fc444; end: 1040fc527;  */

int FUN_1040fc444(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    lVar1 = (uVar5 & 0xfffffffffffffff8) + 0x11;
    uVar6 = (uint)lVar1;
    uVar4 = 2;
    uVar7 = uVar4;
    if (uVar6 < 4) {
      uVar7 = (param_2 + 2 >> 8) + 1;
    }
    if (0xffff < uVar7) {
      uVar4 = 4;
    }
    if (uVar7 < 0x100) {
      uVar4 = 1;
    }
    uVar2 = 0;
    if (1 < uVar7) {
      uVar2 = uVar4;
    }
    if (uVar2 < 2) {
      if ((uVar2 != 0) &&
         (uVar4 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_1040fc4d0;
    }
    else if (uVar2 == 2) {
      uVar4 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_1040fc4d0:
        uVar4 = uVar4 - 1 << (ulong)((uVar6 & 3) << 3);
        if (uVar6 < 4) {
          uVar7 = (uint)(byte)*param_1;
        }
        else {
          uVar7 = *param_1;
          uVar4 = 0;
        }
        return (uVar7 | uVar4) + 0xfe;
      }
    }
    else {
      uVar4 = *(uint *)((long)param_1 + lVar1);
      if (uVar4 != 0) goto LAB_1040fc4d0;
    }
  }
  uVar4 = (uint)*(byte *)(((ulong)((long)param_1 + uVar5 + 8) & 0xffffffffffffff8) + 8);
  iVar3 = 0;
  if (2 < uVar4) {
    iVar3 = (uVar4 ^ 0xff) + 1;
  }
  return iVar3;
}



/* Entry: 1040fc528; end: 1040fc667;  */

void FUN_1040fc528(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  lVar1 = (uVar5 & 0xfffffffffffffff8) + 0x11;
  if (param_3 < 0xfe) {
    uVar3 = 0;
  }
  else {
    uVar6 = 2;
    uVar2 = uVar6;
    if ((uint)lVar1 < 4) {
      uVar2 = (param_3 + 2 >> 8) + 1;
    }
    if (0xffff < uVar2) {
      uVar6 = 4;
    }
    if (uVar2 < 0x100) {
      uVar6 = 1;
    }
    uVar3 = 0;
    if (1 < uVar2) {
      uVar3 = uVar6;
    }
  }
  if (param_2 < 0xfe) {
    if (uVar3 < 2) {
      if (uVar3 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar3 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)(((ulong)((long)param_1 + uVar5 + 8) & 0xffffffffffffff8) + 8) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    _bzero(param_1,lVar1);
    iVar4 = 1;
    if ((uint)lVar1 < 4) {
      iVar4 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar3 < 2) {
      if (uVar3 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar4;
      }
    }
    else if (uVar3 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar4;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar4;
    }
  }
  return;
}



/* Entry: 1040fc668; end: 1040fc67f;  */

void FUN_1040fc668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7f0768);
  return;
}



/* Entry: 1040fc680; end: 1040fc6ff;  */

void FUN_1040fc680(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dcd7a80;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&lStack_38);
  }
  return;
}



/* Entry: 1040fc700; end: 1040fc867;  */

long * FUN_1040fc700(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(ulong *)(lVar3 + 0x40);
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar2 + 1) {
    uVar4 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)(uVar4 + 0x17 & (uVar4 ^ 0xffffffff)) & 0x1f8));
    goto LAB_1040fc764;
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar6 = (uint)uVar2;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040fc7f0;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040fc7f0:
  if (uVar4 == 2) {
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    *(undefined1 *)((long)param_1 + uVar2) = 2;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 0) {
        (**(code **)(lVar3 + 0x10))(param_1);
        *(undefined1 *)((long)param_1 + uVar2) = 0;
        return param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar2 + 1);
      return param_1;
    }
    lVar3 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    param_1[1] = lVar3;
    param_1[2] = *(long *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + uVar2) = 1;
    _swift_retain();
  }
LAB_1040fc764:
  _swift_retain(lVar3);
  return param_1;
}



/* Entry: 1040fc868; end: 1040fc947;  */

void FUN_1040fc868(uint *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar7 = 4;
    if (uVar4 < 4) {
      uVar7 = uVar4;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1040fc8f4;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_1040fc8f4:
  if (uVar6 == 2) {
    uVar2 = *(undefined8 *)param_1;
  }
  else {
    if (uVar6 != 1) {
      if (uVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001040fc90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 8))();
        return;
      }
      return;
    }
    _swift_release(*(undefined8 *)param_1);
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1040fc948; end: 1040fca73;  */

undefined8 * FUN_1040fc948(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1040fc9e8;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1040fc9e8:
  if (uVar5 == 2) {
    uVar2 = *(undefined8 *)param_2;
    *param_1 = uVar2;
    *(undefined1 *)((long)param_1 + uVar4) = 2;
  }
  else {
    if (uVar5 != 1) {
      if (uVar5 == 0) {
        (**(code **)(lVar3 + 0x10))(param_1);
        *(undefined1 *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar4 + 1);
      return param_1;
    }
    uVar2 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar2;
    param_1[2] = *(undefined8 *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    _swift_retain();
  }
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 1040fca74; end: 1040fcc7f;  */

uint * FUN_1040fca74(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar8 + 0x40);
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar7 = (uint)uVar2;
  if (2 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1040fcb24;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
LAB_1040fcb24:
  if (uVar3 == 2) {
    uVar6 = *(undefined8 *)param_1;
LAB_1040fcb60:
    _swift_release(uVar6);
  }
  else {
    if (uVar3 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar6 = *(undefined8 *)(param_1 + 2);
      goto LAB_1040fcb60;
    }
    if (uVar3 == 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar5);
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1040fcbd8;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
LAB_1040fcbd8:
  if (uVar3 == 2) {
    uVar6 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar6;
    *(byte *)((long)param_1 + uVar2) = 2;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 0) {
        (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar5);
        *(byte *)((long)param_1 + uVar2) = 0;
        return param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar2 + 1);
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(byte *)((long)param_1 + uVar2) = 1;
    _swift_retain();
  }
  _swift_retain(uVar6);
  return param_1;
}



/* Entry: 1040fcc80; end: 1040fcd87;  */

undefined8 * FUN_1040fcc80(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1040fcd18;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1040fcd18:
  if (uVar5 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar2 = 2;
  }
  else {
    if (uVar5 != 1) {
      if (uVar5 == 0) {
        (**(code **)(lVar3 + 0x20))();
        *(undefined1 *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar4 + 1);
      return param_1;
    }
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    param_1[2] = *(undefined8 *)(param_2 + 4);
    uVar2 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar2;
  return param_1;
}



/* Entry: 1040fcd88; end: 1040fcf87;  */

uint * FUN_1040fcd88(uint *param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x19) {
    uVar3 = 0x18;
  }
  bVar2 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar2;
  uVar7 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040fce34;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040fce34:
  if (uVar4 == 2) {
    uVar1 = *(undefined8 *)param_1;
LAB_1040fce80:
    _swift_release(uVar1);
  }
  else {
    if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar1 = *(undefined8 *)(param_1 + 2);
      goto LAB_1040fce80;
    }
    if (uVar4 == 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar6);
    }
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040fcefc;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040fcefc:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 2;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 0) {
        (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar6);
        *(byte *)((long)param_1 + uVar3) = 0;
        return param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar3 + 1);
      return param_1;
    }
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    bVar2 = 1;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  return param_1;
}



/* Entry: 1040fcf88; end: 1040fd08b;  */

int FUN_1040fcf88(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_1040fd030;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfc >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_1040fd030;
      goto LAB_1040fcfbc;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1040fcfbc:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfd;
  }
LAB_1040fd030:
  iVar2 = 0;
  if (3 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 1040fd08c; end: 1040fd22f;  */

void FUN_1040fd08c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  lVar1 = uVar4 + 1;
  uVar5 = (uint)lVar1;
  if (param_3 < 0xfd) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfc >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar2) {
      bVar6 = 4;
    }
    if (uVar2 < 0x100) {
      bVar6 = 1 < uVar2;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xfd) {
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
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfd;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar1);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar7;
    }
  }
  return;
}



/* Entry: 1040fd230; end: 1040fd2c7;  */

uint FUN_1040fd230(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = (uint)uVar4;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
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
    uVar2 = uVar3 | bVar1 - 3 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Entry: 1040fd2c8; end: 1040fd38f;  */

void FUN_1040fd2c8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 0x19) {
    uVar3 = 0x18;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar4 = (uint)uVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x03';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 3;
      _bzero(param_1,uVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 1040fd390; end: 1040fd423;  */

void FUN_1040fd390(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  uVar2 = 0;
  func_0x0001040fc674(0,param_5,param_6);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,0);
  lVar3 = 0;
  func_0x0001040fc668(0,param_5,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x24));
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = param_4;
  return;
}



/* Entry: 1040fd424; end: 1040fed57;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1040fd424(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long alStack_70 [2];
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  func_0x0001040fc674(0,lVar1,uVar9);
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)alStack_70 + lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar12 - extraout_x12;
  (**(code **)(lVar14 + 0x10))(lVar13);
  lVar6 = lVar13;
  _swift_getEnumCaseMultiPayload(lVar13,lVar5);
  iVar4 = (int)lVar6;
  if (iVar4 == 0) {
    uVar7 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar9,lVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    uVar8 = 0xff;
    FUN_104154d64(0xff,uVar7);
    _swift_retain(param_1);
    uVar9 = 0x112d393f0;
    func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
    uVar7 = 0;
    __ss6ResultOMa(0,uVar8,uVar9,PTR___ss5ErrorWS_11034ee10);
    uVar9 = 0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar7);
    uVar8 = 0;
    alStack_70[1] = uVar9;
    __sSaMa(0,uVar7);
    puVar10 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar8);
    puVar11 = alStack_70 + 1;
    FUN_1040fefb8(puVar11,uVar7,uVar8,puVar10);
    _swift_bridgeObjectRelease(uVar9);
    *puVar12 = param_1;
    *(undefined8 **)((long)alStack_70 + lVar2 + 8U) = puVar11;
    *(undefined8 *)(&stack0xffffffffffffffa0 + lVar2) = 0;
    _swift_storeEnumTagMultiPayload(puVar12,lVar5,1);
    (**(code **)(lVar14 + 0x28))();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(lVar13,lVar1);
    return;
  }
  if (iVar4 != 1) {
    if (iVar4 == 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040fd5fc);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1040fd604);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1040fd600);
  (*pcVar3)();
}



/* Entry: 1040fed58; end: 1040fee4b;  */

void FUN_1040fed58(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  char cStack_51;
  
  if (-1 < param_3) {
    uVar2 = 0;
    lVar3 = param_3;
    FUN_104182598(0,param_3,param_1,param_2);
    __sSr8mutatingSryxGSRyxG_tcfC();
    uStack_90 = param_5;
    uStack_88 = param_6;
    lStack_80 = param_7;
    uStack_78 = uVar2;
    lStack_70 = lVar3;
    __sST32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlFTj
              (&cStack_51,FUN_1040ff110,auStack_a0,PTR___sytN_11034f1b0 + 8,param_6,
               *(undefined8 *)(param_7 + 8));
    if (cStack_51 == '\x01') {
      FUN_10418595c(param_4,uVar2,lVar3,param_5,param_6,param_7);
    }
    *(long *)(param_1 + 8) = param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040fee4c);
  (*pcVar1)();
}



/* Entry: 1040fee4c; end: 1040fef33;  */

void FUN_1040fee4c(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x21;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar4 = *(long *)(param_7 + -8);
  uVar1 = param_4;
  uVar2 = param_5;
  uVar3 = param_6;
  lStack_68 = param_7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  __ss20ManagedBufferPointerV07_headerC0SpyxGvg(uVar1,uVar2,uVar3);
  __ss20ManagedBufferPointerV08_elementC0Spyq_Gvg(param_4,param_5,param_6);
  (*param_2)(param_1,uVar1,param_4,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar4 + 0x20))
              (param_10,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_68);
  }
  return;
}



/* Entry: 1040fef34; end: 1040fefb7;  */

void FUN_1040fef34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  __sSRMa(0,param_5);
  puVar2 = PTR___sSRyxGSlsMc_11034d8e8;
  _swift_getWitnessTable(PTR___sSRyxGSlsMc_11034d8e8,uVar1);
  FUN_10418595c(&uStack_50,param_3,param_4,param_5,uVar1,puVar2);
  return;
}



/* Entry: 1040fefb8; end: 1040ff0bf;  */

long FUN_1040fefb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  lVar1 = param_3;
  __sSl5countSivgTj(param_3,param_4);
  if (0 < lVar1) {
    lVar2 = lVar1;
    FUN_104181e6c();
    pcStack_98 = FUN_1040ff0c0;
    puStack_90 = auStack_80;
    uStack_a0 = param_2;
    uStack_70 = param_2;
    lStack_68 = param_3;
    uStack_60 = param_4;
    lStack_58 = lVar1;
    uStack_50 = param_1;
    _swift_retain();
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(FUN_1040ff0e0,auStack_b0,lVar2,&UNK_11074b8b8,param_2,uVar3,
                  PTR___sytN_11034f1b0 + 8,PTR___ss5ErrorWS_11034ee10,auStack_b8);
    _swift_release(lVar2);
    return lVar2;
  }
  if (lRam0000000113066078 != -1) {
    _swift_once(0x113066078,FUN_1041849c0);
  }
  lVar1 = lRam0000000113813170;
  _swift_retain(lRam0000000113813170);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss20ManagedBufferPointerV06unsafeB6ObjectAByxq_GyXl_tcfC_11034e950)();
  return lVar1;
}



/* Entry: 1040ff0c0; end: 1040ff0df;  */

void FUN_1040ff0c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1040fed58(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1040ff0e0; end: 1040ff10f;  */

void FUN_1040ff0e0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x18))();
  if (unaff_x21 != 0) {
    *param_3 = unaff_x21;
  }
  return;
}



/* Entry: 1040ff110; end: 1040ff12f;  */

void FUN_1040ff110(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1040fef34(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1040ff130; end: 1040ff13f;  */

void FUN_1040ff130(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
                    /* WARNING: Could not recover jumptable at 0x0001040ff194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return;
}



/* Entry: 1040ff140; end: 1040ff197;  */

void FUN_1040ff140(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
                    /* WARNING: Could not recover jumptable at 0x0001040ff194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return;
}



/* Entry: 1040ff198; end: 1040ff2ab;  */

uint FUN_1040ff198(ulong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar3 = *param_1;
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1040ff2ac; end: 1040ff35f;  */

void FUN_1040ff2ac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [32];
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0x13f;
  __ss6ResultOMa(0x13f,uVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  if (uVar1 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&UNK_10dcd7ae8,*(long *)(lVar3 + -8) + 0x40);
    _swift_initEnumMetadataSinglePayload(param_1,0,auStack_40,1);
  }
  return;
}



/* Entry: 1040ff360; end: 1040ff4f3;  */

ulong * FUN_1040ff360(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar9 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8;
  uVar6 = uVar9 | 7;
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) != 0 ||
      0x18 < uVar5 + (uVar9 + 0xf & (uVar6 ^ 0xffffffffffffffff)) + 1) {
    uVar5 = *param_2;
    *param_1 = uVar5;
    _swift_retain();
    return (ulong *)(uVar5 + (uVar6 + 0x10 & ~uVar6));
  }
  if (*param_2 < 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2);
    return param_1;
  }
  *param_1 = *param_2;
  puVar3 = (uint *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  bVar1 = *(byte *)((long)puVar3 + uVar5);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar12 = (uint)uVar5;
    uVar8 = 4;
    if (uVar12 < 4) {
      uVar8 = uVar12;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1040ff4b4;
      uVar8 = (uint)(byte)*puVar3;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar3;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar3;
    }
    else {
      uVar8 = *puVar3;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar12 & 3) << 3);
    if (3 < uVar12) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1040ff4b4:
  puVar10 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  if (uVar7 == 1) {
    uVar11 = *(undefined8 *)puVar3;
    _swift_errorRetain(uVar11);
    *puVar10 = uVar11;
    *(undefined1 *)((long)puVar10 + uVar5) = 1;
  }
  else {
    (**(code **)(lVar4 + 0x10))(puVar10,puVar3,lVar2);
    *(undefined1 *)((long)puVar10 + uVar5) = 0;
  }
  return param_1;
}



/* Entry: 1040ff4f4; end: 1040ff60b;  */

void FUN_1040ff4f4(ulong *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar2 + -8);
  uVar6 = *(ulong *)(lVar4 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (*param_1 < 0xffffffff) {
    return;
  }
  uVar7 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  puVar3 = (uint *)((long)param_1 + uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff));
  bVar1 = *(byte *)((long)puVar3 + uVar6);
  uVar8 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar6;
    uVar9 = 4;
    if (uVar5 < 4) {
      uVar9 = uVar5;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1040ff5e4;
      uVar9 = (uint)(byte)*puVar3;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar3;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar3;
    }
    else {
      uVar9 = *puVar3;
    }
    uVar8 = uVar9 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_1040ff5e4:
  if (uVar8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040ff608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}



/* Entry: 1040ff60c; end: 1040ff777;  */

ulong * FUN_1040ff60c(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar9 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  uVar6 = ~uVar9;
  if (*param_2 < 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5 + (uVar9 + 8 & uVar6) + 1);
    return param_1;
  }
  *param_1 = *param_2;
  puVar10 = (undefined8 *)((long)param_1 + uVar9 + 8 & uVar6);
  puVar3 = (uint *)((long)param_2 + uVar9 + 8 & uVar6);
  bVar1 = *(byte *)((long)puVar3 + uVar5);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar12 = (uint)uVar5;
    uVar8 = 4;
    if (uVar12 < 4) {
      uVar8 = uVar12;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1040ff730;
      uVar8 = (uint)(byte)*puVar3;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar3;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar3;
    }
    else {
      uVar8 = *puVar3;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar12 & 3) << 3);
    if (3 < uVar12) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1040ff730:
  if (uVar7 == 1) {
    uVar11 = *(undefined8 *)puVar3;
    _swift_errorRetain(uVar11);
    *puVar10 = uVar11;
    *(undefined1 *)((long)puVar10 + uVar5) = 1;
  }
  else {
    (**(code **)(lVar4 + 0x10))(puVar10,puVar3,lVar2);
    *(undefined1 *)((long)puVar10 + uVar5) = 0;
  }
  return param_1;
}



/* Entry: 1040ff778; end: 1040ffaff;  */

ulong * FUN_1040ff778(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar15 = *(long *)(lVar2 + -8);
  uVar3 = *(ulong *)(lVar15 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  uVar9 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8;
  uVar8 = uVar9 | 7;
  uVar4 = ~uVar8;
  uVar10 = *param_2;
  uVar14 = (uint)uVar3;
  if (*param_1 < 0xffffffff) {
    if (uVar10 < 0xffffffff) goto LAB_1040ff9c0;
    *param_1 = uVar10;
    puVar12 = (uint *)((long)param_1 + uVar8 + 8 & uVar4);
    puVar13 = (uint *)((long)param_2 + uVar8 + 8 & uVar4);
    bVar1 = *(byte *)((long)puVar13 + uVar3);
    uVar6 = (uint)bVar1;
    if (1 < bVar1) {
      uVar7 = 4;
      if (uVar14 < 4) {
        uVar7 = uVar14;
      }
      if ((int)uVar7 < 2) {
        if (uVar7 == 0) goto LAB_1040ff964;
        uVar7 = (uint)(byte)*puVar13;
      }
      else if (uVar7 == 2) {
        uVar7 = (uint)(ushort)*puVar13;
      }
      else if (uVar7 == 3) {
        uVar7 = (uint)(uint3)*puVar13;
      }
      else {
        uVar7 = *puVar13;
      }
      uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
      if (3 < uVar14) {
        uVar6 = uVar7;
      }
      uVar6 = uVar6 + 2;
    }
LAB_1040ff964:
    if (uVar6 != 1) {
      pcVar5 = *(code **)(lVar15 + 0x10);
      goto LAB_1040ffadc;
    }
    uVar11 = *(undefined8 *)puVar13;
    goto LAB_1040ffab8;
  }
  if (uVar10 < 0xffffffff) {
    puVar13 = (uint *)((long)param_1 + uVar8 + 8 & uVar4);
    bVar1 = *(byte *)((long)puVar13 + uVar3);
    uVar6 = (uint)bVar1;
    if (1 < bVar1) {
      uVar7 = 4;
      if (uVar14 < 4) {
        uVar7 = uVar14;
      }
      if ((int)uVar7 < 2) {
        if (uVar7 == 0) goto LAB_1040ff9a0;
        uVar7 = (uint)(byte)*puVar13;
      }
      else if (uVar7 == 2) {
        uVar7 = (uint)(ushort)*puVar13;
      }
      else if (uVar7 == 3) {
        uVar7 = (uint)(uint3)*puVar13;
      }
      else {
        uVar7 = *puVar13;
      }
      uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
      if (3 < uVar14) {
        uVar6 = uVar7;
      }
      uVar6 = uVar6 + 2;
    }
LAB_1040ff9a0:
    if (uVar6 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar13);
    }
    else {
      (**(code **)(lVar15 + 8))(puVar13,lVar2);
    }
LAB_1040ff9c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,uVar3 + (uVar9 + 0xf & (uVar8 ^ 0xffffffffffffffff)) + 1);
    return param_1;
  }
  *param_1 = uVar10;
  puVar12 = (uint *)((long)param_1 + uVar8 + 8 & uVar4);
  puVar13 = (uint *)((long)param_2 + uVar8 + 8 & uVar4);
  if (puVar12 == puVar13) {
    return param_1;
  }
  bVar1 = *(byte *)((long)puVar12 + uVar3);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = 4;
    if (uVar14 < 4) {
      uVar7 = uVar14;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1040ffa14;
      uVar7 = (uint)(byte)*puVar12;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar12;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar12;
    }
    else {
      uVar7 = *puVar12;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1040ffa14:
  if (uVar6 == 1) {
    _swift_errorRelease(*(undefined8 *)puVar12);
  }
  else {
    (**(code **)(lVar15 + 8))(puVar12,lVar2);
  }
  bVar1 = *(byte *)((long)puVar13 + uVar3);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = 4;
    if (uVar14 < 4) {
      uVar7 = uVar14;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1040ffaac;
      uVar7 = (uint)(byte)*puVar13;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar13;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar13;
    }
    else {
      uVar7 = *puVar13;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1040ffaac:
  if (uVar6 != 1) {
    pcVar5 = *(code **)(lVar15 + 0x10);
LAB_1040ffadc:
    (*pcVar5)(puVar12,puVar13,lVar2);
    *(byte *)((long)puVar12 + uVar3) = 0;
    return param_1;
  }
  uVar11 = *(undefined8 *)puVar13;
LAB_1040ffab8:
  _swift_errorRetain(uVar11);
  *(undefined8 *)puVar12 = uVar11;
  *(byte *)((long)puVar12 + uVar3) = 1;
  return param_1;
}



/* Entry: 1040ffb00; end: 1040ffc63;  */

ulong * FUN_1040ffb00(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar9 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  uVar6 = ~uVar9;
  if (*param_2 < 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5 + (uVar9 + 8 & uVar6) + 1);
    return param_1;
  }
  *param_1 = *param_2;
  puVar10 = (undefined8 *)((long)param_1 + uVar9 + 8 & uVar6);
  puVar3 = (uint *)((long)param_2 + uVar9 + 8 & uVar6);
  bVar1 = *(byte *)((long)puVar3 + uVar5);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar11 = (uint)uVar5;
    uVar8 = 4;
    if (uVar11 < 4) {
      uVar8 = uVar11;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1040ffc24;
      uVar8 = (uint)(byte)*puVar3;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar3;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar3;
    }
    else {
      uVar8 = *puVar3;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1040ffc24:
  if (uVar7 == 1) {
    *puVar10 = *(undefined8 *)puVar3;
    *(undefined1 *)((long)puVar10 + uVar5) = 1;
  }
  else {
    (**(code **)(lVar4 + 0x20))(puVar10,puVar3,lVar2);
    *(undefined1 *)((long)puVar10 + uVar5) = 0;
  }
  return param_1;
}



/* Entry: 1040ffc64; end: 1040fffe3;  */

ulong * FUN_1040ffc64(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar15 = *(long *)(lVar2 + -8);
  uVar3 = *(ulong *)(lVar15 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  uVar10 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8;
  uVar9 = uVar10 | 7;
  uVar4 = ~uVar9;
  uVar11 = *param_2;
  uVar14 = (uint)uVar3;
  if (*param_1 < 0xffffffff) {
    if (uVar11 < 0xffffffff) goto LAB_1040ffeac;
    *param_1 = uVar11;
    puVar12 = (uint *)((long)param_1 + uVar9 + 8 & uVar4);
    puVar13 = (uint *)((long)param_2 + uVar9 + 8 & uVar4);
    bVar1 = *(byte *)((long)puVar13 + uVar3);
    uVar7 = (uint)bVar1;
    if (1 < bVar1) {
      uVar8 = 4;
      if (uVar14 < 4) {
        uVar8 = uVar14;
      }
      if ((int)uVar8 < 2) {
        if (uVar8 == 0) goto LAB_1040ffe50;
        uVar8 = (uint)(byte)*puVar13;
      }
      else if (uVar8 == 2) {
        uVar8 = (uint)(ushort)*puVar13;
      }
      else if (uVar8 == 3) {
        uVar8 = (uint)(uint3)*puVar13;
      }
      else {
        uVar8 = *puVar13;
      }
      uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
      if (3 < uVar14) {
        uVar7 = uVar8;
      }
      uVar7 = uVar7 + 2;
    }
LAB_1040ffe50:
    if (uVar7 != 1) {
      pcVar6 = *(code **)(lVar15 + 0x20);
      goto LAB_1040fffc0;
    }
    uVar5 = *(undefined8 *)puVar13;
    goto LAB_1040fffa4;
  }
  if (uVar11 < 0xffffffff) {
    puVar13 = (uint *)((long)param_1 + uVar9 + 8 & uVar4);
    bVar1 = *(byte *)((long)puVar13 + uVar3);
    uVar7 = (uint)bVar1;
    if (1 < bVar1) {
      uVar8 = 4;
      if (uVar14 < 4) {
        uVar8 = uVar14;
      }
      if ((int)uVar8 < 2) {
        if (uVar8 == 0) goto LAB_1040ffe8c;
        uVar8 = (uint)(byte)*puVar13;
      }
      else if (uVar8 == 2) {
        uVar8 = (uint)(ushort)*puVar13;
      }
      else if (uVar8 == 3) {
        uVar8 = (uint)(uint3)*puVar13;
      }
      else {
        uVar8 = *puVar13;
      }
      uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
      if (3 < uVar14) {
        uVar7 = uVar8;
      }
      uVar7 = uVar7 + 2;
    }
LAB_1040ffe8c:
    if (uVar7 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar13);
    }
    else {
      (**(code **)(lVar15 + 8))(puVar13,lVar2);
    }
LAB_1040ffeac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,uVar3 + (uVar10 + 0xf & (uVar9 ^ 0xffffffffffffffff)) + 1);
    return param_1;
  }
  *param_1 = uVar11;
  puVar12 = (uint *)((long)param_1 + uVar9 + 8 & uVar4);
  puVar13 = (uint *)((long)param_2 + uVar9 + 8 & uVar4);
  if (puVar12 == puVar13) {
    return param_1;
  }
  bVar1 = *(byte *)((long)puVar12 + uVar3);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar8 = 4;
    if (uVar14 < 4) {
      uVar8 = uVar14;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1040fff00;
      uVar8 = (uint)(byte)*puVar12;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar12;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar12;
    }
    else {
      uVar8 = *puVar12;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1040fff00:
  if (uVar7 == 1) {
    _swift_errorRelease(*(undefined8 *)puVar12);
  }
  else {
    (**(code **)(lVar15 + 8))(puVar12,lVar2);
  }
  bVar1 = *(byte *)((long)puVar13 + uVar3);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar8 = 4;
    if (uVar14 < 4) {
      uVar8 = uVar14;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1040fff98;
      uVar8 = (uint)(byte)*puVar13;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar13;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar13;
    }
    else {
      uVar8 = *puVar13;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1040fff98:
  if (uVar7 != 1) {
    pcVar6 = *(code **)(lVar15 + 0x20);
LAB_1040fffc0:
    (*pcVar6)(puVar12,puVar13,lVar2);
    *(byte *)((long)puVar12 + uVar3) = 0;
    return param_1;
  }
  uVar5 = *(undefined8 *)puVar13;
LAB_1040fffa4:
  *(undefined8 *)puVar12 = uVar5;
  *(byte *)((long)puVar12 + uVar3) = 1;
  return param_1;
}



/* Entry: 1040fffe4; end: 10410014b;  */

int FUN_1040fffe4(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0x7fffffff) goto LAB_1041000cc;
  uVar1 = *(uint *)(*(long *)(lVar4 + -8) + 0x50) & 0xf8;
  uVar6 = uVar6 + ((ulong)(uVar1 + 0xf & (uVar1 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar5 = (uint)uVar6;
  uVar1 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar7 = param_2 + 0x80000002 + ~(-1 << (ulong)(uVar1 & 0x1f)) >> (ulong)(uVar1 & 0x1f);
    if (uVar7 < 0xff) {
      if (uVar7 == 0) goto LAB_1041000cc;
      goto LAB_10410008c;
    }
    if (uVar7 < 0xffff) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_10410008c:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar7 - 1 << (ulong)(uVar1 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar1 = 4;
      if (uVar5 < 4) {
        uVar1 = uVar5;
      }
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar1 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)(uint)*param_1;
      }
    }
    return ((uint)uVar6 | uVar2) + 0x7fffffff;
  }
LAB_1041000cc:
  uVar6 = *param_1;
  if (0xfffffffe < uVar6) {
    uVar6 = 0xffffffff;
  }
  iVar3 = 0;
  if (1 < (int)uVar6 + 1U) {
    iVar3 = (int)uVar6;
  }
  return iVar3;
}



/* Entry: 10410014c; end: 10410033b;  */

void FUN_10410014c(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = *(uint *)(*(long *)(lVar4 + -8) + 0x50) & 0xf8;
  uVar5 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  lVar4 = uVar5 + ((ulong)(uVar6 + 0xf & (uVar6 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar6 = (uint)lVar4;
  if (param_3 < 0x7fffffff) {
    bVar3 = 0;
  }
  else if (uVar6 < 4) {
    uVar1 = param_3 + 0x80000002 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f)) >> (ulong)(uVar6 << 3 & 0x1f)
    ;
    bVar3 = 2;
    if (0xfffe < uVar1) {
      bVar3 = 4;
    }
    if (uVar1 < 0xff) {
      bVar3 = uVar1 != 0;
    }
  }
  else {
    bVar3 = 1;
  }
  if (param_2 < 0x7fffffff) {
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        *(undefined1 *)((long)param_1 + lVar4) = 0;
      }
    }
    else if (bVar3 == 2) {
      *(undefined2 *)((long)param_1 + lVar4) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar4) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
    }
  }
  else {
    param_2 = param_2 + 0x80000001;
    if (uVar6 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar4);
        uVar2 = (undefined2)uVar1;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar4);
      *(uint *)param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        *(char *)((long)param_1 + lVar4) = (char)iVar7;
      }
    }
    else if (bVar3 == 2) {
      *(short *)((long)param_1 + lVar4) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar4) = iVar7;
    }
  }
  return;
}



/* Entry: 10410033c; end: 10410033f;  */

void FUN_10410033c(void)

{
  return;
}



/* Entry: 104100340; end: 104100437;  */

void FUN_104100340(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if ((int)param_2 < 0) {
    uVar1 = *(uint *)(*(long *)(lVar3 + -8) + 0x50) & 0xf8;
    uVar1 = (int)uVar4 + (uVar1 + 0xf & (uVar1 ^ 0xffffffff) & 0x1f8) + 1;
    uVar5 = 0x7fffffff;
    if (uVar1 < 4) {
      uVar5 = ~(-1 << (ulong)(uVar1 * 8 & 0x1f));
    }
    if (uVar1 != 0) {
      uVar5 = uVar5 & param_2;
      uVar2 = 4;
      if (uVar1 < 4) {
        uVar2 = uVar1;
      }
      _bzero(param_1);
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          *(char *)param_1 = (char)uVar5;
        }
        else {
          *(short *)param_1 = (short)uVar5;
        }
      }
      else if (uVar2 == 3) {
        *(short *)param_1 = (short)uVar5;
        *(char *)((long)param_1 + 2) = (char)(uVar5 >> 0x10);
      }
      else {
        *(uint *)param_1 = uVar5;
      }
    }
  }
  else if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
  }
  return;
}



/* Entry: 104100438; end: 104100443;  */

void FUN_104100438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f083c);
  return;
}



/* Entry: 104100444; end: 1041004e7;  */

void FUN_104100444(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0xff;
  __ss6ResultOMa(0xff,uVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  lVar4 = 0x13f;
  __sSqMa();
  if (uVar3 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar4 + -8) + 0x40,1);
  }
  return;
}



/* Entry: 1041004e8; end: 1041005eb;  */

long * FUN_1041004e8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) == 0 && uVar5 + 1 < 0x19) {
    bVar2 = *(byte *)((long)param_2 + uVar5);
    if ((0xffffff02 < bVar2 - 0xff) || (1 < bVar2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2);
      return param_1;
    }
    if (bVar2 == 1) {
      lVar3 = *param_2;
      _swift_errorRetain(lVar3);
      *param_1 = lVar3;
      *(undefined1 *)((long)param_1 + uVar5) = 1;
    }
    else {
      (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar3);
      *(undefined1 *)((long)param_1 + uVar5) = 0;
    }
  }
  else {
    uVar1 = *(uint *)(lVar4 + 0x50) & 0xf8;
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1041005ec; end: 104100673;  */

void FUN_1041005ec(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar2 = *(ulong *)(*(long *)(lVar1 + -8) + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if (*(byte *)((long)param_1 + uVar2) < 2) {
    if (*(byte *)((long)param_1 + uVar2) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(*param_1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000104100670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
    return;
  }
  return;
}



/* Entry: 104100674; end: 10410073b;  */

undefined8 * FUN_104100674(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar3 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  if ((bVar1 - 0xff < 0xffffff03) && (bVar1 < 2)) {
    if (bVar1 == 1) {
      uVar4 = *param_2;
      _swift_errorRetain(uVar4);
      *param_1 = uVar4;
      *(undefined1 *)((long)param_1 + uVar3) = 1;
    }
    else {
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
      *(undefined1 *)((long)param_1 + uVar3) = 0;
    }
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar3 + 1);
  return param_1;
}



/* Entry: 10410073c; end: 10410092b;  */

uint * FUN_10410073c(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar10 = *(long *)(lVar4 + -8);
  uVar5 = *(ulong *)(lVar10 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar5);
  bVar3 = *(byte *)((long)param_2 + uVar5);
  uVar7 = bVar3 - 0xff;
  if (bVar2 - 0xff < 0xffffff03) {
    if (uVar7 < 0xffffff03) {
      if (1 < bVar2) goto LAB_1041007e0;
      if (bVar3 < 2) {
        if (param_1 == param_2) {
          return param_1;
        }
        if (bVar2 == 1) {
          _swift_errorRelease(*(undefined8 *)param_1);
        }
        else {
          (**(code **)(lVar10 + 8))(param_1,lVar4);
        }
        bVar2 = *(byte *)((long)param_2 + uVar5);
        uVar7 = (uint)bVar2;
        if (1 < bVar2) {
          uVar9 = (uint)uVar5;
          uVar1 = 4;
          if (uVar9 < 4) {
            uVar1 = uVar9;
          }
          if ((int)uVar1 < 2) {
            if (uVar1 == 0) goto LAB_104100910;
            uVar7 = (uint)(byte)*param_2;
          }
          else if (uVar1 == 2) {
            uVar7 = (uint)(ushort)*param_2;
          }
          else if (uVar1 == 3) {
            uVar7 = (uint)(uint3)*param_2;
          }
          else {
            uVar7 = *param_2;
          }
          if (uVar9 < 4) {
            uVar7 = (uVar7 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3)) + 2;
          }
          else {
            uVar7 = uVar7 + 2;
          }
        }
LAB_104100910:
        if (uVar7 == 1) goto LAB_1041007ec;
        pcVar6 = *(code **)(lVar10 + 0x10);
        goto LAB_104100830;
      }
    }
    else if (1 < bVar2) goto LAB_104100868;
    if (bVar2 == 1) {
      _swift_errorRelease(*(undefined8 *)param_1);
    }
    else {
      (**(code **)(lVar10 + 8))(param_1,lVar4);
    }
  }
  else {
    if (0xffffff02 < uVar7) goto LAB_104100868;
LAB_1041007e0:
    if (bVar3 < 2) {
      if (bVar3 == 1) {
LAB_1041007ec:
        uVar8 = *(undefined8 *)param_2;
        _swift_errorRetain(uVar8);
        *(undefined8 *)param_1 = uVar8;
        *(byte *)((long)param_1 + uVar5) = 1;
        return param_1;
      }
      pcVar6 = *(code **)(lVar10 + 0x10);
LAB_104100830:
      (*pcVar6)(param_1,param_2,lVar4);
      *(byte *)((long)param_1 + uVar5) = 0;
      return param_1;
    }
  }
LAB_104100868:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5 + 1);
  return param_1;
}



/* Entry: 10410092c; end: 1041009db;  */

undefined8 * FUN_10410092c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar3 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  if ((bVar1 - 0xff < 0xffffff03) && (bVar1 < 2)) {
    if (bVar1 == 1) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar3) = 1;
    }
    else {
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      *(undefined1 *)((long)param_1 + uVar3) = 0;
    }
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar3 + 1);
  return param_1;
}



/* Entry: 1041009dc; end: 104100bc3;  */

uint * FUN_1041009dc(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar4 + -8);
  uVar5 = *(ulong *)(lVar9 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar5);
  bVar3 = *(byte *)((long)param_2 + uVar5);
  uVar7 = bVar3 - 0xff;
  if (bVar2 - 0xff < 0xffffff03) {
    if (uVar7 < 0xffffff03) {
      if (1 < bVar2) goto LAB_104100a80;
      if (bVar3 < 2) {
        if (param_1 == param_2) {
          return param_1;
        }
        if (bVar2 == 1) {
          _swift_errorRelease(*(undefined8 *)param_1);
        }
        else {
          (**(code **)(lVar9 + 8))(param_1,lVar4);
        }
        bVar2 = *(byte *)((long)param_2 + uVar5);
        uVar7 = (uint)bVar2;
        if (1 < bVar2) {
          uVar8 = (uint)uVar5;
          uVar1 = 4;
          if (uVar8 < 4) {
            uVar1 = uVar8;
          }
          if ((int)uVar1 < 2) {
            if (uVar1 == 0) goto LAB_104100ba8;
            uVar7 = (uint)(byte)*param_2;
          }
          else if (uVar1 == 2) {
            uVar7 = (uint)(ushort)*param_2;
          }
          else if (uVar1 == 3) {
            uVar7 = (uint)(uint3)*param_2;
          }
          else {
            uVar7 = *param_2;
          }
          if (uVar8 < 4) {
            uVar7 = (uVar7 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3)) + 2;
          }
          else {
            uVar7 = uVar7 + 2;
          }
        }
LAB_104100ba8:
        if (uVar7 == 1) goto LAB_104100a8c;
        pcVar6 = *(code **)(lVar9 + 0x20);
        goto LAB_104100ac8;
      }
    }
    else if (1 < bVar2) goto LAB_104100b00;
    if (bVar2 == 1) {
      _swift_errorRelease(*(undefined8 *)param_1);
    }
    else {
      (**(code **)(lVar9 + 8))(param_1,lVar4);
    }
  }
  else {
    if (0xffffff02 < uVar7) goto LAB_104100b00;
LAB_104100a80:
    if (bVar3 < 2) {
      if (bVar3 == 1) {
LAB_104100a8c:
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(byte *)((long)param_1 + uVar5) = 1;
        return param_1;
      }
      pcVar6 = *(code **)(lVar9 + 0x20);
LAB_104100ac8:
      (*pcVar6)(param_1,param_2,lVar4);
      *(byte *)((long)param_1 + uVar5) = 0;
      return param_1;
    }
  }
LAB_104100b00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5 + 1);
  return param_1;
}



/* Entry: 104100bc4; end: 104100d07;  */

int FUN_104100bc4(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_104100c98;
  uVar7 = uVar6 + 1;
  uVar5 = (uint)uVar7;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfc >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_104100c98;
      goto LAB_104100c24;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_104100c24:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar1 = 0;
    if (uVar5 < 4) {
      uVar1 = uVar8 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar2 = 4;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return ((uint)uVar7 | uVar1) + 0xfd;
  }
LAB_104100c98:
  uVar2 = 0;
  if (1 < *(byte *)((long)param_1 + uVar6)) {
    uVar2 = *(byte *)((long)param_1 + uVar6) ^ 0xff;
  }
  iVar3 = 0;
  if (1 < uVar2) {
    iVar3 = uVar2 - 1;
  }
  return iVar3;
}



/* Entry: 104100d08; end: 104100ecf;  */

void FUN_104100d08(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar3 = uVar4 + 1;
  uVar5 = (uint)lVar3;
  if (param_3 < 0xfd) {
    bVar7 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfc >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar7 = 2;
    if (0xffff < uVar1) {
      bVar7 = 4;
    }
    if (uVar1 < 0x100) {
      bVar7 = 1 < uVar1;
    }
  }
  else {
    bVar7 = 1;
  }
  if (param_2 < 0xfd) {
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_1 + lVar3) = 0;
      }
    }
    else if (bVar7 == 2) {
      *(undefined2 *)((long)param_1 + lVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar3) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -2 - (char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfd;
    if (uVar5 < 4) {
      iVar6 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar3);
      *param_1 = param_2;
      iVar6 = 1;
    }
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(char *)((long)param_1 + lVar3) = (char)iVar6;
      }
    }
    else if (bVar7 == 2) {
      *(short *)((long)param_1 + lVar3) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar3) = iVar6;
    }
  }
  return;
}



/* Entry: 104100ed0; end: 104100f2f;  */

byte FUN_104100ed0(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar3 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = 0;
  if (1 < *(byte *)(param_1 + uVar3)) {
    bVar1 = *(byte *)(param_1 + uVar3) ^ 0xff;
  }
  return bVar1;
}



/* Entry: 104100f30; end: 104100f33;  */

void FUN_104100f30(void)

{
  return;
}



/* Entry: 104100f34; end: 104101017;  */

void FUN_104100f34(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (param_2 < 0xfe) {
    if (param_2 != 0) {
      *(byte *)((long)param_1 + uVar4) = ~(byte)param_2;
    }
  }
  else {
    uVar1 = (int)uVar4 + 1;
    uVar5 = 0xffffffff;
    if (uVar1 < 4) {
      uVar5 = ~(-1 << (ulong)(uVar1 * 8 & 0x1f));
    }
    if (uVar1 != 0) {
      uVar5 = uVar5 & param_2 - 0xfe;
      uVar2 = 4;
      if (uVar1 < 4) {
        uVar2 = uVar1;
      }
      _bzero(param_1);
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          *(char *)param_1 = (char)uVar5;
        }
        else {
          *(short *)param_1 = (short)uVar5;
        }
      }
      else if (uVar2 == 3) {
        *(short *)param_1 = (short)uVar5;
        *(char *)((long)param_1 + 2) = (char)(uVar5 >> 0x10);
      }
      else {
        *param_1 = uVar5;
      }
    }
  }
  return;
}



/* Entry: 104101018; end: 104101023;  */

void FUN_104101018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f0878);
  return;
}



/* Entry: 104101024; end: 104101103;  */

undefined1  [16] FUN_104101024(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lStack_30;
  long lStack_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_1 + 0x18),lVar1,PTR___sSciTL_11034fea8,
               PTR___s7ElementSciTl_11034fb58);
    uVar4 = 0x112d393f0;
    func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
    uVar3 = 0xff;
    __ss6ResultOMa(0xff,uVar2,uVar4,PTR___ss5ErrorWS_11034ee10);
    lVar1 = 0x13f;
    __sSqMa();
    if (uVar3 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initEnumMetadataMultiPayload(param_1,0,2,&lStack_30);
      lVar1 = 0;
      uVar4 = 0;
      goto LAB_1041010f0;
    }
  }
  uVar4 = 0x3f;
LAB_1041010f0:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar1;
  return auVar5;
}



/* Entry: 104101104; end: 1041012df;  */

long * FUN_104101104(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar3 + -8);
  uVar8 = *(ulong *)(lVar9 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar3,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar5 = *(long *)(lVar2 + -8);
  uVar4 = *(ulong *)(lVar5 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (uVar8 < uVar4 + 1) {
    uVar8 = uVar4 + 1;
  }
  uVar6 = *(uint *)(lVar5 + 0x50) | *(uint *)(lVar9 + 0x50);
  if ((uVar6 & 0x1000f8) != 0 || 0x18 < uVar8 + 1) {
    uVar4 = (ulong)(uVar6 & 0xf8 | 7);
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    _swift_retain();
    return (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  }
  bVar1 = *(byte *)((long)param_2 + uVar8);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = 4;
    if (uVar8 < 4) {
      uVar7 = (uint)uVar8;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_104101224;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)(((uint)uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_104101224:
  if (uVar6 == 1) {
    if (*(byte *)((long)param_2 + uVar4) < 2) {
      if (*(byte *)((long)param_2 + uVar4) == 1) {
        lVar3 = *(long *)param_2;
        _swift_errorRetain(lVar3);
        *param_1 = lVar3;
        *(undefined1 *)((long)param_1 + uVar4) = 1;
      }
      else {
        (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar2);
        *(undefined1 *)((long)param_1 + uVar4) = 0;
      }
    }
    else {
      _memcpy(param_1,param_2);
    }
    *(undefined1 *)((long)param_1 + uVar8) = 1;
  }
  else {
    if (uVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar8 + 1);
      return param_1;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar3);
    *(undefined1 *)((long)param_1 + uVar8) = 0;
  }
  return param_1;
}



/* Entry: 1041012e0; end: 10410141b;  */

void FUN_1041012e0(uint *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar8 = *(long *)(lVar1 + -8);
  uVar9 = *(ulong *)(lVar8 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),lVar1,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (uVar9 < uVar4 + 1) {
    uVar9 = uVar4 + 1;
  }
  bVar2 = *(byte *)((long)param_1 + uVar9);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = (uint)uVar9;
    uVar7 = 4;
    if (uVar5 < 4) {
      uVar7 = uVar5;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1041013b4;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1041013b4:
  if (uVar6 == 1) {
    if (1 < *(byte *)((long)param_1 + uVar4)) {
      return;
    }
    if (*(byte *)((long)param_1 + uVar4) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)param_1,lVar3);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 8);
  }
  else {
    if (uVar6 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
    lVar3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001041013d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar3);
  return;
}


