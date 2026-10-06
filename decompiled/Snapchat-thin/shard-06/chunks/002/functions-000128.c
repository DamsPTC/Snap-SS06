/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104541cd0; end: 104541cdb;  */

void FUN_104541cd0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000104541cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104541cdc; end: 104541d1b;  */

void FUN_104541cdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16af0;
  _swift_getWitnessTable(&UNK_10dd16af0,&UNK_110786808);
  puRam0000000113084ce0 = puVar1;
  return;
}



/* Entry: 104541d1c; end: 104541d37;  */

void FUN_104541d1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104541d38,0,0);
  return;
}



/* Entry: 104541d38; end: 104541f57;  */

void FUN_104541d38(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined8 *)(unaff_x22 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = *(long *)(unaff_x22 + 0x18);
  lVar3 = lVar6;
  if (0xffffff < lVar6) {
    lVar3 = 0x1000000;
  }
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104541f58);
    (*pcVar2)();
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    lVar6 = lVar3;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (lVar3,PTR___ss5UInt8VN_11034eef8);
    *(long *)(lVar6 + 0x10) = lVar3;
    _bzero(lVar6 + 0x20,lVar3);
    uVar7 = *(ulong *)(unaff_x22 + 0x18);
    do {
      *(ulong *)(unaff_x22 + 0x30) = uVar7;
      uVar8 = *(ulong *)(lVar6 + 0x10);
      uVar1 = uVar8;
      if (uVar7 <= uVar8) {
        uVar1 = uVar7;
      }
      *(ulong *)(unaff_x22 + 0x38) = uVar1;
      if (uVar8 != 0) {
        puVar4 = *(undefined1 **)(unaff_x22 + 0x28);
        uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x20);
        *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
        uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x10);
        *(long *)(unaff_x22 + 0x50) = lVar6;
        *(undefined8 *)(unaff_x22 + 0x58) = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
        lVar3 = 0;
        _swift_getAssociatedTypeWitness
                  (0,uVar10,uVar11,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
        (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar4,1,lVar3);
        if ((int)puVar4 != 0) {
          FUN_104541cdc();
          _swift_allocError(&UNK_110786808,puVar4,0,0);
          *puVar4 = 1;
          _swift_willThrow();
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x10));
          _swift_bridgeObjectRelease(lVar6);
                    /* WARNING: Could not recover jumptable at 0x000104541ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))();
          return;
        }
        _swift_getAssociatedConformanceWitness
                  (uVar10,uVar11,lVar3,PTR___sSciTL_11034fea8,
                   PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
        plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x60) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_104541f58;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
                  (plVar5,unaff_x22 + 0x70,lVar3,uVar10);
        return;
      }
      _swift_bridgeObjectRetain(lVar6);
      func_0x000103ee3b44();
      uVar7 = *(long *)(unaff_x22 + 0x30) - *(long *)(unaff_x22 + 0x38);
    } while (uVar7 != 0 && *(long *)(unaff_x22 + 0x38) <= *(long *)(unaff_x22 + 0x30));
    _swift_bridgeObjectRelease(lVar6);
    puVar9 = *(undefined **)(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000104541e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar9);
  return;
}



/* Entry: 104541f58; end: 104541fb3;  */

void FUN_104541f58(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104541fb4;
  }
  else {
    pcVar1 = FUN_104542208;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104541fb4; end: 104542207;  */

void FUN_104541fb4(undefined1 *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  ulong uVar10;
  ulong uVar11;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x70);
  uVar10 = *(ulong *)(unaff_x22 + 0x50);
  uVar11 = uVar10;
  if (*(char *)(unaff_x22 + 0x71) != '\x01') {
    _swift_isUniquelyReferenced_nonNull_native();
    uVar11 = *(ulong *)(unaff_x22 + 0x50);
    if ((uVar10 & 1) == 0) {
      func_0x000102eac9d4();
    }
    uVar10 = *(ulong *)(unaff_x22 + 0x58);
    uVar5 = *(ulong *)(uVar11 + 0x10);
    if (uVar5 <= uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104542074);
      (*pcVar2)();
    }
    lVar7 = *(long *)(unaff_x22 + 0x38);
    *(undefined1 *)(uVar11 + 0x20 + uVar10) = uVar1;
    lVar4 = uVar10 + 1;
    if (lVar4 == lVar7) {
      if (uVar5 <= *(ulong *)(unaff_x22 + 0x38)) goto LAB_10454208c;
      _swift_bridgeObjectRetain(uVar11);
      FUN_104541230();
      while( true ) {
        uVar10 = *(long *)(unaff_x22 + 0x30) - *(long *)(unaff_x22 + 0x38);
        if (uVar10 == 0 || *(long *)(unaff_x22 + 0x30) < *(long *)(unaff_x22 + 0x38)) {
          _swift_bridgeObjectRelease(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001045420cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x10));
          return;
        }
        *(ulong *)(unaff_x22 + 0x30) = uVar10;
        uVar6 = *(ulong *)(uVar11 + 0x10);
        uVar5 = uVar6;
        if (uVar10 <= uVar6) {
          uVar5 = uVar10;
        }
        *(ulong *)(unaff_x22 + 0x38) = uVar5;
        if (uVar6 != 0) break;
LAB_10454208c:
        _swift_bridgeObjectRetain(uVar11);
        func_0x000103ee3b44();
      }
      lVar4 = 0;
      uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x20);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
      uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x10);
      *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    }
    *(ulong *)(unaff_x22 + 0x50) = uVar11;
    *(long *)(unaff_x22 + 0x58) = lVar4;
    param_1 = *(undefined1 **)(unaff_x22 + 0x28);
    lVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar8,uVar9,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
    if ((int)param_1 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar8,uVar9,lVar4,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x60) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_104541f58;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
                (plVar3,(undefined1 *)(unaff_x22 + 0x70),lVar4,uVar8);
      return;
    }
  }
  FUN_104541cdc();
  _swift_allocError(&UNK_110786808,param_1,0,0);
  *param_1 = 1;
  _swift_willThrow();
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x10));
  _swift_bridgeObjectRelease(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010454218c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104542208; end: 104542247;  */

void FUN_104542208(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x10));
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000104542244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104542248; end: 10454229b;  */

void FUN_104542248(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x78) = param_2;
  *(long *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10454229c;
  plVar1[2] = param_2;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104541880,0,0);
  return;
}



/* Entry: 10454229c; end: 104542317;  */

void FUN_10454229c(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x90) = param_1;
  *(long *)(lVar1 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x88));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001045422ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined1 *)(lVar1 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104542318,0,0);
  return;
}



/* Entry: 104542318; end: 1045425fb;  */

void FUN_104542318(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  if (*(char *)(unaff_x22 + 0xb8) == '\x01') {
    lVar7 = *(long *)(unaff_x22 + 0x78);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x10),
               PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    lVar5 = 0;
    __sSqMa(0,lVar4);
    (**(code **)(*(long *)(lVar5 + -8) + 8))(uVar9,lVar5);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar9,1,1,lVar4);
    lVar5 = *(long *)(lVar7 + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    uVar9 = 1;
LAB_1045423c4:
    (*UNRECOVERED_JUMPTABLE)(uVar10,uVar9,1,lVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    if (*(ulong *)(unaff_x22 + 0x90) >> 0x1f == 0) {
      if (*(ulong *)(unaff_x22 + 0x90) != 0) {
        plVar6 = (long *)0x80;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xa0) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1045425fc;
        lVar4 = *(long *)(unaff_x22 + 0x90);
        lVar7 = *(long *)(unaff_x22 + 0x80);
        plVar6[4] = *(long *)(unaff_x22 + 0x78);
        plVar6[5] = lVar7;
        plVar6[3] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_104541d38,0,0);
        return;
      }
      lVar11 = *(long *)(unaff_x22 + 0x98);
      lVar7 = *(long *)(unaff_x22 + 0x78);
      lVar4 = *(long *)(unaff_x22 + 0x80);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
      lVar5 = *(long *)(lVar7 + 0x18);
      *(undefined **)(unaff_x22 + 0x68) = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104540540(lVar4 + *(int *)(lVar7 + 0x34),unaff_x22 + 0x38);
      uVar3 = *(undefined1 *)(lVar4 + *(int *)(lVar7 + 0x38));
      puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar7 + 0x3c));
      uVar12 = *puVar1;
      uVar2 = *(undefined1 *)(puVar1 + 1);
      uVar10 = 0x112deef08;
      func_0x0001000285a8(0x112deef08,&UNK_10d9bc0a0);
      FUN_10457fe00(uVar9,unaff_x22 + 0x68,unaff_x22 + 0x38,uVar3,uVar12,uVar2,lVar5,uVar10,
                    *(undefined8 *)(lVar7 + 0x28),&PTR_DAT_110789f28);
      if (lVar11 == 0) {
        uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
        uVar9 = 0;
        goto LAB_1045423c4;
      }
    }
    else {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar7 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,*(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x10),PTR___sSciTL_11034fea8,
                 PTR___s13AsyncIteratorSciTl_11034fb50);
      lVar4 = 0;
      __sSqMa(0,lVar7);
      (**(code **)(*(long *)(lVar4 + -8) + 8))(uVar10,lVar4);
      (**(code **)(*(long *)(lVar7 + -8) + 0x38))(uVar10,1,1,lVar7);
      plVar8 = (long *)0x0;
      FUN_104597744();
      _swift_allocObject();
      *(undefined1 *)(plVar8 + 2) = 0;
      plVar8[3] = -0x2fffffffffffffc4;
      plVar8[4] = -0x7ffffffef0df8360;
      plVar8[5] = 0x29287478656e;
      plVar8[6] = -0x1a00000000000000;
      plVar8[7] = -0x2fffffffffffffd8;
      plVar8[8] = -0x7ffffffef0df8420;
      plVar8[9] = 0xb2;
      plVar6 = plVar8;
      FUN_104540678();
      _swift_allocError(&UNK_110789f98,plVar6,0,0);
      *plVar6 = (long)plVar8;
      _swift_willThrow();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010454254c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1045425fc; end: 104542673;  */

void FUN_1045425fc(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xa0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104542648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0xb0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104542674,0,0);
  return;
}



/* Entry: 104542674; end: 104542777;  */

void FUN_104542674(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar7 = *(long *)(lVar2 + 0x18);
  func_0x000104540540(lVar3 + *(int *)(lVar2 + 0x34),unaff_x22 + 0x10);
  uVar5 = *(undefined1 *)(lVar3 + *(int *)(lVar2 + 0x38));
  puVar1 = (undefined8 *)(lVar3 + *(int *)(lVar2 + 0x3c));
  uVar10 = *puVar1;
  uVar4 = *(undefined1 *)(puVar1 + 1);
  uVar6 = 0x112deef08;
  func_0x0001000285a8(0x112deef08,&UNK_10d9bc0a0);
  FUN_10457fe00(uVar9,(undefined8 *)(unaff_x22 + 0x60),unaff_x22 + 0x10,uVar5,uVar10,uVar4,lVar7,
                uVar6,*(undefined8 *)(lVar2 + 0x28),&PTR_DAT_110789f28);
  if (lVar8 == 0) {
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x70),0,1,lVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000104542774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104542778; end: 1045427d7;  */

void FUN_104542778(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1045427d8;
  plVar2[0xf] = param_2;
  plVar2[0x10] = unaff_x20;
  plVar2[0xe] = param_1;
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x11] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_10454229c;
  plVar1[2] = param_2;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104541880,0,0);
  return;
}



/* Entry: 1045427d8; end: 104542813;  */

void FUN_1045427d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104542810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104542814; end: 10454289f;  */

void FUN_104542814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  plVar1[1] = (long)FUN_1045428a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar1,param_1,param_2,param_3,param_5,param_6,unaff_x22 + 0x10);
  return;
}



/* Entry: 1045428a0; end: 1045428f3;  */

void FUN_1045428a0(void)

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
                    /* WARNING: Could not recover jumptable at 0x0001045428f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1045428f4; end: 104542a23;  */

void FUN_1045428f4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [40];
  
  lVar7 = *(long *)(param_2 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  lVar4 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  uVar8 = *(undefined8 *)(lVar4 + 0x20);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar7,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  (**(code **)(lVar9 + 0x10))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar4,lVar7,uVar8);
  func_0x000104540540(unaff_x20 + *(int *)(param_2 + 0x34),auStack_78);
  uVar3 = *(undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x38));
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x3c));
  uVar5 = *puVar1;
  uVar2 = *(undefined1 *)(puVar1 + 1);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x28);
  FUN_104541728(param_1,lVar4,auStack_78,uVar3,uVar5,uVar2,lVar7,uVar6,uVar8);
  return;
}



/* Entry: 104542a24; end: 104542a53;  */

void FUN_104542a24(long param_1)

{
  FUN_1045428f4();
                    /* WARNING: Could not recover jumptable at 0x000104542a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 104542a54; end: 104542b3b;  */

long FUN_104542a54(undefined1 *param_1,uint param_2,undefined1 *param_3,long param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  uint uVar6;
  
  uVar3 = param_2;
  if (param_3 == (undefined1 *)0x0) {
    uVar4 = 0;
    param_4 = 0;
  }
  else if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104542b0c);
      (*pcVar1)();
    }
    if ((param_2 & 0xff) == (param_2 & 0xff00) >> 8) {
      param_4 = 1;
    }
    else {
      lVar5 = -1;
      puVar2 = param_3;
      uVar6 = param_2;
      do {
        uVar3 = (uVar6 & 0xff) + 1;
        if (uVar3 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104542b08);
          (*pcVar1)();
        }
        param_3 = puVar2 + 1;
        *puVar2 = (char)uVar6;
        if (param_4 + lVar5 == 0) {
          uVar4 = 0;
          goto LAB_104542ae8;
        }
        lVar5 = lVar5 + -1;
        puVar2 = param_3;
        uVar6 = uVar3;
      } while ((uVar3 & 0xff) != (param_2 & 0xff00) >> 8);
      param_4 = -lVar5;
    }
    *param_3 = (char)uVar3;
    uVar4 = 1;
    uVar3 = 0;
  }
LAB_104542ae8:
  *param_1 = (char)param_2;
  param_1[1] = (char)(param_2 >> 8);
  param_1[2] = (char)uVar3;
  param_1[3] = uVar4;
  return param_4;
}



/* Entry: 104542b3c; end: 104542bc3;  */

void FUN_104542b3c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dd168d8;
    puStack_30 = &UNK_10dd168f0;
    puStack_28 = &UNK_10dd16908;
    _swift_initStructMetadata(param_1,0,4,&lStack_40,param_1 + 0x30);
  }
  return;
}



/* Entry: 104542bc4; end: 104542cdb;  */

long * FUN_104542bc4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar6 = *(long *)(lVar3 + 0x40);
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && (lVar6 + 0x37U & 0xfffffffffffffff8) + 9 < 0x19)
  {
    (**(code **)(lVar3 + 0x10))(param_1);
    puVar5 = (undefined8 *)((long)param_1 + lVar6 + 7 & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((long)param_2 + lVar6 + 7 & 0xfffffffffffffff8);
    uVar2 = puVar7[3];
    if (uVar2 < 0xffffffff) {
      uVar8 = puVar7[1];
      uVar4 = *puVar7;
      uVar10 = puVar7[3];
      uVar9 = puVar7[2];
      puVar5[4] = puVar7[4];
      puVar5[1] = uVar8;
      *puVar5 = uVar4;
      puVar5[3] = uVar10;
      puVar5[2] = uVar9;
    }
    else {
      puVar5[3] = uVar2;
      puVar5[4] = puVar7[4];
      (*(code *)**(undefined8 **)(uVar2 - 8))(puVar5,puVar7);
    }
    *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(puVar7 + 5);
    puVar5 = (undefined8 *)((long)param_1 + lVar6 + 0x37 & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((long)param_2 + lVar6 + 0x37 & 0xfffffffffffffff8);
    uVar4 = *puVar7;
    *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar7 + 1);
    *puVar5 = uVar4;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104542cdc; end: 104542d33;  */

void FUN_104542cdc(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar2 + 8))();
  puVar1 = (undefined8 *)(param_1 + *(long *)(lVar2 + 0x40) + 7U & 0xfffffffffffffff8);
  if ((ulong)puVar1[3] < 0xffffffff) {
    return;
  }
  if ((*(byte *)(*(long *)(puVar1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*puVar1);
  return;
}



/* Entry: 104542d34; end: 104542efb;  */

long FUN_104542d34(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x10))();
  lVar2 = *(long *)(lVar5 + 0x40);
  lVar5 = lVar2 + param_1;
  lVar2 = lVar2 + param_2;
  puVar4 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(lVar2 + 7U & 0xfffffffffffffff8);
  uVar1 = puVar6[3];
  if (uVar1 < 0xffffffff) {
    uVar7 = puVar6[1];
    uVar3 = *puVar6;
    uVar9 = puVar6[3];
    uVar8 = puVar6[2];
    puVar4[4] = puVar6[4];
    puVar4[1] = uVar7;
    *puVar4 = uVar3;
    puVar4[3] = uVar9;
    puVar4[2] = uVar8;
  }
  else {
    puVar4[3] = uVar1;
    puVar4[4] = puVar6[4];
    (*(code *)**(undefined8 **)(uVar1 - 8))(puVar4,puVar6);
  }
  *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(puVar6 + 5);
  puVar4 = (undefined8 *)(lVar5 + 0x37U & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(lVar2 + 0x37U & 0xfffffffffffffff8);
  uVar3 = *puVar6;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar6 + 1);
  *puVar4 = uVar3;
  return param_1;
}



/* Entry: 104542efc; end: 104542f8b;  */

long FUN_104542efc(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x20))();
  lVar1 = *(long *)(lVar5 + 0x40);
  lVar5 = lVar1 + param_1;
  lVar1 = lVar1 + param_2;
  puVar2 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar1 + 7U & 0xfffffffffffffff8);
  uVar6 = puVar4[1];
  uVar3 = *puVar4;
  uVar8 = puVar4[3];
  uVar7 = puVar4[2];
  puVar2[4] = puVar4[4];
  puVar2[1] = uVar6;
  *puVar2 = uVar3;
  puVar2[3] = uVar8;
  puVar2[2] = uVar7;
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(puVar4 + 5);
  puVar4 = (undefined8 *)(lVar5 + 0x37U & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + 0x37U & 0xfffffffffffffff8);
  uVar3 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar4 = uVar3;
  return param_1;
}



/* Entry: 104542f8c; end: 10454303b;  */

long FUN_104542f8c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar2 + 0x28))();
  lVar4 = *(long *)(lVar2 + 0x40);
  lVar2 = lVar4 + param_1;
  puVar3 = (undefined8 *)(lVar2 + 7U & 0xfffffffffffffff8);
  if (0xfffffffe < (ulong)puVar3[3]) {
    func_0x0001000834e4(puVar3);
  }
  lVar4 = lVar4 + param_2;
  puVar1 = (undefined8 *)(lVar4 + 7U & 0xfffffffffffffff8);
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  uVar8 = puVar1[3];
  uVar7 = puVar1[2];
  puVar3[4] = puVar1[4];
  puVar3[1] = uVar6;
  *puVar3 = uVar5;
  puVar3[3] = uVar8;
  puVar3[2] = uVar7;
  *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(puVar1 + 5);
  puVar1 = (undefined8 *)(lVar2 + 0x37U & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar4 + 0x37U & 0xfffffffffffffff8);
  *puVar1 = *puVar3;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar3 + 1);
  return param_1;
}



/* Entry: 10454303c; end: 10454314f;  */

uint * FUN_10454303c(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar9 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    lVar1 = (*(long *)(lVar9 + 0x40) + 0x37U & 0xfffffffffffffff8) + 9;
    uVar6 = (uint)lVar1;
    uVar8 = 2;
    uVar4 = uVar8;
    if (uVar6 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar8 = 4;
    }
    if (uVar4 < 0x100) {
      uVar8 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar8;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_1045430d4;
    }
    else if (uVar3 == 2) {
      uVar8 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_1045430d4:
        uVar5 = uVar8 - 1 << (ulong)((uVar6 & 3) << 3);
        if (uVar6 < 4) {
          uVar8 = (uint)(byte)*param_1;
        }
        else {
          uVar8 = *param_1;
          uVar5 = 0;
        }
        return (uint *)(ulong)(uVar2 + (uVar8 | uVar5) + 1);
      }
    }
    else {
      uVar8 = *(uint *)((long)param_1 + lVar1);
      if (uVar8 != 0) goto LAB_1045430d4;
    }
  }
  if (0x7ffffffd < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010454310c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)(((ulong)((long)param_1 + *(long *)(lVar9 + 0x40) + 7) & 0xffffffffffffff8) +
                    0x18);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  uVar2 = 0;
  if (1 < (uint)uVar7 + 1) {
    uVar2 = (uint)uVar7;
  }
  return (uint *)(ulong)uVar2;
}



/* Entry: 104543150; end: 1045432eb;  */

void FUN_104543150(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  lVar1 = (lVar9 + 0x37U & 0xfffffffffffffff8) + 9;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar10 = 2;
    uVar3 = uVar10;
    if ((uint)lVar1 < 4) {
      uVar3 = ((param_3 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar10 = 4;
    }
    if (uVar3 < 0x100) {
      uVar10 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar10;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    _bzero(param_1,lVar1);
    iVar6 = 1;
    if ((uint)lVar1 < 4) {
      iVar6 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffd < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000104543270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))(param_1);
        return;
      }
      piVar7 = (int *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if (param_2 < 0x7fffffff) {
        *(ulong *)(piVar7 + 6) = (ulong)param_2;
      }
      else {
        piVar7[8] = 0;
        piVar7[9] = 0;
        piVar7[2] = 0;
        piVar7[3] = 0;
        piVar7[0] = 0;
        piVar7[1] = 0;
        piVar7[6] = 0;
        piVar7[7] = 0;
        piVar7[4] = 0;
        piVar7[5] = 0;
        *piVar7 = param_2 + 0x80000001;
      }
    }
  }
  return;
}



/* Entry: 1045432ec; end: 104543393;  */

void FUN_1045432ec(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar2 = 0x13f;
  __sSqMa();
  if (uVar1 < 0x40) {
    lStack_40 = *(long *)(lVar2 + -8) + 0x40;
    puStack_38 = &UNK_10dd168d8;
    puStack_30 = &UNK_10dd168f0;
    puStack_28 = &UNK_10dd16908;
    _swift_initStructMetadata(param_1,0,4,&lStack_40,param_1 + 0x30);
  }
  return;
}



/* Entry: 104543394; end: 10454351f;  */

long * FUN_104543394(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar2 + -8);
  lVar5 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  if ((*(uint *)(lVar9 + 0x50) & 0x1000f8) == 0 && (lVar5 + 0x37U & 0xfffffffffffffff8) + 9 < 0x19)
  {
    plVar3 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,1,lVar2);
    if ((int)plVar3 == 0) {
      (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar2);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar2);
    }
    else {
      _memcpy(param_1,param_2,lVar5);
    }
    puVar7 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    uVar4 = puVar8[3];
    if (uVar4 < 0xffffffff) {
      uVar10 = puVar8[1];
      uVar6 = *puVar8;
      uVar12 = puVar8[3];
      uVar11 = puVar8[2];
      puVar7[4] = puVar8[4];
      puVar7[1] = uVar10;
      *puVar7 = uVar6;
      puVar7[3] = uVar12;
      puVar7[2] = uVar11;
    }
    else {
      puVar7[3] = uVar4;
      puVar7[4] = puVar8[4];
      (*(code *)**(undefined8 **)(uVar4 - 8))(puVar7,puVar8);
    }
    *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(puVar8 + 5);
    puVar7 = (undefined8 *)((long)param_1 + lVar5 + 0x37 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 + lVar5 + 0x37 & 0xfffffffffffffff8);
    uVar6 = *puVar8;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
    *puVar7 = uVar6;
  }
  else {
    uVar1 = *(uint *)(lVar9 + 0x50) & 0xf8;
    lVar5 = *param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104543520; end: 1045435d3;  */

void FUN_104543520(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = param_1;
  (**(code **)(lVar4 + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 8))(param_1,lVar1);
  }
  param_1 = param_1 + *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    param_1 = param_1 + 1;
  }
  puVar3 = (undefined8 *)(param_1 + 7U & 0xfffffffffffffff8);
  if (0xfffffffe < (ulong)puVar3[3]) {
    if ((*(byte *)(*(long *)(puVar3[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(puVar3[3] + -8) + 8))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(*puVar3);
    return;
  }
  return;
}



/* Entry: 1045435d4; end: 1045438ef;  */

long FUN_1045435d4(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar1 + -8);
  lVar8 = param_2;
  (**(code **)(lVar7 + 0x30))(param_2,1,lVar1);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar1);
    iVar5 = *(int *)(lVar7 + 0x54);
    lVar8 = *(long *)(lVar7 + 0x40);
  }
  else {
    iVar5 = *(int *)(lVar7 + 0x54);
    lVar8 = *(long *)(lVar7 + 0x40);
    lVar1 = lVar8;
    if (iVar5 == 0) {
      lVar1 = lVar8 + 1;
    }
    _memcpy(param_1,param_2,lVar1);
  }
  if (iVar5 == 0) {
    lVar8 = lVar8 + 1;
  }
  puVar4 = (undefined8 *)(lVar8 + param_1 + 7U & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(lVar8 + param_2 + 7U & 0xfffffffffffffff8);
  uVar2 = puVar6[3];
  if (uVar2 < 0xffffffff) {
    uVar9 = puVar6[1];
    uVar3 = *puVar6;
    uVar11 = puVar6[3];
    uVar10 = puVar6[2];
    puVar4[4] = puVar6[4];
    puVar4[1] = uVar9;
    *puVar4 = uVar3;
    puVar4[3] = uVar11;
    puVar4[2] = uVar10;
  }
  else {
    puVar4[3] = uVar2;
    puVar4[4] = puVar6[4];
    (*(code *)**(undefined8 **)(uVar2 - 8))(puVar4,puVar6);
  }
  *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(puVar6 + 5);
  puVar4 = (undefined8 *)(lVar8 + param_1 + 0x37U & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(lVar8 + param_2 + 0x37U & 0xfffffffffffffff8);
  uVar3 = *puVar6;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar6 + 1);
  *puVar4 = uVar3;
  return param_1;
}



/* Entry: 1045438f0; end: 104543a07;  */

long FUN_1045438f0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = *(long *)(lVar1 + -8);
  lVar7 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar1);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar1);
    iVar5 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar5 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar1 = lVar7;
    if (iVar5 == 0) {
      lVar1 = lVar7 + 1;
    }
    _memcpy(param_1,param_2,lVar1);
  }
  if (iVar5 == 0) {
    lVar7 = lVar7 + 1;
  }
  puVar2 = (undefined8 *)(lVar7 + param_1 + 7U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar7 + param_2 + 7U & 0xfffffffffffffff8);
  uVar8 = puVar4[1];
  uVar3 = *puVar4;
  uVar10 = puVar4[3];
  uVar9 = puVar4[2];
  puVar2[4] = puVar4[4];
  puVar2[1] = uVar8;
  *puVar2 = uVar3;
  puVar2[3] = uVar10;
  puVar2[2] = uVar9;
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(puVar4 + 5);
  puVar4 = (undefined8 *)(lVar7 + param_1 + 0x37U & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar7 + param_2 + 0x37U & 0xfffffffffffffff8);
  uVar3 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar4 = uVar3;
  return param_1;
}



/* Entry: 104543a08; end: 104543b83;  */

long FUN_104543a08(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = *(long *)(lVar1 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar3 = param_1;
  (*pcVar7)(param_1,1,lVar1);
  lVar2 = param_2;
  (*pcVar7)(param_2,1,lVar1);
  if ((int)lVar3 == 0) {
    if ((int)lVar2 == 0) {
      (**(code **)(lVar6 + 0x28))(param_1,param_2,lVar1);
      goto LAB_104543adc;
    }
    (**(code **)(lVar6 + 8))(param_1,lVar1);
  }
  else if ((int)lVar2 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar1);
    goto LAB_104543adc;
  }
  lVar3 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar3 = lVar3 + 1;
  }
  _memcpy(param_1,param_2,lVar3);
LAB_104543adc:
  lVar3 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar3 = lVar3 + 1;
  }
  puVar5 = (undefined8 *)(lVar3 + param_1 + 7U & 0xfffffffffffffff8);
  if (0xfffffffe < (ulong)puVar5[3]) {
    func_0x0001000834e4(puVar5);
  }
  puVar4 = (undefined8 *)(lVar3 + param_2 + 7U & 0xfffffffffffffff8);
  uVar9 = puVar4[1];
  uVar8 = *puVar4;
  uVar11 = puVar4[3];
  uVar10 = puVar4[2];
  puVar5[4] = puVar4[4];
  puVar5[1] = uVar9;
  *puVar5 = uVar8;
  puVar5[3] = uVar11;
  puVar5[2] = uVar10;
  *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(puVar4 + 5);
  puVar4 = (undefined8 *)(lVar3 + param_1 + 0x37U & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar3 + param_2 + 0x37U & 0xfffffffffffffff8);
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  return param_1;
}



/* Entry: 104543b84; end: 104543cef;  */

int FUN_104543b84(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar7 + -8);
  iVar6 = *(int *)(lVar9 + 0x54);
  uVar5 = 0;
  if (iVar6 != 0) {
    uVar5 = iVar6 - 1;
  }
  uVar2 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  lVar11 = *(long *)(lVar9 + 0x40);
  if (iVar6 == 0) {
    lVar11 = lVar11 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    lVar1 = (lVar11 + 0x37U & 0xfffffffffffffff8) + 9;
    uVar12 = (uint)lVar1;
    uVar10 = 2;
    uVar4 = uVar10;
    if (uVar12 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xff >> 8) + 1;
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
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar10 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_104543c5c;
    }
    else if (uVar3 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_104543c5c:
        uVar5 = uVar10 - 1 << (ulong)((uVar12 & 3) << 3);
        if (uVar12 < 4) {
          uVar10 = (uint)(byte)*param_1;
        }
        else {
          uVar10 = *param_1;
          uVar5 = 0;
        }
        return uVar2 + (uVar10 | uVar5) + 1;
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + lVar1);
      if (uVar10 != 0) goto LAB_104543c5c;
    }
  }
  if (uVar5 < 0x7ffffffe) {
    uVar8 = *(ulong *)(((ulong)((long)param_1 + lVar11 + 7) & 0xffffffffffffff8) + 0x18);
    if (0xfffffffe < uVar8) {
      uVar8 = 0xffffffff;
    }
    iVar6 = 0;
    if (1 < (int)uVar8 + 1U) {
      iVar6 = (int)uVar8;
    }
  }
  else {
    (**(code **)(lVar9 + 0x30))(param_1,iVar6,lVar7);
    iVar6 = 0;
    if ((int)param_1 != 0) {
      iVar6 = (int)param_1 + -1;
    }
  }
  return iVar6;
}



/* Entry: 104543cf0; end: 104543f37;  */

void FUN_104543cf0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar8 = *(long *)(lVar4 + -8);
  iVar6 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar6 != 0) {
    uVar2 = iVar6 - 1;
  }
  uVar9 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar9 = 0x7ffffffe;
  }
  lVar10 = *(long *)(lVar8 + 0x40);
  if (iVar6 == 0) {
    lVar10 = lVar10 + 1;
  }
  lVar1 = (lVar10 + 0x37U & 0xfffffffffffffff8) + 9;
  uVar5 = 0;
  if (uVar9 <= param_3 && param_3 - uVar9 != 0) {
    uVar11 = 2;
    uVar3 = uVar11;
    if ((uint)lVar1 < 4) {
      uVar3 = ((param_3 - uVar9) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar11 = 4;
    }
    if (uVar3 < 0x100) {
      uVar11 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar11;
    }
  }
  if (uVar9 < param_2) {
    param_2 = param_2 + ~uVar9;
    _bzero(param_1,lVar1);
    iVar6 = 1;
    if ((uint)lVar1 < 4) {
      iVar6 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (uVar2 < 0x7ffffffe) {
        piVar7 = (int *)((long)param_1 + lVar10 + 7 & 0xfffffffffffffff8);
        if (param_2 < 0x7fffffff) {
          *(ulong *)(piVar7 + 6) = (ulong)param_2;
        }
        else {
          piVar7[8] = 0;
          piVar7[9] = 0;
          piVar7[2] = 0;
          piVar7[3] = 0;
          piVar7[0] = 0;
          piVar7[1] = 0;
          piVar7[6] = 0;
          piVar7[7] = 0;
          piVar7[4] = 0;
          piVar7[5] = 0;
          *piVar7 = param_2 + 0x80000001;
        }
      }
      else {
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000104543ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(param_1,param_2 + 1,iVar6,lVar4);
          return;
        }
        uVar5 = (uint)lVar10;
        uVar9 = 0xffffffff;
        if (uVar5 < 4) {
          uVar9 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar9 = uVar9 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(param_1);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)param_1 = (char)uVar9;
            }
            else {
              *(short *)param_1 = (short)uVar9;
            }
          }
          else if (uVar2 == 3) {
            *(short *)param_1 = (short)uVar9;
            *(char *)((long)param_1 + 2) = (char)(uVar9 >> 0x10);
          }
          else {
            *param_1 = uVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 104543f38; end: 104543f5f;  */

void FUN_104543f38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e813730);
  return;
}



/* Entry: 104543f60; end: 104543f8b;  */

long FUN_104543f60(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104543f8c; end: 10454425f;  */

undefined8 * FUN_104543f8c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  param_1[5] = param_2[5];
  lVar1 = param_2[9];
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar5;
    param_1[8] = uVar4;
    param_1[10] = param_2[10];
  }
  else {
    uVar2 = param_2[10];
    param_1[9] = lVar1;
    param_1[10] = uVar2;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 6,param_2 + 6);
  }
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  uVar3 = param_2[0x11];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[0x10];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x10] = uVar2;
    param_1[0x11] = uVar3;
  }
  else {
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
  }
  uVar3 = param_2[0x13];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[0x12];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
  }
  else {
    uVar2 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
  }
  return param_1;
}



/* Entry: 104544260; end: 10454437b;  */

undefined8 * FUN_104544260(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  param_1[5] = param_2[5];
  if (param_1[9] != 0) {
    func_0x0001000834e4(param_1 + 6);
  }
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
    uVar2 = param_2[0x11];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[0x10];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = uVar2;
      func_0x00010006c090(uVar1);
      goto LAB_104544328;
    }
    func_0x0001006e5814(param_1 + 0x10);
  }
  uVar1 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
LAB_104544328:
  if ((ulong)param_1[0x13] >> 0x3c < 0xf) {
    uVar2 = param_2[0x13];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[0x12];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = uVar2;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x0001006e5814(param_1 + 0x12);
  }
  uVar1 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar1;
  return param_1;
}



/* Entry: 10454437c; end: 104544463;  */

int FUN_10454437c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104544464; end: 104544507;  */

void FUN_104544464(undefined1 *param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  
  if (unaff_x20[3] == 0) {
    lVar2 = *unaff_x20 - unaff_x20[2];
    if (SCARRY8(unaff_x20[1],lVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104544508);
      (*pcVar1)();
    }
    *unaff_x20 = unaff_x20[2];
    unaff_x20[1] = unaff_x20[1] + lVar2;
    FUN_10454c42c();
    if (unaff_x21 == 0) {
      if (((ulong)param_1 & 0xff00000000) == 0x100000000) {
        FUN_10454d3c4();
        _swift_allocError(&UNK_110786678,param_1,0,0);
        *param_1 = 1;
        _swift_willThrow();
      }
      else {
        FUN_10454c1a4();
        unaff_x20[3] = *unaff_x20;
      }
    }
  }
  else {
    *unaff_x20 = unaff_x20[3];
  }
  return;
}



/* Entry: 104544508; end: 104544587;  */

void FUN_104544508(undefined4 *param_1)

{
  long *unaff_x20;
  undefined4 uVar1;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x05') {
    if (unaff_x20[1] < 4) {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined4 *)*unaff_x20;
      *unaff_x20 = (long)((undefined4 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -4;
      *param_1 = uVar1;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 104544588; end: 10454481f;  */

void FUN_104544588(ulong *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  
  puVar3 = param_1;
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    func_0x00010006b884();
    if (unaff_x21 != 0) {
      return;
    }
    if (puVar3 != (ulong *)0x0) {
      if (((((ulong)puVar3 & 3) == 0) && (puVar9 = (ulong *)unaff_x20[1], -1 < (long)puVar9)) &&
         (puVar3 <= puVar9)) {
        uVar10 = (ulong)puVar3 >> 2;
        puVar8 = (ulong *)*param_1;
        uVar4 = puVar8[2];
        if (SCARRY8(uVar4,uVar10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104544820);
          (*pcVar1)();
        }
        puVar3 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar3 == 0) || ((long)(puVar8[3] >> 1) < (long)(uVar4 + uVar10))) {
          func_0x0001002ecb70();
          puVar8 = puVar3;
        }
        *param_1 = (ulong)puVar8;
        if ((ulong *)0x3 < puVar9) {
          lVar5 = 0;
          bVar2 = uVar10 == 1;
          uVar4 = puVar8[2];
          lVar6 = *unaff_x20;
          lVar11 = -4;
          while( true ) {
            puVar3 = (ulong *)(uVar4 + lVar5);
            uVar12 = *(undefined4 *)(lVar6 + lVar5 * 4);
            uVar7 = uVar4 + 1 + lVar5;
            if ((ulong *)(puVar8[3] >> 1) <= puVar3) {
              puVar3 = (ulong *)(ulong)(1 < puVar8[3]);
              func_0x0001002ecb70(puVar3,uVar7,1,puVar8);
              puVar8 = puVar3;
            }
            puVar8[2] = uVar7;
            *(undefined4 *)((long)puVar8 + lVar5 * 4 + uVar4 * 4 + 0x20) = uVar12;
            if (bVar2) {
              *param_1 = (ulong)puVar8;
              *unaff_x20 = lVar6 - lVar11;
              unaff_x20[1] = (long)((long)puVar9 + -4);
              goto LAB_104544794;
            }
            if (puVar9 < (ulong *)0x8) break;
            bVar2 = uVar10 - 2 == lVar5;
            lVar5 = lVar5 + 1;
            lVar11 = lVar11 + -4;
            puVar9 = (ulong *)((long)puVar9 + -4);
          }
          *param_1 = (ulong)puVar8;
          *unaff_x20 = lVar6 - lVar11;
          unaff_x20[1] = (long)((long)puVar9 + -4);
        }
      }
      goto LAB_104544628;
    }
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x21) != '\x05') {
      return;
    }
    if (unaff_x20[1] < 4) {
LAB_104544628:
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,puVar3,0,0);
      *(undefined1 *)puVar3 = 1;
      _swift_willThrow();
      return;
    }
    uVar12 = *(undefined4 *)*unaff_x20;
    *unaff_x20 = (long)((undefined4 *)*unaff_x20 + 1);
    unaff_x20[1] = unaff_x20[1] + -4;
    uVar7 = *param_1;
    uVar10 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar7;
    if ((uVar10 & 1) == 0) {
      uVar4 = 0;
      func_0x0001002ecb70(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar10 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar10) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001002ecb70(uVar7,uVar10 + 1,1,uVar4);
      uVar4 = uVar7;
    }
    *(ulong *)(uVar4 + 0x10) = uVar10 + 1;
    *(undefined4 *)(uVar4 + uVar10 * 4 + 0x20) = uVar12;
    *param_1 = uVar4;
  }
LAB_104544794:
  *(undefined1 *)(unaff_x20 + 4) = 1;
  return;
}



/* Entry: 104544820; end: 10454489f;  */

void FUN_104544820(undefined8 *param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x01') {
    if (unaff_x20[1] < 8) {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined8 *)*unaff_x20;
      *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -8;
      *param_1 = uVar1;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 1045448a0; end: 104544b37;  */

void FUN_1045448a0(ulong *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  puVar3 = param_1;
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    func_0x00010006b884();
    if (unaff_x21 != 0) {
      return;
    }
    if (puVar3 != (ulong *)0x0) {
      if (((((ulong)puVar3 & 7) == 0) && (puVar9 = (ulong *)unaff_x20[1], -1 < (long)puVar9)) &&
         (puVar3 <= puVar9)) {
        uVar10 = (ulong)puVar3 >> 3;
        puVar8 = (ulong *)*param_1;
        uVar4 = puVar8[2];
        if (SCARRY8(uVar4,uVar10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104544b38);
          (*pcVar1)();
        }
        puVar3 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar3 == 0) || ((long)(puVar8[3] >> 1) < (long)(uVar4 + uVar10))) {
          func_0x0001014dd0d8();
          puVar8 = puVar3;
        }
        *param_1 = (ulong)puVar8;
        if ((ulong *)0x7 < puVar9) {
          lVar5 = 0;
          bVar2 = uVar10 == 1;
          uVar4 = puVar8[2];
          lVar6 = *unaff_x20;
          lVar11 = -8;
          while( true ) {
            puVar3 = (ulong *)(uVar4 + lVar5);
            uVar13 = *(ulong *)(lVar6 + lVar5 * 8);
            uVar7 = uVar4 + 1 + lVar5;
            if ((ulong *)(puVar8[3] >> 1) <= puVar3) {
              puVar3 = (ulong *)(ulong)(1 < puVar8[3]);
              func_0x0001014dd0d8(puVar3,uVar7,1,puVar8);
              puVar8 = puVar3;
            }
            puVar8[2] = uVar7;
            puVar8[uVar4 + lVar5 + 4] = uVar13;
            if (bVar2) {
              *param_1 = (ulong)puVar8;
              *unaff_x20 = lVar6 - lVar11;
              unaff_x20[1] = (long)(puVar9 + -1);
              goto LAB_104544aac;
            }
            if (puVar9 < (ulong *)0x10) break;
            bVar2 = uVar10 - 2 == lVar5;
            lVar5 = lVar5 + 1;
            lVar11 = lVar11 + -8;
            puVar9 = puVar9 + -1;
          }
          *param_1 = (ulong)puVar8;
          *unaff_x20 = lVar6 - lVar11;
          unaff_x20[1] = (long)(puVar9 + -1);
        }
      }
      goto LAB_104544940;
    }
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x21) != '\x01') {
      return;
    }
    if (unaff_x20[1] < 8) {
LAB_104544940:
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,puVar3,0,0);
      *(undefined1 *)puVar3 = 1;
      _swift_willThrow();
      return;
    }
    uVar12 = *(undefined8 *)*unaff_x20;
    *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
    unaff_x20[1] = unaff_x20[1] + -8;
    uVar7 = *param_1;
    uVar10 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar7;
    if ((uVar10 & 1) == 0) {
      uVar4 = 0;
      func_0x0001014dd0d8(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar10 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar10) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001014dd0d8(uVar7,uVar10 + 1,1,uVar4);
      uVar4 = uVar7;
    }
    *(ulong *)(uVar4 + 0x10) = uVar10 + 1;
    *(undefined8 *)(uVar4 + uVar10 * 8 + 0x20) = uVar12;
    *param_1 = uVar4;
  }
LAB_104544aac:
  *(undefined1 *)(unaff_x20 + 4) = 1;
  return;
}



/* Entry: 104544b38; end: 1045450b7;  */

void FUN_104544b38(ulong *param_1,code *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    puVar11 = param_1;
    func_0x00010006b884();
    if (unaff_x21 != 0) {
      return;
    }
    uVar12 = *param_1;
    uVar8 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar12;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
      (*param_2)(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar8 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      (*param_2)(uVar12,uVar8 + 1,1,uVar4);
      uVar4 = uVar12;
    }
    *(ulong *)(uVar4 + 0x10) = uVar8 + 1;
    *(int *)(uVar4 + uVar8 * 4 + 0x20) = (int)puVar11;
    *param_1 = uVar4;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar11 = &uStack_58;
  func_0x00010006b958();
  uVar8 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar6 = 0;
    goto LAB_104544e74;
  }
  if (uStack_58 < 8) {
    lVar6 = 0;
    uVar12 = 0;
  }
  else {
    if (uStack_58 < 0x20) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar10 = 0;
      lVar16 = 0;
      lVar17 = 0;
      uVar12 = uStack_58 & 0x7fffffffffffffe0;
      lVar18 = 0;
      lVar19 = 0;
      puVar7 = puVar11 + 2;
      lVar24 = 0;
      lVar25 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar26 = 0;
      lVar27 = 0;
      lVar22 = 0;
      lVar23 = 0;
      lVar32 = 0;
      lVar33 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar34 = 0;
      lVar35 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar30 = 0;
      lVar31 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar38 = 0;
      lVar39 = 0;
      lVar44 = 0;
      lVar45 = 0;
      uVar4 = uVar12;
      do {
        uVar49 = puVar7[-1];
        uVar48 = puVar7[-2];
        uVar47 = puVar7[1];
        uVar46 = *puVar7;
        lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar49 >> 0x30)) & 1);
        lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar49) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)(uVar49 >> 0x20)) & 1);
        lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar49 >> 0x28)) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar49 >> 0x10)) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar49 >> 0x18)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar48 >> 0x30)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (long)uVar48) & 1);
        lVar20 = lVar20 + (ulong)(-(-1 < (char)uVar49) & 1);
        lVar21 = lVar21 + (ulong)(-(-1 < (char)(uVar49 >> 8)) & 1);
        lVar18 = lVar18 + (ulong)(-(-1 < (char)(uVar48 >> 0x20)) & 1);
        lVar19 = lVar19 + (ulong)(-(-1 < (char)(uVar48 >> 0x28)) & 1);
        lVar16 = lVar16 + (ulong)(-(-1 < (char)(uVar48 >> 0x10)) & 1);
        lVar17 = lVar17 + (ulong)(-(-1 < (char)(uVar48 >> 0x18)) & 1);
        lVar6 = lVar6 + (ulong)(-(-1 < (char)uVar48) & 1);
        lVar10 = lVar10 + (ulong)(-(-1 < (char)(uVar48 >> 8)) & 1);
        lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar47 >> 0x30)) & 1);
        lVar45 = lVar45 + (ulong)(-(-1 < (long)uVar47) & 1);
        lVar38 = lVar38 + (ulong)(-(-1 < (char)(uVar47 >> 0x20)) & 1);
        lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar47 >> 0x28)) & 1);
        lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar47 >> 0x10)) & 1);
        lVar41 = lVar41 + (ulong)(-(-1 < (char)(uVar47 >> 0x18)) & 1);
        lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar46 >> 0x30)) & 1);
        lVar43 = lVar43 + (ulong)(-(-1 < (long)uVar46) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < (char)uVar47) & 1);
        lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar47 >> 8)) & 1);
        lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar46 >> 0x20)) & 1);
        lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar46 >> 0x28)) & 1);
        lVar36 = lVar36 + (ulong)(-(-1 < (char)(uVar46 >> 0x10)) & 1);
        lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar46 >> 0x18)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar46) & 1);
        lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar46 >> 8)) & 1);
        puVar7 = puVar7 + 4;
        uVar4 = uVar4 - 0x20;
      } while (uVar4 != 0);
      lVar6 = lVar28 + lVar6 + lVar30 + lVar20 + lVar34 + lVar18 + lVar38 + lVar22 +
              lVar36 + lVar16 + lVar40 + lVar26 + lVar42 + lVar24 + lVar44 + lVar32 +
              lVar29 + lVar10 + lVar31 + lVar21 + lVar35 + lVar19 + lVar39 + lVar23 +
              lVar37 + lVar17 + lVar41 + lVar27 + lVar43 + lVar25 + lVar45 + lVar33;
      if (uStack_58 == uVar12) goto LAB_104544e74;
      uVar4 = uVar12;
      if ((uStack_58 & 0x18) == 0) goto LAB_104544e54;
    }
    uVar12 = uStack_58 & 0x7ffffffffffffff8;
    lVar16 = 0;
    lVar17 = 0;
    lVar18 = 0;
    lVar10 = uVar4 - uVar12;
    lVar19 = 0;
    lVar20 = 0;
    lVar21 = 0;
    lVar22 = 0;
    plVar9 = (long *)((long)puVar11 + uVar4);
    do {
      lVar23 = *plVar9;
      lVar21 = lVar21 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x30)) & 1);
      lVar22 = lVar22 + (ulong)(-(-1 < lVar23) & 1);
      lVar19 = lVar19 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x20)) & 1);
      lVar20 = lVar20 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x28)) & 1);
      lVar16 = lVar16 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x10)) & 1);
      lVar17 = lVar17 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x18)) & 1);
      lVar6 = lVar6 + (ulong)(-(-1 < (char)lVar23) & 1);
      lVar18 = lVar18 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 8)) & 1);
      lVar10 = lVar10 + 8;
      plVar9 = plVar9 + 1;
    } while (lVar10 != 0);
    lVar6 = lVar6 + lVar19 + lVar16 + lVar21 + lVar18 + lVar20 + lVar17 + lVar22;
    if (uStack_58 == uVar12) goto LAB_104544e74;
  }
LAB_104544e54:
  lVar10 = uStack_58 - uVar12;
  pbVar5 = (byte *)((long)puVar11 + uVar12);
  do {
    lVar6 = lVar6 + (ulong)(*pbVar5 >> 7 ^ 1);
    lVar10 = lVar10 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar10 != 0);
LAB_104544e74:
  puVar13 = (undefined1 *)*param_1;
  lVar10 = *(long *)(puVar13 + 0x10);
  if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045450b8);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar3 == 0) || ((long)(*(ulong *)(puVar13 + 0x18) >> 1) < lVar10 + lVar6)) {
    (*param_2)();
    puVar13 = puVar3;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined1 *)(unaff_x20 + 0x70);
  uStack_e8 = 1;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  uStack_80 = 0xf000000000000000;
  uStack_88 = 0;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_100 = uVar8;
  uStack_f0 = 0;
  puVar3 = (undefined1 *)(unaff_x20 + 0x30);
  puStack_108 = puVar11;
  puStack_f8 = puVar11;
  func_0x00010006ae30(puVar3,&uStack_d8);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_a0 = uVar15;
  uStack_98 = uVar14;
  puVar7 = puStack_108;
  uVar4 = uStack_100;
  uStack_100 = uVar8;
  while( true ) {
    puStack_108 = puVar11;
    if (uStack_100 == 0) {
      *param_1 = (ulong)puVar13;
      uStack_100 = 0;
      func_0x00010006c134(&puStack_108);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
      return;
    }
    uVar8 = uStack_100 - 1;
    if ((long)uStack_100 < 1) break;
    puVar11 = (ulong *)((long)puStack_108 + 1);
    uVar12 = (ulong)(char)*puStack_108;
    if ((long)uVar12 < 0) {
      if (uStack_100 == 1) {
        uVar14 = 3;
        goto LAB_104545008;
      }
      uVar12 = uVar12 & 0x7f;
      puVar11 = (ulong *)((long)puStack_108 + 2);
      uVar46 = 7;
      while (uVar12 = ((ulong)*(byte *)((long)puVar11 + -1) & 0x7f) << (uVar46 & 0x3f) | uVar12,
            (char)*(byte *)((long)puVar11 + -1) < '\0') {
        uVar14 = 3;
        if (uVar8 < 2) goto LAB_104545008;
        puVar11 = (ulong *)((long)puVar11 + 1);
        uVar8 = uVar8 - 1;
        bVar1 = 0x38 < uVar46;
        uVar46 = uVar46 + 7;
        if (bVar1) goto LAB_104545008;
      }
      uVar8 = uVar8 - 1;
    }
    uVar46 = *(ulong *)(puVar13 + 0x10);
    puStack_108 = puVar7;
    uStack_100 = uVar4;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar46) {
      puVar3 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      (*param_2)(puVar3,uVar46 + 1,1,puVar13);
      puVar13 = puVar3;
    }
    *(ulong *)(puVar13 + 0x10) = uVar46 + 1;
    *(int *)(puVar13 + uVar46 * 4 + 0x20) = (int)uVar12;
    puVar7 = puStack_108;
    uVar4 = uStack_100;
    uStack_100 = uVar8;
  }
  uVar14 = 1;
LAB_104545008:
  *param_1 = (ulong)puVar13;
  FUN_10454d3c4();
  _swift_allocError(&UNK_110786678,puVar3,0,0);
  *puVar3 = uVar14;
  _swift_willThrow();
  func_0x00010006c134(&puStack_108);
  return;
}



/* Entry: 1045450b8; end: 104545637;  */

void FUN_1045450b8(ulong *param_1,code *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    puVar11 = param_1;
    func_0x00010006b884();
    if (unaff_x21 != 0) {
      return;
    }
    uVar12 = *param_1;
    uVar8 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar12;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
      (*param_2)(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar8 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      (*param_2)(uVar12,uVar8 + 1,1,uVar4);
      uVar4 = uVar12;
    }
    *(ulong *)(uVar4 + 0x10) = uVar8 + 1;
    *(ulong **)(uVar4 + uVar8 * 8 + 0x20) = puVar11;
    *param_1 = uVar4;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar11 = &uStack_58;
  func_0x00010006b958();
  uVar8 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar6 = 0;
    goto LAB_1045453f4;
  }
  if (uStack_58 < 8) {
    lVar6 = 0;
    uVar12 = 0;
  }
  else {
    if (uStack_58 < 0x20) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar10 = 0;
      lVar16 = 0;
      lVar17 = 0;
      uVar12 = uStack_58 & 0x7fffffffffffffe0;
      lVar18 = 0;
      lVar19 = 0;
      puVar7 = puVar11 + 2;
      lVar24 = 0;
      lVar25 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar26 = 0;
      lVar27 = 0;
      lVar22 = 0;
      lVar23 = 0;
      lVar32 = 0;
      lVar33 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar34 = 0;
      lVar35 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar30 = 0;
      lVar31 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar38 = 0;
      lVar39 = 0;
      lVar44 = 0;
      lVar45 = 0;
      uVar4 = uVar12;
      do {
        uVar49 = puVar7[-1];
        uVar48 = puVar7[-2];
        uVar47 = puVar7[1];
        uVar46 = *puVar7;
        lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar49 >> 0x30)) & 1);
        lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar49) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)(uVar49 >> 0x20)) & 1);
        lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar49 >> 0x28)) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar49 >> 0x10)) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar49 >> 0x18)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar48 >> 0x30)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (long)uVar48) & 1);
        lVar20 = lVar20 + (ulong)(-(-1 < (char)uVar49) & 1);
        lVar21 = lVar21 + (ulong)(-(-1 < (char)(uVar49 >> 8)) & 1);
        lVar18 = lVar18 + (ulong)(-(-1 < (char)(uVar48 >> 0x20)) & 1);
        lVar19 = lVar19 + (ulong)(-(-1 < (char)(uVar48 >> 0x28)) & 1);
        lVar16 = lVar16 + (ulong)(-(-1 < (char)(uVar48 >> 0x10)) & 1);
        lVar17 = lVar17 + (ulong)(-(-1 < (char)(uVar48 >> 0x18)) & 1);
        lVar6 = lVar6 + (ulong)(-(-1 < (char)uVar48) & 1);
        lVar10 = lVar10 + (ulong)(-(-1 < (char)(uVar48 >> 8)) & 1);
        lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar47 >> 0x30)) & 1);
        lVar45 = lVar45 + (ulong)(-(-1 < (long)uVar47) & 1);
        lVar38 = lVar38 + (ulong)(-(-1 < (char)(uVar47 >> 0x20)) & 1);
        lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar47 >> 0x28)) & 1);
        lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar47 >> 0x10)) & 1);
        lVar41 = lVar41 + (ulong)(-(-1 < (char)(uVar47 >> 0x18)) & 1);
        lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar46 >> 0x30)) & 1);
        lVar43 = lVar43 + (ulong)(-(-1 < (long)uVar46) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < (char)uVar47) & 1);
        lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar47 >> 8)) & 1);
        lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar46 >> 0x20)) & 1);
        lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar46 >> 0x28)) & 1);
        lVar36 = lVar36 + (ulong)(-(-1 < (char)(uVar46 >> 0x10)) & 1);
        lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar46 >> 0x18)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar46) & 1);
        lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar46 >> 8)) & 1);
        puVar7 = puVar7 + 4;
        uVar4 = uVar4 - 0x20;
      } while (uVar4 != 0);
      lVar6 = lVar28 + lVar6 + lVar30 + lVar20 + lVar34 + lVar18 + lVar38 + lVar22 +
              lVar36 + lVar16 + lVar40 + lVar26 + lVar42 + lVar24 + lVar44 + lVar32 +
              lVar29 + lVar10 + lVar31 + lVar21 + lVar35 + lVar19 + lVar39 + lVar23 +
              lVar37 + lVar17 + lVar41 + lVar27 + lVar43 + lVar25 + lVar45 + lVar33;
      if (uStack_58 == uVar12) goto LAB_1045453f4;
      uVar4 = uVar12;
      if ((uStack_58 & 0x18) == 0) goto LAB_1045453d4;
    }
    uVar12 = uStack_58 & 0x7ffffffffffffff8;
    lVar16 = 0;
    lVar17 = 0;
    lVar18 = 0;
    lVar10 = uVar4 - uVar12;
    lVar19 = 0;
    lVar20 = 0;
    lVar21 = 0;
    lVar22 = 0;
    plVar9 = (long *)((long)puVar11 + uVar4);
    do {
      lVar23 = *plVar9;
      lVar21 = lVar21 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x30)) & 1);
      lVar22 = lVar22 + (ulong)(-(-1 < lVar23) & 1);
      lVar19 = lVar19 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x20)) & 1);
      lVar20 = lVar20 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x28)) & 1);
      lVar16 = lVar16 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x10)) & 1);
      lVar17 = lVar17 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x18)) & 1);
      lVar6 = lVar6 + (ulong)(-(-1 < (char)lVar23) & 1);
      lVar18 = lVar18 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 8)) & 1);
      lVar10 = lVar10 + 8;
      plVar9 = plVar9 + 1;
    } while (lVar10 != 0);
    lVar6 = lVar6 + lVar19 + lVar16 + lVar21 + lVar18 + lVar20 + lVar17 + lVar22;
    if (uStack_58 == uVar12) goto LAB_1045453f4;
  }
LAB_1045453d4:
  lVar10 = uStack_58 - uVar12;
  pbVar5 = (byte *)((long)puVar11 + uVar12);
  do {
    lVar6 = lVar6 + (ulong)(*pbVar5 >> 7 ^ 1);
    lVar10 = lVar10 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar10 != 0);
LAB_1045453f4:
  puVar13 = (undefined1 *)*param_1;
  lVar10 = *(long *)(puVar13 + 0x10);
  if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104545638);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar3 == 0) || ((long)(*(ulong *)(puVar13 + 0x18) >> 1) < lVar10 + lVar6)) {
    (*param_2)();
    puVar13 = puVar3;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined1 *)(unaff_x20 + 0x70);
  uStack_e8 = 1;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  uStack_80 = 0xf000000000000000;
  uStack_88 = 0;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_100 = uVar8;
  uStack_f0 = 0;
  puVar3 = (undefined1 *)(unaff_x20 + 0x30);
  puStack_108 = puVar11;
  puStack_f8 = puVar11;
  func_0x00010006ae30(puVar3,&uStack_d8);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_a0 = uVar15;
  uStack_98 = uVar14;
  puVar7 = puStack_108;
  uVar4 = uStack_100;
  uStack_100 = uVar8;
  while( true ) {
    puStack_108 = puVar11;
    if (uStack_100 == 0) {
      *param_1 = (ulong)puVar13;
      uStack_100 = 0;
      func_0x00010006c134(&puStack_108);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
      return;
    }
    uVar8 = uStack_100 - 1;
    if ((long)uStack_100 < 1) break;
    puVar11 = (ulong *)((long)puStack_108 + 1);
    uVar12 = (ulong)(char)*puStack_108;
    if ((long)uVar12 < 0) {
      if (uStack_100 == 1) {
        uVar14 = 3;
        goto LAB_104545588;
      }
      uVar12 = uVar12 & 0x7f;
      puVar11 = (ulong *)((long)puStack_108 + 2);
      uVar46 = 7;
      while (uVar12 = ((ulong)*(byte *)((long)puVar11 + -1) & 0x7f) << (uVar46 & 0x3f) | uVar12,
            (char)*(byte *)((long)puVar11 + -1) < '\0') {
        uVar14 = 3;
        if (uVar8 < 2) goto LAB_104545588;
        puVar11 = (ulong *)((long)puVar11 + 1);
        uVar8 = uVar8 - 1;
        bVar1 = 0x38 < uVar46;
        uVar46 = uVar46 + 7;
        if (bVar1) goto LAB_104545588;
      }
      uVar8 = uVar8 - 1;
    }
    uVar46 = *(ulong *)(puVar13 + 0x10);
    puStack_108 = puVar7;
    uStack_100 = uVar4;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar46) {
      puVar3 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      (*param_2)(puVar3,uVar46 + 1,1,puVar13);
      puVar13 = puVar3;
    }
    *(ulong *)(puVar13 + 0x10) = uVar46 + 1;
    *(ulong *)(puVar13 + uVar46 * 8 + 0x20) = uVar12;
    puVar7 = puStack_108;
    uVar4 = uStack_100;
    uStack_100 = uVar8;
  }
  uVar14 = 1;
LAB_104545588:
  *param_1 = (ulong)puVar13;
  FUN_10454d3c4();
  _swift_allocError(&UNK_110786678,puVar3,0,0);
  *puVar3 = uVar14;
  _swift_willThrow();
  func_0x00010006c134(&puStack_108);
  return;
}



/* Entry: 104545638; end: 104545677;  */

void FUN_104545638(uint *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = (uint)param_1;
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    func_0x00010006b884();
    if (unaff_x21 == 0) {
      *param_1 = -(uVar1 & 1) ^ uVar1 >> 1;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 104545678; end: 1045456bb;  */

void FUN_104545678(uint *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = (uint)param_1;
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    func_0x00010006b884();
    if (unaff_x21 == 0) {
      *param_1 = -(uVar1 & 1) ^ uVar1 >> 1;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 1045456bc; end: 104545c3f;  */

void FUN_1045456bc(ulong *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    puVar11 = param_1;
    func_0x00010006b884();
    if (unaff_x21 != 0) {
      return;
    }
    uVar12 = *param_1;
    uVar8 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar12;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
      FUN_10454e6b8(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar8 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10454e6b8(uVar12,uVar8 + 1,1,uVar4);
      uVar4 = uVar12;
    }
    *(ulong *)(uVar4 + 0x10) = uVar8 + 1;
    *(uint *)(uVar4 + uVar8 * 4 + 0x20) = -((uint)puVar11 & 1) ^ (uint)puVar11 >> 1;
    *param_1 = uVar4;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar11 = &uStack_58;
  func_0x00010006b958();
  uVar8 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar6 = 0;
    goto LAB_1045459f8;
  }
  if (uStack_58 < 8) {
    lVar6 = 0;
    uVar12 = 0;
  }
  else {
    if (uStack_58 < 0x20) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar10 = 0;
      lVar16 = 0;
      lVar17 = 0;
      uVar12 = uStack_58 & 0x7fffffffffffffe0;
      lVar18 = 0;
      lVar19 = 0;
      puVar7 = puVar11 + 2;
      lVar24 = 0;
      lVar25 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar26 = 0;
      lVar27 = 0;
      lVar22 = 0;
      lVar23 = 0;
      lVar32 = 0;
      lVar33 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar34 = 0;
      lVar35 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar30 = 0;
      lVar31 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar38 = 0;
      lVar39 = 0;
      lVar44 = 0;
      lVar45 = 0;
      uVar4 = uVar12;
      do {
        uVar49 = puVar7[-1];
        uVar48 = puVar7[-2];
        uVar47 = puVar7[1];
        uVar46 = *puVar7;
        lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar49 >> 0x30)) & 1);
        lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar49) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)(uVar49 >> 0x20)) & 1);
        lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar49 >> 0x28)) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar49 >> 0x10)) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar49 >> 0x18)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar48 >> 0x30)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (long)uVar48) & 1);
        lVar20 = lVar20 + (ulong)(-(-1 < (char)uVar49) & 1);
        lVar21 = lVar21 + (ulong)(-(-1 < (char)(uVar49 >> 8)) & 1);
        lVar18 = lVar18 + (ulong)(-(-1 < (char)(uVar48 >> 0x20)) & 1);
        lVar19 = lVar19 + (ulong)(-(-1 < (char)(uVar48 >> 0x28)) & 1);
        lVar16 = lVar16 + (ulong)(-(-1 < (char)(uVar48 >> 0x10)) & 1);
        lVar17 = lVar17 + (ulong)(-(-1 < (char)(uVar48 >> 0x18)) & 1);
        lVar6 = lVar6 + (ulong)(-(-1 < (char)uVar48) & 1);
        lVar10 = lVar10 + (ulong)(-(-1 < (char)(uVar48 >> 8)) & 1);
        lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar47 >> 0x30)) & 1);
        lVar45 = lVar45 + (ulong)(-(-1 < (long)uVar47) & 1);
        lVar38 = lVar38 + (ulong)(-(-1 < (char)(uVar47 >> 0x20)) & 1);
        lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar47 >> 0x28)) & 1);
        lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar47 >> 0x10)) & 1);
        lVar41 = lVar41 + (ulong)(-(-1 < (char)(uVar47 >> 0x18)) & 1);
        lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar46 >> 0x30)) & 1);
        lVar43 = lVar43 + (ulong)(-(-1 < (long)uVar46) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < (char)uVar47) & 1);
        lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar47 >> 8)) & 1);
        lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar46 >> 0x20)) & 1);
        lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar46 >> 0x28)) & 1);
        lVar36 = lVar36 + (ulong)(-(-1 < (char)(uVar46 >> 0x10)) & 1);
        lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar46 >> 0x18)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar46) & 1);
        lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar46 >> 8)) & 1);
        puVar7 = puVar7 + 4;
        uVar4 = uVar4 - 0x20;
      } while (uVar4 != 0);
      lVar6 = lVar28 + lVar6 + lVar30 + lVar20 + lVar34 + lVar18 + lVar38 + lVar22 +
              lVar36 + lVar16 + lVar40 + lVar26 + lVar42 + lVar24 + lVar44 + lVar32 +
              lVar29 + lVar10 + lVar31 + lVar21 + lVar35 + lVar19 + lVar39 + lVar23 +
              lVar37 + lVar17 + lVar41 + lVar27 + lVar43 + lVar25 + lVar45 + lVar33;
      if (uStack_58 == uVar12) goto LAB_1045459f8;
      uVar4 = uVar12;
      if ((uStack_58 & 0x18) == 0) goto LAB_1045459d8;
    }
    uVar12 = uStack_58 & 0x7ffffffffffffff8;
    lVar16 = 0;
    lVar17 = 0;
    lVar18 = 0;
    lVar10 = uVar4 - uVar12;
    lVar19 = 0;
    lVar20 = 0;
    lVar21 = 0;
    lVar22 = 0;
    plVar9 = (long *)((long)puVar11 + uVar4);
    do {
      lVar23 = *plVar9;
      lVar21 = lVar21 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x30)) & 1);
      lVar22 = lVar22 + (ulong)(-(-1 < lVar23) & 1);
      lVar19 = lVar19 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x20)) & 1);
      lVar20 = lVar20 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x28)) & 1);
      lVar16 = lVar16 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x10)) & 1);
      lVar17 = lVar17 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x18)) & 1);
      lVar6 = lVar6 + (ulong)(-(-1 < (char)lVar23) & 1);
      lVar18 = lVar18 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 8)) & 1);
      lVar10 = lVar10 + 8;
      plVar9 = plVar9 + 1;
    } while (lVar10 != 0);
    lVar6 = lVar6 + lVar19 + lVar16 + lVar21 + lVar18 + lVar20 + lVar17 + lVar22;
    if (uStack_58 == uVar12) goto LAB_1045459f8;
  }
LAB_1045459d8:
  lVar10 = uStack_58 - uVar12;
  pbVar5 = (byte *)((long)puVar11 + uVar12);
  do {
    lVar6 = lVar6 + (ulong)(*pbVar5 >> 7 ^ 1);
    lVar10 = lVar10 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar10 != 0);
LAB_1045459f8:
  puVar13 = (undefined1 *)*param_1;
  lVar10 = *(long *)(puVar13 + 0x10);
  if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104545c40);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar3 == 0) || ((long)(*(ulong *)(puVar13 + 0x18) >> 1) < lVar10 + lVar6)) {
    FUN_10454e6b8();
    puVar13 = puVar3;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined1 *)(unaff_x20 + 0x70);
  uStack_d8 = 1;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_60 = 0xf000000000000000;
  uStack_68 = 0;
  uStack_f0 = uVar8;
  uStack_e0 = 0;
  puVar3 = (undefined1 *)(unaff_x20 + 0x30);
  puStack_f8 = puVar11;
  puStack_e8 = puVar11;
  func_0x00010006ae30(puVar3,&uStack_c8);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = uVar15;
  uStack_88 = uVar14;
  puVar7 = puStack_f8;
  uVar4 = uStack_f0;
  uStack_f0 = uVar8;
  while( true ) {
    puStack_f8 = puVar11;
    if (uStack_f0 == 0) {
      *param_1 = (ulong)puVar13;
      uStack_f0 = 0;
      func_0x00010006c134(&puStack_f8);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
      return;
    }
    uVar8 = uStack_f0 - 1;
    if ((long)uStack_f0 < 1) break;
    puVar11 = (ulong *)((long)puStack_f8 + 1);
    uVar12 = (ulong)(char)*puStack_f8;
    if ((long)uVar12 < 0) {
      if (uStack_f0 == 1) {
        uVar14 = 3;
        goto LAB_104545b94;
      }
      uVar12 = uVar12 & 0x7f;
      puVar11 = (ulong *)((long)puStack_f8 + 2);
      uVar46 = 7;
      while (uVar12 = ((ulong)*(byte *)((long)puVar11 + -1) & 0x7f) << (uVar46 & 0x3f) | uVar12,
            (char)*(byte *)((long)puVar11 + -1) < '\0') {
        uVar14 = 3;
        if (uVar8 < 2) goto LAB_104545b94;
        puVar11 = (ulong *)((long)puVar11 + 1);
        uVar8 = uVar8 - 1;
        bVar1 = 0x38 < uVar46;
        uVar46 = uVar46 + 7;
        if (bVar1) goto LAB_104545b94;
      }
      uVar8 = uVar8 - 1;
    }
    uVar46 = *(ulong *)(puVar13 + 0x10);
    puStack_f8 = puVar7;
    uStack_f0 = uVar4;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar46) {
      puVar3 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_10454e6b8(puVar3,uVar46 + 1,1,puVar13);
      puVar13 = puVar3;
    }
    *(ulong *)(puVar13 + 0x10) = uVar46 + 1;
    *(uint *)(puVar13 + uVar46 * 4 + 0x20) = -((uint)uVar12 & 1) ^ (uint)uVar12 >> 1;
    puVar7 = puStack_f8;
    uVar4 = uStack_f0;
    uStack_f0 = uVar8;
  }
  uVar14 = 1;
LAB_104545b94:
  *param_1 = (ulong)puVar13;
  FUN_10454d3c4();
  _swift_allocError(&UNK_110786678,puVar3,0,0);
  *puVar3 = uVar14;
  _swift_willThrow();
  func_0x00010006c134(&puStack_f8);
  return;
}



/* Entry: 104545c40; end: 104545c7f;  */

void FUN_104545c40(ulong *param_1)

{
  ulong *puVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(char *)(unaff_x20 + 0x21) == '\0') &&
     (puVar1 = param_1, func_0x00010006b884(), unaff_x21 == 0)) {
    *param_1 = -((ulong)puVar1 & 1) ^ (ulong)puVar1 >> 1;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  return;
}



/* Entry: 104545c80; end: 104545cc3;  */

void FUN_104545c80(ulong *param_1)

{
  ulong *puVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(char *)(unaff_x20 + 0x21) == '\0') &&
     (puVar1 = param_1, func_0x00010006b884(), unaff_x21 == 0)) {
    *param_1 = -((ulong)puVar1 & 1) ^ (ulong)puVar1 >> 1;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  return;
}



/* Entry: 104545cc4; end: 104546247;  */

void FUN_104545cc4(ulong *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    puVar11 = param_1;
    func_0x00010006b884();
    if (unaff_x21 != 0) {
      return;
    }
    uVar12 = *param_1;
    uVar8 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar12;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
      func_0x000101cef030(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar8 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x000101cef030(uVar12,uVar8 + 1,1,uVar4);
      uVar4 = uVar12;
    }
    *(ulong *)(uVar4 + 0x10) = uVar8 + 1;
    *(ulong *)(uVar4 + uVar8 * 8 + 0x20) = -((ulong)puVar11 & 1) ^ (ulong)puVar11 >> 1;
    *param_1 = uVar4;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar11 = &uStack_58;
  func_0x00010006b958();
  uVar8 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar6 = 0;
    goto LAB_104546000;
  }
  if (uStack_58 < 8) {
    lVar6 = 0;
    uVar12 = 0;
  }
  else {
    if (uStack_58 < 0x20) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar10 = 0;
      lVar16 = 0;
      lVar17 = 0;
      uVar12 = uStack_58 & 0x7fffffffffffffe0;
      lVar18 = 0;
      lVar19 = 0;
      puVar7 = puVar11 + 2;
      lVar24 = 0;
      lVar25 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar26 = 0;
      lVar27 = 0;
      lVar22 = 0;
      lVar23 = 0;
      lVar32 = 0;
      lVar33 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar34 = 0;
      lVar35 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar30 = 0;
      lVar31 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar38 = 0;
      lVar39 = 0;
      lVar44 = 0;
      lVar45 = 0;
      uVar4 = uVar12;
      do {
        uVar49 = puVar7[-1];
        uVar48 = puVar7[-2];
        uVar47 = puVar7[1];
        uVar46 = *puVar7;
        lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar49 >> 0x30)) & 1);
        lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar49) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)(uVar49 >> 0x20)) & 1);
        lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar49 >> 0x28)) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar49 >> 0x10)) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar49 >> 0x18)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar48 >> 0x30)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (long)uVar48) & 1);
        lVar20 = lVar20 + (ulong)(-(-1 < (char)uVar49) & 1);
        lVar21 = lVar21 + (ulong)(-(-1 < (char)(uVar49 >> 8)) & 1);
        lVar18 = lVar18 + (ulong)(-(-1 < (char)(uVar48 >> 0x20)) & 1);
        lVar19 = lVar19 + (ulong)(-(-1 < (char)(uVar48 >> 0x28)) & 1);
        lVar16 = lVar16 + (ulong)(-(-1 < (char)(uVar48 >> 0x10)) & 1);
        lVar17 = lVar17 + (ulong)(-(-1 < (char)(uVar48 >> 0x18)) & 1);
        lVar6 = lVar6 + (ulong)(-(-1 < (char)uVar48) & 1);
        lVar10 = lVar10 + (ulong)(-(-1 < (char)(uVar48 >> 8)) & 1);
        lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar47 >> 0x30)) & 1);
        lVar45 = lVar45 + (ulong)(-(-1 < (long)uVar47) & 1);
        lVar38 = lVar38 + (ulong)(-(-1 < (char)(uVar47 >> 0x20)) & 1);
        lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar47 >> 0x28)) & 1);
        lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar47 >> 0x10)) & 1);
        lVar41 = lVar41 + (ulong)(-(-1 < (char)(uVar47 >> 0x18)) & 1);
        lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar46 >> 0x30)) & 1);
        lVar43 = lVar43 + (ulong)(-(-1 < (long)uVar46) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < (char)uVar47) & 1);
        lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar47 >> 8)) & 1);
        lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar46 >> 0x20)) & 1);
        lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar46 >> 0x28)) & 1);
        lVar36 = lVar36 + (ulong)(-(-1 < (char)(uVar46 >> 0x10)) & 1);
        lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar46 >> 0x18)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar46) & 1);
        lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar46 >> 8)) & 1);
        puVar7 = puVar7 + 4;
        uVar4 = uVar4 - 0x20;
      } while (uVar4 != 0);
      lVar6 = lVar28 + lVar6 + lVar30 + lVar20 + lVar34 + lVar18 + lVar38 + lVar22 +
              lVar36 + lVar16 + lVar40 + lVar26 + lVar42 + lVar24 + lVar44 + lVar32 +
              lVar29 + lVar10 + lVar31 + lVar21 + lVar35 + lVar19 + lVar39 + lVar23 +
              lVar37 + lVar17 + lVar41 + lVar27 + lVar43 + lVar25 + lVar45 + lVar33;
      if (uStack_58 == uVar12) goto LAB_104546000;
      uVar4 = uVar12;
      if ((uStack_58 & 0x18) == 0) goto LAB_104545fe0;
    }
    uVar12 = uStack_58 & 0x7ffffffffffffff8;
    lVar16 = 0;
    lVar17 = 0;
    lVar18 = 0;
    lVar10 = uVar4 - uVar12;
    lVar19 = 0;
    lVar20 = 0;
    lVar21 = 0;
    lVar22 = 0;
    plVar9 = (long *)((long)puVar11 + uVar4);
    do {
      lVar23 = *plVar9;
      lVar21 = lVar21 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x30)) & 1);
      lVar22 = lVar22 + (ulong)(-(-1 < lVar23) & 1);
      lVar19 = lVar19 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x20)) & 1);
      lVar20 = lVar20 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x28)) & 1);
      lVar16 = lVar16 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x10)) & 1);
      lVar17 = lVar17 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x18)) & 1);
      lVar6 = lVar6 + (ulong)(-(-1 < (char)lVar23) & 1);
      lVar18 = lVar18 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 8)) & 1);
      lVar10 = lVar10 + 8;
      plVar9 = plVar9 + 1;
    } while (lVar10 != 0);
    lVar6 = lVar6 + lVar19 + lVar16 + lVar21 + lVar18 + lVar20 + lVar17 + lVar22;
    if (uStack_58 == uVar12) goto LAB_104546000;
  }
LAB_104545fe0:
  lVar10 = uStack_58 - uVar12;
  pbVar5 = (byte *)((long)puVar11 + uVar12);
  do {
    lVar6 = lVar6 + (ulong)(*pbVar5 >> 7 ^ 1);
    lVar10 = lVar10 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar10 != 0);
LAB_104546000:
  puVar13 = (undefined1 *)*param_1;
  lVar10 = *(long *)(puVar13 + 0x10);
  if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104546248);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar3 == 0) || ((long)(*(ulong *)(puVar13 + 0x18) >> 1) < lVar10 + lVar6)) {
    func_0x000101cef030();
    puVar13 = puVar3;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined1 *)(unaff_x20 + 0x70);
  uStack_d8 = 1;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_60 = 0xf000000000000000;
  uStack_68 = 0;
  uStack_f0 = uVar8;
  uStack_e0 = 0;
  puVar3 = (undefined1 *)(unaff_x20 + 0x30);
  puStack_f8 = puVar11;
  puStack_e8 = puVar11;
  func_0x00010006ae30(puVar3,&uStack_c8);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = uVar15;
  uStack_88 = uVar14;
  puVar7 = puStack_f8;
  uVar4 = uStack_f0;
  uStack_f0 = uVar8;
  while( true ) {
    puStack_f8 = puVar11;
    if (uStack_f0 == 0) {
      *param_1 = (ulong)puVar13;
      uStack_f0 = 0;
      func_0x00010006c134(&puStack_f8);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
      return;
    }
    uVar8 = uStack_f0 - 1;
    if ((long)uStack_f0 < 1) break;
    puVar11 = (ulong *)((long)puStack_f8 + 1);
    uVar12 = (ulong)(char)*puStack_f8;
    if ((long)uVar12 < 0) {
      if (uStack_f0 == 1) {
        uVar14 = 3;
        goto LAB_10454619c;
      }
      uVar12 = uVar12 & 0x7f;
      puVar11 = (ulong *)((long)puStack_f8 + 2);
      uVar46 = 7;
      while (uVar12 = ((ulong)*(byte *)((long)puVar11 + -1) & 0x7f) << (uVar46 & 0x3f) | uVar12,
            (char)*(byte *)((long)puVar11 + -1) < '\0') {
        uVar14 = 3;
        if (uVar8 < 2) goto LAB_10454619c;
        puVar11 = (ulong *)((long)puVar11 + 1);
        uVar8 = uVar8 - 1;
        bVar1 = 0x38 < uVar46;
        uVar46 = uVar46 + 7;
        if (bVar1) goto LAB_10454619c;
      }
      uVar8 = uVar8 - 1;
    }
    uVar46 = *(ulong *)(puVar13 + 0x10);
    puStack_f8 = puVar7;
    uStack_f0 = uVar4;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar46) {
      puVar3 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      func_0x000101cef030(puVar3,uVar46 + 1,1,puVar13);
      puVar13 = puVar3;
    }
    *(ulong *)(puVar13 + 0x10) = uVar46 + 1;
    *(ulong *)(puVar13 + uVar46 * 8 + 0x20) = -(uVar12 & 1) ^ uVar12 >> 1;
    puVar7 = puStack_f8;
    uVar4 = uStack_f0;
    uStack_f0 = uVar8;
  }
  uVar14 = 1;
LAB_10454619c:
  *param_1 = (ulong)puVar13;
  FUN_10454d3c4();
  _swift_allocError(&UNK_110786678,puVar3,0,0);
  *puVar3 = uVar14;
  _swift_willThrow();
  func_0x00010006c134(&puStack_f8);
  return;
}



/* Entry: 104546248; end: 1045462c7;  */

void FUN_104546248(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *unaff_x20;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x05') {
    if ((long)unaff_x20[1] < 4) {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined4 *)*unaff_x20;
      *unaff_x20 = (undefined4 *)*unaff_x20 + 1;
      unaff_x20[1] = unaff_x20[1] + -4;
      *param_1 = uVar1;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 1045462c8; end: 10454634b;  */

void FUN_1045462c8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *unaff_x20;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x05') {
    if ((long)unaff_x20[1] < 4) {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined4 *)*unaff_x20;
      *unaff_x20 = (undefined4 *)*unaff_x20 + 1;
      unaff_x20[1] = unaff_x20[1] + -4;
      *param_1 = uVar1;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 10454634c; end: 1045465ff;  */

void FUN_10454634c(ulong *param_1,code *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  long unaff_x21;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    lStack_58 = 0;
    plVar7 = &lStack_58;
    func_0x00010006b958();
    lVar4 = lStack_58;
    if (unaff_x21 == 0) {
      puVar11 = (undefined8 *)*param_1;
      lVar12 = puVar11[2];
      lVar1 = lStack_58 + 3;
      if (-1 < lStack_58) {
        lVar1 = lStack_58;
      }
      if (SCARRY8(lVar12,lVar1 >> 2)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104546600);
        (*pcVar5)();
      }
      puVar8 = puVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar8 == 0) || ((long)((ulong)puVar11[3] >> 1) < lVar12 + (lVar1 >> 2))) {
        (*param_2)();
        puVar11 = puVar8;
      }
      uVar13 = unaff_x20[0xd];
      uVar3 = *(undefined1 *)(unaff_x20 + 0xe);
      uStack_d8 = 1;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_a0 = 0;
      uStack_98 = 1;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_60 = 0xf000000000000000;
      uStack_68 = 0;
      lStack_f0 = lVar4;
      uStack_e0 = 0;
      puVar8 = unaff_x20 + 6;
      plStack_f8 = plVar7;
      plStack_e8 = plVar7;
      func_0x00010006ae30(puVar8,&uStack_c8);
      uStack_80 = unaff_x20[0xf];
      uStack_90 = uVar13;
      uStack_88 = uVar3;
      lVar1 = lStack_f0;
      lStack_f0 = lVar4;
      while (lStack_f0 != 0) {
        lVar4 = lStack_f0 + -4;
        if (lStack_f0 < 4) {
          *param_1 = (ulong)puVar11;
          plStack_f8 = plVar7;
          FUN_10454d3c4();
          _swift_allocError(&UNK_110786678,puVar8,0,0);
          *(undefined1 *)puVar8 = 1;
          _swift_willThrow();
          func_0x00010006c134(&plStack_f8);
          return;
        }
        lVar12 = *plVar7;
        uVar6 = puVar11[2];
        lStack_f0 = lVar1;
        if ((ulong)puVar11[3] >> 1 <= uVar6) {
          puVar8 = (undefined8 *)(ulong)(1 < (ulong)puVar11[3]);
          (*param_2)(puVar8,uVar6 + 1,1,puVar11);
          puVar11 = puVar8;
        }
        plVar7 = (long *)((long)plVar7 + 4);
        puVar11[2] = uVar6 + 1;
        *(int *)((long)puVar11 + uVar6 * 4 + 0x20) = (int)lVar12;
        lVar1 = lStack_f0;
        lStack_f0 = lVar4;
      }
      *param_1 = (ulong)puVar11;
      lStack_f0 = 0;
      plStack_f8 = plVar7;
      func_0x00010006c134(&plStack_f8);
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  else if (*(char *)((long)unaff_x20 + 0x21) == '\x05') {
    if ((long)unaff_x20[1] < 4) {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar2 = *(undefined4 *)*unaff_x20;
      *unaff_x20 = (undefined4 *)*unaff_x20 + 1;
      unaff_x20[1] = unaff_x20[1] + -4;
      uVar10 = *param_1;
      uVar6 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar9 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar9 = 0;
        (*param_2)(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar6 = *(ulong *)(uVar9 + 0x10);
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
        (*param_2)(uVar10,uVar6 + 1,1,uVar9);
        uVar9 = uVar10;
      }
      *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
      *(undefined4 *)(uVar9 + uVar6 * 4 + 0x20) = uVar2;
      *param_1 = uVar9;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 104546600; end: 10454667f;  */

void FUN_104546600(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x01') {
    if (unaff_x20[1] < 8) {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined8 *)*unaff_x20;
      *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -8;
      *param_1 = uVar1;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 104546680; end: 104546703;  */

void FUN_104546680(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x01') {
    if (unaff_x20[1] < 8) {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined8 *)*unaff_x20;
      *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -8;
      *param_1 = uVar1;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 104546704; end: 1045469b7;  */

void FUN_104546704(ulong *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    lStack_58 = 0;
    plVar5 = &lStack_58;
    func_0x00010006b958();
    lVar1 = lStack_58;
    if (unaff_x21 == 0) {
      plVar9 = (long *)*param_1;
      lVar11 = plVar9[2];
      lVar2 = lStack_58 + 7;
      if (-1 < lStack_58) {
        lVar2 = lStack_58;
      }
      if (SCARRY8(lVar11,lVar2 >> 3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045469b8);
        (*pcVar3)();
      }
      plVar6 = plVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)plVar6 == 0) || ((long)((ulong)plVar9[3] >> 1) < lVar11 + (lVar2 >> 3))) {
        (*param_2)();
        plVar9 = plVar6;
      }
      lVar11 = unaff_x20[0xd];
      lVar2 = unaff_x20[0xe];
      uStack_d8 = 1;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_a0 = 0;
      uStack_98 = 1;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_60 = 0xf000000000000000;
      uStack_68 = 0;
      lStack_f0 = lVar1;
      uStack_e0 = 0;
      plVar6 = unaff_x20 + 6;
      plStack_f8 = plVar5;
      plStack_e8 = plVar5;
      func_0x00010006ae30(plVar6,&uStack_c8);
      lStack_80 = unaff_x20[0xf];
      lStack_90 = lVar11;
      uStack_88 = (char)lVar2;
      lVar2 = lStack_f0;
      lStack_f0 = lVar1;
      while (lStack_f0 != 0) {
        lVar1 = lStack_f0 + -8;
        if (lStack_f0 < 8) {
          *param_1 = (ulong)plVar9;
          plStack_f8 = plVar5;
          FUN_10454d3c4();
          _swift_allocError(&UNK_110786678,plVar6,0,0);
          *(undefined1 *)plVar6 = 1;
          _swift_willThrow();
          func_0x00010006c134(&plStack_f8);
          return;
        }
        lVar11 = *plVar5;
        uVar4 = plVar9[2];
        lStack_f0 = lVar2;
        if ((ulong)plVar9[3] >> 1 <= uVar4) {
          plVar6 = (long *)(ulong)(1 < (ulong)plVar9[3]);
          (*param_2)(plVar6,uVar4 + 1,1,plVar9);
          plVar9 = plVar6;
        }
        plVar5 = plVar5 + 1;
        plVar9[2] = uVar4 + 1;
        plVar9[uVar4 + 4] = lVar11;
        lVar2 = lStack_f0;
        lStack_f0 = lVar1;
      }
      *param_1 = (ulong)plVar9;
      lStack_f0 = 0;
      plStack_f8 = plVar5;
      func_0x00010006c134(&plStack_f8);
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  else if (*(char *)((long)unaff_x20 + 0x21) == '\x01') {
    if (unaff_x20[1] < 8) {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar10 = *(undefined8 *)*unaff_x20;
      *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -8;
      uVar8 = *param_1;
      uVar4 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar8;
      if ((uVar4 & 1) == 0) {
        uVar7 = 0;
        (*param_2)(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
      }
      uVar4 = *(ulong *)(uVar7 + 0x10);
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar4) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        (*param_2)(uVar8,uVar4 + 1,1,uVar7);
        uVar7 = uVar8;
      }
      *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
      *(undefined8 *)(uVar7 + uVar4 * 8 + 0x20) = uVar10;
      *param_1 = uVar7;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 1045469b8; end: 104546f3b;  */

void FUN_1045469b8(ulong *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    puVar11 = param_1;
    func_0x00010006b884();
    if (unaff_x21 != 0) {
      return;
    }
    uVar12 = *param_1;
    uVar8 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar12;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
      func_0x00010454e7d8(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar8 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x00010454e7d8(uVar12,uVar8 + 1,1,uVar4);
      uVar4 = uVar12;
    }
    *(ulong *)(uVar4 + 0x10) = uVar8 + 1;
    *(bool *)(uVar4 + uVar8 + 0x20) = puVar11 != (ulong *)0x0;
    *param_1 = uVar4;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar11 = &uStack_58;
  func_0x00010006b958();
  uVar8 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar6 = 0;
    goto LAB_104546cf4;
  }
  if (uStack_58 < 8) {
    lVar6 = 0;
    uVar12 = 0;
  }
  else {
    if (uStack_58 < 0x20) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar10 = 0;
      lVar16 = 0;
      lVar17 = 0;
      uVar12 = uStack_58 & 0x7fffffffffffffe0;
      lVar18 = 0;
      lVar19 = 0;
      puVar7 = puVar11 + 2;
      lVar24 = 0;
      lVar25 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar26 = 0;
      lVar27 = 0;
      lVar22 = 0;
      lVar23 = 0;
      lVar32 = 0;
      lVar33 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar34 = 0;
      lVar35 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar30 = 0;
      lVar31 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar38 = 0;
      lVar39 = 0;
      lVar44 = 0;
      lVar45 = 0;
      uVar4 = uVar12;
      do {
        uVar49 = puVar7[-1];
        uVar48 = puVar7[-2];
        uVar47 = puVar7[1];
        uVar46 = *puVar7;
        lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar49 >> 0x30)) & 1);
        lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar49) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)(uVar49 >> 0x20)) & 1);
        lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar49 >> 0x28)) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar49 >> 0x10)) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar49 >> 0x18)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar48 >> 0x30)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (long)uVar48) & 1);
        lVar20 = lVar20 + (ulong)(-(-1 < (char)uVar49) & 1);
        lVar21 = lVar21 + (ulong)(-(-1 < (char)(uVar49 >> 8)) & 1);
        lVar18 = lVar18 + (ulong)(-(-1 < (char)(uVar48 >> 0x20)) & 1);
        lVar19 = lVar19 + (ulong)(-(-1 < (char)(uVar48 >> 0x28)) & 1);
        lVar16 = lVar16 + (ulong)(-(-1 < (char)(uVar48 >> 0x10)) & 1);
        lVar17 = lVar17 + (ulong)(-(-1 < (char)(uVar48 >> 0x18)) & 1);
        lVar6 = lVar6 + (ulong)(-(-1 < (char)uVar48) & 1);
        lVar10 = lVar10 + (ulong)(-(-1 < (char)(uVar48 >> 8)) & 1);
        lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar47 >> 0x30)) & 1);
        lVar45 = lVar45 + (ulong)(-(-1 < (long)uVar47) & 1);
        lVar38 = lVar38 + (ulong)(-(-1 < (char)(uVar47 >> 0x20)) & 1);
        lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar47 >> 0x28)) & 1);
        lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar47 >> 0x10)) & 1);
        lVar41 = lVar41 + (ulong)(-(-1 < (char)(uVar47 >> 0x18)) & 1);
        lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar46 >> 0x30)) & 1);
        lVar43 = lVar43 + (ulong)(-(-1 < (long)uVar46) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < (char)uVar47) & 1);
        lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar47 >> 8)) & 1);
        lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar46 >> 0x20)) & 1);
        lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar46 >> 0x28)) & 1);
        lVar36 = lVar36 + (ulong)(-(-1 < (char)(uVar46 >> 0x10)) & 1);
        lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar46 >> 0x18)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar46) & 1);
        lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar46 >> 8)) & 1);
        puVar7 = puVar7 + 4;
        uVar4 = uVar4 - 0x20;
      } while (uVar4 != 0);
      lVar6 = lVar28 + lVar6 + lVar30 + lVar20 + lVar34 + lVar18 + lVar38 + lVar22 +
              lVar36 + lVar16 + lVar40 + lVar26 + lVar42 + lVar24 + lVar44 + lVar32 +
              lVar29 + lVar10 + lVar31 + lVar21 + lVar35 + lVar19 + lVar39 + lVar23 +
              lVar37 + lVar17 + lVar41 + lVar27 + lVar43 + lVar25 + lVar45 + lVar33;
      if (uStack_58 == uVar12) goto LAB_104546cf4;
      uVar4 = uVar12;
      if ((uStack_58 & 0x18) == 0) goto LAB_104546cd4;
    }
    uVar12 = uStack_58 & 0x7ffffffffffffff8;
    lVar16 = 0;
    lVar17 = 0;
    lVar18 = 0;
    lVar10 = uVar4 - uVar12;
    lVar19 = 0;
    lVar20 = 0;
    lVar21 = 0;
    lVar22 = 0;
    plVar9 = (long *)((long)puVar11 + uVar4);
    do {
      lVar23 = *plVar9;
      lVar21 = lVar21 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x30)) & 1);
      lVar22 = lVar22 + (ulong)(-(-1 < lVar23) & 1);
      lVar19 = lVar19 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x20)) & 1);
      lVar20 = lVar20 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x28)) & 1);
      lVar16 = lVar16 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x10)) & 1);
      lVar17 = lVar17 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x18)) & 1);
      lVar6 = lVar6 + (ulong)(-(-1 < (char)lVar23) & 1);
      lVar18 = lVar18 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 8)) & 1);
      lVar10 = lVar10 + 8;
      plVar9 = plVar9 + 1;
    } while (lVar10 != 0);
    lVar6 = lVar6 + lVar19 + lVar16 + lVar21 + lVar18 + lVar20 + lVar17 + lVar22;
    if (uStack_58 == uVar12) goto LAB_104546cf4;
  }
LAB_104546cd4:
  lVar10 = uStack_58 - uVar12;
  pbVar5 = (byte *)((long)puVar11 + uVar12);
  do {
    lVar6 = lVar6 + (ulong)(*pbVar5 >> 7 ^ 1);
    lVar10 = lVar10 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar10 != 0);
LAB_104546cf4:
  puVar13 = (undefined1 *)*param_1;
  lVar10 = *(long *)(puVar13 + 0x10);
  if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104546f3c);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar3 == 0) || ((long)(*(ulong *)(puVar13 + 0x18) >> 1) < lVar10 + lVar6)) {
    func_0x00010454e7d8();
    puVar13 = puVar3;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined1 *)(unaff_x20 + 0x70);
  uStack_d8 = 1;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_60 = 0xf000000000000000;
  uStack_68 = 0;
  uStack_f0 = uVar8;
  uStack_e0 = 0;
  puVar3 = (undefined1 *)(unaff_x20 + 0x30);
  puStack_f8 = puVar11;
  puStack_e8 = puVar11;
  func_0x00010006ae30(puVar3,&uStack_c8);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = uVar15;
  uStack_88 = uVar14;
  puVar7 = puStack_f8;
  uVar4 = uStack_f0;
  uStack_f0 = uVar8;
  while( true ) {
    puStack_f8 = puVar11;
    if (uStack_f0 == 0) {
      *param_1 = (ulong)puVar13;
      uStack_f0 = 0;
      func_0x00010006c134(&puStack_f8);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
      return;
    }
    uVar8 = uStack_f0 - 1;
    if ((long)uStack_f0 < 1) break;
    puVar11 = (ulong *)((long)puStack_f8 + 1);
    uVar12 = (ulong)(char)*puStack_f8;
    if ((long)uVar12 < 0) {
      if (uStack_f0 == 1) {
        uVar14 = 3;
        goto LAB_104546e90;
      }
      uVar12 = uVar12 & 0x7f;
      puVar11 = (ulong *)((long)puStack_f8 + 2);
      uVar46 = 7;
      while (uVar12 = ((ulong)*(byte *)((long)puVar11 + -1) & 0x7f) << (uVar46 & 0x3f) | uVar12,
            (char)*(byte *)((long)puVar11 + -1) < '\0') {
        uVar14 = 3;
        if (uVar8 < 2) goto LAB_104546e90;
        puVar11 = (ulong *)((long)puVar11 + 1);
        uVar8 = uVar8 - 1;
        bVar1 = 0x38 < uVar46;
        uVar46 = uVar46 + 7;
        if (bVar1) goto LAB_104546e90;
      }
      uVar8 = uVar8 - 1;
    }
    uVar46 = *(ulong *)(puVar13 + 0x10);
    puStack_f8 = puVar7;
    uStack_f0 = uVar4;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar46) {
      puVar3 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      func_0x00010454e7d8(puVar3,uVar46 + 1,1,puVar13);
      puVar13 = puVar3;
    }
    *(ulong *)(puVar13 + 0x10) = uVar46 + 1;
    puVar13[uVar46 + 0x20] = uVar12 != 0;
    puVar7 = puStack_f8;
    uVar4 = uStack_f0;
    uStack_f0 = uVar8;
  }
  uVar14 = 1;
LAB_104546e90:
  *param_1 = (ulong)puVar13;
  FUN_10454d3c4();
  _swift_allocError(&UNK_110786678,puVar3,0,0);
  *puVar3 = uVar14;
  _swift_willThrow();
  func_0x00010006c134(&puStack_f8);
  return;
}



/* Entry: 104546f3c; end: 104546feb;  */

void FUN_104546f3c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    lStack_38 = 0;
    plVar1 = &lStack_38;
    func_0x00010006b958();
    if (unaff_x21 == 0) {
      lVar2 = lStack_38;
      FUN_104596000();
      if (lVar2 == 0) {
        FUN_10454d3c4();
        _swift_allocError(&UNK_110786678,plVar1,0,0);
        *(undefined1 *)plVar1 = 2;
        _swift_willThrow();
      }
      else {
        _swift_bridgeObjectRelease(param_1[1]);
        *param_1 = plVar1;
        param_1[1] = lVar2;
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
      }
    }
  }
  return;
}



/* Entry: 104546fec; end: 10454709b;  */

void FUN_104546fec(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    lStack_38 = 0;
    plVar1 = &lStack_38;
    func_0x00010006b958();
    if (unaff_x21 == 0) {
      lVar2 = lStack_38;
      FUN_104596000();
      if (lVar2 == 0) {
        FUN_10454d3c4();
        _swift_allocError(&UNK_110786678,plVar1,0,0);
        *(undefined1 *)plVar1 = 2;
        _swift_willThrow();
      }
      else {
        _swift_bridgeObjectRelease(param_1[1]);
        *param_1 = plVar1;
        param_1[1] = lVar2;
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
      }
    }
  }
  return;
}



/* Entry: 10454709c; end: 1045471cb;  */

void FUN_10454709c(ulong *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  ulong uVar6;
  long lStack_38;
  
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    lStack_38 = 0;
    plVar2 = &lStack_38;
    func_0x00010006b958();
    if (unaff_x21 == 0) {
      lVar5 = lStack_38;
      FUN_104596000();
      if (lVar5 == 0) {
        FUN_10454d3c4();
        _swift_allocError(&UNK_110786678,plVar2,0,0);
        *(undefined1 *)plVar2 = 2;
        _swift_willThrow();
      }
      else {
        uVar6 = *param_1;
        uVar3 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar4 = uVar6;
        if ((uVar3 & 1) == 0) {
          uVar4 = 0;
          func_0x0001000d182c(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        }
        uVar3 = *(ulong *)(uVar4 + 0x10);
        uVar6 = uVar4;
        if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
          func_0x0001000d182c(uVar6,uVar3 + 1,1,uVar4);
        }
        *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
        lVar1 = uVar6 + uVar3 * 0x10;
        *(long **)(lVar1 + 0x20) = plVar2;
        *(long *)(lVar1 + 0x28) = lVar5;
        *param_1 = uVar6;
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
      }
    }
  }
  return;
}



/* Entry: 1045471cc; end: 104547247;  */

void FUN_1045471cc(long *param_1,code *param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    lStack_38 = 0;
    plVar1 = &lStack_38;
    func_0x00010006b958();
    if (unaff_x21 == 0) {
      (*param_2)(*param_1,param_1[1]);
      func_0x0001008aa3d0();
      *param_1 = (long)plVar1;
      param_1[1] = lStack_38;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 104547248; end: 10454733b;  */

void FUN_104547248(ulong *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  ulong uVar6;
  undefined8 uStack_38;
  
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    uStack_38 = 0;
    puVar2 = &uStack_38;
    func_0x00010006b958();
    if (unaff_x21 == 0) {
      uVar5 = uStack_38;
      func_0x0001008aa3d0();
      uVar6 = *param_1;
      uVar3 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar4 = uVar6;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        func_0x000100f23260(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar3 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x000100f23260(uVar6,uVar3 + 1,1,uVar4);
        uVar4 = uVar6;
      }
      *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
      lVar1 = uVar4 + uVar3 * 0x10;
      *(undefined8 **)(lVar1 + 0x20) = puVar2;
      *(undefined8 *)(lVar1 + 0x28) = uVar5;
      *param_1 = uVar4;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 10454733c; end: 1045474ab;  */

void FUN_10454733c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  
  lVar1 = 0;
  __sSqMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    lVar2 = lVar1;
    func_0x00010006b884();
    if (unaff_x21 == 0) {
      (**(code **)(param_3 + 0x20))(puVar5,(long)(int)lVar2,param_2,param_3);
      puVar3 = puVar5;
      (**(code **)(lVar8 + 0x30))(puVar5,1,param_2);
      pcVar4 = *(code **)(lVar7 + 8);
      if ((int)puVar3 == 1) {
        (*pcVar4)(puVar5,lVar1);
      }
      else {
        (*pcVar4)(param_1,lVar1);
        pcVar4 = *(code **)(lVar8 + 0x20);
        (*pcVar4)(lVar6,puVar5,param_2);
        (*pcVar4)(param_1,lVar6,param_2);
        (**(code **)(lVar8 + 0x38))(param_1,0,1,param_2);
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
      }
    }
  }
  return;
}



/* Entry: 1045474ac; end: 104547e23;  */

void FUN_1045474ac(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  long *plVar16;
  uint *puVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  undefined8 extraout_x14;
  undefined *extraout_x15;
  undefined *puVar18;
  undefined1 uVar19;
  long unaff_x20;
  undefined8 uVar20;
  long unaff_x21;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  undefined auStack_170 [8];
  undefined *puStack_168;
  long lStack_118;
  long lStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  lVar6 = 0;
  __sSqMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar21 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = (long)puVar21 - extraout_x12;
  lVar10 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = ((lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00) -
           extraout_x12_01;
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    lVar24 = lVar6;
    func_0x00010006b884();
    if (unaff_x21 != 0) {
      return;
    }
    (**(code **)(param_3 + 0x20))(lVar23,(long)(int)lVar24,param_2,param_3);
    lVar24 = lVar23;
    (**(code **)(lVar10 + 0x30))(lVar23,1,param_2);
    if ((int)lVar24 == 1) {
      (**(code **)(extraout_x13 + 8))(lVar23,lVar6);
      return;
    }
    (**(code **)(lVar10 + 0x20))(lVar22,lVar23,param_2);
    (**(code **)(lVar10 + 0x10))(extraout_x14,lVar22,param_2);
    uVar8 = 0;
    __sSaMa(0,param_2);
    __sSa6appendyyxnF(extraout_x14,uVar8);
    (**(code **)(lVar10 + 8))(lVar22,param_2);
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar7 = &uStack_58;
  func_0x00010006b958();
  uVar15 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar22 = 0;
  }
  else {
    if (uStack_58 < 8) {
      lVar22 = 0;
      uVar11 = 0;
    }
    else {
      if (uStack_58 < 0x20) {
        lVar22 = 0;
        uVar13 = 0;
      }
      else {
        lVar22 = 0;
        lVar23 = 0;
        lVar24 = 0;
        lVar25 = 0;
        uVar11 = uStack_58 & 0x7fffffffffffffe0;
        lVar26 = 0;
        lVar27 = 0;
        puVar14 = puVar7 + 2;
        lVar32 = 0;
        lVar33 = 0;
        lVar28 = 0;
        lVar29 = 0;
        lVar34 = 0;
        lVar35 = 0;
        lVar30 = 0;
        lVar31 = 0;
        lVar40 = 0;
        lVar41 = 0;
        lVar36 = 0;
        lVar37 = 0;
        lVar44 = 0;
        lVar45 = 0;
        lVar42 = 0;
        lVar43 = 0;
        lVar50 = 0;
        lVar51 = 0;
        lVar38 = 0;
        lVar39 = 0;
        lVar48 = 0;
        lVar49 = 0;
        lVar46 = 0;
        lVar47 = 0;
        lVar52 = 0;
        lVar53 = 0;
        uVar13 = uVar11;
        do {
          uVar57 = puVar14[-1];
          uVar56 = puVar14[-2];
          uVar55 = puVar14[1];
          uVar54 = *puVar14;
          lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar57 >> 0x30)) & 1);
          lVar41 = lVar41 + (ulong)(-(-1 < (long)uVar57) & 1);
          lVar30 = lVar30 + (ulong)(-(-1 < (char)(uVar57 >> 0x20)) & 1);
          lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar57 >> 0x28)) & 1);
          lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar57 >> 0x10)) & 1);
          lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar57 >> 0x18)) & 1);
          lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar56 >> 0x30)) & 1);
          lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar56) & 1);
          lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar57) & 1);
          lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar57 >> 8)) & 1);
          lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar56 >> 0x20)) & 1);
          lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar56 >> 0x28)) & 1);
          lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar56 >> 0x10)) & 1);
          lVar25 = lVar25 + (ulong)(-(-1 < (char)(uVar56 >> 0x18)) & 1);
          lVar22 = lVar22 + (ulong)(-(-1 < (char)uVar56) & 1);
          lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar56 >> 8)) & 1);
          lVar52 = lVar52 + (ulong)(-(-1 < (char)(uVar55 >> 0x30)) & 1);
          lVar53 = lVar53 + (ulong)(-(-1 < (long)uVar55) & 1);
          lVar46 = lVar46 + (ulong)(-(-1 < (char)(uVar55 >> 0x20)) & 1);
          lVar47 = lVar47 + (ulong)(-(-1 < (char)(uVar55 >> 0x28)) & 1);
          lVar48 = lVar48 + (ulong)(-(-1 < (char)(uVar55 >> 0x10)) & 1);
          lVar49 = lVar49 + (ulong)(-(-1 < (char)(uVar55 >> 0x18)) & 1);
          lVar50 = lVar50 + (ulong)(-(-1 < (char)(uVar54 >> 0x30)) & 1);
          lVar51 = lVar51 + (ulong)(-(-1 < (long)uVar54) & 1);
          lVar38 = lVar38 + (ulong)(-(-1 < (char)uVar55) & 1);
          lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar55 >> 8)) & 1);
          lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar54 >> 0x20)) & 1);
          lVar43 = lVar43 + (ulong)(-(-1 < (char)(uVar54 >> 0x28)) & 1);
          lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar54 >> 0x10)) & 1);
          lVar45 = lVar45 + (ulong)(-(-1 < (char)(uVar54 >> 0x18)) & 1);
          lVar36 = lVar36 + (ulong)(-(-1 < (char)uVar54) & 1);
          lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar54 >> 8)) & 1);
          puVar14 = puVar14 + 4;
          uVar13 = uVar13 - 0x20;
        } while (uVar13 != 0);
        lVar22 = lVar36 + lVar22 + lVar38 + lVar28 + lVar42 + lVar26 + lVar46 + lVar30 +
                 lVar44 + lVar24 + lVar48 + lVar34 + lVar50 + lVar32 + lVar52 + lVar40 +
                 lVar37 + lVar23 + lVar39 + lVar29 + lVar43 + lVar27 + lVar47 + lVar31 +
                 lVar45 + lVar25 + lVar49 + lVar35 + lVar51 + lVar33 + lVar53 + lVar41;
        if (uStack_58 == uVar11) goto LAB_1045479a8;
        uVar13 = uVar11;
        if ((uStack_58 & 0x18) == 0) goto LAB_104547988;
      }
      uVar11 = uStack_58 & 0x7ffffffffffffff8;
      lVar24 = 0;
      lVar25 = 0;
      lVar26 = 0;
      lVar23 = uVar13 - uVar11;
      lVar27 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar30 = 0;
      plVar16 = (long *)((long)puVar7 + uVar13);
      do {
        lVar31 = *plVar16;
        lVar29 = lVar29 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 0x30)) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < lVar31) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 0x20)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 0x28)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 0x10)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 0x18)) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)lVar31) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 8)) & 1);
        lVar23 = lVar23 + 8;
        plVar16 = plVar16 + 1;
      } while (lVar23 != 0);
      lVar22 = lVar22 + lVar27 + lVar24 + lVar29 + lVar26 + lVar28 + lVar25 + lVar30;
      if (uStack_58 == uVar11) goto LAB_1045479a8;
    }
LAB_104547988:
    lVar23 = uStack_58 - uVar11;
    pbVar12 = (byte *)((long)puVar7 + uVar11);
    do {
      lVar22 = lVar22 + (ulong)(*pbVar12 >> 7 ^ 1);
      lVar23 = lVar23 + -1;
      pbVar12 = pbVar12 + 1;
    } while (lVar23 != 0);
  }
LAB_1045479a8:
  lVar23 = *param_1;
  __sSa5countSivg(lVar23,param_2);
  if (SCARRY8(lVar23,lVar22)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104547e18);
    (*pcVar4)();
  }
  uVar8 = 0;
  __sSaMa(0,param_2);
  __sSa15reserveCapacityyySiF(lVar23 + lVar22);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x68);
  bVar3 = *(byte *)(unaff_x20 + 0x70);
  uStack_e8 = 1;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  uStack_80 = 0xf000000000000000;
  uStack_88 = 0;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_100 = uVar15;
  uStack_f0 = 0;
  puVar9 = (undefined *)(unaff_x20 + 0x30);
  puStack_108 = puVar7;
  puStack_f8 = puVar7;
  func_0x00010006ae30(puVar9,&uStack_d8);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_a0 = uVar20;
  bStack_98 = bVar3;
  if (uVar15 != 0) {
    puStack_168 = (undefined *)0x0;
LAB_104547ac8:
    do {
      uVar13 = uVar15 - 1;
      if ((long)uVar15 < 1) {
        uVar19 = 1;
LAB_104547cfc:
        FUN_10454d3c4();
        _swift_allocError(&UNK_110786678,puVar9,0,0);
        *puVar9 = uVar19;
        _swift_willThrow();
        func_0x00010006c134(&puStack_108);
        _swift_bridgeObjectRelease(puStack_168);
        return;
      }
      puVar14 = (ulong *)((long)puVar7 + 1);
      uVar11 = (ulong)(char)*puVar7;
      if ((long)uVar11 < 0) {
        if (uVar15 == 1) {
          uVar19 = 3;
          goto LAB_104547cfc;
        }
        uVar11 = uVar11 & 0x7f;
        puVar14 = (ulong *)((long)puVar7 + 2);
        uVar15 = 7;
        while (uVar11 = ((ulong)*(byte *)((long)puVar14 + -1) & 0x7f) << (uVar15 & 0x3f) | uVar11,
              (char)*(byte *)((long)puVar14 + -1) < '\0') {
          uVar19 = 3;
          if (uVar13 < 2) goto LAB_104547cfc;
          puVar14 = (ulong *)((long)puVar14 + 1);
          uVar13 = uVar13 - 1;
          bVar5 = 0x38 < uVar15;
          uVar15 = uVar15 + 7;
          if (bVar5) goto LAB_104547cfc;
        }
        uVar13 = uVar13 - 1;
      }
      puStack_108 = puVar14;
      uStack_100 = uVar13;
      (**(code **)(param_3 + 0x20))(puVar21,(long)(int)uVar11,param_2);
      puVar9 = puVar21;
      (**(code **)(lVar10 + 0x30))(puVar21,1,param_2);
      uVar15 = uVar13;
      puVar7 = puVar14;
      if ((int)puVar9 == 1) {
        puVar9 = puVar21;
        lVar22 = lVar6;
        (**(code **)(extraout_x13 + 8))();
        if ((bVar3 & 1) == 0) {
          puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puStack_168 != (undefined *)0x0) {
            puVar18 = puStack_168;
          }
          puVar9 = puVar18;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar9 & 1) == 0) {
            lVar22 = *(long *)(puVar18 + 0x10) + 1;
            puVar9 = (undefined *)0x0;
            FUN_10454e6b8(0,lVar22,1,puVar18);
            puVar18 = puVar9;
          }
          uVar54 = *(ulong *)(puVar18 + 0x10);
          lVar23 = uVar54 + 1;
          puStack_168 = puVar18;
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar54) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar18 + 0x18));
            lVar22 = lVar23;
            FUN_10454e6b8(puVar9,lVar23,1,puVar18);
            puStack_168 = puVar9;
          }
          *(long *)(puStack_168 + 0x10) = lVar23;
          *(int *)(puStack_168 + uVar54 * 4 + 0x20) = (int)uVar11;
          if (uVar13 == 0) break;
          goto LAB_104547ac8;
        }
      }
      else {
        (**(code **)(lVar10 + 0x20))(extraout_x15,puVar21,param_2);
        (**(code **)(lVar10 + 0x10))(extraout_x14,extraout_x15,param_2);
        __sSa6appendyyxnF(extraout_x14,uVar8);
        puVar9 = extraout_x15;
        lVar22 = param_2;
        (**(code **)(lVar10 + 8))();
      }
    } while (uVar13 != 0);
    puVar21 = puStack_168;
    if (puStack_168 != (undefined *)0x0) {
      uVar1 = *(uint *)(unaff_x20 + 0x28);
      lVar6 = *(long *)(puStack_168 + 0x10);
      if (lVar6 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar17 = (uint *)(puStack_168 + 0x20);
        do {
          uVar2 = *puVar17;
          if (uVar2 < 0x80) {
            lVar23 = 1;
          }
          else if ((int)uVar2 < 0) {
            lVar23 = 10;
          }
          else if (uVar2 < 0x200000) {
            if (uVar2 < 0x4000) {
              lVar23 = 2;
            }
            else {
              lVar23 = 3;
            }
          }
          else if (uVar2 >> 0x1c == 0) {
            lVar23 = 4;
          }
          else {
            lVar23 = 5;
          }
          bVar5 = SCARRY8(lVar10,lVar23);
          lVar10 = lVar10 + lVar23;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104547e1c);
            (*pcVar4)();
          }
          lVar6 = lVar6 + -1;
          puVar17 = puVar17 + 1;
        } while (lVar6 != 0);
      }
      lVar6 = 4;
      if ((uVar1 & 0x1fffffff) >> 0x19 != 0) {
        lVar6 = 5;
      }
      lVar23 = 3;
      if (0x1fffff < uVar1 << 3) {
        lVar23 = lVar6;
      }
      if ((uVar1 & 0x1fffffff) >> 0xb == 0) {
        lVar23 = 2;
      }
      lVar6 = 1;
      if (0x7f < uVar1 << 3) {
        lVar6 = lVar23;
      }
      lVar23 = lVar10;
      func_0x0001045ad874();
      if (SCARRY8(lVar6,lVar23)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104547e20);
        (*pcVar4)();
      }
      lVar24 = lVar6 + lVar23 + lVar10;
      if (SCARRY8(lVar6 + lVar23,lVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104547e24);
        (*pcVar4)();
      }
      func_0x000100076320();
      lStack_118 = lVar24;
      lStack_110 = lVar22;
      _swift_bridgeObjectRetain(puVar21);
      FUN_10454c8a0(&lStack_118,uVar1 << 3 | 2,lVar10,puVar21);
      func_0x00010006c134(&puStack_108);
      lVar10 = lStack_110;
      lVar6 = lStack_118;
      func_0x0001000b44c0(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
      _swift_bridgeObjectRelease(puVar21);
      *(long *)(unaff_x20 + 0x90) = lVar6;
      *(long *)(unaff_x20 + 0x98) = lVar10;
      goto LAB_104547ce4;
    }
  }
  func_0x00010006c134(&puStack_108);
LAB_104547ce4:
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  return;
}



/* Entry: 104547e24; end: 104547ed7;  */

void FUN_104547e24(byte *param_1,undefined8 param_2,uint param_3,ulong param_4,long param_5)

{
  uint uVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104547ed8);
    (*pcVar2)();
  }
  uVar5 = (ulong)param_3;
  pbVar3 = param_1;
  uVar9 = uVar5;
  if (0x7f < param_3) {
    do {
      param_1 = pbVar3 + 1;
      *pbVar3 = (byte)uVar9 | 0x80;
      uVar5 = uVar9 >> 7;
      uVar8 = uVar9 >> 0xe;
      pbVar3 = param_1;
      uVar9 = uVar5;
    } while (uVar8 != 0);
  }
  pbVar3 = param_1 + 1;
  *param_1 = (byte)uVar5;
  pbVar4 = pbVar3;
  uVar9 = param_4;
  if (0x7f < param_4) {
    do {
      pbVar3 = pbVar4 + 1;
      *pbVar4 = (byte)uVar9 | 0x80;
      param_4 = uVar9 >> 7;
      uVar5 = uVar9 >> 0xe;
      pbVar4 = pbVar3;
      uVar9 = param_4;
    } while (uVar5 != 0);
  }
  *pbVar3 = (byte)param_4;
  lVar6 = *(long *)(param_5 + 0x10);
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      uVar1 = *(uint *)(param_5 + 0x20 + lVar7 * 4);
      uVar9 = (ulong)(int)uVar1;
      pbVar4 = pbVar3;
      if (0x7f < uVar1) {
        do {
          pbVar3 = pbVar4 + 1;
          *pbVar4 = (byte)uVar9 | 0x80;
          uVar5 = uVar9 >> 0xe;
          uVar9 = uVar9 >> 7;
          pbVar4 = pbVar3;
        } while (uVar5 != 0);
      }
      lVar7 = lVar7 + 1;
      *pbVar3 = (byte)uVar9;
    } while (lVar7 != lVar6);
  }
  return;
}



/* Entry: 104547ed8; end: 104548117;  */

void FUN_104547ed8(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_130 [8];
  long lStack_128;
  code *pcStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  lVar3 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar10 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar10 - extraout_x12;
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    uStack_58 = 0;
    puVar4 = &uStack_58;
    lStack_110 = param_3;
    func_0x00010006b958();
    if (unaff_x21 == 0) {
      puStack_118 = puVar4;
      (**(code **)(lVar9 + 0x10))(lVar8,param_1,lVar3);
      lStack_128 = *(long *)(param_2 + -8);
      pcStack_120 = *(code **)(lStack_128 + 0x30);
      lVar5 = lVar8;
      (*pcStack_120)(lVar8,1,param_2);
      (**(code **)(lVar9 + 8))(lVar8,lVar3);
      if ((int)lVar5 == 1) {
        (**(code **)(lStack_110 + 0x10))(puVar10,param_2);
        (**(code **)(lStack_128 + 0x38))(puVar10,0,1,param_2);
        (**(code **)(lVar9 + 0x28))(param_1,puVar10,lVar3);
      }
      uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar1 = *(undefined1 *)(unaff_x20 + 0x70);
      uStack_e8 = 1;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_a8 = 1;
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      puStack_108 = puStack_118;
      uStack_100 = uStack_58;
      puStack_f8 = puStack_118;
      uStack_f0 = 0;
      func_0x00010006ae30(unaff_x20 + 0x30,&uStack_d8);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uVar6 = param_1;
      uStack_a0 = uVar7;
      uStack_98 = uVar1;
      (*pcStack_120)(param_1,1,param_2);
      if ((int)uVar6 == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104548118);
        (*pcVar2)();
      }
      func_0x00010006afb0(param_1,param_2,lStack_110);
      func_0x00010006c134(&puStack_108);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 104548118; end: 1045482df;  */

void FUN_104548118(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_70;
  
  lVar2 = 0;
  __sSqMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&uStack_70 - extraout_x8;
  lVar7 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_70 = param_1;
  (**(code **)(lVar6 + 0x10))(lVar9,param_1,lVar2);
  pcVar5 = *(code **)(lVar7 + 0x30);
  lVar3 = lVar9;
  (*pcVar5)(lVar9,1,param_2);
  if ((int)lVar3 == 1) {
    (**(code **)(param_3 + 0x10))(uVar8,param_2,param_3);
    lVar3 = lVar9;
    (*pcVar5)(lVar9,1,param_2);
    if ((int)lVar3 != 1) {
      (**(code **)(lVar6 + 8))(lVar9,lVar2);
    }
  }
  else {
    (**(code **)(lVar7 + 0x20))(uVar8,lVar9,param_2);
  }
  uVar4 = uVar8;
  FUN_1045482e0(uVar8,*(undefined8 *)(unaff_x20 + 0x28),param_2,param_3);
  uVar1 = uStack_70;
  if ((unaff_x21 == 0) && ((uVar4 & 1) != 0)) {
    (**(code **)(lVar6 + 8))(uStack_70,lVar2);
    (**(code **)(lVar7 + 0x20))(uVar1,uVar8,param_2);
    (**(code **)(lVar7 + 0x38))(uVar1,0,1,param_2);
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  else {
    (**(code **)(lVar7 + 8))(uVar8,param_2);
  }
  return;
}



/* Entry: 1045482e0; end: 104548573;  */

uint FUN_1045482e0(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  uint extraout_w8;
  uint uVar7;
  uint extraout_w8_00;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar10;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [8];
  long lStack_100;
  undefined1 uStack_e8;
  char cStack_e7;
  long lStack_e0;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_88;
  ulong uStack_80;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x03') {
    lVar8 = unaff_x20[0xf];
    lVar1 = lVar8 + -1;
    if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10454851c);
      (*pcVar5)();
    }
    unaff_x20[0xf] = lVar1;
    if (lVar1 < 0) {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,param_1,0,0);
      *param_1 = 6;
      _swift_willThrow();
      uVar7 = extraout_w8;
    }
    else {
      func_0x00010454d494();
      uStack_a8 = 0;
      uStack_e8 = 1;
      lStack_b0 = param_2;
      func_0x0001000b44c0(uStack_88,uStack_80);
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      puVar6 = auStack_108;
      (**(code **)(param_4 + 0x40))(puVar6,&UNK_1107863c8,&PTR_DAT_110786410,param_3,param_4);
      uVar4 = uStack_80;
      uVar3 = uStack_88;
      if (unaff_x21 == 0) {
        if ((lStack_e0 == param_2) && (cStack_e7 == '\x04')) {
          if (uStack_80 >> 0x3c < 0xf) {
            pcVar10 = *(code **)(param_4 + 0x38);
            func_0x00010006c00c(uStack_88,uStack_80);
            pcVar5 = (code *)auStack_128;
            (*pcVar10)(pcVar5,param_3,param_4);
            __s10Foundation4DataV6appendyyACF(uVar3,uVar4);
            (*pcVar5)(auStack_128,0);
            func_0x0001000b44c0(uVar3,uVar4);
          }
          lVar9 = unaff_x20[1];
          lVar2 = lVar9 - lStack_100;
          if (SBORROW8(lVar9,lStack_100)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x104548520);
            (*pcVar5)();
          }
          if (SBORROW8(lVar9,lVar2)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x104548524);
            (*pcVar5)();
          }
          *unaff_x20 = *unaff_x20 + lVar2;
          unaff_x20[1] = lVar9 - lVar2;
          if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x104548528);
            (*pcVar5)();
          }
          unaff_x20[0xf] = lVar8;
          if (unaff_x20[0xd] < lVar8) {
            __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                      ("Fatal error",0xb,2,0xd00000000000003b,0x800000010f207d10,
                       "SwiftProtobuf/BinaryDecoder.swift",0x21,2,0x5e,0);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x104548574);
            (*pcVar5)();
          }
          func_0x00010006c134(auStack_108);
          uVar7 = 1;
          goto LAB_1045484f4;
        }
        FUN_10454d3c4();
        _swift_allocError(&UNK_110786678,puVar6,0,0);
        *puVar6 = 1;
        _swift_willThrow();
      }
      func_0x00010006c134(auStack_108);
      uVar7 = extraout_w8_00;
    }
  }
  else {
    uVar7 = 0;
  }
LAB_1045484f4:
  return uVar7 & 1;
}



/* Entry: 104548574; end: 1045486ab;  */

void FUN_104548574(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_2 + -8);
  lVar3 = param_2;
  lVar4 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = (long)puVar6 - extraout_x12;
  (**(code **)(lVar4 + 0x10))(uVar5,lVar3,lVar4);
  uVar1 = uVar5;
  FUN_1045482e0(uVar5,*(undefined8 *)(unaff_x20 + 0x28),param_2,param_3);
  if ((unaff_x21 == 0) && ((uVar1 & 1) != 0)) {
    (**(code **)(lVar7 + 0x10))(puVar6,uVar5,param_2);
    uVar2 = 0;
    __sSaMa(0,param_2);
    __sSa6appendyyxnF(puVar6,uVar2);
    (**(code **)(lVar7 + 8))(uVar5,param_2);
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  else {
    (**(code **)(lVar7 + 8))(uVar5,param_2);
  }
  return;
}



/* Entry: 1045486ac; end: 104548f8b;  */

/* WARNING: Removing unreachable block (ram,0x000104548f80) */
/* WARNING: Removing unreachable block (ram,0x000104548b1c) */

void FUN_1045486ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar17;
  long extraout_x13;
  ulong uVar18;
  undefined8 extraout_x14;
  undefined1 uVar19;
  long unaff_x20;
  long unaff_x21;
  code *pcVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long lStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  lVar10 = *(long *)(param_4 + 8);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&lStack_1b0 - extraout_x8;
  lVar11 = *(long *)(param_5 + 8);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar11,param_3,&UNK_10e814078,&UNK_10e814088);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lVar22 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar14 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar25 = (undefined1 *)((lVar14 - extraout_x12) - extraout_x12_00);
  lVar6 = 0;
  __sSqMa(0,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar24 = puVar25 + (-extraout_x12_01 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    lStack_178 = lVar14 - extraout_x12;
    uStack_170 = extraout_x14;
    (**(code **)(lVar12 + 0x38))(puVar24,1,1,lVar3);
    lVar23 = *(long *)(lVar4 + -8);
    pcVar20 = *(code **)(lVar23 + 0x38);
    (*pcVar20)(puVar25,1,1,lVar4);
    uStack_58 = 0;
    puVar7 = &uStack_58;
    func_0x00010006b958();
    uVar18 = uStack_58;
    if (unaff_x21 == 0) {
      uVar21 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar19 = *(undefined1 *)(unaff_x20 + 0x70);
      uStack_e8 = 1;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_a8 = 1;
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_100 = uStack_58;
      uStack_f0 = 0;
      puVar8 = (undefined1 *)(unaff_x20 + 0x30);
      lStack_1b0 = lVar23;
      pcStack_1a8 = pcVar20;
      lStack_1a0 = lVar3;
      lStack_198 = lVar4;
      puStack_190 = puVar24;
      lStack_188 = lVar5;
      puStack_180 = puVar25;
      puStack_108 = puVar7;
      puStack_f8 = puVar7;
      func_0x00010006ae30(puVar8,&uStack_d8);
      lVar4 = lStack_188;
      puVar24 = puStack_190;
      lVar3 = lStack_198;
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_a0 = uVar21;
      uStack_98 = uVar19;
      puStack_f8 = puVar7;
      uVar21 = uStack_170;
      puVar7 = puStack_108;
      uVar15 = uStack_100;
joined_r0x0001045489d4:
      do {
        puStack_108 = puVar7;
        if ((long)uVar18 < 1) {
          uStack_f0 = 0;
          uStack_100 = uVar15;
          if (uVar18 == 0) {
            (**(code **)(extraout_x13 + 0x10))(uVar21,puVar24,lVar6);
            lVar5 = lStack_1a0;
            pcVar20 = *(code **)(lVar12 + 0x30);
            uVar9 = uVar21;
            (*pcVar20)(uVar21,1,lStack_1a0);
            if ((int)uVar9 == 1) {
              (**(code **)(lVar10 + 0x18))(lVar13,param_2);
              uVar9 = uVar21;
              (*pcVar20)(uVar21,1,lStack_1a0);
              if ((int)uVar9 != 1) {
                (**(code **)(extraout_x13 + 8))(uVar21,lVar6);
              }
            }
            else {
              (**(code **)(lVar12 + 0x20))(lVar13,uVar21,lVar5);
            }
            (**(code **)(lVar22 + 0x10))(lVar14,puStack_180,lVar4);
            lVar5 = lStack_1b0;
            pcVar20 = *(code **)(lStack_1b0 + 0x30);
            lVar23 = lVar14;
            (*pcVar20)(lVar14,1,lVar3);
            lVar12 = lStack_178;
            if ((int)lVar23 == 1) {
              (**(code **)(lVar11 + 0x18))(lStack_178,param_3);
              lVar5 = lVar14;
              (*pcVar20)(lVar14,1,lVar3);
              if ((int)lVar5 != 1) {
                (**(code **)(lVar22 + 8))(lVar14,lVar4);
              }
            }
            else {
              (**(code **)(lVar5 + 0x20))(lStack_178,lVar14,lVar3);
            }
            (*pcStack_1a8)(lVar12,0,1,lVar3);
            lVar5 = lStack_1a0;
            _swift_getAssociatedConformanceWitness
                      (lVar10,param_2,lStack_1a0,&UNK_10e814078,&UNK_10e814080);
            uVar21 = 0;
            __sSDMa(0,lVar5,lVar3,lVar10);
            __sSDyq_Sgxcis(lVar12,lVar13,uVar21);
            (**(code **)(lVar22 + 8))(puStack_180,lVar4);
            (**(code **)(extraout_x13 + 8))(puVar24,lVar6);
            func_0x00010006c134(&puStack_108);
            *(undefined1 *)(unaff_x20 + 0x20) = 1;
            return;
          }
          FUN_10454d3c4();
          _swift_allocError(&UNK_110786678,puVar8,0,0);
          *puVar8 = 0;
LAB_104548d1c:
          _swift_willThrow();
          (**(code **)(lVar22 + 8))(puStack_180,lVar4);
          (**(code **)(extraout_x13 + 8))(puVar24,lVar6);
          func_0x00010006c134(&puStack_108);
          return;
        }
        uStack_f0 = 0;
        uVar17 = (ulong)(char)*puStack_f8;
        uStack_100 = uVar18 - 1;
        puStack_108 = (ulong *)((long)puStack_f8 + 1);
        if ((long)uVar17 < 0) {
          puStack_108 = puVar7;
          if (1 < uVar18) {
            uVar17 = uVar17 & 0x7f;
            puVar16 = (ulong *)((long)puStack_f8 + 2);
            uVar18 = 7;
            while (uVar17 = ((ulong)*(byte *)((long)puVar16 + -1) & 0x7f) << (uVar18 & 0x3f) |
                            uVar17, (char)*(byte *)((long)puVar16 + -1) < '\0') {
              if (uStack_100 < 2) goto LAB_104548cf0;
              puVar16 = (ulong *)((long)puVar16 + 1);
              uStack_100 = uStack_100 - 1;
              bVar1 = 0x38 < uVar18;
              uVar18 = uVar18 + 7;
              if (bVar1) goto LAB_104548cf0;
            }
            uStack_100 = uStack_100 - 1;
            puStack_108 = puVar16;
            uVar15 = uStack_100;
            if (uVar17 < 0xffffffff) goto LAB_104548a84;
          }
LAB_104548cf0:
          uStack_100 = uVar15;
          FUN_10454d3c4();
          _swift_allocError(&UNK_110786678,puVar8,0,0);
          *puVar8 = 3;
          goto LAB_104548d1c;
        }
LAB_104548a84:
        uVar2 = (uint)uVar17 & 7;
        uVar15 = uStack_100;
        if (uVar17 < 8 || 5 < uVar2) goto LAB_104548cf0;
        uStack_e0 = uVar17 >> 3;
        if (uVar2 == 4) {
          uStack_e8 = CONCAT11(4,(undefined1)uStack_e8);
          goto LAB_104548cf0;
        }
        uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
        uStack_170 = uVar21;
        if (uStack_e0 == 2) {
          pcVar20 = *(code **)(lVar11 + 0x20);
          lVar5 = -0x20;
          puVar8 = puStack_180;
LAB_104548b08:
          (*pcVar20)(puVar8,&puStack_108,&UNK_1107863c8,&PTR_DAT_110786410,
                     *(undefined8 *)(&stack0xfffffffffffffef0 + lVar5));
          puStack_f8 = puStack_108;
          uVar21 = uStack_170;
          puVar7 = puStack_108;
          uVar15 = uStack_100;
          uVar18 = uStack_100;
          goto joined_r0x0001045489d4;
        }
        if (uStack_e0 == 1) {
          pcVar20 = *(code **)(lVar10 + 0x20);
          lVar5 = -0x10;
          puVar8 = puVar24;
          goto LAB_104548b08;
        }
        uVar18 = uStack_100 + ((long)puStack_108 - (long)puStack_f8);
        if (SCARRY8(uStack_100,(long)puStack_108 - (long)puStack_f8)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x104548f8c);
          (*pcVar20)();
        }
        uStack_100 = uVar18 - 1;
        puVar7 = puStack_f8;
        if ((long)uVar18 < 1) {
          uVar19 = 1;
LAB_104548f54:
          uStack_100 = uVar18;
          puStack_108 = puVar7;
          FUN_10454d3c4();
          _swift_allocError(&UNK_110786678,puVar8,0,0);
          *puVar8 = uVar19;
          goto LAB_104548d1c;
        }
        puVar8 = (undefined1 *)(long)(char)*puStack_f8;
        puStack_108 = (ulong *)((long)puStack_f8 + 1);
        if ((long)puVar8 < 0) {
          puStack_108 = puStack_f8;
          if (uVar18 != 1) {
            puVar8 = (undefined1 *)((ulong)puVar8 & 0x7f);
            puStack_108 = (ulong *)((long)puStack_f8 + 2);
            uVar15 = 7;
            while (puVar8 = (undefined1 *)
                            (((ulong)*(byte *)((long)puStack_108 + -1) & 0x7f) << (uVar15 & 0x3f) |
                            (ulong)puVar8), (char)*(byte *)((long)puStack_108 + -1) < '\0') {
              uVar19 = 3;
              if (uStack_100 < 2) goto LAB_104548f54;
              puStack_108 = (ulong *)((long)puStack_108 + 1);
              uStack_100 = uStack_100 - 1;
              bVar1 = 0x38 < uVar15;
              uVar15 = uVar15 + 7;
              if (bVar1) goto LAB_104548f54;
            }
            uStack_100 = uStack_100 - 1;
            uVar18 = uStack_100;
            if (puVar8 < (undefined1 *)0xffffffff) goto LAB_104548ba8;
          }
LAB_104548f48:
          uStack_100 = uVar18;
          uVar19 = 3;
          puVar7 = puStack_108;
          uVar18 = uStack_100;
          goto LAB_104548f54;
        }
LAB_104548ba8:
        uVar2 = (uint)puVar8 & 7;
        uVar18 = uStack_100;
        if (puVar8 < (undefined1 *)0x8 || 5 < uVar2) goto LAB_104548f48;
        uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
        uStack_e0 = (ulong)puVar8 >> 3;
        FUN_10454c1a4();
        puStack_f8 = puStack_108;
        uVar21 = uStack_170;
        puVar7 = puStack_108;
        uVar15 = uStack_100;
        uVar18 = uStack_100;
      } while( true );
    }
    (**(code **)(lVar22 + 8))(puVar25,lVar5);
    (**(code **)(extraout_x13 + 8))(puVar24,lVar6);
  }
  return;
}



/* Entry: 104548f8c; end: 104549c0f;  */

/* WARNING: Removing unreachable block (ram,0x0001045497c0) */
/* WARNING: Removing unreachable block (ram,0x000104549450) */
/* WARNING: Removing unreachable block (ram,0x000104549b4c) */

void FUN_104548f8c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long extraout_x8;
  undefined1 *puVar14;
  long lVar15;
  long extraout_x8_00;
  long lVar16;
  long lVar17;
  long extraout_x8_01;
  undefined1 *puVar18;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ulong uVar26;
  undefined1 uVar27;
  long unaff_x20;
  long unaff_x21;
  code *pcVar28;
  code *pcVar29;
  code *pcVar30;
  undefined1 *puVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  undefined1 auStack_1e0 [8];
  undefined1 *puStack_1d8;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  lVar12 = *(long *)(param_4 + 8);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_1e0 + -extraout_x8;
  lVar15 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  __sSqMa(0xff,param_3);
  lVar7 = 0;
  _swift_getTupleTypeMetadata2(0,lVar6,lVar6,0,0);
  lVar17 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = (undefined1 *)(lVar16 - extraout_x8_01);
  lVar34 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar34 + 0x40));
  lVar19 = (long)puVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar21 = lVar20 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = uVar21 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar35 = lVar22 - extraout_x12_02;
  lVar8 = 0;
  __sSqMa(0,lVar5);
  lVar32 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar32 + 0x40));
  lVar23 = lVar35 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar31 = (undefined1 *)(lVar23 - extraout_x12_03);
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    (**(code **)(lVar13 + 0x38))(puVar31,1,1,lVar5);
    pcVar28 = *(code **)(lVar15 + 0x38);
    (*pcVar28)(lVar35,1,1,param_3);
    uStack_58 = 0;
    puVar9 = &uStack_58;
    func_0x00010006b958();
    uVar26 = uStack_58;
    if (unaff_x21 == 0) {
      uVar33 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar27 = *(undefined1 *)(unaff_x20 + 0x70);
      uStack_e8 = 1;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_a8 = 1;
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_100 = uStack_58;
      uStack_f0 = 0;
      puVar10 = (undefined1 *)(unaff_x20 + 0x30);
      puStack_108 = puVar9;
      puStack_f8 = puVar9;
      func_0x00010006ae30(puVar10,&uStack_d8);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_a0 = uVar33;
      uStack_98 = uVar27;
      puVar4 = puStack_108;
      uVar24 = uStack_100;
joined_r0x000104549330:
      puStack_f8 = puVar9;
      puStack_108 = puVar4;
      if ((long)uVar26 < 1) {
        uStack_f0 = 0;
        uStack_100 = uVar24;
        if (uVar26 == 0) {
          (**(code **)(lVar32 + 0x10))(lVar23,puVar31,lVar8);
          pcVar30 = *(code **)(lVar13 + 0x30);
          lVar7 = lVar23;
          (*pcVar30)(lVar23,1,lVar5);
          if ((int)lVar7 == 1) {
            (**(code **)(lVar12 + 0x18))(puVar14,param_2);
            lVar7 = lVar23;
            (*pcVar30)(lVar23,1,lVar5);
            if ((int)lVar7 != 1) {
              (**(code **)(lVar32 + 8))(lVar23,lVar8);
            }
          }
          else {
            (**(code **)(lVar13 + 0x20))(puVar14,lVar23,lVar5);
          }
          (**(code **)(lVar34 + 0x10))(lVar19,lVar35,lVar6);
          pcVar30 = *(code **)(lVar15 + 0x30);
          lVar7 = lVar19;
          (*pcVar30)(lVar19,1,param_3);
          if ((int)lVar7 == 1) {
            (**(code **)(param_5 + 0x18))(lVar20,param_3);
            lVar7 = lVar19;
            (*pcVar30)(lVar19,1,param_3);
            if ((int)lVar7 != 1) {
              (**(code **)(lVar34 + 8))(lVar19,lVar6);
            }
          }
          else {
            (**(code **)(lVar15 + 0x20))(lVar20,lVar19,param_3);
          }
          (*pcVar28)(lVar20,0,1,param_3);
          _swift_getAssociatedConformanceWitness(lVar12,param_2,lVar5,&UNK_10e814078,&UNK_10e814080)
          ;
          uVar33 = 0;
          __sSDMa(0,lVar5,param_3,lVar12);
          __sSDyq_Sgxcis(lVar20,puVar14,uVar33);
          (**(code **)(lVar34 + 8))(lVar35,lVar6);
          (**(code **)(lVar32 + 8))(puVar31,lVar8);
          func_0x00010006c134(&puStack_108);
          *(undefined1 *)(unaff_x20 + 0x20) = 1;
          return;
        }
        FUN_10454d3c4();
        _swift_allocError(&UNK_110786678,puVar10,0,0);
        *puVar10 = 0;
LAB_10454993c:
        _swift_willThrow();
        pcVar28 = *(code **)(lVar34 + 8);
LAB_104549964:
        (*pcVar28)(lVar35,lVar6);
        pcVar28 = *(code **)(lVar32 + 8);
        goto LAB_104549978;
      }
      uStack_f0 = 0;
      uVar25 = (ulong)(char)*puStack_f8;
      uStack_100 = uVar26 - 1;
      puStack_108 = (ulong *)((long)puStack_f8 + 1);
      if ((long)uVar25 < 0) {
        puStack_108 = puVar4;
        if (1 < uVar26) {
          uVar25 = uVar25 & 0x7f;
          puVar9 = (ulong *)((long)puStack_f8 + 2);
          uVar26 = 7;
          while (uVar25 = ((ulong)*(byte *)((long)puVar9 + -1) & 0x7f) << (uVar26 & 0x3f) | uVar25,
                (char)*(byte *)((long)puVar9 + -1) < '\0') {
            if (uStack_100 < 2) goto LAB_104549918;
            puVar9 = (ulong *)((long)puVar9 + 1);
            uStack_100 = uStack_100 - 1;
            bVar1 = 0x38 < uVar26;
            uVar26 = uVar26 + 7;
            if (bVar1) goto LAB_104549918;
          }
          uStack_100 = uStack_100 - 1;
          puStack_108 = puVar9;
          uVar24 = uStack_100;
          if (uVar25 < 0xffffffff) goto LAB_1045493dc;
        }
LAB_104549918:
        uStack_100 = uVar24;
        FUN_10454d3c4();
        _swift_allocError(&UNK_110786678,puVar10,0,0);
        *puVar10 = 3;
        goto LAB_10454993c;
      }
LAB_1045493dc:
      uVar2 = (uint)uVar25 & 7;
      uVar24 = uStack_100;
      if (uVar25 < 8 || 5 < uVar2) goto LAB_104549918;
      uStack_e0 = uVar25 >> 3;
      if (uVar2 == 4) {
        uStack_e8 = CONCAT11(4,(undefined1)uStack_e8);
        goto LAB_104549918;
      }
      uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
      if (uStack_e0 != 2) {
        if (uStack_e0 == 1) {
          puVar10 = puVar31;
          (**(code **)(lVar12 + 0x20))
                    (puVar31,&puStack_108,&UNK_1107863c8,&PTR_DAT_110786410,param_2);
          puVar9 = puStack_108;
          puVar4 = puStack_108;
          uVar24 = uStack_100;
          uVar26 = uStack_100;
          goto joined_r0x000104549330;
        }
        uVar26 = uStack_100 + ((long)puStack_108 - (long)puStack_f8);
        if (SCARRY8(uStack_100,(long)puStack_108 - (long)puStack_f8)) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x104549c10);
          (*pcVar28)();
        }
        uStack_100 = uVar26 - 1;
        puVar9 = puStack_f8;
        if ((long)uVar26 < 1) {
          uVar27 = 1;
        }
        else {
          puVar10 = (undefined1 *)(long)(char)*puStack_f8;
          puStack_108 = (ulong *)((long)puStack_f8 + 1);
          if ((long)puVar10 < 0) {
            puStack_108 = puStack_f8;
            if (uVar26 != 1) {
              puVar10 = (undefined1 *)((ulong)puVar10 & 0x7f);
              puStack_108 = (ulong *)((long)puStack_f8 + 2);
              uVar24 = 7;
              while (puVar10 = (undefined1 *)
                               (((ulong)*(byte *)((long)puStack_108 + -1) & 0x7f) << (uVar24 & 0x3f)
                               | (ulong)puVar10), (char)*(byte *)((long)puStack_108 + -1) < '\0') {
                uVar27 = 3;
                if (uStack_100 < 2) goto LAB_104549b90;
                puStack_108 = (ulong *)((long)puStack_108 + 1);
                uStack_100 = uStack_100 - 1;
                bVar1 = 0x38 < uVar24;
                uVar24 = uVar24 + 7;
                if (bVar1) goto LAB_104549b90;
              }
              uStack_100 = uStack_100 - 1;
              uVar26 = uStack_100;
              if (puVar10 < (undefined1 *)0xffffffff) goto LAB_104549790;
            }
          }
          else {
LAB_104549790:
            uVar2 = (uint)puVar10 & 7;
            uVar26 = uStack_100;
            if ((undefined1 *)0x7 < puVar10 && uVar2 < 6) {
              uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
              uStack_e0 = (ulong)puVar10 >> 3;
              FUN_10454c1a4();
              puVar9 = puStack_108;
              puVar4 = puStack_108;
              uVar24 = uStack_100;
              uVar26 = uStack_100;
              goto joined_r0x000104549330;
            }
          }
          uStack_100 = uVar26;
          uVar27 = 3;
          puVar9 = puStack_108;
          uVar26 = uStack_100;
        }
LAB_104549b90:
        uStack_100 = uVar26;
        puStack_108 = puVar9;
        FUN_10454d3c4();
        _swift_allocError(&UNK_110786678,puVar10,0,0);
        *puVar10 = uVar27;
        _swift_willThrow();
        pcVar28 = *(code **)(lVar34 + 8);
        goto LAB_104549964;
      }
      FUN_10454733c(lVar35,param_3,param_5);
      puStack_1d8 = puVar31;
      (*pcVar28)(lVar22,1,1,param_3);
      iVar3 = *(int *)(lVar7 + 0x30);
      pcVar30 = *(code **)(lVar34 + 0x10);
      (*pcVar30)(puVar18,lVar35,lVar6);
      (*pcVar30)(puVar18 + iVar3,lVar22,lVar6);
      pcVar29 = *(code **)(lVar15 + 0x30);
      puVar31 = puVar18;
      (*pcVar29)(puVar18,1,param_3);
      puVar10 = puVar18;
      if ((int)puVar31 != 1) {
        (*pcVar30)(uVar21,puVar18,lVar6);
        puVar31 = puVar18 + iVar3;
        (*pcVar29)(puVar31,1,param_3);
        if ((int)puVar31 == 1) {
          (**(code **)(lVar34 + 8))(lVar22,lVar6);
          (**(code **)(lVar15 + 8))(uVar21,param_3);
LAB_104549634:
          (**(code **)(lVar17 + 8))(puVar18,lVar7);
          puVar31 = puStack_1d8;
          puVar9 = puStack_108;
          puVar4 = puStack_108;
          uVar24 = uStack_100;
          uVar26 = uStack_100;
        }
        else {
          (**(code **)(lVar15 + 0x20))(lVar16,puVar18 + iVar3,param_3);
          uVar11 = uVar21;
          __sSQ2eeoiySbx_xtFZTj(uVar21,lVar16,param_3,*(undefined8 *)(*(long *)(param_5 + 8) + 8));
          pcVar29 = *(code **)(lVar15 + 8);
          (*pcVar29)(lVar16,param_3);
          pcVar30 = *(code **)(lVar34 + 8);
          (*pcVar30)(lVar22,lVar6);
          (*pcVar29)(uVar21,param_3);
          (*pcVar30)(puVar18,lVar6);
          puVar31 = puStack_1d8;
          puVar9 = puStack_108;
          puVar4 = puStack_108;
          uVar24 = uStack_100;
          uVar26 = uStack_100;
          if (((uVar25 & 7) == 0) && (puVar9 = puStack_108, (uVar11 & 1) != 0)) goto LAB_104549be8;
        }
        goto joined_r0x000104549330;
      }
      pcVar30 = *(code **)(lVar34 + 8);
      (*pcVar30)(lVar22,lVar6);
      puVar31 = puVar18 + iVar3;
      (*pcVar29)(puVar31,1,param_3);
      if ((int)puVar31 != 1) goto LAB_104549634;
      (*pcVar30)(puVar18,lVar6);
      puVar31 = puStack_1d8;
      puVar9 = puStack_108;
      puVar4 = puStack_108;
      uVar24 = uStack_100;
      uVar26 = uStack_100;
      if ((uVar25 & 7) != 0) goto joined_r0x000104549330;
LAB_104549be8:
      (*pcVar30)(lVar35,lVar6);
      pcVar28 = *(code **)(lVar32 + 8);
      puVar31 = puStack_1d8;
LAB_104549978:
      (*pcVar28)(puVar31,lVar8);
      func_0x00010006c134(&puStack_108);
    }
    else {
      (**(code **)(lVar34 + 8))(lVar35,lVar6);
      (**(code **)(lVar32 + 8))(puVar31,lVar8);
    }
  }
  return;
}



/* Entry: 104549c10; end: 10454a45b;  */

void FUN_104549c10(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  undefined1 *puVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar15;
  long extraout_x13;
  ulong uVar16;
  undefined8 extraout_x14;
  undefined1 uVar17;
  long unaff_x20;
  long unaff_x21;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  code *pcVar23;
  undefined1 auStack_1a0 [8];
  code *pcStack_198;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  lVar8 = *(long *)(param_4 + 8);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_1a0 + -extraout_x8;
  lVar4 = 0;
  __sSqMa(0,param_3);
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar22 = (undefined1 *)(lVar12 - extraout_x12_00);
  lVar5 = 0;
  __sSqMa(0,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = puVar22 + (-extraout_x12_01 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    (**(code **)(lVar9 + 0x38))(puVar21,1,1,lVar3);
    lVar19 = *(long *)(param_3 + -8);
    pcVar23 = *(code **)(lVar19 + 0x38);
    (*pcVar23)(puVar22,1,1,param_3);
    uStack_58 = 0;
    puVar6 = &uStack_58;
    func_0x00010006b958();
    uVar16 = uStack_58;
    if (unaff_x21 == 0) {
      uVar20 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar17 = *(undefined1 *)(unaff_x20 + 0x70);
      uStack_e8 = 1;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_a8 = 1;
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_100 = uStack_58;
      uStack_f0 = 0;
      puVar7 = (undefined1 *)(unaff_x20 + 0x30);
      pcStack_198 = pcVar23;
      puStack_108 = puVar6;
      puStack_f8 = puVar6;
      func_0x00010006ae30(puVar7,&uStack_d8);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_a0 = uVar20;
      uStack_98 = uVar17;
      puStack_f8 = puVar6;
      puVar6 = puStack_108;
      uVar13 = uStack_100;
joined_r0x000104549ee0:
      do {
        puStack_108 = puVar6;
        if ((long)uVar16 < 1) {
          uStack_f0 = 0;
          uStack_100 = uVar13;
          if (uVar16 == 0) {
            (**(code **)(extraout_x13 + 0x10))(extraout_x14,puVar21,lVar5);
            pcVar23 = *(code **)(lVar9 + 0x30);
            uVar20 = extraout_x14;
            (*pcVar23)(extraout_x14,1,lVar3);
            if ((int)uVar20 == 1) {
              (**(code **)(lVar8 + 0x18))(puVar10,param_2);
              uVar20 = extraout_x14;
              (*pcVar23)(extraout_x14,1,lVar3);
              if ((int)uVar20 != 1) {
                (**(code **)(extraout_x13 + 8))(extraout_x14,lVar5);
              }
            }
            else {
              (**(code **)(lVar9 + 0x20))(puVar10,extraout_x14,lVar3);
            }
            (**(code **)(lVar18 + 0x10))(lVar11,puVar22,lVar4);
            pcVar23 = *(code **)(lVar19 + 0x30);
            lVar9 = lVar11;
            (*pcVar23)(lVar11,1,param_3);
            if ((int)lVar9 == 1) {
              (**(code **)(param_6 + 0x10))(lVar12,param_3);
              lVar9 = lVar11;
              (*pcVar23)(lVar11,1,param_3);
              if ((int)lVar9 != 1) {
                (**(code **)(lVar18 + 8))(lVar11,lVar4);
              }
            }
            else {
              (**(code **)(lVar19 + 0x20))(lVar12,lVar11,param_3);
            }
            (*pcStack_198)(lVar12,0,1,param_3);
            _swift_getAssociatedConformanceWitness
                      (lVar8,param_2,lVar3,&UNK_10e814078,&UNK_10e814080);
            uVar20 = 0;
            __sSDMa(0,lVar3,param_3,lVar8);
            __sSDyq_Sgxcis(lVar12,puVar10,uVar20);
            (**(code **)(lVar18 + 8))(puVar22,lVar4);
            (**(code **)(extraout_x13 + 8))(puVar21,lVar5);
            func_0x00010006c134(&puStack_108);
            *(undefined1 *)(unaff_x20 + 0x20) = 1;
            return;
          }
          FUN_10454d3c4();
          _swift_allocError(&UNK_110786678,puVar7,0,0);
          *puVar7 = 0;
LAB_10454a224:
          _swift_willThrow();
          (**(code **)(lVar18 + 8))(puVar22,lVar4);
          (**(code **)(extraout_x13 + 8))(puVar21,lVar5);
          func_0x00010006c134(&puStack_108);
          return;
        }
        uStack_f0 = 0;
        uVar15 = (ulong)(char)*puStack_f8;
        uStack_100 = uVar16 - 1;
        puStack_108 = (ulong *)((long)puStack_f8 + 1);
        if ((long)uVar15 < 0) {
          puStack_108 = puVar6;
          if (1 < uVar16) {
            uVar15 = uVar15 & 0x7f;
            puVar14 = (ulong *)((long)puStack_f8 + 2);
            uVar16 = 7;
            while (uVar15 = ((ulong)*(byte *)((long)puVar14 + -1) & 0x7f) << (uVar16 & 0x3f) |
                            uVar15, (char)*(byte *)((long)puVar14 + -1) < '\0') {
              if (uStack_100 < 2) goto LAB_10454a1fc;
              puVar14 = (ulong *)((long)puVar14 + 1);
              uStack_100 = uStack_100 - 1;
              bVar1 = 0x38 < uVar16;
              uVar16 = uVar16 + 7;
              if (bVar1) goto LAB_10454a1fc;
            }
            uStack_100 = uStack_100 - 1;
            puStack_108 = puVar14;
            uVar13 = uStack_100;
            if (uVar15 < 0xffffffff) goto LAB_104549f88;
          }
LAB_10454a1fc:
          uStack_100 = uVar13;
          FUN_10454d3c4();
          _swift_allocError(&UNK_110786678,puVar7,0,0);
          *puVar7 = 3;
          goto LAB_10454a224;
        }
LAB_104549f88:
        uVar2 = (uint)uVar15 & 7;
        uVar13 = uStack_100;
        if (uVar15 < 8 || 5 < uVar2) goto LAB_10454a1fc;
        uStack_e0 = uVar15 >> 3;
        if (uVar2 == 4) {
          uStack_e8 = CONCAT11(4,(undefined1)uStack_e8);
          goto LAB_10454a1fc;
        }
        uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
        if (uStack_e0 == 2) {
          puVar7 = puVar22;
          FUN_104547ed8(puVar22,param_3,param_6);
          puStack_f8 = puStack_108;
          puVar6 = puStack_108;
          uVar13 = uStack_100;
          uVar16 = uStack_100;
          goto joined_r0x000104549ee0;
        }
        if (uStack_e0 != 1) {
          uVar16 = uStack_100 + ((long)puStack_108 - (long)puStack_f8);
          if (SCARRY8(uStack_100,(long)puStack_108 - (long)puStack_f8)) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x10454a45c);
            (*pcVar23)();
          }
          uStack_100 = uVar16 - 1;
          puVar6 = puStack_f8;
          if ((long)uVar16 < 1) {
            uVar17 = 1;
          }
          else {
            puVar7 = (undefined1 *)(long)(char)*puStack_f8;
            puStack_108 = (ulong *)((long)puStack_f8 + 1);
            if ((long)puVar7 < 0) {
              puStack_108 = puStack_f8;
              if (uVar16 != 1) {
                puVar7 = (undefined1 *)((ulong)puVar7 & 0x7f);
                puStack_108 = (ulong *)((long)puStack_f8 + 2);
                uVar13 = 7;
                while (puVar7 = (undefined1 *)
                                (((ulong)*(byte *)((long)puStack_108 + -1) & 0x7f) <<
                                 (uVar13 & 0x3f) | (ulong)puVar7),
                      (char)*(byte *)((long)puStack_108 + -1) < '\0') {
                  uVar17 = 3;
                  if (uStack_100 < 2) goto LAB_10454a430;
                  puStack_108 = (ulong *)((long)puStack_108 + 1);
                  uStack_100 = uStack_100 - 1;
                  bVar1 = 0x38 < uVar13;
                  uVar13 = uVar13 + 7;
                  if (bVar1) goto LAB_10454a430;
                }
                uStack_100 = uStack_100 - 1;
                uVar16 = uStack_100;
                if (puVar7 < (undefined1 *)0xffffffff) goto LAB_10454a0a8;
              }
            }
            else {
LAB_10454a0a8:
              uVar2 = (uint)puVar7 & 7;
              uVar16 = uStack_100;
              if ((undefined1 *)0x7 < puVar7 && uVar2 < 6) {
                uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
                uStack_e0 = (ulong)puVar7 >> 3;
                FUN_10454c1a4();
                puStack_f8 = puStack_108;
                puVar6 = puStack_108;
                uVar13 = uStack_100;
                uVar16 = uStack_100;
                goto joined_r0x000104549ee0;
              }
            }
            uStack_100 = uVar16;
            uVar17 = 3;
            puVar6 = puStack_108;
            uVar16 = uStack_100;
          }
LAB_10454a430:
          uStack_100 = uVar16;
          puStack_108 = puVar6;
          FUN_10454d3c4();
          _swift_allocError(&UNK_110786678,puVar7,0,0);
          *puVar7 = uVar17;
          goto LAB_10454a224;
        }
        puVar7 = puVar21;
        (**(code **)(lVar8 + 0x20))(puVar21,&puStack_108,&UNK_1107863c8,&PTR_DAT_110786410,param_2);
        puStack_f8 = puStack_108;
        puVar6 = puStack_108;
        uVar13 = uStack_100;
        uVar16 = uStack_100;
      } while( true );
    }
    (**(code **)(lVar18 + 8))(puVar22,lVar4);
    (**(code **)(extraout_x13 + 8))(puVar21,lVar5);
  }
  return;
}



/* Entry: 10454a45c; end: 10454a5cf;  */

void FUN_10454a45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  lVar3 = *(long *)(unaff_x20 + 0x48);
  if (lVar3 == 0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x50);
    uStack_b8 = param_1;
    func_0x0001000a8868(unaff_x20 + 0x30,lVar3);
    lVar2 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
    (**(code **)(lVar2 + 0x10))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar4 + 8))(&uStack_b0,param_2,param_3,param_4,lVar3,lVar4);
    (**(code **)(lVar2 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    if (lStack_98 != 0) {
      func_0x000100dba7ec(&uStack_b0,auStack_88);
      pcVar1 = (code *)&uStack_b0;
      FUN_10454d0d0(pcVar1,param_4);
      FUN_10454a5d0(param_4);
      (*pcVar1)(&uStack_b0,0);
      func_0x0001000834e4(auStack_88);
      return;
    }
  }
  FUN_10454d404(&uStack_b0,0x113084df8,&UNK_10dd16980);
  return;
}



/* Entry: 10454a5d0; end: 10454a77b;  */

void FUN_10454a5d0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [24];
  long lStack_60;
  
  func_0x00010454d4c8(param_1,auStack_78,0x112db4800,&UNK_10d95efc0);
  lVar4 = lStack_60;
  func_0x00010454d404(auStack_78,0x112db4800,&UNK_10d95efc0);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar4 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar1);
    (**(code **)(lVar4 + 0x20))(auStack_78,param_2,&UNK_1107863c8,&PTR_DAT_110786410,uVar1,lVar4);
    if (unaff_x21 != 0) {
      return;
    }
    func_0x00010454d444(auStack_78,param_1);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10454a77c);
      (*pcVar2)();
    }
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x0001000c6518(param_1,lVar4);
    (**(code **)(lVar5 + 0x28))(param_2,&UNK_1107863c8,&PTR_DAT_110786410,lVar4,lVar5);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x00010454d4c8(param_1,auStack_78,0x112db4800,&UNK_10d95efc0);
    puVar3 = auStack_78;
    func_0x00010454d404(puVar3,0x112db4800,&UNK_10d95efc0);
    if (lStack_60 == 0) {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,puVar3,0,0);
      *puVar3 = 5;
      _swift_willThrow();
    }
  }
  return;
}



/* Entry: 10454a77c; end: 10454accf;  */

/* WARNING: Removing unreachable block (ram,0x00010454aa1c) */
/* WARNING: Removing unreachable block (ram,0x00010454ab80) */

void FUN_10454a77c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  ppuVar2 = &puStack_160;
  puVar3 = param_1;
  uVar5 = param_2;
  func_0x00010006b154();
  puStack_158 = param_1;
  if (unaff_x21 == 0) {
    while (((uint)uVar5 & 0xff) != 1) {
      if ((puVar3 == (undefined8 *)0x1) && (*(char *)((long)unaff_x20 + 0x21) == '\x03')) {
        lVar6 = unaff_x20[0xf];
        lVar9 = lVar6 + -1;
        if (SBORROW8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10454ac6c);
          (*pcVar1)();
        }
        unaff_x20[0xf] = lVar9;
        if (lVar9 < 0) {
          FUN_10454d3c4();
          _swift_allocError(&UNK_110786678,puVar3,0,0);
          *(undefined1 *)puVar3 = 6;
          _swift_willThrow();
          return;
        }
        func_0x00010454d494();
        uStack_f8 = 1;
        uStack_f0 = 0;
        uStack_130 = 1;
        puVar3 = param_1;
        uVar5 = param_2;
        FUN_10454acd0(param_1,param_2,param_3);
        if (((ulong)puVar3 & 0xff) == 0) {
          lVar7 = unaff_x20[1];
          lVar8 = lVar7 - lStack_148;
          if (SBORROW8(lVar7,lStack_148)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10454ac74);
            (*pcVar1)();
          }
          if (SBORROW8(lVar7,lVar8)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10454ac78);
            (*pcVar1)();
          }
          *unaff_x20 = *unaff_x20 + lVar8;
          unaff_x20[1] = lVar7 - lVar8;
          *(undefined1 *)(unaff_x20 + 4) = 1;
        }
        else if (((uint)puVar3 & 0xff) != 1) {
          FUN_10454d3c4();
          _swift_allocError(&UNK_110786678,puVar3,0,0);
          *(undefined1 *)puVar3 = 3;
          _swift_willThrow();
          func_0x00010006c134(&uStack_150);
          return;
        }
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10454ac70);
          (*pcVar1)();
        }
        unaff_x20[0xf] = lVar6;
        if (unaff_x20[0xd] < lVar6) {
          *(undefined4 *)((long)ppuVar2 + -8) = 0;
          *(undefined8 *)((long)ppuVar2 + -0x10) = 0x5e;
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                    ("Fatal error",0xb,2,0xd00000000000003b,0x800000010f207d10,
                     "SwiftProtobuf/BinaryDecoder.swift",0x21,2);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10454acd0);
          (*pcVar1)();
        }
        puVar3 = &uStack_150;
        func_0x00010006c134();
      }
      else if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
        lVar9 = unaff_x20[9];
        if (lVar9 == 0) {
          uStack_70 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          lVar7 = unaff_x20[10];
          func_0x0001000a8868(unaff_x20 + 6,lVar9);
          lVar8 = *(long *)(lVar9 + -8);
          puStack_160 = (undefined1 *)ppuVar2;
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
          lVar6 = (long)ppuVar2 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar8 + 0x10))(lVar6);
          (**(code **)(lVar7 + 8))(&uStack_90,param_2,param_3,puVar3,lVar9,lVar7);
          param_1 = puStack_158;
          (**(code **)(lVar8 + 8))(lVar6,lVar9);
          ppuVar2 = (undefined1 **)puStack_160;
          if (lStack_78 != 0) {
            func_0x000100dba7ec(&uStack_90,&uStack_150);
            pcVar1 = (code *)auStack_b0;
            FUN_10454d0d0();
            func_0x00010454d4c8(puVar3,&uStack_90,0x112db4800,&UNK_10d95efc0);
            lVar9 = lStack_78;
            func_0x00010454d404(&uStack_90,0x112db4800,&UNK_10d95efc0);
            if (lVar9 == 0) {
              lVar9 = CONCAT71(uStack_12f,uStack_130);
              func_0x0001000a8868(&uStack_150,uStack_138);
              (**(code **)(lVar9 + 0x20))(&uStack_90);
              func_0x00010454d444(&uStack_90,puVar3);
            }
            else {
              if (puVar3[3] == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10454ac7c);
                (*pcVar1)();
              }
              lVar9 = puVar3[4];
              func_0x0001000c6518(puVar3,puVar3[3]);
              (**(code **)(lVar9 + 0x28))();
            }
            if ((char)unaff_x20[4] != '\x01') {
              puVar4 = auStack_b0;
              (*pcVar1)(puVar4,0);
              FUN_10454d3c4();
              _swift_allocError(&UNK_110786678,puVar4,0,0);
              *puVar4 = 3;
              _swift_willThrow();
              func_0x0001000834e4(&uStack_150);
              return;
            }
            func_0x00010454d4c8(puVar3,&uStack_90,0x112db4800,&UNK_10d95efc0);
            lVar9 = lStack_78;
            puVar3 = &uStack_90;
            func_0x00010454d404(puVar3,0x112db4800,&UNK_10d95efc0);
            if (lVar9 == 0) {
              FUN_10454d3c4();
              _swift_allocError(&UNK_110786678,puVar3,0,0);
              *(undefined1 *)puVar3 = 5;
              _swift_willThrow();
              (*pcVar1)(auStack_b0,0);
              func_0x0001000834e4(&uStack_150);
              return;
            }
            uVar5 = 0;
            (*pcVar1)(auStack_b0);
            puVar3 = &uStack_150;
            func_0x0001000834e4();
            param_1 = puStack_158;
            goto LAB_10454a810;
          }
        }
        puVar3 = &uStack_90;
        uVar5 = 0x113084df8;
        func_0x00010454d404(puVar3,0x113084df8,&UNK_10dd16980);
      }
LAB_10454a810:
      func_0x00010006b154();
    }
  }
  return;
}



/* Entry: 10454acd0; end: 10454bf1f;  */

/* WARNING: Removing unreachable block (ram,0x00010454be18) */
/* WARNING: Removing unreachable block (ram,0x00010454b718) */
/* WARNING: Removing unreachable block (ram,0x00010454b80c) */
/* WARNING: Removing unreachable block (ram,0x00010454b170) */
/* WARNING: Removing unreachable block (ram,0x00010454b86c) */
/* WARNING: Removing unreachable block (ram,0x00010454be5c) */

void FUN_10454acd0(undefined6 *param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined6 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  ulong uVar11;
  long extraout_x8;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  undefined1 auStack_2a0 [8];
  code *pcStack_298;
  ulong uStack_290;
  code *pcStack_288;
  code *pcStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined8 uStack_258;
  undefined6 *puStack_250;
  code *pcStack_248;
  undefined1 uStack_23e;
  undefined1 uStack_23d;
  undefined1 uStack_23c;
  undefined1 uStack_23b;
  undefined1 uStack_23a;
  undefined1 uStack_239;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined1 uStack_236;
  undefined1 uStack_235;
  undefined1 uStack_234;
  undefined1 uStack_233;
  undefined1 uStack_232;
  undefined1 uStack_231;
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [24];
  long lStack_1f8;
  undefined1 auStack_1e0 [56];
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  uint6 uStack_168;
  byte bStack_162;
  undefined1 uStack_161;
  undefined1 *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puVar6 = param_1;
  pcVar4 = param_2;
  func_0x00010006b154();
  if (unaff_x21 == 0) {
    lVar20 = 0;
    pcStack_248 = (code *)((ulong)pcStack_248 & 0xffffffff00000000);
    pcVar17 = (code *)0xf000000000000000;
    uStack_268 = 0xf000000000000000;
    uStack_270 = 0;
    pcStack_260 = param_2;
    uStack_258 = param_3;
    puStack_250 = param_1;
LAB_10454ad9c:
    do {
      if (((uint)pcVar4 & 0xff) == 1) goto LAB_10454bb98;
      if (puVar6 != (undefined6 *)0x2) {
        if (puVar6 == (undefined6 *)0x3) {
          if (((ulong)pcStack_248 & 1) != 0) {
            if (*(char *)((long)unaff_x20 + 0x21) != '\x02') {
LAB_10454bbcc:
              FUN_10454d404(&uStack_a0,0x113084df8,&UNK_10dd16980);
              func_0x0001000b44c0(lVar20,pcVar17);
              goto LAB_10454bc78;
            }
            if (unaff_x20[3] == 0) {
              pcVar21 = (char *)unaff_x20[2];
              lVar16 = unaff_x20[1] + (*unaff_x20 - (long)pcVar21);
              if (SCARRY8(unaff_x20[1],*unaff_x20 - (long)pcVar21)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10454beec);
                (*pcVar4)();
              }
              *unaff_x20 = (long)pcVar21;
              unaff_x20[1] = lVar16;
              uVar11 = lVar16 - 1;
              if (lVar16 < 1) goto LAB_10454bc00;
              puVar6 = (undefined6 *)(long)*pcVar21;
              if ((long)puVar6 < 0) {
                if (lVar16 != 1) {
                  puVar6 = (undefined6 *)((ulong)puVar6 & 0x7f);
                  pcVar21 = pcVar21 + 2;
                  uVar15 = 7;
                  while (puVar6 = (undefined6 *)
                                  (((ulong)(byte)pcVar21[-1] & 0x7f) << (uVar15 & 0x3f) |
                                  (ulong)puVar6), pcVar21[-1] < '\0') {
                    if (uVar11 < 2) goto LAB_10454bb70;
                    pcVar21 = pcVar21 + 1;
                    uVar11 = uVar11 - 1;
                    bVar5 = 0x38 < uVar15;
                    uVar15 = uVar15 + 7;
                    if (bVar5) goto LAB_10454bb70;
                  }
                  *unaff_x20 = (long)pcVar21;
                  unaff_x20[1] = uVar11 - 1;
                  if (puVar6 < (undefined6 *)0xffffffff) goto LAB_10454b824;
                }
              }
              else {
                *unaff_x20 = (long)(pcVar21 + 1);
                unaff_x20[1] = uVar11;
LAB_10454b824:
                uVar1 = (uint)puVar6 & 7;
                if ((undefined6 *)0x7 < puVar6 && uVar1 < 6) {
                  *(char *)((long)unaff_x20 + 0x21) = (char)uVar1;
                  unaff_x20[5] = (ulong)puVar6 >> 3;
                  FUN_10454c1a4();
                  unaff_x20[3] = *unaff_x20;
                  goto LAB_10454b854;
                }
              }
              goto LAB_10454bb70;
            }
            *unaff_x20 = unaff_x20[3];
LAB_10454b854:
            *(undefined1 *)(unaff_x20 + 4) = 1;
LAB_10454b85c:
            func_0x00010006b154();
            pcStack_248 = (code *)CONCAT44(pcStack_248._4_4_,1);
            goto LAB_10454ad9c;
          }
          func_0x00010454d4c8(&uStack_a0,auStack_210,0x113084df8,&UNK_10dd16980);
          if (lStack_1f8 != 0) {
            lStack_278 = lVar20;
            func_0x000100dba7ec(auStack_210,&uStack_170);
            lVar20 = lStack_150;
            lVar16 = lStack_158;
            func_0x0001000a8868(&uStack_170,lStack_158);
            (**(code **)(lVar20 + 8))(lVar16,lVar20);
            pcVar4 = (code *)auStack_c8;
            FUN_10454d0d0();
            pcStack_248 = pcVar4;
            func_0x00010454d4c8(lVar16,auStack_210,0x112db4800,&UNK_10d95efc0);
            lVar20 = lStack_1f8;
            FUN_10454d404(auStack_210,0x112db4800,&UNK_10d95efc0);
            lVar22 = lStack_150;
            if (lVar20 == 0) {
              func_0x0001000a8868(&uStack_170,lStack_158);
              (**(code **)(lVar22 + 0x20))(auStack_210);
              func_0x00010454d444(auStack_210,lVar16);
            }
            else {
              if (*(long *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10454bf14);
                (*pcVar4)();
              }
              lVar20 = *(long *)(lVar16 + 0x20);
              func_0x0001000c6518(lVar16,*(long *)(lVar16 + 0x18));
              (**(code **)(lVar20 + 0x28))();
            }
            lVar20 = lStack_278;
            if ((char)unaff_x20[4] == '\x01') {
              func_0x00010454d4c8(lVar16,auStack_210,0x112db4800,&UNK_10d95efc0);
              lVar16 = lStack_1f8;
              puVar7 = auStack_210;
              FUN_10454d404(puVar7,0x112db4800,&UNK_10d95efc0);
              if (lVar16 != 0) {
                pcVar4 = (code *)0x0;
                (*pcStack_248)(auStack_c8);
                puVar6 = &uStack_170;
                func_0x0001000834e4();
                goto LAB_10454b85c;
              }
              FUN_10454d3c4();
              _swift_allocError(&UNK_110786678,puVar7,0,0);
              *puVar7 = 5;
              _swift_willThrow();
              (*pcStack_248)(auStack_c8,0);
              func_0x0001000b44c0(lVar20,pcVar17);
              FUN_10454d404(&uStack_a0,0x113084df8,&UNK_10dd16980);
              puVar6 = &uStack_170;
LAB_10454bea0:
              func_0x0001000834e4(puVar6);
            }
            else {
              (*pcStack_248)(auStack_c8,0);
              FUN_10454d404(&uStack_a0,0x113084df8,&UNK_10dd16980);
              func_0x0001000b44c0(lVar20,pcVar17);
              puVar6 = &uStack_170;
LAB_10454be08:
              func_0x0001000834e4(puVar6);
            }
            goto LAB_10454bc78;
          }
          puVar7 = auStack_210;
          FUN_10454d404(puVar7,0x113084df8,&UNK_10dd16980);
          if (*(char *)((long)unaff_x20 + 0x21) != '\x02') goto LAB_10454bbcc;
          lVar16 = unaff_x20[1];
          uVar11 = lVar16 - 1;
          if (lVar16 < 1) goto LAB_10454bea8;
          pcVar13 = (char *)*unaff_x20;
          pcVar21 = pcVar13 + 1;
          uVar15 = (ulong)*pcVar13;
          if (-1 < (long)uVar15) {
            *unaff_x20 = (long)pcVar21;
            unaff_x20[1] = uVar11;
LAB_10454b91c:
            if (uVar11 == 0) {
              if (uVar15 != 0) goto LAB_10454bea8;
              *unaff_x20 = (long)pcVar21;
              unaff_x20[1] = 0;
LAB_10454b994:
              uVar11 = 0;
              puVar6 = (undefined6 *)0x0;
              *(undefined1 *)(unaff_x20 + 4) = 1;
              pcStack_248 = (code *)0xc000000000000000;
              lVar16 = 1;
            }
            else {
              if (uVar11 < uVar15) {
LAB_10454bea8:
                uVar9 = 1;
                goto LAB_10454beb4;
              }
              *unaff_x20 = (long)(pcVar21 + uVar15);
              unaff_x20[1] = uVar11 - uVar15;
              if (uVar15 == 0) goto LAB_10454b994;
              if (uVar15 < 0xf) {
                uStack_168 = 0;
                uStack_170 = 0;
                uStack_16a = 0;
                bStack_162 = (byte)uVar15;
                _memmove(&uStack_170,pcVar21,uVar15);
                puVar6 = (undefined6 *)CONCAT26(uStack_16a,uStack_170);
                uVar15 = (ulong)bStack_162;
                pcStack_248 = (code *)((ulong)pcStack_298 & 0xf00000000000000 | (ulong)uStack_168 |
                                      uVar15 << 0x30);
                pcStack_298 = pcStack_248;
              }
              else {
                __s10Foundation13__DataStorageCMa();
                _swift_allocObject();
                __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(pcVar21,uVar15);
                puVar6 = (undefined6 *)(uVar15 << 0x20);
                pcStack_248 = (code *)((ulong)pcVar21 | 0x4000000000000000);
              }
              *(undefined1 *)(unaff_x20 + 4) = 1;
              if (uVar15 < 0x80) {
                lVar16 = 1;
              }
              else if (uVar15 < 0x200000) {
                if (uVar15 < 0x4000) {
                  lVar16 = 2;
                }
                else {
                  lVar16 = 3;
                }
              }
              else if (uVar15 >> 0x1c == 0) {
                lVar16 = 4;
              }
              else {
                lVar16 = 5;
              }
              uVar1 = (uint)((ulong)pcStack_248 >> 0x20);
              uVar10 = uVar1 >> 0x1e;
              if (uVar1 >> 0x1e < 2) {
                if (uVar10 == 0) {
                  uVar11 = (ulong)pcStack_248 >> 0x30 & 0xff;
                }
                else {
                  iVar12 = (int)((ulong)puVar6 >> 0x20);
                  if (SBORROW4(iVar12,(int)puVar6)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10454bf10);
                    (*pcVar4)();
                  }
                  uVar11 = (ulong)(iVar12 - (int)puVar6);
                }
              }
              else if (uVar10 == 2) {
                uVar11 = *(long *)(puVar6 + 3) - *(long *)(puVar6 + 2);
                if (SBORROW8(*(long *)(puVar6 + 3),*(long *)(puVar6 + 2))) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10454bf0c);
                  (*pcVar4)();
                }
              }
              else {
                uVar11 = 0;
              }
            }
            uVar15 = lVar16 + uVar11;
            if (SCARRY8(lVar16,uVar11)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10454bf04);
              (*pcVar4)();
            }
            if (uVar15 == 0) {
              lVar16 = 0;
              uVar11 = 0xc000000000000000;
            }
            else if ((long)uVar15 < 0xf) {
              if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10454bf08);
                (*pcVar4)();
              }
              lVar16 = 0;
              uVar11 = uStack_290 & 0xf00000000000000 | (uVar15 & 0xff) << 0x30;
              uStack_290 = uVar11;
            }
            else {
              __s10Foundation13__DataStorageCMa();
              _swift_allocObject();
              uVar11 = uVar15;
              __s10Foundation13__DataStorageC6lengthACSi_tcfc();
              if (uVar15 < 0x7fffffff) {
                lVar16 = uVar15 << 0x20;
                uVar11 = uVar11 | 0x4000000000000000;
              }
              else {
                lVar16 = 0;
                __s10Foundation4DataV14RangeReferenceCMa();
                _swift_allocObject();
                *(undefined8 *)(lVar16 + 0x10) = 0;
                *(ulong *)(lVar16 + 0x18) = uVar15;
                uVar11 = uVar11 | 0x8000000000000000;
              }
            }
            pcVar4 = pcStack_248;
            uStack_170 = (undefined6)lVar16;
            uStack_16a = (undefined2)((ulong)lVar16 >> 0x30);
            uStack_168 = (uint6)uVar11;
            bStack_162 = (byte)(uVar11 >> 0x30);
            uStack_161 = (undefined1)(uVar11 >> 0x38);
            func_0x00010006c00c(puVar6,pcStack_248);
            FUN_10454ccbc(&uStack_170,puVar6,pcVar4);
            func_0x0001000b44c0(lVar20,pcVar17);
            func_0x00010006c090();
            lVar20 = CONCAT26(uStack_16a,uStack_170);
            pcVar17 = (code *)CONCAT17(uStack_161,CONCAT16(bStack_162,uStack_168));
            goto LAB_10454b85c;
          }
          if (lVar16 != 1) {
            uVar15 = uVar15 & 0x7f;
            pcVar21 = pcVar13 + 2;
            uVar14 = 7;
            while (uVar15 = ((ulong)(byte)pcVar21[-1] & 0x7f) << (uVar14 & 0x3f) | uVar15,
                  pcVar21[-1] < '\0') {
              uVar9 = 3;
              if (uVar11 < 2) goto LAB_10454beb4;
              pcVar21 = pcVar21 + 1;
              uVar11 = uVar11 - 1;
              bVar5 = 0x38 < uVar14;
              uVar14 = uVar14 + 7;
              if (bVar5) goto LAB_10454beb4;
            }
            uVar11 = uVar11 - 1;
            *unaff_x20 = (long)pcVar21;
            unaff_x20[1] = uVar11;
            if (uVar15 < 0x7fffffff) goto LAB_10454b91c;
          }
          uVar9 = 3;
LAB_10454beb4:
          FUN_10454d3c4();
          _swift_allocError(&UNK_110786678,puVar7,0,0);
          *puVar7 = uVar9;
          _swift_willThrow();
        }
        else {
          if (unaff_x20[3] != 0) {
            *unaff_x20 = unaff_x20[3];
LAB_10454ad8c:
            *(undefined1 *)(unaff_x20 + 4) = 1;
LAB_10454ad90:
            func_0x00010006b154();
            goto LAB_10454ad9c;
          }
          pcVar21 = (char *)unaff_x20[2];
          lVar16 = unaff_x20[1] + (*unaff_x20 - (long)pcVar21);
          if (SCARRY8(unaff_x20[1],*unaff_x20 - (long)pcVar21)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10454be18);
            (*pcVar4)();
          }
          *unaff_x20 = (long)pcVar21;
          unaff_x20[1] = lVar16;
          uVar11 = lVar16 - 1;
          if (lVar16 < 1) {
LAB_10454bc00:
            FUN_10454d3c4();
            _swift_allocError(&UNK_110786678,puVar6,0,0);
            uVar9 = 1;
          }
          else {
            puVar6 = (undefined6 *)(long)*pcVar21;
            if ((long)puVar6 < 0) {
              if (lVar16 != 1) {
                puVar6 = (undefined6 *)((ulong)puVar6 & 0x7f);
                pcVar21 = pcVar21 + 2;
                uVar15 = 7;
                while (puVar6 = (undefined6 *)
                                (((ulong)(byte)pcVar21[-1] & 0x7f) << (uVar15 & 0x3f) |
                                (ulong)puVar6), pcVar21[-1] < '\0') {
                  if (uVar11 < 2) goto LAB_10454bb70;
                  pcVar21 = pcVar21 + 1;
                  uVar11 = uVar11 - 1;
                  bVar5 = 0x38 < uVar15;
                  uVar15 = uVar15 + 7;
                  if (bVar5) goto LAB_10454bb70;
                }
                *unaff_x20 = (long)pcVar21;
                unaff_x20[1] = uVar11 - 1;
                if (puVar6 < (undefined6 *)0xffffffff) goto LAB_10454af2c;
              }
            }
            else {
              *unaff_x20 = (long)(pcVar21 + 1);
              unaff_x20[1] = uVar11;
LAB_10454af2c:
              uVar1 = (uint)puVar6 & 7;
              if ((undefined6 *)0x7 < puVar6 && uVar1 < 6) {
                *(char *)((long)unaff_x20 + 0x21) = (char)uVar1;
                unaff_x20[5] = (ulong)puVar6 >> 3;
                FUN_10454c1a4();
                unaff_x20[3] = *unaff_x20;
                goto LAB_10454ad8c;
              }
            }
LAB_10454bb70:
            FUN_10454d3c4();
            _swift_allocError(&UNK_110786678,puVar6,0,0);
            uVar9 = 3;
          }
          *(undefined1 *)puVar6 = uVar9;
LAB_10454bc48:
          _swift_willThrow();
        }
        func_0x0001000b44c0(lVar20,pcVar17);
        FUN_10454d404(&uStack_a0,0x113084df8,&UNK_10dd16980);
        goto LAB_10454bc78;
      }
      if (*(char *)((long)unaff_x20 + 0x21) != '\0') goto LAB_10454bbcc;
      lVar16 = unaff_x20[1];
      uVar11 = lVar16 - 1;
      if (lVar16 < 1) {
        uVar9 = 1;
LAB_10454bc28:
        FUN_10454d3c4();
        _swift_allocError(&UNK_110786678,puVar6,0,0);
        *(undefined1 *)puVar6 = uVar9;
        goto LAB_10454bc48;
      }
      pcVar21 = (char *)*unaff_x20;
      uVar15 = (ulong)*pcVar21;
      if ((long)uVar15 < 0) {
        if (lVar16 == 1) {
          uVar9 = 3;
          goto LAB_10454bc28;
        }
        uVar15 = uVar15 & 0x7f;
        pcVar21 = pcVar21 + 2;
        uVar14 = 7;
        while (uVar15 = ((ulong)(byte)pcVar21[-1] & 0x7f) << (uVar14 & 0x3f) | uVar15,
              pcVar21[-1] < '\0') {
          uVar9 = 3;
          if (uVar11 < 2) goto LAB_10454bc28;
          pcVar21 = pcVar21 + 1;
          uVar11 = uVar11 - 1;
          bVar5 = 0x38 < uVar14;
          uVar14 = uVar14 + 7;
          if (bVar5) goto LAB_10454bc28;
        }
        uVar11 = uVar11 - 1;
        *unaff_x20 = (long)pcVar21;
      }
      else {
        *unaff_x20 = (long)(pcVar21 + 1);
      }
      unaff_x20[1] = uVar11;
      *(undefined1 *)(unaff_x20 + 4) = 1;
      if ((int)uVar15 == 0) goto LAB_10454bbcc;
      pcVar4 = (code *)0x113084df8;
      func_0x00010454d4c8(&uStack_a0,&uStack_170,0x113084df8,&UNK_10dd16980);
      lVar16 = lStack_158;
      puVar6 = &uStack_170;
      FUN_10454d404(puVar6,0x113084df8,&UNK_10dd16980);
      if (lVar16 != 0) goto LAB_10454ad90;
      lVar16 = unaff_x20[9];
      if (lVar16 == 0) {
        lStack_278 = lVar20;
        FUN_10454d404(&uStack_a0,0x113084df8,&UNK_10dd16980);
        func_0x0001000b44c0(lStack_278,pcVar17);
        lStack_150 = 0;
        uStack_168 = 0;
        bStack_162 = 0;
        uStack_161 = 0;
        uStack_170 = 0;
        uStack_16a = 0;
        lStack_158 = 0;
        puStack_160 = (undefined1 *)0x0;
LAB_10454bcf4:
        FUN_10454d404(&uStack_170,0x113084df8,&UNK_10dd16980);
        goto LAB_10454bc78;
      }
      lVar22 = unaff_x20[10];
      pcStack_280 = pcVar17;
      lStack_278 = lVar20;
      func_0x0001000a8868(unaff_x20 + 6,lVar16);
      lVar20 = *(long *)(lVar16 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
      (**(code **)(lVar20 + 0x10))(auStack_2a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(lVar22 + 8))(&uStack_170,pcStack_260,uStack_258,(long)(int)uVar15,lVar16,lVar22);
      (**(code **)(lVar20 + 8))(auStack_2a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar16);
      FUN_10454d404(&uStack_a0,0x113084df8,&UNK_10dd16980);
      if (lStack_158 == 0) {
        func_0x0001000b44c0(lStack_278,pcStack_280);
        goto LAB_10454bcf4;
      }
      func_0x000100dba7ec(&uStack_170,auStack_c8);
      puVar7 = auStack_c8;
      pcVar4 = (code *)&uStack_a0;
      func_0x00010454d510();
      pcVar17 = pcStack_280;
      lVar20 = lStack_278;
      if ((ulong)pcStack_280 >> 0x3c < 0xf) {
        uVar1 = (uint)((ulong)pcStack_280 >> 0x20);
        uVar10 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar10 == 0) {
            uStack_23e = (undefined1)lStack_278;
            uStack_23d = (undefined1)((ulong)lStack_278 >> 8);
            uStack_23c = (undefined1)((ulong)lStack_278 >> 0x10);
            uStack_23b = (undefined1)((ulong)lStack_278 >> 0x18);
            uStack_23a = (undefined1)((ulong)lStack_278 >> 0x20);
            uStack_239 = (undefined1)((ulong)lStack_278 >> 0x28);
            uStack_238 = (undefined1)((ulong)lStack_278 >> 0x30);
            uStack_237 = (undefined1)((ulong)lStack_278 >> 0x38);
            uStack_236 = SUB81(pcStack_280,0);
            uStack_235 = (undefined1)((ulong)pcStack_280 >> 8);
            uStack_234 = (undefined1)((ulong)pcStack_280 >> 0x10);
            uStack_233 = (undefined1)((ulong)pcStack_280 >> 0x18);
            uStack_232 = (undefined1)((ulong)pcStack_280 >> 0x20);
            uVar11 = (ulong)pcStack_280 >> 0x30 & 0xff;
            uStack_231 = (undefined1)((ulong)pcStack_280 >> 0x28);
            if (uVar11 != 0) {
              func_0x00010454d494();
              uVar9 = uStack_1a0;
              uVar2 = uStack_1a8;
              uStack_140 = 0;
              uStack_148 = 0;
              uStack_130 = 0;
              uStack_138 = 0;
              uStack_120 = 0;
              uStack_128 = 0;
              uStack_118 = 0;
              uStack_110 = 1;
              uStack_e8 = uStack_268;
              uStack_f0 = uStack_270;
              uStack_d8 = uStack_268;
              uStack_e0 = uStack_270;
              puStack_160 = &uStack_23e;
              uStack_170 = SUB86(puStack_160,0);
              uStack_16a = (undefined2)((ulong)puStack_160 >> 0x30);
              uStack_168 = (uint6)uVar11;
              bStack_162 = 0;
              uStack_161 = 0;
              lStack_158 = 0;
              func_0x00010006ae30(auStack_1e0,&uStack_140);
              uVar3 = uStack_198;
              uStack_108 = uVar2;
              uStack_100 = uVar9;
              func_0x00010006c134(auStack_210);
              lVar20 = lStack_a8;
              lVar16 = lStack_b0;
              uStack_f8 = uVar3;
              lStack_150 = CONCAT62(lStack_150._2_6_,0x200);
              func_0x0001000a8868(auStack_c8,lStack_b0);
              (**(code **)(lVar20 + 8))(lVar16,lVar20);
              pcVar4 = (code *)auStack_230;
              FUN_10454d0d0();
              pcStack_288 = pcVar4;
              func_0x00010454d4c8(lVar16,auStack_210,0x112db4800,&UNK_10d95efc0);
              lVar20 = lStack_1f8;
              FUN_10454d404(auStack_210,0x112db4800,&UNK_10d95efc0);
              if (lVar20 != 0) {
                lVar20 = *(long *)(lVar16 + 0x18);
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10454bf20);
                  (*pcVar4)();
                }
                goto LAB_10454b6c8;
              }
LAB_10454b71c:
              lVar22 = lStack_a8;
              lVar20 = lStack_b0;
              func_0x0001000a8868(auStack_c8,lStack_b0);
              (**(code **)(lVar22 + 0x20))
                        (auStack_210,&uStack_170,&UNK_1107863c8,&PTR_DAT_110786410,lVar20,lVar22);
              func_0x00010454d444(auStack_210,lVar16);
LAB_10454b780:
              lVar20 = lStack_278;
              pcVar4 = pcStack_280;
              if ((char)lStack_150 == '\x01') {
                func_0x00010454d4c8(lVar16,auStack_210,0x112db4800,&UNK_10d95efc0);
                lVar16 = lStack_1f8;
                puVar7 = auStack_210;
                FUN_10454d404(puVar7,0x112db4800,&UNK_10d95efc0);
                if (lVar16 == 0) {
                  FUN_10454d3c4();
                  _swift_allocError(&UNK_110786678,puVar7,0,0);
                  *puVar7 = 5;
                  _swift_willThrow();
                  (*pcStack_288)(auStack_230,0);
                  func_0x00010006c134(&uStack_170);
                  func_0x0001000b44c0(lVar20,pcVar4);
                  FUN_10454d404(&uStack_a0,0x113084df8,&UNK_10dd16980);
                  puVar6 = (undefined6 *)auStack_c8;
                  goto LAB_10454bea0;
                }
                (*pcStack_288)(auStack_230,0);
                func_0x00010006c134(&uStack_170);
                func_0x0001000b44c0(lVar20);
                pcVar17 = (code *)0xf000000000000000;
                lVar20 = 0;
                goto LAB_10454b7f4;
              }
              (*pcStack_288)(auStack_230,0);
              func_0x00010006c134(&uStack_170);
              pcVar17 = pcVar4;
            }
          }
          else {
            lVar20 = (long)(int)lStack_278;
            puVar18 = (undefined1 *)((lStack_278 >> 0x20) - lVar20);
            if (lStack_278 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10454bef0);
              (*pcVar4)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (puVar7 == (undefined1 *)0x0) {
              puVar19 = (undefined1 *)0x0;
            }
            else {
              puVar8 = puVar7;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar20,(long)puVar8)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10454bf00);
                (*pcVar4)();
              }
              puVar19 = puVar7 + (lVar20 - (long)puVar8);
              puVar7 = puVar8;
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if ((long)puVar18 <= (long)puVar7) {
              puVar7 = puVar18;
            }
            lVar20 = lStack_278;
            if ((puVar19 != (undefined1 *)0x0) && (puVar7 != (undefined1 *)0x0)) {
              func_0x00010454d494();
              uVar9 = uStack_1a0;
              uVar2 = uStack_1a8;
              uStack_140 = 0;
              uStack_148 = 0;
              uStack_130 = 0;
              uStack_138 = 0;
              uStack_120 = 0;
              uStack_128 = 0;
              uStack_118 = 0;
              uStack_110 = 1;
              uStack_e8 = uStack_268;
              uStack_f0 = uStack_270;
              uStack_d8 = uStack_268;
              uStack_e0 = uStack_270;
              uStack_170 = SUB86(puVar19,0);
              uStack_16a = (undefined2)((ulong)puVar19 >> 0x30);
              uStack_168 = (uint6)puVar7;
              bStack_162 = (byte)((ulong)puVar7 >> 0x30);
              uStack_161 = (undefined1)((ulong)puVar7 >> 0x38);
              lStack_158 = 0;
              puStack_160 = puVar19;
              func_0x00010006ae30(auStack_1e0,&uStack_140);
              uVar3 = uStack_198;
              uStack_108 = uVar2;
              uStack_100 = uVar9;
              func_0x00010006c134(auStack_210);
              lVar20 = lStack_a8;
              lVar16 = lStack_b0;
              uStack_f8 = uVar3;
              lStack_150 = CONCAT62(lStack_150._2_6_,0x200);
              func_0x0001000a8868(auStack_c8,lStack_b0);
              (**(code **)(lVar20 + 8))(lVar16,lVar20);
              pcVar4 = (code *)auStack_230;
              FUN_10454d0d0();
              pcStack_288 = pcVar4;
              func_0x00010454d4c8(lVar16,auStack_210,0x112db4800,&UNK_10d95efc0);
              lVar20 = lStack_1f8;
              FUN_10454d404(auStack_210,0x112db4800,&UNK_10d95efc0);
              if (lVar20 == 0) goto LAB_10454b71c;
              lVar20 = *(long *)(lVar16 + 0x18);
              if (lVar20 == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10454bf1c);
                (*pcVar4)();
              }
LAB_10454b6c8:
              lVar22 = *(long *)(lVar16 + 0x20);
              func_0x0001000c6518(lVar16,lVar20);
              (**(code **)(lVar22 + 0x28))
                        (&uStack_170,&UNK_1107863c8,&PTR_DAT_110786410,lVar20,lVar22);
              goto LAB_10454b780;
            }
          }
        }
        else if (uVar10 == 2) {
          lVar20 = *(long *)(lStack_278 + 0x10);
          lVar16 = *(long *)(lStack_278 + 0x18);
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (puVar7 == (undefined1 *)0x0) {
            puVar18 = (undefined1 *)0x0;
          }
          else {
            puVar19 = puVar7;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar20,(long)puVar19)) goto LAB_10454bef8;
            puVar18 = puVar7 + (lVar20 - (long)puVar19);
            puVar7 = puVar19;
          }
          puVar19 = (undefined1 *)(lVar16 - lVar20);
          if (SBORROW8(lVar16,lVar20)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10454bef4);
            (*pcVar4)();
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)puVar19 <= (long)puVar7) {
            puVar7 = puVar19;
          }
          lVar20 = lStack_278;
          if ((puVar18 != (undefined1 *)0x0) && (puVar7 != (undefined1 *)0x0)) {
            func_0x00010454d494();
            uVar9 = uStack_1a0;
            uVar2 = uStack_1a8;
            uStack_140 = 0;
            uStack_148 = 0;
            uStack_130 = 0;
            uStack_138 = 0;
            uStack_120 = 0;
            uStack_128 = 0;
            uStack_118 = 0;
            uStack_110 = 1;
            uStack_e8 = uStack_268;
            uStack_f0 = uStack_270;
            uStack_d8 = uStack_268;
            uStack_e0 = uStack_270;
            uStack_170 = SUB86(puVar18,0);
            uStack_16a = (undefined2)((ulong)puVar18 >> 0x30);
            uStack_168 = (uint6)puVar7;
            bStack_162 = (byte)((ulong)puVar7 >> 0x30);
            uStack_161 = (undefined1)((ulong)puVar7 >> 0x38);
            lStack_158 = 0;
            puStack_160 = puVar18;
            func_0x00010006ae30(auStack_1e0,&uStack_140);
            uVar3 = uStack_198;
            uStack_108 = uVar2;
            uStack_100 = uVar9;
            func_0x00010006c134(auStack_210);
            lVar20 = lStack_a8;
            lVar16 = lStack_b0;
            uStack_f8 = uVar3;
            lStack_150 = CONCAT62(lStack_150._2_6_,0x200);
            func_0x0001000a8868(auStack_c8,lStack_b0);
            (**(code **)(lVar20 + 8))(lVar16,lVar20);
            pcVar4 = (code *)auStack_230;
            FUN_10454d0d0();
            pcStack_288 = pcVar4;
            func_0x00010454d4c8(lVar16,auStack_210,0x112db4800,&UNK_10d95efc0);
            lVar20 = lStack_1f8;
            FUN_10454d404(auStack_210,0x112db4800,&UNK_10d95efc0);
            if (lVar20 == 0) goto LAB_10454b71c;
            lVar20 = *(long *)(lVar16 + 0x18);
            if (lVar20 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10454bf18);
              (*pcVar4)();
            }
            goto LAB_10454b6c8;
          }
        }
        func_0x0001000b44c0(lVar20,pcVar17);
        FUN_10454d404(&uStack_a0,0x113084df8,&UNK_10dd16980);
        puVar6 = (undefined6 *)auStack_c8;
        goto LAB_10454be08;
      }
LAB_10454b7f4:
      puVar6 = (undefined6 *)auStack_c8;
      func_0x0001000834e4();
      func_0x00010006b154();
    } while( true );
  }
  FUN_10454d404(&uStack_a0,0x113084df8,&UNK_10dd16980);
  func_0x0001000b44c0(0,0xf000000000000000);
LAB_10454bc78:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10454bef8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10454befc);
  (*pcVar4)();
LAB_10454bb98:
  FUN_10454d404(&uStack_a0,0x113084df8,&UNK_10dd16980);
  func_0x0001000b44c0(lVar20,pcVar17);
  goto LAB_10454bc78;
}



/* Entry: 10454bf20; end: 10454c1a3;  */

void FUN_10454bf20(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  long *unaff_x20;
  long unaff_x21;
  byte bVar16;
  long lVar17;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c1a0);
    (*pcVar5)();
  }
  uVar2 = (uint)(param_4 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  iVar8 = (int)param_3;
  iVar12 = (int)((ulong)param_3 >> 0x20);
  if (uVar2 >> 0x1e < 2) {
    if (uVar10 == 0) {
      uVar13 = param_4 >> 0x30 & 0xff;
    }
    else {
      if (SBORROW4(iVar12,iVar8)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c18c);
        (*pcVar5)();
      }
      uVar13 = (ulong)(iVar12 - iVar8);
    }
joined_r0x00010454bf8c:
    pbVar7 = param_1;
    uVar11 = uVar13;
    if (0x7f < uVar13) {
      do {
        param_1 = pbVar7 + 1;
        *pbVar7 = (byte)uVar11 | 0x80;
        uVar13 = uVar11 >> 7;
        uVar14 = uVar11 >> 0xe;
        pbVar7 = param_1;
        uVar11 = uVar13;
      } while (uVar14 != 0);
    }
    pbVar6 = param_1 + 1;
    *param_1 = (byte)uVar13;
    pbVar7 = pbVar6;
    if (uVar10 != 2) {
      if (uVar10 == 1) {
        lVar17 = (long)iVar8;
        pbVar4 = (byte *)((param_3 >> 0x20) - lVar17);
        if (param_3 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c190);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        param_1 = pbVar7;
        if (pbVar7 != (byte *)0x0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,(long)param_1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c19c);
            (*pcVar5)();
          }
          pbVar7 = pbVar7 + (lVar17 - (long)param_1);
        }
        unaff_x20 = (long *)(param_4 & 0x3fffffffffffffff);
        __s10Foundation13__DataStorageC7_lengthSivg();
        pbVar9 = param_1;
        if ((long)pbVar4 <= (long)param_1) {
          pbVar9 = pbVar4;
        }
        if (pbVar7 != (byte *)0x0) goto LAB_10454c090;
      }
      else {
        uStack_66 = (undefined1)param_3;
        uStack_65 = (undefined1)((ulong)param_3 >> 8);
        uStack_64 = (undefined1)((ulong)param_3 >> 0x10);
        uStack_63 = (undefined1)((ulong)param_3 >> 0x18);
        uStack_62 = (undefined1)((ulong)param_3 >> 0x20);
        uStack_61 = (undefined1)((ulong)param_3 >> 0x28);
        uStack_60 = (undefined1)((ulong)param_3 >> 0x30);
        uStack_5f = (undefined1)((ulong)param_3 >> 0x38);
        uStack_5e = (undefined1)param_4;
        uStack_5d = (undefined1)(param_4 >> 8);
        uStack_5c = (undefined1)(param_4 >> 0x10);
        uStack_5b = (undefined1)(param_4 >> 0x18);
        uStack_5a = (undefined1)(param_4 >> 0x20);
        uStack_59 = (undefined1)(param_4 >> 0x28);
        param_1 = pbVar6;
        if ((param_4 >> 0x30 & 0xff) != 0) {
          _memmove(pbVar6,&uStack_66);
          param_1 = pbVar6;
        }
      }
      goto LAB_10454c150;
    }
    lVar17 = *(long *)(param_3 + 0x10);
    lVar3 = *(long *)(param_3 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    param_1 = pbVar7;
    if (pbVar7 != (byte *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar17,(long)param_1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c198);
        (*pcVar5)();
      }
      pbVar7 = pbVar7 + (lVar17 - (long)param_1);
    }
    pbVar4 = (byte *)(lVar3 - lVar17);
    if (SBORROW8(lVar3,lVar17)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c194);
      (*pcVar5)();
    }
    unaff_x20 = (long *)(param_4 & 0x3fffffffffffffff);
    __s10Foundation13__DataStorageC7_lengthSivg();
    pbVar9 = param_1;
    if ((long)pbVar4 <= (long)param_1) {
      pbVar9 = pbVar4;
    }
    if (pbVar7 == (byte *)0x0) goto LAB_10454c150;
LAB_10454c090:
    unaff_x20 = (long *)(param_4 & 0x3fffffffffffffff);
    if (pbVar9 == (byte *)0x0) goto LAB_10454c150;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(pbVar6,pbVar7);
      return;
    }
  }
  else {
    if (uVar10 == 2) {
      uVar13 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
      if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c188);
        (*pcVar5)();
      }
      goto joined_r0x00010454bf8c;
    }
    *param_1 = 0;
LAB_10454c150:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  ___stack_chk_fail();
  uVar2 = (uint)param_1 & 7;
  if (uVar2 < 3) {
    if (((ulong)param_1 & 7) == 0) {
      func_0x00010006b884();
      return;
    }
    if (uVar2 == 1) {
      lVar17 = unaff_x20[1] + -8;
      if (7 < unaff_x20[1]) {
        pbVar7 = (byte *)(*unaff_x20 + 8);
        goto LAB_10454c380;
      }
    }
    else {
      if (uVar2 != 2) {
LAB_10454c41c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c420);
        (*pcVar5)();
      }
      func_0x00010006b884();
      if (unaff_x21 != 0) {
        return;
      }
      pbVar6 = (byte *)unaff_x20[1];
      if ((long)pbVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c428);
        (*pcVar5)();
      }
      if (pbVar6 == (byte *)0x0) {
        if (param_1 == (byte *)0x0) goto LAB_10454c374;
      }
      else if (param_1 <= pbVar6) {
LAB_10454c374:
        pbVar7 = param_1 + *unaff_x20;
        lVar17 = (long)pbVar6 - (long)param_1;
LAB_10454c380:
        *unaff_x20 = (long)pbVar7;
        unaff_x20[1] = lVar17;
        return;
      }
    }
  }
  else if (uVar2 == 3) {
    lVar17 = unaff_x20[0xf] + -1;
    if (SBORROW8(unaff_x20[0xf],1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c424);
      (*pcVar5)();
    }
    unaff_x20[0xf] = lVar17;
    if (lVar17 < 0) {
      bVar16 = 6;
      goto LAB_10454c340;
    }
    uVar13 = unaff_x20[1];
    if (0 < (long)uVar13) {
      do {
        pcVar15 = (char *)*unaff_x20;
        uVar11 = (ulong)*pcVar15;
        uVar14 = uVar13 - 1;
        if ((long)uVar11 < 0) {
          if (1 < uVar13) {
            uVar11 = uVar11 & 0x7f;
            pcVar15 = pcVar15 + 2;
            uVar13 = 7;
            while (uVar11 = ((ulong)(byte)pcVar15[-1] & 0x7f) << (uVar13 & 0x3f) | uVar11,
                  pcVar15[-1] < '\0') {
              bVar16 = 3;
              if (uVar14 < 2) goto LAB_10454c340;
              pcVar15 = pcVar15 + 1;
              uVar14 = uVar14 - 1;
              bVar1 = 0x38 < uVar13;
              uVar13 = uVar13 + 7;
              if (bVar1) goto LAB_10454c340;
            }
            *unaff_x20 = (long)pcVar15;
            unaff_x20[1] = uVar14 - 1;
            if (uVar11 < 0xffffffff) goto LAB_10454c2e4;
          }
LAB_10454c414:
          bVar16 = 3;
          break;
        }
        *unaff_x20 = (long)(pcVar15 + 1);
        unaff_x20[1] = uVar14;
LAB_10454c2e4:
        uVar2 = (uint)uVar11 & 7;
        if (uVar11 < 8 || 5 < uVar2) goto LAB_10454c414;
        if (uVar2 == 4) {
          *(undefined1 *)((long)unaff_x20 + 0x21) = 4;
          uVar2 = (uint)uVar11 >> 3;
          unaff_x20[5] = (ulong)uVar2;
          if (uVar2 == (uint)param_1 >> 3) {
            lVar17 = unaff_x20[0xf] + 1;
            if (SCARRY8(unaff_x20[0xf],1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c42c);
              (*pcVar5)();
            }
            unaff_x20[0xf] = lVar17;
            if (lVar17 <= unaff_x20[0xd]) {
              return;
            }
            __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                      ("Fatal error",0xb,2,0xd00000000000003b,0x800000010f207d10,
                       "SwiftProtobuf/BinaryDecoder.swift",0x21,2,0x5e,0);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10454c414);
            (*pcVar5)();
          }
          goto LAB_10454c414;
        }
        *(char *)((long)unaff_x20 + 0x21) = (char)uVar2;
        unaff_x20[5] = uVar11 >> 3;
        FUN_10454c1a4(uVar11);
        if (unaff_x21 != 0) {
          return;
        }
        uVar13 = unaff_x20[1];
        bVar16 = 1;
      } while (0 < (long)uVar13);
      goto LAB_10454c340;
    }
  }
  else if (uVar2 != 4) {
    if (uVar2 != 5) goto LAB_10454c41c;
    lVar17 = unaff_x20[1] + -4;
    if (3 < unaff_x20[1]) {
      pbVar7 = (byte *)(*unaff_x20 + 4);
      goto LAB_10454c380;
    }
  }
  bVar16 = 1;
LAB_10454c340:
  FUN_10454d3c4();
  _swift_allocError(&UNK_110786678,param_1,0,0);
  *param_1 = bVar16;
  _swift_willThrow();
  return;
}



/* Entry: 10454c1a4; end: 10454c42b;  */

void FUN_10454c1a4(undefined1 *param_1)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  char *pcVar10;
  long *unaff_x20;
  long unaff_x21;
  undefined1 uVar11;
  
  uVar2 = (uint)param_1 & 7;
  if (uVar2 < 3) {
    if (((ulong)param_1 & 7) == 0) {
      func_0x00010006b884();
      return;
    }
    if (uVar2 == 1) {
      lVar6 = unaff_x20[1] + -8;
      if (7 < unaff_x20[1]) {
        puVar8 = (undefined1 *)(*unaff_x20 + 8);
        goto LAB_10454c380;
      }
    }
    else {
      if (uVar2 != 2) {
LAB_10454c41c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10454c420);
        (*pcVar3)();
      }
      func_0x00010006b884();
      if (unaff_x21 != 0) {
        return;
      }
      puVar4 = (undefined1 *)unaff_x20[1];
      if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10454c428);
        (*pcVar3)();
      }
      if (puVar4 == (undefined1 *)0x0) {
        if (param_1 == (undefined1 *)0x0) goto LAB_10454c374;
      }
      else if (param_1 <= puVar4) {
LAB_10454c374:
        puVar8 = param_1 + *unaff_x20;
        lVar6 = (long)puVar4 - (long)param_1;
LAB_10454c380:
        *unaff_x20 = (long)puVar8;
        unaff_x20[1] = lVar6;
        return;
      }
    }
  }
  else if (uVar2 == 3) {
    lVar6 = unaff_x20[0xf] + -1;
    if (SBORROW8(unaff_x20[0xf],1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10454c424);
      (*pcVar3)();
    }
    unaff_x20[0xf] = lVar6;
    if (lVar6 < 0) {
      uVar11 = 6;
      goto LAB_10454c340;
    }
    uVar9 = unaff_x20[1];
    if (0 < (long)uVar9) {
      do {
        pcVar10 = (char *)*unaff_x20;
        uVar5 = (ulong)*pcVar10;
        uVar7 = uVar9 - 1;
        if ((long)uVar5 < 0) {
          if (1 < uVar9) {
            uVar5 = uVar5 & 0x7f;
            pcVar10 = pcVar10 + 2;
            uVar9 = 7;
            while (uVar5 = ((ulong)(byte)pcVar10[-1] & 0x7f) << (uVar9 & 0x3f) | uVar5,
                  pcVar10[-1] < '\0') {
              uVar11 = 3;
              if (uVar7 < 2) goto LAB_10454c340;
              pcVar10 = pcVar10 + 1;
              uVar7 = uVar7 - 1;
              bVar1 = 0x38 < uVar9;
              uVar9 = uVar9 + 7;
              if (bVar1) goto LAB_10454c340;
            }
            *unaff_x20 = (long)pcVar10;
            unaff_x20[1] = uVar7 - 1;
            if (uVar5 < 0xffffffff) goto LAB_10454c2e4;
          }
LAB_10454c414:
          uVar11 = 3;
          break;
        }
        *unaff_x20 = (long)(pcVar10 + 1);
        unaff_x20[1] = uVar7;
LAB_10454c2e4:
        uVar2 = (uint)uVar5 & 7;
        if (uVar5 < 8 || 5 < uVar2) goto LAB_10454c414;
        if (uVar2 == 4) {
          *(undefined1 *)((long)unaff_x20 + 0x21) = 4;
          uVar2 = (uint)uVar5 >> 3;
          unaff_x20[5] = (ulong)uVar2;
          if (uVar2 == (uint)param_1 >> 3) {
            lVar6 = unaff_x20[0xf] + 1;
            if (SCARRY8(unaff_x20[0xf],1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10454c42c);
              (*pcVar3)();
            }
            unaff_x20[0xf] = lVar6;
            if (lVar6 <= unaff_x20[0xd]) {
              return;
            }
            __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                      ("Fatal error",0xb,2,0xd00000000000003b,0x800000010f207d10,
                       "SwiftProtobuf/BinaryDecoder.swift",0x21,2,0x5e,0);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10454c414);
            (*pcVar3)();
          }
          goto LAB_10454c414;
        }
        *(char *)((long)unaff_x20 + 0x21) = (char)uVar2;
        unaff_x20[5] = uVar5 >> 3;
        FUN_10454c1a4(uVar5);
        if (unaff_x21 != 0) {
          return;
        }
        uVar9 = unaff_x20[1];
        uVar11 = 1;
      } while (0 < (long)uVar9);
      goto LAB_10454c340;
    }
  }
  else if (uVar2 != 4) {
    if (uVar2 != 5) goto LAB_10454c41c;
    lVar6 = unaff_x20[1] + -4;
    if (3 < unaff_x20[1]) {
      puVar8 = (undefined1 *)(*unaff_x20 + 4);
      goto LAB_10454c380;
    }
  }
  uVar11 = 1;
LAB_10454c340:
  FUN_10454d3c4();
  _swift_allocError(&UNK_110786678,param_1,0,0);
  *param_1 = uVar11;
  _swift_willThrow();
  return;
}



/* Entry: 10454c42c; end: 10454c4d7;  */

void FUN_10454c42c(undefined1 *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((0 < *(long *)(unaff_x20 + 8)) && (func_0x00010006b884(), unaff_x21 == 0)) {
    if ((param_1 < (undefined1 *)0xffffffff) &&
       (func_0x00010455ecb4(), ((ulong)param_1 & 0xff00000000) != 0x100000000)) {
      puVar1 = param_1;
      func_0x00010455ec04();
      *(char *)(unaff_x20 + 0x21) = (char)puVar1;
      *(ulong *)(unaff_x20 + 0x28) = (ulong)param_1 >> 3 & 0x1fffffff;
    }
    else {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,param_1,0,0);
      *param_1 = 3;
      _swift_willThrow();
    }
  }
  return;
}



/* Entry: 10454c4d8; end: 10454c4db;  */

void FUN_10454c4d8(void)

{
  return;
}



/* Entry: 10454c4dc; end: 10454c563;  */

void FUN_10454c4dc(void)

{
  FUN_104544508();
  return;
}



/* Entry: 10454c564; end: 10454c59f;  */

void FUN_10454c564(undefined4 *param_1)

{
  undefined4 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = SUB84(param_1,0);
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    func_0x00010006b884();
    if (unaff_x21 == 0) {
      *param_1 = uVar1;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 10454c5a0; end: 10454c5bb;  */

void FUN_10454c5a0(undefined8 param_1)

{
  FUN_104544b38(param_1,0x10454e6cc);
  return;
}



/* Entry: 10454c5bc; end: 10454c5f7;  */

void FUN_10454c5bc(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(char *)(unaff_x20 + 0x21) == '\0') &&
     (plVar1 = param_1, func_0x00010006b884(), unaff_x21 == 0)) {
    *param_1 = (long)plVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  return;
}



/* Entry: 10454c5f8; end: 10454c6fb;  */

void FUN_10454c5f8(undefined8 param_1)

{
  FUN_1045450b8(param_1,&SUB_1010bb1d4);
  return;
}



/* Entry: 10454c6fc; end: 10454c73b;  */

void FUN_10454c6fc(long param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(char *)(unaff_x20 + 0x21) == '\0') &&
     (lVar1 = param_1, func_0x00010006b884(), unaff_x21 == 0)) {
    *(bool *)param_1 = lVar1 != 0;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  return;
}



/* Entry: 10454c73c; end: 10454c89f;  */

void FUN_10454c73c(void)

{
  FUN_1045469b8();
  return;
}



/* Entry: 10454c8a0; end: 10454ccbb;  */

void FUN_10454c8a0(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 uVar2;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint7 uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  byte abStack_78 [15];
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *param_2;
  uVar18 = param_2[1];
  uVar12 = (uint)(uVar18 >> 0x20);
  uVar17 = uVar12 >> 0x1e;
  uVar2 = (undefined1)((ulong)lVar1 >> 8);
  uVar3 = (undefined1)((ulong)lVar1 >> 0x10);
  uVar4 = (undefined1)((ulong)lVar1 >> 0x18);
  uVar5 = (undefined1)((ulong)lVar1 >> 0x20);
  uVar6 = (undefined1)((ulong)lVar1 >> 0x28);
  uVar7 = (undefined1)((ulong)lVar1 >> 0x30);
  uVar8 = (undefined1)((ulong)lVar1 >> 0x38);
  if (uVar12 >> 0x1e < 2) {
    if (uVar17 == 0) {
      _swift_bridgeObjectRetain(param_5);
      func_0x00010006c090(lVar1,uVar18);
      abStack_78[8] = (byte)uVar18;
      abStack_78[9] = (byte)(uVar18 >> 8);
      abStack_78[10] = (byte)(uVar18 >> 0x10);
      abStack_78[0xb] = (byte)(uVar18 >> 0x18);
      abStack_78[0xc] = (byte)(uVar18 >> 0x20);
      abStack_78[0xd] = (byte)(uVar18 >> 0x28);
      abStack_78[0xe] = (byte)(uVar18 >> 0x30);
      abStack_78[0] = (byte)lVar1;
      abStack_78[1] = uVar2;
      abStack_78[2] = uVar3;
      abStack_78[3] = uVar4;
      abStack_78[4] = uVar5;
      abStack_78[5] = uVar6;
      abStack_78[6] = uVar7;
      abStack_78[7] = uVar8;
      FUN_104547e24(param_1,abStack_78,abStack_78 + abStack_78[0xe],param_3 & 0xffffffff,param_4,
                    param_5);
      lVar1 = CONCAT17(abStack_78[7],
                       CONCAT16(abStack_78[6],
                                CONCAT15(abStack_78[5],
                                         CONCAT14(abStack_78[4],
                                                  CONCAT13(abStack_78[3],
                                                           CONCAT12(abStack_78[2],
                                                                    CONCAT11(abStack_78[1],
                                                                             abStack_78[0])))))));
      uVar13 = CONCAT16(abStack_78[0xe],
                        CONCAT15(abStack_78[0xd],
                                 CONCAT14(abStack_78[0xc],
                                          CONCAT13(abStack_78[0xb],
                                                   CONCAT12(abStack_78[10],
                                                            CONCAT11(abStack_78[9],abStack_78[8]))))
                                ));
      _swift_bridgeObjectRelease_n(param_5,2);
      *param_2 = lVar1;
      param_2[1] = (ulong)uVar13;
    }
    else {
      uVar22 = uVar18 & 0x3fffffffffffffff;
      _swift_bridgeObjectRetain(param_5);
      func_0x00010006c00c(lVar1,uVar18);
      func_0x00010006c090(lVar1,uVar18);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      func_0x00010006c090(0,0xc000000000000000);
      _swift_bridgeObjectRetain(param_5);
      uVar21 = uVar22;
      _swift_isUniquelyReferenced_nonNull_native();
      lVar20 = (long)(int)lVar1;
      lVar19 = lVar1 >> 0x20;
      uVar18 = uVar22;
      if ((uVar21 & 1) == 0) {
        if (lVar19 < lVar20) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10454cca4);
          (*pcVar14)();
        }
        _swift_retain();
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else {
          uVar21 = uVar18;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,uVar21)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10454cca8);
            (*pcVar14)();
          }
          uVar18 = (lVar20 - uVar21) + uVar18;
        }
        uVar16 = 0;
        __s10Foundation13__DataStorageCMa();
        _swift_allocObject();
        __s10Foundation13__DataStorageC5bytes6length4copy11deallocator6offsetACSvSg_SiSbySv_SitcSgSitcfc
                  (uVar18,lVar19 - lVar20,1,0,0,lVar20,uVar16);
        _swift_release_n(uVar22,2);
      }
      if (lVar19 < lVar20) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10454cc98);
        (*pcVar14)();
      }
      uVar21 = uVar18;
      _swift_retain();
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar21 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10454ccbc);
        (*pcVar14)();
      }
      uVar22 = uVar21;
      __s10Foundation13__DataStorageC7_offsetSivg();
      lVar11 = lVar20 - uVar22;
      if (SBORROW8(lVar20,uVar22)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10454cca0);
        (*pcVar14)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar19 - lVar20 <= (long)uVar22) {
        uVar22 = lVar19 - lVar20;
      }
      lVar11 = uVar21 + lVar11;
      FUN_104547e24(param_1,lVar11,lVar11 + uVar22,param_3 & 0xffffffff,param_4,param_5);
      _swift_bridgeObjectRelease_n(param_5,3);
      _swift_release(uVar18);
      *param_2 = lVar1;
      param_2[1] = uVar18 | 0x4000000000000000;
    }
  }
  else if (uVar17 == 2) {
    uVar21 = uVar18 & 0x3fffffffffffffff;
    _swift_bridgeObjectRetain(param_5);
    _swift_retain(lVar1);
    _swift_retain(uVar21);
    func_0x00010006c090(lVar1,uVar18);
    abStack_78[8] = (byte)uVar21;
    abStack_78[9] = (byte)(uVar21 >> 8);
    abStack_78[10] = (byte)(uVar21 >> 0x10);
    abStack_78[0xb] = (byte)(uVar21 >> 0x18);
    abStack_78[0xc] = (byte)(uVar21 >> 0x20);
    abStack_78[0xd] = (byte)(uVar21 >> 0x28);
    abStack_78[0xe] = (byte)(uVar21 >> 0x30);
    uStack_69 = (undefined1)(uVar21 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar19 = 0;
    abStack_78[0] = (byte)lVar1;
    abStack_78[1] = uVar2;
    abStack_78[2] = uVar3;
    abStack_78[3] = uVar4;
    abStack_78[4] = uVar5;
    abStack_78[5] = uVar6;
    abStack_78[6] = uVar7;
    abStack_78[7] = uVar8;
    func_0x00010006c090(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar11 = CONCAT17(abStack_78[7],
                      CONCAT16(abStack_78[6],
                               CONCAT15(abStack_78[5],
                                        CONCAT14(abStack_78[4],
                                                 CONCAT13(abStack_78[3],
                                                          CONCAT12(abStack_78[2],
                                                                   CONCAT11(abStack_78[1],
                                                                            abStack_78[0])))))));
    uVar18 = CONCAT17(uStack_69,
                      CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8])))))));
    lVar1 = *(long *)(lVar11 + 0x10);
    lVar20 = *(long *)(lVar11 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar19 == 0) goto LAB_10454ccac;
    lVar15 = lVar19;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar9 = lVar1 - lVar15;
    if (SBORROW8(lVar1,lVar15)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10454cc94);
      (*pcVar14)();
    }
    lVar10 = lVar20 - lVar1;
    if (SBORROW8(lVar20,lVar1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10454cc9c);
      (*pcVar14)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar10 <= lVar15) {
      lVar15 = lVar10;
    }
    lVar19 = lVar19 + lVar9;
    FUN_104547e24(param_1,lVar19,lVar19 + lVar15,param_3 & 0xffffffff,param_4,param_5);
    _swift_bridgeObjectRelease_n(param_5,2);
    *param_2 = lVar11;
    param_2[1] = uVar18 | 0x8000000000000000;
  }
  else {
    abStack_78[8] = 0;
    abStack_78[9] = 0;
    abStack_78[10] = 0;
    abStack_78[0xb] = 0;
    abStack_78[0xc] = 0;
    abStack_78[0xd] = 0;
    abStack_78[0] = 0;
    abStack_78[1] = 0;
    abStack_78[2] = 0;
    abStack_78[3] = 0;
    abStack_78[4] = 0;
    abStack_78[5] = 0;
    abStack_78[6] = 0;
    abStack_78[7] = 0;
    FUN_104547e24(abStack_78,abStack_78,param_3,param_4,param_5);
    _swift_bridgeObjectRelease(param_5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10454ccac:
  _swift_bridgeObjectRelease(param_5);
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10454ccb8);
  (*pcVar14)();
}



/* Entry: 10454ccbc; end: 10454cffb;  */

void FUN_10454ccbc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint7 uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  byte abStack_78 [15];
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *param_2;
  uVar2 = param_2[1];
  uVar13 = (uint)(uVar2 >> 0x20);
  uVar19 = uVar13 >> 0x1e;
  abStack_78[0] = (byte)lVar17;
  uVar4 = (undefined1)((ulong)lVar17 >> 8);
  uVar5 = (undefined1)((ulong)lVar17 >> 0x10);
  uVar6 = (undefined1)((ulong)lVar17 >> 0x18);
  uVar7 = (undefined1)((ulong)lVar17 >> 0x20);
  uVar8 = (undefined1)((ulong)lVar17 >> 0x28);
  uVar9 = (undefined1)((ulong)lVar17 >> 0x30);
  uVar10 = (undefined1)((ulong)lVar17 >> 0x38);
  abStack_78[1] = uVar4;
  abStack_78[2] = uVar5;
  abStack_78[3] = uVar6;
  abStack_78[4] = uVar7;
  abStack_78[5] = uVar8;
  abStack_78[6] = uVar9;
  abStack_78[7] = uVar10;
  if (uVar13 >> 0x1e < 2) {
    if (uVar19 == 0) {
      func_0x00010006c00c(param_3,param_4);
      func_0x00010006c090(lVar17,uVar2);
      abStack_78[8] = (byte)uVar2;
      abStack_78[9] = (byte)(uVar2 >> 8);
      abStack_78[10] = (byte)(uVar2 >> 0x10);
      abStack_78[0xb] = (byte)(uVar2 >> 0x18);
      abStack_78[0xc] = (byte)(uVar2 >> 0x20);
      abStack_78[0xd] = (byte)(uVar2 >> 0x28);
      abStack_78[0xe] = (byte)(uVar2 >> 0x30);
      FUN_10454bf20(param_1,abStack_78,abStack_78 + abStack_78[0xe],param_3,param_4);
      lVar17 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar15 = CONCAT16(abStack_78[0xe],
                        CONCAT15(abStack_78[0xd],
                                 CONCAT14(abStack_78[0xc],
                                          CONCAT13(abStack_78[0xb],
                                                   CONCAT12(abStack_78[10],
                                                            CONCAT11(abStack_78[9],abStack_78[8]))))
                                ));
      func_0x00010006c090(param_3,param_4);
      func_0x00010006c090(param_3,param_4);
      *param_2 = lVar17;
      param_2[1] = (ulong)uVar15;
    }
    else {
      uVar20 = uVar2 & 0x3fffffffffffffff;
      func_0x00010006c00c(param_3,param_4);
      func_0x00010006c00c(lVar17,uVar2);
      func_0x00010006c090(lVar17,uVar2);
      abStack_78[8] = (byte)uVar20;
      abStack_78[9] = (byte)(uVar20 >> 8);
      abStack_78[10] = (byte)(uVar20 >> 0x10);
      abStack_78[0xb] = (byte)(uVar20 >> 0x18);
      abStack_78[0xc] = (byte)(uVar20 >> 0x20);
      abStack_78[0xd] = (byte)(uVar20 >> 0x28);
      abStack_78[0xe] = (byte)(uVar20 >> 0x30);
      uStack_69 = (undefined1)(uVar20 >> 0x38);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      func_0x00010006c090(0,0xc000000000000000);
      FUN_10454cffc(param_1,abStack_78,param_3,param_4);
      func_0x00010006c090(param_3,param_4);
      *param_2 = CONCAT17(abStack_78[7],
                          CONCAT16(abStack_78[6],
                                   CONCAT15(abStack_78[5],
                                            CONCAT14(abStack_78[4],
                                                     CONCAT13(abStack_78[3],
                                                              CONCAT12(abStack_78[2],
                                                                       CONCAT11(abStack_78[1],
                                                                                abStack_78[0])))))))
      ;
      param_2[1] = CONCAT17(uStack_69,
                            CONCAT16(abStack_78[0xe],
                                     CONCAT15(abStack_78[0xd],
                                              CONCAT14(abStack_78[0xc],
                                                       CONCAT13(abStack_78[0xb],
                                                                CONCAT12(abStack_78[10],
                                                                         CONCAT11(abStack_78[9],
                                                                                  abStack_78[8])))))
                                    )) | 0x4000000000000000;
    }
  }
  else if (uVar19 == 2) {
    uVar20 = uVar2 & 0x3fffffffffffffff;
    func_0x00010006c00c(param_3,param_4);
    _swift_retain(lVar17);
    _swift_retain(uVar20);
    func_0x00010006c090(lVar17,uVar2);
    abStack_78[8] = (byte)uVar20;
    abStack_78[9] = (byte)(uVar20 >> 8);
    abStack_78[10] = (byte)(uVar20 >> 0x10);
    abStack_78[0xb] = (byte)(uVar20 >> 0x18);
    abStack_78[0xc] = (byte)(uVar20 >> 0x20);
    abStack_78[0xd] = (byte)(uVar20 >> 0x28);
    abStack_78[0xe] = (byte)(uVar20 >> 0x30);
    uStack_69 = (undefined1)(uVar20 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar17 = 0;
    func_0x00010006c090(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar14 = CONCAT17(abStack_78[7],
                      CONCAT16(abStack_78[6],
                               CONCAT15(abStack_78[5],
                                        CONCAT14(abStack_78[4],
                                                 CONCAT13(abStack_78[3],
                                                          CONCAT12(abStack_78[2],
                                                                   CONCAT11(abStack_78[1],
                                                                            abStack_78[0])))))));
    uVar2 = CONCAT17(uStack_69,
                     CONCAT16(abStack_78[0xe],
                              CONCAT15(abStack_78[0xd],
                                       CONCAT14(abStack_78[0xc],
                                                CONCAT13(abStack_78[0xb],
                                                         CONCAT12(abStack_78[10],
                                                                  CONCAT11(abStack_78[9],
                                                                           abStack_78[8])))))));
    lVar1 = *(long *)(lVar14 + 0x10);
    lVar3 = *(long *)(lVar14 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar17 == 0) goto LAB_10454cfec;
    lVar18 = lVar17;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar11 = lVar1 - lVar18;
    if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10454cfe4);
      (*pcVar16)();
    }
    lVar12 = lVar3 - lVar1;
    if (SBORROW8(lVar3,lVar1)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10454cfe8);
      (*pcVar16)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar12 <= lVar18) {
      lVar18 = lVar12;
    }
    lVar17 = lVar17 + lVar11;
    FUN_10454bf20(param_1,lVar17,lVar17 + lVar18,param_3,param_4);
    func_0x00010006c090(param_3,param_4);
    func_0x00010006c090(param_3,param_4);
    *param_2 = lVar14;
    param_2[1] = uVar2 | 0x8000000000000000;
  }
  else {
    abStack_78[8] = 0;
    abStack_78[9] = 0;
    abStack_78[10] = 0;
    abStack_78[0xb] = 0;
    abStack_78[0xc] = 0;
    abStack_78[0xd] = 0;
    abStack_78[0] = 0;
    abStack_78[1] = 0;
    abStack_78[2] = 0;
    abStack_78[3] = 0;
    abStack_78[4] = 0;
    abStack_78[5] = 0;
    abStack_78[6] = 0;
    abStack_78[7] = 0;
    FUN_10454bf20(abStack_78,abStack_78,param_3,param_4);
    func_0x00010006c090(param_3,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10454cfec:
  func_0x00010006c090(param_3,param_4);
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10454cffc);
  (*pcVar16)();
}



/* Entry: 10454cffc; end: 10454d0cf;  */

void FUN_10454cffc(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  __s10Foundation4DataV11InlineSliceV21ensureUniqueReferenceyyF();
  lVar7 = (long)*param_2;
  iVar1 = param_2[1];
  if (iVar1 < *param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10454d0c8);
    (*pcVar3)();
  }
  lVar6 = *(long *)(param_2 + 2);
  lVar4 = lVar6;
  _swift_retain();
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar2 = lVar7 - lVar5;
    if (!SBORROW8(lVar7,lVar5)) {
      lVar7 = iVar1 - lVar7;
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar7 <= lVar5) {
        lVar5 = lVar7;
      }
      lVar4 = lVar4 + lVar2;
      FUN_10454bf20(param_1,lVar4,lVar4 + lVar5,param_3,param_4);
      _swift_release(lVar6);
      func_0x00010006c090(param_3,param_4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10454d0cc);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10454d0d0);
  (*pcVar3)();
}



/* Entry: 10454d0d0; end: 10454d157;  */

code * FUN_10454d0d0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x50,0xede5);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  lVar3 = lVar1;
  FUN_10454d3a0();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_10454d194(lVar3,param_2,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_10454d158;
}



/* Entry: 10454d158; end: 10454d193;  */

void FUN_10454d158(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 10454d194; end: 10454d2c7;  */

undefined1  [16] FUN_10454d194(undefined8 *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  
  puVar3 = (undefined8 *)0x98;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    uVar5 = param_2;
    _malloc();
  }
  else {
    uVar5 = 0x4d21;
    _swift_coroFrameAlloc();
  }
  *param_1 = puVar3;
  puVar3[0xf] = param_2;
  puVar3[0x10] = unaff_x20;
  lVar8 = *unaff_x20;
  uVar4 = param_2;
  func_0x00010035a314();
  *(byte *)(puVar3 + 0x12) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10454d284);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar1) {
    param_3 = param_3 & 1;
    func_0x00010459527c(lVar1);
    func_0x00010035a314();
    uVar4 = param_2;
    if (((uint)uVar5 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10454d258);
      (*pcVar2)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000104594860();
    puVar3[0x11] = uVar4;
    goto joined_r0x00010454d298;
  }
  puVar3[0x11] = uVar4;
joined_r0x00010454d298:
  if ((uVar5 & 1) == 0) {
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
  }
  else {
    func_0x000100dba7ec(*(long *)(*unaff_x20 + 0x38) + uVar4 * 0x28,puVar3);
  }
  auVar9._8_8_ = puVar3;
  auVar9._0_8_ = FUN_10454d2c8;
  return auVar9;
}



/* Entry: 10454d2c8; end: 10454d39f;  */

void FUN_10454d2c8(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_1;
  func_0x00010454d4c8(lVar2,lVar2 + 0x50,0x112db4800,&UNK_10d95efc0);
  bVar1 = *(byte *)(lVar2 + 0x90);
  if (*(long *)(lVar2 + 0x68) == 0) {
    func_0x00010454d404(lVar2 + 0x50,0x112db4800,&UNK_10d95efc0);
    if ((bVar1 & 1) != 0) {
      func_0x000104568918(*(undefined8 *)(lVar2 + 0x88),**(undefined8 **)(lVar2 + 0x80));
    }
  }
  else {
    plVar3 = *(long **)(lVar2 + 0x80);
    func_0x000100dba7ec(lVar2 + 0x50,lVar2 + 0x28);
    if ((bVar1 & 1) == 0) {
      FUN_104594590(*(long *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x78),lVar2 + 0x28);
    }
    else {
      func_0x000100dba7ec(lVar2 + 0x28,*(long *)(*plVar3 + 0x38) + *(long *)(lVar2 + 0x88) * 0x28);
    }
  }
  func_0x00010454d404(lVar2,0x112db4800,&UNK_10d95efc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 10454d3a0; end: 10454d3c3;  */

undefined1  [16] FUN_10454d3a0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x10454d3b8;
  return auVar1;
}



/* Entry: 10454d3c4; end: 10454d403;  */

void FUN_10454d3c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084df0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd169f8;
  _swift_getWitnessTable(&UNK_10dd169f8,&UNK_110786678);
  puRam0000000113084df0 = puVar1;
  return;
}



/* Entry: 10454d404; end: 10454d553;  */

undefined8 FUN_10454d404(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}


