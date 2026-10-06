/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002c2dfc; end: 1002c2e4b;  */

void FUN_1002c2dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c2e4c; end: 1002c2e6b;  */

void FUN_1002c2e4c(void)

{
  func_0x000107c61168(&PTR_PTR_1129aefb8);
  return;
}



/* Entry: 1002c2e6c; end: 1002c2e87;  */

void FUN_1002c2e6c(undefined8 param_1)

{
  FUN_1000285a8(0x112e31da8,&UNK_10da1b008);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_100bf340c,param_1);
  return;
}



/* Entry: 1002c2e88; end: 1002c2ed7;  */

void FUN_1002c2e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c2ed8; end: 1002c2f63; +[Event descriptor] */

undefined * FUN_1002c2ed8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9e38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd39c0,
                        &PTR____CFConstantStringClassReference_110e21078,&PTR_DAT_1133e1018,
                        &PTR_DAT_1133e1030,0xe,0x78,0x1c);
    func_0x000107c5a8b4();
    puRam00000001137f9e38 = puVar1;
  }
  return puRam00000001137f9e38;
}



/* Entry: 1002c2f64; end: 1002c2f83;  */

void FUN_1002c2f64(void)

{
  func_0x000107c61168(&PTR_PTR_11292a468);
  return;
}



/* Entry: 1002c2f84; end: 1002c30bb; -[SCManagedCaptureSessionImpl _startObservingRunningStatus] */

/* WARNING: Possible PIC construction at 0x0001002c2fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002c3014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002c3050: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002c3018) */
/* WARNING: Removing unreachable block (ram,0x0001002c2fdc) */
/* WARNING: Removing unreachable block (ram,0x0001002c3054) */

void FUN_1002c2f84(void)

{
  undefined *puVar1;
  
  func_0x000107c3c914();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1002c30bc; end: 1002c31cf; -[SCManagedCaptureSessionImpl _stopObservingRunningStatus] */

/* WARNING: Possible PIC construction at 0x0001002c3104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002c3138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002c316c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002c313c) */
/* WARNING: Removing unreachable block (ram,0x0001002c3108) */
/* WARNING: Removing unreachable block (ram,0x0001002c3170) */

void FUN_1002c30bc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c4ffac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1002c31d0; end: 1002c32af;  */

void FUN_1002c31d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e31e90,&UNK_10da1b1b0);
  puVar1 = &UNK_11048d2e8;
  func_0x000107c613fc(&UNK_11048d2e8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(&UNK_100bf1e90,puVar1);
  return;
}



/* Entry: 1002c32b0; end: 1002c32cf;  */

void FUN_1002c32b0(void)

{
  func_0x000107c61168(&PTR_PTR_112e31f08);
  return;
}



/* Entry: 1002c32d0; end: 1002c32eb;  */

void FUN_1002c32d0(undefined8 param_1)

{
  FUN_1000285a8(0x112e31e98,&UNK_10da1b1b8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_100bf1e34,param_1);
  return;
}



/* Entry: 1002c32ec; end: 1002c333b;  */

void FUN_1002c32ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c333c; end: 1002c335b;  */

void FUN_1002c333c(void)

{
  func_0x000107c61168(&PTR_PTR_11292a3a8);
  return;
}



/* Entry: 1002c335c; end: 1002c343b;  */

void FUN_1002c335c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e20610,&UNK_10da03560);
  puVar1 = &UNK_1104745f8;
  func_0x000107c613fc(&UNK_1104745f8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_10077d128,puVar1);
  return;
}



/* Entry: 1002c343c; end: 1002c345b;  */

void FUN_1002c343c(void)

{
  func_0x000107c61168(&PTR_PTR_112e20688);
  return;
}



/* Entry: 1002c345c; end: 1002c34db;  */

void FUN_1002c345c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0ccb0,&UNK_10d9e6e10);
  puVar1 = &UNK_11045eb68;
  func_0x000107c613fc(&UNK_11045eb68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101c5f718,puVar1);
  return;
}



/* Entry: 1002c34dc; end: 1002c3507;  */

void FUN_1002c34dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c3508; end: 1002c3553;  */

void FUN_1002c3508(undefined8 param_1)

{
  FUN_1000285a8(0x112eff1c8,&UNK_10db32550);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102c0e0dc,param_1);
  return;
}



/* Entry: 1002c3554; end: 1002c3573;  */

void FUN_1002c3554(void)

{
  func_0x000107c61168(&PTR_PTR_112896a48);
  return;
}



/* Entry: 1002c3574; end: 1002c3b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002c3574(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 in_x4;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_d0 [88];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *param_2;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000003b;
  FUN_1000a9a18(0xd00000000000003b,0x800000010efc2380);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dd8788);
  func_0x000107c4db98();
  lVar14 = _DAT_112dd8760;
  lVar13 = *(long *)(unaff_x20 + _DAT_112dd8760);
  if ((int)lVar13 == -1) {
    lVar13 = *(long *)(unaff_x20 + _DAT_112dd8770);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar11 = 0;
    if (lVar13 != 0) {
      lVar4 = lVar13;
      func_0x000107c3f0ec();
      func_0x000107c61180();
      func_0x000107c615e8(lVar13);
      lVar13 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar13 != 0) {
        func_0x000107c3f094(lVar13);
        func_0x000107c615e8(lVar13);
        uVar11 = param_1;
      }
    }
    lVar4 = *(long *)(unaff_x20 + _DAT_112dd8768);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar13 = lVar4;
    FUN_100150458(uVar11);
    func_0x000107c61170(lVar4);
    *(long *)(unaff_x20 + lVar14) = lVar13;
  }
  if (lVar13 == 1) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dd8790);
    uVar11 = uVar5;
    func_0x000107c418b4(uVar5);
    func_0x000107c61180();
    func_0x000107c43fe8();
    func_0x000107c615e8(uVar11);
    func_0x000107c418b4(uVar5);
    func_0x000107c61180();
    func_0x000107c52b38();
LAB_1002c3744:
    func_0x000107c615e8(uVar5);
  }
  else if (lVar13 == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dd8790);
    func_0x000107c418b4(uVar5);
    func_0x000107c61180();
    func_0x000107c54cf4();
    goto LAB_1002c3744;
  }
  uVar5 = 0;
  FUN_1002e8978();
  FUN_1002e8998();
  uVar11 = uVar5;
  func_0x0001002ed5a8();
  func_0x000107c61170(uVar5);
  lVar4 = _DAT_112dd8738;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dd8738);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8738) = uVar11;
  func_0x000107c61170(uVar5);
  lVar13 = 0x112da0c08;
  FUN_1000285a8(0x112da0c08,&UNK_10d943d90);
  func_0x000107c61534();
  *(undefined8 *)(lVar13 + 0x18) = 2;
  *(undefined8 *)(lVar13 + 0x10) = 1;
  uVar11 = *(undefined8 *)(unaff_x20 + lVar14);
  *(undefined8 *)(lVar13 + 0x20) = uVar11;
  if (*(char *)(unaff_x20 + _DAT_112dd8778) == '\x01') {
    FUN_1002a566c((int)uVar11 != 1);
    lVar15 = _DAT_112dd8718;
    lVar14 = unaff_x20 + _DAT_112dd8718;
    func_0x000107c61618();
    if (lVar14 != 0) {
      func_0x000107c58d6c();
      func_0x000107c615e8(lVar14);
    }
    lVar14 = unaff_x20 + lVar15;
    func_0x000107c61618();
    if (lVar14 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = lVar14;
      func_0x000107c51b1c();
      func_0x000107c615e8(lVar14);
    }
    FUN_1007089bc();
    lVar6 = 1;
    func_0x0001002a5edc(1,2,1,lVar13);
    *(undefined8 *)(lVar6 + 0x10) = 2;
    *(long *)(lVar6 + 0x28) = lVar16;
    lVar14 = *(long *)(unaff_x20 + lVar4);
    lVar13 = lVar6;
    if (lVar14 == 0) goto LAB_1002c3904;
    lVar15 = unaff_x20 + lVar15;
    func_0x000107c61618();
    func_0x000107c61174(lVar14);
    if (lVar15 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = lVar15;
      func_0x000107c51b1c(lVar15);
      func_0x000107c615e8(lVar15);
    }
    func_0x0001002e9780(lVar16);
    func_0x000107c61170();
  }
  else {
    lVar14 = unaff_x20 + _DAT_112dd8718;
    func_0x000107c61618();
    if (lVar14 != 0) {
      func_0x000107c58d6c();
      func_0x000107c615e8(lVar14);
    }
    if (*(long *)(unaff_x20 + lVar4) == 0) goto LAB_1002c3904;
    lVar14 = 0;
    func_0x0001002e9780(0);
  }
  func_0x000107c61170(lVar14);
LAB_1002c3904:
  lVar15 = *(long *)(unaff_x20 + _DAT_112dd8790);
  lVar14 = lVar15;
  func_0x000107c418b4();
  func_0x000107c61180();
  func_0x000107c58d6c();
  func_0x000107c615e8(lVar14);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  for (lVar14 = *(long *)(lVar13 + 0x10); lVar14 != 0; lVar14 = lVar14 + -1) {
    lVar16 = lVar15;
    func_0x000107c52078();
    func_0x000107c61180();
    lVar6 = lVar16;
    func_0x000107c4411c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar16);
    if (lVar6 != 0) {
      func_0x000107c615f0(lVar6);
      puVar8 = puVar9;
      func_0x000107c61550();
      if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
         (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar9) {
            puVar7 = puVar9;
          }
          func_0x000107c60480(puVar7);
        }
        puVar8 = (undefined *)0x0;
        FUN_1002ee1b4(0,puVar7 + 1,1,puVar9);
      }
      uVar12 = (ulong)puVar8 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar12 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_1002ee1b4(puVar9,uVar1 + 1,1,puVar8);
        uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
      *(long *)(uVar12 + uVar1 * 8 + 0x20) = lVar6;
      func_0x000107c615e8(lVar6);
    }
  }
  lVar14 = unaff_x20 + _DAT_112dd8710;
  func_0x000107c61618();
  if (lVar14 != 0) {
    uVar11 = 0x112dd8708;
    FUN_1000285a8(0x112dd8708,&UNK_10d99be00);
    puVar8 = puVar9;
    func_0x000107c5fc48(puVar9,uVar11);
    func_0x000107c3d604(lVar14);
    func_0x000107c615e8(lVar14);
    func_0x000107c61170(puVar8);
  }
  lVar14 = *(long *)(unaff_x20 + lVar4);
  if (lVar14 != 0) {
    func_0x000107c61174();
    lVar4 = lVar14;
    FUN_1002e9560();
    FUN_1002e96c8();
    func_0x000107c61170();
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c4db98(uVar2);
  func_0x000107c6142c(lVar13);
  func_0x000107c6142c(puVar9);
  puVar10 = auStack_d0;
  uVar11 = 0;
  uVar5 = 0;
  func_0x000107c61428(param_2);
  uVar2 = *param_2;
  func_0x000107c61174();
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  FUN_1000285a8(0x112e214d0,&UNK_10da04b70);
  puVar9 = &UNK_110475848;
  func_0x000107c613fc(&UNK_110475848,0x38,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar2;
  *(undefined1 **)(puVar9 + 0x18) = puVar10;
  *(undefined8 *)(puVar9 + 0x20) = uVar11;
  *(undefined8 *)(puVar9 + 0x28) = uVar5;
  *(undefined8 *)(puVar9 + 0x30) = in_x4;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar10);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(in_x4);
  FUN_1000823a8(&UNK_101d1fbc4,puVar9);
  return;
}



/* Entry: 1002c3b58; end: 1002c3c13;  */

void FUN_1002c3b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e214d0,&UNK_10da04b70);
  puVar1 = &UNK_110475848;
  func_0x000107c613fc(&UNK_110475848,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(&UNK_101d1fbc4,puVar1);
  return;
}



/* Entry: 1002c3c14; end: 1002c3c77;  */

void FUN_1002c3c14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c3c78; end: 1002c3c93;  */

void FUN_1002c3c78(undefined8 param_1)

{
  FUN_1000285a8(0x112e21700,&UNK_10da04f78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d20b10,param_1);
  return;
}



/* Entry: 1002c3c94; end: 1002c3ce3;  */

void FUN_1002c3c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c3ce4; end: 1002c3d03;  */

void FUN_1002c3ce4(void)

{
  func_0x000107c61168(&PTR_PTR_112918410);
  return;
}



/* Entry: 1002c3d04; end: 1002c3e77;  */

void FUN_1002c3d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e23148,&UNK_10da07f60);
  puVar1 = &UNK_110476d68;
  func_0x000107c613fc(&UNK_110476d68,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  FUN_1000823a8(&UNK_101d25e6c,puVar1);
  return;
}



/* Entry: 1002c3e78; end: 1002c3f33;  */

void FUN_1002c3e78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c3f34; end: 1002c3f4f;  */

void FUN_1002c3f34(undefined8 param_1)

{
  FUN_1000285a8(0x112e23158,&UNK_10da07f70);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d26354,param_1);
  return;
}



/* Entry: 1002c3f50; end: 1002c3f9f;  */

void FUN_1002c3f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c3fa0; end: 1002c3fbf;  */

void FUN_1002c3fa0(void)

{
  func_0x000107c61168(&PTR_PTR_112918950);
  return;
}



/* Entry: 1002c3fc0; end: 1002c409f;  */

void FUN_1002c3fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e233a0,&UNK_10da08340);
  puVar1 = &UNK_110476ef8;
  func_0x000107c613fc(&UNK_110476ef8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(&UNK_101d26874,puVar1);
  return;
}



/* Entry: 1002c40a0; end: 1002c4113;  */

void FUN_1002c40a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c4114; end: 1002c412f;  */

void FUN_1002c4114(undefined8 param_1)

{
  FUN_1000285a8(0x112e233a8,&UNK_10da08348);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d26a5c,param_1);
  return;
}



/* Entry: 1002c4130; end: 1002c417f;  */

void FUN_1002c4130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c4180; end: 1002c419f;  */

void FUN_1002c4180(void)

{
  func_0x000107c61168(&PTR_PTR_11291a3e0);
  return;
}



/* Entry: 1002c41a0; end: 1002c4237;  */

void FUN_1002c41a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e23b50,&UNK_10da09040);
  puVar1 = &UNK_110477470;
  func_0x000107c613fc(&UNK_110477470,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101d28100,puVar1);
  return;
}



/* Entry: 1002c4238; end: 1002c428b;  */

void FUN_1002c4238(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c428c; end: 1002c42a7;  */

void FUN_1002c428c(undefined8 param_1)

{
  FUN_1000285a8(0x112e23b58,&UNK_10da09048);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d28238,param_1);
  return;
}



/* Entry: 1002c42a8; end: 1002c42f7;  */

void FUN_1002c42a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c42f8; end: 1002c4317;  */

void FUN_1002c42f8(void)

{
  func_0x000107c61168(&PTR_PTR_112804e78);
  return;
}



/* Entry: 1002c4318; end: 1002c43bb;  */

void FUN_1002c4318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fdc240,&UNK_10dc46ad8);
  puVar1 = &UNK_1106c6bf8;
  func_0x000107c613fc(&UNK_1106c6bf8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_100963ce0,puVar1);
  return;
}



/* Entry: 1002c43bc; end: 1002c43db;  */

void FUN_1002c43bc(void)

{
  func_0x000107c61168(&PTR_PTR_11291b4a0);
  return;
}



/* Entry: 1002c43dc; end: 1002c44a3;  */

void FUN_1002c43dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fdc950,&UNK_10dc46f78);
  puVar1 = &UNK_1106c6e68;
  func_0x000107c613fc(&UNK_1106c6e68,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_100964dac,puVar1);
  return;
}



/* Entry: 1002c44a4; end: 1002c44c3;  */

void FUN_1002c44a4(void)

{
  func_0x000107c61168(&PTR_PTR_11291ba80);
  return;
}



/* Entry: 1002c44c4; end: 1002c458b;  */

void FUN_1002c44c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1f608,&UNK_10da01a20);
  puVar1 = &UNK_110473a68;
  func_0x000107c613fc(&UNK_110473a68,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_10071f6ac,puVar1);
  return;
}



/* Entry: 1002c458c; end: 1002c45ab;  */

void FUN_1002c458c(void)

{
  func_0x000107c61168(&PTR_PTR_112e1f688);
  return;
}



/* Entry: 1002c45ac; end: 1002c45c7;  */

void FUN_1002c45ac(undefined8 param_1)

{
  FUN_1000285a8(0x112e1f618,&UNK_10da01a30);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10071f650,param_1);
  return;
}



/* Entry: 1002c45c8; end: 1002c4617;  */

void FUN_1002c45c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c4618; end: 1002c4633;  */

void FUN_1002c4618(undefined8 param_1)

{
  FUN_1000285a8(0x112e3e060,&UNK_10da2afc8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10044cd4c,param_1);
  return;
}



/* Entry: 1002c4634; end: 1002c4683; -[_TtC26SCCaptureDeviceManagerImpl36CaptureDeviceAvailabilityHandlerImpl setFrontDeviceActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002c4634(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0a10);
  func_0x000107c61174();
  func_0x000107c3e208(uVar1);
  FUN_1002c4688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1002c4684; end: 1002c4687; -[SCQueuePerformer assertQueue] */

void FUN_1002c4684(void)

{
  return;
}



/* Entry: 1002c4688; end: 1002c49cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002c4688(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  code *pcVar7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000031;
  FUN_1000a9a18(0xd000000000000031,0x800000010ef82990);
  func_0x000107c61170(uVar2);
  FUN_1002a49d0();
  FUN_10006c804();
  func_0x000107c61574(uVar2);
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x81);
  uStack_a8 = uStack_80;
  uStack_a0 = uStack_78;
  func_0x000107c5fb78(0xd00000000000004a,0x800000010ef829d0);
  lVar5 = _DAT_112da0e90;
  func_0x000107c61428(unaff_x20 + _DAT_112da0e90,&uStack_80,1,0);
  lStack_90 = *(long *)(unaff_x20 + lVar5);
  func_0x000107c603d0(&lStack_90,&uStack_a8,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000016,0x800000010ef82a20);
  plVar1 = (long *)(unaff_x20 + _DAT_112da0ed0);
  lStack_88 = plVar1[1];
  lStack_90 = *plVar1;
  func_0x000107c615f0(*plVar1);
  uVar2 = 0x112da0f10;
  FUN_1000285a8(0x112da0f10,&UNK_10d943f30);
  func_0x000107c5fb18(&lStack_90,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010ef82a40);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    func_0x000107c44020();
    func_0x000107c61180();
  }
  uVar2 = 0x112da0f18;
  lStack_90 = lVar4;
  FUN_1000285a8(0x112da0f18,&UNK_10d943f38);
  func_0x000107c5fb18(&lStack_90,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uStack_a0);
  if (*(int *)(unaff_x20 + lVar5) != 0) {
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    if (*plVar1 == 0) {
      lVar5 = 0;
      lVar4 = 1;
      FUN_1000dbbe8();
      lVar6 = *plVar1;
      *plVar1 = lVar5;
      plVar1[1] = lVar4;
      func_0x000107c615e8(lVar6);
    }
    lVar5 = *(long *)(unaff_x20 + _DAT_112da0ec8);
    if (lVar5 != 0) {
      lVar6 = ((long *)(unaff_x20 + _DAT_112da0ec8))[1];
      lVar4 = lVar5;
      func_0x000107c614f0(lVar5);
      pcVar7 = *(code **)(lVar6 + 0xb8);
      func_0x000107c615f0(lVar5);
      (*pcVar7)(0,lVar4,lVar6);
      func_0x000107c615e8(lVar5);
    }
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      lVar6 = plVar1[1];
      lVar4 = lVar5;
      func_0x000107c614f0(lVar5);
      pcVar7 = *(code **)(lVar6 + 0xb8);
      func_0x000107c615f0(lVar5);
      (*pcVar7)(1,lVar4,lVar6);
      func_0x000107c615e8(lVar5);
      lVar5 = *plVar1;
      if (lVar5 != 0) {
        lVar6 = plVar1[1];
        lVar4 = lVar5;
        func_0x000107c614f0(lVar5);
        pcVar7 = *(code **)(lVar6 + 200);
        func_0x000107c615f0(lVar5);
        (*pcVar7)(lVar4,lVar6);
        func_0x000107c615e8(lVar5);
      }
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112da0eb8);
  func_0x000107c6157c(uVar2);
  FUN_100070bfc();
  func_0x000107c61574(uVar2);
  func_0x000107c61428(param_1,&uStack_a8,0,0);
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1002c49cc; end: 1002c49e7;  */

void FUN_1002c49cc(undefined8 param_1)

{
  FUN_1000285a8(0x112e1a0e8,&UNK_10d9fa228);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ce165c,param_1);
  return;
}



/* Entry: 1002c49e8; end: 1002c4a37;  */

void FUN_1002c49e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c4a38; end: 1002c4a83; -[SCTimeProvider absoluteSeconds] */

undefined8 FUN_1002c4a38(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 1002c4a84; end: 1002c4a9f;  */

void FUN_1002c4a84(undefined8 param_1)

{
  FUN_1000285a8(0x112e20618,&UNK_10da03568);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10077d0cc,param_1);
  return;
}



/* Entry: 1002c4aa0; end: 1002c4aef;  */

void FUN_1002c4aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c4af0; end: 1002c4b0f;  */

void FUN_1002c4af0(void)

{
  func_0x000107c61168(&PTR_PTR_1129457c0);
  return;
}



/* Entry: 1002c4b10; end: 1002c4b2b;  */

void FUN_1002c4b10(undefined8 param_1)

{
  FUN_1000285a8(0x112e3ce60,&UNK_10da290b8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ef84b4,param_1);
  return;
}



/* Entry: 1002c4b2c; end: 1002c4b4b;  */

void FUN_1002c4b2c(void)

{
  func_0x000107c61168(&PTR_PTR_1129a8d10);
  return;
}



/* Entry: 1002c4b4c; end: 1002c4b7f;  */

void FUN_1002c4b4c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1002c4b80; end: 1002c4b9f;  */

void FUN_1002c4b80(void)

{
  func_0x000107c61168(&PTR_PTR_112df8580);
  return;
}



/* Entry: 1002c4ba0; end: 1002c4bff; -[SCNoDepSpectrumImpl streamEvent:] */

void FUN_1002c4ba0(long param_1,undefined8 param_2,long param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x18);
  if (param_3 != 0) {
    func_0x000107c3c93c(param_1,param_2,param_3);
  }
  func_0x000107c611f0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1002c4c00; end: 1002c4d7f; -[SCNoDepSpectrumImpl _streamEvent:] */

/* WARNING: Possible PIC construction at 0x0001002c4cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002c4ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002c4cdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002c4cd0) */
/* WARNING: Removing unreachable block (ram,0x0001002c4cc0) */
/* WARNING: Removing unreachable block (ram,0x0001002c4ce0) */
/* WARNING: Removing unreachable block (ram,0x0001002c4cf4) */
/* WARNING: Removing unreachable block (ram,0x0001002c4d50) */
/* WARNING: Removing unreachable block (ram,0x0001002c4d00) */
/* WARNING: Removing unreachable block (ram,0x0001002c4d0c) */
/* WARNING: Removing unreachable block (ram,0x0001002c4d24) */
/* WARNING: Removing unreachable block (ram,0x0001002c4ce8) */
/* WARNING: Removing unreachable block (ram,0x0001002c4d64) */

void FUN_1002c4c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c44490(param_1);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c42ad4(param_3);
  func_0x000107c4d95c(puVar1);
  func_0x000107c61180();
  func_0x000107c5c1d4();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d0348;
  func_0x000107c3ab18(PTR_PTR_1126d0348);
  func_0x000107c61180();
  func_0x000107c4d9c0();
  func_0x000107c61180();
  FUN_1002ceae4(param_1,puVar1,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1002c4d80; end: 1002c4d87; -[SCNoDepSpectrumImpl graphene] */

undefined8 FUN_1002c4d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1002c4d88; end: 1002c4ddb; +[SCBlizzardConfig BLIZZARD_REGION_SHORTNAME_DICTIONARY] */

void FUN_1002c4d88(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c49f0 != -1) {
    FUN_10002a2fc(0x1136c49f0,&PTR___NSConcreteGlobalBlock_11095ed20);
  }
  uVar1 = uRam00000001136c49e8;
  func_0x000107c61174(uRam00000001136c49e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1002c4ddc; end: 1002c4ec3;  */

void FUN_1002c4ddc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c80b0;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8038;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110db9f18;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e6d258;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8080;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8098;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e6d278;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e6d298;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_38,&ppuStack_58,4);
  func_0x000107c61180();
  uVar1 = puRam00000001136c49e8;
  puRam00000001136c49e8 = puVar2;
  func_0x000107c61170(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61168(&PTR_PTR_112890d78);
  return;
}



/* Entry: 1002c4ec4; end: 1002c4edf;  */

void FUN_1002c4ec4(undefined8 param_1)

{
  FUN_1000285a8(0x112e3f568,&UNK_10da2d208);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006dcc1c,param_1);
  return;
}



/* Entry: 1002c4ee0; end: 1002c4f2f;  */

void FUN_1002c4ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c4f30; end: 1002c4f4f;  */

void FUN_1002c4f30(void)

{
  func_0x000107c61168(&PTR_PTR_1129af5d0);
  return;
}



/* Entry: 1002c4f50; end: 1002c4f6b;  */

void FUN_1002c4f50(undefined8 param_1)

{
  FUN_1000285a8(0x112e3f680,&UNK_10da2d3d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100432bac,param_1);
  return;
}



/* Entry: 1002c4f6c; end: 1002c4fbb;  */

void FUN_1002c4f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c4fbc; end: 1002c4fcb;  */

undefined1  [16] FUN_1002c4fbc(void)

{
  return ZEXT816(0x110468620);
}



/* Entry: 1002c4fcc; end: 1002c504b;  */

void FUN_1002c4fcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dfa498,&UNK_10d9cc530);
  puVar1 = &UNK_110441470;
  func_0x000107c613fc(&UNK_110441470,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ad9b64,puVar1);
  return;
}



/* Entry: 1002c504c; end: 1002c504f;  */

void FUN_1002c504c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c5050; end: 1002c506f;  */

void FUN_1002c5050(void)

{
  func_0x000107c61168(&PTR_PTR_11299dc98);
  return;
}



/* Entry: 1002c5070; end: 1002c5173;  */

void FUN_1002c5070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e20720,&UNK_10da03720);
  puVar1 = &UNK_1104746c0;
  func_0x000107c613fc(&UNK_1104746c0,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(FUN_10071f61c,puVar1);
  return;
}



/* Entry: 1002c5174; end: 1002c5193;  */

void FUN_1002c5174(void)

{
  func_0x000107c61168(&PTR_PTR_112e20798);
  return;
}



/* Entry: 1002c5194; end: 1002c51af;  */

void FUN_1002c5194(undefined8 param_1)

{
  FUN_1000285a8(0x112e20728,&UNK_10da03728);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10071f324,param_1);
  return;
}



/* Entry: 1002c51b0; end: 1002c51ff;  */

void FUN_1002c51b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c5200; end: 1002c521f;  */

void FUN_1002c5200(void)

{
  func_0x000107c61168(&PTR_PTR_112974280);
  return;
}



/* Entry: 1002c5220; end: 1002c52ff;  */

void FUN_1002c5220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fe3b48,&UNK_10dc4bc18);
  puVar1 = &UNK_1106ca0a8;
  func_0x000107c613fc(&UNK_1106ca0a8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_100995768,puVar1);
  return;
}



/* Entry: 1002c5300; end: 1002c531f;  */

void FUN_1002c5300(void)

{
  func_0x000107c61168(&PTR_PTR_112921178);
  return;
}



/* Entry: 1002c5320; end: 1002c54bb;  */

void FUN_1002c5320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fce4f0,&UNK_10dc3de78);
  puVar1 = &UNK_1106c1360;
  func_0x000107c613fc(&UNK_1106c1360,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  FUN_1000823a8(FUN_1009558f4,puVar1);
  return;
}



/* Entry: 1002c54bc; end: 1002c54db;  */

void FUN_1002c54bc(void)

{
  func_0x000107c61168(&PTR_PTR_1129156d8);
  return;
}



/* Entry: 1002c54dc; end: 1002c561f;  */

void FUN_1002c54dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e211b0,&UNK_10da04650);
  puVar1 = &UNK_110475618;
  func_0x000107c613fc(&UNK_110475618,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  FUN_1000823a8(&UNK_101d1f278,puVar1);
  return;
}



/* Entry: 1002c5620; end: 1002c56c3;  */

void FUN_1002c5620(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c56c4; end: 1002c56df;  */

void FUN_1002c56c4(undefined8 param_1)

{
  FUN_1000285a8(0x112e211b8,&UNK_10da04658);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d1f674,param_1);
  return;
}



/* Entry: 1002c56e0; end: 1002c572f;  */

void FUN_1002c56e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c5730; end: 1002c574f;  */

void FUN_1002c5730(void)

{
  func_0x000107c61168(&PTR_PTR_112918650);
  return;
}



/* Entry: 1002c5750; end: 1002c576b;  */

void FUN_1002c5750(undefined8 param_1)

{
  FUN_1000285a8(0x112e214d8,&UNK_10da04b78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d1fdc0,param_1);
  return;
}



/* Entry: 1002c576c; end: 1002c57bb;  */

void FUN_1002c576c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c57bc; end: 1002c57db;  */

void FUN_1002c57bc(void)

{
  func_0x000107c61168(&PTR_PTR_112918350);
  return;
}



/* Entry: 1002c57dc; end: 1002c58ef;  */

void FUN_1002c57dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e215d0,&UNK_10da04d60);
  puVar1 = &UNK_110475910;
  func_0x000107c613fc(&UNK_110475910,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(&UNK_101d20050,puVar1);
  return;
}



/* Entry: 1002c58f0; end: 1002c597b;  */

void FUN_1002c58f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c597c; end: 1002c5997;  */

void FUN_1002c597c(undefined8 param_1)

{
  FUN_1000285a8(0x112e215d8,&UNK_10da04d68);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d202b0,param_1);
  return;
}



/* Entry: 1002c5998; end: 1002c59e7;  */

void FUN_1002c5998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c59e8; end: 1002c5a07;  */

void FUN_1002c59e8(void)

{
  func_0x000107c61168(&PTR_PTR_112918710);
  return;
}



/* Entry: 1002c5a08; end: 1002c5b93;  */

void FUN_1002c5a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e21838,&UNK_10da051e0);
  puVar1 = &UNK_110475aa0;
  func_0x000107c613fc(&UNK_110475aa0,0x98,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  FUN_1000823a8(&UNK_101d20f04,puVar1);
  return;
}



/* Entry: 1002c5b94; end: 1002c5c57;  */

void FUN_1002c5b94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


