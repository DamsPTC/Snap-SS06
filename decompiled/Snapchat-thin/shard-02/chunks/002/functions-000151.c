/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a627ec; end: 101a628e7; -[_TtC33SCMemoriesFileManagerServicesImpl19MemoriesFileManager attributesOfItemAtPath:error:] */

/* WARNING: Removing unreachable block (ram,0x000101a62860) */
/* WARNING: Removing unreachable block (ram,0x000101a628c4) */
/* WARNING: Removing unreachable block (ram,0x000101a62864) */

void FUN_101a627ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_101a63650(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  lVar1 = param_3;
  func_0x000107c5f9dc(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 101a628e8; end: 101a629fb; -[_TtC33SCMemoriesFileManagerServicesImpl19MemoriesFileManager dataWithContentsOfFile:] */

void FUN_101a628e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_3);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c61174(param_1);
    func_0x000107c415e0();
    func_0x000107c61180();
    uVar4 = param_2;
    func_0x000107c5fadc(param_3,param_2);
    puVar1 = puVar3;
    func_0x000107c40520();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_3);
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c61170(param_1);
      func_0x000107c6142c(param_2);
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar1;
      func_0x000107c5ee30(puVar1);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(param_2);
      func_0x000107c61170(puVar1);
      puVar3 = puVar2;
      func_0x000107c5ee20(puVar2,uVar4);
      func_0x00010006c090(puVar2,uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101a629fc; end: 101a62b03; -[_TtC33SCMemoriesFileManagerServicesImpl19MemoriesFileManager dataWithContentsOfURL:] */

void FUN_101a629fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar3,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  uVar4 = (ulong)(param_3 == 0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,uVar4,1);
  puVar2 = puVar3;
  FUN_101a637d8(puVar3);
  FUN_101a640b8(puVar3,0x112d36580,&UNK_10d9016d0);
  if (uVar4 >> 0x3c < 0xf) {
    puVar3 = puVar2;
    func_0x000107c5ee20(puVar2,uVar4);
    func_0x0001000b44c0(puVar2,uVar4);
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101a62b04; end: 101a62c6b; -[_TtC33SCMemoriesFileManagerServicesImpl19MemoriesFileManager removeItemAtURL:error:] */

/* WARNING: Removing unreachable block (ram,0x000101a62bc4) */
/* WARNING: Removing unreachable block (ram,0x000101a62c30) */
/* WARNING: Removing unreachable block (ram,0x000101a62bd0) */

undefined8 FUN_101a62b04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined1 auStack_40 [16];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_40 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar2,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_3 == 0,1);
  func_0x000107c61174(param_1);
  FUN_101a63a54(puVar2);
  FUN_101a640b8(puVar2,0x112d36580,&UNK_10d9016d0);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 101a62c6c; end: 101a630a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a62c6c(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long extraout_x8_00;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar12 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar8 - extraout_x12_00;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000100de78a0(param_1,param_2);
  uVar6 = 0x112d56fe0;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  puVar4 = &uStack_70;
  func_0x000107c5fb18(puVar4,uVar6);
  func_0x000101a640f8(param_3,lVar11,0x112d36580,&UNK_10d9016d0);
  func_0x000107c5fb18(lVar11,lVar9);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x24);
  func_0x000107c6142c(uStack_68);
  uStack_70 = 0x203a61746144;
  uStack_68 = 0xe600000000000000;
  func_0x000107c5fb78(puVar4,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0x4c5255206f74202c,0xea0000000000203a);
  func_0x000107c5fb78(lVar11,lVar9);
  func_0x000107c6142c(lVar9);
  func_0x000107c5fb78(0x63696d6f7461202c,0xee00203a796c6c61);
  bVar2 = (param_4 & 1) == 0;
  uVar6 = 0x65757274;
  if (bVar2) {
    uVar6 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uStack_68);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000101a640f8(param_3,lVar8,0x112d36580,&UNK_10d9016d0);
    lVar9 = lVar8;
    (**(code **)(lVar10 + 0x30))(lVar8,1,lVar3);
    if ((int)lVar9 == 1) {
      func_0x000101a640b8(lVar8,0x112d36580,&UNK_10d9016d0);
    }
    else {
      (**(code **)(lVar10 + 0x20))(puVar7,lVar8,lVar3);
      lVar9 = *(long *)(unaff_x20 + _DAT_112defd88);
      uVar5 = param_2;
      func_0x00010006c00c(param_1,param_2);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 != 0) {
        lVar11 = lVar9;
        func_0x000107c5edc4();
        uVar6 = param_1;
        func_0x000107c5ee20(param_1,param_2);
        func_0x000107c5fadc(lVar11,uVar5);
        lVar8 = lVar9;
        func_0x000107c5e90c(lVar9);
        func_0x0001000b44c0(param_1,param_2);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(lVar11);
        func_0x000107c615e8(lVar9);
        func_0x000107c6142c(uVar5);
        (**(code **)(lVar10 + 8))(puVar7,lVar3);
        return lVar8;
      }
      (**(code **)(lVar10 + 8))(puVar7,lVar3);
      func_0x0001000b44c0(param_1,param_2);
    }
  }
  func_0x000101a640f8(param_3,lVar12,0x112d36580,&UNK_10d9016d0);
  uVar6 = 1;
  lVar9 = lVar12;
  (**(code **)(lVar10 + 0x30))(lVar12,1,lVar3);
  if ((int)lVar9 == 1) {
    func_0x000101a640b8(lVar12,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000107c5edc4();
    func_0x000107c6142c(uVar6);
    (**(code **)(lVar10 + 8))(lVar12,lVar3);
  }
  return 0;
}



/* Entry: 101a630a4; end: 101a63207; -[_TtC33SCMemoriesFileManagerServicesImpl19MemoriesFileManager writeData:toURL:atomically:] */

uint FUN_101a630a4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined *puVar3;
  
  lVar1 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_1);
    puVar3 = (undefined *)0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_1);
    lVar1 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30(param_3);
    func_0x000107c61170(lVar1);
  }
  if (param_4 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar2,param_4);
    func_0x000107c61170(param_4);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_4 == 0,1);
  lVar1 = param_3;
  FUN_101a62c6c(param_3,puVar3,puVar2,param_5);
  func_0x0001000b44c0(param_3,puVar3);
  func_0x000107c61170(param_1);
  FUN_101a640b8(puVar2,0x112d36580,&UNK_10d9016d0);
  return (uint)lVar1 & 1;
}



/* Entry: 101a63208; end: 101a6334b; -[_TtC33SCMemoriesFileManagerServicesImpl19MemoriesFileManager fileExistsAtURL:] */

uint FUN_101a63208(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffe0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar3,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  puVar2 = puVar3;
  FUN_101a63d98(puVar3);
  FUN_101a640b8(puVar3,0x112d36580,&UNK_10d9016d0);
  return (uint)puVar2 & 1;
}



/* Entry: 101a6334c; end: 101a633bb;  */

undefined1 * FUN_101a6334c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 101a633bc; end: 101a633c3;  */

void FUN_101a633bc(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 101a633c4; end: 101a635bb;  */

void FUN_101a633c4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 101a635bc; end: 101a635e3;  */

void FUN_101a635bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 101a635e4; end: 101a6364f;  */

void FUN_101a635e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112defdc0;
  FUN_101a641ac(0x112defdc0,&UNK_10d9c6700);
  uVar2 = 0x112defdf0;
  FUN_101a641ac(0x112defdf0,&UNK_10d9eea50);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 101a63650; end: 101a637d7;  */

undefined1  [16] FUN_101a63650(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x12;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar8;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(param_1,param_2);
    puVar1 = puVar8;
    func_0x000107c3e388();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(param_1);
    puVar6 = (undefined *)0x0;
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c5ed30();
      puVar8 = puVar6;
      func_0x000107c61170(puVar6);
      func_0x000107c61654();
    }
    else {
      param_2 = 0;
      FUN_101a64068(0);
      uVar2 = 0x112defdc0;
      FUN_101a641ac(0x112defdc0,&UNK_10d9c6700);
      puVar8 = puVar1;
      func_0x000107c5f9e8(puVar1,param_2,PTR___sypN_11034f1a8 + 8,uVar2);
      func_0x000107c61174(0);
      func_0x000107c61170(puVar1);
      puVar6 = puVar8;
      FUN_101a624ec();
      func_0x000107c6142c(puVar8);
    }
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar4 == lVar3) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = puVar6;
    return auVar12;
  }
  func_0x000107c60e78();
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar5 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar7 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar7 - extraout_x12;
  func_0x000101a640f8(puVar8,lVar9,0x112d36580,&UNK_10d9016d0);
  pcVar10 = *(code **)(lVar11 + 0x30);
  lVar3 = lVar9;
  (*pcVar10)(lVar9,1,lVar4);
  if ((int)lVar3 == 1) {
    func_0x000101a640b8(lVar9,0x112d36580,&UNK_10d9016d0);
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    lStack_98 = lVar4;
    func_0x0001000a9d90(&uStack_b0);
    (**(code **)(lVar11 + 0x20))();
  }
  func_0x000101a640b8(&uStack_b0,0x112d387f8,&UNK_10d902650);
  func_0x000101a640f8(puVar8,lVar7,0x112d36580,&UNK_10d9016d0);
  lVar3 = lVar7;
  (*pcVar10)(lVar7,1,lVar4);
  if ((int)lVar3 == 1) {
    func_0x000101a640b8(lVar7,0x112d36580,&UNK_10d9016d0);
    puVar8 = (undefined *)0x0;
    lVar9 = -0x1000000000000000;
  }
  else {
    lVar3 = lVar5;
    (**(code **)(lVar11 + 0x20))(lVar5,lVar7,lVar4);
    func_0x000107c5edc4();
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    lVar9 = lVar7;
    func_0x000107c5fadc(lVar3,lVar7);
    puVar6 = puVar8;
    func_0x000107c40520();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar3);
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c6142c(lVar7);
      puVar8 = (undefined *)0x0;
      lVar9 = -0x1000000000000000;
    }
    else {
      puVar8 = puVar6;
      func_0x000107c5ee30(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c6142c(lVar7);
    }
    (**(code **)(lVar11 + 8))(lVar5,lVar4);
  }
  auVar13._8_8_ = lVar9;
  auVar13._0_8_ = puVar8;
  return auVar13;
}



/* Entry: 101a637d8; end: 101a63a53;  */

undefined1  [16] FUN_101a637d8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar5 - extraout_x12;
  func_0x000101a640f8(param_1,lVar7,0x112d36580,&UNK_10d9016d0);
  pcVar8 = *(code **)(lVar9 + 0x30);
  lVar2 = lVar7;
  (*pcVar8)(lVar7,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x000101a640b8(lVar7,0x112d36580,&UNK_10d9016d0);
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    lStack_58 = lVar1;
    func_0x0001000a9d90(&uStack_70);
    (**(code **)(lVar9 + 0x20))();
  }
  func_0x000101a640b8(&uStack_70,0x112d387f8,&UNK_10d902650);
  func_0x000101a640f8(param_1,lVar5,0x112d36580,&UNK_10d9016d0);
  lVar2 = lVar5;
  (*pcVar8)(lVar5,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x000101a640b8(lVar5,0x112d36580,&UNK_10d9016d0);
    puVar6 = (undefined *)0x0;
    lVar7 = -0x1000000000000000;
  }
  else {
    lVar2 = lVar4;
    (**(code **)(lVar9 + 0x20))(lVar4,lVar5,lVar1);
    func_0x000107c5edc4();
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c5fadc(lVar2,lVar5);
    puVar3 = puVar6;
    func_0x000107c40520();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar2);
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c6142c(lVar5);
      puVar6 = (undefined *)0x0;
      lVar7 = -0x1000000000000000;
    }
    else {
      puVar6 = puVar3;
      func_0x000107c5ee30(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c6142c(lVar5);
    }
    (**(code **)(lVar9 + 8))(lVar4,lVar1);
  }
  auVar10._8_8_ = lVar7;
  auVar10._0_8_ = puVar6;
  return auVar10;
}



/* Entry: 101a63a54; end: 101a63d97;  */

undefined * FUN_101a63a54(code *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *unaff_x21;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long alStack_120 [16];
  undefined auStack_a0 [8];
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar4 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  pcVar10 = (code *)&UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = puVar4 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = puVar7 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = puVar9 + -extraout_x12_00;
  func_0x000101a640f8(param_1,puVar11,0x112d36580,&UNK_10d9016d0);
  pcVar13 = *(code **)(lVar15 + 0x30);
  puVar3 = puVar11;
  (*pcVar13)(puVar11,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x000101a640b8(puVar11,0x112d36580,&UNK_10d9016d0);
    uStack_88 = 0;
    pcStack_90 = (code *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    lStack_78 = lVar1;
    func_0x0001000a9d90(&pcStack_90);
    (**(code **)(lVar15 + 0x20))();
  }
  func_0x000101a640b8(&pcStack_90,0x112d387f8,&UNK_10d902650);
  func_0x000101a640f8(param_1,puVar9,0x112d36580,&UNK_10d9016d0);
  puVar3 = puVar9;
  (*pcVar13)(puVar9,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x000101a640b8(puVar9,0x112d36580,&UNK_10d9016d0);
    func_0x000101a640f8(param_1,puVar7,0x112d36580,&UNK_10d9016d0);
    uVar5 = 1;
    puVar4 = puVar7;
    (*pcVar13)(puVar7,1,lVar1);
    puVar3 = puVar7;
    puVar12 = &UNK_10d9016d0;
    if ((int)puVar4 == 1) {
      func_0x000101a640b8(puVar7,0x112d36580,&UNK_10d9016d0);
      puVar4 = (undefined *)0x112d36580;
    }
    else {
      func_0x000107c5edc4();
      func_0x000107c6142c(uVar5);
      (**(code **)(lVar15 + 8))(puVar7,lVar1);
      puVar4 = puVar7;
    }
  }
  else {
    (**(code **)(lVar15 + 0x20))(puVar4,puVar9,lVar1);
    func_0x000107c5edc4();
    func_0x000107c6142c(puVar9);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar7 = puVar3;
    func_0x000107c5ed90();
    pcStack_90 = (code *)0x0;
    puVar9 = puVar3;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar7);
    pcVar10 = pcStack_90;
    puVar3 = puVar4;
    puVar12 = puVar11;
    if ((int)puVar9 == 0) {
      param_1 = pcStack_90;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(param_1);
      func_0x000107c61654();
      (**(code **)(lVar15 + 8))(puVar4,lVar1);
      unaff_x21 = pcVar10;
    }
    else {
      param_1 = *(code **)(lVar15 + 8);
      func_0x000107c61174(pcStack_90);
      (*param_1)(puVar4,lVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    *(long *)(puVar11 + -0x60) = lVar15;
    *(code **)(puVar11 + -0x58) = pcVar13;
    *(undefined **)(puVar11 + -0x50) = puVar12;
    *(undefined **)(puVar11 + -0x48) = puVar9;
    *(undefined **)(puVar11 + -0x40) = puVar7;
    *(code **)(puVar11 + -0x38) = param_1;
    *(long *)(puVar11 + -0x30) = lVar1;
    *(code **)(puVar11 + -0x28) = unaff_x21;
    *(undefined **)(puVar11 + -0x20) = puVar4;
    *(code **)(puVar11 + -0x18) = pcVar10;
    *(undefined1 **)(puVar11 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(puVar11 + -8) = FUN_101a63d98;
    lVar1 = 0;
    func_0x000107c5ede0();
    lVar14 = *(long *)(lVar1 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
    puVar7 = puVar11 + (-0x80 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    lVar6 = (long)puVar7 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar15 = lVar6 - extraout_x12_01;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar8 = lVar15 - extraout_x12_02;
    func_0x000101a640f8(puVar3,lVar8,0x112d36580,&UNK_10d9016d0);
    pcVar10 = *(code **)(lVar14 + 0x30);
    lVar2 = lVar8;
    (*pcVar10)(lVar8,1,lVar1);
    if ((int)lVar2 == 1) {
      func_0x000101a640b8(lVar8,0x112d36580,&UNK_10d9016d0);
      *(undefined8 *)(puVar11 + -0x78) = 0;
      *(undefined8 *)(puVar11 + -0x80) = 0;
      *(undefined8 *)(puVar11 + -0x68) = 0;
      *(undefined8 *)(puVar11 + -0x70) = 0;
    }
    else {
      *(long *)(puVar11 + -0x68) = lVar1;
      func_0x0001000a9d90(puVar11 + -0x80);
      (**(code **)(lVar14 + 0x20))();
    }
    func_0x000101a640b8(puVar11 + -0x80,0x112d387f8,&UNK_10d902650);
    func_0x000101a640f8(puVar3,lVar15,0x112d36580,&UNK_10d9016d0);
    lVar2 = lVar15;
    (*pcVar10)(lVar15,1,lVar1);
    if ((int)lVar2 == 1) {
      func_0x000101a640b8(lVar15,0x112d36580,&UNK_10d9016d0);
      func_0x000101a640f8(puVar3,lVar6,0x112d36580,&UNK_10d9016d0);
      uVar5 = 1;
      lVar2 = lVar6;
      (*pcVar10)(lVar6,1,lVar1);
      if ((int)lVar2 == 1) {
        func_0x000101a640b8(lVar6,0x112d36580,&UNK_10d9016d0);
      }
      else {
        func_0x000107c5edc4();
        func_0x000107c6142c(uVar5);
        (**(code **)(lVar14 + 8))(lVar6,lVar1);
      }
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar7;
      (**(code **)(lVar14 + 0x20))(puVar7,lVar15,lVar1);
      func_0x000107c5edc4();
      puVar9 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      func_0x000107c415e0();
      func_0x000107c61180();
      func_0x000107c5fadc(puVar3,lVar15);
      puVar4 = puVar9;
      func_0x000107c43418(puVar9);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar3);
      func_0x000107c6142c(lVar15);
      (**(code **)(lVar14 + 8))(puVar7,lVar1);
    }
    return puVar4;
  }
  return puVar3;
}



/* Entry: 101a63d98; end: 101a64067;  */

undefined * FUN_101a63d98(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar6 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12_00;
  func_0x000101a640f8(param_1,lVar9,0x112d36580,&UNK_10d9016d0);
  pcVar10 = *(code **)(lVar11 + 0x30);
  lVar2 = lVar9;
  (*pcVar10)(lVar9,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x000101a640b8(lVar9,0x112d36580,&UNK_10d9016d0);
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    lStack_68 = lVar1;
    func_0x0001000a9d90(&uStack_80);
    (**(code **)(lVar11 + 0x20))();
  }
  func_0x000101a640b8(&uStack_80,0x112d387f8,&UNK_10d902650);
  func_0x000101a640f8(param_1,lVar8,0x112d36580,&UNK_10d9016d0);
  lVar2 = lVar8;
  (*pcVar10)(lVar8,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x000101a640b8(lVar8,0x112d36580,&UNK_10d9016d0);
    func_0x000101a640f8(param_1,lVar7,0x112d36580,&UNK_10d9016d0);
    uVar5 = 1;
    lVar2 = lVar7;
    (*pcVar10)(lVar7,1,lVar1);
    if ((int)lVar2 == 1) {
      func_0x000101a640b8(lVar7,0x112d36580,&UNK_10d9016d0);
    }
    else {
      func_0x000107c5edc4();
      func_0x000107c6142c(uVar5);
      (**(code **)(lVar11 + 8))(lVar7,lVar1);
    }
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar6;
    (**(code **)(lVar11 + 0x20))(lVar6,lVar8,lVar1);
    func_0x000107c5edc4();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(lVar2,lVar8);
    puVar4 = puVar3;
    func_0x000107c43418(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(lVar8);
    (**(code **)(lVar11 + 8))(lVar6,lVar1);
  }
  return puVar4;
}



/* Entry: 101a64068; end: 101a640b7;  */

void FUN_101a64068(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112defdd0 != 0) {
    return;
  }
  puVar1 = &UNK_1104321e0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112defdd0 = param_1;
  return;
}



/* Entry: 101a640b8; end: 101a6413f;  */

undefined8 FUN_101a640b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101a64140; end: 101a641ab;  */

void FUN_101a64140(void)

{
  FUN_101a641ac(0x112defdd8,&UNK_10d9bcc00);
  return;
}



/* Entry: 101a641ac; end: 101a641eb;  */

void FUN_101a641ac(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_101a64068(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101a641ec; end: 101a641fb;  */

undefined1  [16] FUN_101a641ec(void)

{
  return ZEXT816(0x110432238);
}



/* Entry: 101a641fc; end: 101a6422f;  */

void FUN_101a641fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101a64230; end: 101a64237;  */

void FUN_101a64230(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a64238; end: 101a6425b;  */

void FUN_101a64238(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a6425c; end: 101a642f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a6425c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4d8b4();
  func_0x000107c61180();
  lVar2 = 0;
  func_0x000100722394();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112defd88) = uVar1;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  puVar5 = PTR_PTR_1126a8628;
  func_0x000107c610f8();
  func_0x000107c46910();
  func_0x000107c61170(plVar4);
  *param_1 = puVar5;
  return;
}



/* Entry: 101a642f4; end: 101a6432f; -[_TtC42SCMemoriesSnapDocSerializationServicesImpl39MemoriesSnapDocSerializationManagerImpl init] */

void FUN_101a642f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101a64330; end: 101a64383;  */

void FUN_101a64330(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101a64384; end: 101a643d3;  */

void FUN_101a64384(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7c50;
  func_0x000107c610f8();
  func_0x000107c47640();
  puVar2 = puVar1;
  func_0x000107c3ecd0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puRam0000000113803a60 = puVar2;
  return;
}



/* Entry: 101a643d4; end: 101a643d7;  */

/* WARNING: Removing unreachable block (ram,0x000101a6443c) */

undefined1  [16] FUN_101a643d4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(param_1,param_2);
  lVar1 = param_1;
  func_0x0001010282b0(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  uVar3 = (ulong)(lVar1 == 0);
  if ((lVar1 != 0) && ((param_3 & 1) != 0)) {
    if (lRam0000000112defef0 != -1) {
      func_0x000107c61568(0x112defef0,FUN_101a64384);
    }
    lVar2 = lVar1;
    func_0x000108022988(lVar1,uRam0000000113803a60);
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      lVar1 = 1;
      uVar3 = 1;
    }
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = lVar1;
  return auVar4;
}



/* Entry: 101a643d8; end: 101a644df;  */

/* WARNING: Removing unreachable block (ram,0x000101a6443c) */

undefined1  [16] FUN_101a643d8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(param_1,param_2);
  lVar1 = param_1;
  func_0x0001010282b0(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  uVar3 = (ulong)(lVar1 == 0);
  if ((lVar1 != 0) && ((param_3 & 1) != 0)) {
    if (lRam0000000112defef0 != -1) {
      func_0x000107c61568(0x112defef0,FUN_101a64384);
    }
    lVar2 = lVar1;
    func_0x000108022988(lVar1,uRam0000000113803a60);
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      lVar1 = 1;
      uVar3 = 1;
    }
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = lVar1;
  return auVar4;
}



/* Entry: 101a644e0; end: 101a644ff;  */

void FUN_101a644e0(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101a64500; end: 101a6459f;  */

void FUN_101a64500(void)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112defef8,&UNK_10d9bcd40);
  func_0x000107c613fc();
  uVar1 = 0x101a64568;
  func_0x0001000bdd8c(0x101a64568,0);
  func_0x0001001c7b48(0);
  func_0x000107c610f8();
  func_0x000103fbfb8c(uVar1);
  return;
}



/* Entry: 101a645a0; end: 101a645af;  */

void FUN_101a645a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a645b0; end: 101a6461b;  */

void FUN_101a645b0(undefined8 param_1)

{
  if (lRam0000000112deff28 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66a240);
  return;
}



/* Entry: 101a6461c; end: 101a6468f;  */

void FUN_101a6461c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112defef8,&UNK_10d9bcd40);
  func_0x000107c613fc();
  uVar1 = 0x101a64568;
  func_0x0001000bdd8c(0x101a64568,0);
  uVar2 = 0;
  func_0x0001001c7b48(0);
  func_0x000107c610f8();
  func_0x000103fbfb8c(uVar1,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a64690; end: 101a647ab;  */

long FUN_101a64690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1104323b0;
  func_0x000107c613fc(&UNK_1104323b0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x0001000285a8(0x112deffc8,&UNK_10d9bcd80);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  pcVar2 = FUN_101a648fc;
  func_0x0001000bdd8c(FUN_101a648fc,puVar1);
  uVar3 = 0;
  func_0x000100235fdc(0);
  func_0x000107c610f8();
  func_0x00010079a24c(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101a647ac; end: 101a648fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a647ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  func_0x0001000285a8(0x112df00a0,&UNK_10d9bcdf0);
  func_0x000107c3f530();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  uVar6 = *(undefined8 *)(param_4 + _DAT_112df27f8);
  lVar2 = 0;
  FUN_101a66354();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112df00b0) = uVar1;
  *(undefined8 *)(lVar3 + _DAT_112df00b8) = uVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  pcVar4 = FUN_101a649c8;
  func_0x0001000cb480(FUN_101a649c8,0,PTR___sSbN_11034dd40);
  *(code **)(lVar3 + _DAT_112df00c0) = pcVar4;
  uVar6 = 0x101a649f0;
  func_0x0001000cb480(0x101a649f0,0,PTR___sSiN_11034deb0);
  *(undefined8 *)(lVar3 + _DAT_112df00c8) = uVar6;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar1);
  *param_1 = plVar5;
  param_1[1] = &PTR_DAT_110432428;
  return;
}



/* Entry: 101a648fc; end: 101a64907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a648fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = &lStack_50;
  func_0x0001000285a8(0x112df00a0,&UNK_10d9bcdf0);
  func_0x000107c3f530();
  func_0x000107c61180();
  uVar1 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(lVar5 + _DAT_112df27f8);
  lVar2 = 0;
  FUN_101a66354();
  lVar5 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112df00b0) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112df00b8) = uVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  pcVar3 = FUN_101a649c8;
  func_0x0001000cb480(FUN_101a649c8,0,PTR___sSbN_11034dd40);
  *(code **)(lVar5 + _DAT_112df00c0) = pcVar3;
  uVar6 = 0x101a649f0;
  func_0x0001000cb480(0x101a649f0,0,PTR___sSiN_11034deb0);
  *(undefined8 *)(lVar5 + _DAT_112df00c8) = uVar6;
  lStack_50 = lVar5;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar1);
  *param_1 = plVar4;
  param_1[1] = &PTR_DAT_110432428;
  return;
}



/* Entry: 101a64908; end: 101a6493b;  */

void FUN_101a64908(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a6493c; end: 101a64943;  */

void FUN_101a6493c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a64944; end: 101a64967;  */

void FUN_101a64944(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a64968; end: 101a64973;  */

void FUN_101a64968(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a64974; end: 101a649c3;  */

void FUN_101a64974(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112df00a8 != 0) {
    return;
  }
  puVar1 = &UNK_110432400;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112df00a8 = param_1;
  return;
}



/* Entry: 101a649c4; end: 101a649c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a649c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = &lStack_50;
  func_0x0001000285a8(0x112df00a0,&UNK_10d9bcdf0);
  func_0x000107c3f530();
  func_0x000107c61180();
  uVar1 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(lVar5 + _DAT_112df27f8);
  lVar2 = 0;
  FUN_101a66354();
  lVar5 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112df00b0) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112df00b8) = uVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  pcVar3 = FUN_101a649c8;
  func_0x0001000cb480(FUN_101a649c8,0,PTR___sSbN_11034dd40);
  *(code **)(lVar5 + _DAT_112df00c0) = pcVar3;
  uVar6 = 0x101a649f0;
  func_0x0001000cb480(0x101a649f0,0,PTR___sSiN_11034deb0);
  *(undefined8 *)(lVar5 + _DAT_112df00c8) = uVar6;
  lStack_50 = lVar5;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar1);
  *param_1 = plVar4;
  param_1[1] = &PTR_DAT_110432428;
  return;
}



/* Entry: 101a649c8; end: 101a64a17;  */

void FUN_101a649c8(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c41f14();
  *param_1 = uVar1;
  return;
}



/* Entry: 101a64a18; end: 101a64a77; -[_TtC37MemoriesSnapDocValidationServicesImpl24MemoriesSnapDocValidator init] */

void FUN_101a64a18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapDocValidationServicesImpl.MemoriesSnapDocValidator",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a64a44);
  (*pcVar1)();
}



/* Entry: 101a64a78; end: 101a64acf; -[_TtC37MemoriesSnapDocValidationServicesImpl24MemoriesSnapDocValidator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a64a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a64ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a64a98) */
/* WARNING: Removing unreachable block (ram,0x000101a64ab8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a64a78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df00b0));
  return;
}



/* Entry: 101a64ad0; end: 101a64b53;  */

void FUN_101a64ad0(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x140) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_5;
  *(long *)(unaff_x22 + 0x130) = param_3;
  *(long *)(unaff_x22 + 0x138) = param_4;
  *(long *)(unaff_x22 + 0x120) = param_1;
  *(long *)(unaff_x22 + 0x128) = param_2;
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x150) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a64b54;
  plVar1[0x1d] = unaff_x20;
  plVar1[0x1e] = unaff_x22 + 0x10;
  plVar1[0x1b] = param_3;
  plVar1[0x1c] = param_4;
  plVar1[0x19] = param_1;
  plVar1[0x1a] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a653d8,0,0);
  return;
}



/* Entry: 101a64b54; end: 101a64be7;  */

void FUN_101a64b54(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar4 + 0x158) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x150));
  if (unaff_x20 != 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    uVar1 = *(undefined1 *)(lVar4 + 0x68);
    puVar3 = *(undefined8 **)(lVar4 + 0x148);
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    uVar10 = *(undefined8 *)(lVar4 + 0x38);
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
    uVar12 = *(undefined8 *)(lVar4 + 0x48);
    uVar11 = *(undefined8 *)(lVar4 + 0x40);
    uVar14 = *(undefined8 *)(lVar4 + 0x58);
    uVar13 = *(undefined8 *)(lVar4 + 0x50);
    puVar3[1] = *(undefined8 *)(lVar4 + 0x18);
    *puVar3 = uVar6;
    puVar3[3] = uVar8;
    puVar3[2] = uVar7;
    puVar3[5] = uVar10;
    puVar3[4] = uVar9;
    puVar3[7] = uVar12;
    puVar3[6] = uVar11;
    puVar3[9] = uVar14;
    puVar3[8] = uVar13;
    puVar3[10] = uVar2;
    *(undefined1 *)(puVar3 + 0xb) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000101a64bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a64be8,0,0);
  return;
}



/* Entry: 101a64be8; end: 101a64e3f;  */

void FUN_101a64be8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  undefined1 uVar11;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x22;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar16 = *(long *)(unaff_x22 + 0x120);
  puVar5 = PTR_PTR_1126c7c50;
  func_0x000107c610f8(PTR_PTR_1126c7c50);
  func_0x000107c47640();
  puVar6 = puVar5;
  func_0x000107c3ecd0();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000108022988(lVar16,puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (lVar16 == 0) {
    lVar16 = *(long *)(unaff_x22 + 0x120);
    func_0x000107c42400();
    func_0x000107c61180();
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a64e40);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar8 = lVar16;
    func_0x000107c44b0c();
    func_0x000107c61170(lVar16);
    if ((int)lVar8 != 0) {
      plVar9 = (long *)0x310;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x160) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_101a64e40;
      lVar16 = *(long *)(unaff_x22 + 0x138);
      lVar2 = *(long *)(unaff_x22 + 0x140);
      lVar8 = *(long *)(unaff_x22 + 0x128);
      lVar3 = *(long *)(unaff_x22 + 0x130);
      lVar10 = *(long *)(unaff_x22 + 0x120);
      plVar9[0x5c] = unaff_x22 + 0x10;
      plVar9[0x5b] = lVar2;
      plVar9[0x5a] = lVar16;
      plVar9[0x59] = lVar3;
      plVar9[0x58] = lVar8;
      plVar9[0x57] = lVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101a656f8,0,0);
      return;
    }
    lVar16 = *(long *)(unaff_x22 + 0x158);
    FUN_101a65ec4(*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x128),
                  *(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x138),
                  unaff_x22 + 0x10);
    if (lVar16 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_101a64dd0;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
    lVar16 = *(long *)(unaff_x22 + 0x18);
    puVar17 = (undefined8 *)(unaff_x22 + 0x20);
    puVar14 = (undefined8 *)(unaff_x22 + 0x28);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined1 *)(unaff_x22 + 0x68);
  }
  else {
    puVar14 = (undefined8 *)(unaff_x22 + 0x130);
    puVar17 = (undefined8 *)(unaff_x22 + 0x128);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
    puVar1 = *(undefined8 **)(unaff_x22 + 0x138);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    uVar21 = puVar1[4];
    uVar23 = puVar1[3];
    uVar20 = puVar1[2];
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x120);
    *(long *)(unaff_x22 + 0x78) = lVar16;
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x130);
    *(undefined8 *)(unaff_x22 + 0x80) = *puVar17;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar23;
    *(undefined1 *)(unaff_x22 + 200) = 0;
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    func_0x000107c61434(uVar7);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x120);
    if (iVar4 == 0) {
      FUN_101a663b4(uVar7,unaff_x22 + 0xd0);
      func_0x000107c61174(uVar15);
      uVar15 = extraout_x11_00;
    }
    else {
      FUN_101a663b4(uVar7,unaff_x22 + 0xf8);
      func_0x000101a66374();
      func_0x000107c61174(uVar15);
      func_0x000107c61658(unaff_x22 + 0x70,&UNK_11072caa8,uVar7);
      uVar15 = extraout_x11;
    }
    uVar11 = 0;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar22 = uVar21;
  }
  uVar12 = *puVar14;
  uVar13 = *puVar17;
  puVar14 = *(undefined8 **)(unaff_x22 + 0x148);
  *puVar14 = uVar7;
  puVar14[1] = lVar16;
  puVar14[2] = uVar13;
  puVar14[3] = uVar12;
  puVar14[4] = uVar18;
  puVar14[5] = uVar19;
  puVar14[6] = uVar20;
  puVar14[7] = uVar23;
  puVar14[9] = uVar22;
  puVar14[8] = uVar21;
  puVar14[10] = uVar15;
  *(undefined1 *)(puVar14 + 0xb) = uVar11;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101a64dd0:
                    /* WARNING: Could not recover jumptable at 0x000101a64dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a64e40; end: 101a64eb7;  */

void FUN_101a64e40(void)

{
  undefined1 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x160));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    uVar1 = *(undefined1 *)(lVar4 + 0x68);
    puVar3 = *(undefined8 **)(lVar4 + 0x148);
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    uVar10 = *(undefined8 *)(lVar4 + 0x38);
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
    uVar12 = *(undefined8 *)(lVar4 + 0x48);
    uVar11 = *(undefined8 *)(lVar4 + 0x40);
    uVar14 = *(undefined8 *)(lVar4 + 0x58);
    uVar13 = *(undefined8 *)(lVar4 + 0x50);
    puVar3[1] = *(undefined8 *)(lVar4 + 0x18);
    *puVar3 = uVar6;
    puVar3[3] = uVar8;
    puVar3[2] = uVar7;
    puVar3[5] = uVar10;
    puVar3[4] = uVar9;
    puVar3[7] = uVar12;
    puVar3[6] = uVar11;
    puVar3[9] = uVar14;
    puVar3[8] = uVar13;
    puVar3[10] = uVar2;
    *(undefined1 *)(puVar3 + 0xb) = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a64eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a64eb8; end: 101a650a7;  */

void FUN_101a64eb8(long param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long extraout_x10;
  long extraout_x10_00;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_150 [40];
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  puVar3 = PTR_PTR_1126c7c50;
  func_0x000107c610f8(PTR_PTR_1126c7c50);
  func_0x000107c47640();
  puVar4 = puVar3;
  func_0x000107c3ecd0();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  lVar5 = param_1;
  func_0x000108022988(param_1,puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (lVar5 == 0) {
    lVar5 = param_1;
    func_0x000107c42400();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a650a8);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c44b0c();
    func_0x000107c61170(lVar5);
    if ((int)lVar6 == 0) {
      FUN_101a65ec4(param_1,param_2,param_3,param_4,&lStack_c8);
      param_1 = lStack_c8;
      lVar5 = lStack_c0;
      param_2 = lStack_b8;
      param_3 = lStack_b0;
      lVar6 = lStack_a8;
      lVar8 = lStack_a0;
      lVar7 = lStack_98;
      lVar9 = lStack_90;
      lVar10 = lStack_88;
    }
    else {
      FUN_101a6613c();
      param_1 = lStack_c8;
      lVar5 = lStack_c0;
      param_2 = lStack_b8;
      param_3 = lStack_b0;
      lVar6 = lStack_a8;
      lVar8 = lStack_a0;
      lVar7 = lStack_98;
      lVar9 = lStack_90;
      lVar10 = lStack_88;
    }
    if (unaff_x21 == 0) {
      return;
    }
  }
  else {
    lVar6 = *param_4;
    lVar8 = param_4[1];
    lVar7 = param_4[2];
    lVar10 = param_4[4];
    lVar9 = param_4[3];
    uStack_d0 = 0;
    iVar2 = 2;
    lStack_128 = param_1;
    lStack_120 = lVar5;
    lStack_118 = param_2;
    lStack_110 = param_3;
    lStack_108 = lVar6;
    lStack_100 = lVar8;
    lStack_f8 = lVar7;
    lStack_f0 = lVar9;
    lStack_e8 = lVar10;
    func_0x000100029b9c(2,0x12,0,0);
    func_0x000107c61434(param_3);
    if (iVar2 == 0) {
      FUN_101a663b4(param_4,auStack_150);
      func_0x000107c61174(param_1);
      lStack_78 = extraout_x10_00;
    }
    else {
      FUN_101a663b4(param_4,auStack_150);
      func_0x000101a66374();
      func_0x000107c61174(param_1);
      func_0x000107c61658(&lStack_128,&UNK_11072caa8,param_4);
      lStack_78 = extraout_x10;
    }
    uStack_70 = 0;
    lStack_80 = lVar10;
  }
  *param_5 = param_1;
  param_5[1] = lVar5;
  param_5[2] = param_2;
  param_5[3] = param_3;
  param_5[4] = lVar6;
  param_5[5] = lVar8;
  param_5[6] = lVar7;
  param_5[7] = lVar9;
  param_5[9] = lStack_80;
  param_5[8] = lVar10;
  param_5[10] = lStack_78;
  *(undefined1 *)(param_5 + 0xb) = uStack_70;
  return;
}



/* Entry: 101a650a8; end: 101a651e7; -[_TtC37MemoriesSnapDocValidationServicesImpl24MemoriesSnapDocValidator validateForSnapsGridWithSnapDoc:] */

/* WARNING: Removing unreachable block (ram,0x000101a65118) */

void FUN_101a650a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_e0 [112];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_101a64eb8(param_3,0xd000000000000012,0x800000010efcd3c0,&uStack_70,auStack_e0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 101a651e8; end: 101a65273;  */

void FUN_101a651e8(long param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  puVar4 = (undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0xd8) = param_4[1];
  *puVar4 = uVar3;
  uVar3 = param_4[4];
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_5;
  plVar2 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a65274;
  plVar2[0x28] = unaff_x20;
  plVar2[0x29] = unaff_x22 + 0x10;
  plVar2[0x26] = param_3;
  plVar2[0x27] = (long)puVar4;
  plVar2[0x24] = param_1;
  plVar2[0x25] = param_2;
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  plVar2[0x2a] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_101a64b54;
  plVar1[0x1d] = unaff_x20;
  plVar1[0x1e] = (long)(plVar2 + 2);
  plVar1[0x1b] = param_3;
  plVar1[0x1c] = (long)puVar4;
  plVar1[0x19] = param_1;
  plVar1[0x1a] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a653d8,0,0);
  return;
}



/* Entry: 101a65274; end: 101a652ff;  */

void FUN_101a65274(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x100));
  if (unaff_x20 != 0) {
    *(undefined8 *)(lVar1 + 0x110) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x108) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x120) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x118) = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x140) = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x138) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x150) = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x148) = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 0x158) = *(undefined8 *)(lVar1 + 0x60);
    *(undefined1 *)(lVar1 + 0x69) = *(undefined1 *)(lVar1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a65300,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101a652fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101a65300; end: 101a653b7;  */

void FUN_101a65300(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined1 *)(unaff_x22 + 200) = *(undefined1 *)(unaff_x22 + 0x69);
  uVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar2 != 0) {
    func_0x000101a66374();
    func_0x000107c61658((undefined8 *)(unaff_x22 + 0x70),&UNK_11072caa8,uVar2);
  }
  uVar1 = *(undefined1 *)(unaff_x22 + 0x69);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  puVar3 = *(undefined8 **)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
  puVar3[1] = *(undefined8 *)(unaff_x22 + 0x110);
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  puVar3[5] = uVar8;
  puVar3[4] = uVar7;
  puVar3[7] = uVar10;
  puVar3[6] = uVar9;
  puVar3[9] = uVar12;
  puVar3[8] = uVar11;
  puVar3[10] = uVar2;
  *(undefined1 *)(puVar3 + 0xb) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000101a653b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a653b8; end: 101a653d7;  */

void FUN_101a653b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a653d8,0,0);
  return;
}



/* Entry: 101a653d8; end: 101a6547f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a653d8(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0xe8) + _DAT_112df00c8);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101a65438;
  plVar1[5] = unaff_x22 + 0xc0;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101a65480; end: 101a656cb;  */

void FUN_101a65480(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long unaff_x22;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar16 = *(ulong *)(unaff_x22 + 0xc0);
  if (0 < (long)uVar16) {
    lVar6 = *(long *)(unaff_x22 + 200);
    func_0x000107c41214();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar7 = lVar6;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar6);
      uVar5 = (uint)(param_2 >> 0x20);
      uVar8 = uVar5 >> 0x1e;
      if (uVar5 >> 0x1e < 2) {
        if (uVar8 == 0) {
          func_0x00010006c090(lVar7);
          uVar17 = param_2 >> 0x30 & 0xff;
        }
        else {
          func_0x00010006c090(lVar7);
          iVar11 = (int)((ulong)lVar7 >> 0x20);
          if (SBORROW4(iVar11,(int)lVar7)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a656c8);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar17 = (ulong)(iVar11 - (int)lVar7);
        }
      }
      else if (uVar8 == 2) {
        lVar6 = *(long *)(lVar7 + 0x10);
        lVar12 = *(long *)(lVar7 + 0x18);
        func_0x00010006c090(lVar7);
        uVar17 = lVar12 - lVar6;
        if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a65524);
          (*UNRECOVERED_JUMPTABLE)();
        }
      }
      else {
        func_0x00010006c090(lVar7);
        uVar17 = 0;
      }
      lVar12 = *(long *)(unaff_x22 + 200);
      lVar6 = lVar12;
      func_0x000107c44fd8(lVar12);
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c44fd8();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar7);
      func_0x000107c4ca10();
      func_0x000107c61180();
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a656cc);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 200);
      func_0x000107c40808();
      func_0x000107c61170(lVar12);
      func_0x000107c4483c(uVar13);
      if ((long)uVar16 < (long)uVar17) {
        uVar10 = *(ulong *)(unaff_x22 + 200);
        uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
        puVar9 = *(ulong **)(unaff_x22 + 0xe0);
        uVar1 = *puVar9;
        uVar3 = puVar9[1];
        uVar2 = puVar9[2];
        uVar4 = puVar9[3];
        uVar15 = puVar9[4];
        *(ulong *)(unaff_x22 + 0x10) = uVar17;
        *(ulong *)(unaff_x22 + 0x18) = uVar16;
        *(ulong *)(unaff_x22 + 0x20) = uVar10;
        *(undefined8 *)(unaff_x22 + 0x28) = 0;
        *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xd8);
        *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xd0);
        *(ulong *)(unaff_x22 + 0x40) = uVar1;
        *(ulong *)(unaff_x22 + 0x48) = uVar3;
        *(ulong *)(unaff_x22 + 0x50) = uVar2;
        *(ulong *)(unaff_x22 + 0x58) = uVar4;
        *(ulong *)(unaff_x22 + 0x60) = uVar15;
        *(undefined1 *)(unaff_x22 + 0x68) = 6;
        iVar11 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        func_0x000107c61434(uVar13);
        uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar14 = *(undefined8 *)(unaff_x22 + 200);
        if (iVar11 == 0) {
          FUN_101a663b4(uVar13,unaff_x22 + 0x70);
          func_0x000107c61174(uVar14);
        }
        else {
          FUN_101a663b4(uVar13,unaff_x22 + 0x98);
          func_0x000101a66374();
          func_0x000107c61174(uVar14);
          func_0x000107c61658(unaff_x22 + 0x10,&UNK_11072caa8,uVar13);
        }
        puVar9 = *(ulong **)(unaff_x22 + 0xf0);
        uVar19 = *(ulong *)(unaff_x22 + 0xd8);
        uVar18 = *(ulong *)(unaff_x22 + 0xd0);
        *puVar9 = uVar17;
        puVar9[1] = uVar16;
        puVar9[2] = uVar10;
        puVar9[3] = 0;
        puVar9[5] = uVar19;
        puVar9[4] = uVar18;
        puVar9[6] = uVar1;
        puVar9[7] = uVar3;
        puVar9[8] = uVar2;
        puVar9[9] = uVar4;
        puVar9[10] = uVar15;
        *(undefined1 *)(puVar9 + 0xb) = 6;
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_101a6565c;
      }
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101a6565c:
                    /* WARNING: Could not recover jumptable at 0x000101a65678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a656cc; end: 101a656f7;  */

void FUN_101a656cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2e0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x2d8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x2d0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x2c8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x2b8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a656f8,0,0);
  return;
}



/* Entry: 101a656f8; end: 101a65853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a656f8(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x69);
  if ((*(byte *)(unaff_x22 + 0x69) & 1) != 0) {
    *(undefined8 *)(unaff_x22 + 0x130) = 1;
    *(undefined8 *)(unaff_x22 + 0x140) = 0;
    *(undefined8 *)(unaff_x22 + 0x138) = 0;
    *(undefined8 *)(unaff_x22 + 0x150) = 0;
    *(undefined8 *)(unaff_x22 + 0x148) = 0;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined8 *)(unaff_x22 + 0x158) = 0;
    *(undefined8 *)(unaff_x22 + 0x170) = 0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0;
    *(undefined8 *)(unaff_x22 + 0x180) = 0;
    *(undefined8 *)(unaff_x22 + 0x178) = 0;
    *(undefined1 *)(unaff_x22 + 0x188) = 7;
    uVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar1 != 0) {
      func_0x000101a66374();
      func_0x000107c61658(unaff_x22 + 0x130,&UNK_11072caa8,uVar1);
    }
    puVar5 = *(undefined8 **)(unaff_x22 + 0x2e0);
    *puVar5 = 1;
    puVar5[2] = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    puVar5[3] = 0;
    puVar5[6] = 0;
    puVar5[5] = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    puVar5[10] = 0;
    puVar5[9] = 0;
    *(undefined1 *)(puVar5 + 0xb) = 7;
                    /* WARNING: Could not recover jumptable at 0x000101a657bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar6 = *(long **)(*(long *)(unaff_x22 + 0x2d8) + _DAT_112df00b8);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2e8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101a6580c;
  plVar2[5] = unaff_x22 + 400;
  plVar2[6] = (long)plVar6;
  lVar7 = *(long *)(*plVar6 + 0x50);
  plVar2[7] = lVar7;
  lVar3 = 0;
  __sSqMa(0,lVar7);
  plVar2[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[10] = uVar4;
  lVar3 = *(long *)(lVar7 + -8);
  plVar2[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101a65854; end: 101a6593b;  */

void FUN_101a65854(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar2 = *(long *)(unaff_x22 + 0x1b0);
  lVar3 = unaff_x22 + 400;
  func_0x0001000a8868(lVar3,uVar1);
  func_0x000100fb0a60();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  pcVar7 = *(code **)(lVar2 + 0x20);
  func_0x000107c61174(uVar6);
  lVar4 = lVar3;
  (*pcVar7)(lVar3,uVar1,lVar2);
  *(long *)(unaff_x22 + 0x2f0) = lVar4;
  func_0x000107c61574(lVar3);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2f8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a6593c;
                    /* WARNING: Could not recover jumptable at 0x000101a65938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101a66414)();
  return;
}



/* Entry: 101a6593c; end: 101a6598f;  */

void FUN_101a6593c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x300) = param_1;
  *(undefined1 *)(lVar1 + 0x6a) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x2f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a65990,0,0);
  return;
}



/* Entry: 101a65990; end: 101a65ec3;  */

void FUN_101a65990(void)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  puVar9 = *(undefined **)(unaff_x22 + 0x300);
  if (*(char *)(unaff_x22 + 0x6a) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x2a8) = puVar9;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar13 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658((undefined8 *)(unaff_x22 + 0x2a8),uVar13,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2f0));
    func_0x0001000834e4(unaff_x22 + 400);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2f0));
    func_0x0001000834e4(unaff_x22 + 400);
    piVar2 = *(int **)(unaff_x22 + 0x300);
    if (*(long *)(puVar9 + 0x10) == 0) {
      func_0x000101a66544(piVar2,*(undefined1 *)(unaff_x22 + 0x6a));
      func_0x000101a66374();
      puVar9 = &UNK_11072caa8;
      func_0x000107c613f8(&UNK_11072caa8,piVar2,0,0);
      piVar2[0] = 3;
      piVar2[1] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[8] = 0;
      piVar2[9] = 0;
      piVar2[6] = 0;
      piVar2[7] = 0;
      piVar2[0xc] = 0;
      piVar2[0xd] = 0;
      piVar2[10] = 0;
      piVar2[0xb] = 0;
      piVar2[0x10] = 0;
      piVar2[0x11] = 0;
      piVar2[0xe] = 0;
      piVar2[0xf] = 0;
      piVar2[0x14] = 0;
      piVar2[0x15] = 0;
      piVar2[0x12] = 0;
      piVar2[0x13] = 0;
      *(undefined1 *)(piVar2 + 0x16) = 7;
      func_0x000107c61654();
    }
    else {
      iVar1 = *(int *)(puVar9 + 0x20);
      func_0x000101a66544(piVar2,*(undefined1 *)(unaff_x22 + 0x6a));
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
          goto LAB_101a65ea4;
        }
        if (iVar1 == 1) {
          puVar7 = *(undefined8 **)(unaff_x22 + 0x2d0);
          uVar10 = *(undefined8 *)(unaff_x22 + 0x2c8);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x2c0);
          uVar12 = *(undefined8 *)(unaff_x22 + 0x2b8);
          uVar14 = puVar7[1];
          uVar6 = *puVar7;
          uVar16 = puVar7[3];
          uVar15 = puVar7[2];
          uVar13 = puVar7[4];
          func_0x000101a66374();
          puVar9 = &UNK_11072caa8;
          func_0x000107c613f8(&UNK_11072caa8,piVar2,0,0);
          *(undefined8 *)piVar2 = uVar12;
          piVar2[2] = 0;
          piVar2[3] = 0;
          *(undefined8 *)(piVar2 + 4) = uVar8;
          *(undefined8 *)(piVar2 + 6) = uVar10;
          *(undefined8 *)(piVar2 + 10) = uVar14;
          *(undefined8 *)(piVar2 + 8) = uVar6;
          *(undefined8 *)(piVar2 + 0xe) = uVar16;
          *(undefined8 *)(piVar2 + 0xc) = uVar15;
          *(undefined8 *)(piVar2 + 0x10) = uVar13;
          *(undefined1 *)(piVar2 + 0x16) = 3;
          func_0x000107c61654();
          func_0x000107c61434(uVar10);
          func_0x000107c61174(uVar12);
          lVar5 = unaff_x22 + 0x280;
        }
        else {
LAB_101a65bc4:
          puVar7 = *(undefined8 **)(unaff_x22 + 0x2d0);
          uVar10 = *(undefined8 *)(unaff_x22 + 0x2c8);
          unaff_x25 = *(undefined8 *)(unaff_x22 + 0x2c0);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x2b8);
          FUN_101a66558();
          puVar3 = (undefined8 *)&UNK_110432470;
          func_0x000107c613f8(&UNK_110432470,piVar2,0,0);
          *piVar2 = iVar1;
          uVar6 = puVar7[1];
          uVar12 = *puVar7;
          uVar15 = puVar7[3];
          uVar14 = puVar7[2];
          uVar13 = puVar7[4];
          puVar4 = puVar3;
          func_0x000101a66374();
          puVar9 = &UNK_11072caa8;
          func_0x000107c613f8(&UNK_11072caa8,puVar4,0,0);
          *puVar4 = uVar8;
          puVar4[1] = puVar3;
          puVar4[2] = unaff_x25;
          puVar4[3] = uVar10;
          puVar4[5] = uVar6;
          puVar4[4] = uVar12;
          puVar4[7] = uVar15;
          puVar4[6] = uVar14;
          puVar4[8] = uVar13;
          *(undefined1 *)(puVar4 + 0xb) = 4;
          func_0x000107c61654();
          func_0x000107c61434(uVar10);
          func_0x000107c61174(uVar8);
          lVar5 = unaff_x22 + 0x208;
        }
      }
      else if (iVar1 == 2) {
        puVar7 = *(undefined8 **)(unaff_x22 + 0x2d0);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x2c8);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x2c0);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x2b8);
        uVar14 = puVar7[1];
        uVar6 = *puVar7;
        uVar16 = puVar7[3];
        uVar15 = puVar7[2];
        uVar13 = puVar7[4];
        func_0x000101a66374();
        puVar9 = &UNK_11072caa8;
        func_0x000107c613f8(&UNK_11072caa8,piVar2,0,0);
        *(undefined8 *)piVar2 = uVar12;
        piVar2[2] = 0;
        piVar2[3] = 0;
        *(undefined8 *)(piVar2 + 4) = uVar8;
        *(undefined8 *)(piVar2 + 6) = uVar10;
        *(undefined8 *)(piVar2 + 10) = uVar14;
        *(undefined8 *)(piVar2 + 8) = uVar6;
        *(undefined8 *)(piVar2 + 0xe) = uVar16;
        *(undefined8 *)(piVar2 + 0xc) = uVar15;
        *(undefined8 *)(piVar2 + 0x10) = uVar13;
        *(undefined1 *)(piVar2 + 0x16) = 2;
        func_0x000107c61654();
        func_0x000107c61434(uVar10);
        func_0x000107c61174(uVar12);
        lVar5 = unaff_x22 + 600;
      }
      else {
        if (iVar1 != 3) goto LAB_101a65bc4;
        puVar7 = *(undefined8 **)(unaff_x22 + 0x2d0);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x2c8);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x2c0);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x2b8);
        uVar14 = puVar7[1];
        uVar6 = *puVar7;
        uVar16 = puVar7[3];
        uVar15 = puVar7[2];
        uVar13 = puVar7[4];
        func_0x000101a66374();
        puVar9 = &UNK_11072caa8;
        func_0x000107c613f8(&UNK_11072caa8,piVar2,0,0);
        *(undefined8 *)piVar2 = uVar12;
        piVar2[2] = 0;
        piVar2[3] = 0;
        *(undefined8 *)(piVar2 + 4) = uVar8;
        *(undefined8 *)(piVar2 + 6) = uVar10;
        *(undefined8 *)(piVar2 + 10) = uVar14;
        *(undefined8 *)(piVar2 + 8) = uVar6;
        *(undefined8 *)(piVar2 + 0xe) = uVar16;
        *(undefined8 *)(piVar2 + 0xc) = uVar15;
        *(undefined8 *)(piVar2 + 0x10) = uVar13;
        *(undefined1 *)(piVar2 + 0x16) = 5;
        func_0x000107c61654();
        func_0x000107c61434(uVar10);
        func_0x000107c61174(uVar12);
        lVar5 = unaff_x22 + 0x230;
      }
      FUN_101a663b4(puVar7,lVar5);
    }
  }
  puVar7 = (undefined8 *)(unaff_x22 + 0x2b0);
  *puVar7 = puVar9;
  func_0x000107c614b0(puVar9);
  uVar13 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c6147c(lVar5,puVar7,uVar13,&UNK_11072caa8,0);
  if ((int)lVar5 == 0) {
    puVar7 = *(undefined8 **)(unaff_x22 + 0x2d0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2b8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x2b0));
    uStack_98 = *puVar7;
    uStack_a0 = puVar7[1];
    uStack_a8 = puVar7[2];
    uStack_b0 = puVar7[3];
    uVar13 = puVar7[4];
    *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
    *(undefined **)(unaff_x22 + 0x78) = puVar9;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x90) = uStack_98;
    *(undefined8 *)(unaff_x22 + 0x98) = uStack_a0;
    *(undefined8 *)(unaff_x22 + 0xa0) = uStack_a8;
    *(undefined8 *)(unaff_x22 + 0xa8) = uStack_b0;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar13;
    *(undefined1 *)(unaff_x22 + 200) = 2;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    func_0x000107c61434(uVar8);
    func_0x000107c61174(uVar10);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2d0);
    if (iVar1 == 0) {
      FUN_101a663b4(uVar8,unaff_x22 + 0x1b8);
    }
    else {
      FUN_101a663b4(uVar8,unaff_x22 + 0x1e0);
      func_0x000101a66374();
      func_0x000107c61658(unaff_x22 + 0x70,&UNK_11072caa8,uVar8);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2b8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar11 = 2;
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2c0);
  }
  else {
    func_0x000107c614ac(puVar9);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    puVar9 = *(undefined **)(unaff_x22 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
    uStack_98 = *(undefined8 *)(unaff_x22 + 0x30);
    uStack_a0 = *(undefined8 *)(unaff_x22 + 0x38);
    uStack_a8 = *(undefined8 *)(unaff_x22 + 0x40);
    uStack_b0 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
    unaff_x25 = *(undefined8 *)(unaff_x22 + 0x58);
    unaff_x26 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined1 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar8;
    *(undefined **)(unaff_x22 + 0xd8) = puVar9;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar10;
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar12;
    *(undefined8 *)(unaff_x22 + 0xf0) = uStack_98;
    *(undefined8 *)(unaff_x22 + 0xf8) = uStack_a0;
    *(undefined8 *)(unaff_x22 + 0x100) = uStack_a8;
    *(undefined8 *)(unaff_x22 + 0x108) = uStack_b0;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x118) = unaff_x25;
    *(undefined8 *)(unaff_x22 + 0x120) = unaff_x26;
    *(undefined1 *)(unaff_x22 + 0x128) = uVar11;
    uVar6 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar6 != 0) {
      func_0x000101a66374();
      func_0x000107c61658(unaff_x22 + 0xd0,&UNK_11072caa8,uVar6);
    }
    func_0x000107c614ac(*puVar7);
  }
  puVar7 = *(undefined8 **)(unaff_x22 + 0x2e0);
  *puVar7 = uVar8;
  puVar7[1] = puVar9;
  puVar7[2] = uVar10;
  puVar7[3] = uVar12;
  puVar7[4] = uStack_98;
  puVar7[5] = uStack_a0;
  puVar7[6] = uStack_a8;
  puVar7[7] = uStack_b0;
  puVar7[8] = uVar13;
  puVar7[9] = unaff_x25;
  puVar7[10] = unaff_x26;
  *(undefined1 *)(puVar7 + 0xb) = uVar11;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101a65ea4:
                    /* WARNING: Could not recover jumptable at 0x000101a65ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a65ec4; end: 101a6613b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a65ec4(long param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uVar5;
  long extraout_x10;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x21;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_278 [40];
  long *plStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  long lStack_190;
  long lStack_188;
  long *plStack_178;
  long lStack_170;
  long *plStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = 0;
  lStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_b8 = 0;
  lStack_c0 = 0;
  plStack_d8 = (long *)0x0;
  lStack_e0 = 0;
  lStack_c8 = 0;
  lStack_d0 = 0;
  uStack_88 = 7;
  lVar8 = param_1;
  plVar4 = param_5;
  func_0x000101a66374();
  plVar10 = (long *)&UNK_11072caa8;
  plVar11 = &lStack_e0;
  plVar3 = &lStack_140;
  lVar9 = lVar8;
  func_0x000104876738(&plStack_148);
  if (unaff_x21 == 0) {
    lStack_e0 = 0;
    plVar3 = &lStack_e0;
    plVar11 = plStack_148;
    lVar9 = param_1;
    lStack_160 = param_3;
    lStack_158 = param_2;
    lStack_150 = param_1;
    func_0x000107c49b74();
    param_3 = lStack_e0;
    if ((int)plVar11 == 0) {
      if (lStack_e0 != 0) goto LAB_101a65fc4;
      plStack_178 = plStack_148;
      plVar10 = (long *)0x0;
    }
    else {
      if (lStack_e0 == 0) {
        plVar11 = plStack_148;
        func_0x000107c615e8();
        uStack_1d8 = 0;
        plStack_1b0 = plStack_148;
        lStack_1c8 = param_2;
        goto LAB_101a660fc;
      }
LAB_101a65fc4:
      plStack_178 = plStack_148;
      plVar10 = (long *)0x0;
      FUN_101a665f8(0,0x112df0110,&PTR_PTR_1126d8e80);
      plVar11 = plVar10;
      FUN_101a66638();
      func_0x000107c613f8(plVar10,plVar11,0,0);
      *plVar11 = param_3;
    }
    param_1 = lStack_160;
    lStack_170 = *param_4;
    lVar6 = param_4[1];
    plVar7 = (long *)param_4[2];
    lStack_e0 = lStack_150;
    lStack_d0 = lStack_158;
    lStack_c8 = lStack_160;
    lStack_188 = param_4[4];
    lStack_190 = param_4[3];
    uStack_88 = 1;
    iVar1 = 2;
    lVar9 = 0;
    plVar3 = (long *)0x0;
    plStack_168 = plVar10;
    plStack_d8 = plVar10;
    lStack_c0 = lStack_170;
    lStack_b8 = lVar6;
    plStack_b0 = plVar7;
    lStack_a8 = lStack_190;
    lStack_a0 = lStack_188;
    func_0x000100029b9c(2,0x12);
    func_0x000107c61434(param_1);
    func_0x000107c61174();
    func_0x000107c61174();
    plVar10 = &lStack_140;
    if (iVar1 == 0) {
      FUN_101a663b4(param_4);
      func_0x000107c61174(lStack_150);
    }
    else {
      FUN_101a663b4(param_4);
      func_0x000107c61174(lStack_150);
      plVar10 = (long *)&UNK_11072caa8;
      lVar9 = lVar8;
      func_0x000107c61658(&lStack_e0);
    }
    func_0x000107c61170(param_3);
    plVar11 = plStack_178;
    func_0x000107c615e8();
    uStack_e8 = 1;
    lStack_108 = lStack_190;
    lStack_f0 = extraout_x10;
    lStack_140 = lStack_150;
    lStack_130 = lStack_158;
    lStack_128 = lStack_160;
    plStack_138 = plStack_168;
    lStack_120 = lStack_170;
    plStack_110 = plVar7;
    lStack_118 = lVar6;
    lStack_100 = lStack_188;
    lStack_f8 = lStack_188;
  }
  uStack_1d8 = 1;
  *param_5 = lStack_140;
  param_5[1] = (long)plStack_138;
  param_5[2] = lStack_130;
  param_5[3] = lStack_128;
  param_5[4] = lStack_120;
  param_5[5] = lStack_118;
  param_5[6] = (long)plStack_110;
  param_5[7] = lStack_108;
  param_5[9] = lStack_f8;
  param_5[8] = lStack_100;
  param_5[10] = lStack_f0;
  *(undefined1 *)(param_5 + 0xb) = uStack_e8;
  plStack_1b0 = plStack_110;
  lStack_1c8 = lStack_118;
LAB_101a660fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  pcStack_198 = FUN_101a6613c;
  lStack_1f0 = param_3;
  lStack_1e0 = lVar8;
  plStack_1d0 = param_4;
  lStack_1c0 = param_1;
  plStack_1b8 = &lStack_e0;
  plStack_1a8 = param_5;
  puStack_1a0 = &stack0xfffffffffffffff0;
  func_0x0001000d224c(&plStack_250);
  if (((byte)plStack_250 & 1) == 0) {
    func_0x0001000d224c(&plStack_250);
    func_0x0001000a8868(&plStack_250,lStack_238);
    plVar7 = plVar11;
    (**(code **)(lStack_230 + 0x18))(plVar11,lStack_238,lStack_230);
    func_0x0001000834e4(&plStack_250);
    if (((ulong)plVar7 & 1) != 0) {
      return;
    }
    lStack_230 = *plVar3;
    lVar6 = plVar3[1];
    lVar8 = plVar3[2];
    lVar13 = plVar3[3];
    lVar12 = plVar3[4];
    uStack_248 = 0;
    uStack_1f8 = 5;
    iVar1 = 2;
    plStack_250 = plVar11;
    plStack_240 = plVar10;
    lStack_238 = lVar9;
    lStack_228 = lVar6;
    lStack_220 = lVar8;
    lStack_218 = lVar13;
    lStack_210 = lVar12;
    lStack_1e8 = lStack_230;
    func_0x000100029b9c(2,0x12,0,0);
    func_0x000107c61434(lVar9);
    if (iVar1 == 0) {
      FUN_101a663b4(plVar3,auStack_278);
      func_0x000107c61174(plVar11);
    }
    else {
      FUN_101a663b4(plVar3,auStack_278);
      func_0x000101a66374();
      func_0x000107c61174(plVar11);
      func_0x000107c61658(&plStack_250,&UNK_11072caa8,plVar3);
    }
    uVar5 = 5;
  }
  else {
    plStack_250 = (long *)0x1;
    plStack_240 = (long *)0x0;
    uStack_248 = 0;
    lStack_230 = 0;
    lStack_238 = 0;
    lStack_220 = 0;
    lStack_228 = 0;
    lStack_210 = 0;
    lStack_218 = 0;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_1f8 = 7;
    uVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar2 != 0) {
      func_0x000101a66374();
      func_0x000107c61658(&plStack_250,&UNK_11072caa8,uVar2);
    }
    plVar10 = (long *)0x0;
    lVar9 = 0;
    lStack_1e8 = 0;
    lVar6 = 0;
    lVar8 = 0;
    lVar13 = 0;
    lVar12 = 0;
    uVar5 = 7;
    plVar11 = (long *)0x1;
  }
  *plVar4 = (long)plVar11;
  plVar4[1] = 0;
  plVar4[2] = (long)plVar10;
  plVar4[3] = lVar9;
  plVar4[4] = lStack_1e8;
  plVar4[5] = lVar6;
  plVar4[6] = lVar8;
  plVar4[7] = lVar13;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[8] = lVar12;
  *(undefined1 *)(plVar4 + 0xb) = uVar5;
  return;
}



/* Entry: 101a6613c; end: 101a66343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a6613c(ulong param_1,ulong param_2,ulong param_3,ulong *param_4,ulong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_e8 [40];
  ulong auStack_c0 [11];
  undefined1 uStack_68;
  
  func_0x0001000d224c(auStack_c0);
  if (((byte)auStack_c0[0] & 1) == 0) {
    func_0x0001000d224c(auStack_c0);
    func_0x0001000a8868(auStack_c0,auStack_c0[3]);
    uVar4 = param_1;
    (**(code **)(auStack_c0[4] + 0x18))(param_1,auStack_c0[3],auStack_c0[4]);
    func_0x0001000834e4(auStack_c0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar4 = *param_4;
    uVar5 = param_4[1];
    uVar6 = param_4[2];
    uVar8 = param_4[3];
    uVar7 = param_4[4];
    auStack_c0[1] = 0;
    uStack_68 = 5;
    iVar1 = 2;
    auStack_c0[0] = param_1;
    auStack_c0[2] = param_2;
    auStack_c0[3] = param_3;
    auStack_c0[4] = uVar4;
    auStack_c0[5] = uVar5;
    auStack_c0[6] = uVar6;
    auStack_c0[7] = uVar8;
    auStack_c0[8] = uVar7;
    func_0x000100029b9c(2,0x12,0,0);
    func_0x000107c61434(param_3);
    if (iVar1 == 0) {
      FUN_101a663b4(param_4,auStack_e8);
      func_0x000107c61174(param_1);
    }
    else {
      FUN_101a663b4(param_4,auStack_e8);
      func_0x000101a66374();
      func_0x000107c61174(param_1);
      func_0x000107c61658(auStack_c0,&UNK_11072caa8,param_4);
    }
    uVar3 = 5;
  }
  else {
    auStack_c0[0] = 1;
    auStack_c0[2] = 0;
    auStack_c0[1] = 0;
    auStack_c0[4] = 0;
    auStack_c0[3] = 0;
    auStack_c0[6] = 0;
    auStack_c0[5] = 0;
    auStack_c0[8] = 0;
    auStack_c0[7] = 0;
    auStack_c0[10] = 0;
    auStack_c0[9] = 0;
    uStack_68 = 7;
    uVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar2 != 0) {
      func_0x000101a66374();
      func_0x000107c61658(auStack_c0,&UNK_11072caa8,uVar2);
    }
    param_2 = 0;
    param_3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = 7;
    param_1 = 1;
  }
  *param_5 = param_1;
  param_5[1] = 0;
  param_5[2] = param_2;
  param_5[3] = param_3;
  param_5[4] = uVar4;
  param_5[5] = uVar5;
  param_5[6] = uVar6;
  param_5[7] = uVar8;
  param_5[9] = 0;
  param_5[10] = 0;
  param_5[8] = uVar7;
  *(undefined1 *)(param_5 + 0xb) = uVar3;
  return;
}



/* Entry: 101a66344; end: 101a66353;  */

void FUN_101a66344(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101a66354; end: 101a663b3;  */

void FUN_101a66354(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2098);
  return;
}



/* Entry: 101a663b4; end: 101a66403;  */

undefined8 FUN_101a663b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112df0100;
  func_0x0001000285a8(0x112df0100,&UNK_10d9bcf00);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101a66404; end: 101a6642b;  */

void FUN_101a66404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101a6642c; end: 101a664f3;  */

void FUN_101a6642c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101a66474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a664f4;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110432448;
  func_0x000107c613fc(&UNK_110432448,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101a66598,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a664f4; end: 101a66533;  */

void FUN_101a664f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a66534,0,0);
  return;
}



/* Entry: 101a66534; end: 101a66557;  */

void FUN_101a66534(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101a66540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101a66558; end: 101a66597;  */

void FUN_101a66558(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df0108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bcf34;
  func_0x000107c61520(&UNK_10d9bcf34,&UNK_110432470);
  puRam0000000112df0108 = puVar1;
  return;
}



/* Entry: 101a66598; end: 101a665e3;  */

void FUN_101a66598(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101a665e4(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101a665e4; end: 101a665f7;  */

void FUN_101a665e4(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 101a665f8; end: 101a66637;  */

void FUN_101a665f8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a66638; end: 101a6668b;  */

void FUN_101a66638(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112df0118 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_101a665f8(0xff,0x112df0110,&PTR_PTR_1126d8e80);
  puVar2 = &UNK_10d9bce68;
  func_0x000107c61520(&UNK_10d9bce68,uVar1);
  puRam0000000112df0118 = puVar2;
  return;
}



/* Entry: 101a6668c; end: 101a666fb;  */

undefined8 FUN_101a6668c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103fc036c)(param_2,param_1);
  return param_2;
}



/* Entry: 101a666fc; end: 101a6670b;  */

undefined1  [16] FUN_101a666fc(void)

{
  return ZEXT816(0x110432470);
}



/* Entry: 101a6670c; end: 101a667bb;  */

void FUN_101a6670c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a667bc; end: 101a6686b;  */

void FUN_101a667bc(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar13;
  long in_x5;
  long in_x6;
  long unaff_x19;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long *unaff_x22;
  ulong unaff_x29;
  code *unaff_x30;
  code *pcStack_c8;
  long lStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_98;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_30;
  ulong *puStack_10;
  
  puStack_10 = (ulong *)(unaff_x29 | 0x1000000000000000);
  lStack_30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = *(long **)(unaff_x22[0xc] + 0x10);
  plVar13 = unaff_x22 + 3;
  *plVar13 = 0;
  puVar5 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  unaff_x22[0xd] = (long)puVar5;
  puVar12 = puVar5;
  func_0x000100fb85f0();
  unaff_x22[0xe] = (long)puVar12;
  *puVar5 = unaff_x22;
  puVar5[1] = FUN_101a6686c;
  plVar3 = (long *)register0x00000008;
  puVar1 = puStack_10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_30) {
    func_0x000107c60e78();
    uStack_40 = (ulong)&puStack_10 | 0x1000000000000000;
    pcStack_38 = FUN_101a6686c;
    lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = *unaff_x22;
    unaff_x22 = (long *)*unaff_x22;
    func_0x000107c615c0(*(undefined8 *)(lVar14 + 0x68));
    if (plVar15 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66908;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a68c70;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_60 = (ulong)&uStack_40 | 0x1000000000000000;
    pcStack_58 = FUN_101a66908;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = unaff_x22[8];
    lVar18 = unaff_x22[7];
    unaff_x19 = unaff_x22[2];
    FUN_101a68a04(lVar14,unaff_x22[9],unaff_x22[10],unaff_x22[0xb]);
    unaff_x22[5] = 0;
    func_0x000107c3e418(unaff_x19);
    lVar17 = unaff_x22[5];
    if (lVar17 == 0) {
      lVar6 = unaff_x19;
      func_0x000107c615e8();
      UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
      lVar17 = lVar14;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) goto LAB_101a66a30;
    }
    else {
      unaff_x22[6] = lVar17;
      iVar4 = 2;
      lVar18 = 0;
      func_0x000100029b9c(2,0x12,0);
      lVar6 = lVar17;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      if (iVar4 != 0) {
        func_0x000107c61658(unaff_x22 + 6,&UNK_11072cd20,unaff_x22[0xe]);
      }
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar6);
      func_0x000107c615e8(unaff_x19);
      lVar6 = lVar14;
      func_0x000107c61170();
      UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
LAB_101a66a30:
                    /* WARNING: Could not recover jumptable at 0x000101a66a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(lVar17);
        return;
      }
    }
    func_0x000107c60e78();
    uStack_b0 = (ulong)&uStack_60 | 0x1000000000000000;
    plVar3 = &lStack_c0;
    pcStack_a8 = FUN_101a66a50;
    puVar1 = &uStack_b0;
    lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    unaff_x22[10] = in_x6;
    unaff_x22[0xb] = lVar14;
    unaff_x22[8] = lVar18;
    unaff_x22[9] = in_x5;
    unaff_x22[7] = lVar6;
    plStack_b8 = unaff_x22;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66abc;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    pcStack_c8 = FUN_101a66abc;
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar15 = *(long **)(unaff_x22[0xb] + 0x10);
    plVar13 = unaff_x22 + 3;
    *plVar13 = 0;
    puVar5 = (undefined8 *)0xa0;
    func_0x000107c615b8();
    unaff_x22[0xc] = (long)puVar5;
    puVar12 = puVar5;
    func_0x000100fb85f0();
    unaff_x22[0xd] = (long)puVar12;
    *puVar5 = unaff_x22;
    puVar5[1] = FUN_101a66b6c;
    unaff_x30 = pcStack_c8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      func_0x000107c60e78();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar17 = *unaff_x22;
      func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x60));
      if (plVar15 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101a66c08;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66d90;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar16 = *(undefined8 *)(lVar17 + 0x10);
      uVar10 = *(undefined8 *)(lVar17 + 0x38);
      uVar9 = *(undefined8 *)(lVar17 + 0x48);
      uVar2 = *(undefined8 *)(lVar17 + 0x50);
      puVar7 = PTR_PTR_1126b25b8;
      func_0x000107c610f8(PTR_PTR_1126b25b8);
      func_0x000107c5fadc(uVar9,uVar2);
      func_0x000107c46814(puVar7);
      func_0x000107c61170(uVar9);
      *(undefined8 *)(lVar17 + 0x28) = 0;
      func_0x000107c3e418(uVar16);
      puVar19 = *(undefined **)(lVar17 + 0x28);
      if (puVar19 == (undefined *)0x0) {
        func_0x000107c615e8(uVar16);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar17 + 8);
        lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar19 = puVar7;
      }
      else {
        *(undefined **)(lVar17 + 0x30) = puVar19;
        iVar4 = 2;
        uVar10 = 0;
        func_0x000100029b9c(2,0x12,0);
        puVar8 = puVar19;
        func_0x000107c61174(puVar19);
        func_0x000107c61174();
        func_0x000107c61174();
        if (iVar4 != 0) {
          func_0x000107c61658(lVar17 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar17 + 0x68));
        }
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar8);
        func_0x000107c615e8(uVar16);
        func_0x000107c61170(puVar7);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar17 + 8);
        lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar18 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(puVar19);
        return;
      }
      func_0x000107c60e78();
      uVar9 = *(undefined8 *)(lVar17 + 0x20);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar17 + 8))();
        return;
      }
      func_0x000107c60e78();
      *(long *)(lVar17 + 0xb8) = in_x6;
      *(undefined8 *)(lVar17 + 0xc0) = uVar16;
      *(undefined8 *)(lVar17 + 0xa8) = uVar10;
      *(long *)(lVar17 + 0xb0) = in_x5;
      *(undefined8 *)(lVar17 + 0xa0) = uVar9;
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66e0c;
      goto _swift_task_switch;
    }
  }
  *(long *)((long)plVar3 + -0x20) = unaff_x19;
  *(ulong *)((long)plVar3 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(code **)((long)plVar3 + -8) = unaff_x30;
  *(undefined8 **)((long)plVar3 + -0x18) = puVar5;
  puVar5[0xb] = puVar12;
  puVar5[0xc] = unaff_x22 + 4;
  puVar5[9] = plVar13;
  puVar5[10] = &UNK_11072cd20;
  puVar5[8] = unaff_x22 + 2;
  lVar14 = *plVar15;
  puVar5[0xd] = &PTR_DAT_11072cca0;
  uVar10 = 0x10;
  _swift_task_alloc();
  puVar5[0xe] = uVar10;
  lVar14 = *(long *)(lVar14 + 0x50);
  puVar5[0xf] = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  puVar5[0x10] = lVar14;
  uVar11 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar5[0x11] = uVar11;
  puVar12 = (undefined8 *)0x70;
  _swift_task_alloc();
  puVar5[0x12] = puVar12;
  *puVar12 = puVar5;
  puVar12[1] = &UNK_104876614;
  *(ulong *)((long)plVar3 + -0x10) =
       *(ulong *)((long)plVar3 + -0x10) & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)plVar3 + -8) = *(undefined8 *)((long)plVar3 + -8);
  *(undefined8 **)((long)plVar3 + -0x18) = puVar12;
  puVar12[5] = uVar11;
  puVar12[6] = plVar15;
  lVar17 = *(long *)(*plVar15 + 0x50);
  puVar12[7] = lVar17;
  lVar14 = 0;
  __sSqMa(0,lVar17);
  puVar12[8] = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  puVar12[9] = lVar14;
  uVar11 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar12[10] = uVar11;
  lVar14 = *(long *)(lVar17 + -8);
  puVar12[0xb] = lVar14;
  uVar11 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar12[0xc] = uVar11;
  UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101a6686c; end: 101a66907;  */

void FUN_101a6686c(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  long in_x5;
  long in_x6;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long *unaff_x22;
  long *plVar19;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66908;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101a68c70;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = plVar19[8];
  lVar16 = plVar19[7];
  lVar13 = plVar19[2];
  FUN_101a68a04(lVar10,plVar19[9],plVar19[10],plVar19[0xb]);
  plVar19[5] = 0;
  func_0x000107c3e418(lVar13);
  lVar17 = plVar19[5];
  if (lVar17 == 0) {
    func_0x000107c615e8();
    UNRECOVERED_JUMPTABLE_00 = (code *)plVar19[1];
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar17 = lVar10;
  }
  else {
    plVar19[6] = lVar17;
    iVar2 = 2;
    lVar16 = 0;
    func_0x000100029b9c(2,0x12,0);
    lVar12 = lVar17;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    if (iVar2 != 0) {
      func_0x000107c61658(plVar19 + 6,&UNK_11072cd20,plVar19[0xe]);
    }
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar12);
    func_0x000107c615e8(lVar13);
    lVar13 = lVar10;
    func_0x000107c61170();
    UNRECOVERED_JUMPTABLE_00 = (code *)plVar19[1];
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar12 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101a66a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(lVar17);
    return;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19[10] = in_x6;
  plVar19[0xb] = lVar10;
  plVar19[8] = lVar16;
  plVar19[9] = in_x5;
  plVar19[7] = lVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101a66abc;
  }
  else {
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar14 = *(long **)(plVar19[0xb] + 0x10);
    plVar19[3] = 0;
    puVar3 = (undefined8 *)0xa0;
    func_0x000107c615b8();
    plVar19[0xc] = (long)puVar3;
    puVar4 = puVar3;
    func_0x000100fb85f0();
    plVar19[0xd] = (long)puVar4;
    *puVar3 = plVar19;
    puVar3[1] = FUN_101a66b6c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      puVar3[0xb] = puVar4;
      puVar3[0xc] = plVar19 + 4;
      puVar3[9] = plVar19 + 3;
      puVar3[10] = &UNK_11072cd20;
      puVar3[8] = plVar19 + 2;
      lVar10 = *plVar14;
      puVar3[0xd] = &PTR_DAT_11072cca0;
      uVar8 = 0x10;
      _swift_task_alloc();
      puVar3[0xe] = uVar8;
      lVar10 = *(long *)(lVar10 + 0x50);
      puVar3[0xf] = lVar10;
      lVar10 = *(long *)(lVar10 + -8);
      puVar3[0x10] = lVar10;
      uVar9 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar3[0x11] = uVar9;
      plVar19 = (long *)0x70;
      _swift_task_alloc();
      puVar3[0x12] = plVar19;
      *plVar19 = (long)puVar3;
      plVar19[1] = (long)&UNK_104876614;
      plVar19[5] = uVar9;
      plVar19[6] = (long)plVar14;
      lVar17 = *(long *)(*plVar14 + 0x50);
      plVar19[7] = lVar17;
      lVar10 = 0;
      __sSqMa(0,lVar17);
      plVar19[8] = lVar10;
      lVar10 = *(long *)(lVar10 + -8);
      plVar19[9] = lVar10;
      uVar9 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar19[10] = uVar9;
      lVar10 = *(long *)(lVar17 + -8);
      plVar19[0xb] = lVar10;
      uVar9 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar19[0xc] = uVar9;
      UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
    }
    else {
      func_0x000107c60e78();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar17 = *plVar19;
      func_0x000107c615c0(*(undefined8 *)(*plVar19 + 0x60));
      if (plVar14 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101a66c08;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66d90;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar15 = *(undefined8 *)(lVar17 + 0x10);
      uVar8 = *(undefined8 *)(lVar17 + 0x38);
      uVar7 = *(undefined8 *)(lVar17 + 0x48);
      uVar1 = *(undefined8 *)(lVar17 + 0x50);
      puVar5 = PTR_PTR_1126b25b8;
      func_0x000107c610f8(PTR_PTR_1126b25b8);
      func_0x000107c5fadc(uVar7,uVar1);
      func_0x000107c46814(puVar5);
      func_0x000107c61170(uVar7);
      *(undefined8 *)(lVar17 + 0x28) = 0;
      func_0x000107c3e418(uVar15);
      puVar18 = *(undefined **)(lVar17 + 0x28);
      if (puVar18 == (undefined *)0x0) {
        func_0x000107c615e8(uVar15);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar17 + 8);
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar18 = puVar5;
      }
      else {
        *(undefined **)(lVar17 + 0x30) = puVar18;
        iVar2 = 2;
        uVar8 = 0;
        func_0x000100029b9c(2,0x12,0);
        puVar6 = puVar18;
        func_0x000107c61174(puVar18);
        func_0x000107c61174();
        func_0x000107c61174();
        if (iVar2 != 0) {
          func_0x000107c61658(lVar17 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar17 + 0x68));
        }
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(uVar15);
        func_0x000107c61170(puVar5);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar17 + 8);
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar13 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(puVar18);
        return;
      }
      func_0x000107c60e78();
      uVar7 = *(undefined8 *)(lVar17 + 0x20);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar17 + 8))();
        return;
      }
      func_0x000107c60e78();
      *(long *)(lVar17 + 0xb8) = in_x6;
      *(undefined8 *)(lVar17 + 0xc0) = uVar15;
      *(undefined8 *)(lVar17 + 0xa8) = uVar8;
      *(long *)(lVar17 + 0xb0) = in_x5;
      *(undefined8 *)(lVar17 + 0xa0) = uVar7;
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66e0c;
    }
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101a66908; end: 101a66a4f;  */

void FUN_101a66908(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  long in_x5;
  long in_x6;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long *unaff_x22;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = unaff_x22[8];
  lVar17 = unaff_x22[7];
  lVar14 = unaff_x22[2];
  FUN_101a68a04(lVar12,unaff_x22[9],unaff_x22[10],unaff_x22[0xb]);
  unaff_x22[5] = 0;
  func_0x000107c3e418(lVar14);
  lVar18 = unaff_x22[5];
  if (lVar18 == 0) {
    func_0x000107c615e8();
    UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar18 = lVar12;
  }
  else {
    unaff_x22[6] = lVar18;
    iVar2 = 2;
    lVar17 = 0;
    func_0x000100029b9c(2,0x12,0);
    lVar13 = lVar18;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    if (iVar2 != 0) {
      func_0x000107c61658(unaff_x22 + 6,&UNK_11072cd20,unaff_x22[0xe]);
    }
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar13);
    func_0x000107c615e8(lVar14);
    lVar14 = lVar12;
    func_0x000107c61170();
    UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar13 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101a66a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(lVar18);
    return;
  }
  func_0x000107c60e78();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[10] = in_x6;
  unaff_x22[0xb] = lVar12;
  unaff_x22[8] = lVar17;
  unaff_x22[9] = in_x5;
  unaff_x22[7] = lVar14;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101a66abc;
  }
  else {
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar15 = *(long **)(unaff_x22[0xb] + 0x10);
    unaff_x22[3] = 0;
    puVar3 = (undefined8 *)0xa0;
    func_0x000107c615b8();
    unaff_x22[0xc] = (long)puVar3;
    puVar4 = puVar3;
    func_0x000100fb85f0();
    unaff_x22[0xd] = (long)puVar4;
    *puVar3 = unaff_x22;
    puVar3[1] = FUN_101a66b6c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      puVar3[0xb] = puVar4;
      puVar3[0xc] = unaff_x22 + 4;
      puVar3[9] = unaff_x22 + 3;
      puVar3[10] = &UNK_11072cd20;
      puVar3[8] = unaff_x22 + 2;
      lVar12 = *plVar15;
      puVar3[0xd] = &PTR_DAT_11072cca0;
      uVar8 = 0x10;
      _swift_task_alloc();
      puVar3[0xe] = uVar8;
      lVar12 = *(long *)(lVar12 + 0x50);
      puVar3[0xf] = lVar12;
      lVar12 = *(long *)(lVar12 + -8);
      puVar3[0x10] = lVar12;
      uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar3[0x11] = uVar9;
      plVar10 = (long *)0x70;
      _swift_task_alloc();
      puVar3[0x12] = plVar10;
      *plVar10 = (long)puVar3;
      plVar10[1] = (long)&UNK_104876614;
      plVar10[5] = uVar9;
      plVar10[6] = (long)plVar15;
      lVar18 = *(long *)(*plVar15 + 0x50);
      plVar10[7] = lVar18;
      lVar12 = 0;
      __sSqMa(0,lVar18);
      plVar10[8] = lVar12;
      lVar12 = *(long *)(lVar12 + -8);
      plVar10[9] = lVar12;
      uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar10[10] = uVar9;
      lVar12 = *(long *)(lVar18 + -8);
      plVar10[0xb] = lVar12;
      uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar10[0xc] = uVar9;
      UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
    }
    else {
      func_0x000107c60e78();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = *unaff_x22;
      func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x60));
      if (plVar15 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101a66c08;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66d90;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar16 = *(undefined8 *)(lVar18 + 0x10);
      uVar8 = *(undefined8 *)(lVar18 + 0x38);
      uVar7 = *(undefined8 *)(lVar18 + 0x48);
      uVar1 = *(undefined8 *)(lVar18 + 0x50);
      puVar5 = PTR_PTR_1126b25b8;
      func_0x000107c610f8(PTR_PTR_1126b25b8);
      func_0x000107c5fadc(uVar7,uVar1);
      func_0x000107c46814(puVar5);
      func_0x000107c61170(uVar7);
      *(undefined8 *)(lVar18 + 0x28) = 0;
      func_0x000107c3e418(uVar16);
      puVar19 = *(undefined **)(lVar18 + 0x28);
      if (puVar19 == (undefined *)0x0) {
        func_0x000107c615e8(uVar16);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar18 + 8);
        lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar19 = puVar5;
      }
      else {
        *(undefined **)(lVar18 + 0x30) = puVar19;
        iVar2 = 2;
        uVar8 = 0;
        func_0x000100029b9c(2,0x12,0);
        puVar6 = puVar19;
        func_0x000107c61174(puVar19);
        func_0x000107c61174();
        func_0x000107c61174();
        if (iVar2 != 0) {
          func_0x000107c61658(lVar18 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar18 + 0x68));
        }
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(uVar16);
        func_0x000107c61170(puVar5);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar18 + 8);
        lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar14 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(puVar19);
        return;
      }
      func_0x000107c60e78();
      uVar7 = *(undefined8 *)(lVar18 + 0x20);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar18 + 8))();
        return;
      }
      func_0x000107c60e78();
      *(long *)(lVar18 + 0xb8) = in_x6;
      *(undefined8 *)(lVar18 + 0xc0) = uVar16;
      *(undefined8 *)(lVar18 + 0xa8) = uVar8;
      *(long *)(lVar18 + 0xb0) = in_x5;
      *(undefined8 *)(lVar18 + 0xa0) = uVar7;
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66e0c;
    }
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101a66a50; end: 101a66abb;  */

void FUN_101a66a50(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  long lVar12;
  long unaff_x20;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  long *unaff_x22;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[10] = param_7;
  unaff_x22[0xb] = unaff_x20;
  unaff_x22[8] = param_4;
  unaff_x22[9] = param_6;
  unaff_x22[7] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    UNRECOVERED_JUMPTABLE = FUN_101a66abc;
  }
  else {
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar13 = *(long **)(unaff_x22[0xb] + 0x10);
    unaff_x22[3] = 0;
    puVar3 = (undefined8 *)0xa0;
    func_0x000107c615b8();
    unaff_x22[0xc] = (long)puVar3;
    puVar4 = puVar3;
    func_0x000100fb85f0();
    unaff_x22[0xd] = (long)puVar4;
    *puVar3 = unaff_x22;
    puVar3[1] = FUN_101a66b6c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      puVar3[0xb] = puVar4;
      puVar3[0xc] = unaff_x22 + 4;
      puVar3[9] = unaff_x22 + 3;
      puVar3[10] = &UNK_11072cd20;
      puVar3[8] = unaff_x22 + 2;
      lVar11 = *plVar13;
      puVar3[0xd] = &PTR_DAT_11072cca0;
      uVar8 = 0x10;
      _swift_task_alloc();
      puVar3[0xe] = uVar8;
      lVar11 = *(long *)(lVar11 + 0x50);
      puVar3[0xf] = lVar11;
      lVar11 = *(long *)(lVar11 + -8);
      puVar3[0x10] = lVar11;
      uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar3[0x11] = uVar9;
      plVar10 = (long *)0x70;
      _swift_task_alloc();
      puVar3[0x12] = plVar10;
      *plVar10 = (long)puVar3;
      plVar10[1] = (long)&UNK_104876614;
      plVar10[5] = uVar9;
      plVar10[6] = (long)plVar13;
      lVar15 = *(long *)(*plVar13 + 0x50);
      plVar10[7] = lVar15;
      lVar11 = 0;
      __sSqMa(0,lVar15);
      plVar10[8] = lVar11;
      lVar11 = *(long *)(lVar11 + -8);
      plVar10[9] = lVar11;
      uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar10[10] = uVar9;
      lVar11 = *(long *)(lVar15 + -8);
      plVar10[0xb] = lVar11;
      uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar10[0xc] = uVar9;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
    }
    else {
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar15 = *unaff_x22;
      func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x60));
      if (plVar13 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
          UNRECOVERED_JUMPTABLE = FUN_101a66c08;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        UNRECOVERED_JUMPTABLE = FUN_101a66d90;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar14 = *(undefined8 *)(lVar15 + 0x10);
      uVar8 = *(undefined8 *)(lVar15 + 0x38);
      uVar7 = *(undefined8 *)(lVar15 + 0x48);
      uVar1 = *(undefined8 *)(lVar15 + 0x50);
      puVar5 = PTR_PTR_1126b25b8;
      func_0x000107c610f8(PTR_PTR_1126b25b8);
      func_0x000107c5fadc(uVar7,uVar1);
      func_0x000107c46814(puVar5);
      func_0x000107c61170(uVar7);
      *(undefined8 *)(lVar15 + 0x28) = 0;
      func_0x000107c3e418(uVar14);
      puVar16 = *(undefined **)(lVar15 + 0x28);
      if (puVar16 == (undefined *)0x0) {
        func_0x000107c615e8(uVar14);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar16 = puVar5;
      }
      else {
        *(undefined **)(lVar15 + 0x30) = puVar16;
        iVar2 = 2;
        uVar8 = 0;
        func_0x000100029b9c(2,0x12,0);
        puVar6 = puVar16;
        func_0x000107c61174(puVar16);
        func_0x000107c61174();
        func_0x000107c61174();
        if (iVar2 != 0) {
          func_0x000107c61658(lVar15 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar15 + 0x68));
        }
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(uVar14);
        func_0x000107c61170(puVar5);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar12 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(puVar16);
        return;
      }
      func_0x000107c60e78();
      uVar7 = *(undefined8 *)(lVar15 + 0x20);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar15 + 8))();
        return;
      }
      func_0x000107c60e78();
      *(long *)(lVar15 + 0xb8) = param_7;
      *(undefined8 *)(lVar15 + 0xc0) = uVar14;
      *(undefined8 *)(lVar15 + 0xa8) = uVar8;
      *(long *)(lVar15 + 0xb0) = param_6;
      *(undefined8 *)(lVar15 + 0xa0) = uVar7;
      UNRECOVERED_JUMPTABLE = FUN_101a66e0c;
    }
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 101a66abc; end: 101a66b6b;  */

void FUN_101a66abc(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  long *unaff_x22;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = *(long **)(unaff_x22[0xb] + 0x10);
  unaff_x22[3] = 0;
  puVar3 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  unaff_x22[0xc] = (long)puVar3;
  puVar4 = puVar3;
  func_0x000100fb85f0();
  unaff_x22[0xd] = (long)puVar4;
  *puVar3 = unaff_x22;
  puVar3[1] = FUN_101a66b6c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    puVar3[0xb] = puVar4;
    puVar3[0xc] = unaff_x22 + 4;
    puVar3[9] = unaff_x22 + 3;
    puVar3[10] = &UNK_11072cd20;
    puVar3[8] = unaff_x22 + 2;
    lVar11 = *plVar13;
    puVar3[0xd] = &PTR_DAT_11072cca0;
    uVar8 = 0x10;
    _swift_task_alloc();
    puVar3[0xe] = uVar8;
    lVar11 = *(long *)(lVar11 + 0x50);
    puVar3[0xf] = lVar11;
    lVar11 = *(long *)(lVar11 + -8);
    puVar3[0x10] = lVar11;
    uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar3[0x11] = uVar9;
    plVar10 = (long *)0x70;
    _swift_task_alloc();
    puVar3[0x12] = plVar10;
    *plVar10 = (long)puVar3;
    plVar10[1] = (long)&UNK_104876614;
    plVar10[5] = uVar9;
    plVar10[6] = (long)plVar13;
    lVar15 = *(long *)(*plVar13 + 0x50);
    plVar10[7] = lVar15;
    lVar11 = 0;
    __sSqMa(0,lVar15);
    plVar10[8] = lVar11;
    lVar11 = *(long *)(lVar11 + -8);
    plVar10[9] = lVar11;
    uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar10[10] = uVar9;
    lVar11 = *(long *)(lVar15 + -8);
    plVar10[0xb] = lVar11;
    uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar10[0xc] = uVar9;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
  }
  else {
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = *unaff_x22;
    func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x60));
    if (plVar13 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        UNRECOVERED_JUMPTABLE = FUN_101a66c08;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      UNRECOVERED_JUMPTABLE = FUN_101a66d90;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar14 = *(undefined8 *)(lVar15 + 0x10);
    uVar8 = *(undefined8 *)(lVar15 + 0x38);
    uVar7 = *(undefined8 *)(lVar15 + 0x48);
    uVar1 = *(undefined8 *)(lVar15 + 0x50);
    puVar5 = PTR_PTR_1126b25b8;
    func_0x000107c610f8(PTR_PTR_1126b25b8);
    func_0x000107c5fadc(uVar7,uVar1);
    func_0x000107c46814(puVar5);
    func_0x000107c61170(uVar7);
    *(undefined8 *)(lVar15 + 0x28) = 0;
    func_0x000107c3e418(uVar14);
    puVar16 = *(undefined **)(lVar15 + 0x28);
    if (puVar16 == (undefined *)0x0) {
      func_0x000107c615e8(uVar14);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar16 = puVar5;
    }
    else {
      *(undefined **)(lVar15 + 0x30) = puVar16;
      iVar2 = 2;
      uVar8 = 0;
      func_0x000100029b9c(2,0x12,0);
      puVar6 = puVar16;
      func_0x000107c61174(puVar16);
      func_0x000107c61174();
      func_0x000107c61174();
      if (iVar2 != 0) {
        func_0x000107c61658(lVar15 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar15 + 0x68));
      }
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c615e8(uVar14);
      func_0x000107c61170(puVar5);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    if (lVar12 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar16);
      return;
    }
    func_0x000107c60e78();
    uVar7 = *(undefined8 *)(lVar15 + 0x20);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar15 + 8))();
      return;
    }
    func_0x000107c60e78();
    *(undefined8 *)(lVar15 + 0xb8) = in_x6;
    *(undefined8 *)(lVar15 + 0xc0) = uVar14;
    *(undefined8 *)(lVar15 + 0xa8) = uVar8;
    *(undefined8 *)(lVar15 + 0xb0) = in_x5;
    *(undefined8 *)(lVar15 + 0xa0) = uVar7;
    UNRECOVERED_JUMPTABLE = FUN_101a66e0c;
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 101a66b6c; end: 101a66c07;  */

void FUN_101a66b6c(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puVar10;
  long *unaff_x22;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x60));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      UNRECOVERED_JUMPTABLE = FUN_101a66c08;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    UNRECOVERED_JUMPTABLE = FUN_101a66d90;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined8 *)(lVar11 + 0x10);
  uVar6 = *(undefined8 *)(lVar11 + 0x38);
  uVar5 = *(undefined8 *)(lVar11 + 0x48);
  uVar1 = *(undefined8 *)(lVar11 + 0x50);
  puVar3 = PTR_PTR_1126b25b8;
  func_0x000107c610f8(PTR_PTR_1126b25b8);
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c46814(puVar3);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  func_0x000107c3e418(uVar9);
  puVar10 = *(undefined **)(lVar11 + 0x28);
  if (puVar10 == (undefined *)0x0) {
    func_0x000107c615e8(uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 8);
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar3;
  }
  else {
    *(undefined **)(lVar11 + 0x30) = puVar10;
    iVar2 = 2;
    uVar6 = 0;
    func_0x000100029b9c(2,0x12,0);
    puVar4 = puVar10;
    func_0x000107c61174(puVar10);
    func_0x000107c61174();
    func_0x000107c61174();
    if (iVar2 != 0) {
      func_0x000107c61658(lVar11 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar11 + 0x68));
    }
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(puVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 8);
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar8 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar10);
    return;
  }
  func_0x000107c60e78();
  uVar5 = *(undefined8 *)(lVar11 + 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar11 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(lVar11 + 0xb8) = in_x6;
  *(undefined8 *)(lVar11 + 0xc0) = uVar9;
  *(undefined8 *)(lVar11 + 0xa8) = uVar6;
  *(undefined8 *)(lVar11 + 0xb0) = in_x5;
  *(undefined8 *)(lVar11 + 0xa0) = uVar5;
  UNRECOVERED_JUMPTABLE = FUN_101a66e0c;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 101a66c08; end: 101a66d8f;  */

void FUN_101a66c08(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x22;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar3 = PTR_PTR_1126b25b8;
  func_0x000107c610f8(PTR_PTR_1126b25b8);
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c46814(puVar3);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  func_0x000107c3e418(uVar9);
  puVar10 = *(undefined **)(unaff_x22 + 0x28);
  if (puVar10 == (undefined *)0x0) {
    func_0x000107c615e8(uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar3;
  }
  else {
    *(undefined **)(unaff_x22 + 0x30) = puVar10;
    iVar2 = 2;
    uVar6 = 0;
    func_0x000100029b9c(2,0x12,0);
    puVar4 = puVar10;
    func_0x000107c61174(puVar10);
    func_0x000107c61174();
    func_0x000107c61174();
    if (iVar2 != 0) {
      func_0x000107c61658(unaff_x22 + 0x30,&UNK_11072cd20,*(undefined8 *)(unaff_x22 + 0x68));
    }
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(puVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar8 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar10);
    return;
  }
  func_0x000107c60e78();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(unaff_x22 + 0xb8) = in_x6;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xb0) = in_x5;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a66e0c,0,0);
  return;
}



/* Entry: 101a66d90; end: 101a66deb;  */

void FUN_101a66d90(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(unaff_x22 + 0xb8) = in_x6;
  *(undefined8 *)(unaff_x22 + 0xc0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = in_x3;
  *(undefined8 *)(unaff_x22 + 0xb0) = in_x5;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a66e0c,0,0);
  return;
}



/* Entry: 101a66dec; end: 101a66e0b;  */

void FUN_101a66dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xc0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a66e0c,0,0);
  return;
}



/* Entry: 101a66e0c; end: 101a66e8f;  */

void FUN_101a66e0c(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long unaff_x22;
  
  plVar6 = *(long **)(*(long *)(unaff_x22 + 0xc0) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar1;
  plVar4 = plVar1;
  func_0x000100fb85f0();
  *(long **)(unaff_x22 + 0xd0) = plVar4;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a66e90;
  plVar1[0xb] = (long)plVar4;
  plVar1[0xc] = unaff_x22 + 0x90;
  plVar1[9] = unaff_x22 + 0x88;
  plVar1[10] = (long)&UNK_11072cd20;
  plVar1[8] = unaff_x22 + 0x80;
  lVar5 = *plVar6;
  plVar1[0xd] = (long)&PTR_DAT_11072cca0;
  lVar2 = 0x10;
  _swift_task_alloc();
  plVar1[0xe] = lVar2;
  lVar2 = *(long *)(lVar5 + 0x50);
  plVar1[0xf] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x10] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0x11] = uVar3;
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  plVar1[0x12] = (long)plVar4;
  *plVar4 = (long)plVar1;
  plVar4[1] = (long)&UNK_104876614;
  plVar4[5] = uVar3;
  plVar4[6] = (long)plVar6;
  lVar5 = *(long *)(*plVar6 + 0x50);
  plVar4[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar4[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar4[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101a66e90; end: 101a66ee7;  */

void FUN_101a66e90(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a66ee8;
  }
  else {
    pcVar1 = FUN_101a67190;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a66ee8; end: 101a670b7;  */

void FUN_101a66ee8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 *puVar9;
  long lVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar8;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar2 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c46814();
  *(undefined **)(unaff_x22 + 0xe0) = puVar2;
  func_0x000107c61170(uVar3);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xe8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a670b8;
  lVar4 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar4,0);
  FUN_101a68bf4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  lVar5 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar5 + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar6);
  (**(code **)(lVar10 + 0x68))();
  uVar7 = uVar6;
  func_0x000107c5fff0(uVar6);
  (**(code **)(lVar10 + 8))(uVar6,lVar5);
  func_0x000107c615c0(uVar6);
  puVar2 = &UNK_110432660;
  func_0x000107c613fc(&UNK_110432660,0x18,7);
  puVar9 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar2 + 0x10) = lVar4;
  *(code **)(unaff_x22 + 0x70) = FUN_101a68c34;
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_100ab47f8;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110432678;
  func_0x000107c60bc4(puVar9);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c3e41c(uVar8);
  func_0x000107c60bd0(puVar9);
  func_0x000107c61170(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a670b8; end: 101a6718f;  */

void FUN_101a670b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a670f8,0,0);
  return;
}



/* Entry: 101a67190; end: 101a6719f;  */

void FUN_101a67190(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101a6719c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Entry: 101a671a0; end: 101a6722b;  */

void FUN_101a671a0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  ulong *puVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x19;
  long *plVar18;
  undefined8 uVar19;
  undefined8 *unaff_x20;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long unaff_x22;
  ulong unaff_x29;
  code *pcStack_e8;
  long lStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  *(undefined8 **)(unaff_x22 + 0x48) = unaff_x20;
  *(long *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(long *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = *unaff_x20;
  plVar11 = (long *)0x80;
  lVar12 = param_6;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_101a6722c;
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  plVar3 = (long *)&stack0xffffffffffffffe0;
  puVar1 = &uStack_10;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11[0xb] = param_6;
  plVar11[0xc] = (long)unaff_x20;
  plVar11[9] = param_4;
  plVar11[10] = param_5;
  plVar11[7] = param_2;
  plVar11[8] = param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101a667bc;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18 = *(long **)(plVar11[0xc] + 0x10);
  plVar15 = plVar11 + 3;
  *plVar15 = 0;
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  plVar11[0xd] = (long)plVar5;
  plVar6 = plVar5;
  func_0x000100fb85f0();
  plVar11[0xe] = (long)plVar6;
  *plVar5 = (long)plVar11;
  plVar5[1] = (long)FUN_101a6686c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
    pcStack_e8 = FUN_101a667bc;
  }
  else {
    func_0x000107c60e78();
    uStack_60 = (ulong)&stack0xffffffffffffffd0 | 0x1000000000000000;
    pcStack_58 = FUN_101a6686c;
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_68 = *plVar11;
    plVar11 = (long *)*plVar11;
    func_0x000107c615c0(*(undefined8 *)(lStack_68 + 0x68));
    if (plVar18 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66908;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a68c70;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_80 = (ulong)&uStack_60 | 0x1000000000000000;
    pcStack_78 = FUN_101a66908;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar17 = plVar11[8];
    lVar20 = plVar11[7];
    unaff_x19 = plVar11[2];
    plStack_98 = plVar5;
    plStack_90 = plVar15;
    plStack_88 = plVar11;
    FUN_101a68a04(lVar17,plVar11[9],plVar11[10],plVar11[0xb]);
    plVar11[5] = 0;
    func_0x000107c3e418(unaff_x19);
    lVar21 = plVar11[5];
    if (lVar21 == 0) {
      lVar7 = unaff_x19;
      func_0x000107c615e8();
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar11[1];
      lVar21 = lVar17;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) goto LAB_101a66a30;
    }
    else {
      plVar11[6] = lVar21;
      iVar4 = 2;
      lVar20 = 0;
      func_0x000100029b9c(2,0x12,0);
      lVar7 = lVar21;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      if (iVar4 != 0) {
        func_0x000107c61658(plVar11 + 6,&UNK_11072cd20,plVar11[0xe]);
      }
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(unaff_x19);
      lVar7 = lVar17;
      func_0x000107c61170();
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar11[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
LAB_101a66a30:
                    /* WARNING: Could not recover jumptable at 0x000101a66a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(lVar21);
        return;
      }
    }
    func_0x000107c60e78();
    uStack_d0 = (ulong)&uStack_80 | 0x1000000000000000;
    plVar3 = &lStack_e0;
    pcStack_c8 = FUN_101a66a50;
    puVar1 = &uStack_d0;
    lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11[10] = param_7;
    plVar11[0xb] = lVar17;
    plVar11[8] = lVar20;
    plVar11[9] = lVar12;
    plVar11[7] = lVar7;
    plStack_d8 = plVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66abc;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    pcStack_e8 = FUN_101a66abc;
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar18 = *(long **)(plVar11[0xb] + 0x10);
    plVar15 = plVar11 + 3;
    *plVar15 = 0;
    plVar5 = (long *)0xa0;
    func_0x000107c615b8();
    plVar11[0xc] = (long)plVar5;
    plVar6 = plVar5;
    func_0x000100fb85f0();
    plVar11[0xd] = (long)plVar6;
    *plVar5 = (long)plVar11;
    plVar5[1] = (long)FUN_101a66b6c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar21 = *plVar11;
      func_0x000107c615c0(*(undefined8 *)(*plVar11 + 0x60));
      if (plVar18 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101a66c08;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66d90;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar19 = *(undefined8 *)(lVar21 + 0x10);
      uVar16 = *(undefined8 *)(lVar21 + 0x38);
      uVar10 = *(undefined8 *)(lVar21 + 0x48);
      uVar2 = *(undefined8 *)(lVar21 + 0x50);
      puVar8 = PTR_PTR_1126b25b8;
      func_0x000107c610f8(PTR_PTR_1126b25b8);
      func_0x000107c5fadc(uVar10,uVar2);
      func_0x000107c46814(puVar8);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar21 + 0x28) = 0;
      func_0x000107c3e418(uVar19);
      puVar22 = *(undefined **)(lVar21 + 0x28);
      if (puVar22 == (undefined *)0x0) {
        func_0x000107c615e8(uVar19);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar21 + 8);
        lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar22 = puVar8;
      }
      else {
        *(undefined **)(lVar21 + 0x30) = puVar22;
        iVar4 = 2;
        uVar16 = 0;
        func_0x000100029b9c(2,0x12,0);
        puVar9 = puVar22;
        func_0x000107c61174(puVar22);
        func_0x000107c61174();
        func_0x000107c61174();
        if (iVar4 != 0) {
          func_0x000107c61658(lVar21 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar21 + 0x68));
        }
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(uVar19);
        func_0x000107c61170(puVar8);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar21 + 8);
        lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar20 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(puVar22);
        return;
      }
      func_0x000107c60e78();
      uVar10 = *(undefined8 *)(lVar21 + 0x20);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar21 + 8))();
        return;
      }
      func_0x000107c60e78();
      *(long *)(lVar21 + 0xb8) = param_7;
      *(undefined8 *)(lVar21 + 0xc0) = uVar19;
      *(undefined8 *)(lVar21 + 0xa8) = uVar16;
      *(long *)(lVar21 + 0xb0) = lVar12;
      *(undefined8 *)(lVar21 + 0xa0) = uVar10;
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66e0c;
      goto _swift_task_switch;
    }
  }
  *(long *)((long)plVar3 + -0x20) = unaff_x19;
  *(ulong *)((long)plVar3 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(code **)((long)plVar3 + -8) = pcStack_e8;
  *(long **)((long)plVar3 + -0x18) = plVar5;
  plVar5[0xb] = (long)plVar6;
  plVar5[0xc] = (long)(plVar11 + 4);
  plVar5[9] = (long)plVar15;
  plVar5[10] = (long)&UNK_11072cd20;
  plVar5[8] = (long)(plVar11 + 2);
  lVar17 = *plVar18;
  plVar5[0xd] = (long)&PTR_DAT_11072cca0;
  lVar12 = 0x10;
  _swift_task_alloc();
  plVar5[0xe] = lVar12;
  lVar12 = *(long *)(lVar17 + 0x50);
  plVar5[0xf] = lVar12;
  lVar12 = *(long *)(lVar12 + -8);
  plVar5[0x10] = lVar12;
  uVar13 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0x11] = uVar13;
  puVar14 = (undefined8 *)0x70;
  _swift_task_alloc();
  plVar5[0x12] = (long)puVar14;
  *puVar14 = plVar5;
  puVar14[1] = &UNK_104876614;
  *(ulong *)((long)plVar3 + -0x10) =
       *(ulong *)((long)plVar3 + -0x10) & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)plVar3 + -8) = *(undefined8 *)((long)plVar3 + -8);
  *(undefined8 **)((long)plVar3 + -0x18) = puVar14;
  puVar14[5] = uVar13;
  puVar14[6] = plVar18;
  lVar17 = *(long *)(*plVar18 + 0x50);
  puVar14[7] = lVar17;
  lVar12 = 0;
  __sSqMa(0,lVar17);
  puVar14[8] = lVar12;
  lVar12 = *(long *)(lVar12 + -8);
  puVar14[9] = lVar12;
  uVar13 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar14[10] = uVar13;
  lVar12 = *(long *)(lVar17 + -8);
  puVar14[0xb] = lVar12;
  uVar13 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar14[0xc] = uVar13;
  UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101a6722c; end: 101a672ab;  */

void FUN_101a6722c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
  if (unaff_x20 != 0) {
    **(undefined8 **)(lVar1 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000101a67284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a672ac,0,0);
  return;
}



/* Entry: 101a672ac; end: 101a67373;  */

void FUN_101a672ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  undefined8 uVar5;
  long *plVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  plVar6 = *(long **)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined ***)(unaff_x22 + 0x30) = &PTR_DAT_110432560;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  lVar3 = 0;
  FUN_101a690d0();
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c61474(lVar4);
  *(undefined8 *)(lVar4 + 0x70) = uVar1;
  *(undefined8 *)(lVar4 + 0x78) = uVar5;
  *(undefined1 *)(lVar4 + 0x80) = 0;
  FUN_101a68ae4((undefined8 *)(unaff_x22 + 0x10),lVar4 + 0x88);
  plVar6[3] = lVar3;
  plVar6[4] = (long)&PTR_DAT_1104326c0;
  *plVar6 = lVar4;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a67370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a67374; end: 101a6742b;  */

void FUN_101a67374(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  ulong *puVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 *unaff_x20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long unaff_x22;
  ulong unaff_x29;
  code *pcStack_e8;
  long lStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 **)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(long *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = *unaff_x20;
  lVar17 = 0x112d453c8;
  lVar18 = param_6;
  lVar16 = param_7;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar11 = *(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar11;
  plVar12 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_101a6742c;
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  plVar3 = (long *)&stack0xffffffffffffffe0;
  puVar1 = &uStack_10;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12[0xb] = param_7;
  plVar12[0xc] = (long)unaff_x20;
  plVar12[9] = param_5;
  plVar12[10] = param_6;
  plVar12[7] = param_2;
  plVar12[8] = param_4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101a667bc;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = *(long **)(plVar12[0xc] + 0x10);
  plVar14 = plVar12 + 3;
  *plVar14 = 0;
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  plVar12[0xd] = (long)plVar5;
  plVar6 = plVar5;
  func_0x000100fb85f0();
  plVar12[0xe] = (long)plVar6;
  *plVar5 = (long)plVar12;
  plVar5[1] = (long)FUN_101a6686c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
    pcStack_e8 = FUN_101a667bc;
  }
  else {
    func_0x000107c60e78();
    uStack_60 = (ulong)&stack0xffffffffffffffd0 | 0x1000000000000000;
    pcStack_58 = FUN_101a6686c;
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_68 = *plVar12;
    plVar12 = (long *)*plVar12;
    func_0x000107c615c0(*(undefined8 *)(lStack_68 + 0x68));
    if (plVar19 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66908;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a68c70;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_80 = (ulong)&uStack_60 | 0x1000000000000000;
    pcStack_78 = FUN_101a66908;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar17 = plVar12[8];
    lVar21 = plVar12[7];
    unaff_x19 = plVar12[2];
    plStack_98 = plVar5;
    plStack_90 = plVar14;
    plStack_88 = plVar12;
    FUN_101a68a04(lVar17,plVar12[9],plVar12[10],plVar12[0xb]);
    plVar12[5] = 0;
    func_0x000107c3e418(unaff_x19);
    lVar22 = plVar12[5];
    if (lVar22 == 0) {
      lVar7 = unaff_x19;
      func_0x000107c615e8();
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar12[1];
      lVar22 = lVar17;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) goto LAB_101a66a30;
    }
    else {
      plVar12[6] = lVar22;
      iVar4 = 2;
      lVar21 = 0;
      func_0x000100029b9c(2,0x12,0);
      lVar7 = lVar22;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      if (iVar4 != 0) {
        func_0x000107c61658(plVar12 + 6,&UNK_11072cd20,plVar12[0xe]);
      }
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(unaff_x19);
      lVar7 = lVar17;
      func_0x000107c61170();
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar12[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
LAB_101a66a30:
                    /* WARNING: Could not recover jumptable at 0x000101a66a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(lVar22);
        return;
      }
    }
    func_0x000107c60e78();
    uStack_d0 = (ulong)&uStack_80 | 0x1000000000000000;
    plVar3 = &lStack_e0;
    pcStack_c8 = FUN_101a66a50;
    puVar1 = &uStack_d0;
    lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar12[10] = lVar16;
    plVar12[0xb] = lVar17;
    plVar12[8] = lVar21;
    plVar12[9] = lVar18;
    plVar12[7] = lVar7;
    plStack_d8 = plVar12;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66abc;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    pcStack_e8 = FUN_101a66abc;
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar19 = *(long **)(plVar12[0xb] + 0x10);
    plVar14 = plVar12 + 3;
    *plVar14 = 0;
    plVar5 = (long *)0xa0;
    func_0x000107c615b8();
    plVar12[0xc] = (long)plVar5;
    plVar6 = plVar5;
    func_0x000100fb85f0();
    plVar12[0xd] = (long)plVar6;
    *plVar5 = (long)plVar12;
    plVar5[1] = (long)FUN_101a66b6c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar22 = *plVar12;
      func_0x000107c615c0(*(undefined8 *)(*plVar12 + 0x60));
      if (plVar19 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101a66c08;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66d90;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar20 = *(undefined8 *)(lVar22 + 0x10);
      uVar15 = *(undefined8 *)(lVar22 + 0x38);
      uVar10 = *(undefined8 *)(lVar22 + 0x48);
      uVar2 = *(undefined8 *)(lVar22 + 0x50);
      puVar8 = PTR_PTR_1126b25b8;
      func_0x000107c610f8(PTR_PTR_1126b25b8);
      func_0x000107c5fadc(uVar10,uVar2);
      func_0x000107c46814(puVar8);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar22 + 0x28) = 0;
      func_0x000107c3e418(uVar20);
      puVar23 = *(undefined **)(lVar22 + 0x28);
      if (puVar23 == (undefined *)0x0) {
        func_0x000107c615e8(uVar20);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar22 + 8);
        lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar23 = puVar8;
      }
      else {
        *(undefined **)(lVar22 + 0x30) = puVar23;
        iVar4 = 2;
        uVar15 = 0;
        func_0x000100029b9c(2,0x12,0);
        puVar9 = puVar23;
        func_0x000107c61174(puVar23);
        func_0x000107c61174();
        func_0x000107c61174();
        if (iVar4 != 0) {
          func_0x000107c61658(lVar22 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar22 + 0x68));
        }
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(uVar20);
        func_0x000107c61170(puVar8);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar22 + 8);
        lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar21 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(puVar23);
        return;
      }
      func_0x000107c60e78();
      uVar10 = *(undefined8 *)(lVar22 + 0x20);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar22 + 8))();
        return;
      }
      func_0x000107c60e78();
      *(long *)(lVar22 + 0xb8) = lVar16;
      *(undefined8 *)(lVar22 + 0xc0) = uVar20;
      *(undefined8 *)(lVar22 + 0xa8) = uVar15;
      *(long *)(lVar22 + 0xb0) = lVar18;
      *(undefined8 *)(lVar22 + 0xa0) = uVar10;
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66e0c;
      goto _swift_task_switch;
    }
  }
  *(long *)((long)plVar3 + -0x20) = unaff_x19;
  *(ulong *)((long)plVar3 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(code **)((long)plVar3 + -8) = pcStack_e8;
  *(long **)((long)plVar3 + -0x18) = plVar5;
  plVar5[0xb] = (long)plVar6;
  plVar5[0xc] = (long)(plVar12 + 4);
  plVar5[9] = (long)plVar14;
  plVar5[10] = (long)&UNK_11072cd20;
  plVar5[8] = (long)(plVar12 + 2);
  lVar18 = *plVar19;
  plVar5[0xd] = (long)&PTR_DAT_11072cca0;
  lVar17 = 0x10;
  _swift_task_alloc();
  plVar5[0xe] = lVar17;
  lVar17 = *(long *)(lVar18 + 0x50);
  plVar5[0xf] = lVar17;
  lVar17 = *(long *)(lVar17 + -8);
  plVar5[0x10] = lVar17;
  uVar11 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0x11] = uVar11;
  puVar13 = (undefined8 *)0x70;
  _swift_task_alloc();
  plVar5[0x12] = (long)puVar13;
  *puVar13 = plVar5;
  puVar13[1] = &UNK_104876614;
  *(ulong *)((long)plVar3 + -0x10) =
       *(ulong *)((long)plVar3 + -0x10) & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)plVar3 + -8) = *(undefined8 *)((long)plVar3 + -8);
  *(undefined8 **)((long)plVar3 + -0x18) = puVar13;
  puVar13[5] = uVar11;
  puVar13[6] = plVar19;
  lVar18 = *(long *)(*plVar19 + 0x50);
  puVar13[7] = lVar18;
  lVar17 = 0;
  __sSqMa(0,lVar18);
  puVar13[8] = lVar17;
  lVar17 = *(long *)(lVar17 + -8);
  puVar13[9] = lVar17;
  uVar11 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar13[10] = uVar11;
  lVar17 = *(long *)(lVar18 + -8);
  puVar13[0xb] = lVar17;
  uVar11 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar13[0xc] = uVar11;
  UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101a6742c; end: 101a6748b;  */

void FUN_101a6742c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a6748c;
  }
  else {
    pcVar1 = FUN_101a675f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}


