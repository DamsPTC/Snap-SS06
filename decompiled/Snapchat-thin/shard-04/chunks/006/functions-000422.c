/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103707e24; end: 103707e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103707e24(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f8aec0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f8aec0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_103707e84();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 103707e84; end: 103708257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103707e84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  long lVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  puVar9 = &UNK_110686ba8;
  puVar2 = puVar9;
  func_0x000107c613fc(&UNK_110686ba8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = PTR_PTR_1126ad500;
  func_0x000107c610f8(PTR_PTR_1126ad500);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x1037097e8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c75f50;
  puStack_88 = &UNK_110686bc0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c6157c(puVar2);
  func_0x000107c47c40(puVar3);
  func_0x000107c60bd0(ppuVar4);
  puVar11 = puStack_78;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar11);
  puVar2 = puVar9;
  func_0x000107c613fc(&UNK_110686ba8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar5 = PTR_PTR_1126ad508;
  func_0x000107c610f8(PTR_PTR_1126ad508);
  uStack_80 = 0x1037097f0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110686be8;
  puStack_78 = puVar2;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c6157c(puVar2);
  func_0x000107c47c4c(puVar5);
  func_0x000107c60bd0(ppuVar6);
  puVar11 = puStack_78;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar11);
  puVar2 = puVar9;
  func_0x000107c613fc(&UNK_110686ba8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar7 = PTR_PTR_1126ad510;
  func_0x000107c610f8(PTR_PTR_1126ad510);
  uStack_80 = 0x1037097f8;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110686c10;
  puStack_78 = puVar2;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c6157c(puVar2);
  func_0x000107c47c50(puVar7);
  func_0x000107c60bd0(ppuVar8);
  puVar11 = puStack_78;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar11);
  func_0x000107c613fc(&UNK_110686ba8,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar2 = PTR_PTR_1126ad518;
  func_0x000107c610f8(PTR_PTR_1126ad518);
  uStack_80 = 0x103709800;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110686c38;
  puStack_78 = puVar9;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c6157c(puVar9);
  func_0x000107c47c44(puVar2);
  func_0x000107c60bd0(ppuVar10);
  puVar11 = puStack_78;
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar11);
  puVar9 = PTR_PTR_1126ad520;
  func_0x000107c610f8(PTR_PTR_1126ad520);
  func_0x000107c454cc();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar2);
  lVar13 = *(long *)(unaff_x20 + _DAT_112f8aeb8);
  if (lVar13 != 0) {
    puVar11 = &UNK_110686ba8;
    func_0x000107c613fc(&UNK_110686ba8,0x18,7);
    func_0x000107c61614(puVar11 + 0x10);
    puVar2 = PTR_PTR_1126ad528;
    func_0x000107c610f8(PTR_PTR_1126ad528);
    uStack_80 = 0x103709808;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110686c60;
    puStack_78 = puVar11;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61174(lVar13);
    func_0x000107c61174();
    func_0x000107c6157c(puVar11);
    func_0x000107c47c48(puVar2);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar13);
    puVar1 = puStack_78;
    func_0x000107c61574(puVar11);
    func_0x000107c61574(puVar1);
    func_0x000107c52910(puVar9);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(puVar2);
  }
  return puVar9;
}



/* Entry: 103708258; end: 103708317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103708258(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = _DAT_112f8aec8;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112f8aec8);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x1) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112f8aeb0);
    if (lVar5 == 0) {
      puVar4 = (undefined *)0x0;
      uVar6 = 1;
    }
    else {
      lVar2 = lVar5;
      func_0x000107c615f0(lVar5);
      FUN_103707e24();
      puVar4 = PTR_PTR_1126ad4f8;
      func_0x000107c610f8();
      func_0x000107c49520();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar5);
      uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x0001037097c8(uVar6);
  }
  func_0x0001037097d8(puVar3);
  return puVar4;
}



/* Entry: 103708318; end: 1037083c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103708318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f8aea8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8aeb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8aeb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8aec0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8aec8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8aed0) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffc0,
                      PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1037083c8; end: 1037083e7; -[_TtC44MusicTopicViewerHeaderProviderImplementation26MusicTopicViewerHeaderCell initWithFrame:] */

void FUN_1037083c8(void)

{
  FUN_103708318();
  return;
}



/* Entry: 1037083e8; end: 1037084a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037083e8(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f8aea8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8aeb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8aeb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8aec0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8aec8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8aed0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar1);
  }
  return puVar1;
}



/* Entry: 1037084a4; end: 1037084cb; -[_TtC44MusicTopicViewerHeaderProviderImplementation26MusicTopicViewerHeaderCell initWithCoder:] */

void FUN_1037084a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1037083e8();
  return;
}



/* Entry: 1037084cc; end: 1037084ff;  */

void FUN_1037084cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103708500; end: 103708577; -[_TtC44MusicTopicViewerHeaderProviderImplementation26MusicTopicViewerHeaderCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010370853c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103708540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103708500(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f8aea8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f8aeb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8aeb8));
  return;
}



/* Entry: 103708578; end: 103708597;  */

void FUN_103708578(void)

{
  func_0x000107c61168(&PTR_PTR_1128e6270);
  return;
}



/* Entry: 103708598; end: 10370860b; -[_TtC44MusicTopicViewerHeaderProviderImplementation26MusicTopicViewerHeaderCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103708598(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_28;
  
  lVar3 = *(long *)(param_1 + _DAT_112f8aed0);
  plVar2 = (long *)0x0;
  if (lVar3 != 0) {
    uVar1 = 0;
    lStack_28 = lVar3;
    FUN_103709cd4(0,0x112f8af00,&PTR_PTR_1126ad530);
    func_0x000107c61174(lVar3);
    plVar2 = &lStack_28;
    func_0x000107c605b0(plVar2,uVar1);
    func_0x000107c61170(lStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 10370860c; end: 103708677; -[_TtC44MusicTopicViewerHeaderProviderImplementation26MusicTopicViewerHeaderCell setViewModel:] */

void FUN_10370860c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103708678(&uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103708678; end: 10370873f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103708678(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  uVar2 = param_1;
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    FUN_103707db0();
    plVar1 = &lStack_58;
    func_0x000107c6147c(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar2 = *(undefined8 *)(lStack_58 + _DAT_112f8ae78);
      func_0x000107c61174();
      func_0x000107c61170(lStack_58);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f8aed0);
      *(undefined8 *)(unaff_x20 + _DAT_112f8aed0) = uVar2;
      func_0x000107c61174(uVar2);
      func_0x000107c61170(uVar3);
      FUN_103708740();
      func_0x000107c61170(uVar2);
    }
  }
  func_0x00010006e7f4(param_1);
  return;
}



/* Entry: 103708740; end: 1037088e7;  */

/* WARNING: Possible PIC construction at 0x00010370885c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103708860) */
/* WARNING: Removing unreachable block (ram,0x0001037088e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103708740(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f8aed0);
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar2 = lVar1;
  FUN_103708258();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_110686b30;
    func_0x000107c613fc(&UNK_110686b30,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar1;
    *(long *)(puVar4 + 0x20) = unaff_x20;
    puVar5 = &UNK_110686b58;
    func_0x000107c613fc(&UNK_110686b58,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_103709780;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_60 = FUN_10370978c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_10006eb60;
    puStack_68 = &UNK_110686b70;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c4e5fc(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1037088e8; end: 103708963; +[_TtC44MusicTopicViewerHeaderProviderImplementation26MusicTopicViewerHeaderCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_1037088e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_5 == 0) {
    param_2 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_5);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_5);
  }
  FUN_1037094d0(param_1,&uStack_50);
  func_0x00010006e7f4(&uStack_50);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 103708964; end: 103708baf;  */

void FUN_103708964(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000107c5a588(param_1,param_2,param_2);
  lVar1 = param_1;
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c3d89c(param_3);
    func_0x000107c5a050(param_1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar3 = puVar2;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar3 + 0x18) = 9;
    *(undefined8 *)(puVar3 + 0x10) = 4;
    lVar1 = param_1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar5 = param_3;
    func_0x000107c4acb0(param_3);
    func_0x000107c61180();
    lVar4 = lVar1;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar5);
    *(long *)(puVar3 + 0x20) = lVar4;
    lVar1 = param_1;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar5 = param_3;
    func_0x000107c5ce8c(param_3);
    func_0x000107c61180();
    lVar4 = lVar1;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar5);
    *(long *)(puVar3 + 0x28) = lVar4;
    lVar1 = param_1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar5 = param_3;
    func_0x000107c5cbe4(param_3);
    func_0x000107c61180();
    lVar4 = lVar1;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar5);
    *(long *)(puVar3 + 0x30) = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar5 = param_3;
    func_0x000107c3ec1c(param_3);
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c402a4();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar5);
    *(long *)(puVar3 + 0x38) = lVar1;
    uVar5 = 0;
    FUN_103709cd4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c5fc48(puVar3,uVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c3d048(puVar2);
  }
  func_0x000107c61170();
  func_0x000107c56a14(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 103708bb0; end: 103709373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103708bb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar5 = *(long *)(param_3 + _DAT_112f8aea8);
    if (lVar5 != 0) {
      puVar1 = PTR_PTR_1126b02a8;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar5);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c46d50();
      func_0x000107c61170(param_1);
      puVar2 = &UNK_110686dd8;
      func_0x000107c613fc(&UNK_110686dd8,0x28,7);
      *(long *)(puVar2 + 0x10) = lVar5;
      *(long *)(puVar2 + 0x18) = param_3;
      *(undefined **)(puVar2 + 0x20) = puVar1;
      puVar3 = &UNK_110686e00;
      func_0x000107c613fc(&UNK_110686e00,0x20,7);
      *(undefined **)(puVar3 + 0x10) = &UNK_10dc00038;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      func_0x000107c615f0(lVar5);
      func_0x000107c61174(param_3);
      func_0x000107c61174(puVar1);
      uVar4 = 4;
      func_0x0001001ca524(4,3,0x50,4,0,0,&UNK_10dc00040,puVar3,PTR___sSbN_11034dd40);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(puVar1);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar4);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 103709374; end: 1037093e3;  */

void FUN_103709374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037093e4,uVar1,uVar2);
  return;
}



/* Entry: 1037093e4; end: 103709433;  */

void FUN_1037093e4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c445ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103709430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103709434; end: 10370948b;  */

void FUN_103709434(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10370948c;
                    /* WARNING: Could not recover jumptable at 0x000103709488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Entry: 10370948c; end: 1037094cf;  */

void FUN_10370948c(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001037094cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1037094d0; end: 10370977f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1037094d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined *puVar8;
  long extraout_x8;
  double dVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_90 [8];
  long lStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100672b50(param_2,&uStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    FUN_103707db0();
    plVar2 = &lStack_88;
    puVar7 = &uStack_80;
    func_0x000107c6147c(plVar2,puVar7,PTR___sypN_11034f1a8 + 8,param_2,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(ulong *)(lStack_88 + _DAT_112f8ae78);
      func_0x000107c61174();
      func_0x000107c61170(lStack_88);
      uVar10 = uVar3;
      func_0x000107c4fd3c();
      func_0x000107c61180();
      if (uVar10 == 0) {
        uVar10 = uVar3;
        func_0x000107c5cdb0();
        func_0x000107c61180();
        uVar4 = uVar10;
        func_0x000107c5c384();
        func_0x000107c61180();
        func_0x000107c61170(uVar10);
        if (uVar4 != 0) {
          uVar10 = uVar4;
          func_0x000107c3d97c();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          if (uVar10 != 0) {
            uVar4 = uVar10;
            func_0x000107c5faec();
            func_0x000107c61170(uVar10);
            uStack_80 = uVar4;
            puStack_78 = puVar7;
            func_0x000107c5eb88(puVar11);
            func_0x000100e8b654();
            puVar5 = puVar11;
            puVar8 = PTR___sSSN_11034da80;
            func_0x000107c601f0(puVar11,PTR___sSSN_11034da80,uVar10);
            (**(code **)(lVar12 + 8))(puVar11,lVar1);
            func_0x000107c6142c(puVar7);
            func_0x000107c6142c(puVar8);
            uVar10 = (ulong)puVar5 & 0xffffffffffff;
            if (((ulong)puVar8 & 0x2000000000000000) != 0) {
              uVar10 = (ulong)puVar8 >> 0x38 & 0xf;
            }
            dVar9 = 80.0;
            if (uVar10 != 0) {
              dVar9 = 113.0;
            }
            goto LAB_1037096b4;
          }
        }
        dVar9 = 80.0;
      }
      else {
        func_0x000107c61170();
        dVar9 = 113.0;
      }
LAB_1037096b4:
      uVar10 = uVar3;
      func_0x000107c3eea0();
      func_0x000107c61180();
      if (uVar10 == 0) {
        func_0x000107c61170(uVar3);
      }
      else {
        uVar6 = 0;
        FUN_103709cd4(0,0x112f8ae70,&PTR_PTR_1126ad4f0);
        uVar4 = uVar10;
        func_0x000107c5fc54(uVar10,uVar6);
        func_0x000107c61170(uVar10);
        if (uVar4 >> 0x3e == 0) {
          uVar10 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar10 = uVar4 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar10 = uVar4;
          }
          func_0x000107c60480();
        }
        func_0x000107c6142c(uVar4);
        func_0x000107c61170(uVar3);
        if (uVar10 != 0) {
          dVar9 = dVar9 + 54.0;
        }
      }
      goto LAB_103709748;
    }
  }
  param_1 = 0;
  dVar9 = 0.0;
LAB_103709748:
  auVar13._8_8_ = dVar9;
  auVar13._0_8_ = param_1;
  return auVar13;
}



/* Entry: 103709780; end: 10370978b;  */

void FUN_103709780(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5a588(lVar5,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = lVar5;
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c3d89c(uVar7);
    func_0x000107c5a050(lVar5);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar3 = puVar2;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar3 + 0x18) = 9;
    *(undefined8 *)(puVar3 + 0x10) = 4;
    lVar1 = lVar5;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar6 = uVar7;
    func_0x000107c4acb0(uVar7);
    func_0x000107c61180();
    lVar4 = lVar1;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar6);
    *(long *)(puVar3 + 0x20) = lVar4;
    lVar1 = lVar5;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar6 = uVar7;
    func_0x000107c5ce8c(uVar7);
    func_0x000107c61180();
    lVar4 = lVar1;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar6);
    *(long *)(puVar3 + 0x28) = lVar4;
    lVar1 = lVar5;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar6 = uVar7;
    func_0x000107c5cbe4(uVar7);
    func_0x000107c61180();
    lVar4 = lVar1;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar6);
    *(long *)(puVar3 + 0x30) = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar6 = uVar7;
    func_0x000107c3ec1c(uVar7);
    func_0x000107c61180();
    lVar1 = lVar5;
    func_0x000107c402a4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar6);
    *(long *)(puVar3 + 0x38) = lVar1;
    uVar6 = 0;
    FUN_103709cd4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c5fc48(puVar3,uVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c3d048(puVar2);
  }
  func_0x000107c61170();
  func_0x000107c56a14(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10370978c; end: 1037097ab;  */

void FUN_10370978c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1037097ac; end: 10370980f;  */

void FUN_1037097ac(long param_1,long param_2)

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



/* Entry: 103709810; end: 10370986f;  */

void FUN_103709810(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103709d3c;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037093e4,lVar1,lVar2);
  return;
}



/* Entry: 103709870; end: 1037098df;  */

void FUN_103709870(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103709d4c;
  plVar5[2] = param_1;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10370948c;
                    /* WARNING: Could not recover jumptable at 0x000103709488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 1037098e0; end: 10370993f;  */

void FUN_1037098e0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103709940;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037093e4,lVar1,lVar2);
  return;
}



/* Entry: 103709940; end: 103709983;  */

void FUN_103709940(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103709980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 103709984; end: 1037099f3;  */

void FUN_103709984(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1037099f4;
  plVar5[2] = param_1;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10370948c;
                    /* WARNING: Could not recover jumptable at 0x000103709488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 1037099f4; end: 103709a2f;  */

void FUN_1037099f4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103709a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103709a30; end: 103709a8f;  */

void FUN_103709a30(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103709d40;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037093e4,lVar1,lVar2);
  return;
}



/* Entry: 103709a90; end: 103709aff;  */

void FUN_103709a90(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103709d50;
  plVar5[2] = param_1;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10370948c;
                    /* WARNING: Could not recover jumptable at 0x000103709488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 103709b00; end: 103709b5f;  */

void FUN_103709b00(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103709d44;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037093e4,lVar1,lVar2);
  return;
}



/* Entry: 103709b60; end: 103709bcf;  */

void FUN_103709b60(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103709d54;
  plVar5[2] = param_1;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10370948c;
                    /* WARNING: Could not recover jumptable at 0x000103709488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 103709bd0; end: 103709c03;  */

void FUN_103709bd0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103709c04; end: 103709c63;  */

void FUN_103709c04(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103709d48;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037093e4,lVar1,lVar2);
  return;
}



/* Entry: 103709c64; end: 103709cd3;  */

void FUN_103709c64(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103709d58;
  plVar5[2] = param_1;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10370948c;
                    /* WARNING: Could not recover jumptable at 0x000103709488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 103709cd4; end: 103709d13;  */

void FUN_103709cd4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103709d14; end: 103709d5f;  */

void FUN_103709d14(long param_1,long param_2)

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



/* Entry: 103709d60; end: 103709e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103709d60(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f8afb0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f8afb0);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    if ((*(byte *)(unaff_x20 + _DAT_112f8af50) & 1) == 0) {
      lVar2 = 0x217;
      if (*(char *)(unaff_x20 + _DAT_112f8af48) != '\0') {
        lVar2 = 0x218;
      }
    }
    else {
      lVar2 = 0x218;
    }
    FUN_1037051e4(lVar2,1);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000100d5b144(uVar4);
  }
  func_0x000100d5b1c4(lVar3);
  return lVar2;
}



/* Entry: 103709e98; end: 103709fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103709e98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puVar7;
  
  lVar2 = _DAT_112f8afd0;
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112f8afd0);
  puVar7 = puVar6;
  if (puVar6 == (undefined *)0x1) {
    if ((*(char *)(unaff_x20 + _DAT_112f8af48) == '\x01') &&
       (*(char *)(unaff_x20 + _DAT_112f8af58) == '\x01')) {
      func_0x000107e48280();
      func_0x000107c61180();
      if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103709fd0);
        (*pcVar3)();
      }
      puVar4 = param_1;
      func_0x000103b6b308();
      uVar5 = *puVar4;
      uVar1 = puVar4[1];
      puVar7 = PTR_PTR_1126ad4f0;
      func_0x000107c610f8();
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c48c94();
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar5);
      uVar5 = 0x29;
      FUN_1037051e4(0x29,3);
      func_0x000107c551e8(puVar7);
      func_0x000107c61170(uVar5);
      uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    else {
      puVar7 = (undefined *)0x0;
      uVar5 = 1;
    }
    *(undefined **)(unaff_x20 + lVar2) = puVar7;
    func_0x000107c61174(puVar7);
    func_0x000100d5b144(uVar5);
  }
  func_0x000100d5b1c4(puVar6);
  return puVar7;
}



/* Entry: 103709fd0; end: 10370aa93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103709fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
             undefined8 param_10)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar18;
  long unaff_x20;
  code *pcVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  long lStack_130;
  code *pcStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_80 [4];
  
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  uStack_a0 = param_3;
  uStack_98 = param_2;
  func_0x000107c614f0();
  lVar8 = _DAT_112f8af78;
  uVar7 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar8) = uVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112f8af80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8af88) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f8af90) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112f8af98) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112f8afb0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8afb8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8afc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8afc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8afd0) = 1;
  lVar8 = 0;
  func_0x0001043a86b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar22 = (undefined1 *)((long)&lStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar9 = *(long *)(param_1 + _DAT_1130746f8);
  lStack_e0 = param_1;
  *puVar22 = *(undefined1 *)(lVar9 + _DAT_1130748a8);
  uVar7 = *(undefined8 *)(lVar9 + _DAT_1130748b0);
  iVar6 = *(int *)(lVar8 + 0x14);
  func_0x000107c61174();
  func_0x000107c61174(uVar7);
  func_0x0001043b0d5c(puVar22 + iVar6);
  iVar6 = *(int *)(lVar8 + 0x18);
  bVar1 = *(long *)(lVar9 + _DAT_1130748b8) == 0;
  if (!bVar1) {
    func_0x000107c61174();
    func_0x0001043b0d5c(puVar22 + iVar6);
  }
  uStack_a8 = param_10;
  lVar10 = 0;
  func_0x0001043aa0ac();
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(puVar22 + iVar6,bVar1,1,lVar10);
  func_0x000107c61170(lVar9);
  lVar9 = unaff_x20 + _DAT_112f8af08;
  FUN_10370d8bc(puVar22,lVar9,&SUB_1043a86b0);
  FUN_10370dca0(uStack_98,unaff_x20 + _DAT_112f8af10);
  FUN_10370dca0(uStack_a0,unaff_x20 + _DAT_112f8af18);
  lVar10 = lStack_b0;
  uVar7 = uStack_b8;
  puVar15 = (undefined8 *)(unaff_x20 + _DAT_112f8af20);
  *puVar15 = uStack_b8;
  puVar15[1] = lStack_b0;
  puVar15[2] = param_6;
  puVar15[3] = param_7;
  uStack_d8 = param_6;
  uStack_d0 = param_7;
  if (lStack_b0 == 0) {
    func_0x000107c61174(param_7);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(param_6);
    pcVar19 = (code *)0x0;
  }
  else {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    func_0x000107c61174(param_7);
    func_0x000107c61174(lVar10);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(param_6);
    func_0x0001000b637c(lVar10);
    uVar7 = 0x112f8b040;
    func_0x0001000285a8(0x112f8b040,&UNK_10dc00158);
    pcVar19 = FUN_10370aa94;
    func_0x0001000bfde0(FUN_10370aa94,0,uVar7);
    func_0x000107c61574(lVar10);
  }
  uVar7 = uStack_a8;
  lStack_c0 = _DAT_112f8af28;
  *(code **)(unaff_x20 + _DAT_112f8af28) = pcVar19;
  *(undefined8 *)(unaff_x20 + _DAT_112f8af30) = param_8;
  *(ulong *)(unaff_x20 + _DAT_112f8af38) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f8af40) = uStack_a8;
  func_0x000107c61174();
  uStack_f8 = param_8;
  func_0x000107c61174();
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(auStack_80);
  uVar7 = auStack_80[0];
  uVar11 = auStack_80[0];
  func_0x000107c5b62c();
  func_0x000107c615e8(uVar7);
  lVar10 = _DAT_112f8af48;
  *(char *)(unaff_x20 + _DAT_112f8af48) = (char)uVar11;
  func_0x0001000d224c(auStack_80);
  uVar7 = auStack_80[0];
  uVar11 = auStack_80[0];
  func_0x000107c5b628();
  func_0x000107c615e8(uVar7);
  lVar20 = _DAT_112f8af50;
  *(char *)(unaff_x20 + _DAT_112f8af50) = (char)uVar11;
  func_0x0001000d224c(auStack_80);
  uVar7 = auStack_80[0];
  func_0x000107c5aa78();
  func_0x000107c615e8(auStack_80[0]);
  *(char *)(unaff_x20 + _DAT_112f8af58) = (char)uVar7;
  *(undefined1 *)(unaff_x20 + _DAT_112f8afa8) = 0;
  lVar9 = lVar9 + *(int *)(lVar8 + 0x14);
  uVar7 = *(undefined8 *)(lVar9 + 8);
  uVar21 = *(undefined8 *)(lVar9 + 0x10);
  uVar11 = *(undefined8 *)(lVar9 + 0x18);
  uVar2 = *(undefined8 *)(lVar9 + 0x20);
  puVar12 = PTR_PTR_1126ad538;
  func_0x000107c610f8(PTR_PTR_1126ad538);
  func_0x000107c61434(uVar21);
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar7,uVar21);
  func_0x000107c6142c(uVar21);
  func_0x000107c5fadc(uVar11,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c48d48(puVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  puVar13 = PTR_PTR_1126ad530;
  func_0x000107c610f8();
  func_0x000107c48e24();
  func_0x000107c61170(puVar12);
  lVar8 = _DAT_112f8af68;
  *(undefined **)(unaff_x20 + _DAT_112f8af68) = puVar13;
  uStack_f0 = param_9;
  func_0x000107c42ea0();
  func_0x000107c61180();
  uVar14 = param_9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_9);
  uStack_100 = uVar14;
  if (uVar14 == 0) {
    uVar5 = 1;
  }
  else {
    func_0x000107c51c00();
    uVar5 = (undefined1)uVar14;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f8afa0) = uVar5;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar8);
  auStack_80[0] = uVar7;
  func_0x0001000285a8(0x112f8b010,&UNK_10dc00110);
  func_0x000107c613fc();
  func_0x000107c61174(uVar7);
  puVar15 = auStack_80;
  func_0x00010042e6a0();
  *(undefined8 **)(unaff_x20 + _DAT_112f8af60) = puVar15;
  lStack_c0 = *(undefined8 *)(unaff_x20 + lStack_c0);
  uVar5 = *(undefined1 *)(unaff_x20 + lVar10);
  uVar3 = *(undefined1 *)(unaff_x20 + lVar20);
  lVar10 = 0;
  FUN_1037134ec();
  func_0x000107c613fc();
  lVar9 = _DAT_112f8b1a8;
  lVar8 = 0x112f8b018;
  func_0x0001000285a8(0x112f8b018,&UNK_10dc002a0);
  lVar23 = *(long *)(lVar8 + -8);
  pcStack_128 = *(code **)(lVar23 + 0x38);
  lStack_130 = lVar8;
  (*pcStack_128)(lVar10 + lVar9,1,1);
  *(undefined8 *)(lVar10 + _DAT_112f8b1b0) = 0;
  *(undefined8 *)(lVar10 + _DAT_112f8b1b8) = 0;
  *(undefined8 *)(lVar10 + _DAT_112f8b1c0) = 1;
  FUN_10370dca0(uStack_98,lVar10 + _DAT_112f8b180);
  FUN_10370dca0(uStack_a0,lVar10 + _DAT_112f8b188);
  uVar7 = uStack_a8;
  *(undefined8 *)(lVar10 + _DAT_112f8b190) = uStack_a8;
  *(undefined1 *)(lVar10 + _DAT_112f8b198) = uVar5;
  *(undefined1 *)(lVar10 + _DAT_112f8b1a0) = uVar3;
  lVar8 = 0x112f8b020;
  func_0x0001000285a8(0x112f8b020,&UNK_10dc00120);
  lStack_c8 = *(long *)(lVar8 + -8);
  lStack_118 = lVar8;
  puStack_110 = puVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = (long)puVar22 - extraout_x8_00;
  lStack_120 = lVar20;
  lStack_108 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = lVar20 - extraout_x8_01;
  lVar8 = 0x112f8b028;
  func_0x0001000285a8(0x112f8b028,&UNK_10dc00128);
  lVar9 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar23 - extraout_x8_02;
  (**(code **)(lVar9 + 0x68))
            (lVar24,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar8);
  iVar6 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar6 == 0) {
    func_0x000107c6157c(lStack_c0);
    func_0x000107c6157c(uVar7);
    FUN_10370d5a8(lVar20,lVar23,lVar24);
  }
  else {
    uVar11 = 0x112f8b038;
    func_0x0001000285a8(0x112f8b038,&UNK_10dc00148);
    func_0x000107c6157c(lStack_c0);
    func_0x000107c6157c(uVar7);
    func_0x000107c5fd10(lVar20,lVar23,uVar11,lVar24,uVar11);
  }
  (**(code **)(lVar9 + 8))(lVar24,lVar8);
  lVar24 = lStack_118;
  (**(code **)(lStack_c8 + 0x10))(lVar10 + _DAT_11380baf0,lVar20,lStack_118);
  lVar8 = 0x112f8b030;
  func_0x0001000285a8(0x112f8b030,&UNK_10dc00130);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lStack_108;
  lVar9 = lStack_130;
  lVar18 = lVar23 - extraout_x8_03;
  (**(code **)(lStack_108 + 0x10))(lVar18,lVar23,lStack_130);
  (*pcStack_128)(lVar18,0,1,lVar9);
  lVar8 = _DAT_112f8b1a8;
  func_0x000107c61428(lVar10 + _DAT_112f8b1a8,auStack_80,0x21,0);
  FUN_10370d7d4(lVar18,lVar10 + lVar8);
  func_0x000107c614a8(auStack_80);
  puVar12 = &UNK_110686e28;
  func_0x000107c613fc(&UNK_110686e28,0x18,7);
  func_0x000107c61644(puVar12 + 0x10,lVar10);
  func_0x000107c5fd1c(FUN_10370d824,puVar12,lVar9);
  lVar8 = lStack_c0;
  FUN_10370fc9c(lStack_c0);
  func_0x000107c61574(lVar8);
  (**(code **)(lVar4 + 8))(lVar23,lVar9);
  (**(code **)(lStack_c8 + 8))(lVar20,lVar24);
  puVar22 = puStack_110;
  *(long *)(unaff_x20 + _DAT_112f8af70) = lVar10;
  puVar16 = &stack0xffffffffffffff70;
  func_0x000107c61154(puVar16,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_10370aac4();
  func_0x00010370ae68();
  puVar12 = &UNK_110686e50;
  func_0x000107c613fc(&UNK_110686e50,0x18,7);
  func_0x000107c61614(puVar12 + 0x10,puVar16);
  *(undefined **)(puVar22 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar7 = 4;
  func_0x0001001ca524(4,3,0x50,4,0,0,&UNK_10dc00140,puVar12);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(uVar7);
  func_0x00010370b1b8();
  uVar14 = uStack_100;
  if (uStack_100 == 0) {
    func_0x000107c61170(lStack_e0);
    func_0x000107c61170(uStack_f8);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(uStack_f0);
    func_0x000107c61574(uStack_a8);
    uVar11 = uStack_d0;
    uVar7 = uStack_d8;
    lVar8 = lStack_b0;
    uVar21 = uStack_b8;
  }
  else {
    uVar17 = uStack_100;
    func_0x000107c51c00();
    uVar2 = uStack_a8;
    lVar8 = lStack_b0;
    uVar21 = uStack_b8;
    uVar11 = uStack_d0;
    uVar7 = uStack_d8;
    if ((uVar17 & 1) == 0) {
      func_0x000107c58dc0(uVar14);
      func_0x000107c61170(uStack_f8);
      func_0x000107c61170(uStack_f0);
      func_0x000107c61574(uVar2);
      func_0x000107c615e8(uVar14);
      func_0x000107c61170(lStack_e0);
      func_0x000107c61170(puVar16);
    }
    else {
      func_0x000107c61170(lStack_e0);
      func_0x000107c61170(uStack_f8);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(uStack_f0);
      func_0x000107c61574(uVar2);
      func_0x000107c615e8(uVar14);
    }
  }
  func_0x000107c61170(uVar21);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x0001000834e4(uStack_a0);
  func_0x0001000834e4(uStack_98);
  return puVar16;
}



/* Entry: 10370aa94; end: 10370aac3;  */

void FUN_10370aa94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10370aac4; end: 10370b9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370aac4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar11;
  ulong uVar12;
  long extraout_x12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long alStack_f0 [2];
  code *apcStack_e0 [5];
  long lStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  lVar6 = 0x112f8b068;
  func_0x0001000285a8(0x112f8b068,&UNK_10dc00178);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)apcStack_e0 - extraout_x8;
  lVar6 = 0x112f8b070;
  func_0x0001000285a8(0x112f8b070,&UNK_10dc00180);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar15 - extraout_x8_00;
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar21 = *(long *)(lVar7 + -8);
  lVar17 = *(long *)(lVar21 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar19 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar16 - extraout_x12;
  if (*(long *)(unaff_x20 + _DAT_112f8af80) == 0) {
    lStack_b8 = lVar7;
    FUN_10370c58c(lVar15);
    lVar7 = 0x112f8b078;
    func_0x0001000285a8(0x112f8b078,&UNK_10dc00188);
    lVar8 = lVar15;
    (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar15,1,lVar7);
    if ((int)lVar8 == 1) {
      func_0x00010370de44(lVar15,0x112f8b068,&UNK_10dc00178);
    }
    else {
      puVar1 = (undefined8 *)(lVar15 + *(int *)(lVar7 + 0x30));
      apcStack_e0[3] = (code *)puVar1[1];
      apcStack_e0[4] = (code *)*puVar1;
      puVar1 = (undefined8 *)(lVar15 + *(int *)(lVar7 + 0x40));
      apcStack_e0[2] = (code *)*puVar1;
      apcStack_e0[1] = (code *)puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar6 + 0x30));
      puVar2 = (undefined8 *)(lVar19 + *(int *)(lVar6 + 0x40));
      pcVar11 = *(code **)(lVar21 + 0x20);
      apcStack_e0[0] = pcVar11;
      (*pcVar11)(lVar19,lVar15,lStack_b8);
      *puVar1 = apcStack_e0[4];
      puVar1[1] = apcStack_e0[3];
      *puVar2 = apcStack_e0[2];
      puVar2[1] = apcStack_e0[1];
      lVar7 = lStack_b8;
      puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar6 + 0x30));
      apcStack_e0[3] = (code *)puVar1[1];
      apcStack_e0[4] = (code *)*puVar1;
      puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar6 + 0x40));
      apcStack_e0[2] = (code *)*puVar1;
      apcStack_e0[1] = (code *)puVar1[1];
      (*pcVar11)(lVar13,lVar19,lStack_b8);
      uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f8af30) + _DAT_11303ff30);
      func_0x000107c6157c(uVar14);
      func_0x0001000d224c(auStack_88);
      func_0x000107c61574(uVar14);
      puVar9 = &UNK_110686e50;
      func_0x000107c613fc(&UNK_110686e50,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      FUN_10370dca0(auStack_88,auStack_b0);
      (**(code **)(lVar21 + 0x10))(lVar16,lVar13,lVar7);
      uVar12 = (ulong)*(byte *)(lVar21 + 0x50);
      uVar20 = uVar12 + 0x38 & (uVar12 ^ 0xffffffffffffffff);
      uVar18 = lVar17 + uVar20 + 7 & 0xfffffffffffffff8;
      puVar10 = &UNK_110686e78;
      func_0x000107c613fc(&UNK_110686e78,uVar18 + 0x28,uVar12 | 7);
      func_0x000101209b84(auStack_b0,puVar10 + 0x10);
      (*apcStack_e0[0])(puVar10 + uVar20,lVar16,lVar7);
      pcVar5 = apcStack_e0[4];
      pcVar4 = apcStack_e0[3];
      pcVar3 = apcStack_e0[2];
      pcVar11 = apcStack_e0[1];
      *(code **)(puVar10 + uVar18) = apcStack_e0[4];
      *(code **)((long)(puVar10 + uVar18) + 8) = apcStack_e0[3];
      *(code **)(puVar10 + uVar18 + 0x10) = apcStack_e0[2];
      *(code **)((long)(puVar10 + uVar18 + 0x10) + 8) = apcStack_e0[1];
      *(undefined **)(puVar10 + uVar18 + 0x20) = puVar9;
      func_0x000100de78a0(apcStack_e0[4],apcStack_e0[3]);
      func_0x000100de78a0(pcVar3,pcVar11);
      *(undefined **)(lVar13 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar14 = 4;
      func_0x0001001ca524(4,3,0x50,4,0,0,&UNK_10dc00198,puVar10);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(uVar14);
      func_0x0001000b44c0(pcVar3,pcVar11);
      func_0x0001000b44c0(pcVar5,pcVar4);
      func_0x0001000834e4(auStack_88);
      (**(code **)(lVar21 + 8))(lVar13,lVar7);
    }
  }
  return;
}



/* Entry: 10370b9e8; end: 10370ba47; -[_TtC44MusicTopicViewerHeaderProviderImplementation43MusicTopicViewerHeaderCellViewModelProvider init] */

void FUN_10370b9e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerHeaderProviderImplementation.MusicTopicViewerHeaderCellViewModelProvider"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10370ba14);
  (*pcVar1)();
}



/* Entry: 10370ba48; end: 10370bbbf; -[_TtC44MusicTopicViewerHeaderProviderImplementation43MusicTopicViewerHeaderCellViewModelProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010370baa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370bab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370bb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370bb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370bb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370bb90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010370bb74) */
/* WARNING: Removing unreachable block (ram,0x00010370bb54) */
/* WARNING: Removing unreachable block (ram,0x00010370bb24) */
/* WARNING: Removing unreachable block (ram,0x00010370bae4) */
/* WARNING: Removing unreachable block (ram,0x00010370babc) */
/* WARNING: Removing unreachable block (ram,0x00010370baac) */
/* WARNING: Removing unreachable block (ram,0x00010370bb94) */
/* WARNING: Removing unreachable block (ram,0x000100d5b144) */
/* WARNING: Removing unreachable block (ram,0x000100d5b150) */
/* WARNING: Removing unreachable block (ram,0x000100d5b14c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370ba48(long param_1)

{
  func_0x00010370d900(param_1 + _DAT_112f8af08,&SUB_1043a86b0);
  func_0x0001000834e4(param_1 + _DAT_112f8af10);
  func_0x0001000834e4(param_1 + _DAT_112f8af18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8af20));
  return;
}



/* Entry: 10370bbc0; end: 10370bbc7;  */

void FUN_10370bbc0(void)

{
  if (lRam0000000112f8b000 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e777308);
  return;
}



/* Entry: 10370bbc8; end: 10370bbff;  */

void FUN_10370bbc8(undefined8 param_1)

{
  if (lRam0000000112f8b000 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e777308);
  return;
}



/* Entry: 10370bc00; end: 10370bcdf;  */

void FUN_10370bc00(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001043a86b0();
  if (param_2 < 0x40) {
    lStack_f0 = *(long *)(lVar1 + -8) + 0x40;
    puStack_e8 = &UNK_10dc00080;
    puStack_e0 = &UNK_10dc00080;
    puStack_d8 = &UNK_10dc00098;
    puStack_c8 = PTR___sBOWV_11034d658 + 0x40;
    puStack_d0 = &UNK_10dc000b0;
    puStack_b8 = PTR___sBoWV_11034d678 + 0x40;
    puStack_b0 = &UNK_10dc000c8;
    puStack_a8 = &UNK_10dc000c8;
    puStack_a0 = &UNK_10dc000c8;
    puStack_78 = &UNK_10dc000b0;
    puStack_70 = &UNK_10dc000b0;
    puStack_68 = &UNK_10dc000e0;
    puStack_60 = &UNK_10dc000e0;
    puStack_58 = &UNK_10dc000c8;
    puStack_50 = &UNK_10dc000c8;
    puStack_48 = &UNK_10dc000f8;
    puStack_40 = &UNK_10dc000f8;
    puStack_38 = &UNK_10dc000b0;
    puStack_30 = &UNK_10dc000b0;
    puStack_28 = &UNK_10dc000f8;
    puStack_c0 = puStack_c8;
    puStack_98 = puStack_b8;
    puStack_90 = puStack_c8;
    puStack_88 = puStack_b8;
    puStack_80 = puStack_b8;
    func_0x000107c61630(param_1,0x100,0x1a,&lStack_f0,param_1 + 0x50);
  }
  return;
}



/* Entry: 10370bce0; end: 10370bd53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370bce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *param_2;
  lVar2 = 0;
  FUN_103707db0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8ae78) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10370bd54; end: 10370be57;  */

void FUN_10370bd54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  lVar6 = 0x112f8b048;
  func_0x0001000285a8(0x112f8b048,&UNK_10dc00168);
  *(long *)(unaff_x22 + 0x50) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  lVar6 = 0x112f8b020;
  func_0x0001000285a8(0x112f8b020,&UNK_10dc00120);
  *(long *)(unaff_x22 + 0x68) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
  uVar5 = 0x112d45220;
  FUN_10370ddb4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10370be58,uVar4,uVar5);
  return;
}



/* Entry: 10370be58; end: 10370bfbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370be58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar3 = *(long *)(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar9 = *(long *)(unaff_x22 + 0x48);
    lVar8 = *(long *)(lVar6 + _DAT_112f8af70);
    func_0x000107c6157c(lVar8);
    func_0x000107c61170(lVar6);
    (**(code **)(lVar3 + 0x10))(uVar1,lVar8 + _DAT_11380baf0,uVar5);
    func_0x000107c61574(lVar8);
    (**(code **)(lVar3 + 0x20))(uVar2,uVar1,uVar5);
    func_0x000107c5fd34(uVar7,uVar5);
    func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x28,0,0);
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10370bfbc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar4,unaff_x22 + 0x40,*(undefined8 *)(unaff_x22 + 0x50));
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010370bfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10370bfbc; end: 10370bfff;  */

void FUN_10370bfbc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10370c000,*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 10370c000; end: 10370c16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370c000(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)(unaff_x22 + 0x40);
  if (lVar7 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar3 = *(long *)(unaff_x22 + 0x70);
    lVar7 = *(long *)(unaff_x22 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
    (**(code **)(lVar7 + 8))(uVar1,uVar8);
    pcVar5 = *(code **)(lVar3 + 8);
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0x48) + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      uVar9 = *(undefined8 *)(lVar3 + _DAT_112f8afc8);
      *(long *)(lVar3 + _DAT_112f8afc8) = lVar7;
      func_0x000107c61174(lVar7);
      func_0x000107c61170(uVar9);
      func_0x00010370b1b8();
      func_0x000107c61170(lVar3);
      func_0x000100d5b144(lVar7);
      plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xa8) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_10370c16c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                (plVar4,(long *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x50));
      return;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar2 = *(long *)(unaff_x22 + 0x70);
    lVar3 = *(long *)(unaff_x22 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000100d5b144(lVar7);
    (**(code **)(lVar3 + 8))(uVar1,uVar8);
    pcVar5 = *(code **)(lVar2 + 8);
  }
  (*pcVar5)(uVar9,uVar6);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010370c168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10370c16c; end: 10370c1af;  */

void FUN_10370c16c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10370de8c,*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 10370c1b0; end: 10370c43b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370c1b0(ulong *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar7 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar4 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f8af88;
  if (lVar4 != 0) {
    func_0x000107c61428(lVar4 + _DAT_112f8af88,auStack_70,1,0);
    uVar8 = *(undefined8 *)(lVar4 + lVar1);
    *(ulong *)(lVar4 + lVar1) = uVar7;
    func_0x000107c61174(uVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  lVar4 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) goto LAB_10370c370;
  if (uVar7 == 0) {
    bVar3 = false;
  }
  else {
    func_0x000107c3e1a8();
    func_0x000107c61180();
    if (uVar7 != 0) {
      uVar5 = 0;
      FUN_10370dc58(0,0x112dc2b58,&PTR_PTR_1126a79c0);
      uVar6 = uVar7;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar7);
      if (uVar6 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar6 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar6) {
          uVar7 = uVar6;
        }
        func_0x000107c60480();
      }
      if (uVar7 != 0) {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10370c43c);
            (*pcVar2)();
          }
          uVar7 = *(ulong *)(uVar6 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar7 = 0;
          uVar5 = uVar6;
          func_0x00010370d9c0();
        }
        func_0x000107c6142c(uVar6);
        uVar6 = uVar7;
        func_0x000107c4f60c();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        uVar7 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(uVar5);
        uVar7 = uVar7 & 0xffffffffffff;
        if ((uVar5 & 0x2000000000000000) != 0) {
          uVar7 = uVar5 >> 0x38 & 0xf;
        }
        bVar3 = uVar7 != 0;
        goto LAB_10370c360;
      }
      func_0x000107c6142c(uVar6);
    }
    bVar3 = false;
  }
LAB_10370c360:
  *(bool *)(lVar4 + _DAT_112f8afa8) = bVar3;
  func_0x000107c61170();
LAB_10370c370:
  func_0x000107c61428(param_2 + 0x10,auStack_a0,0,0);
  lVar4 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_10370aac4();
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_b8,0,0);
  lVar4 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if ((*(byte *)(lVar4 + _DAT_112f8af48) & 1) == 0) {
      FUN_10370d3fc();
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_d0,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x00010370b1b8();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10370c43c; end: 10370c58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370c43c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112f8af90) = uVar1;
    func_0x000107c61170();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x00010370b1b8();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10370c58c; end: 10370cadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370c58c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar15 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  lVar17 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12;
  lVar8 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_00;
  lVar15 = unaff_x20 + _DAT_112f8af08;
  lVar9 = 0;
  func_0x0001043a86b0();
  lVar15 = lVar15 + *(int *)(lVar9 + 0x14);
  lVar10 = 0;
  func_0x0001043aa0ac();
  FUN_10370ddfc(lVar15 + *(int *)(lVar10 + 0x1c),lVar17,0x112d36580,&UNK_10d9016d0);
  pcVar14 = *(code **)(lVar16 + 0x30);
  lVar9 = lVar17;
  (*pcVar14)(lVar17,1,lVar8);
  if ((int)lVar9 != 1) {
    pcVar14 = *(code **)(lVar16 + 0x20);
    (*pcVar14)(lVar13,lVar17,lVar8);
    lVar9 = 0x112f8b078;
    func_0x0001000285a8(0x112f8b078,&UNK_10dc00188);
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x30));
    puVar2 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x40));
    (*pcVar14)(param_1,lVar13,lVar8);
    puVar3 = (undefined8 *)(lVar15 + *(int *)(lVar10 + 0x20));
    uVar12 = *puVar3;
    uVar6 = puVar3[1];
    *puVar1 = uVar12;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)(lVar15 + *(int *)(lVar10 + 0x24));
    uVar5 = *puVar1;
    uVar7 = puVar1[1];
    *puVar2 = uVar5;
    puVar2[1] = uVar7;
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(param_1,0,1,lVar9);
    func_0x000100de78a0(uVar12,uVar6);
    func_0x000100de78a0(uVar5,uVar7);
    return;
  }
  func_0x00010370de44(lVar17,0x112d36580,&UNK_10d9016d0);
  lVar15 = _DAT_112f8af88;
  puVar18 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112f8af88,puVar18,0,0);
  lVar9 = *(long *)(unaff_x20 + lVar15);
  if (lVar9 != 0) {
    func_0x000107c5cd58();
    func_0x000107c61180();
    lVar10 = lVar9;
    func_0x000107c3dab0();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar10 != 0) {
      lVar9 = lVar10;
      func_0x000107c5d7e8(lVar10);
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      lVar10 = lVar9;
      func_0x000107c5faec(lVar9);
      func_0x000107c61170(lVar9);
      lVar9 = lStack_a0;
      func_0x000107c5edd0(lStack_a0,lVar10,puVar18);
      func_0x000107c6142c(puVar18);
      lVar17 = lVar9;
      (*pcVar14)(lVar9,1,lVar8);
      lVar10 = lStack_98;
      if ((int)lVar17 != 1) {
        (**(code **)(lVar16 + 0x20))(lStack_98,lVar9,lVar8);
        lVar9 = 0x112f8b078;
        func_0x0001000285a8(0x112f8b078,&UNK_10dc00188);
        plVar4 = (long *)(param_1 + *(int *)(lVar9 + 0x30));
        (**(code **)(lVar16 + 0x10))(param_1,lVar10,lVar8);
        lVar17 = *(long *)(unaff_x20 + lVar15);
        if (lVar17 == 0) {
LAB_10370c990:
          lVar13 = 0;
LAB_10370c994:
          lVar10 = -0x1000000000000000;
        }
        else {
          func_0x000107c5cd58();
          func_0x000107c61180();
          lVar13 = lVar17;
          func_0x000107c3dab0();
          func_0x000107c61180();
          func_0x000107c61170(lVar17);
          if (lVar13 == 0) goto LAB_10370c994;
          lVar17 = lVar13;
          func_0x000107c427c0();
          func_0x000107c61180();
          func_0x000107c61170(lVar13);
          if (lVar17 == 0) goto LAB_10370c990;
          lVar11 = lVar17;
          func_0x000107c4a8c4();
          func_0x000107c61180();
          func_0x000107c61170(lVar17);
          lVar13 = lVar11;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar11);
        }
        *plVar4 = lVar13;
        plVar4[1] = lVar10;
        plVar4 = (long *)(param_1 + *(int *)(lVar9 + 0x40));
        puVar18 = auStack_90;
        func_0x000107c61428(unaff_x20 + lVar15,puVar18,0x20,0);
        lVar15 = *(long *)(unaff_x20 + lVar15);
        if (lVar15 == 0) {
          (**(code **)(lVar16 + 8))(lStack_98,lVar8);
          func_0x000107c614a8(auStack_90);
          puVar18 = (undefined1 *)0xf000000000000000;
        }
        else {
          func_0x000107c614a8(auStack_90);
          func_0x000107c5cd58();
          func_0x000107c61180();
          lVar10 = lVar15;
          func_0x000107c3dab0();
          func_0x000107c61180();
          func_0x000107c61170(lVar15);
          if (lVar10 == 0) {
            (**(code **)(lVar16 + 8))(lStack_98,lVar8);
            puVar18 = (undefined1 *)0xf000000000000000;
            lVar15 = lVar10;
          }
          else {
            lVar15 = lVar10;
            func_0x000107c427c0();
            func_0x000107c61180();
            func_0x000107c61170(lVar10);
            if (lVar15 == 0) {
              (**(code **)(lVar16 + 8))(lStack_98,lVar8);
              puVar18 = (undefined1 *)0xf000000000000000;
              lVar15 = 0;
            }
            else {
              lVar10 = lVar15;
              func_0x000107c4a804();
              func_0x000107c61180();
              func_0x000107c61170(lVar15);
              if (lVar10 == 0) {
                lVar15 = 0;
                puVar18 = (undefined1 *)0xf000000000000000;
              }
              else {
                lVar15 = lVar10;
                func_0x000107c5ee30();
                func_0x000107c61170(lVar10);
              }
              (**(code **)(lVar16 + 8))(lStack_98,lVar8);
            }
          }
        }
        *plVar4 = lVar15;
        plVar4[1] = (long)puVar18;
        pcVar14 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
        uVar12 = 0;
        goto LAB_10370c7e4;
      }
      func_0x00010370de44(lVar9,0x112d36580,&UNK_10d9016d0);
    }
  }
  lVar9 = 0x112f8b078;
  func_0x0001000285a8(0x112f8b078,&UNK_10dc00188);
  pcVar14 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  uVar12 = 1;
LAB_10370c7e4:
  (*pcVar14)(param_1,uVar12,1,lVar9);
  return;
}



/* Entry: 10370cae0; end: 10370cc43;  */

void FUN_10370cae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_8;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  lVar2 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  lVar2 = 0x112f8b068;
  func_0x0001000285a8(0x112f8b068,&UNK_10dc00178);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  uVar5 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar6 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar6;
  uVar6 = 0x112d45220;
  FUN_10370ddb4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10370cc44,uVar5,uVar6);
  return;
}



/* Entry: 10370cc44; end: 10370cccb;  */

void FUN_10370cc44(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10370cccc;
                    /* WARNING: Could not recover jumptable at 0x00010370ccc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
             *(undefined8 *)(unaff_x22 + 0x50),uVar2,lVar3);
  return;
}



/* Entry: 10370cccc; end: 10370cd17;  */

void FUN_10370cccc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 200) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10370cd18,*(undefined8 *)(lVar1 + 0xb0),*(undefined8 *)(lVar1 + 0xb8));
  return;
}



/* Entry: 10370cd18; end: 10370d183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370cd18(void)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcVar20;
  
  lVar10 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x10,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f8af80;
  lVar4 = *(long *)(unaff_x22 + 200);
  lVar5 = lVar4;
  if ((lVar10 == 0) || (lVar5 = lVar10, lVar4 == 0)) goto LAB_10370d11c;
  if (*(long *)(lVar10 + _DAT_112f8af80) != 0) {
    func_0x000107c61170();
    goto LAB_10370d11c;
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61174();
  FUN_10370c58c(uVar13);
  lVar5 = 0x112f8b078;
  func_0x0001000285a8(0x112f8b078,&UNK_10dc00188);
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(uVar13,1,lVar5);
  bVar3 = (int)uVar13 != 1;
  if (bVar3) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar15 = *(long *)(unaff_x22 + 0x88);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar6 = *(long *)(unaff_x22 + 0x68);
    puVar1 = (undefined8 *)(lVar15 + *(int *)(lVar5 + 0x30));
    func_0x0001000b44c0(*puVar1,puVar1[1]);
    puVar1 = (undefined8 *)(lVar15 + *(int *)(lVar5 + 0x40));
    func_0x0001000b44c0(*puVar1,puVar1[1]);
    (**(code **)(lVar6 + 0x20))(uVar16,lVar15,uVar13);
  }
  else {
    func_0x00010370de44(*(undefined8 *)(unaff_x22 + 0x88),0x112f8b068,&UNK_10dc00178);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar6 = *(long *)(unaff_x22 + 0x78);
  lVar5 = *(long *)(unaff_x22 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar15 = *(long *)(unaff_x22 + 0x68);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x30);
  pcVar20 = *(code **)(lVar15 + 0x38);
  (*pcVar20)(uVar7,!bVar3,1,uVar16);
  (**(code **)(lVar15 + 0x10))(uVar13,uVar19,uVar16);
  (*pcVar20)(uVar13,0,1,uVar16);
  lVar12 = (long)*(int *)(lVar6 + 0x30);
  func_0x00010370ddfc(uVar7,lVar5,0x112d36580,&UNK_10d9016d0);
  func_0x00010370ddfc(uVar13,lVar5 + lVar12,0x112d36580,&UNK_10d9016d0);
  pcVar20 = *(code **)(lVar15 + 0x30);
  lVar6 = lVar5;
  (*pcVar20)(lVar5,1,uVar16);
  if ((int)lVar6 == 1) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x00010370de44(*(undefined8 *)(unaff_x22 + 0x98),0x112d36580,&UNK_10d9016d0);
    func_0x00010370de44(uVar13,0x112d36580,&UNK_10d9016d0);
    lVar5 = lVar5 + lVar12;
    (*pcVar20)(lVar5,1,uVar16);
    if ((int)lVar5 == 1) {
      func_0x00010370de44(*(undefined8 *)(unaff_x22 + 0x80),0x112d36580,&UNK_10d9016d0);
LAB_10370d0a8:
      puVar9 = PTR_PTR_1126b27a8;
      func_0x000107c61168();
      func_0x000107c45160();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = puVar9;
        func_0x000107c30e3c();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
      }
      uVar13 = *(undefined8 *)(lVar10 + lVar2);
      *(undefined **)(lVar10 + lVar2) = puVar11;
      func_0x000107c61170(uVar13);
      func_0x00010370b1b8();
    }
    else {
LAB_10370cfd0:
      func_0x00010370de44(*(undefined8 *)(unaff_x22 + 0x80),0x112d7e680,&UNK_10d95e350);
    }
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x00010370ddfc(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x90),
                        0x112d36580,&UNK_10d9016d0);
    lVar6 = lVar5 + lVar12;
    (*pcVar20)(lVar6,1,uVar13);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar14 = *(ulong *)(unaff_x22 + 0x90);
    if ((int)lVar6 == 1) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
      lVar2 = *(long *)(unaff_x22 + 0x68);
      func_0x00010370de44(uVar13,0x112d36580,&UNK_10d9016d0);
      func_0x00010370de44(uVar16,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar2 + 8))(uVar14,uVar7);
      goto LAB_10370cfd0;
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar6 = *(long *)(unaff_x22 + 0x68);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(lVar6 + 0x20))(uVar19,lVar5 + lVar12,uVar18);
    uVar7 = 0x112d7e688;
    FUN_10370ddb4(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVSQAAMc_1103509a8);
    uVar8 = uVar14;
    func_0x000107c5fab8(uVar14,uVar19,uVar18,uVar7);
    pcVar20 = *(code **)(lVar6 + 8);
    (*pcVar20)(uVar19,uVar18);
    func_0x00010370de44(uVar13,0x112d36580,&UNK_10d9016d0);
    func_0x00010370de44(uVar16,0x112d36580,&UNK_10d9016d0);
    (*pcVar20)(uVar14,uVar18);
    func_0x00010370de44(uVar17,0x112d36580,&UNK_10d9016d0);
    if ((uVar8 & 1) != 0) goto LAB_10370d0a8;
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar10);
  lVar5 = lVar4;
LAB_10370d11c:
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61170(lVar5);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010370d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10370d184; end: 10370d3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10370d184(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_a0 [32];
  long alStack_80 [2];
  undefined1 auStack_70 [32];
  long alStack_50 [2];
  
  puVar8 = auStack_a0;
  if (*(char *)(unaff_x20 + _DAT_112f8af48) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f8afc8);
    alStack_80[0] = lVar2;
    func_0x000107c61174();
    FUN_103709e98();
    lVar9 = 0;
    alStack_80[1] = lVar2;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lVar9 != 2) {
      lVar2 = alStack_80[lVar9];
      lVar9 = lVar9 + 1;
      if (lVar2 != 0) {
        func_0x000107c61174();
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_1037074cc(0,puVar3 + 1,1,puVar5);
        }
        uVar7 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar7 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
          FUN_1037074cc(puVar5,uVar1 + 1,1,puVar4);
          uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
        *(long *)(uVar7 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
  }
  else {
    puVar8 = auStack_70;
    lVar9 = *(long *)(unaff_x20 + _DAT_112f8afc0);
    alStack_50[1] = *(undefined8 *)(unaff_x20 + _DAT_112f8afc8);
    alStack_50[0] = lVar9;
    func_0x000107c61174();
    func_0x000107c61174(lVar9);
    lVar9 = 0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lVar9 != 2) {
      lVar2 = alStack_50[lVar9];
      lVar9 = lVar9 + 1;
      if (lVar2 != 0) {
        func_0x000107c61174();
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_1037074cc(0,puVar3 + 1,1,puVar5);
        }
        uVar7 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar7 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
          FUN_1037074cc(puVar5,uVar1 + 1,1,puVar4);
          uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
        *(long *)(uVar7 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
  }
  uVar6 = 0x112f8b038;
  func_0x0001000285a8(0x112f8b038,&UNK_10dc00148);
  func_0x000107c61408(puVar8 + 0x20,2,uVar6);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar4 = puVar5;
    }
    func_0x000107c60480();
  }
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c6142c(puVar5);
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}



/* Entry: 10370d3fc; end: 10370d5a7;  */

/* WARNING: Possible PIC construction at 0x00010370d450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370d494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370d560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370d530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370d584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010370d534) */
/* WARNING: Removing unreachable block (ram,0x00010370d56c) */
/* WARNING: Removing unreachable block (ram,0x00010370d540) */
/* WARNING: Removing unreachable block (ram,0x00010370d570) */
/* WARNING: Removing unreachable block (ram,0x00010370d564) */
/* WARNING: Removing unreachable block (ram,0x00010370d498) */
/* WARNING: Removing unreachable block (ram,0x00010370d548) */
/* WARNING: Removing unreachable block (ram,0x00010370d49c) */
/* WARNING: Removing unreachable block (ram,0x00010370d54c) */
/* WARNING: Removing unreachable block (ram,0x00010370d454) */
/* WARNING: Removing unreachable block (ram,0x00010370d4c8) */
/* WARNING: Removing unreachable block (ram,0x00010370d464) */
/* WARNING: Removing unreachable block (ram,0x00010370d588) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370d3fc(long param_1)

{
  long unaff_x20;
  
  if (*(byte *)(unaff_x20 + _DAT_112f8af98) != 2) {
    if ((*(byte *)(unaff_x20 + _DAT_112f8af98) & 1) == 0) {
      func_0x000107e482c8();
      func_0x000107c61180();
    }
    else {
      func_0x000107e482e0();
      func_0x000107c61180();
    }
    if (param_1 != 0) {
      func_0x000107c5faec();
      goto code_r0x000107c61170;
    }
  }
  param_1 = *(long *)(unaff_x20 + _DAT_112f8afc0);
  *(undefined8 *)(unaff_x20 + _DAT_112f8afc0) = 0;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10370d5a8; end: 10370d7d3;  */

void FUN_10370d5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_70;
  
  lVar2 = 0x112f8b028;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112f8b028,&UNK_10dc00128);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112f8b020;
  func_0x0001000285a8(0x112f8b020,&UNK_10dc00120);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  lVar4 = 0x112f8b030;
  func_0x0001000285a8(0x112f8b030,&UNK_10dc00130);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  lVar4 = 0x112f8b018;
  func_0x0001000285a8(0x112f8b018,&UNK_10dc002a0);
  lVar5 = *(long *)(lVar4 + -8);
  (**(code **)(lVar5 + 0x38))(lVar8,1,1,lVar4);
  (**(code **)(lVar9 + 0x10))(auStack_a0 + -extraout_x8,uStack_90,lVar2);
  lStack_70 = lVar8;
  func_0x0001000285a8(0x112f8b038,&UNK_10dc00148);
  func_0x000107c5fd48(lVar6);
  (**(code **)(lVar10 + 0x10))(uStack_88,lVar6,lVar3);
  FUN_10370ddfc(lVar8,lVar7,0x112f8b030,&UNK_10dc00130);
  lVar2 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar10 + 8))(lVar6,lVar3);
    (**(code **)(lVar5 + 0x20))(uStack_98,lVar7,lVar4);
    func_0x00010370de44(lVar8,0x112f8b030,&UNK_10dc00130);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10370d7d4);
  (*pcVar1)();
}



/* Entry: 10370d7d4; end: 10370d823;  */

undefined8 FUN_10370d7d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f8b030;
  func_0x0001000285a8(0x112f8b030,&UNK_10dc00130);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10370d824; end: 10370d82b;  */

void FUN_10370d824(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c6157c();
    uVar2 = 4;
    func_0x0001001ca524(4,3,0x50,4,0,0,&UNK_10dc00348,lVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61578(lVar1,2);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10370d82c; end: 10370d87f;  */

void FUN_10370d82c(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10370d880;
  plVar5[9] = unaff_x20;
  lVar6 = 0x112f8b048;
  func_0x0001000285a8(0x112f8b048,&UNK_10dc00168);
  plVar5[10] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xc] = uVar2;
  lVar6 = 0x112f8b020;
  func_0x0001000285a8(0x112f8b020,&UNK_10dc00120);
  plVar5[0xd] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0xe] = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xf] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x10] = uVar2;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar6 = lVar4;
  func_0x000107c5fce8();
  plVar5[0x11] = lVar6;
  lVar6 = 0x112d45220;
  FUN_10370ddb4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar5[0x12] = lVar4;
  plVar5[0x13] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10370be58,lVar4,lVar6);
  return;
}



/* Entry: 10370d880; end: 10370d8bb;  */

void FUN_10370d880(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010370d8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10370d8bc; end: 10370d93b;  */

undefined8 FUN_10370d8bc(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10370d93c; end: 10370db83;  */

void FUN_10370d93c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010370de44(param_2,0x112f8b030,&UNK_10dc00130);
  lVar1 = 0x112f8b018;
  func_0x0001000285a8(0x112f8b018,&UNK_10dc002a0);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010370d9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,lVar1);
  return;
}



/* Entry: 10370db84; end: 10370db93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370db84(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112f8af98) = uVar1;
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + _DAT_112f8af48) & 1) == 0) {
      FUN_10370d3fc();
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x00010370b1b8();
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10370db94; end: 10370dc03;  */

void FUN_10370db94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f8b050 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f8b040;
  func_0x00010002969c(0x112f8b040,&UNK_10dc00158);
  uVar2 = uVar1;
  FUN_10370dc04();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f8b050 = puVar3;
  return;
}



/* Entry: 10370dc04; end: 10370dc57;  */

void FUN_10370dc04(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f8b058 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10370dc58(0xff,0x112f8b060,&PTR_PTR_1126b2ee8);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112f8b058 = puVar2;
  return;
}



/* Entry: 10370dc58; end: 10370dc97;  */

void FUN_10370dc58(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10370dc98; end: 10370dc9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370dc98(ulong *param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar7 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f8af88;
  if (lVar4 != 0) {
    func_0x000107c61428(lVar4 + _DAT_112f8af88,auStack_70,1,0);
    uVar8 = *(undefined8 *)(lVar4 + lVar1);
    *(ulong *)(lVar4 + lVar1) = uVar7;
    func_0x000107c61174(uVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) goto LAB_10370c370;
  if (uVar7 == 0) {
    bVar3 = false;
  }
  else {
    func_0x000107c3e1a8();
    func_0x000107c61180();
    if (uVar7 != 0) {
      uVar5 = 0;
      FUN_10370dc58(0,0x112dc2b58,&PTR_PTR_1126a79c0);
      uVar6 = uVar7;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar7);
      if (uVar6 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar6 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar6) {
          uVar7 = uVar6;
        }
        func_0x000107c60480();
      }
      if (uVar7 != 0) {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10370c43c);
            (*pcVar2)();
          }
          uVar7 = *(ulong *)(uVar6 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar7 = 0;
          uVar5 = uVar6;
          func_0x00010370d9c0();
        }
        func_0x000107c6142c(uVar6);
        uVar6 = uVar7;
        func_0x000107c4f60c();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        uVar7 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(uVar5);
        uVar7 = uVar7 & 0xffffffffffff;
        if ((uVar5 & 0x2000000000000000) != 0) {
          uVar7 = uVar5 >> 0x38 & 0xf;
        }
        bVar3 = uVar7 != 0;
        goto LAB_10370c360;
      }
      func_0x000107c6142c(uVar6);
    }
    bVar3 = false;
  }
LAB_10370c360:
  *(bool *)(lVar4 + _DAT_112f8afa8) = bVar3;
  func_0x000107c61170();
LAB_10370c370:
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a0,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_10370aac4();
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_b8,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if ((*(byte *)(lVar4 + _DAT_112f8af48) & 1) == 0) {
      FUN_10370d3fc();
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_d0,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x00010370b1b8();
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 10370dca0; end: 10370dce3;  */

long FUN_10370dca0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10370dce4; end: 10370ddb3;  */

void FUN_10370dce4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  ulong uVar9;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar9 = uVar7 + 0x38 & (uVar7 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  lVar5 = *(long *)(unaff_x20 + uVar7);
  lVar1 = ((long *)(unaff_x20 + uVar7))[1];
  plVar6 = (long *)(unaff_x20 + uVar7 + 0x10);
  lVar4 = *plVar6;
  lVar2 = plVar6[1];
  lVar8 = *(long *)(unaff_x20 + (uVar7 + 0x27 & 0xffffffffffffff8));
  plVar6 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x10370de90;
  plVar6[10] = lVar2;
  plVar6[0xb] = lVar8;
  plVar6[8] = lVar1;
  plVar6[9] = lVar4;
  plVar6[6] = unaff_x20 + uVar9;
  plVar6[7] = lVar5;
  plVar6[5] = unaff_x20 + 0x10;
  lVar5 = 0;
  func_0x000107c5ede0();
  plVar6[0xc] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar6[0xd] = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xe] = uVar7;
  lVar5 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  plVar6[0xf] = lVar5;
  uVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x10] = uVar7;
  lVar5 = 0x112f8b068;
  func_0x0001000285a8(0x112f8b068,&UNK_10dc00178);
  uVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x11] = uVar7;
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar9 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x12] = uVar9;
  uVar9 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x13] = uVar9;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x14] = uVar7;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar6[0x15] = lVar5;
  lVar5 = 0x112d45220;
  FUN_10370ddb4(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar6[0x16] = lVar4;
  plVar6[0x17] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10370cc44,lVar4,lVar5);
  return;
}



/* Entry: 10370ddb4; end: 10370ddf3;  */

void FUN_10370ddb4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10370ddf4; end: 10370ddfb;  */

void FUN_10370ddf4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010370de44(uVar2,0x112f8b030,&UNK_10dc00130);
  lVar1 = 0x112f8b018;
  func_0x0001000285a8(0x112f8b018,&UNK_10dc002a0);
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x10))(uVar2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010370d9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(uVar2,0,1,lVar1);
  return;
}



/* Entry: 10370ddfc; end: 10370de83;  */

undefined8 FUN_10370ddfc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10370de84; end: 10370de93;  */

void FUN_10370de84(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10370de94; end: 10370df7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370de94(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  lVar1 = _DAT_112f8b080;
  func_0x000107c61428(unaff_x20 + _DAT_112f8b080,auStack_70,0,0);
  func_0x00010370ec08(unaff_x20 + lVar1,auStack_98,0x112eca730,&UNK_10dc001e0);
  if (lStack_80 == 0) {
    func_0x00010370ebc0(auStack_98);
    func_0x000103a83db8(param_1,4,3,0x50);
    FUN_10370ead0(param_1,auStack_58);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_98,0x21,0);
    func_0x0001028e6278(auStack_58,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_98);
  }
  else {
    FUN_10370ec50(auStack_98,auStack_58);
    FUN_10370ec50(auStack_58,param_1);
  }
  return;
}



/* Entry: 10370df80; end: 10370e17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10370df80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar2 = auStack_70;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8b080);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8b088) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8b090) = param_2;
  FUN_10370ead0(param_3,unaff_x20 + _DAT_112f8b098);
  *(undefined8 *)(unaff_x20 + _DAT_112f8b0a0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f8b0a8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f8b0b0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f8b0b8) = param_7;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_3);
  return puVar2;
}



/* Entry: 10370e180; end: 10370e2bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10370e180(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  
  lVar2 = _DAT_112f8b098;
  plVar6 = &lStack_a0;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f8b088);
  FUN_10370de94(auStack_68);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f8b0b0) + _DAT_11303ff58);
  func_0x000107c6157c(uVar8);
  func_0x0001000d224c(auStack_90);
  func_0x000107c61574(uVar8);
  lVar3 = 0;
  FUN_10370691c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112f8ae18;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10370e938();
  *(undefined **)(lVar4 + lVar1) = puVar5;
  *(undefined8 *)(lVar4 + _DAT_112f8ae20) = 0x3ff0000000000000;
  *(undefined8 *)(lVar4 + _DAT_112f8adf8) = uVar7;
  FUN_10370ead0(auStack_68,lVar4 + _DAT_112f8ae08);
  FUN_10370ead0(unaff_x20 + lVar2,lVar4 + _DAT_112f8ae00);
  FUN_10370ead0(auStack_90,lVar4 + _DAT_112f8ae10);
  puVar5 = PTR_s_init_1125d9248;
  lStack_a0 = lVar4;
  lStack_98 = lVar3;
  func_0x000107c61174(uVar7);
  func_0x000107c61154(&lStack_a0,puVar5);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_68);
  return (undefined1 *)plVar6;
}



/* Entry: 10370e2c0; end: 10370e2f3; -[_TtC44MusicTopicViewerHeaderProviderImplementation30MusicTopicViewerHeaderProvider headerActionHandler] */

void FUN_10370e2c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10370e180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10370e2f4; end: 10370e7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10370e2f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [40];
  undefined8 auStack_c0 [2];
  long *plStack_b0;
  undefined1 auStack_90 [48];
  
  lVar1 = _DAT_112f8b098;
  uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112f8b0a0);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f8b088);
  uVar17 = *(undefined8 *)(param_1 + _DAT_112fefae0);
  uVar21 = *(undefined8 *)(param_1 + _DAT_112fefae8);
  uVar19 = *(undefined8 *)(param_1 + _DAT_112fefaf0);
  uVar18 = *(undefined8 *)(param_1 + _DAT_112fefaf8);
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112f8b090);
  uVar3 = uVar18;
  func_0x000107c61174();
  uVar4 = uVar17;
  func_0x000107c61174();
  uVar5 = uVar21;
  func_0x000107c61174();
  uVar6 = uVar19;
  func_0x000107c61174();
  FUN_10370de94(auStack_90);
  uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112f8b0b0);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f8b0b8);
  puVar7 = &UNK_110686ea0;
  func_0x000107c613fc(&UNK_110686ea0,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar23;
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar23);
  uVar23 = 0x10370eb14;
  func_0x0001000bdd8c(0x10370eb14,puVar7);
  lVar8 = 0;
  FUN_10370ef98();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar2 = _DAT_112f8b128;
  auStack_c0[0] = 0;
  func_0x0001000285a8(0x112f8b0c0,&UNK_10dc001a8);
  func_0x000107c613fc();
  puVar10 = auStack_c0;
  func_0x00010006c248();
  *(undefined8 **)(lVar9 + lVar2) = puVar10;
  *(undefined8 *)(lVar9 + _DAT_112f8b130) = 0;
  func_0x000107c61614(lVar9 + _DAT_112f8b138,0);
  *(undefined8 *)(lVar9 + _DAT_112f8b140) = 0;
  lVar2 = _DAT_112f8b148;
  uVar11 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar9 + lVar2) = uVar11;
  puVar10 = (undefined8 *)(lVar9 + _DAT_112f8b100);
  *puVar10 = uVar17;
  puVar10[1] = uVar21;
  puVar10[2] = uVar19;
  puVar10[3] = uVar18;
  *(undefined8 *)(lVar9 + _DAT_112f8b108) = uVar20;
  *(undefined8 *)(lVar9 + _DAT_112f8b110) = uVar24;
  *(undefined8 *)(lVar9 + _DAT_112f8b118) = uVar16;
  FUN_10370ead0(unaff_x20 + lVar1,auStack_c0);
  FUN_10370ead0(auStack_90,auStack_e8);
  FUN_10370bbc8(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  func_0x000107c61174();
  func_0x000107c6157c(uVar23);
  FUN_103709fd0(uVar15,auStack_c0,auStack_e8,uVar17,uVar21,uVar19,uVar18,uVar24,uVar16,uVar23);
  *(undefined8 *)(lVar9 + _DAT_112f8b120) = uVar15;
  plVar12 = &lStack_f8;
  lStack_f8 = lVar9;
  lStack_f0 = lVar8;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  uVar11 = *(undefined8 *)((long)plVar12 + _DAT_112f8b128);
  plStack_b0 = plVar12;
  func_0x000107c61174();
  func_0x000107c6157c(uVar11);
  func_0x000100075034(0x10370eb3c,auStack_c0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar11);
  uVar11 = 0;
  FUN_103707db0();
  pcVar13 = FUN_10370bce0;
  func_0x0001000bfde0(FUN_10370bce0,0,uVar11);
  pcVar22 = pcVar13;
  func_0x00010370eb54();
  func_0x000104884898();
  func_0x000107c61574(pcVar13);
  puVar7 = &UNK_110686ec8;
  func_0x000107c613fc(&UNK_110686ec8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,plVar12);
  pcVar13 = FUN_10370eb98;
  puVar14 = puVar7;
  (**(code **)(*(long *)pcVar22 + 0x60))();
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(puVar7);
  func_0x000107c614f0(pcVar13);
  uVar11 = *(undefined8 *)((long)plVar12 + _DAT_112f8b148);
  pcVar22 = *(code **)(puVar14 + 0x18);
  func_0x000107c6157c(uVar11);
  (*pcVar22)();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar23);
  func_0x000107c61170(plVar12);
  func_0x000107c615e8(pcVar13);
  func_0x000107c61574(uVar11);
  func_0x0001000834e4(auStack_90);
  return plVar12;
}



/* Entry: 10370e7e4; end: 10370e83f; -[_TtC44MusicTopicViewerHeaderProviderImplementation30MusicTopicViewerHeaderProvider headerSectionDataProviderWithViewModel:] */

void FUN_10370e7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10370e2f4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10370e840; end: 10370e89f; -[_TtC44MusicTopicViewerHeaderProviderImplementation30MusicTopicViewerHeaderProvider init] */

void FUN_10370e840(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerHeaderProviderImplementation.MusicTopicViewerHeaderProvider",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10370e86c);
  (*pcVar1)();
}



/* Entry: 10370e8a0; end: 10370e937; -[_TtC44MusicTopicViewerHeaderProviderImplementation30MusicTopicViewerHeaderProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10370e8a0(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8b088));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8b090));
  func_0x0001000834e4(param_1 + _DAT_112f8b098);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f8b0a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8b0a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8b0b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8b0b8));
  param_1 = param_1 + _DAT_112f8b080;
  lVar1 = 0x112eca730;
  func_0x0001000285a8(0x112eca730,&UNK_10dc001e0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10370e938; end: 10370eacf;  */

undefined * FUN_10370e938(long param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar12 = 0x112f8b0f8;
  func_0x0001000285a8(0x112f8b0f8,&UNK_10dc001e8);
  lVar11 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar8 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar2);
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f8ae68,&UNK_10dc001f0);
    puVar4 = puVar9;
    func_0x000107c60498();
    iVar1 = *(int *)(lVar12 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      puVar7 = puVar8;
      func_0x00010370ec08(param_1,puVar8,0x112f8b0f8,&UNK_10dc001e8);
      puVar5 = puVar8;
      func_0x000100df95d0();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10370eacc);
        (*pcVar3)();
      }
      uVar6 = (ulong)puVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) =
           *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << ((ulong)puVar5 & 0x3f);
      puVar7 = (undefined8 *)(*(long *)(puVar4 + 0x30) + (long)puVar5 * 0x28);
      uVar14 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar2);
      uVar13 = *puVar8;
      uVar16 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar2);
      uVar15 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar2);
      puVar7[4] = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar2);
      puVar7[1] = uVar14;
      *puVar7 = uVar13;
      puVar7[3] = uVar16;
      puVar7[2] = uVar15;
      lVar10 = *(long *)(puVar4 + 0x38);
      lVar11 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar11 + -8) + 0x20))
                (lVar10 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * (long)puVar5,
                 (undefined1 *)((long)puVar8 + (long)iVar1),lVar11);
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10370ead0);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      puVar9 = puVar9 + -1;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar4);
  }
  return puVar4;
}



/* Entry: 10370ead0; end: 10370eb3b;  */

long FUN_10370ead0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10370eb3c; end: 10370eb97;  */

void FUN_10370eb3c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10370edbc(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10370eb98; end: 10370eb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370eb98(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f8b128);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar1);
    uStack_50 = uVar4;
    func_0x000100075034(FUN_10370f7b0,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112f8b138;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c51b5c();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10370eba0; end: 10370ebbf;  */

void FUN_10370eba0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e64e0);
  return;
}



/* Entry: 10370ebc0; end: 10370ec4f;  */

undefined8 FUN_10370ebc0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112eca730;
  func_0x0001000285a8(0x112eca730,&UNK_10dc001e0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10370ec50; end: 10370ec67;  */

undefined8 * FUN_10370ec50(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10370ec68; end: 10370ec87; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider sectionDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370ec68(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f8b130));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10370ec88; end: 10370ecc7; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider setSectionDataModel:] */

void FUN_10370ec88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10370ecc8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


