/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102158c8c; end: 102158ce7; -[_TtC25SCLensVideoEditingFeature26VideoTrimmerViewController viewDidLayoutSubviews] */

void FUN_102158c8c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLayoutSubviews_112684cc8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_102158a9c();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102158ce8; end: 102158f07;  */

void FUN_102158ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_98 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar9 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_1021598a4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar4 = &UNK_1104d3130;
  func_0x000107c613fc(&UNK_1104d3130,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_3);
  puVar5 = &UNK_1104d3158;
  func_0x000107c613fc(&UNK_1104d3158,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  uStack_70 = 0x102159818;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104d3170;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar4 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c5f808(lVar10);
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = uVar7;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar9,&puStack_90,uVar7,uVar8,lVar1,puVar4);
  func_0x000107c5ffe8(0,lVar10,puVar9,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar3);
  (**(code **)(lStack_98 + 8))(puVar9,lVar1);
  (**(code **)(lVar11 + 8))(lVar10,lVar2);
  return;
}



/* Entry: 102158f08; end: 1021590df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102158f08(long param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112e5c2c8;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112e5c2c8,auStack_70,0x21,0);
    uVar5 = *(ulong *)(param_1 + lVar2);
    uVar7 = uVar5;
    func_0x000107c61558();
    *(ulong *)(param_1 + lVar2) = uVar5;
    if ((uVar7 & 1) == 0) {
      FUN_1021594f8();
      *(ulong *)(param_1 + lVar2) = uVar5;
    }
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021590dc);
      (*pcVar1)();
    }
    if (*(ulong *)(uVar5 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021590e0);
      (*pcVar1)();
    }
    lVar4 = uVar5 + param_2 * 8;
    lVar6 = *(long *)(lVar4 + 0x20);
    *(undefined8 *)(lVar4 + 0x20) = param_3;
    *(ulong *)(param_1 + lVar2) = uVar5;
    func_0x000107c61174(param_3);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61170();
    FUN_102157e00();
    lVar2 = lVar6;
    func_0x000107c4d91c();
    func_0x000107c61170(lVar6);
    lVar4 = *(long *)(param_1 + _DAT_112e5c2d8);
    if ((long)param_2 < lVar2) {
      lVar2 = 0x112d57310;
      func_0x0001000285a8(0x112d57310,&UNK_10d91df70);
      lVar3 = 0;
      func_0x000107c5eff8();
      uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
      uVar7 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
      func_0x000107c613fc(lVar2,uVar7 + *(long *)(*(long *)(lVar3 + -8) + 0x48),uVar5 | 7);
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      func_0x000107c61174(lVar4);
      func_0x000107c5efe8(lVar2 + uVar7,param_2,0);
      lVar6 = lVar2;
      func_0x000107c5fc48(lVar2,lVar3);
      func_0x000107c61574(lVar2);
      func_0x000107c4fd90(lVar4);
      func_0x000107c61170(lVar4);
      lVar4 = lVar6;
    }
    else {
      func_0x000107c61174(lVar4);
      func_0x000107c4fd7c();
    }
    func_0x000107c61170(lVar4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1021590e0; end: 10215913f; -[_TtC25SCLensVideoEditingFeature26VideoTrimmerViewController initWithNibName:bundle:] */

void FUN_1021590e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensVideoEditingFeature.VideoTrimmerViewController",0x34,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10215910c);
  (*pcVar1)();
}



/* Entry: 102159140; end: 1021591d7; -[_TtC25SCLensVideoEditingFeature26VideoTrimmerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021591ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021591b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102159140(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5c2b0));
  func_0x0001000834e4(param_1 + _DAT_112e5c2b8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5c2c0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e5c2c8));
  func_0x0001000834e4(param_1 + _DAT_112e5c2d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5c2d8));
  return;
}



/* Entry: 1021591d8; end: 1021591f7;  */

void FUN_1021591d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128212d0);
  return;
}



/* Entry: 1021591f8; end: 10215926b; -[_TtC25SCLensVideoEditingFeature26VideoTrimmerViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021591f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = param_1 + _DAT_112e5c2d0;
  func_0x000107c61428(lVar1,auStack_38,0,0);
  func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  FUN_102159bc0();
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 10215926c; end: 102159397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10215926c(undefined *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0661a0);
  uVar4 = uVar3;
  func_0x000107c5efd4();
  func_0x000107c417e0();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = 0;
  FUN_102157de0(0);
  puVar5 = param_1;
  func_0x000107c61480(param_1,uVar4);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
    func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    func_0x000107c453e4();
    func_0x000107c61170(param_1);
  }
  else {
    puVar6 = puVar5;
    func_0x000107c5efec();
    lVar1 = _DAT_112e5c2c8;
    func_0x000107c61428(unaff_x20 + _DAT_112e5c2c8,auStack_58,0,0);
    if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102159394);
      (*pcVar2)();
    }
    if (*(undefined **)(*(long *)(unaff_x20 + lVar1) + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102159398);
      (*pcVar2)();
    }
    func_0x000107c55258(*(undefined8 *)(puVar5 + _DAT_112e5c280));
  }
  return puVar5;
}



/* Entry: 102159398; end: 10215945f; -[_TtC25SCLensVideoEditingFeature26VideoTrimmerViewController collectionView:cellForItemAtIndexPath:] */

void FUN_102159398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_10215926c(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102159460; end: 102159477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102159460(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_28 = 1;
  uStack_30 = param_1;
  func_0x0001002a64a8(&uStack_30);
  return;
}



/* Entry: 102159478; end: 1021594f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102159478(undefined8 param_1)

{
  undefined1 in_w3;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = in_w3;
  func_0x0001002a64a8(&uStack_30);
  return;
}



/* Entry: 1021594f8; end: 10215950b;  */

/* WARNING: Removing unreachable block (ram,0x00010215952c) */
/* WARNING: Removing unreachable block (ram,0x00010215953c) */
/* WARNING: Removing unreachable block (ram,0x000102159638) */
/* WARNING: Removing unreachable block (ram,0x000102159548) */
/* WARNING: Removing unreachable block (ram,0x000102159550) */
/* WARNING: Removing unreachable block (ram,0x0001021595c8) */
/* WARNING: Removing unreachable block (ram,0x0001021595d0) */
/* WARNING: Removing unreachable block (ram,0x0001021595d4) */
/* WARNING: Removing unreachable block (ram,0x0001021595d8) */
/* WARNING: Removing unreachable block (ram,0x0001021595e8) */

undefined * FUN_1021594f8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112e5c318;
    func_0x0001000285a8(0x112e5c318,&UNK_10da62690);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 3) << 1;
  }
  uVar5 = 0x112d36838;
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 10215950c; end: 10215963b;  */

undefined * FUN_10215950c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10215963c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e5c318;
    func_0x0001000285a8(0x112e5c318,&UNK_10da62690);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d36838;
    func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10215963c; end: 1021597cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215963c(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112e5c2b0;
  uVar3 = 0x112e5c328;
  func_0x0001000285a8(0x112e5c328,&UNK_10da626a0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112e5c2c0;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined **)(unaff_x20 + _DAT_112e5c2c8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c2d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c2e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c2e8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLensVideoEditingFeature/VideoTrimmerViewController.swift",0x3a,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102159734);
  (*pcVar2)();
}



/* Entry: 1021597cc; end: 10215980f;  */

long FUN_1021597cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102159810; end: 102159847;  */

void FUN_102159810(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_98 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar9 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_1021598a4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar4 = &UNK_1104d3130;
  func_0x000107c613fc(&UNK_1104d3130,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,uVar8);
  puVar5 = &UNK_1104d3158;
  func_0x000107c613fc(&UNK_1104d3158,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  uStack_70 = 0x102159818;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104d3170;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar4 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c5f808(lVar10);
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar8;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar9,&puStack_90,uVar8,uVar7,lVar1,puVar4);
  func_0x000107c5ffe8(0,lVar10,puVar9,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar3);
  (**(code **)(lStack_98 + 8))(puVar9,lVar1);
  (**(code **)(lVar11 + 8))(lVar10,lVar2);
  return;
}



/* Entry: 102159848; end: 102159887;  */

void FUN_102159848(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5c320 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s12CoreGraphics7CGFloatVSQAAMc_1103513c0;
  func_0x000107c61520(PTR___s12CoreGraphics7CGFloatVSQAAMc_1103513c0,
                      PTR___s12CoreGraphics7CGFloatVN_1103513a8);
  puRam0000000112e5c320 = puVar1;
  return;
}



/* Entry: 102159888; end: 1021598a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102159888(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000102158008();
    func_0x000107c61170(lVar1);
    *(undefined8 *)(lVar2 + _DAT_112e5c0f0) = uVar3;
    FUN_1021556d4();
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1021598a4; end: 1021598e3;  */

void FUN_1021598a4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1021598e4; end: 1021598eb;  */

void FUN_1021598e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1021598ec; end: 102159a37;  */

undefined8 FUN_1021598ec(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x20;
  undefined1 auStack_60 [48];
  
  func_0x000107c5ce80();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000102159a9c(0);
  uVar3 = unaff_x20;
  func_0x000107c5fc54(unaff_x20,uVar2);
  func_0x000107c61170(unaff_x20);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar3);
    param_1 = 0;
  }
  else {
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102159a38);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      func_0x000100f95fe8(0,uVar3);
    }
    func_0x000107c6142c(uVar3);
    func_0x000107c61174(uVar2);
    func_0x000107c4d49c();
    func_0x000107c4ecc4(auStack_60,uVar2);
    func_0x000107c609f8(param_1,param_2,auStack_60);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar2);
  }
  return param_1;
}



/* Entry: 102159a38; end: 102159a57;  */

void FUN_102159a38(void)

{
  FUN_1021598ec();
  return;
}



/* Entry: 102159a58; end: 102159adf;  */

void FUN_102159a58(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c42378(auStack_28,*unaff_x20);
  func_0x000107c60a3c(auStack_28);
  return;
}



/* Entry: 102159ae0; end: 102159ae7;  */

void FUN_102159ae0(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1c3cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*unaff_x20,PTR_s_setMaximumSize__11264e958);
  return;
}



/* Entry: 102159ae8; end: 102159ba3;  */

void FUN_102159ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *unaff_x20;
  uVar1 = 0;
  func_0x000100f8b460(0);
  func_0x000107c5fc48(param_1,uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100f728b4;
  puStack_48 = &UNK_1104d3270;
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c(param_3);
  func_0x000107c43d9c(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uStack_38);
  return;
}



/* Entry: 102159ba4; end: 102159bbf;  */

void FUN_102159ba4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102159bc0; end: 102159c4b;  */

long FUN_102159bc0(double param_1)

{
  code *pcVar1;
  long unaff_x20;
  double dVar2;
  
  FUN_102159c4c();
  if (param_1 * *(double *)(unaff_x20 + 0x68) <= 0.0) {
    return 0;
  }
  dVar2 = (double)(long)(*(double *)(unaff_x20 + 0x60) /
                        (*(double *)(unaff_x20 + 0x68) * *(double *)(unaff_x20 + 0x70)));
  if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102159c44);
    (*pcVar1)();
  }
  if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102159c48);
    (*pcVar1)();
  }
  if (dVar2 < 9.223372036854776e+18) {
    return (long)dVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102159c4c);
  (*pcVar1)();
}



/* Entry: 102159c4c; end: 102159cd7;  */

double FUN_102159c4c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  long unaff_x20;
  double dVar3;
  
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    dVar1 = *(double *)(unaff_x20 + 0x28);
    dVar2 = *(double *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,dVar1);
    (**(code **)((long)dVar2 + 8))();
    dVar3 = 0.0;
    if (((param_3 & 0xff) != 1) && (dVar2 != 0.0)) {
      dVar3 = ABS(dVar1 / dVar2);
    }
    *(double *)(unaff_x20 + 0x70) = dVar3;
    *(undefined1 *)(unaff_x20 + 0x78) = 0;
  }
  else {
    dVar3 = *(double *)(unaff_x20 + 0x70);
  }
  return dVar3;
}



/* Entry: 102159cd8; end: 102159f8b;  */

void FUN_102159cd8(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  double dVar14;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *apuStack_88 [3];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar2);
  (**(code **)(lVar10 + 0x10))(uVar2,lVar10);
  FUN_102159bc0();
  dVar14 = (double)(long)uVar2;
  if (param_1 / dVar14 <= 0.0) {
    return;
  }
  FUN_102159bc0();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x102159f8c);
    (*pcVar8)();
  }
  if (uVar2 == 0) {
    lVar10 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar10 == 0) goto LAB_102159ecc;
  }
  else {
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar7 = 0;
    uVar6 = uVar2;
    func_0x000101a02cf8(0);
    uVar11 = 0;
    do {
      puVar12 = puStack_b0;
      uVar3 = 600;
      func_0x000107c600d0((param_1 / dVar14) * (double)uVar11);
      uVar1 = *(ulong *)(puVar12 + 0x10);
      lVar10 = uVar1 + 1;
      puStack_b0 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
        func_0x000101a02cf8(1 < *(ulong *)(puVar12 + 0x18),lVar10,1);
      }
      *(long *)(puStack_b0 + 0x10) = lVar10;
      *(undefined8 *)(puStack_b0 + uVar1 * 0x18 + 0x20) = uVar3;
      uVar11 = uVar11 + 1;
      *(int *)(puStack_b0 + uVar1 * 0x18 + 0x28) = (int)uVar6;
      *(int *)(puStack_b0 + uVar1 * 0x18 + 0x2c) = (int)(uVar6 >> 0x20);
      *(undefined8 *)(puStack_b0 + uVar1 * 0x18 + 0x30) = uVar7;
      puVar12 = puStack_b0;
    } while (uVar2 != uVar11);
  }
  apuStack_88[0] = puVar9;
  func_0x000100f72b90(0,lVar10,0);
  puVar9 = apuStack_88[0];
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  puVar13 = (undefined8 *)(puVar12 + 0x30);
  do {
    puStack_b0 = (undefined *)puVar13[-2];
    uStack_a0 = *puVar13;
    uStack_a8 = puVar13[-1];
    puVar5 = puVar4;
    func_0x000107c5dc5c();
    func_0x000107c61180();
    uVar2 = *(ulong *)(puVar9 + 0x10);
    apuStack_88[0] = puVar9;
    if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
      func_0x000100f72b90(1 < *(ulong *)(puVar9 + 0x18),uVar2 + 1,1);
    }
    puVar13 = puVar13 + 3;
    *(ulong *)(apuStack_88[0] + 0x10) = uVar2 + 1;
    *(undefined **)(apuStack_88[0] + uVar2 * 8 + 0x20) = puVar5;
    lVar10 = lVar10 + -1;
    puVar9 = apuStack_88[0];
  } while (lVar10 != 0);
LAB_102159ecc:
  func_0x000107c61428(unaff_x20 + 0x38,apuStack_88,0,0);
  FUN_10215a154(unaff_x20 + 0x38,&puStack_b0);
  func_0x0001000a8868(&puStack_b0,uStack_98);
  puVar4 = &UNK_1104d32f8;
  func_0x000107c613fc(&UNK_1104d32f8,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar12;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  pcVar8 = *(code **)(lStack_90 + 0x20);
  func_0x000107c6157c(param_3);
  (*pcVar8)(puVar9,FUN_10215a198,puVar4,uStack_98,lStack_90);
  func_0x000107c6142c(puVar9);
  func_0x000107c61574(puVar4);
  func_0x0001000834e4(&puStack_b0);
  return;
}



/* Entry: 102159f8c; end: 10215a07b;  */

/* WARNING: Possible PIC construction at 0x00010215a03c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010215a040) */

void FUN_102159f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_stack_00000008;
  code *in_stack_00000010;
  
  lVar4 = *(long *)(in_stack_00000008 + 0x10);
  if (lVar4 != 0) {
    lVar3 = 0;
    puVar5 = (undefined8 *)(in_stack_00000008 + 0x30);
    do {
      uVar1 = puVar5[-2];
      func_0x000107c600bc(uVar1,puVar5[-1],*puVar5,param_1,param_2,param_3);
      if ((uVar1 & 1) != 0) {
        if (param_4 == 0) {
          return;
        }
        puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c61174(param_4);
        func_0x000107c45af0(puVar2);
        (*in_stack_00000010)(lVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_4);
        return;
      }
      lVar3 = lVar3 + 1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != lVar3);
  }
  return;
}



/* Entry: 10215a07c; end: 10215a0c7;  */

void FUN_10215a07c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10215a0c8; end: 10215a153;  */

void FUN_10215a0c8(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  double dVar4;
  undefined1 auStack_58 [24];
  
  lVar3 = *unaff_x20;
  *(double *)(lVar3 + 0x60) = param_1;
  *(undefined8 *)(lVar3 + 0x68) = param_2;
  FUN_102159c4c();
  dVar4 = *(double *)(lVar3 + 0x68);
  func_0x000107c61428(lVar3 + 0x38,auStack_58,0x21,0);
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  lVar2 = *(long *)(lVar3 + 0x58);
  func_0x0001000c6518(lVar3 + 0x38,uVar1);
  (**(code **)(lVar2 + 0x10))(param_1 * dVar4,dVar4,uVar1,lVar2);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10215a154; end: 10215a197;  */

long FUN_10215a154(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10215a198; end: 10215a1cb;  */

void FUN_10215a198(void)

{
  FUN_102159f8c();
  return;
}



/* Entry: 10215a1cc; end: 10215a26f;  */

undefined8 FUN_10215a1cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10215a354(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 10215a270; end: 10215a2c7;  */

void FUN_10215a270(void)

{
  FUN_10215c5b8();
  return;
}



/* Entry: 10215a2c8; end: 10215a2f3;  */

void FUN_10215a2c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10215a2f4; end: 10215a353;  */

void FUN_10215a2f4(void)

{
  FUN_10215c5b8();
  return;
}



/* Entry: 10215a354; end: 10215a473;  */

void FUN_10215a354(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  *(long *)(unaff_x20 + 0x18) = param_1;
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c5d17c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5dd98();
    func_0x000107c61180();
    uVar4 = param_2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c506d0();
    func_0x000107c61180();
    puVar5 = &UNK_1104d3340;
    func_0x000107c613fc(&UNK_1104d3340,0x18,7);
    *(long *)(puVar5 + 0x10) = param_1;
    lVar6 = 0;
    func_0x00010215cc28();
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x30) = 0;
    uVar7 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(long *)(lVar6 + 0x10) = lVar3;
    *(long *)(lVar6 + 0x18) = lVar2;
    *(undefined8 *)(lVar6 + 0x38) = uVar4;
    *(undefined8 *)(lVar6 + 0x40) = uVar7;
    *(code **)(lVar6 + 0x20) = FUN_10215a494;
    *(undefined **)(lVar6 + 0x28) = puVar5;
    *(long *)(unaff_x20 + 0x10) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10215a474);
  (*pcVar1)();
}



/* Entry: 10215a474; end: 10215a493;  */

void FUN_10215a474(void)

{
  func_0x000107c61168(&PTR_PTR_112e5c428);
  return;
}



/* Entry: 10215a494; end: 10215a4a3;  */

void FUN_10215a494(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010215a4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10215a4a4; end: 10215a5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10215a4a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e5c4b8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e5c4b8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c4509c(0x4038000000000000,0x4038000000000000,0x4014000000000000,0x4014000000000000,
                        0x4014000000000000,0x4014000000000000,puVar2,param_2,0x2f3,puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___CIImage_1126b3128;
      func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
      func_0x000107c4253c();
      func_0x000107c61180();
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c45b00();
      func_0x000107c61170(puVar3);
    }
    puVar3 = puVar2;
    FUN_10215b9d0();
    func_0x000107c3d8b8();
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10215a5e0; end: 10215a943;  */

/* WARNING: Removing unreachable block (ram,0x00010215a6c4) */

undefined * FUN_10215a5e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0662e0);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar3 = puVar2;
  FUN_10215b9d0(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c59a2c(puVar3);
  func_0x000107c3d8b8(puVar3);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e21fb8;
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  func_0x000107c520f4();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(ppuVar4);
  return puVar3;
}



/* Entry: 10215a944; end: 10215a96b; -[_TtC25SCLensVideoEditingFeature36LensVideoEditingScreenViewController initWithCoder:] */

void FUN_10215a944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10215bb6c();
  return;
}



/* Entry: 10215a96c; end: 10215ad2b;  */

/* WARNING: Removing unreachable block (ram,0x00010215ad28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215a96c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  code *pcVar7;
  undefined *puVar8;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_loadView_112604be0);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215ad04);
    (*pcVar1)();
  }
  plVar6 = (long *)(unaff_x20 + _DAT_112e5c4b0);
  func_0x0001000a8868(plVar6,plVar6[3]);
  lVar3 = *plVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215ad08);
    (*pcVar1)();
  }
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215ad0c);
    (*pcVar1)();
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112e5c4a8);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215ad10);
    (*pcVar1)();
  }
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215ad14);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  FUN_10215a4a4();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215ad18);
    (*pcVar1)();
  }
  puVar4 = &DAT_112e5c4c0;
  func_0x00010215a808(&DAT_112e5c4c0,0x10215a5e0);
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar4);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215ad1c);
    (*pcVar1)();
  }
  puVar4 = &DAT_112e5c4d0;
  func_0x00010215a808(&DAT_112e5c4d0,0x10215a868);
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar4);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215ad20);
    (*pcVar1)();
  }
  puVar4 = &DAT_112e5c4c8;
  func_0x00010215a808(&DAT_112e5c4c8,0x10215a6c8);
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar4);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215ad24);
    (*pcVar1)();
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar4);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215ad28);
    (*pcVar1)();
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e21f58;
  func_0x000107c61174();
  func_0x000107c520f4(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(ppuVar5);
  FUN_10215ad2c();
  func_0x0001000a8868(unaff_x20 + _DAT_112e5c498,*(undefined8 *)(unaff_x20 + _DAT_112e5c498 + 0x18))
  ;
  plVar6 = (long *)0x0;
  FUN_10215e8fc();
  FUN_10215ef60();
  puVar4 = &UNK_1104d3380;
  func_0x000107c613fc(&UNK_1104d3380,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcVar1 = FUN_10215b950;
  puVar8 = puVar4;
  (**(code **)(*plVar6 + 0x60))(FUN_10215b950);
  func_0x000107c61574(plVar6);
  func_0x000107c61574(puVar4);
  pcVar7 = pcVar1;
  func_0x000107c614f0(pcVar1);
  (**(code **)(puVar8 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112e5c4a0),pcVar7,puVar8);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10215ad2c; end: 10215b683;  */

/* WARNING: Possible PIC construction at 0x00010215adac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215ae44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215ae64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215aeb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215aed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215af24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215af44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215af94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215afb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215afdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215aff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b2e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b3d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b55c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b5c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010215b5e8) */
/* WARNING: Removing unreachable block (ram,0x00010215b5c4) */
/* WARNING: Removing unreachable block (ram,0x00010215b560) */
/* WARNING: Removing unreachable block (ram,0x00010215b680) */
/* WARNING: Removing unreachable block (ram,0x00010215b598) */
/* WARNING: Removing unreachable block (ram,0x00010215b528) */
/* WARNING: Removing unreachable block (ram,0x00010215b4e4) */
/* WARNING: Removing unreachable block (ram,0x00010215b4c0) */
/* WARNING: Removing unreachable block (ram,0x00010215b468) */
/* WARNING: Removing unreachable block (ram,0x00010215b67c) */
/* WARNING: Removing unreachable block (ram,0x00010215b4a4) */
/* WARNING: Removing unreachable block (ram,0x00010215b444) */
/* WARNING: Removing unreachable block (ram,0x00010215b414) */
/* WARNING: Removing unreachable block (ram,0x00010215b678) */
/* WARNING: Removing unreachable block (ram,0x00010215b428) */
/* WARNING: Removing unreachable block (ram,0x00010215b3d4) */
/* WARNING: Removing unreachable block (ram,0x00010215b3b0) */
/* WARNING: Removing unreachable block (ram,0x00010215b360) */
/* WARNING: Removing unreachable block (ram,0x00010215b674) */
/* WARNING: Removing unreachable block (ram,0x00010215b394) */
/* WARNING: Removing unreachable block (ram,0x00010215b340) */
/* WARNING: Removing unreachable block (ram,0x00010215b324) */
/* WARNING: Removing unreachable block (ram,0x00010215b2e4) */
/* WARNING: Removing unreachable block (ram,0x00010215b2c0) */
/* WARNING: Removing unreachable block (ram,0x00010215b2a4) */
/* WARNING: Removing unreachable block (ram,0x00010215b288) */
/* WARNING: Removing unreachable block (ram,0x00010215b244) */
/* WARNING: Removing unreachable block (ram,0x00010215b220) */
/* WARNING: Removing unreachable block (ram,0x00010215b204) */
/* WARNING: Removing unreachable block (ram,0x00010215b1c8) */
/* WARNING: Removing unreachable block (ram,0x00010215b1a8) */
/* WARNING: Removing unreachable block (ram,0x00010215b18c) */
/* WARNING: Removing unreachable block (ram,0x00010215b148) */
/* WARNING: Removing unreachable block (ram,0x00010215b124) */
/* WARNING: Removing unreachable block (ram,0x00010215b0f4) */
/* WARNING: Removing unreachable block (ram,0x00010215b670) */
/* WARNING: Removing unreachable block (ram,0x00010215b108) */
/* WARNING: Removing unreachable block (ram,0x00010215b0c4) */
/* WARNING: Removing unreachable block (ram,0x00010215b08c) */
/* WARNING: Removing unreachable block (ram,0x00010215b05c) */
/* WARNING: Removing unreachable block (ram,0x00010215b66c) */
/* WARNING: Removing unreachable block (ram,0x00010215b070) */
/* WARNING: Removing unreachable block (ram,0x00010215b040) */
/* WARNING: Removing unreachable block (ram,0x00010215b020) */
/* WARNING: Removing unreachable block (ram,0x00010215affc) */
/* WARNING: Removing unreachable block (ram,0x00010215afe0) */
/* WARNING: Removing unreachable block (ram,0x00010215afb8) */
/* WARNING: Removing unreachable block (ram,0x00010215af98) */
/* WARNING: Removing unreachable block (ram,0x00010215af48) */
/* WARNING: Removing unreachable block (ram,0x00010215b668) */
/* WARNING: Removing unreachable block (ram,0x00010215af7c) */
/* WARNING: Removing unreachable block (ram,0x00010215af28) */
/* WARNING: Removing unreachable block (ram,0x00010215aed8) */
/* WARNING: Removing unreachable block (ram,0x00010215b664) */
/* WARNING: Removing unreachable block (ram,0x00010215af0c) */
/* WARNING: Removing unreachable block (ram,0x00010215aeb8) */
/* WARNING: Removing unreachable block (ram,0x00010215ae68) */
/* WARNING: Removing unreachable block (ram,0x00010215b660) */
/* WARNING: Removing unreachable block (ram,0x00010215ae9c) */
/* WARNING: Removing unreachable block (ram,0x00010215ae48) */
/* WARNING: Removing unreachable block (ram,0x00010215adb0) */
/* WARNING: Removing unreachable block (ram,0x00010215b65c) */
/* WARNING: Removing unreachable block (ram,0x00010215ae2c) */
/* WARNING: Removing unreachable block (ram,0x00010215b634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215ad2c(void)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  plVar2 = (long *)(unaff_x20 + _DAT_112e5c4b0);
  func_0x0001000a8868(plVar2,plVar2[3]);
  lVar3 = *plVar2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215b658);
    (*pcVar1)();
  }
  func_0x000107c5a050();
  lVar3 = *(long *)(unaff_x20 + _DAT_112e5c4a8);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10215b65c);
  (*pcVar1)();
}



/* Entry: 10215b684; end: 10215b6ab; -[_TtC25SCLensVideoEditingFeature36LensVideoEditingScreenViewController loadView] */

void FUN_10215b684(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10215a96c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10215b6ac; end: 10215b7b7; -[_TtC25SCLensVideoEditingFeature36LensVideoEditingScreenViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215b6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  uStack_50 = 0;
  uStack_48 = 3;
  func_0x0001002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10215b7b8; end: 10215b7bf; -[_TtC25SCLensVideoEditingFeature36LensVideoEditingScreenViewController cancelTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215b7b8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 6;
  uStack_28 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10215b7c0; end: 10215b7c7; -[_TtC25SCLensVideoEditingFeature36LensVideoEditingScreenViewController submitTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215b7c0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 5;
  uStack_28 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10215b7c8; end: 10215b7cf; -[_TtC25SCLensVideoEditingFeature36LensVideoEditingScreenViewController muteTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215b7c8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 3;
  uStack_28 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10215b7d0; end: 10215b7d7; -[_TtC25SCLensVideoEditingFeature36LensVideoEditingScreenViewController rotateTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215b7d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 4;
  uStack_28 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10215b7d8; end: 10215b827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215b7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_28 = 3;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10215b828; end: 10215b887; -[_TtC25SCLensVideoEditingFeature36LensVideoEditingScreenViewController initWithNibName:bundle:] */

void FUN_10215b828(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensVideoEditingFeature.LensVideoEditingScreenViewController",0x3e,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10215b854);
  (*pcVar1)();
}



/* Entry: 10215b888; end: 10215b92f; -[_TtC25SCLensVideoEditingFeature36LensVideoEditingScreenViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010215b8d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010215b914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010215b8f8) */
/* WARNING: Removing unreachable block (ram,0x00010215b8d8) */
/* WARNING: Removing unreachable block (ram,0x00010215b918) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215b888(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5c490));
  func_0x0001000834e4(param_1 + _DAT_112e5c498);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5c4a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5c4a8));
  return;
}



/* Entry: 10215b930; end: 10215b94f;  */

void FUN_10215b930(void)

{
  func_0x000107c61168(&PTR_PTR_1128213c8);
  return;
}



/* Entry: 10215b950; end: 10215b957;  */

void FUN_10215b950(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &DAT_112e5c4c8;
    func_0x00010215a808(&DAT_112e5c4c8,0x10215a6c8);
    func_0x000107c61170(lVar1);
    func_0x000107c58dd8(puVar2);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 10215b958; end: 10215b9cf;  */

void FUN_10215b958(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10215bc5c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10215b9d0; end: 10215bb6b;  */

undefined * FUN_10215b9d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  if (param_1 != 0) {
    func_0x000107c55260(puVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar3 = 0x112d360b8;
  FUN_10215b958(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  puVar4 = puVar1;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40290(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(lVar3 + 0x20) = puVar5;
  puVar4 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar5 = puVar4;
  func_0x000107c40290(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(lVar3 + 0x28) = puVar5;
  uVar6 = 0;
  FUN_10215bc5c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar7 = lVar3;
  func_0x000107c5fc48(lVar3,uVar6);
  func_0x000107c61574(lVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(lVar7);
  return puVar1;
}



/* Entry: 10215bb6c; end: 10215bc5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215bb6c(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112e5c490;
  uVar3 = 0x112e5c328;
  func_0x0001000285a8(0x112e5c328,&UNK_10da626a0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112e5c4a0;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c4b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c4c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c4c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c4d0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLensVideoEditingFeature/LensVideoEditingScreenViewController.swift",0x44,2,
                      0x48,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10215bc5c);
  (*pcVar2)();
}



/* Entry: 10215bc5c; end: 10215bc9b;  */

void FUN_10215bc5c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10215bc9c; end: 10215bccf; -[_TtC25SCLensVideoEditingFeature25VideoPlayerViewController initWithCoder:] */

undefined8 FUN_10215bc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10215c4a0();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 10215bcd0; end: 10215be63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215bcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215be50);
    (*pcVar1)();
  }
  func_0x000107c5a050();
  func_0x000107c61170(lVar2);
  puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168();
  func_0x000107c4e998();
  func_0x000107c61180();
  lVar2 = _DAT_112e5c528;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e5c528);
  *(undefined **)(unaff_x20 + _DAT_112e5c528) = puVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar6);
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215be54);
    (*pcVar1)();
  }
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215be58);
    (*pcVar1)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar4);
  func_0x000107c54b80(param_1,param_2,param_3,param_4,puVar3);
  func_0x000107c61170(puVar3);
  if (*(long *)(unaff_x20 + lVar2) != 0) {
    func_0x000107c5a51c();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10215be60);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (*(long *)(unaff_x20 + lVar2) != 0) {
      func_0x000107c3d894(lVar5);
      func_0x000107c61170(lVar5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215be64);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10215be5c);
  (*pcVar1)();
}



/* Entry: 10215be64; end: 10215be8b; -[_TtC25SCLensVideoEditingFeature25VideoPlayerViewController viewDidLoad] */

void FUN_10215be64(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10215bcd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10215be8c; end: 10215beef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10215be8c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e5c530;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5c530);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10215bef0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 10215bef0; end: 10215c0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10215bef0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_a8 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0x112e5c570;
  func_0x0001000285a8(0x112e5c570,&UNK_10dab5c40);
  uVar7 = (ulong)*(uint *)(lVar2 + 0x30);
  uVar8 = (ulong)*(ushort *)(lVar2 + 0x34);
  func_0x000107c613fc();
  func_0x0001000c2754();
  uStack_b0 = *(undefined8 *)(param_1 + _DAT_112e5c508);
  puVar3 = (undefined *)0x258;
  func_0x000107c600d0(0x3f91111111111111);
  func_0x0001000295c4(0);
  (**(code **)(lVar10 + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
  puVar4 = puVar9;
  func_0x000107c5fff0(puVar9);
  (**(code **)(lVar10 + 8))(puVar9,lVar1);
  uStack_70 = 0x10215c560;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f72a5c;
  puStack_78 = &UNK_1104d3418;
  ppuVar5 = &puStack_90;
  lStack_68 = lVar2;
  func_0x000107c60bc4(ppuVar5);
  lVar1 = lStack_68;
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(lVar1);
  uVar6 = uStack_b0;
  puStack_90 = puVar3;
  uStack_88 = uVar7;
  puStack_80 = (undefined *)uVar8;
  func_0x000107c3d7ec(uStack_b0);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c60234(&puStack_90,uVar6);
  func_0x000107c615e8(uVar6);
  lVar1 = _DAT_112e5c520;
  func_0x000107c61428(param_1 + _DAT_112e5c520,auStack_a8,0x21,0);
  func_0x000100f72e88(&puStack_90,param_1 + lVar1);
  func_0x000107c614a8(auStack_a8);
  return lVar2;
}



/* Entry: 10215c0e8; end: 10215c217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215c0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5c538);
  uStack_98 = puVar1[1];
  uStack_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  uStack_78 = puVar1[5];
  uStack_80 = puVar1[4];
  uVar2 = 600;
  func_0x000107c600d0(0);
  func_0x000107c42378(&uStack_70,*(undefined8 *)(unaff_x20 + _DAT_112e5c500));
  uStack_c8 = (undefined4)param_2;
  uStack_c4 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_b8 = uStack_70;
  uStack_b0 = uStack_68;
  uStack_a8 = uStack_60;
  uVar3 = 0;
  uStack_d0 = uVar2;
  uStack_c0 = param_3;
  func_0x000107c5ff20(&uStack_100);
  uStack_68 = uStack_f8;
  uStack_70 = uStack_100;
  uStack_58 = uStack_e8;
  uStack_60 = uStack_f0;
  uStack_48 = uStack_d8;
  uStack_50 = uStack_e0;
  func_0x000107c5ff34();
  if ((uVar3 & 1) == 0) {
    func_0x000107c4fe74(*(undefined8 *)(unaff_x20 + _DAT_112e5c508));
    puVar4 = PTR__OBJC_CLASS___AVPlayerLooper_1126dbce0;
    func_0x000107c610f8();
    func_0x000107c47f50();
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e5c510);
    *(undefined **)(unaff_x20 + _DAT_112e5c510) = puVar4;
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10215c218; end: 10215c277; -[_TtC25SCLensVideoEditingFeature25VideoPlayerViewController initWithNibName:bundle:] */

void FUN_10215c218(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensVideoEditingFeature.VideoPlayerViewController",0x33,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10215c244);
  (*pcVar1)();
}



/* Entry: 10215c278; end: 10215c2ff; -[_TtC25SCLensVideoEditingFeature25VideoPlayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215c278(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5c500));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5c508));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5c510));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5c518));
  func_0x00010006e7f4(param_1 + _DAT_112e5c520);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5c528));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5c530));
  return;
}



/* Entry: 10215c300; end: 10215c31f;  */

void FUN_10215c300(void)

{
  func_0x000107c61168(&PTR_PTR_1128214c8);
  return;
}



/* Entry: 10215c320; end: 10215c35b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215c320(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(*unaff_x20 + _DAT_112e5c538);
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar2 = param_1[4];
  puVar1[5] = param_1[5];
  puVar1[4] = uVar2;
  FUN_10215c0e8();
  return;
}



/* Entry: 10215c35c; end: 10215c383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215c35c(byte param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  *(byte *)(lVar1 + _DAT_112e5c540) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1ca6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + _DAT_112e5c508),PTR_s_setMuted__1126503d0,param_1 & 1);
  return;
}



/* Entry: 10215c384; end: 10215c49f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215c384(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e5c510) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5c520);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c528) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c530) = 0;
  puVar2 = PTR__kCMTimeRangeZero_110348668;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5c538);
  uVar3 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
  uVar5 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
  uVar4 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  puVar1[5] = *(undefined8 *)(puVar2 + 0x28);
  puVar1[4] = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112e5c540) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c500) = param_1;
  puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c457a0();
  *(undefined **)(unaff_x20 + _DAT_112e5c518) = puVar2;
  puVar2 = PTR__OBJC_CLASS___AVQueuePlayer_1126de0c0;
  func_0x000107c610f8();
  func_0x000107c47f64();
  *(undefined **)(unaff_x20 + _DAT_112e5c508) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 10215c4a0; end: 10215c59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215c4a0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e5c510) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5c520);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c528) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c530) = 0;
  puVar2 = PTR__kCMTimeRangeZero_110348668;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5c538);
  uVar4 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
  uVar6 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
  uVar5 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
  *puVar1 = uVar4;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  puVar1[5] = *(undefined8 *)(puVar2 + 0x28);
  puVar1[4] = uVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112e5c540) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLensVideoEditingFeature/VideoPlayerViewController.swift",0x39,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10215c560);
  (*pcVar3)();
}



/* Entry: 10215c59c; end: 10215c5b7;  */

void FUN_10215c59c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10215c5b8; end: 10215cb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215c5b8(void)

{
  double dVar1;
  undefined *puVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  code *pcStack_110;
  code *pcStack_108;
  undefined1 auStack_107 [7];
  double dStack_100;
  undefined *apuStack_f8 [2];
  long lStack_e8;
  undefined *puStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined8 auStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  
  lVar4 = 0;
  func_0x00010215edb0();
  dStack_100 = (double)lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar17 = (long)&pcStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar19 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar19 - extraout_x12_00;
  lVar13 = *(long *)(unaff_x20 + 0x18);
  lVar4 = lVar13;
  func_0x000107c5de44(lVar13);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar12);
  func_0x000107c61170(lVar4);
  func_0x000107c5ed90();
  puVar6 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x000107c61168();
  func_0x000107c3e250();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  pcStack_108 = *(code **)(lVar18 + 8);
  (*pcStack_108)(lVar12,lVar5);
  func_0x00010215a0a8(0);
  dStack_d8 = 0.0;
  puStack_e0 = (undefined *)0x0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  ppuStack_c0 = (undefined **)0x0;
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar7 = puVar6;
  FUN_10215d3f4();
  lVar8 = 0;
  apuStack_f8[1] = puVar7;
  FUN_10215c300();
  func_0x000107c610f8();
  func_0x000107c61174();
  puVar7 = puVar6;
  FUN_10215c384();
  apuStack_f8[0] = puVar6;
  func_0x000107c61170(puVar6);
  lVar4 = lVar13;
  func_0x000107c5de44(lVar13);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar19);
  func_0x000107c61170(lVar4);
  func_0x000107c49664();
  func_0x000107c61180();
  if (lVar13 == 0) {
    (**(code **)(lVar18 + 0x10))(lVar17,lVar19,lVar5);
    uVar3 = 0;
    dVar22 = 1.0;
    dVar21 = 0.0;
    dVar23 = 0.0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c5cf28(&puStack_e0);
    dVar22 = dStack_d8;
    func_0x000107c5cf28(&puStack_e0,lVar13);
    puVar6 = puStack_e0;
    func_0x000107c61170(lVar13);
    func_0x000107c60ed4(dVar22,puVar6);
    dVar21 = dVar22 + 6.283185307179586;
    if (0.0 <= dVar22) {
      dVar21 = dVar22;
    }
    (**(code **)(lVar18 + 0x10))(lVar17,lVar19,lVar5);
    fVar20 = SUB84(dVar22,0);
    lVar4 = lVar13;
    func_0x000107c4a0c4();
    uVar3 = (undefined1)lVar4;
    func_0x000107c4fd4c(lVar13);
    dVar23 = (double)fVar20;
    func_0x000107c4fd40(lVar13);
    func_0x000107c61170(lVar13);
    dVar22 = (double)fVar20;
  }
  func_0x000107c60fc4(dVar21,0x401921fb54442d18);
  dVar1 = dStack_100;
  *(undefined8 *)(lVar17 + *(int *)((long)dStack_100 + 0x14)) = 0;
  puVar15 = (undefined8 *)(lVar17 + *(int *)((long)dVar1 + 0x18));
  *puVar15 = 0;
  *(undefined1 *)(puVar15 + 1) = 1;
  *(undefined1 *)((long)puVar15 + 9) = uVar3;
  puVar15[2] = dVar21;
  puVar15[3] = dVar23;
  puVar15[4] = dVar22;
  (*pcStack_108)(lVar19,lVar5);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuStack_c0 = &PTR_DAT_1104d33b0;
  lVar5 = 0;
  puStack_e0 = puVar7;
  lStack_c8 = lVar8;
  FUN_10215e8fc();
  func_0x000107c613fc();
  func_0x0001000c6518(&puStack_e0,lVar8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar15 = (undefined8 *)(lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(puVar15);
  auStack_b0[0] = *puVar15;
  ppuStack_90 = &PTR_DAT_1104d33b0;
  puVar15 = (undefined8 *)(lVar5 + _DAT_112e5c660);
  *puVar15 = 0;
  *(undefined1 *)(puVar15 + 1) = 1;
  puVar15 = (undefined8 *)(lVar5 + _DAT_112e5c668);
  *puVar15 = 0;
  *(undefined1 *)(puVar15 + 1) = 1;
  lStack_98 = lVar8;
  FUN_10215d604(auStack_b0,lVar5 + _DAT_112e5c650);
  lVar4 = lStack_e8;
  *(undefined8 *)(lVar5 + _DAT_112e5c658) = uVar14;
  FUN_10215d56c(lVar17,lStack_e8);
  func_0x000107c615f0(uVar14);
  func_0x000107c61174(puVar7);
  func_0x000103dbf4dc();
  func_0x00010215d5b0(lVar17);
  func_0x0001000834e4(auStack_b0);
  func_0x0001000834e4(&puStack_e0);
  func_0x000107c61174(puVar7);
  func_0x000107c6157c(lVar4);
  puVar2 = apuStack_f8[1];
  func_0x000107c6157c(apuStack_f8[1]);
  lVar5 = lVar4;
  FUN_10215d244(lVar4,puVar7,puVar2);
  func_0x000107c5677c();
  plVar16 = *(long **)(unaff_x20 + 0x30);
  *(long *)(unaff_x20 + 0x30) = lVar5;
  func_0x000107c61174(lVar5);
  func_0x000107c61170();
  func_0x000103dbf46c();
  puVar6 = &UNK_1104d3470;
  func_0x000107c613fc(&UNK_1104d3470,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  pcVar9 = FUN_10215d5ec;
  puVar11 = puVar6;
  (**(code **)(*plVar16 + 0x60))(FUN_10215d5ec);
  func_0x000107c61574(plVar16);
  func_0x000107c61574(puVar6);
  pcVar10 = pcVar9;
  func_0x000107c614f0(pcVar9);
  (**(code **)(puVar11 + 0x10))(*(undefined8 *)(unaff_x20 + 0x40),pcVar10,puVar11);
  func_0x000107c615e8(pcVar9);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(apuStack_f8[0]);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c61574(lVar4);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 10215cb08; end: 10215cbdb;  */

void FUN_10215cb08(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  func_0x00010215edb0();
  uVar3 = *(ulong *)(param_1 + *(int *)(lVar1 + 0x14));
  if (1 < uVar3) {
    if (uVar3 == 2) {
      func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61648();
      if (param_2 == 0) {
        return;
      }
      func_0x000107c41864(*(undefined8 *)(param_2 + 0x10));
      (**(code **)(param_2 + 0x20))(0);
    }
    else {
      func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61648();
      if (param_2 == 0) {
        return;
      }
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      func_0x000107c61174(uVar3);
      func_0x000107c41864(uVar2);
      (**(code **)(param_2 + 0x20))(uVar3);
      func_0x00010215d5f4(uVar3);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10215cbdc; end: 10215cc47;  */

void FUN_10215cbdc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10215cc48; end: 10215cc67;  */

void FUN_10215cc48(void)

{
  FUN_10215c5b8();
  return;
}



/* Entry: 10215cc68; end: 10215ce2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10215cc68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_b0;
  long lStack_a8;
  undefined8 auStack_a0 [3];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  plVar5 = &lStack_b0;
  lVar2 = param_3;
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x00010215a0a8();
  ppuStack_58 = &PTR_DAT_1104d32a0;
  uVar4 = 0;
  auStack_78[0] = param_1;
  uStack_60 = uVar3;
  FUN_10215e8fc();
  lVar1 = _DAT_112e5c2b0;
  ppuStack_80 = &PTR_DAT_1104d3520;
  uVar3 = 0x112e5c328;
  auStack_a0[0] = param_2;
  uStack_88 = uVar4;
  func_0x0001000285a8(0x112e5c328,&UNK_10da626a0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_3 + lVar1) = uVar3;
  lVar1 = _DAT_112e5c2c0;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_3 + lVar1) = uVar3;
  *(undefined **)(param_3 + _DAT_112e5c2c8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_3 + _DAT_112e5c2d8) = 0;
  *(undefined8 *)(param_3 + _DAT_112e5c2e0) = 0;
  *(undefined8 *)(param_3 + _DAT_112e5c2e8) = 0;
  FUN_10215d604(auStack_78,param_3 + _DAT_112e5c2d0);
  FUN_10215d604(auStack_a0,param_3 + _DAT_112e5c2b8);
  lStack_b0 = param_3;
  lStack_a8 = lVar2;
  func_0x000107c61154(&lStack_b0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000a8868(auStack_a0,uStack_88);
  uVar3 = *(undefined8 *)((long)plVar5 + _DAT_112e5c2b0);
  func_0x000107c61174(plVar5);
  func_0x000107c6157c(uVar3);
  FUN_10215ef40();
  func_0x000107c61170(plVar5);
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(auStack_78);
  func_0x0001000834e4(auStack_a0);
  return (undefined1 *)plVar5;
}



/* Entry: 10215ce2c; end: 10215cf5b;  */

undefined8 FUN_10215ce2c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *aplStack_80 [3];
  long lStack_68;
  undefined **ppuStack_60;
  undefined8 auStack_58 [3];
  long lStack_40;
  undefined **ppuStack_38;
  
  lVar4 = *param_2;
  lVar1 = 0;
  func_0x00010215a0a8();
  ppuStack_38 = &PTR_DAT_1104d32a0;
  ppuStack_60 = &PTR_DAT_1104d3520;
  uVar2 = 0;
  aplStack_80[0] = param_2;
  lStack_68 = lVar4;
  auStack_58[0] = param_1;
  lStack_40 = lVar1;
  FUN_1021591d8(0);
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_58,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)aplStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  func_0x0001000c6518(aplStack_80,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar6);
  uVar3 = *puVar5;
  FUN_10215cc68(uVar3,*puVar6,uVar2);
  func_0x0001000834e4(aplStack_80);
  func_0x0001000834e4(auStack_58);
  return uVar3;
}



/* Entry: 10215cf5c; end: 10215d243;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10215cf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar7;
  long alStack_140 [3];
  undefined1 auStack_128 [24];
  long lStack_110;
  undefined1 auStack_100 [24];
  long lStack_e8;
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 auStack_b0 [3];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  lVar2 = param_4;
  func_0x000107c614f0();
  uVar3 = 0;
  FUN_10215e8fc();
  ppuStack_68 = &PTR_DAT_1104d3520;
  uVar4 = 0;
  auStack_88[0] = param_1;
  uStack_70 = uVar3;
  FUN_10215c300();
  ppuStack_90 = &PTR_DAT_1104d33a0;
  uVar5 = 0;
  auStack_b0[0] = param_2;
  uStack_98 = uVar4;
  func_0x00010215a0a8();
  lVar1 = _DAT_112e5c490;
  ppuStack_b8 = &PTR_DAT_1104d32a0;
  uVar3 = 0x112e5c328;
  auStack_d8[0] = param_3;
  uStack_c0 = uVar5;
  func_0x0001000285a8(0x112e5c328,&UNK_10da626a0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_4 + lVar1) = uVar3;
  lVar1 = _DAT_112e5c4a0;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_4 + lVar1) = uVar3;
  *(undefined8 *)(param_4 + _DAT_112e5c4b8) = 0;
  *(undefined8 *)(param_4 + _DAT_112e5c4c0) = 0;
  *(undefined8 *)(param_4 + _DAT_112e5c4c8) = 0;
  *(undefined8 *)(param_4 + _DAT_112e5c4d0) = 0;
  FUN_10215d604(auStack_88,param_4 + _DAT_112e5c498);
  FUN_10215d604(auStack_d8,auStack_100);
  FUN_10215d604(auStack_88,auStack_128);
  func_0x0001000c6518(auStack_100,lStack_e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_e8 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)alStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar6);
  func_0x0001000c6518(auStack_128,lStack_110);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_110 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar7);
  uVar3 = *puVar6;
  FUN_10215ce2c(uVar3,*puVar7);
  func_0x0001000834e4(auStack_128);
  func_0x0001000834e4(auStack_100);
  *(undefined8 *)(param_4 + _DAT_112e5c4a8) = uVar3;
  FUN_10215d604(auStack_b0,param_4 + _DAT_112e5c4b0);
  puVar6 = alStack_140 + 1;
  alStack_140[1] = param_4;
  alStack_140[2] = lVar2;
  func_0x000107c61154(puVar6,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar3 = *(undefined8 *)((long)puVar6 + _DAT_112e5c490);
  func_0x000107c61174();
  func_0x000107c6157c(uVar3);
  FUN_10215ef40();
  func_0x000107c61574(uVar3);
  func_0x000107c3d614(puVar6);
  func_0x000107c61170(puVar6);
  func_0x0001000834e4(auStack_d8);
  func_0x0001000834e4(auStack_b0);
  func_0x0001000834e4(auStack_88);
  return puVar6;
}



/* Entry: 10215d244; end: 10215d3f3;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10215d244(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *aplStack_c0 [4];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined8 auStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 auStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar5 = *param_3;
  lVar1 = 0;
  FUN_10215e8fc();
  ppuStack_48 = &PTR_DAT_1104d3520;
  lVar2 = 0;
  auStack_68[0] = param_1;
  lStack_50 = lVar1;
  FUN_10215c300();
  ppuStack_70 = &PTR_DAT_1104d33a0;
  ppuStack_98 = &PTR_DAT_1104d32a0;
  uVar3 = 0;
  aplStack_c0[1] = param_3;
  lStack_a0 = lVar5;
  auStack_90[0] = param_2;
  lStack_78 = lVar2;
  FUN_10215b930(0);
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_68,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)aplStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar7);
  func_0x0001000c6518(auStack_90,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar8);
  func_0x0001000c6518(aplStack_c0 + 1,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)puVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(puVar6);
  uVar4 = *puVar7;
  FUN_10215cf5c(uVar4,*puVar8,*puVar6,uVar3);
  func_0x0001000834e4(aplStack_c0 + 1);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_68);
  return uVar4;
}



/* Entry: 10215d3f4; end: 10215d56b;  */

long FUN_10215d3f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined *puStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar1 = 0;
  func_0x00010215d6e0(0,0x112e2de28,&PTR__OBJC_CLASS___AVAsset_1126aff38);
  ppuStack_38 = &PTR_DAT_1104d3220;
  *(undefined8 *)(param_3 + 0x68) = 0;
  *(undefined8 *)(param_3 + 0x70) = 0;
  *(undefined8 *)(param_3 + 0x60) = 0;
  *(undefined1 *)(param_3 + 0x78) = 1;
  auStack_58[0] = param_1;
  uStack_40 = uVar1;
  func_0x00010215d604(auStack_58,param_3 + 0x10);
  puVar4 = auStack_a8;
  func_0x00010215d648(param_2);
  if (lStack_90 == 0) {
    func_0x00010215d698(auStack_a8);
    puVar2 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
    func_0x000107c610f8();
    func_0x000107c457a0();
    puVar3 = (undefined *)0x258;
    func_0x000107c600d0(0x3fd3333333333333);
    puStack_80 = puVar3;
    puStack_78 = puVar4;
    uStack_70 = param_1;
    func_0x000107c57e18(puVar2);
    func_0x000107c50464(&puStack_80,puVar2);
    func_0x000107c57e14(puVar2);
    func_0x000107c52860(puVar2);
    uVar1 = 0;
    func_0x00010215d6e0(0,0x112e5c648,&PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170);
    ppuStack_60 = &PTR_DAT_1104d3248;
    puStack_80 = puVar2;
    uStack_68 = uVar1;
    func_0x00010215d698(param_2);
  }
  else {
    func_0x00010215d698(param_2);
    FUN_10215d720(auStack_a8,&puStack_80);
  }
  FUN_10215d720(&puStack_80,param_3 + 0x38);
  func_0x0001000834e4(auStack_58);
  return param_3;
}



/* Entry: 10215d56c; end: 10215d5eb;  */

undefined8 FUN_10215d56c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010215edb0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10215d5ec; end: 10215d603;  */

void FUN_10215d5ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  func_0x00010215edb0();
  uVar3 = *(ulong *)(param_1 + *(int *)(lVar1 + 0x14));
  if (1 < uVar3) {
    if (uVar3 == 2) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
      lVar1 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar1 == 0) {
        return;
      }
      func_0x000107c41864(*(undefined8 *)(lVar1 + 0x10));
      (**(code **)(lVar1 + 0x20))(0);
    }
    else {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
      lVar1 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar1 == 0) {
        return;
      }
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      func_0x000107c61174(uVar3);
      func_0x000107c41864(uVar2);
      (**(code **)(lVar1 + 0x20))(uVar3);
      func_0x00010215d5f4(uVar3);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10215d604; end: 10215d71f;  */

long FUN_10215d604(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10215d720; end: 10215d737;  */

undefined8 * FUN_10215d720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10215d738; end: 10215d7bf;  */

uint FUN_10215d738(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = *param_2;
  if (lVar3 == 0) {
    if (uVar2 == 0) {
      return 1;
    }
  }
  else if (lVar3 == 1) {
    if (uVar2 == 1) {
      return 1;
    }
  }
  else if (lVar3 == 2) {
    if (uVar2 == 2) {
      return 1;
    }
  }
  else if (2 < uVar2) {
    uVar1 = 0;
    func_0x0001007bbbf8(0);
    func_0x000107c60118(lVar3,uVar2,uVar1);
    return (uint)lVar3 & 1;
  }
  return 0;
}



/* Entry: 10215d7c0; end: 10215d83b;  */

bool FUN_10215d7c0(double *param_1,double *param_2)

{
  char cVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *param_1;
  dVar2 = *param_2;
  cVar1 = *(char *)(param_2 + 1);
  if (*(char *)(param_1 + 1) == '\x01') {
    if (dVar3 == 0.0) {
      if (cVar1 == '\x01' && dVar2 == 0.0) {
        return true;
      }
    }
    else if (dVar3 == 4.94065645841247e-324) {
      if (cVar1 == '\x01' && dVar2 == 4.94065645841247e-324) {
        return true;
      }
    }
    else if (cVar1 == '\x01' && 1 < (ulong)dVar2) {
      return true;
    }
  }
  else if (cVar1 != '\x01') {
    return dVar3 == dVar2;
  }
  return false;
}



/* Entry: 10215d83c; end: 10215dacf;  */

void FUN_10215d83c(long param_1,long param_2,byte param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *unaff_x20;
  double dVar7;
  double dVar8;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [24];
  
  FUN_10215d56c(param_4,param_1);
  if (param_3 < 2) {
    lVar4 = 0;
    if (param_3 == 0) {
      func_0x00010215edb0();
      plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x18));
      *plVar1 = param_2;
      *(undefined1 *)(plVar1 + 1) = 0;
    }
    else {
      func_0x00010215edb0();
      puVar2 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
      *puVar2 = 2;
      *(undefined1 *)(puVar2 + 1) = 1;
      puVar2[3] = param_2;
    }
  }
  else if (param_3 == 2) {
    lVar4 = 0;
    func_0x00010215edb0();
    puVar2 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
    *puVar2 = 2;
    *(undefined1 *)(puVar2 + 1) = 1;
    puVar2[4] = param_2;
  }
  else if (param_2 < 3) {
    if ((param_2 == 0) || (param_2 != 1)) {
      lVar4 = 0;
      func_0x00010215edb0();
      puVar2 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
      *puVar2 = 1;
      *(undefined1 *)(puVar2 + 1) = 1;
    }
    else {
      lVar4 = 0;
      func_0x00010215edb0();
      puVar2 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 1;
    }
  }
  else if (param_2 < 5) {
    if (param_2 == 3) {
      lVar4 = 0;
      func_0x00010215edb0();
      *(byte *)(param_1 + *(int *)(lVar4 + 0x18) + 9) =
           (*(byte *)(param_4 + *(int *)(lVar4 + 0x18) + 9) ^ 0xff) & 1;
    }
    else {
      lVar4 = 0;
      func_0x00010215edb0();
      iVar3 = *(int *)(lVar4 + 0x18);
      dVar7 = *(double *)(param_4 + iVar3 + 0x10) + 1.5707963267948966;
      func_0x000107c60fc4(dVar7,0x401921fb54442d18);
      *(double *)(param_1 + iVar3 + 0x10) = dVar7;
    }
  }
  else if (param_2 == 5) {
    lVar5 = 0;
    func_0x00010215edb0();
    puVar2 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 1;
    lVar4 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x60);
    func_0x000107c61428(lVar4,auStack_68,0,0);
    lVar4 = lVar4 + *(int *)(lVar5 + 0x18);
    dVar7 = *(double *)(lVar4 + 0x18);
    dVar8 = *(double *)(lVar4 + 0x20);
    func_0x000107c60888(auStack_98,*(undefined8 *)(lVar4 + 0x10));
    puVar6 = PTR_PTR_1126ddb78;
    func_0x000107c610f8();
    func_0x000107c482e0((float)dVar7,(float)dVar8);
    iVar3 = *(int *)(lVar5 + 0x14);
    func_0x00010215d5f4(*(undefined8 *)(param_1 + iVar3));
    *(undefined **)(param_1 + iVar3) = puVar6;
  }
  else {
    lVar4 = 0;
    func_0x00010215edb0();
    puVar2 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 1;
    iVar3 = *(int *)(lVar4 + 0x14);
    func_0x00010215d5f4(*(undefined8 *)(param_1 + iVar3));
    *(undefined8 *)(param_1 + iVar3) = 2;
  }
  return;
}



/* Entry: 10215dad0; end: 10215e57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215dad0(double param_1,byte param_2,long param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long ****pppplVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long ****pppplVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  double dVar14;
  double dVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long ***ppplVar20;
  long *unaff_x20;
  long ***ppplStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  long ***ppplStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  long ***appplStack_d0 [3];
  double dStack_b8;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  long ***ppplStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = _DAT_112e5c650;
  if (param_2 < 2) {
    if (param_2 == 0) {
      plVar13 = (long *)((long)unaff_x20 + _DAT_112e5c650);
      uVar18 = 0;
      func_0x000107c61428(plVar13,appplStack_d0,0,0);
      func_0x00010215efe0(plVar13,&ppplStack_90);
      pppplVar10 = &ppplStack_90;
      func_0x0001000a8868(pppplVar10,uStack_78);
      dVar14 = (double)plVar13[3];
      func_0x0001000a8868();
      func_0x000107c42378(&uStack_a8,*(undefined8 *)(*plVar13 + _DAT_112e5c500));
      dVar15 = dStack_a0;
      func_0x000107c60a3c(&uStack_a8);
      lVar4 = _DAT_112e5c508;
      ppplVar20 = *pppplVar10;
      func_0x000107c4e454(*(undefined8 *)((long)ppplVar20 + _DAT_112e5c508));
      lVar4 = *(long *)((long)ppplVar20 + lVar4);
      func_0x000107c40f5c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        uVar5 = 600;
        func_0x000107c600d0(dVar15 * param_1);
        ppplStack_100 = *(long ****)PTR__kCMTimeZero_110348670;
        uStack_e0 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_dc = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
        dStack_f8 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        ppplStack_e8 = ppplStack_100;
        uStack_d8 = uStack_f0;
        uStack_a8 = uVar5;
        dStack_a0 = dVar14;
        uStack_98 = uVar18;
        func_0x000107c51bec(lVar4);
        func_0x000107c61170(lVar4);
      }
      pppplVar10 = &ppplStack_90;
      goto LAB_10215df48;
    }
    plVar13 = (long *)((long)unaff_x20 + _DAT_112e5c650);
    func_0x000107c61428(plVar13,&uStack_a8,0,0);
    plVar12 = plVar13;
    func_0x0001000a8868(plVar13,plVar13[3]);
    func_0x000107c42378(&ppplStack_90,*(undefined8 *)(*plVar12 + _DAT_112e5c500));
    dVar15 = dStack_88;
    func_0x000107c60a3c(&ppplStack_90);
    lVar4 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x60);
    pppplVar10 = &ppplStack_e8;
    uVar18 = 0;
    func_0x000107c61428(lVar4,pppplVar10,0,0);
    lVar7 = 0;
    func_0x00010215edb0();
    uVar8 = 600;
    func_0x000107c600d0(dVar15 * *(double *)(lVar4 + *(int *)(lVar7 + 0x18) + 0x18),600);
    uVar9 = 600;
    pppplVar6 = pppplVar10;
    uVar5 = uVar18;
    func_0x000107c600d0(dVar15 * *(double *)(lVar4 + *(int *)(lVar7 + 0x18) + 0x20),600);
    func_0x000107c5ff30(&ppplStack_90,uVar8,pppplVar10,uVar18,uVar9,pppplVar6,uVar5);
    func_0x00010215efe0(plVar13,appplStack_d0);
    pppplVar10 = appplStack_d0;
    func_0x0001000a8868();
    ppplStack_100 = ppplStack_90;
    dStack_f8 = dStack_88;
    uStack_f0 = uStack_80;
    dVar14 = dStack_88;
    func_0x000107c60a3c(&ppplStack_100);
    lVar4 = _DAT_112e5c508;
    ppplVar20 = *pppplVar10;
    func_0x000107c4e454(*(undefined8 *)((long)ppplVar20 + _DAT_112e5c508));
    lVar4 = *(long *)((long)ppplVar20 + lVar4);
    func_0x000107c40f5c();
    func_0x000107c61180();
    dVar15 = dStack_b8;
  }
  else {
    if (param_2 != 2) {
      if (2 < (long)param_1) {
        if ((long)param_1 - 5U < 2) {
          if (*(long *)((long)unaff_x20 + _DAT_112e5c658) == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bf73c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (*(long *)((long)unaff_x20 + _DAT_112e5c658),PTR_s_didComplete_1125ba8c8);
          return;
        }
        if (param_1 == 1.48219693752374e-323) {
          lVar4 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x60);
          func_0x000107c61428(lVar4,&ppplStack_90,0,0);
          lVar11 = 0;
          func_0x00010215edb0();
          uVar2 = *(undefined1 *)(lVar4 + *(int *)(lVar11 + 0x18) + 9);
          lVar7 = (long)unaff_x20 + _DAT_112e5c650;
          func_0x000107c61428(lVar7,appplStack_d0,0x21,0);
          uVar18 = *(undefined8 *)(lVar7 + 0x18);
          lVar17 = *(long *)(lVar7 + 0x20);
          func_0x0001000c6518(lVar7,uVar18);
          (**(code **)(lVar17 + 0x38))(uVar2,uVar18,lVar17);
          func_0x000107c614a8(appplStack_d0);
          if (*(char *)(lVar4 + *(int *)(lVar11 + 0x18) + 9) != '\x01') {
            if (*(long *)((long)unaff_x20 + _DAT_112e5c658) == 0) {
              return;
            }
            func_0x000107c41de0();
            return;
          }
          if (*(long *)((long)unaff_x20 + _DAT_112e5c658) == 0) {
            return;
          }
          func_0x000107c41c3c();
          return;
        }
        func_0x000107c61428((long)unaff_x20 + _DAT_112e5c650,&uStack_a8,0,0);
        func_0x00010215efe0((long)unaff_x20 + lVar4,appplStack_d0);
        pppplVar10 = appplStack_d0;
        func_0x0001000a8868(pppplVar10,dStack_b8);
        lVar4 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x60);
        func_0x000107c61428(lVar4,&ppplStack_e8,0,0);
        lVar7 = 0;
        func_0x00010215edb0();
        func_0x000107c60888(&ppplStack_90,*(undefined8 *)(lVar4 + *(int *)(lVar7 + 0x18) + 0x10));
        if (*(long *)((long)*pppplVar10 + _DAT_112e5c528) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10215e57c);
          (*pcVar3)();
        }
        func_0x000107c52580();
        func_0x0001000834e4(appplStack_d0);
        if (*(long *)((long)unaff_x20 + _DAT_112e5c658) == 0) {
          return;
        }
        func_0x000107c41ce8();
        return;
      }
      if (param_1 != 0.0) {
        if (param_1 == 4.94065645841247e-324) {
          plVar13 = (long *)((long)unaff_x20 + _DAT_112e5c650);
          func_0x000107c61428(plVar13,&ppplStack_90,0,0);
          func_0x0001000a8868(plVar13,plVar13[3]);
          func_0x000107c4e454(*(undefined8 *)(*plVar13 + _DAT_112e5c508));
          return;
        }
        lVar4 = 0;
        func_0x00010215edb0();
        puVar1 = (ulong *)(param_3 + *(int *)(lVar4 + 0x18));
        if (((char)puVar1[1] == '\x01') && (1 < *puVar1)) {
          plVar13 = (long *)((long)unaff_x20 + _DAT_112e5c650);
          func_0x000107c61428(plVar13,&uStack_a8,0,0);
          plVar12 = plVar13;
          func_0x0001000a8868(plVar13,plVar13[3]);
          func_0x000107c42378(&ppplStack_90,*(undefined8 *)(*plVar12 + _DAT_112e5c500));
          dVar15 = dStack_88;
          func_0x000107c60a3c(&ppplStack_90);
          lVar7 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x60);
          pppplVar10 = &ppplStack_e8;
          uVar9 = 0;
          func_0x000107c61428(lVar7,pppplVar10,0,0);
          uVar5 = 600;
          func_0x000107c600d0(dVar15 * *(double *)(lVar7 + *(int *)(lVar4 + 0x18) + 0x18),600);
          uVar8 = 600;
          pppplVar6 = pppplVar10;
          uVar18 = uVar9;
          func_0x000107c600d0(dVar15 * *(double *)(lVar7 + *(int *)(lVar4 + 0x18) + 0x20),600);
          func_0x000107c5ff30(&ppplStack_90,uVar5,pppplVar10,uVar9,uVar8,pppplVar6,uVar18);
          func_0x000107c61428(plVar13,appplStack_d0,0x21,0);
          lVar4 = plVar13[3];
          lVar7 = plVar13[4];
          func_0x0001000c6518(plVar13,lVar4);
          (**(code **)(lVar7 + 0x20))(&ppplStack_90,lVar4,lVar7);
          func_0x000107c614a8(appplStack_d0);
          if (*(long *)((long)unaff_x20 + _DAT_112e5c658) != 0) {
            func_0x000107c41dc0();
          }
        }
        plVar13 = (long *)((long)unaff_x20 + _DAT_112e5c650);
        func_0x000107c61428(plVar13,appplStack_d0,0,0);
        func_0x0001000a8868(plVar13,plVar13[3]);
        func_0x000107c4e868(*(undefined8 *)(*plVar13 + _DAT_112e5c508));
        return;
      }
      plVar13 = (long *)((long)unaff_x20 + _DAT_112e5c650);
      func_0x000107c61428(plVar13,&uStack_a8,0,0);
      func_0x00010215efe0(plVar13,appplStack_d0);
      pppplVar10 = appplStack_d0;
      func_0x0001000a8868(pppplVar10,dStack_b8);
      lVar4 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x60);
      func_0x000107c61428(lVar4,&ppplStack_e8,0,0);
      lVar7 = 0;
      func_0x00010215edb0();
      func_0x000107c60888(&ppplStack_90,*(undefined8 *)(lVar4 + *(int *)(lVar7 + 0x18) + 0x10));
      if (*(long *)((long)*pppplVar10 + _DAT_112e5c528) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10215e578);
        (*pcVar3)();
      }
      func_0x000107c52580();
      func_0x0001000834e4(appplStack_d0);
      uVar2 = *(undefined1 *)(lVar4 + *(int *)(lVar7 + 0x18) + 9);
      func_0x000107c61428(plVar13,&ppplStack_90,0x21,0);
      lVar17 = plVar13[3];
      lVar11 = plVar13[4];
      func_0x0001000c6518(plVar13,lVar17);
      (**(code **)(lVar11 + 0x38))(uVar2,lVar17,lVar11);
      func_0x000107c614a8(&ppplStack_90);
      lVar16 = plVar13[3];
      plVar12 = plVar13;
      func_0x0001000a8868(plVar13,lVar16);
      func_0x000107c42378(&ppplStack_90,*(undefined8 *)(*plVar12 + _DAT_112e5c500));
      dVar15 = dStack_88;
      func_0x000107c60a3c(&ppplStack_90);
      uVar18 = 600;
      func_0x000107c600d0(dVar15 * *(double *)(lVar4 + *(int *)(lVar7 + 0x18) + 0x18),600);
      uVar5 = 600;
      lVar17 = lVar16;
      lVar19 = lVar11;
      func_0x000107c600d0(dVar15 * *(double *)(lVar4 + *(int *)(lVar7 + 0x18) + 0x20),600);
      func_0x000107c5ff30(&ppplStack_90,uVar18,lVar16,lVar11,uVar5,lVar17,lVar19);
      func_0x000107c61428(plVar13,appplStack_d0,0x21,0);
      lVar4 = plVar13[3];
      lVar7 = plVar13[4];
      func_0x0001000c6518(plVar13,lVar4);
      (**(code **)(lVar7 + 0x20))(&ppplStack_90,lVar4,lVar7);
      func_0x000107c614a8(appplStack_d0);
      func_0x0001000a8868(plVar13,plVar13[3]);
      func_0x000107c4e868(*(undefined8 *)(*plVar13 + _DAT_112e5c508));
      if (*(long *)((long)unaff_x20 + _DAT_112e5c658) == 0) {
        return;
      }
      func_0x000107c41d38();
      return;
    }
    plVar13 = (long *)((long)unaff_x20 + _DAT_112e5c650);
    func_0x000107c61428(plVar13,&uStack_a8,0,0);
    plVar12 = plVar13;
    func_0x0001000a8868(plVar13,plVar13[3]);
    func_0x000107c42378(&ppplStack_90,*(undefined8 *)(*plVar12 + _DAT_112e5c500));
    dVar14 = dStack_88;
    func_0x000107c60a3c(&ppplStack_90);
    lVar4 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x60);
    pppplVar10 = &ppplStack_e8;
    uVar18 = 0;
    func_0x000107c61428(lVar4,pppplVar10,0,0);
    lVar7 = 0;
    func_0x00010215edb0();
    uVar8 = 600;
    func_0x000107c600d0(dVar14 * *(double *)(lVar4 + *(int *)(lVar7 + 0x18) + 0x18),600);
    dVar14 = dVar14 * *(double *)(lVar4 + *(int *)(lVar7 + 0x18) + 0x20);
    uVar9 = 600;
    pppplVar6 = pppplVar10;
    uVar5 = uVar18;
    func_0x000107c600d0(dVar14,600);
    func_0x000107c5ff30(&ppplStack_90,uVar8,pppplVar10,uVar18,uVar9,pppplVar6,uVar5);
    func_0x00010215efe0(plVar13,appplStack_d0);
    pppplVar10 = appplStack_d0;
    func_0x0001000a8868();
    pppplVar6 = pppplVar10;
    func_0x000107c5ff2c();
    ppplStack_100 = (long ***)pppplVar6;
    dStack_f8 = dStack_b8;
    uStack_f0 = uVar18;
    func_0x000107c60a3c(&ppplStack_100);
    lVar4 = _DAT_112e5c508;
    ppplVar20 = *pppplVar10;
    func_0x000107c4e454(*(undefined8 *)((long)ppplVar20 + _DAT_112e5c508));
    lVar4 = *(long *)((long)ppplVar20 + lVar4);
    func_0x000107c40f5c();
    func_0x000107c61180();
    dVar15 = dStack_b8;
  }
  if (lVar4 != 0) {
    pppplVar10 = (long ****)0x258;
    func_0x000107c600d0(dVar14);
    ppplStack_100 = (long ***)pppplVar10;
    dStack_f8 = dVar15;
    uStack_f0 = uVar18;
    func_0x000107c51bec(lVar4);
    func_0x000107c61170(lVar4);
  }
  pppplVar10 = appplStack_d0;
LAB_10215df48:
  func_0x0001000834e4(pppplVar10);
  return;
}



/* Entry: 10215e57c; end: 10215e5b3;  */

void FUN_10215e57c(undefined1 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010215edb0();
  *param_1 = *(undefined1 *)(param_2 + *(int *)(lVar1 + 0x18) + 9);
  return;
}



/* Entry: 10215e5b4; end: 10215e70b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215e5b4(double *param_1,double *param_2,long param_3)

{
  long extraout_x8;
  long *plVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  double dStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  dVar5 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  dVar6 = 0.0;
  if (param_3 != 0) {
    lVar3 = param_3 + _DAT_112e5c650;
    func_0x000107c61428(lVar3,auStack_90,0,0);
    lVar2 = *(long *)(lVar3 + 0x18);
    func_0x0001000a8868(lVar3,lVar2);
    lVar3 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
    plVar1 = (long *)((long)&lStack_b0 - extraout_x8);
    (**(code **)(lVar3 + 0x10))(plVar1);
    func_0x000107c42378(auStack_a8,*(undefined8 *)(*plVar1 + _DAT_112e5c500));
    dVar4 = dStack_a0;
    func_0x000107c60a3c(auStack_a8);
    func_0x000107c61574(param_3);
    (**(code **)(lVar3 + 8))(plVar1,lVar2);
    if ((0.0 < dVar4) && (dVar6 = 1.0, dVar5 < dVar4)) {
      dVar6 = dVar5 / dVar4;
    }
  }
  *param_1 = dVar6;
  return;
}



/* Entry: 10215e70c; end: 10215e767;  */

void FUN_10215e70c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x00010215edb0();
  plVar1 = (long *)(param_2 + *(int *)(lVar2 + 0x18));
  lVar2 = *plVar1;
  *(bool *)param_1 = (char)plVar1[1] != '\x01' || lVar2 != 0 && lVar2 != 2;
  return;
}



/* Entry: 10215e768; end: 10215e86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10215e768(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_112e5c660);
  if (*(char *)(puVar1 + 1) == '\x01') {
    lVar2 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x60);
    func_0x000107c61428(lVar2,auStack_48,0,0);
    lVar3 = 0;
    func_0x00010215edb0();
    uVar4 = *(undefined8 *)(lVar2 + *(int *)(lVar3 + 0x18) + 0x18);
    *puVar1 = uVar4;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  return uVar4;
}



/* Entry: 10215e870; end: 10215e89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215e870(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + _DAT_112e5c650);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + _DAT_112e5c658));
  return;
}



/* Entry: 10215e89c; end: 10215e8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215e89c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  func_0x000103dbf870();
  lVar1 = _DAT_112e5c650;
  plVar2 = param_1;
  func_0x000107c6157c();
  func_0x0001000834e4((long)plVar2 + lVar1);
  uVar3 = *(undefined8 *)((long)param_1 + _DAT_112e5c658);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)
            (param_1,*(undefined4 *)(*param_1 + 0x30),*(undefined2 *)(*param_1 + 0x34));
  return;
}



/* Entry: 10215e8fc; end: 10215e90f;  */

void FUN_10215e8fc(undefined8 param_1)

{
  if (lRam0000000112e5c698 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6b2b60);
  return;
}



/* Entry: 10215e910; end: 10215e963;  */

void FUN_10215e910(long param_1)

{
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = &UNK_10da62988;
  puStack_28 = &UNK_10da629a0;
  puStack_20 = &UNK_10da629b8;
  puStack_18 = &UNK_10da629b8;
  func_0x000107c61524(param_1,0x100,4,&puStack_30,param_1 + 0xd8);
  return;
}


