/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a5ecd8; end: 101a5edf7;  */

/* WARNING: Removing unreachable block (ram,0x000101a5ed24) */

void FUN_101a5ecd8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [64];
  
  FUN_101a5ff84(param_2,auStack_90,0x112d387f8,&UNK_10d902650);
  FUN_101a5bb90(auStack_70,auStack_90,auStack_a0);
  func_0x000107c6157c(param_3);
  puVar1 = auStack_70;
  FUN_101a5c778(puVar1,param_3);
  func_0x000107c61574(param_3);
  func_0x000101a5c190(auStack_70);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 101a5edf8; end: 101a5ee57; -[_TtC32MemoriesMonetizationServicesImpl19StorageQuotaManager init] */

void FUN_101a5edf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesMonetizationServicesImpl.StorageQuotaManager",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a5ee24);
  (*pcVar1)();
}



/* Entry: 101a5ee58; end: 101a5eedf; -[_TtC32MemoriesMonetizationServicesImpl19StorageQuotaManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a5ee74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a5ee94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a5eec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a5ee98) */
/* WARNING: Removing unreachable block (ram,0x000101a5ee78) */
/* WARNING: Removing unreachable block (ram,0x000101a5eec8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5ee58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112defaa0));
  return;
}



/* Entry: 101a5eee0; end: 101a5eeff;  */

void FUN_101a5eee0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f1c98);
  return;
}



/* Entry: 101a5ef00; end: 101a5efd3; -[_TtC32MemoriesMonetizationServicesImpl19StorageQuotaManager isCurrentTimeAtStorageRisk] */

uint FUN_101a5ef00(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c61174(param_1);
  func_0x000107c5eea0(puVar3);
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,0,1,lVar1);
  puVar2 = puVar3;
  FUN_101a5efd4(puVar3);
  func_0x000107c61170(param_1);
  FUN_101a5fef0(puVar3,0x112d373d8,&UNK_10d9014c0);
  return (uint)puVar2 & 1;
}



/* Entry: 101a5efd4; end: 101a5f2d3;  */

/* WARNING: Removing unreachable block (ram,0x000101a5f188) */
/* WARNING: Removing unreachable block (ram,0x000101a5f140) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101a5efd4(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  double dVar12;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar7 - extraout_x12_00;
  FUN_101a5ff84(param_2,puVar5,0x112d373d8,&UNK_10d9014c0);
  puVar3 = puVar5;
  (**(code **)(lVar11 + 0x30))(puVar5,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_101a5fef0(puVar5,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    pcVar10 = *(code **)(lVar11 + 0x20);
    (*pcVar10)(lVar6,puVar5,lVar2);
    if ((*(char *)(unaff_x20 + _DAT_112defad0) == '\x01') &&
       (func_0x000104886d18(&lStack_78), lVar1 = lStack_78, lStack_78 != 0)) {
      if ((*(ulong *)(lStack_78 + _DAT_11303e908) < *(ulong *)(lStack_78 + _DAT_11303e910)) &&
         (func_0x000104886d18(&lStack_78), lStack_78 != 0)) {
        lVar9 = *(long *)(lStack_78 + _DAT_11303e918);
        lVar4 = lVar9;
        func_0x000107c61174(lVar9);
        func_0x000107c61170(lStack_78);
        if (lVar9 == 0) {
          (**(code **)(lVar11 + 8))(lVar6,lVar2);
          func_0x000107c61170(lVar1);
          return false;
        }
        (**(code **)(lVar11 + 0x10))(lVar8,lVar4 + _DAT_1138127d0,lVar2);
        func_0x000107c61170(lVar4);
        (*pcVar10)(lVar7,lVar8,lVar2);
        func_0x000107c5ee8c();
        if (param_1 == 0.0) {
          func_0x000107c61170(lVar1);
          pcVar10 = *(code **)(lVar11 + 8);
          (*pcVar10)(lVar7,lVar2);
          (*pcVar10)(lVar6,lVar2);
          return false;
        }
        func_0x000107c5ee8c();
        dVar12 = param_1;
        func_0x000107c5ee8c();
        func_0x000107c61170(lVar1);
        pcVar10 = *(code **)(lVar11 + 8);
        (*pcVar10)(lVar7,lVar2);
        (*pcVar10)(lVar6,lVar2);
        return param_1 <= dVar12;
      }
      func_0x000107c61170(lVar1);
    }
    (**(code **)(lVar11 + 8))(lVar6,lVar2);
  }
  return false;
}



/* Entry: 101a5f2d4; end: 101a5f313;  */

void FUN_101a5f2d4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4e01c();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 101a5f314; end: 101a5f3b7; -[_TtC32MemoriesMonetizationServicesImpl19StorageQuotaManager observeQuotaStates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5f314(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_1;
  func_0x000101a5fde8();
  func_0x000107c61174(param_1);
  func_0x0001000c2068(uVar1);
  uVar2 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  pcVar3 = FUN_101a5f2d4;
  func_0x0001000bfde0(FUN_101a5f2d4,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a5f3b8; end: 101a5f427; -[_TtC32MemoriesMonetizationServicesImpl19StorageQuotaManager latestQuotaState] */

/* WARNING: Removing unreachable block (ram,0x000101a5f3f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5f3b8(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000104886d18(&uStack_38);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 101a5f428; end: 101a5f64f;  */

uint FUN_101a5f428(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar7 - extraout_x12_00;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c615f0();
    func_0x000107c3f60c();
    func_0x000107c61180();
    bVar1 = lVar2 == 0;
    if (bVar1) {
      func_0x000107c5eea4();
    }
    else {
      func_0x000107c5ee94(lVar7);
      func_0x000107c61170(lVar2);
      lVar2 = 0;
      func_0x000107c5eea4();
    }
    lVar10 = *(long *)(lVar2 + -8);
    pcVar8 = *(code **)(lVar10 + 0x38);
    (*pcVar8)(lVar7,bVar1,1,lVar2);
    func_0x0001003a4c00(lVar7,puVar6);
    func_0x000107c5eea4(0);
    pcVar9 = *(code **)(lVar10 + 0x30);
    puVar3 = puVar6;
    (*pcVar9)(puVar6,1,lVar2);
    if ((int)puVar3 == 1) {
      lVar7 = param_1;
      func_0x000107c40bd8();
      func_0x000107c61180();
      if (lVar7 != 0) {
        func_0x000107c5ee94(lVar5);
        func_0x000107c61170(lVar7);
      }
      (*pcVar8)(lVar5,lVar7 == 0,1,lVar2);
      puVar3 = puVar6;
      (*pcVar9)(puVar6,1,lVar2);
      if ((int)puVar3 != 1) {
        FUN_101a5fef0(puVar6,0x112d373d8,&UNK_10d9014c0);
      }
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar5,puVar6,lVar2);
      (*pcVar8)(lVar5,0,1,lVar2);
    }
    lVar7 = lVar5;
    FUN_101a5efd4(lVar5);
    uVar4 = (uint)lVar7;
    func_0x000107c615e8(param_1);
    FUN_101a5fef0(lVar5,0x112d373d8,&UNK_10d9014c0);
  }
  return uVar4 & 1;
}



/* Entry: 101a5f650; end: 101a5f6ab; -[_TtC32MemoriesMonetizationServicesImpl19StorageQuotaManager isSnapAtStorageRisk:] */

uint FUN_101a5f650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a5f428(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a5f6ac; end: 101a5f797; -[_TtC32MemoriesMonetizationServicesImpl19StorageQuotaManager isDateAtStorageRisk:] */

uint FUN_101a5f6ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5eea4();
  }
  else {
    func_0x000107c5ee94(puVar3,param_3);
    lVar1 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  func_0x000107c61174(param_1);
  puVar2 = puVar3;
  FUN_101a5efd4(puVar3);
  func_0x000107c61170(param_1);
  FUN_101a5fef0(puVar3,0x112d373d8,&UNK_10d9014c0);
  return (uint)puVar2 & 1;
}



/* Entry: 101a5f798; end: 101a5fd5f;  */

/* WARNING: Removing unreachable block (ram,0x000101a5fbb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5f798(double param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  double dVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  code *pcStack_c0;
  code *pcStack_b8;
  long alStack_90 [2];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)&pcStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar9 - extraout_x12_00;
  lVar12 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar13 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar13 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar12 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar10 - extraout_x12_03;
  if (*(char *)(unaff_x20 + _DAT_112defad0) != '\x01') {
LAB_101a5f94c:
    func_0x000101a5fe9c(0);
    func_0x000103fbdea0();
    return;
  }
  func_0x0001000d224c(alStack_90);
  lVar5 = alStack_90[0];
  lVar4 = alStack_90[0];
  func_0x000107c5ad80();
  func_0x000107c615e8(lVar5);
  if ((int)lVar4 == 0) goto LAB_101a5f94c;
  if (param_2 == 0) {
LAB_101a5f984:
    uVar6 = 1;
  }
  else {
    lVar5 = param_2;
    func_0x000107c40bd8();
    func_0x000107c61180();
    if (lVar5 == 0) goto LAB_101a5f984;
    func_0x000107c5ee94(lVar14);
    func_0x000107c61170(lVar5);
    uVar6 = 0;
  }
  pcStack_b8 = *(code **)(lVar11 + 0x38);
  (*pcStack_b8)(lVar14,uVar6,1,lVar3);
  FUN_101a5ff84(lVar14,lVar10,0x112d373d8,&UNK_10d9014c0);
  pcStack_c0 = *(code **)(lVar11 + 0x30);
  lVar5 = lVar10;
  (*pcStack_c0)(lVar10,1,lVar3);
  iVar1 = (int)lVar5;
  if (iVar1 == 1) {
    FUN_101a5fef0(lVar14,0x112d373d8,&UNK_10d9014c0);
    FUN_101a5fef0(lVar10,0x112d373d8,&UNK_10d9014c0);
    dVar17 = 0.0;
    if (param_2 == 0) goto LAB_101a5fab4;
LAB_101a5fa88:
    func_0x000107c3f60c();
    func_0x000107c61180();
    if (param_2 == 0) goto LAB_101a5fab4;
    func_0x000107c5ee94(lVar12);
    func_0x000107c61170(param_2);
    uVar6 = 0;
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar15,lVar10,lVar3);
    func_0x000107c5ee8c();
    (**(code **)(lVar11 + 8))(lVar15,lVar3);
    FUN_101a5fef0(lVar14,0x112d373d8,&UNK_10d9014c0);
    dVar17 = param_1 * 1000.0;
    param_1 = 1000.0;
    if (param_2 != 0) goto LAB_101a5fa88;
LAB_101a5fab4:
    uVar6 = 1;
  }
  (*pcStack_b8)(lVar12,uVar6,1,lVar3);
  FUN_101a5ff84(lVar12,lVar13,0x112d373d8,&UNK_10d9014c0);
  lVar10 = lVar13;
  (*pcStack_c0)(lVar13,1,lVar3);
  iVar2 = (int)lVar10;
  if (iVar2 == 1) {
    FUN_101a5fef0(lVar12,0x112d373d8,&UNK_10d9014c0);
    FUN_101a5fef0(lVar13,0x112d373d8,&UNK_10d9014c0);
    lVar12 = lVar13;
    dVar7 = param_1;
    param_1 = dVar17;
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,lVar13,lVar3);
    func_0x000107c5ee8c();
    (**(code **)(lVar11 + 8))(lVar9,lVar3);
    FUN_101a5fef0(lVar12,0x112d373d8,&UNK_10d9014c0);
    dVar7 = 1000.0;
    param_1 = param_1 * 1000.0;
  }
  func_0x000104886d18(alStack_90);
  if (alStack_90[0] == 0) {
    lVar12 = 0;
  }
  else {
    func_0x000103fbe010();
    func_0x000107c61170(alStack_90[0]);
  }
  func_0x000107c5eea0(lVar8);
  func_0x000107c5ee8c();
  dVar16 = dVar7;
  (**(code **)(lVar11 + 8))(lVar8,lVar3);
  lVar3 = 0;
  if (iVar1 != 1 || iVar2 != 1) {
    dVar16 = (param_1 + 31536000000.0 + dVar7 * -1000.0) / 86400000.0;
    lVar3 = (long)dVar16;
    dVar17 = param_1;
  }
  if (lVar12 == 0) {
    func_0x000107c610f8(PTR_PTR_1126cfb58);
    func_0x000107c489a4(lVar3);
    return;
  }
  func_0x000107c61174();
  func_0x000107c5d8bc();
  dVar7 = dVar16;
  func_0x000107c4c80c(lVar12);
  if (dVar16 <= dVar7) {
    func_0x000107c610f8(PTR_PTR_1126cfb58);
    goto LAB_101a5fcf0;
  }
  lVar13 = lVar12;
  func_0x000107c5dfa4();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c5bec8();
    func_0x000107c61170(lVar13);
    if (dVar7 != 0.0) {
      if (iVar1 == 1 && iVar2 == 1) {
        func_0x000107c610f8(PTR_PTR_1126cfb58);
        goto LAB_101a5fcf0;
      }
      if (dVar7 <= dVar17) {
        func_0x000107c610f8(PTR_PTR_1126cfb58);
        goto LAB_101a5fcf0;
      }
    }
  }
  func_0x000107c610f8(PTR_PTR_1126cfb58);
LAB_101a5fcf0:
  func_0x000107c489a4(lVar3);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar12);
  return;
}



/* Entry: 101a5fd60; end: 101a5fdbb; -[_TtC32MemoriesMonetizationServicesImpl19StorageQuotaManager quotaThumbnailDecisionForSnap:] */

void FUN_101a5fd60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a5f798(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a5fdbc; end: 101a5fe57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5fdbc(void)

{
  func_0x000101a5fde8();
  func_0x0001000c2068();
  return;
}



/* Entry: 101a5fe58; end: 101a5fedf;  */

void FUN_101a5fe58(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112defb18 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000103fbf074(0xff);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112defb18 = puVar2;
  return;
}



/* Entry: 101a5fee0; end: 101a5feef;  */

void FUN_101a5fee0(ulong param_1)

{
  if (param_1 < 3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 101a5fef0; end: 101a5ff6b;  */

undefined8 FUN_101a5fef0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101a5ff6c; end: 101a5ff83;  */

undefined1  [16] FUN_101a5ff6c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000107c5f804();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar3 = puVar2;
  func_0x000100673624();
  func_0x000107c61534();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar12 = (undefined8 *)(puVar3 + 0x20);
  *puVar12 = puVar2;
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000100673700(puVar3);
  func_0x000107c61588(puVar3);
  uVar11 = *(undefined8 *)(puVar3 + 0x10);
  uVar5 = 0;
  FUN_101a5c704(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar12,uVar11,uVar5);
  func_0x000100120cb0();
  puVar6 = puVar4;
  func_0x000107c5fe08(puVar4,uVar5,puVar12);
  func_0x000107c6142c(puVar4);
  FUN_101a5c704(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar13 + 0x68))
            (puVar10,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
             lVar1);
  puVar7 = puVar10;
  func_0x000107c5fff0(puVar10);
  (**(code **)(lVar13 + 8))(puVar10,lVar1);
  puVar3 = &UNK_110431ae0;
  func_0x000107c613fc(&UNK_110431ae0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_98 = FUN_101a5c744;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  uStack_a8 = 0x10168981c;
  puStack_a0 = &UNK_110431af8;
  ppuVar8 = &puStack_b8;
  puStack_90 = puVar3;
  func_0x000107c60bc4(ppuVar8);
  puVar3 = puStack_90;
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4da64();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  puVar3 = &UNK_110431b30;
  func_0x000107c613fc(&UNK_110431b30,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar9);
  uVar5 = 0x101a5c768;
  func_0x0001000b6d50(0x101a5c768,puVar3);
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(puVar2);
  auVar14._8_8_ = &PTR_DAT_1107aaa40;
  auVar14._0_8_ = uVar5;
  return auVar14;
}



/* Entry: 101a5ff84; end: 101a5ffcb;  */

undefined8 FUN_101a5ff84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101a5ffcc; end: 101a6002b; -[_TtC32MemoriesMonetizationServicesImpl32ValdiStorageQuotaLockedSnapCount init] */

void FUN_101a5ffcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesMonetizationServicesImpl.ValdiStorageQuotaLockedSnapCount",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a5fff8);
  (*pcVar1)();
}



/* Entry: 101a6002c; end: 101a60063; -[_TtC32MemoriesMonetizationServicesImpl32ValdiStorageQuotaLockedSnapCount .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a60048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a6004c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a6002c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112defb40));
  return;
}



/* Entry: 101a60064; end: 101a60083;  */

void FUN_101a60064(void)

{
  func_0x000107c61168(&PTR_PTR_1127f1d90);
  return;
}



/* Entry: 101a60084; end: 101a60217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101a60084(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112defb48);
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8(uStack_40);
  puVar2 = &UNK_110431e40;
  func_0x000107c613fc(&UNK_110431e40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101a60c98;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  uVar3 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c61580(uVar5,2);
  uVar4 = 0x101a60ca8;
  func_0x0001000bfde0(0x101a60ca8,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x00010109e534();
  func_0x0001000c2068();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar4);
  func_0x0001004575f0();
  func_0x000107c61574(puVar2);
  uVar1 = uVar4;
  func_0x000107c5cb24(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  return uVar1;
}



/* Entry: 101a60218; end: 101a6024b; -[_TtC32MemoriesMonetizationServicesImpl32ValdiStorageQuotaLockedSnapCount observeLockedCount] */

void FUN_101a60218(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a60084();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a6024c; end: 101a6045f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101a6024c(double param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_50;
  long lStack_48;
  
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a603d8);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112defb48);
      func_0x0001000d224c(&uStack_50);
      uVar2 = uStack_50;
      func_0x000107c614f0(uStack_50);
      (**(code **)(lStack_48 + 8))();
      func_0x000107c615e8(uStack_50);
      puVar3 = &UNK_110431df0;
      func_0x000107c613fc(&UNK_110431df0,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar6;
      *(long *)(puVar3 + 0x18) = (long)param_1;
      puVar4 = &UNK_110431e18;
      func_0x000107c613fc(&UNK_110431e18,0x20,7);
      *(code **)(puVar4 + 0x10) = FUN_101a60c90;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      uVar5 = 0;
      func_0x0001002ed07c(0);
      func_0x000107c6157c(uVar6);
      func_0x000107c6157c(puVar3);
      uVar6 = 0x101a60ca4;
      func_0x0001000bfde0(0x101a60ca4,puVar4,uVar5);
      func_0x000107c61574(puVar4);
      func_0x00010109e534();
      func_0x0001000c2068();
      func_0x000107c61574(uVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar6);
      func_0x0001004575f0();
      func_0x000107c61574(puVar4);
      uVar2 = uVar6;
      func_0x000107c5cb24(uVar6);
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      return uVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a603e0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a603dc);
  (*pcVar1)();
}



/* Entry: 101a60460; end: 101a604a3; -[_TtC32MemoriesMonetizationServicesImpl32ValdiStorageQuotaLockedSnapCount observeTemporarySaveCountExpiringWithinDaysWithDays:] */

void FUN_101a60460(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_2;
  FUN_101a6024c(param_1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a604a4; end: 101a606b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101a604a4(double param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar1 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&uStack_70 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - extraout_x12;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112defb48);
  func_0x000107c5ee88(lVar8,param_1 / 1000.0);
  func_0x0001000d224c(&uStack_70);
  uVar2 = uStack_70;
  func_0x000107c614f0(uStack_70);
  (**(code **)(lStack_68 + 8))();
  func_0x000107c615e8(uStack_70);
  (**(code **)(lVar12 + 0x10))(lVar10,lVar8,lVar1);
  uVar6 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar7 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar3 = &UNK_110431da0;
  func_0x000107c613fc(&UNK_110431da0,uVar7 + lVar11,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  (**(code **)(lVar12 + 0x20))(puVar3 + uVar7,lVar10,lVar1);
  puVar4 = &UNK_110431dc8;
  func_0x000107c613fc(&UNK_110431dc8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101a60c50;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uVar5 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar9 = 0x101a60ca0;
  func_0x0001000bfde0(0x101a60ca0,puVar4,uVar5);
  func_0x000107c61574(puVar4);
  func_0x00010109e534();
  func_0x0001000c2068();
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar9);
  func_0x0001004575f0();
  func_0x000107c61574(puVar4);
  uVar2 = uVar9;
  func_0x000107c5cb24(uVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  (**(code **)(lVar12 + 8))(lVar8,lVar1);
  return uVar2;
}



/* Entry: 101a606b4; end: 101a60733;  */

undefined8 FUN_101a606b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x18))(param_1,param_3,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 101a60734; end: 101a60777; -[_TtC32MemoriesMonetizationServicesImpl32ValdiStorageQuotaLockedSnapCount observeNewlyExpiredCountSinceWithLastImpressionMs:] */

void FUN_101a60734(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_2;
  FUN_101a604a4(param_1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a60778; end: 101a609eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101a60778(double param_1,double param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  long extraout_x12;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar2 + -8);
  lVar13 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)&uStack_80 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar12 - extraout_x12;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112defb48);
  func_0x000107c5ee88(lVar10,param_1 / 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a609e4);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_2) {
    if (param_2 < 9.223372036854776e+18) {
      func_0x0001000d224c(&uStack_80);
      uVar3 = uStack_80;
      func_0x000107c614f0(uStack_80);
      (**(code **)(lStack_78 + 8))();
      func_0x000107c615e8(uStack_80);
      (**(code **)(lVar14 + 0x10))(lVar12,lVar10,lVar2);
      uVar8 = (ulong)*(byte *)(lVar14 + 0x50);
      uVar9 = uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff);
      uVar15 = lVar13 + uVar9 + 7 & 0xfffffffffffffff8;
      puVar4 = &UNK_110431d50;
      func_0x000107c613fc(&UNK_110431d50,uVar15 + 8,uVar8 | 7);
      *(undefined8 *)(puVar4 + 0x10) = uVar11;
      (**(code **)(lVar14 + 0x20))(puVar4 + uVar9,lVar12,lVar2);
      *(long *)(puVar4 + uVar15) = (long)param_2;
      puVar5 = &UNK_110431d78;
      func_0x000107c613fc(&UNK_110431d78,0x20,7);
      *(code **)(puVar5 + 0x10) = FUN_101a60ac0;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      uVar6 = 0;
      func_0x0001002ed07c(0);
      func_0x000107c6157c(uVar11);
      func_0x000107c6157c(puVar4);
      pcVar1 = FUN_101a60c48;
      func_0x0001000bfde0(FUN_101a60c48,puVar5,uVar6);
      func_0x000107c61574(puVar5);
      func_0x00010109e534();
      func_0x0001000c2068();
      func_0x000107c61574(uVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(pcVar1);
      func_0x0001004575f0();
      func_0x000107c61574(puVar5);
      pcVar7 = pcVar1;
      func_0x000107c5cb24(pcVar1);
      func_0x000107c61180();
      func_0x000107c61170(pcVar1);
      (**(code **)(lVar14 + 8))(lVar10,lVar2);
      return pcVar7;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a609ec);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a609e8);
  (*pcVar1)();
}



/* Entry: 101a609ec; end: 101a60a73;  */

undefined8
FUN_101a609ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x20))(param_1,param_3,param_4,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 101a60a74; end: 101a60abf; -[_TtC32MemoriesMonetizationServicesImpl32ValdiStorageQuotaLockedSnapCount observeNewlyWarningCountSinceWithLastImpressionMs:warningWindowDays:] */

void FUN_101a60a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_3;
  FUN_101a60778(param_1,param_2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a60ac0; end: 101a60b13;  */

undefined8 FUN_101a60ac0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  uVar2 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  func_0x0001000d224c(auStack_68,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x20))(param_1,unaff_x20 + uVar3,uVar2,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 101a60b14; end: 101a60c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a60b14(undefined8 *param_1,long *param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_1138127d0;
  puVar6 = &stack0xffffffffffffffb0 + -extraout_x8;
  if ((*param_2 == 0) || (lVar7 = *(long *)(*param_2 + _DAT_11303e918), lVar7 == 0)) {
    lVar2 = 0;
    func_0x000107c5eea4();
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = 1;
  }
  else {
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar8 = *(long *)(lVar2 + -8);
    (**(code **)(lVar8 + 0x10))(puVar6,lVar7 + lVar1,lVar2);
    pcVar5 = *(code **)(lVar8 + 0x38);
    uVar4 = 0;
  }
  (*pcVar5)(puVar6,uVar4,1,lVar2);
  (*param_3)(puVar6);
  func_0x0001000d1dcc(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *param_1 = puVar3;
  return;
}



/* Entry: 101a60c48; end: 101a60c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a60c48(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  code *pcVar6;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0,*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _DAT_1138127d0;
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  if ((*param_2 == 0) || (lVar8 = *(long *)(*param_2 + _DAT_11303e918), lVar8 == 0)) {
    lVar3 = 0;
    func_0x000107c5eea4();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    uVar5 = 1;
  }
  else {
    lVar3 = 0;
    func_0x000107c5eea4();
    lVar9 = *(long *)(lVar3 + -8);
    (**(code **)(lVar9 + 0x10))(puVar7,lVar8 + lVar2,lVar3);
    pcVar6 = *(code **)(lVar9 + 0x38);
    uVar5 = 0;
  }
  (*pcVar6)(puVar7,uVar5,1,lVar3);
  (*pcVar1)(puVar7);
  func_0x0001000d1dcc(puVar7);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *param_1 = puVar4;
  return;
}



/* Entry: 101a60c50; end: 101a60c8f;  */

undefined8 FUN_101a60c50(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  func_0x0001000d224c(auStack_68,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x18))
            (param_1,unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 101a60c90; end: 101a60cab;  */

undefined8 FUN_101a60c90(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(auStack_68,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(param_1,uVar1,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 101a60cac; end: 101a60cdf;  */

void FUN_101a60cac(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8620;
  func_0x000107c610f8();
  func_0x000107c47600(0,0);
  puRam0000000112defbc0 = puVar1;
  return;
}



/* Entry: 101a60ce0; end: 101a60d3f; -[_TtC32MemoriesMonetizationServicesImpl24ValdiStorageQuotaManager init] */

void FUN_101a60ce0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesMonetizationServicesImpl.ValdiStorageQuotaManager",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a60d0c);
  (*pcVar1)();
}



/* Entry: 101a60d40; end: 101a60d77; -[_TtC32MemoriesMonetizationServicesImpl24ValdiStorageQuotaManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a60d5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a60d60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a60d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112defb78));
  return;
}



/* Entry: 101a60d78; end: 101a60d97;  */

void FUN_101a60d78(void)

{
  func_0x000107c61168(&PTR_PTR_1127f1e58);
  return;
}



/* Entry: 101a60d98; end: 101a60e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101a60d98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c614f0();
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8(uStack_40);
  puVar2 = &UNK_110431e68;
  func_0x000107c613fc(&UNK_110431e68,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  uVar3 = 0;
  FUN_101a61130(0,0x112defbb0,&PTR_PTR_1126a8620);
  pcVar4 = FUN_101a61128;
  func_0x0001000bfde0(FUN_101a61128,puVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar4);
  puVar5 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar5;
}



/* Entry: 101a60e94; end: 101a60eff;  */

void FUN_101a60e94(undefined8 *param_1,long *param_2)

{
  if (*param_2 != 0) {
    func_0x000103fbe010();
    *param_1 = param_2;
    return;
  }
  if (lRam0000000112defbb8 != -1) {
    func_0x000107c61568(0x112defbb8,FUN_101a60cac);
  }
  *param_1 = uRam0000000112defbc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a60f00; end: 101a60f33; -[_TtC32MemoriesMonetizationServicesImpl24ValdiStorageQuotaManager observeQuotaStates] */

void FUN_101a60f00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a60d98();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a60f34; end: 101a610b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101a60f34(void)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  code **ppcVar6;
  code *pcStack_50;
  long lStack_48;
  
  ppcVar6 = &pcStack_50;
  func_0x0001000d224c(&pcStack_50);
  pcVar1 = pcStack_50;
  pcVar2 = pcStack_50;
  func_0x000107c614f0(pcStack_50);
  pcVar3 = pcVar1;
  func_0x000107c4a090();
  if ((int)pcVar3 != 0) {
    func_0x0001000d224c(&pcStack_50);
    pcVar3 = pcStack_50;
    pcVar4 = pcStack_50;
    func_0x000107c5ad80();
    func_0x000107c615e8(pcVar3);
    if ((int)pcVar4 != 0) {
      (**(code **)(lStack_48 + 8))(pcVar2,lStack_48);
      uVar5 = 0;
      FUN_101a61130(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pcVar3 = FUN_101a610b4;
      func_0x0001000bfde0(FUN_101a610b4,0,uVar5);
      func_0x000107c61574(pcVar2);
      func_0x00010109e534();
      func_0x0001000c2068();
      func_0x000107c61574(pcVar3);
      ppcVar6 = (code **)pcVar2;
      goto LAB_101a61064;
    }
  }
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  pcVar3 = (code *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  pcStack_50 = pcVar3;
  func_0x000100854cb0(&pcStack_50);
  func_0x000107c61170(pcVar3);
LAB_101a61064:
  func_0x0001004575f0();
  func_0x000107c61574(ppcVar6);
  pcVar2 = pcVar3;
  func_0x000107c5cb24(pcVar3);
  func_0x000107c61180();
  func_0x000107c615e8(pcVar1);
  func_0x000107c61170(pcVar3);
  return pcVar2;
}



/* Entry: 101a610b4; end: 101a610f3;  */

void FUN_101a610b4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 101a610f4; end: 101a61127; -[_TtC32MemoriesMonetizationServicesImpl24ValdiStorageQuotaManager observeQuotaThumbnailDecisionEnabled] */

void FUN_101a610f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a60f34();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a61128; end: 101a6112f;  */

void FUN_101a61128(undefined8 *param_1,long *param_2)

{
  long unaff_x20;
  
  if (*param_2 != 0) {
    func_0x000103fbe010(param_2,*(undefined8 *)(unaff_x20 + 0x10));
    *param_1 = param_2;
    return;
  }
  if (lRam0000000112defbb8 != -1) {
    func_0x000107c61568(0x112defbb8,FUN_101a60cac);
  }
  *param_1 = uRam0000000112defbc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a61130; end: 101a6116f;  */

void FUN_101a61130(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101a61170; end: 101a611b7;  */

void FUN_101a61170(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9bc9f0,0x9f,2);
  uRam0000000113803a38 = uStack_38;
  uRam0000000113803a30 = uStack_40;
  uRam0000000113803a48 = uStack_28;
  uRam0000000113803a40 = uStack_30;
  uRam0000000113803a58 = uStack_18;
  uRam0000000113803a50 = uStack_20;
  return;
}



/* Entry: 101a611b8; end: 101a612c7;  */

void FUN_101a611b8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x90);
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x90);
        }
        else {
          if (lVar1 != 3) goto LAB_101a612a4;
          pcVar3 = *(code **)(param_3 + 0x90);
        }
LAB_101a61294:
        (*pcVar3)();
      }
      else {
        if (5 < lVar1) {
          if (lVar1 == 6) {
            pcVar3 = *(code **)(param_3 + 0x78);
          }
          else {
            if (lVar1 != 7) goto LAB_101a612a4;
            pcVar3 = *(code **)(param_3 + 0x60);
          }
          goto LAB_101a61294;
        }
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x90);
          goto LAB_101a61294;
        }
        if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x78);
          goto LAB_101a61294;
        }
      }
LAB_101a612a4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101a612c8; end: 101a613eb;  */

void FUN_101a612c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((((((*unaff_x20 == 0) ||
         ((**(code **)(param_3 + 0x30))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
        ((unaff_x20[1] == 0 ||
         ((**(code **)(param_3 + 0x30))(unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) &&
       ((unaff_x20[2] == 0 ||
        ((**(code **)(param_3 + 0x30))(unaff_x20[2],3,param_2,param_3), unaff_x21 == 0)))) &&
      ((unaff_x20[3] == 0 ||
       ((**(code **)(param_3 + 0x30))(unaff_x20[3],4,param_2,param_3), unaff_x21 == 0)))) &&
     (((((int)unaff_x20[4] == 0 ||
        ((**(code **)(param_3 + 0x28))((int)unaff_x20[4],5,param_2,param_3), unaff_x21 == 0)) &&
       ((*(int *)((long)unaff_x20 + 0x24) == 0 ||
        ((**(code **)(param_3 + 0x28))(*(int *)((long)unaff_x20 + 0x24),6,param_2,param_3),
        unaff_x21 == 0)))) &&
      ((unaff_x20[5] == 0 ||
       ((**(code **)(param_3 + 0x20))(unaff_x20[5],7,param_2,param_3), unaff_x21 == 0)))))) {
    func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  }
  return;
}



/* Entry: 101a613ec; end: 101a61427;  */

void FUN_101a613ec(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 0;
  param_1[7] = 0xc000000000000000;
  return;
}



/* Entry: 101a61428; end: 101a61457;  */

undefined1  [16] FUN_101a61428(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 101a61458; end: 101a6148b;  */

void FUN_101a61458(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 101a6148c; end: 101a6149f;  */

undefined1  [16] FUN_101a6148c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x101a6149c;
  return auVar1;
}



/* Entry: 101a614a0; end: 101a614c7;  */

void FUN_101a614a0(void)

{
  FUN_101a611b8();
  return;
}



/* Entry: 101a614c8; end: 101a614cb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101a614c8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101a614cc; end: 101a61503;  */

uint FUN_101a614cc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_101a61b30();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101a61504; end: 101a6154b;  */

uint FUN_101a61504(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_101a61774(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101a6154c; end: 101a615eb;  */

/* WARNING: Possible PIC construction at 0x000101a61598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a615a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a6159c) */
/* WARNING: Removing unreachable block (ram,0x000101a615ac) */

void FUN_101a6154c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112defbc8 != -1) {
    func_0x000107c61568(0x112defbc8,FUN_101a61170);
  }
  uVar5 = uRam0000000113803a58;
  uVar4 = uRam0000000113803a50;
  uVar3 = uRam0000000113803a48;
  uVar2 = uRam0000000113803a40;
  uVar1 = uRam0000000113803a38;
  *param_1 = uRam0000000113803a30;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101a615ec; end: 101a61627;  */

void FUN_101a615ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112defbe8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112defbe8,&UNK_10d9bc9e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101a61628; end: 101a6172b;  */

void FUN_101a61628(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101a6172c; end: 101a61773;  */

uint FUN_101a6172c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_101a61774(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101a61774; end: 101a617ff;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101a61774(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
      ((param_1[3] != param_2[3] || ((int)param_1[4] != (int)param_2[4])))) ||
     ((*(int *)((long)param_1 + 0x24) != *(int *)((long)param_2 + 0x24) ||
      (param_1[5] != param_2[5])))) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[6];
  pbVar25 = (byte *)param_1[7];
  lVar24 = param_2[6];
  uVar16 = param_2[7];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
         ((uVar16 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 101a61800; end: 101a6183f;  */

void FUN_101a61800(void)

{
  undefined *puVar1;
  
  if (puRam0000000112defbd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bc920;
  func_0x000107c61520(&UNK_10d9bc920,&UNK_110431fb0);
  puRam0000000112defbd0 = puVar1;
  return;
}



/* Entry: 101a61840; end: 101a61863;  */

void FUN_101a61840(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101a61864();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101a61864; end: 101a618a3;  */

void FUN_101a61864(void)

{
  undefined *puVar1;
  
  if (puRam0000000112defbd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bc8f8;
  func_0x000107c61520(&UNK_10d9bc8f8,&UNK_110431fb0);
  puRam0000000112defbd8 = puVar1;
  return;
}



/* Entry: 101a618a4; end: 101a618cf;  */

void FUN_101a618a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101a61800();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101a5c110();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101a618d0; end: 101a618d3;  */

void FUN_101a618d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112defbe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bc960;
  func_0x000107c61520(&UNK_10d9bc960,&UNK_110431fb0);
  puRam0000000112defbe0 = puVar1;
  return;
}



/* Entry: 101a618d4; end: 101a61913;  */

void FUN_101a618d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112defbe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bc960;
  func_0x000107c61520(&UNK_10d9bc960,&UNK_110431fb0);
  puRam0000000112defbe0 = puVar1;
  return;
}



/* Entry: 101a61914; end: 101a6193f;  */

long FUN_101a61914(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101a61940; end: 101a6194b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101a61940(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x38) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x38) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101a6194c; end: 101a61a1b;  */

undefined8 * FUN_101a6194c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  uVar1 = param_2[7];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[6] = uVar2;
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 101a61a1c; end: 101a61a6b;  */

undefined8 * FUN_101a61a1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  uVar3 = param_2[7];
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  param_1[7] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101a61a6c; end: 101a61b2f;  */

int FUN_101a61a6c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101a61b30; end: 101a61b6f;  */

void FUN_101a61b30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112defbf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9bc8cc;
  func_0x000107c61520(&DAT_10d9bc8cc,&UNK_110431fb0);
  puRam0000000112defbf0 = puVar1;
  return;
}



/* Entry: 101a61b70; end: 101a61b9f;  */

void FUN_101a61b70(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 101a61ba0; end: 101a61beb;  */

void FUN_101a61ba0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a61bec; end: 101a61c03;  */

void FUN_101a61bec(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a61c04,0,0);
  return;
}



/* Entry: 101a61c04; end: 101a61c9f;  */

void FUN_101a61c04(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(*(long *)(unaff_x22 + 0x40) + 0x10);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x30);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101a61ca0;
                    /* WARNING: Could not recover jumptable at 0x000101a61c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(FUN_101a61ef0,0,uVar3,lVar2);
  return;
}



/* Entry: 101a61ca0; end: 101a61d17;  */

void FUN_101a61ca0(byte param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  *(long *)(lVar3 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x58));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(byte *)(lVar3 + 0x78) = param_1 & 1;
    pcVar2 = FUN_101a61d18;
  }
  else {
    pcVar2 = FUN_101a61e4c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101a61d18; end: 101a61ddf;  */

void FUN_101a61d18(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x78) == '\x01') {
    plVar1 = (long *)0x30;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_101a61de0;
    plVar1[4] = *(long *)(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a61f54,0,0);
    return;
  }
  lVar4 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c5fd64();
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a61d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x0001000d224c(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = uVar3;
  func_0x000107c3e5fc(uVar3);
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a61ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 101a61de0; end: 101a61e4b;  */

void FUN_101a61de0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a61e58,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101a61e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1);
  return;
}



/* Entry: 101a61e4c; end: 101a61e57;  */

void FUN_101a61e4c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101a61e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a61e58; end: 101a61eef;  */

/* WARNING: Removing unreachable block (ram,0x000101a61e7c) */

void FUN_101a61e58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c5fd64();
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000d224c(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = uVar3;
  func_0x000107c3e5fc(uVar3);
  func_0x000107c615e8(uVar3);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a61eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 101a61ef0; end: 101a61f3b;  */

uint FUN_101a61ef0(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 0xb8))();
  return param_1 & 1;
}



/* Entry: 101a61f3c; end: 101a61f53;  */

void FUN_101a61f3c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a61f54,0,0);
  return;
}



/* Entry: 101a61f54; end: 101a62087;  */

void FUN_101a61f54(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x22;
  
  func_0x000107c5fd64();
  func_0x0001000d224c(unaff_x22 + 0x10);
  puVar3 = *(undefined1 **)(unaff_x22 + 0x10);
  puVar1 = puVar3;
  func_0x000107c3e600();
  func_0x000107c615e8();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_101a62118();
    func_0x000107c613f8(&UNK_11072c7d8,puVar3,0,0);
    *puVar3 = 0;
    func_0x000107c61654();
  }
  else {
    puVar2 = PTR_PTR_1126bf798;
    func_0x000107c61168();
    func_0x000107c41580();
    func_0x000107c61180();
    puVar1 = puVar2;
    func_0x000107c3ea6c();
    if (-1 < (int)puVar1) {
      func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a62010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))((ulong)puVar1 & 0xffffffff);
      return;
    }
    FUN_101a62118();
    func_0x000107c613f8(&UNK_11072c7d8,puVar1,0,0);
    *puVar1 = 2;
    func_0x000107c61654();
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a61f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a62088; end: 101a620cf;  */

void FUN_101a62088(void)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a620d0;
  plVar1[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a61c04,0,0);
  return;
}



/* Entry: 101a620d0; end: 101a62117;  */

void FUN_101a620d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a62114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a62118; end: 101a62157;  */

void FUN_101a62118(void)

{
  undefined *puVar1;
  
  if (puRam0000000112defca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb7bb8;
  func_0x000107c61520(&UNK_10dcb7bb8,&UNK_11072c7d8);
  puRam0000000112defca0 = puVar1;
  return;
}



/* Entry: 101a62158; end: 101a623b7;  */

long FUN_101a62158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1104320f8;
  func_0x000107c613fc(&UNK_1104320f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112defca8,&UNK_10d9bcb20);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_101a623b8;
  func_0x0001000bdd8c(FUN_101a623b8,puVar1);
  uVar3 = 0;
  func_0x00010021782c(0);
  func_0x000107c610f8();
  func_0x000103fbf740(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101a623b8; end: 101a623cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a623b8(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130806b8);
  lVar1 = 0;
  func_0x000101a61bcc();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  func_0x0001000285a8(0x112defd80,&UNK_10d9bcb70);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  pcVar3 = FUN_101a61b70;
  func_0x0001000bdd8c(FUN_101a61b70,0);
  *(code **)(lVar2 + 0x18) = pcVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104320d0;
  *param_1 = lVar2;
  return;
}



/* Entry: 101a623d0; end: 101a6246f;  */

void FUN_101a623d0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a62470; end: 101a6247f;  */

void FUN_101a62470(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a62480; end: 101a624db; -[_TtC33SCMemoriesFileManagerServicesImpl19MemoriesFileManager init] */

void FUN_101a62480(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesFileManagerServicesImpl.MemoriesFileManager",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a624ac);
  (*pcVar1)();
}



/* Entry: 101a624dc; end: 101a624eb; -[_TtC33SCMemoriesFileManagerServicesImpl19MemoriesFileManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a624dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112defd88));
  return;
}



/* Entry: 101a624ec; end: 101a627eb;  */

undefined * FUN_101a624ec(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [32];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [32];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    uVar3 = 0x112d37798;
    func_0x0001000285a8(0x112d37798,&UNK_10d902e10);
    func_0x000107c60498(puVar10,uVar3);
    puVar12 = puVar10;
  }
  uVar7 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar12);
  func_0x000107c61434(param_1);
  lVar14 = 0;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar5 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar14 << 6;
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar5 * 8);
      uStack_90 = uVar11;
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar5 * 0x20,auStack_88);
      uVar3 = 0;
      uStack_180 = uVar11;
      FUN_101a64068(0);
      func_0x000107c61174(uVar11);
      func_0x000107c61174();
      func_0x000107c6147c(&uStack_178,&uStack_180,uVar3,PTR___ss11AnyHashableVN_11034e448,7);
      func_0x0001000bb420(auStack_88,auStack_150);
      FUN_101a640b8(&uStack_90,0x112defdc8,&UNK_10d9bcbc8);
      if (lStack_160 == 0) {
        func_0x000107c61574(param_1);
        FUN_101a640b8(&uStack_178,0x112d55e70,&UNK_10d92d170);
        func_0x000107c61574(puVar12);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a627ec);
        (*pcVar1)();
      }
      uStack_128 = uStack_170;
      uStack_130 = uStack_178;
      lStack_118 = lStack_160;
      uStack_120 = uStack_168;
      uStack_110 = uStack_158;
      func_0x000100102924(auStack_150,auStack_108);
      uStack_b8 = uStack_128;
      uStack_c0 = uStack_130;
      lStack_a8 = lStack_118;
      uStack_b0 = uStack_120;
      uStack_a0 = uStack_110;
      func_0x000100102924(auStack_108,auStack_e0);
      uVar4 = *(ulong *)(puVar12 + 0x28);
      func_0x000107c602c4();
      uVar9 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar4 >> 6;
      uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(puVar12 + uVar6 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar5 == 0) {
        bVar2 = false;
        uVar5 = 0x3f - uVar9 >> 6;
        do {
          uVar4 = uVar6 + 1;
          if ((uVar4 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a627c0);
            (*pcVar1)();
          }
          uVar6 = 0;
          if (uVar4 != uVar5) {
            uVar6 = uVar4;
          }
          bVar2 = (bool)(uVar4 == uVar5 | bVar2);
        } while (*(ulong *)(puVar12 + uVar6 * 8 + 0x40) == 0xffffffffffffffff);
        uVar5 = ~*(ulong *)(puVar12 + uVar6 * 8 + 0x40);
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar6 << 6;
      }
      else {
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
      }
      uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar6 + 0x40) = 1L << (uVar5 & 0x3f) | *(ulong *)(puVar12 + uVar6 + 0x40)
      ;
      puVar8 = (undefined8 *)(*(long *)(puVar12 + 0x30) + uVar5 * 0x28);
      puVar8[1] = uStack_b8;
      *puVar8 = uStack_c0;
      puVar8[3] = lStack_a8;
      puVar8[2] = uStack_b0;
      puVar8[4] = uStack_a0;
      func_0x000100102924(auStack_e0,*(long *)(puVar12 + 0x38) + uVar5 * 0x20);
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
    }
    bVar2 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a627bc);
      (*pcVar1)();
    }
    if ((long)(uVar7 + 0x3f >> 6) <= lVar14) break;
    uVar13 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  func_0x000107c61574(puVar12);
  func_0x000107c61574(param_1);
  return puVar12;
}


