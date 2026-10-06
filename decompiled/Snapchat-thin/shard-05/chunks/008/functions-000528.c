/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104140388; end: 1041403e7;  */

void FUN_104140388(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1041469dc;
  plVar4[3] = param_2;
  plVar4[4] = unaff_x20;
  plVar4[2] = param_1;
  lVar7 = *(long *)(param_2 + 0x18);
  plVar4[5] = lVar7;
  lVar6 = *(long *)(param_2 + 0x10);
  plVar4[6] = lVar6;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar7,lVar6,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar4[7] = lVar1;
  lVar5 = *(long *)(lVar1 + -8);
  plVar4[8] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[9] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xb] = uVar3;
  lVar5 = 0;
  __sSqMa(0,lVar1);
  plVar4[0xc] = lVar5;
  lVar1 = *(long *)(lVar5 + -8);
  plVar4[0xd] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xe] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xf] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x10] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x11] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x12] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x13] = uVar3;
  lVar1 = 0;
  func_0x00010413ef80(0,lVar6,lVar7);
  plVar4[0x14] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x15] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x16] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10413f208,0,0);
  return;
}



/* Entry: 1041403e8; end: 104140473;  */

void FUN_1041403e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  plVar1[1] = (long)FUN_104140474;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar1,param_1,param_2,param_3,param_5,param_6,unaff_x22 + 0x10);
  return;
}



/* Entry: 104140474; end: 1041404c7;  */

void FUN_104140474(void)

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
                    /* WARNING: Could not recover jumptable at 0x0001041404c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1041404c8; end: 1041405eb;  */

void FUN_1041404c8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_2 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  lVar5 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar7 = *(undefined8 *)(lVar5 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar6,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x8_00;
  (**(code **)(lVar8 + 0x10))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar5,lVar6,uVar7);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = *(undefined1 *)(puVar1 + 2);
  FUN_10413ef8c(param_1,lVar5,*(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x28)),uVar2,uVar3,
                uVar4,lVar6,uVar7);
  func_0x00010413ef78(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1041405ec; end: 104140677;  */

void FUN_1041405ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR___sSciTL_11034fea8;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar2,uVar1,uVar4,puVar3,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)();
  return;
}



/* Entry: 104140678; end: 1041406af;  */

void FUN_104140678(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd8b90,param_1);
  return;
}



/* Entry: 1041406b0; end: 10414077b;  */

void FUN_1041406b0(long param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x0001041406dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 10414077c; end: 104140973;  */

long * FUN_10414077c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar4 + -8);
  lVar16 = *(long *)(lVar15 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar4,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar14 = *(long *)(lVar3 + -8);
  uVar10 = (ulong)*(uint *)(lVar14 + 0x50) & 0xf8 | 7;
  uVar11 = *(ulong *)(lVar14 + 0x40);
  if (uVar11 < 0x11) {
    uVar11 = 0x10;
  }
  uVar8 = *(uint *)(lVar14 + 0x50) | *(uint *)(lVar15 + 0x50);
  if ((uVar8 & 0x1000f8) != 0 ||
      0x18 < (uVar11 + (lVar16 + uVar10 & (uVar10 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8) +
             8) {
    uVar11 = (ulong)(uVar8 & 0xf8 | 7);
    lVar4 = *param_2;
    *param_1 = lVar4;
    _swift_retain();
    return (long *)(lVar4 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar4);
  uVar10 = (long)param_1 + lVar16 + 7;
  uVar1 = (long)param_2 + lVar16 + 7;
  puVar6 = (uint *)(uVar1 & 0xfffffffffffffff8);
  bVar2 = *(byte *)((long)puVar6 + uVar11);
  uVar8 = (uint)bVar2;
  if (2 < bVar2) {
    uVar13 = (uint)uVar11;
    uVar9 = 4;
    if (uVar13 < 4) {
      uVar9 = uVar13;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1041408dc;
      uVar9 = (uint)(byte)*puVar6;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar6;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar6;
    }
    else {
      uVar9 = *puVar6;
    }
    uVar8 = uVar9 | bVar2 - 3 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_1041408dc:
  puVar12 = (undefined8 *)(uVar10 & 0xfffffffffffffff8);
  if (uVar8 == 2) {
    uVar5 = *(undefined8 *)(puVar6 + 2);
    uVar17 = *(undefined8 *)puVar6;
    puVar12[1] = *(undefined8 *)(puVar6 + 2);
    *puVar12 = uVar17;
    uVar7 = 2;
  }
  else {
    if (uVar8 != 1) {
      (**(code **)(lVar14 + 0x10))(puVar12,puVar6,lVar3);
      *(undefined1 *)((long)puVar12 + uVar11) = 0;
      goto LAB_104140938;
    }
    uVar5 = *(undefined8 *)(puVar6 + 2);
    uVar17 = *(undefined8 *)puVar6;
    puVar12[1] = *(undefined8 *)(puVar6 + 2);
    *puVar12 = uVar17;
    uVar7 = 1;
  }
  *(undefined1 *)((long)puVar12 + uVar11) = uVar7;
  _swift_retain(uVar5);
LAB_104140938:
  *(undefined8 *)((uVar10 | 7) + uVar11 + 1 & 0xffffffffffffff8) =
       *(undefined8 *)((uVar1 | 7) + uVar11 + 1 & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 104140974; end: 104140a9f;  */

void FUN_104140974(long param_1,long param_2)

{
  byte bVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_2 + 0x10);
  lVar9 = *(long *)(lVar8 + -8);
  (**(code **)(lVar9 + 8))(param_1,lVar8);
  lVar3 = *(long *)(lVar9 + 0x40);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),lVar8,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar8 = *(long *)(lVar9 + -8);
  uVar5 = (ulong)*(uint *)(lVar8 + 0x50) & 0xf8 | 7;
  puVar2 = (uint *)(lVar3 + param_1 + uVar5 & (uVar5 ^ 0xffffffffffffffff));
  uVar5 = *(ulong *)(lVar8 + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  bVar1 = *(byte *)((long)puVar2 + uVar5);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar7 = 4;
    if (uVar4 < 4) {
      uVar7 = uVar4;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_104140a68;
      uVar7 = (uint)(byte)*puVar2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar2;
    }
    else {
      uVar7 = *puVar2;
    }
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_104140a68:
  if ((uVar6 != 2) && (uVar6 != 1)) {
                    /* WARNING: Could not recover jumptable at 0x000104140a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 8))(puVar2,lVar9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(puVar2 + 2));
  return;
}



/* Entry: 104140aa0; end: 104140c2b;  */

long FUN_104140aa0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar11 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar11 + -8);
  (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar11);
  lVar12 = *(long *)(lVar12 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar11,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar11 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(uint *)(lVar11 + 0x50) & 0xf8 | 7;
  lVar12 = lVar12 + uVar5;
  puVar8 = (undefined8 *)(lVar12 + param_1 & (uVar5 ^ 0xffffffffffffffff));
  puVar9 = (uint *)(lVar12 + param_2 & (uVar5 ^ 0xffffffffffffffff));
  uVar5 = *(ulong *)(lVar11 + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  bVar1 = *(byte *)((long)puVar9 + uVar5);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar10 = (uint)uVar5;
    uVar7 = 4;
    if (uVar10 < 4) {
      uVar7 = uVar10;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_104140ba4;
      uVar7 = (uint)(byte)*puVar9;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar9;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar9;
    }
    else {
      uVar7 = *puVar9;
    }
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_104140ba4:
  if (uVar6 == 2) {
    uVar3 = *(undefined8 *)(puVar9 + 2);
    uVar13 = *(undefined8 *)puVar9;
    puVar8[1] = *(undefined8 *)(puVar9 + 2);
    *puVar8 = uVar13;
    uVar4 = 2;
  }
  else {
    if (uVar6 != 1) {
      (**(code **)(lVar11 + 0x10))(puVar8,puVar9,lVar2);
      *(undefined1 *)((long)puVar8 + uVar5) = 0;
      goto LAB_104140bf8;
    }
    uVar3 = *(undefined8 *)(puVar9 + 2);
    uVar13 = *(undefined8 *)puVar9;
    puVar8[1] = *(undefined8 *)(puVar9 + 2);
    *puVar8 = uVar13;
    uVar4 = 1;
  }
  *(undefined1 *)((long)puVar8 + uVar5) = uVar4;
  _swift_retain(uVar3);
LAB_104140bf8:
  *(undefined8 *)(uVar5 + 8 + (long)puVar8 & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar5 + 8 + (long)puVar9) & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 104140c2c; end: 104140e73;  */

long FUN_104140c2c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  (**(code **)(lVar10 + 0x18))(param_1,param_2,lVar8);
  lVar10 = *(long *)(lVar10 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar8,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar8 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(uint *)(lVar8 + 0x50) & 0xf8 | 7;
  lVar10 = lVar10 + uVar4;
  puVar9 = (uint *)(lVar10 + param_1 & (uVar4 ^ 0xffffffffffffffff));
  puVar7 = (uint *)(lVar10 + param_2 & (uVar4 ^ 0xffffffffffffffff));
  uVar4 = *(ulong *)(lVar8 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  if (puVar9 == puVar7) goto LAB_104140e34;
  bVar3 = *(byte *)((long)puVar9 + uVar4);
  uVar5 = (uint)bVar3;
  uVar11 = (uint)uVar4;
  if (2 < bVar3) {
    uVar6 = 4;
    if (uVar11 < 4) {
      uVar6 = uVar11;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104140d3c;
      uVar6 = (uint)(byte)*puVar9;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*puVar9;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*puVar9;
    }
    else {
      uVar6 = *puVar9;
    }
    uVar5 = uVar6 | bVar3 - 3 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_104140d3c:
  if ((uVar5 == 2) || (uVar5 == 1)) {
    _swift_release(*(undefined8 *)(puVar9 + 2));
  }
  else {
    (**(code **)(lVar8 + 8))(puVar9,lVar1);
  }
  bVar3 = *(byte *)((long)puVar7 + uVar4);
  uVar5 = (uint)bVar3;
  if (2 < bVar3) {
    uVar6 = 4;
    if (uVar11 < 4) {
      uVar6 = uVar11;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104140ddc;
      uVar6 = (uint)(byte)*puVar7;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*puVar7;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*puVar7;
    }
    else {
      uVar6 = *puVar7;
    }
    uVar5 = uVar6 | bVar3 - 3 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_104140ddc:
  if (uVar5 == 2) {
    uVar2 = *(undefined8 *)(puVar7 + 2);
    uVar12 = *(undefined8 *)puVar7;
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar7 + 2);
    *(undefined8 *)puVar9 = uVar12;
    bVar3 = 2;
  }
  else {
    if (uVar5 != 1) {
      (**(code **)(lVar8 + 0x10))(puVar9,puVar7,lVar1);
      *(byte *)((long)puVar9 + uVar4) = 0;
      goto LAB_104140e34;
    }
    uVar2 = *(undefined8 *)(puVar7 + 2);
    uVar12 = *(undefined8 *)puVar7;
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar7 + 2);
    *(undefined8 *)puVar9 = uVar12;
    bVar3 = 1;
  }
  *(byte *)((long)puVar9 + uVar4) = bVar3;
  _swift_retain(uVar2);
LAB_104140e34:
  *(undefined8 *)((ulong)((long)puVar9 + uVar4 + 8) & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)((long)puVar7 + uVar4 + 8) & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 104140e74; end: 104140ff3;  */

long FUN_104140e74(long param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar10 + -8);
  (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar10);
  lVar11 = *(long *)(lVar11 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar10,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar10 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar10 + 0x50) & 0xf8 | 7;
  lVar11 = lVar11 + uVar4;
  puVar7 = (undefined8 *)(lVar11 + param_1 & (uVar4 ^ 0xffffffffffffffff));
  puVar8 = (uint *)(lVar11 + param_2 & (uVar4 ^ 0xffffffffffffffff));
  uVar4 = *(ulong *)(lVar10 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)puVar8 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar9 = (uint)uVar4;
    uVar6 = 4;
    if (uVar9 < 4) {
      uVar6 = uVar9;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104140f78;
      uVar6 = (uint)(byte)*puVar8;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*puVar8;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*puVar8;
    }
    else {
      uVar6 = *puVar8;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_104140f78:
  if (uVar5 == 2) {
    uVar12 = *(undefined8 *)puVar8;
    puVar7[1] = *(undefined8 *)(puVar8 + 2);
    *puVar7 = uVar12;
    uVar3 = 2;
  }
  else if (uVar5 == 1) {
    uVar12 = *(undefined8 *)puVar8;
    puVar7[1] = *(undefined8 *)(puVar8 + 2);
    *puVar7 = uVar12;
    uVar3 = 1;
  }
  else {
    (**(code **)(lVar10 + 0x20))(puVar7,puVar8,lVar2);
    uVar3 = 0;
  }
  *(undefined1 *)((long)puVar7 + uVar4) = uVar3;
  *(undefined8 *)(uVar4 + 8 + (long)puVar7 & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar4 + 8 + (long)puVar8) & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 104140ff4; end: 10414122f;  */

long FUN_104140ff4(long param_1,long param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  (**(code **)(lVar9 + 0x28))(param_1,param_2,lVar7);
  lVar9 = *(long *)(lVar9 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar7,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(uint *)(lVar7 + 0x50) & 0xf8 | 7;
  lVar9 = lVar9 + uVar3;
  puVar8 = (uint *)(lVar9 + param_1 & (uVar3 ^ 0xffffffffffffffff));
  puVar6 = (uint *)(lVar9 + param_2 & (uVar3 ^ 0xffffffffffffffff));
  uVar3 = *(ulong *)(lVar7 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  if (puVar8 == puVar6) goto LAB_1041411f0;
  bVar2 = *(byte *)((long)puVar8 + uVar3);
  uVar4 = (uint)bVar2;
  uVar10 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104141104;
      uVar5 = (uint)(byte)*puVar8;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar8;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar8;
    }
    else {
      uVar5 = *puVar8;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_104141104:
  if ((uVar4 == 2) || (uVar4 == 1)) {
    _swift_release(*(undefined8 *)(puVar8 + 2));
  }
  else {
    (**(code **)(lVar7 + 8))(puVar8,lVar1);
  }
  bVar2 = *(byte *)((long)puVar6 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1041411a4;
      uVar5 = (uint)(byte)*puVar6;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar6;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar6;
    }
    else {
      uVar5 = *puVar6;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1041411a4:
  if (uVar4 == 2) {
    uVar11 = *(undefined8 *)puVar6;
    *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)puVar8 = uVar11;
    bVar2 = 2;
  }
  else if (uVar4 == 1) {
    uVar11 = *(undefined8 *)puVar6;
    *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)puVar8 = uVar11;
    bVar2 = 1;
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar8,puVar6,lVar1);
    bVar2 = 0;
  }
  *(byte *)((long)puVar8 + uVar3) = bVar2;
LAB_1041411f0:
  *(undefined8 *)((ulong)((long)puVar8 + uVar3 + 8) & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)((long)puVar6 + uVar3 + 8) & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 104141230; end: 1041413af;  */

int * FUN_104141230(int *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar5 + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar5,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  uVar10 = *(ulong *)(*(long *)(lVar8 + -8) + 0x40);
  if (uVar10 < 0x11) {
    uVar10 = 0x10;
  }
  uVar9 = uVar6;
  if (uVar6 < 0xfe) {
    uVar9 = 0xfd;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  uVar11 = (ulong)*(uint *)(*(long *)(lVar8 + -8) + 0x50) & 0xf8 | 7;
  uVar2 = *(long *)(lVar13 + 0x40) + uVar11;
  if (uVar9 <= param_2 && param_2 - uVar9 != 0) {
    uVar1 = (uVar10 + (uVar2 & (uVar11 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8) + 8;
    uVar12 = 2;
    uVar4 = uVar12;
    if ((uVar1 & 0xfffffff8) == 0) {
      uVar4 = (param_2 - uVar9) + 1;
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
      goto LAB_104141320;
    }
    else if (uVar3 == 2) {
      uVar12 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_104141320:
        iVar7 = uVar12 - 1;
        if ((uVar1 & 0xfffffff8) != 0) {
          iVar7 = *param_1;
        }
        return (int *)(ulong)(uVar9 + iVar7 + 1);
      }
    }
    else {
      uVar12 = *(uint *)((long)param_1 + uVar1);
      if (uVar12 != 0) goto LAB_104141320;
    }
  }
  if (uVar6 < 0xfd) {
    uVar9 = (uint)*(byte *)((uVar2 + (long)param_1 & ~uVar11) + uVar10);
    uVar6 = 0;
    if (2 < uVar9) {
      uVar6 = (uVar9 ^ 0xff) + 1;
    }
    return (int *)(ulong)uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000104141368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar13 + 0x30))(param_1,uVar6,lVar5);
  return param_1;
}



/* Entry: 1041413b0; end: 1041415eb;  */

void FUN_1041413b0(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  
  lVar3 = *(long *)(param_4 + 0x10);
  lVar14 = *(long *)(lVar3 + -8);
  uVar4 = *(uint *)(lVar14 + 0x54);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),lVar3,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  uVar6 = *(ulong *)(*(long *)(lVar5 + -8) + 0x40);
  if (uVar6 < 0x11) {
    uVar6 = 0x10;
  }
  uVar7 = uVar4;
  if (uVar4 < 0xfe) {
    uVar7 = 0xfd;
  }
  uVar8 = (ulong)*(uint *)(*(long *)(lVar5 + -8) + 0x50) & 0xf8 | 7;
  uVar1 = *(long *)(lVar14 + 0x40) + uVar8;
  lVar5 = (uVar6 + (uVar1 & (uVar8 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8) + 8;
  uVar12 = (uint)param_2;
  if (param_3 < uVar7 || param_3 - uVar7 == 0) {
    uVar13 = 0;
    iVar9 = uVar12 - uVar7;
    if (uVar7 <= uVar12 && iVar9 != 0) goto LAB_1041414a0;
  }
  else {
    uVar10 = 2;
    uVar2 = uVar10;
    if ((int)lVar5 == 0) {
      uVar2 = (param_3 - uVar7) + 1;
    }
    if (0xffff < uVar2) {
      uVar10 = 4;
    }
    if (uVar2 < 0x100) {
      uVar10 = 1;
    }
    uVar13 = 0;
    if (1 < uVar2) {
      uVar13 = uVar10;
    }
    iVar9 = uVar12 - uVar7;
    if (uVar7 <= uVar12 && iVar9 != 0) {
LAB_1041414a0:
      if ((int)lVar5 != 0) {
        iVar9 = 1;
        _bzero(param_1,lVar5);
        *param_1 = uVar12 + ~uVar7;
      }
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          return;
        }
        *(char *)((long)param_1 + lVar5) = (char)iVar9;
        return;
      }
      if (uVar13 == 2) {
        *(short *)((long)param_1 + lVar5) = (short)iVar9;
        return;
      }
      *(int *)((long)param_1 + lVar5) = iVar9;
      return;
    }
  }
  if (uVar13 < 2) {
    if (uVar13 != 0) {
      *(undefined1 *)((long)param_1 + lVar5) = 0;
    }
  }
  else if (uVar13 == 2) {
    *(undefined2 *)((long)param_1 + lVar5) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + lVar5) = 0;
  }
  if (uVar12 != 0) {
    if (0xfc < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000104141518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar14 + 0x38))(param_1,param_2,uVar4,lVar3);
      return;
    }
    puVar11 = (uint *)(uVar1 + (long)param_1 & ~uVar8);
    if (uVar12 < 0xfe) {
      *(char *)((long)puVar11 + uVar6) = -(char)param_2;
    }
    else {
      uVar4 = (int)uVar6 + 1;
      uVar7 = 0xffffffff;
      if (uVar4 < 4) {
        uVar7 = ~(-1 << (ulong)(uVar4 * 8 & 0x1f));
      }
      if (uVar4 != 0) {
        uVar7 = uVar7 & uVar12 - 0xfe;
        uVar12 = 4;
        if (uVar4 < 4) {
          uVar12 = uVar4;
        }
        _bzero(puVar11);
        if ((int)uVar12 < 3) {
          if (uVar12 == 1) {
            *(char *)puVar11 = (char)uVar7;
          }
          else {
            *(short *)puVar11 = (short)uVar7;
          }
        }
        else if (uVar12 == 3) {
          *(short *)puVar11 = (short)uVar7;
          *(char *)((long)puVar11 + 2) = (char)(uVar7 >> 0x10);
        }
        else {
          *puVar11 = uVar7;
        }
      }
    }
  }
  return;
}



/* Entry: 1041415ec; end: 104141673;  */

void FUN_1041415ec(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_28 = puStack_30;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&lStack_38);
  }
  return;
}



/* Entry: 104141674; end: 104141777;  */

long * FUN_104141674(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar3 = *(long *)(lVar1 + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && uVar5 + 1 < 0x19) {
    uVar4 = (uint)*(byte *)((long)param_2 + uVar5);
    if (2 < *(byte *)((long)param_2 + uVar5)) {
      uVar4 = (int)*param_2 + 3;
    }
    if (uVar4 == 2) {
      lVar1 = param_2[1];
      lVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar3;
      uVar2 = 2;
    }
    else {
      if (uVar4 != 1) {
        (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar1);
        *(undefined1 *)((long)param_1 + uVar5) = 0;
        return param_1;
      }
      lVar1 = param_2[1];
      lVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar3;
      uVar2 = 1;
    }
    *(undefined1 *)((long)param_1 + uVar5) = uVar2;
  }
  else {
    uVar4 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)(uVar4 + 0x17 & (uVar4 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain(lVar1);
  return param_1;
}



/* Entry: 104141778; end: 104141867;  */

void FUN_104141778(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104141834;
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
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_104141834:
  if ((uVar5 != 2) && (uVar5 != 1)) {
                    /* WARNING: Could not recover jumptable at 0x000104141864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 2));
  return;
}



/* Entry: 104141868; end: 10414198f;  */

undefined8 * FUN_104141868(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar5 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  bVar1 = *(byte *)((long)param_2 + uVar5);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar8 = (uint)uVar5;
    uVar7 = 4;
    if (uVar8 < 4) {
      uVar7 = uVar8;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_104141928;
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
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_104141928:
  if (uVar6 == 2) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
    uVar4 = 2;
  }
  else {
    if (uVar6 != 1) {
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
      *(undefined1 *)((long)param_1 + uVar5) = 0;
      return param_1;
    }
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
    uVar4 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar5) = uVar4;
  _swift_retain(uVar3);
  return param_1;
}



/* Entry: 104141990; end: 104141b6b;  */

uint * FUN_104141990(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar8 = *(long *)(lVar1 + -8);
  uVar4 = *(ulong *)(lVar8 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar3 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar3;
  uVar7 = (uint)uVar4;
  if (2 < bVar3) {
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104141a5c;
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
    uVar5 = uVar6 | bVar3 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_104141a5c:
  if ((uVar5 == 2) || (uVar5 == 1)) {
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  else {
    (**(code **)(lVar8 + 8))(param_1,lVar1);
  }
  bVar3 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar3;
  if (2 < bVar3) {
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104141afc;
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
    uVar5 = uVar6 | bVar3 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_104141afc:
  if (uVar5 == 2) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar9;
    bVar3 = 2;
  }
  else {
    if (uVar5 != 1) {
      (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar1);
      *(byte *)((long)param_1 + uVar4) = 0;
      return param_1;
    }
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar9;
    bVar3 = 1;
  }
  *(byte *)((long)param_1 + uVar4) = bVar3;
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 104141b6c; end: 104141c87;  */

undefined8 * FUN_104141b6c(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
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
      if (uVar6 == 0) goto LAB_104141c2c;
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
LAB_104141c2c:
  if (uVar5 == 2) {
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    uVar3 = 2;
  }
  else if (uVar5 == 1) {
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    uVar3 = 1;
  }
  else {
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar3 = 0;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar3;
  return param_1;
}



/* Entry: 104141c88; end: 104141e57;  */

uint * FUN_104141c88(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = *(ulong *)(lVar7 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar2;
  uVar6 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104141d54;
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
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_104141d54:
  if ((uVar4 == 2) || (uVar4 == 1)) {
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar1);
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104141df4;
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
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_104141df4:
  if (uVar4 == 2) {
    uVar8 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar8;
    bVar2 = 2;
  }
  else if (uVar4 == 1) {
    uVar8 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar8;
    bVar2 = 1;
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar1);
    bVar2 = 0;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  return param_1;
}



/* Entry: 104141e58; end: 104141f8f;  */

int FUN_104141e58(uint *param_1,uint param_2,long param_3)

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
  if (uVar6 < 0x11) {
    uVar6 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_104141f2c;
  uVar7 = uVar6 + 1;
  uVar5 = (uint)uVar7;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfd >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_104141f2c;
      goto LAB_104141eb8;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_104141eb8:
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
    return ((uint)uVar7 | uVar1) + 0xfe;
  }
LAB_104141f2c:
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar6)) {
    iVar3 = (*(byte *)((long)param_1 + uVar6) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Entry: 104141f90; end: 104142153;  */

void FUN_104141f90(uint *param_1,uint param_2,uint param_3,long param_4)

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
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  lVar3 = uVar4 + 1;
  uVar5 = (uint)lVar3;
  if (param_3 < 0xfe) {
    bVar7 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar5 << 3 & 0x1f)) +
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
  if (param_2 < 0xfe) {
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
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
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



/* Entry: 104142154; end: 104142217;  */

uint FUN_104142154(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar6 = 4;
    if (uVar4 < 4) {
      uVar6 = uVar4;
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
    uVar2 = uVar6 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Entry: 104142218; end: 10414221b;  */

void FUN_104142218(void)

{
  return;
}



/* Entry: 10414221c; end: 1041423e3;  */

void FUN_10414221c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar5 = (uint)uVar4;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x03';
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar4);
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
      *(undefined1 *)((long)param_1 + uVar4) = 3;
      _bzero(param_1,uVar4);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 1041423e4; end: 104142767;  */

long * FUN_1041423e4(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  
  puVar4 = PTR___sSciTL_11034fea8;
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  uVar20 = *(undefined8 *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar20,uVar7,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar14 = *(long *)(lVar5 + -8);
  lVar19 = *(long *)(lVar14 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness(0,uVar20,uVar7,puVar4,PTR___s7ElementSciTl_11034fb58);
  lVar18 = *(long *)(lVar6 + -8);
  uVar12 = (ulong)*(uint *)(lVar18 + 0x50) & 0xf8 | 7;
  uVar13 = *(ulong *)(lVar18 + 0x40);
  uVar1 = uVar13;
  if (uVar13 < 0x11) {
    uVar1 = 0x10;
  }
  if (*(int *)(lVar18 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  uVar2 = uVar13;
  if (uVar13 < 9) {
    uVar2 = 8;
  }
  uVar10 = *(uint *)(lVar18 + 0x50) | *(uint *)(lVar14 + 0x50);
  if ((uVar10 & 0x1000f8) != 0 ||
      ((-9 - uVar12) -
       (uVar1 + (lVar19 + uVar12 & (uVar12 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8) | uVar12
      ) - (uVar2 + 1) < 0xffffffffffffffe7) {
    uVar13 = (ulong)(uVar10 & 0xf8 | 7);
    lVar5 = *param_2;
    *param_1 = lVar5;
    _swift_retain();
    return (long *)(lVar5 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
  }
  (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar5);
  puVar16 = (undefined8 *)((long)param_1 + lVar19 + 7 & 0xfffffffffffffff8);
  puVar17 = (uint *)((long)param_2 + lVar19 + 7 & 0xfffffffffffffff8);
  bVar3 = *(byte *)((long)puVar17 + uVar1);
  uVar10 = (uint)bVar3;
  if (2 < bVar3) {
    uVar15 = (uint)uVar1;
    uVar11 = 4;
    if (uVar15 < 4) {
      uVar11 = uVar15;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1041425a4;
      uVar11 = (uint)(byte)*puVar17;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar17;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar17;
    }
    else {
      uVar11 = *puVar17;
    }
    uVar10 = uVar11 | bVar3 - 3 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 3;
  }
LAB_1041425a4:
  if (uVar10 == 2) {
    uVar7 = *(undefined8 *)(puVar17 + 2);
    uVar20 = *(undefined8 *)puVar17;
    puVar16[1] = *(undefined8 *)(puVar17 + 2);
    *puVar16 = uVar20;
    uVar9 = 2;
LAB_1041425dc:
    *(undefined1 *)((long)puVar16 + uVar1) = uVar9;
    _swift_retain(uVar7);
  }
  else {
    if (uVar10 == 1) {
      uVar7 = *(undefined8 *)(puVar17 + 2);
      uVar20 = *(undefined8 *)puVar17;
      puVar16[1] = *(undefined8 *)(puVar17 + 2);
      *puVar16 = uVar20;
      uVar9 = 1;
      goto LAB_1041425dc;
    }
    (**(code **)(lVar18 + 0x10))(puVar16,puVar17,lVar6);
    *(undefined1 *)((long)puVar16 + uVar1) = 0;
  }
  *(undefined8 *)((long)puVar16 + uVar1 + 8 & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)((long)puVar17 + uVar1 + 8) & 0xffffffffffffff8);
  puVar17 = (uint *)((ulong)((long)puVar17 + uVar1 + 0x10) & 0xfffffffffffffff8);
  bVar3 = *(byte *)((long)puVar17 + uVar2);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar15 = (uint)uVar2;
    uVar11 = 4;
    if (uVar15 < 4) {
      uVar11 = uVar15;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1041426a0;
      uVar11 = (uint)(byte)*puVar17;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar17;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar17;
    }
    else {
      uVar11 = *puVar17;
    }
    uVar10 = uVar11 | bVar3 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1041426a0:
  puVar16 = (undefined8 *)((long)puVar16 + uVar1 + 0x10 & 0xfffffffffffffff8);
  if (uVar10 == 1) {
    *puVar16 = *(undefined8 *)puVar17;
    *(undefined1 *)((long)puVar16 + uVar2) = 1;
  }
  else if (uVar10 == 0) {
    puVar8 = puVar17;
    (**(code **)(lVar18 + 0x30))(puVar17,1,lVar6);
    if ((int)puVar8 == 0) {
      (**(code **)(lVar18 + 0x10))(puVar16,puVar17,lVar6);
      (**(code **)(lVar18 + 0x38))(puVar16,0,1,lVar6);
    }
    else {
      _memcpy(puVar16,puVar17,uVar13);
    }
    *(undefined1 *)((long)puVar16 + uVar2) = 0;
  }
  else {
    _memcpy(puVar16,puVar17,uVar2 + 1);
  }
  return param_1;
}



/* Entry: 104142768; end: 1041429af;  */

void FUN_104142768(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  puVar5 = PTR___sSciTL_11034fea8;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar14 = *(long *)(lVar6 + -8);
  (**(code **)(lVar14 + 8))(param_1,lVar6);
  lVar14 = *(long *)(lVar14 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar2,puVar5,PTR___s7ElementSciTl_11034fb58);
  lVar12 = *(long *)(lVar6 + -8);
  uVar15 = (ulong)*(uint *)(lVar12 + 0x50) & 0xf8 | 7;
  puVar11 = (uint *)(lVar14 + param_1 + uVar15 & (uVar15 ^ 0xffffffffffffffff));
  uVar13 = *(ulong *)(lVar12 + 0x40);
  uVar1 = uVar13;
  if (uVar13 < 0x11) {
    uVar1 = 0x10;
  }
  bVar4 = *(byte *)((long)puVar11 + uVar1);
  uVar8 = (uint)bVar4;
  if (2 < bVar4) {
    uVar10 = (uint)uVar1;
    uVar9 = 4;
    if (uVar10 < 4) {
      uVar9 = uVar10;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_104142884;
      uVar9 = (uint)(byte)*puVar11;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar11;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar11;
    }
    else {
      uVar9 = *puVar11;
    }
    uVar8 = uVar9 | bVar4 - 3 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_104142884:
  if ((uVar8 == 2) || (uVar8 == 1)) {
    _swift_release(*(undefined8 *)(puVar11 + 2));
  }
  else {
    (**(code **)(lVar12 + 8))(puVar11,lVar6);
  }
  puVar11 = (uint *)(uVar15 + ((ulong)((long)puVar11 + uVar1 + 8) & 0xfffffffffffffff8) + 8 &
                    ~uVar15);
  if (*(int *)(lVar12 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  if (uVar13 < 9) {
    uVar13 = 8;
  }
  bVar4 = *(byte *)((long)puVar11 + uVar13);
  uVar8 = (uint)bVar4;
  if (1 < bVar4) {
    uVar9 = (uint)uVar13;
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) {
        return;
      }
      uVar10 = (uint)(byte)*puVar11;
    }
    else if (uVar8 == 2) {
      uVar10 = (uint)(ushort)*puVar11;
    }
    else if (uVar8 == 3) {
      uVar10 = (uint)(uint3)*puVar11;
    }
    else {
      uVar10 = *puVar11;
    }
    uVar8 = uVar10 | bVar4 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar8 = uVar10;
    }
    uVar8 = uVar8 + 2;
  }
  if ((uVar8 == 0) &&
     (puVar7 = puVar11, (**(code **)(lVar12 + 0x30))(puVar11,1,lVar6), (int)puVar7 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001041429ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 8))(puVar11,lVar6);
    return;
  }
  return;
}



/* Entry: 1041429b0; end: 10414381f;  */

long FUN_1041429b0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  puVar3 = PTR___sSciTL_11034fea8;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar18 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,uVar5,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar14 = *(long *)(lVar4 + -8);
  (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar4);
  lVar4 = *(long *)(lVar14 + 0x40);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,uVar18,uVar5,puVar3,PTR___s7ElementSciTl_11034fb58);
  lVar15 = *(long *)(lVar14 + -8);
  uVar17 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8 | 7;
  lVar4 = lVar4 + uVar17;
  puVar11 = (undefined8 *)(lVar4 + param_1 & (uVar17 ^ 0xffffffffffffffff));
  puVar12 = (uint *)(lVar4 + param_2 & (uVar17 ^ 0xffffffffffffffff));
  uVar13 = *(ulong *)(lVar15 + 0x40);
  uVar1 = uVar13;
  if (uVar13 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)puVar12 + uVar1);
  uVar8 = (uint)bVar2;
  if (2 < bVar2) {
    uVar16 = (uint)uVar1;
    uVar9 = 4;
    if (uVar16 < 4) {
      uVar9 = uVar16;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_104142ae0;
      uVar9 = (uint)(byte)*puVar12;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar12;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar12;
    }
    else {
      uVar9 = *puVar12;
    }
    uVar8 = uVar9 | bVar2 - 3 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_104142ae0:
  if (uVar8 == 2) {
    uVar5 = *(undefined8 *)(puVar12 + 2);
    uVar18 = *(undefined8 *)puVar12;
    puVar11[1] = *(undefined8 *)(puVar12 + 2);
    *puVar11 = uVar18;
    uVar7 = 2;
LAB_104142b18:
    *(undefined1 *)((long)puVar11 + uVar1) = uVar7;
    _swift_retain(uVar5);
  }
  else {
    if (uVar8 == 1) {
      uVar5 = *(undefined8 *)(puVar12 + 2);
      uVar18 = *(undefined8 *)puVar12;
      puVar11[1] = *(undefined8 *)(puVar12 + 2);
      *puVar11 = uVar18;
      uVar7 = 1;
      goto LAB_104142b18;
    }
    (**(code **)(lVar15 + 0x10))(puVar11,puVar12,lVar14);
    *(undefined1 *)((long)puVar11 + uVar1) = 0;
  }
  puVar10 = (undefined8 *)(uVar1 + 8 + (long)puVar11 & 0xfffffffffffffff8);
  puVar11 = (undefined8 *)((ulong)(uVar1 + 8 + (long)puVar12) & 0xfffffffffffffff8);
  *puVar10 = *puVar11;
  puVar10 = (undefined8 *)(uVar17 + 8 + (long)puVar10 & ~uVar17);
  puVar12 = (uint *)(uVar17 + 8 + (long)puVar11 & ~uVar17);
  if (*(int *)(lVar15 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  uVar1 = uVar13;
  if (uVar13 < 9) {
    uVar1 = 8;
  }
  bVar2 = *(byte *)((long)puVar12 + uVar1);
  uVar8 = (uint)bVar2;
  if (1 < bVar2) {
    uVar16 = (uint)uVar1;
    uVar9 = 4;
    if (uVar16 < 4) {
      uVar9 = uVar16;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_104142bf8;
      uVar9 = (uint)(byte)*puVar12;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar12;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar12;
    }
    else {
      uVar9 = *puVar12;
    }
    uVar8 = uVar9 | bVar2 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_104142bf8:
  if (uVar8 == 1) {
    *puVar10 = *(undefined8 *)puVar12;
    *(undefined1 *)((long)puVar10 + uVar1) = 1;
  }
  else if (uVar8 == 0) {
    puVar6 = puVar12;
    (**(code **)(lVar15 + 0x30))(puVar12,1,lVar14);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar15 + 0x10))(puVar10,puVar12,lVar14);
      (**(code **)(lVar15 + 0x38))(puVar10,0,1,lVar14);
    }
    else {
      _memcpy(puVar10,puVar12,uVar13);
    }
    *(undefined1 *)((long)puVar10 + uVar1) = 0;
  }
  else {
    _memcpy(puVar10,puVar12,uVar1 + 1);
  }
  return param_1;
}



/* Entry: 104143820; end: 104143a5f;  */

uint * FUN_104143820(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  
  puVar7 = PTR___sSciTL_11034fea8;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar15 = *(long *)(lVar8 + -8);
  uVar6 = *(uint *)(lVar15 + 0x54);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness(0,uVar5,uVar4,puVar7,PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar9 + -8);
  uVar10 = *(ulong *)(lVar9 + 0x40);
  uVar3 = uVar10;
  if (uVar10 < 0x11) {
    uVar3 = 0x10;
  }
  if (*(int *)(lVar9 + 0x54) == 0) {
    uVar10 = uVar10 + 1;
  }
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  uVar11 = 0xfd;
  if ((uint)uVar10 < 4) {
    uVar11 = 1U >> (ulong)(((uint)uVar10 & 3) << 3) ^ 0xfd;
  }
  uVar2 = uVar6;
  if (uVar6 <= uVar11) {
    uVar2 = uVar11;
  }
  if (uVar2 < 0xfe) {
    uVar2 = 0xfd;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar12 = (ulong)*(uint *)(lVar9 + 0x50) & 0xf8 | 7;
  uVar1 = *(long *)(lVar15 + 0x40) + uVar12;
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_1041439a8;
  lVar9 = uVar10 + (uVar12 + (uVar3 + (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + 8 &
                             0xfffffffffffffff8) + 8 & (uVar12 ^ 0xffffffffffffffff)) + 1;
  uVar13 = (uint)lVar9;
  uVar11 = uVar13 << 3;
  if (uVar13 < 4) {
    uVar14 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar11 & 0x1f)) >> (ulong)(uVar11 & 0x1f)) + 1;
    if (uVar14 < 0x100) {
      if (uVar14 < 2) goto LAB_1041439a8;
      goto LAB_104143938;
    }
    if (uVar14 >> 0x10 == 0) {
      uVar14 = (uint)*(ushort *)((long)param_1 + lVar9);
    }
    else {
      uVar14 = *(uint *)((long)param_1 + lVar9);
    }
  }
  else {
LAB_104143938:
    uVar14 = (uint)*(byte *)((long)param_1 + lVar9);
  }
  if (uVar14 != 0) {
    uVar6 = 0;
    if (uVar13 < 4) {
      uVar6 = uVar14 - 1 << (ulong)(uVar11 & 0x1f);
    }
    if (uVar13 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 4;
      if (uVar13 < 4) {
        uVar11 = uVar13;
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
    return (uint *)(ulong)(uVar2 + (uVar11 | uVar6) + 1);
  }
LAB_1041439a8:
  if (uVar6 != uVar2) {
    uVar11 = (uint)*(byte *)(((ulong)(uVar1 + (long)param_1) & ~uVar12) + uVar3);
    uVar6 = 0;
    if (2 < uVar11) {
      uVar6 = (uVar11 ^ 0xff) + 1;
    }
    return (uint *)(ulong)uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001041439d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar15 + 0x30))(param_1,uVar6,lVar8);
  return param_1;
}



/* Entry: 104143a60; end: 104143d9f;  */

void FUN_104143a60(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  byte bVar17;
  long lVar18;
  
  puVar8 = PTR___sSciTL_11034fea8;
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  uVar5 = *(undefined8 *)(param_4 + 0x18);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar18 = *(long *)(lVar9 + -8);
  uVar6 = *(uint *)(lVar18 + 0x54);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar5,uVar4,puVar8,PTR___s7ElementSciTl_11034fb58);
  lVar10 = *(long *)(lVar10 + -8);
  uVar12 = *(ulong *)(lVar10 + 0x40);
  uVar3 = uVar12;
  if (uVar12 < 0x11) {
    uVar3 = 0x10;
  }
  if (*(int *)(lVar10 + 0x54) == 0) {
    uVar12 = uVar12 + 1;
  }
  if (uVar12 < 9) {
    uVar12 = 8;
  }
  uVar11 = 0xfd;
  if ((uint)uVar12 < 4) {
    uVar11 = 1U >> (ulong)(((uint)uVar12 & 3) << 3) ^ 0xfd;
  }
  uVar2 = uVar6;
  if (uVar6 <= uVar11) {
    uVar2 = uVar11;
  }
  if (uVar2 < 0xfe) {
    uVar2 = 0xfd;
  }
  uVar13 = (ulong)*(uint *)(lVar10 + 0x50) & 0xf8 | 7;
  uVar1 = *(long *)(lVar18 + 0x40) + uVar13;
  lVar10 = uVar12 + (uVar13 + (uVar3 + (uVar1 & (uVar13 ^ 0xffffffffffffffff)) + 8 &
                              0xfffffffffffffff8) + 8 & (uVar13 ^ 0xffffffffffffffff)) + 1;
  uVar11 = (uint)lVar10;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar17 = 0;
  }
  else if (uVar11 < 4) {
    uVar15 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar11 << 3 & 0x1f)) >>
             (ulong)(uVar11 << 3 & 0x1f)) + 1;
    bVar17 = 2;
    if (0xffff < uVar15) {
      bVar17 = 4;
    }
    if (uVar15 < 0x100) {
      bVar17 = 1 < uVar15;
    }
  }
  else {
    bVar17 = 1;
  }
  uVar15 = (uint)param_2;
  if (uVar2 < uVar15) {
    uVar15 = uVar15 + ~uVar2;
    if (uVar11 < 4) {
      iVar16 = (uVar15 >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
      if (uVar11 != 0) {
        uVar6 = uVar15 & (-1 << (ulong)(uVar11 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar10);
        uVar7 = (undefined2)uVar6;
        if (uVar11 == 3) {
          *(undefined2 *)param_1 = uVar7;
          *(char *)((long)param_1 + 2) = (char)(uVar6 >> 0x10);
        }
        else if (uVar11 == 2) {
          *(undefined2 *)param_1 = uVar7;
        }
        else {
          *(char *)param_1 = (char)uVar15;
        }
      }
    }
    else {
      _bzero(param_1,lVar10);
      *param_1 = uVar15;
      iVar16 = 1;
    }
    if (bVar17 < 2) {
      if (bVar17 != 0) {
        *(char *)((long)param_1 + lVar10) = (char)iVar16;
      }
    }
    else if (bVar17 == 2) {
      *(short *)((long)param_1 + lVar10) = (short)iVar16;
    }
    else {
      *(int *)((long)param_1 + lVar10) = iVar16;
    }
  }
  else {
    if (bVar17 < 2) {
      if (bVar17 != 0) {
        *(undefined1 *)((long)param_1 + lVar10) = 0;
      }
    }
    else if (bVar17 == 2) {
      *(undefined2 *)((long)param_1 + lVar10) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar10) = 0;
    }
    if (uVar15 != 0) {
      if (uVar6 == uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000104143c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar18 + 0x38))(param_1,param_2,uVar6,lVar9);
        return;
      }
      puVar14 = (uint *)(uVar1 + (long)param_1 & ~uVar13);
      if (uVar15 < 0xfe) {
        *(char *)((long)puVar14 + uVar3) = -(char)param_2;
      }
      else {
        uVar6 = (int)uVar3 + 1;
        uVar11 = 0xffffffff;
        if (uVar6 < 4) {
          uVar11 = ~(-1 << (ulong)(uVar6 * 8 & 0x1f));
        }
        if (uVar6 != 0) {
          uVar11 = uVar11 & uVar15 - 0xfe;
          uVar2 = 4;
          if (uVar6 < 4) {
            uVar2 = uVar6;
          }
          _bzero(puVar14);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar14 = (char)uVar11;
            }
            else {
              *(short *)puVar14 = (short)uVar11;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar14 = (short)uVar11;
            *(char *)((long)puVar14 + 2) = (char)(uVar11 >> 0x10);
          }
          else {
            *puVar14 = uVar11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 104143da0; end: 104143da3;  */

void FUN_104143da0(void)

{
  return;
}



/* Entry: 104143da4; end: 104143e27;  */

void FUN_104143da4(long param_1)

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
    puStack_30 = &UNK_10dcd8d78;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0,3,&lStack_38,param_1 + 0x20);
  }
  return;
}



/* Entry: 104143e28; end: 104143f13;  */

long * FUN_104143e28(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar7 = *(long *)(lVar5 + 0x40);
  if ((*(uint *)(lVar5 + 0x50) & 0x1000f8) == 0 && (lVar7 + 0x1fU & 0xfffffffffffffff8) + 8 < 0x19)
  {
    (**(code **)(lVar5 + 0x10))(param_1);
    puVar8 = (undefined8 *)((long)param_1 + lVar7 + 7 & 0xfffffffffffffff8);
    puVar6 = (undefined8 *)((long)param_2 + lVar7 + 7 & 0xfffffffffffffff8);
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    uVar4 = *(undefined1 *)(puVar6 + 2);
    func_0x00010413ef78(uVar2,uVar3,uVar4);
    *puVar8 = uVar2;
    puVar8[1] = uVar3;
    *(undefined1 *)(puVar8 + 2) = uVar4;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1f & 0xffffffffffffff8) =
         *(undefined8 *)((long)param_2 + lVar7 + 0x1f & 0xffffffffffffff8);
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0x50) & 0xf8;
    lVar5 = *param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104143f14; end: 104143f57;  */

void FUN_104143f14(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  uVar2 = param_1 + *(long *)(lVar3 + 0x40) + 7U & 0xfffffffffffffff8;
  uVar1 = *(undefined8 *)(uVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1,uVar1,*(undefined1 *)(uVar2 + 0x10));
  return;
}



/* Entry: 104143f58; end: 1041440a3;  */

long FUN_104143f58(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x10))();
  lVar4 = *(long *)(lVar6 + 0x40);
  lVar6 = lVar4 + param_1;
  lVar4 = lVar4 + param_2;
  puVar7 = (undefined8 *)(lVar6 + 7U & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar4 + 7U & 0xfffffffffffffff8);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = *(undefined1 *)(puVar5 + 2);
  func_0x00010413ef78(uVar1,uVar2,uVar3);
  *puVar7 = uVar1;
  puVar7[1] = uVar2;
  *(undefined1 *)(puVar7 + 2) = uVar3;
  *(undefined8 *)(lVar6 + 0x1fU & 0xffffffffffffff8) =
       *(undefined8 *)(lVar4 + 0x1fU & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 1041440a4; end: 1041441af;  */

long FUN_1041440a4(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x20))();
  lVar2 = *(long *)(lVar5 + 0x40);
  lVar5 = lVar2 + param_1;
  lVar2 = lVar2 + param_2;
  puVar3 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar2 + 7U & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar4 + 2);
  uVar6 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar6;
  *(undefined1 *)(puVar3 + 2) = uVar1;
  *(undefined8 *)(lVar5 + 0x1fU & 0xffffffffffffff8) =
       *(undefined8 *)(lVar2 + 0x1fU & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 1041441b0; end: 10414429b;  */

uint * FUN_1041441b0(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = *(uint *)(lVar8 + 0x54);
  uVar3 = uVar7;
  if (uVar7 < 0xff) {
    uVar3 = 0xfe;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar1 = (*(long *)(lVar8 + 0x40) + 0x1fU & 0xfffffffffffffff8) + 8;
    uVar2 = uVar1 & 0xfffffff8;
    uVar6 = (uint)uVar2;
    uVar9 = 2;
    uVar5 = uVar9;
    if (uVar2 == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar9 = 4;
    }
    if (uVar5 < 0x100) {
      uVar9 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar9;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_104144240;
    }
    else if (uVar4 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_104144240:
        uVar9 = uVar9 - 1;
        if (uVar2 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar3 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar1);
      if (uVar9 != 0) goto LAB_104144240;
    }
  }
  if (0xfd < uVar7) {
                    /* WARNING: Could not recover jumptable at 0x000104144278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = (uint)*(byte *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xffffffffffffff8U) + 0x10)
  ;
  uVar3 = 0;
  if (1 < uVar7) {
    uVar3 = (uVar7 ^ 0xff) + 1;
  }
  return (uint *)(ulong)uVar3;
}



/* Entry: 10414429c; end: 1041443ff;  */

void FUN_10414429c(int *param_1,uint param_2,uint param_3,long param_4)

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
  if (uVar5 < 0xff) {
    uVar2 = 0xfe;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  lVar1 = (lVar9 + 0x1fU & 0xfffffffffffffff8) + 8;
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
      if (0xfd < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001041443a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))();
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if (param_2 < 0xff) {
        *(char *)(puVar7 + 2) = -(char)param_2;
      }
      else {
        *(undefined1 *)(puVar7 + 2) = 0;
        *puVar7 = (ulong)(param_2 - 0xff);
        puVar7[1] = 0;
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



/* Entry: 104144400; end: 104144417;  */

void FUN_104144400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104144418; end: 1041444b3;  */

undefined8 * FUN_104144418(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010413ef78(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1041444b4; end: 1041444f7;  */

undefined8 * FUN_1041444b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_104140380(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1041444f8; end: 1041445a3;  */

int FUN_1041444f8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1041445a4; end: 10414466b;  */

void FUN_1041445a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar1 = *(ulong *)(param_1 + 0x18);
  lVar2 = 0x13f;
  uVar3 = uVar1;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar1,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar3 < 0x40) {
    lStack_50 = *(long *)(lVar2 + -8) + 0x40;
    puStack_48 = &UNK_10dcd8d78;
    puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
    lVar2 = 0x13f;
    func_0x00010413ef80(0x13f,uVar4,uVar1);
    if (uVar4 < 0x40) {
      lStack_38 = *(long *)(lVar2 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,4,&lStack_50,param_1 + 0x20);
    }
  }
  return;
}



/* Entry: 10414466c; end: 104144923;  */

long * FUN_10414466c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  puVar6 = PTR___sSciTL_11034fea8;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar20 = *(long *)(lVar7 + -8);
  lVar18 = *(long *)(lVar20 + 0x40);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar2,puVar6,PTR___s7ElementSciTl_11034fb58);
  lVar19 = *(long *)(lVar8 + -8);
  uVar13 = (ulong)*(uint *)(lVar19 + 0x50) & 0xf8 | 7;
  uVar14 = *(ulong *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    uVar14 = uVar14 + 1;
  }
  uVar1 = uVar14;
  if (uVar14 < 9) {
    uVar1 = 8;
  }
  uVar11 = *(uint *)(lVar19 + 0x50) | *(uint *)(lVar20 + 0x50);
  if ((uVar11 & 0x1000f8) != 0 ||
      (-((lVar18 + 0x1fU & 0xfffffffffffffff8) + uVar13) - 9 | uVar13) - (uVar1 + 1) <
      0xffffffffffffffe7) {
    uVar14 = (ulong)(uVar11 & 0xf8 | 7);
    lVar7 = *param_2;
    *param_1 = lVar7;
    _swift_retain();
    return (long *)(lVar7 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
  }
  (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar7);
  puVar15 = (undefined8 *)((long)param_1 + lVar18 + 7 & 0xfffffffffffffff8);
  puVar10 = (undefined8 *)((long)param_2 + lVar18 + 7 & 0xfffffffffffffff8);
  uVar2 = *puVar10;
  uVar3 = puVar10[1];
  uVar4 = *(undefined1 *)(puVar10 + 2);
  func_0x00010413ef78(uVar2,uVar3,uVar4);
  *puVar15 = uVar2;
  puVar15[1] = uVar3;
  *(undefined1 *)(puVar15 + 2) = uVar4;
  *(undefined8 *)((long)param_1 + lVar18 + 0x1f & 0xffffffffffffff8) =
       *(undefined8 *)((long)param_2 + lVar18 + 0x1f & 0xffffffffffffff8);
  puVar17 = (uint *)((long)param_2 + lVar18 + 0x27 & 0xfffffffffffffff8);
  bVar5 = *(byte *)((long)puVar17 + uVar1);
  uVar11 = (uint)bVar5;
  if (1 < bVar5) {
    uVar16 = (uint)uVar1;
    uVar12 = 4;
    if (uVar16 < 4) {
      uVar12 = uVar16;
    }
    if ((int)uVar12 < 2) {
      if (uVar12 == 0) goto LAB_104144868;
      uVar12 = (uint)(byte)*puVar17;
    }
    else if (uVar12 == 2) {
      uVar12 = (uint)(ushort)*puVar17;
    }
    else if (uVar12 == 3) {
      uVar12 = (uint)(uint3)*puVar17;
    }
    else {
      uVar12 = *puVar17;
    }
    uVar11 = uVar12 | bVar5 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar11 = uVar12;
    }
    uVar11 = uVar11 + 2;
  }
LAB_104144868:
  puVar10 = (undefined8 *)((long)param_1 + lVar18 + 0x27 & 0xfffffffffffffff8);
  if (uVar11 == 1) {
    *puVar10 = *(undefined8 *)puVar17;
    *(undefined1 *)((long)puVar10 + uVar1) = 1;
  }
  else if (uVar11 == 0) {
    puVar9 = puVar17;
    (**(code **)(lVar19 + 0x30))(puVar17,1,lVar8);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar19 + 0x10))(puVar10,puVar17,lVar8);
      (**(code **)(lVar19 + 0x38))(puVar10,0,1,lVar8);
    }
    else {
      _memcpy(puVar10,puVar17,uVar14);
    }
    *(undefined1 *)((long)puVar10 + uVar1) = 0;
  }
  else {
    _memcpy(puVar10,puVar17,uVar1 + 1);
  }
  return param_1;
}



/* Entry: 104144924; end: 104144ab3;  */

void FUN_104144924(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  
  puVar4 = PTR___sSciTL_11034fea8;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar13 = *(long *)(lVar5 + -8);
  (**(code **)(lVar13 + 8))(param_1,lVar5);
  param_1 = *(long *)(lVar13 + 0x40) + param_1;
  puVar8 = (undefined8 *)(param_1 + 7U & 0xfffffffffffffff8);
  FUN_104140380(*puVar8,puVar8[1],*(undefined1 *)(puVar8 + 2));
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,puVar4,PTR___s7ElementSciTl_11034fb58);
  lVar13 = *(long *)(lVar5 + -8);
  uVar9 = (ulong)*(uint *)(lVar13 + 0x50) & 0xf8 | 7;
  puVar12 = (uint *)((param_1 + 0x1fU & 0xfffffffffffffff8) + uVar9 + 8 &
                    (uVar9 ^ 0xffffffffffffffff));
  uVar9 = *(ulong *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    uVar9 = uVar9 + 1;
  }
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  bVar3 = *(byte *)((long)puVar12 + uVar9);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar7 = (uint)uVar9;
    uVar10 = 4;
    if (uVar7 < 4) {
      uVar10 = uVar7;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) {
        return;
      }
      uVar11 = (uint)(byte)*puVar12;
    }
    else if (uVar10 == 2) {
      uVar11 = (uint)(ushort)*puVar12;
    }
    else if (uVar10 == 3) {
      uVar11 = (uint)(uint3)*puVar12;
    }
    else {
      uVar11 = *puVar12;
    }
    uVar10 = uVar11 | bVar3 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
  if ((uVar10 == 0) &&
     (puVar6 = puVar12, (**(code **)(lVar13 + 0x30))(puVar12,1,lVar5), (int)puVar6 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000104144ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 8))(puVar12,lVar5);
    return;
  }
  return;
}



/* Entry: 104144ab4; end: 104144fdf;  */

long FUN_104144ab4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined *puVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  
  puVar8 = PTR___sSciTL_11034fea8;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar2,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar17 = *(long *)(lVar9 + -8);
  (**(code **)(lVar17 + 0x10))(param_1,param_2,lVar9);
  lVar17 = *(long *)(lVar17 + 0x40);
  lVar9 = lVar17 + param_1;
  lVar17 = lVar17 + param_2;
  puVar19 = (undefined8 *)(lVar9 + 7U & 0xfffffffffffffff8);
  puVar11 = (undefined8 *)(lVar17 + 7U & 0xfffffffffffffff8);
  uVar3 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = *(undefined1 *)(puVar11 + 2);
  func_0x00010413ef78(uVar3,uVar5,uVar6);
  *puVar19 = uVar3;
  puVar19[1] = uVar5;
  *(undefined1 *)(puVar19 + 2) = uVar6;
  puVar11 = (undefined8 *)(lVar9 + 0x1fU & 0xfffffffffffffff8);
  puVar19 = (undefined8 *)(lVar17 + 0x1fU & 0xfffffffffffffff8);
  *puVar11 = *puVar19;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar2,puVar8,PTR___s7ElementSciTl_11034fb58);
  lVar18 = *(long *)(lVar17 + -8);
  uVar12 = (ulong)*(uint *)(lVar18 + 0x50) & 0xf8;
  lVar9 = uVar12 + 0xf;
  uVar12 = (uVar12 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar11 = (undefined8 *)(lVar9 + (long)puVar11 & uVar12);
  puVar15 = (uint *)(lVar9 + (long)puVar19 & uVar12);
  uVar12 = *(ulong *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    uVar12 = uVar12 + 1;
  }
  uVar1 = uVar12;
  if (uVar12 < 9) {
    uVar1 = 8;
  }
  bVar7 = *(byte *)((long)puVar15 + uVar1);
  uVar13 = (uint)bVar7;
  if (1 < bVar7) {
    uVar16 = (uint)uVar1;
    uVar14 = 4;
    if (uVar16 < 4) {
      uVar14 = uVar16;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto LAB_104144c40;
      uVar14 = (uint)(byte)*puVar15;
    }
    else if (uVar14 == 2) {
      uVar14 = (uint)(ushort)*puVar15;
    }
    else if (uVar14 == 3) {
      uVar14 = (uint)(uint3)*puVar15;
    }
    else {
      uVar14 = *puVar15;
    }
    uVar13 = uVar14 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar13 = uVar14;
    }
    uVar13 = uVar13 + 2;
  }
LAB_104144c40:
  if (uVar13 == 1) {
    *puVar11 = *(undefined8 *)puVar15;
    *(undefined1 *)((long)puVar11 + uVar1) = 1;
  }
  else if (uVar13 == 0) {
    puVar10 = puVar15;
    (**(code **)(lVar18 + 0x30))(puVar15,1,lVar17);
    if ((int)puVar10 == 0) {
      (**(code **)(lVar18 + 0x10))(puVar11,puVar15,lVar17);
      (**(code **)(lVar18 + 0x38))(puVar11,0,1,lVar17);
    }
    else {
      _memcpy(puVar11,puVar15,uVar12);
    }
    *(undefined1 *)((long)puVar11 + uVar1) = 0;
  }
  else {
    _memcpy(puVar11,puVar15,uVar1 + 1);
  }
  return param_1;
}



/* Entry: 104144fe0; end: 1041456ff;  */

long FUN_104144fe0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  
  puVar6 = PTR___sSciTL_11034fea8;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar16 = *(long *)(lVar7 + -8);
  (**(code **)(lVar16 + 0x20))(param_1,param_2,lVar7);
  lVar16 = *(long *)(lVar16 + 0x40);
  lVar7 = lVar16 + param_1;
  lVar16 = lVar16 + param_2;
  puVar12 = (undefined8 *)(lVar7 + 7U & 0xfffffffffffffff8);
  puVar13 = (undefined8 *)(lVar16 + 7U & 0xfffffffffffffff8);
  uVar4 = *(undefined1 *)(puVar13 + 2);
  uVar18 = *puVar13;
  puVar12[1] = puVar13[1];
  *puVar12 = uVar18;
  *(undefined1 *)(puVar12 + 2) = uVar4;
  puVar12 = (undefined8 *)(lVar7 + 0x1fU & 0xfffffffffffffff8);
  puVar13 = (undefined8 *)(lVar16 + 0x1fU & 0xfffffffffffffff8);
  *puVar12 = *puVar13;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar2,puVar6,PTR___s7ElementSciTl_11034fb58);
  lVar17 = *(long *)(lVar16 + -8);
  uVar9 = (ulong)*(uint *)(lVar17 + 0x50) & 0xf8;
  lVar7 = uVar9 + 0xf;
  uVar9 = (uVar9 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar12 = (undefined8 *)(lVar7 + (long)puVar12 & uVar9);
  puVar14 = (uint *)(lVar7 + (long)puVar13 & uVar9);
  uVar9 = *(ulong *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    uVar9 = uVar9 + 1;
  }
  uVar1 = uVar9;
  if (uVar9 < 9) {
    uVar1 = 8;
  }
  bVar5 = *(byte *)((long)puVar14 + uVar1);
  uVar10 = (uint)bVar5;
  if (1 < bVar5) {
    uVar15 = (uint)uVar1;
    uVar11 = 4;
    if (uVar15 < 4) {
      uVar11 = uVar15;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_104145158;
      uVar11 = (uint)(byte)*puVar14;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar14;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar14;
    }
    else {
      uVar11 = *puVar14;
    }
    uVar10 = uVar11 | bVar5 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_104145158:
  if (uVar10 == 1) {
    *puVar12 = *(undefined8 *)puVar14;
    *(undefined1 *)((long)puVar12 + uVar1) = 1;
  }
  else if (uVar10 == 0) {
    puVar8 = puVar14;
    (**(code **)(lVar17 + 0x30))(puVar14,1,lVar16);
    if ((int)puVar8 == 0) {
      (**(code **)(lVar17 + 0x20))(puVar12,puVar14,lVar16);
      (**(code **)(lVar17 + 0x38))(puVar12,0,1,lVar16);
    }
    else {
      _memcpy(puVar12,puVar14,uVar9);
    }
    *(undefined1 *)((long)puVar12 + uVar1) = 0;
  }
  else {
    _memcpy(puVar12,puVar14,uVar1 + 1);
  }
  return param_1;
}



/* Entry: 104145700; end: 1041459c3;  */

void FUN_104145700(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  
  puVar8 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar19 = *(long *)(lVar9 + -8);
  uVar5 = *(uint *)(lVar19 + 0x54);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar3,puVar8,PTR___s7ElementSciTl_11034fb58);
  lVar10 = *(long *)(lVar10 + -8);
  uVar13 = *(ulong *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  if (uVar13 < 9) {
    uVar13 = 8;
  }
  uVar16 = 0xfd;
  if ((uint)uVar13 < 4) {
    uVar16 = 1U >> (ulong)(((uint)uVar13 & 3) << 3) ^ 0xfd;
  }
  uVar2 = uVar5;
  if (uVar5 <= uVar16) {
    uVar2 = uVar16;
  }
  if (uVar2 < 0xff) {
    uVar2 = 0xfe;
  }
  lVar11 = *(long *)(lVar19 + 0x40);
  uVar14 = (ulong)*(uint *)(lVar10 + 0x50) & 0xf8 | 7;
  lVar10 = uVar13 + ((lVar11 + 0x1fU & 0xfffffffffffffff8) + uVar14 + 8 &
                    (uVar14 ^ 0xffffffffffffffff)) + 1;
  uVar18 = (uint)lVar10;
  uVar16 = (uint)param_2;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar7 = 0;
  }
  else {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar18 << 3 & 0x1f)) >> (ulong)(uVar18 << 3 & 0x1f)
            ) + 1;
    bVar15 = 2;
    if (0xffff < uVar1) {
      bVar15 = 4;
    }
    if (uVar1 < 0x100) {
      bVar15 = 1 < uVar1;
    }
    bVar7 = 1;
    if (uVar18 < 4) {
      bVar7 = bVar15;
    }
  }
  if (uVar2 < uVar16) {
    uVar16 = uVar16 + ~uVar2;
    if (uVar18 < 4) {
      iVar17 = (uVar16 >> (ulong)(uVar18 << 3 & 0x1f)) + 1;
      if (uVar18 != 0) {
        uVar5 = uVar16 & (-1 << (ulong)(uVar18 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar10);
        uVar6 = (undefined2)uVar5;
        if (uVar18 == 3) {
          *(undefined2 *)param_1 = uVar6;
          *(char *)((long)param_1 + 2) = (char)(uVar5 >> 0x10);
        }
        else if (uVar18 == 2) {
          *(undefined2 *)param_1 = uVar6;
        }
        else {
          *(char *)param_1 = (char)uVar16;
        }
      }
    }
    else {
      _bzero(param_1,lVar10);
      *param_1 = uVar16;
      iVar17 = 1;
    }
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(char *)((long)param_1 + lVar10) = (char)iVar17;
      }
    }
    else if (bVar7 == 2) {
      *(short *)((long)param_1 + lVar10) = (short)iVar17;
    }
    else {
      *(int *)((long)param_1 + lVar10) = iVar17;
    }
  }
  else {
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_1 + lVar10) = 0;
      }
    }
    else if (bVar7 == 2) {
      *(undefined2 *)((long)param_1 + lVar10) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar10) = 0;
    }
    if (uVar16 != 0) {
      if (uVar5 == uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001041458e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar19 + 0x38))(param_1,param_2,uVar5,lVar9);
        return;
      }
      puVar12 = (ulong *)((long)param_1 + lVar11 + 7 & 0xfffffffffffffff8);
      if (uVar16 < 0xff) {
        *(char *)(puVar12 + 2) = -(char)param_2;
      }
      else {
        *(undefined1 *)(puVar12 + 2) = 0;
        *puVar12 = (ulong)(uVar16 - 0xff);
        puVar12[1] = 0;
      }
    }
  }
  return;
}



/* Entry: 1041459c4; end: 104145a53;  */

void FUN_1041459c4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar2 = 0x13f;
  __sSqMa();
  if (uVar1 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&lStack_30);
  }
  return;
}



/* Entry: 104145a54; end: 104145c0f;  */

long * FUN_104145a54(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar3 + -8);
  uVar7 = *(ulong *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar1 = uVar7;
  if (uVar7 < 9) {
    uVar1 = 8;
  }
  if ((*(uint *)(lVar9 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar1 + 1) {
    uVar5 = *(uint *)(lVar9 + 0x50) & 0xf8;
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    _swift_retain();
    return (long *)(lVar3 + ((ulong)(uVar5 + 0x17 & (uVar5 ^ 0xffffffff)) & 0x1f8));
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)uVar1;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104145b5c;
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
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_104145b5c:
  if (uVar5 == 1) {
    *param_1 = *(long *)param_2;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2);
      return param_1;
    }
    puVar4 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,1);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar3);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar7);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Entry: 104145c10; end: 104145d23;  */

void FUN_104145c10(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar8 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar6 = 4;
    if (uVar4 < 4) {
      uVar6 = uVar4;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) {
        return;
      }
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
  if ((uVar6 == 0) &&
     (puVar3 = param_1, (**(code **)(lVar8 + 0x30))(param_1,1,lVar2), (int)puVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000104145d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 8))(param_1,lVar2);
    return;
  }
  return;
}



/* Entry: 104145d24; end: 104145ea7;  */

undefined8 * FUN_104145d24(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar3 + -8);
  uVar7 = *(ulong *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar1 = uVar7;
  if (uVar7 < 9) {
    uVar1 = 8;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)uVar1;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104145df4;
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
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_104145df4:
  if (uVar5 == 1) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar1 + 1);
      return param_1;
    }
    puVar4 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar3);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar7);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Entry: 104145ea8; end: 1041460db;  */

uint * FUN_104145ea8(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar3 + -8);
  uVar7 = *(ulong *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar1 = uVar7;
  if (uVar7 < 9) {
    uVar1 = 8;
  }
  uVar8 = (uint)uVar1;
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar5 = (uint)bVar2;
  if (bVar2 < 2) {
LAB_104145f84:
    if ((uVar5 == 0) &&
       (puVar4 = param_1, (**(code **)(lVar9 + 0x30))(param_1,1,lVar3), (int)puVar4 == 0)) {
      (**(code **)(lVar9 + 8))(param_1,lVar3);
    }
  }
  else {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if (1 < (int)uVar5) {
      if (uVar5 == 2) {
        uVar6 = (uint)(ushort)*param_1;
      }
      else if (uVar5 == 3) {
        uVar6 = (uint)(uint3)*param_1;
      }
      else {
        uVar6 = *param_1;
      }
LAB_104145f6c:
      uVar5 = uVar6 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
      if (3 < uVar8) {
        uVar5 = uVar6;
      }
      uVar5 = uVar5 + 2;
      goto LAB_104145f84;
    }
    if (uVar5 != 0) {
      uVar6 = (uint)(byte)*param_1;
      goto LAB_104145f6c;
    }
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104146020;
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
    uVar5 = uVar6 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_104146020:
  if (uVar5 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar1 + 1);
      return param_1;
    }
    puVar4 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar3);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar7);
    }
    *(byte *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Entry: 1041460dc; end: 10414625f;  */

undefined8 * FUN_1041460dc(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar3 + -8);
  uVar7 = *(ulong *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar1 = uVar7;
  if (uVar7 < 9) {
    uVar1 = 8;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)uVar1;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1041461ac;
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
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1041461ac:
  if (uVar5 == 1) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar1 + 1);
      return param_1;
    }
    puVar4 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar3);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar7);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Entry: 104146260; end: 104146493;  */

uint * FUN_104146260(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar3 + -8);
  uVar7 = *(ulong *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar1 = uVar7;
  if (uVar7 < 9) {
    uVar1 = 8;
  }
  uVar8 = (uint)uVar1;
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar5 = (uint)bVar2;
  if (bVar2 < 2) {
LAB_10414633c:
    if ((uVar5 == 0) &&
       (puVar4 = param_1, (**(code **)(lVar9 + 0x30))(param_1,1,lVar3), (int)puVar4 == 0)) {
      (**(code **)(lVar9 + 8))(param_1,lVar3);
    }
  }
  else {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if (1 < (int)uVar5) {
      if (uVar5 == 2) {
        uVar6 = (uint)(ushort)*param_1;
      }
      else if (uVar5 == 3) {
        uVar6 = (uint)(uint3)*param_1;
      }
      else {
        uVar6 = *param_1;
      }
LAB_104146324:
      uVar5 = uVar6 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
      if (3 < uVar8) {
        uVar5 = uVar6;
      }
      uVar5 = uVar5 + 2;
      goto LAB_10414633c;
    }
    if (uVar5 != 0) {
      uVar6 = (uint)(byte)*param_1;
      goto LAB_104146324;
    }
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1041463d8;
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
    uVar5 = uVar6 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1041463d8:
  if (uVar5 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar1 + 1);
      return param_1;
    }
    puVar4 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar3);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar7);
    }
    *(byte *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Entry: 104146494; end: 1041465ff;  */

int FUN_104146494(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = *(ulong *)(*(long *)(lVar5 + -8) + 0x40);
  if (*(int *)(*(long *)(lVar5 + -8) + 0x54) == 0) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar1 = 0xfd;
  if ((uint)uVar6 < 4) {
    uVar1 = 1U >> (ulong)(((uint)uVar6 & 3) << 3) ^ 0xfd;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar1) goto LAB_104146590;
  uVar8 = uVar6 + 1;
  uVar7 = (uint)uVar8;
  uVar3 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar9 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - uVar1 >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_104146590;
      goto LAB_10414651c;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_10414651c:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar7 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar3 = 4;
      if (uVar7 < 4) {
        uVar3 = uVar7;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar8 | uVar2) + 1;
  }
LAB_104146590:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + uVar6);
  if (uVar1 <= (*(byte *)((long)param_1 + uVar6) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Entry: 104146600; end: 1041467ef;  */

void FUN_104146600(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = *(ulong *)(*(long *)(lVar5 + -8) + 0x40);
  if (*(int *)(*(long *)(lVar5 + -8) + 0x54) == 0) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar2 = 0xfd;
  if ((uint)uVar6 < 4) {
    uVar2 = 1U >> (ulong)(((uint)uVar6 & 3) << 3) ^ 0xfd;
  }
  lVar5 = uVar6 + 1;
  uVar8 = (uint)lVar5;
  if (uVar2 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar8 << 3 & 0x1f))) - uVar2 >> (ulong)(uVar8 << 3 & 0x1f))
            + 1;
    bVar7 = 2;
    if (0xffff < uVar1) {
      bVar7 = 4;
    }
    if (uVar1 < 0x100) {
      bVar7 = 1 < uVar1;
    }
    bVar4 = 1;
    if (uVar8 < 4) {
      bVar4 = bVar7;
    }
  }
  else {
    bVar4 = 0;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar8 < 4) {
      iVar9 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar5);
        uVar3 = (undefined2)uVar2;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar5);
      *param_1 = param_2;
      iVar9 = 1;
    }
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(char *)((long)param_1 + lVar5) = (char)iVar9;
      }
    }
    else if (bVar4 == 2) {
      *(short *)((long)param_1 + lVar5) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + lVar5) = iVar9;
    }
  }
  else {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(undefined1 *)((long)param_1 + lVar5) = 0;
      }
    }
    else if (bVar4 == 2) {
      *(undefined2 *)((long)param_1 + lVar5) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar5) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar6) = -(char)param_2;
    }
  }
  return;
}



/* Entry: 1041467f0; end: 1041468bf;  */

uint FUN_1041467f0(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (*(int *)(*(long *)(lVar3 + -8) + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar6 = 4;
    if (uVar4 < 4) {
      uVar6 = uVar4;
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
    uVar2 = uVar6 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Entry: 1041468c0; end: 1041468c3;  */

void FUN_1041468c0(void)

{
  return;
}



/* Entry: 1041468c4; end: 1041469db;  */

void FUN_1041468c4(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar1 = *(long *)(lVar1 + -8);
  if (param_2 < 2) {
    uVar3 = *(ulong *)(lVar1 + 0x40);
    if (*(int *)(lVar1 + 0x54) == 0) {
      uVar3 = uVar3 + 1;
    }
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    uVar3 = *(ulong *)(lVar1 + 0x40);
    if (*(int *)(lVar1 + 0x54) == 0) {
      uVar3 = uVar3 + 1;
    }
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    param_2 = param_2 - 2;
    uVar2 = (uint)uVar3;
    if (uVar2 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar2 << 3 & 0x1f)) + '\x02';
      if (uVar2 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar2 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 2;
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



/* Entry: 1041469dc; end: 104146a5f;  */

void FUN_1041469dc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010413ecc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104146a60; end: 104146a9f;  */

void FUN_104146a60(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + lRam00000001130646a8 + 8);
  return;
}



/* Entry: 104146aa0; end: 104146b1b;  */

void FUN_104146aa0(undefined8 param_1,code *param_2)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar1 = param_2;
  __ss13ManagedBufferC13headerAddressSpyxGvg();
  pcVar2 = pcVar1;
  __ss13ManagedBufferC19firstElementAddressSpyq_Gvg();
  _os_unfair_lock_lock();
  (*param_2)(param_1,pcVar1);
  _os_unfair_lock_unlock(pcVar2);
  return;
}



/* Entry: 104146b1c; end: 104146b7b;  */

void FUN_104146b1c(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  _os_unfair_lock_lock(param_4);
  (*param_2)(param_1);
  _os_unfair_lock_unlock(param_4);
  return;
}



/* Entry: 104146b7c; end: 104146ba3;  */

void FUN_104146b7c(void)

{
  __ss13ManagedBufferC13headerAddressSpyxGvg();
  __ss13ManagedBufferC19firstElementAddressSpyq_Gvg();
  __ss13ManagedBufferCfd();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104146ba4; end: 104146c53;  */

void FUN_104146ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7f1b08);
  return;
}



/* Entry: 104146c54; end: 104146ca7;  */

void FUN_104146c54(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  FUN_104146ba4(0);
  uStack_40 = param_1;
  __ss13ManagedBufferC6create15minimumCapacity16makingHeaderWithAByxq_GSi_xAFKXEtKFZ
            (1,FUN_104146ca8,auStack_50);
  return;
}



/* Entry: 104146ca8; end: 104146d1f;  */

void FUN_104146ca8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *param_2;
  __ss13ManagedBufferC13headerAddressSpyxGvg();
  __ss13ManagedBufferC19firstElementAddressSpyq_Gvg();
  puVar1 = PTR___ss13ManagedBufferCMo_11034e5e0;
  *(undefined4 *)param_2 = 0;
  (**(code **)(*(long *)(*(long *)(lVar3 + *(long *)puVar1) + -8) + 0x10))(param_1,uVar2);
  return;
}



/* Entry: 104146d20; end: 104146d37;  */

void FUN_104146d20(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104146d38,0,0);
  return;
}



/* Entry: 104146d38; end: 104146d8b;  */

void FUN_104146d38(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = **(long **)(unaff_x22 + 0x18);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x104147ae8;
  plVar1[2] = *(long *)(unaff_x22 + 0x10);
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041470d0,0,0);
  return;
}



/* Entry: 104146d8c; end: 104146e9f;  */

void FUN_104146d8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar2 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40),param_2,param_2);
  lVar1 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar2 = lVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar2);
  (**(code **)(lVar3 + 0x10))(lVar1,param_3,param_5);
  (**(code **)(lVar4 + 0x20))(param_1,lVar2,param_4);
  lVar2 = 0;
  lStack_80 = param_4;
  lStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  FUN_104147a7c(0,&lStack_80);
  (**(code **)(lVar3 + 0x20))(param_1 + *(int *)(lVar2 + 0x34),lVar1,param_5);
  return;
}



/* Entry: 104146ea0; end: 104146f8f;  */

void FUN_104146ea0(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar2;
  long lVar3;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = 0;
  __sSqMa(0,lVar2);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  lStack_80 = lVar2;
  lStack_70 = lVar2;
  uStack_58 = uStack_68;
  FUN_104150b30(0,&lStack_80);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))((long)&lStack_80 - extraout_x8,1,1,lVar2);
  FUN_104153df8();
  (**(code **)(lVar3 + 8))((long)&lStack_80 - extraout_x8,lVar1);
  FUN_104146f90(unaff_x20);
  return;
}



/* Entry: 104146f90; end: 104146fdf;  */

void FUN_104146f90(long *param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_38 = *(undefined8 *)(lVar1 + 0x58);
  uStack_40 = *(undefined8 *)(lVar1 + 0x50);
  uStack_28 = *(undefined8 *)(lVar1 + 0x70);
  uStack_30 = *(undefined8 *)(lVar1 + 0x68);
  lVar1 = 0;
  FUN_104147adc(0,&uStack_40);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Entry: 104146fe0; end: 104147027;  */

void FUN_104146fe0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_104146ea0();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Entry: 104147028; end: 104147097;  */

void FUN_104147028(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 104147098; end: 1041470b7;  */

void FUN_104147098(void)

{
  func_0x000104147058();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1041470b8; end: 1041470cf;  */

void FUN_1041470b8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041470d0,0,0);
  return;
}



/* Entry: 1041470d0; end: 10414715f;  */

void FUN_1041470d0(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = *(long **)(*(long *)(unaff_x22 + 0x18) + 0x10);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x104147124;
  plVar1[2] = *(long *)(unaff_x22 + 0x10);
  plVar1[3] = (long)plVar2;
  plVar1[4] = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041509a4,0,0);
  return;
}



/* Entry: 104147160; end: 1041471af;  */

void FUN_104147160(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1041471b0;
  plVar1[2] = param_1;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104146d38,0,0);
  return;
}



/* Entry: 1041471b0; end: 1041471eb;  */

void FUN_1041471b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001041471e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1041471ec; end: 1041472c3;  */

void FUN_1041471ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  plVar3[1] = (long)FUN_1041472c4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1041472c4; end: 104147333;  */

void FUN_1041472c4(void)

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
                    /* WARNING: Could not recover jumptable at 0x000104147330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104147334; end: 104147343;  */

void FUN_104147334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd8eb8,param_1);
  return;
}



/* Entry: 104147344; end: 1041473d3;  */

void FUN_104147344(undefined8 param_1,long param_2)

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



/* Entry: 1041473d4; end: 10414745f;  */

void FUN_1041473d4(long param_1)

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



/* Entry: 104147460; end: 10414752b;  */

long * FUN_104147460(long *param_1,long *param_2,long param_3)

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



/* Entry: 10414752c; end: 104147733;  */

void FUN_10414752c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar1 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000104147580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(long *)(lVar3 + 0x40) + param_1 + uVar2 & (uVar2 ^ 0xffffffffffffffff))
  ;
  return;
}



/* Entry: 104147734; end: 10414787f;  */

uint * FUN_104147734(uint *param_1,uint param_2,long param_3)

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
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_1041477f8;
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
      goto LAB_104147790;
    }
    if (1 < uVar12) goto LAB_10414778c;
  }
  else {
LAB_10414778c:
    uVar12 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_104147790:
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
LAB_1041477f8:
  if (uVar7 <= uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000104147828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))();
    return param_1;
  }
  puVar6 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar11);
                    /* WARNING: Could not recover jumptable at 0x000104147818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 0x30))(puVar6,uVar7,*(long *)(param_3 + 0x18));
  return puVar6;
}



/* Entry: 104147880; end: 104147a7b;  */

void FUN_104147880(uint *param_1,undefined8 param_2,uint param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x000104147a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar7,lVar8);
      return;
    }
  }
  return;
}



/* Entry: 104147a7c; end: 104147a97;  */

void FUN_104147a7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f1b98);
  return;
}



/* Entry: 104147a98; end: 104147adb;  */

void FUN_104147a98(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 104147adc; end: 104147af3;  */

void FUN_104147adc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f1c40);
  return;
}



/* Entry: 104147af4; end: 104147bfb;  */

void FUN_104147af4(long param_1)

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
  FUN_104150b30(0,&uStack_80);
  lVar2 = *(long *)(lVar3 + -8);
  (**(code **)(lVar2 + 0x10))(lVar4,unaff_x20 + *(int *)(param_1 + 0x48),lVar3);
  (**(code **)(lVar2 + 0x38))(lVar4,0,1,lVar3);
  FUN_104153df8();
  (**(code **)(lVar5 + 8))(lVar4,lVar1);
  FUN_104147bfc(unaff_x20);
  return;
}



/* Entry: 104147bfc; end: 104147c4f;  */

void FUN_104147bfc(long *param_1)

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
  FUN_104148a18(0,&uStack_50);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Entry: 104147c50; end: 104147c97;  */

void FUN_104147c50(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_104147af4();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Entry: 104147c98; end: 104147d07;  */

void FUN_104147c98(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 104147d08; end: 104147d27;  */

void FUN_104147d08(void)

{
  func_0x000104147cc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104147d28; end: 104147d3f;  */

void FUN_104147d28(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104147d40,0,0);
  return;
}


