/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2ae17c; end: 10b2ae17f; -[SCBareboneNavigationBar setDelegate:] */

void FUN_10b2ae17c(void)

{
  return;
}



/* Entry: 10b2ae180; end: 10b2ae183; -[SCBareboneNavigationBar setLocked:] */

void FUN_10b2ae180(void)

{
  return;
}



/* Entry: 10b2ae184; end: 10b2ae187; -[SCBareboneNavigationBar setItems:animated:] */

void FUN_10b2ae184(void)

{
  return;
}



/* Entry: 10b2ae188; end: 10b2ae18b; -[SCBareboneNavigationBar setItems:] */

void FUN_10b2ae188(void)

{
  return;
}



/* Entry: 10b2ae18c; end: 10b2ae193; -[SCBareboneNavigationBar items] */

undefined8 FUN_10b2ae18c(void)

{
  return 0;
}



/* Entry: 10b2ae194; end: 10b2ae19b; -[SCBareboneNavigationBar barStyle] */

undefined8 FUN_10b2ae194(void)

{
  return 0;
}



/* Entry: 10b2ae19c; end: 10b2ae19f; -[SCBareboneNavigationBar method_ios10_1] */

void FUN_10b2ae19c(void)

{
  return;
}



/* Entry: 10b2ae1a0; end: 10b2ae1a3; -[SCBareboneNavigationBar method_ios10_2:b:c:d:] */

void FUN_10b2ae1a0(void)

{
  return;
}



/* Entry: 10b2ae1a4; end: 10b2ae1ab; -[SCBareboneNavigationBar method_ios11_1] */

undefined8 FUN_10b2ae1a4(void)

{
  return 0;
}



/* Entry: 10b2ae1ac; end: 10b2ae1b3; -[SCBareboneNavigationBar method_ios11_2] */

undefined8 FUN_10b2ae1ac(void)

{
  return 0;
}



/* Entry: 10b2ae1b4; end: 10b2ae1b7; -[SCBareboneNavigationBar method_ios11_3] */

void FUN_10b2ae1b4(void)

{
  return;
}



/* Entry: 10b2ae1b8; end: 10b2ae1c7; -[SCBareboneNavigationBar method_ios11_4:b:] */

undefined1  [16] FUN_10b2ae1b8(void)

{
  return *(undefined1 (*) [16])PTR__CGPointZero_110347540;
}



/* Entry: 10b2ae1c8; end: 10b2ae1cf; -[SCBareboneNavigationBar method_ios11_5] */

undefined8 FUN_10b2ae1c8(void)

{
  return 0;
}



/* Entry: 10b2ae1d0; end: 10b2ae1d7; -[SCBareboneNavigationBar method_ios11_6] */

undefined8 FUN_10b2ae1d0(void)

{
  return 0;
}



/* Entry: 10b2ae1d8; end: 10b2ae1db; -[SCBareboneNavigationBar method_ios11_7:] */

void FUN_10b2ae1d8(void)

{
  return;
}



/* Entry: 10b2ae1dc; end: 10b2ae1e3; -[SCBareboneNavigationBar method_ios11_8] */

undefined8 FUN_10b2ae1dc(void)

{
  return 0;
}



/* Entry: 10b2ae1e4; end: 10b2ae1e7; -[SCBareboneNavigationBar method_ios11_9:] */

void FUN_10b2ae1e4(void)

{
  return;
}



/* Entry: 10b2ae1e8; end: 10b2ae333; -[SCBareboneNavigationController sc_secretFeatureWithArgument:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **** FUN_10b2ae1e8(ulong param_1,undefined8 param_2,undefined8 ****param_3)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  undefined *unaff_x22;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  byte *pbStack_88;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 ***pppuStack_58;
  byte abStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar7 = param_3;
  _objc_retain(param_3);
  abStack_50[8] = 0x9e;
  abStack_50[9] = 0x8b;
  abStack_50[10] = 0x96;
  abStack_50[0xb] = 0x90;
  abStack_50[0xc] = 0x91;
  abStack_50[0xd] = 0xbd;
  abStack_50[0xe] = 0x9e;
  abStack_50[0xf] = 0x8d;
  abStack_50[0] = 0x8c;
  abStack_50[1] = 0x9a;
  abStack_50[2] = 0x8b;
  abStack_50[3] = 0xb1;
  abStack_50[4] = 0x9e;
  abStack_50[5] = 0x89;
  abStack_50[6] = 0x96;
  abStack_50[7] = 0x98;
  abStack_50[0x10] = 0xc5;
  abStack_50[0x11] = 0;
  pbVar2 = abStack_50;
  pppuStack_58 = param_3;
  _strlen();
  if (pbVar2 != (byte *)0x0) {
    pbVar8 = (byte *)0x0;
    pbVar10 = (byte *)0x1;
    do {
      abStack_50[(long)pbVar8] = ~abStack_50[(long)pbVar8];
      bVar1 = pbVar10 < pbVar2;
      pbVar8 = pbVar10;
      pbVar10 = (byte *)(ulong)((int)pbVar10 + 1);
    } while (bVar1);
  }
  pbVar2 = abStack_50;
  _sel_registerName();
  uVar3 = param_1;
  _objc_opt_respondsToSelector(param_1,pbVar2);
  if ((uVar3 & 1) != 0) {
    uVar3 = param_1;
    func_0x00010c0cca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR__OBJC_CLASS___NSInvocation_1126b71d0;
    func_0x00010c06abc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2121a0();
    func_0x00010c1fbb60(unaff_x22);
    ppppuVar7 = &pppuStack_58;
    func_0x00010c16a2c0(unaff_x22);
    func_0x00010c06abe0(unaff_x22);
    _objc_release(unaff_x22);
    _objc_release(uVar3);
    param_3 = (undefined8 ****)pppuStack_58;
  }
  ppppuVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppuVar4;
  }
  ___stack_chk_fail();
  ppppuVar5 = &pppuStack_a0;
  pcStack_68 = FUN_10b2ae334;
  puStack_90 = unaff_x22;
  pbStack_88 = pbVar2;
  pppuStack_80 = param_3;
  uStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(ppppuVar7);
  puStack_98 = PTR_PTR_112706260;
  pppuStack_a0 = ppppuVar4;
  _objc_msgSendSuper2(&pppuStack_a0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (ppppuVar5 != (undefined8 ****)0x0) {
    puVar6 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar11 = (long)_DAT_11278e2e8;
    uVar9 = *(undefined8 *)((long)ppppuVar5 + lVar11);
    *(undefined **)((long)ppppuVar5 + lVar11) = puVar6;
    _objc_release(uVar9);
    func_0x00010bf77520(*(undefined8 *)((long)ppppuVar5 + lVar11));
    func_0x00010c189400(ppppuVar5);
    func_0x00010c0f57c0(ppppuVar5);
    func_0x00010c11c520(ppppuVar5);
  }
  _objc_release(ppppuVar7);
  return ppppuVar5;
}



/* Entry: 10b2ae334; end: 10b2ae3f7; -[SCBareboneNavigationController initWithRootViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b2ae334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706260;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11278e2e8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf77520(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c189400(puVar1);
    func_0x00010c0f57c0(puVar1);
    func_0x00010c11c520(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2ae3f8; end: 10b2ae44b; -[SCBareboneNavigationController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ae3f8(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_11278e2e8),param_2,param_1);
  puStack_28 = PTR_PTR_112706260;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b2ae44c; end: 10b2ae453; -[SCBareboneNavigationController disablesAutomaticKeyboardDismissal] */

undefined8 FUN_10b2ae44c(void)

{
  return 0;
}



/* Entry: 10b2ae454; end: 10b2ae4af; -[SCBareboneNavigationController shouldDisplayStatusBar] */

undefined8 FUN_10b2ae454(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22fc40();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b2ae4b0; end: 10b2ae4eb; -[SCBareboneNavigationController prefersStatusBarHidden] */

undefined8 FUN_10b2ae4b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1070e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2ae4ec; end: 10b2ae527; -[SCBareboneNavigationController preferredStatusBarStyle] */

undefined8 FUN_10b2ae4ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c106ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2ae528; end: 10b2ae5db; -[SCBareboneNavigationController presentViewController:animated:completion:] */

void FUN_10b2ae528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puVar1 = PTR_s_presentViewController_animated_c_112621588;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b2ae5dc;
  puStack_48 = &UNK_11084aaa8;
  puStack_68 = PTR_PTR_112706260;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = param_1;
  uStack_40 = param_1;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&uStack_70,puVar1,param_3,param_4,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 10b2ae5dc; end: 10b2ae633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ae5dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11278e2fc;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf15ca0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b2ae624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b2ae634; end: 10b2ae6df; -[SCBareboneNavigationController dismissViewControllerAnimated:completion:] */

void FUN_10b2ae634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_s_dismissViewControllerAnimated_co_1125bec68;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b2ae6e0;
  puStack_48 = &UNK_11084aaa8;
  puStack_68 = PTR_PTR_112706260;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = param_1;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_70,puVar1,param_3,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10b2ae6e0; end: 10b2ae737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ae6e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11278e2fc;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf15c80();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b2ae728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b2ae738; end: 10b2ae7af; -[SCBareboneNavigationController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ae738(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_11278e2e8),param_2,param_1,param_3);
  puStack_38 = PTR_PTR_112706260;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438,param_3);
  *(undefined1 *)(param_1 + _DAT_11278e300) = 1;
  return;
}



/* Entry: 10b2ae7b0; end: 10b2ae827; -[SCBareboneNavigationController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ae7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + _DAT_11278e2e8),param_2,param_1,param_3);
  puStack_38 = PTR_PTR_112706260;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48,param_3);
  *(undefined1 *)(param_1 + _DAT_11278e300) = 1;
  return;
}



/* Entry: 10b2ae828; end: 10b2ae8a3; -[SCBareboneNavigationController willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ae828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e2e8);
  _objc_retain(param_3);
  func_0x00010c2a6760(uVar1);
  puStack_38 = PTR_PTR_112706260;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2ae8a4; end: 10b2ae91f; -[SCBareboneNavigationController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ae8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e2e8);
  _objc_retain(param_3);
  func_0x00010bf77ea0(uVar1);
  puStack_38 = PTR_PTR_112706260;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2ae920; end: 10b2ae9a3; -[SCBareboneNavigationController handleCustomStatusBarHeightChange:isExpanded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ae920(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined8 *)(param_2 + _DAT_11278e2f0) = param_1;
  *(undefined1 *)(param_2 + _DAT_11278e2f8) = param_4;
  if (*(char *)(param_2 + _DAT_11278e300) == '\x01') {
    *(undefined1 *)(param_2 + _DAT_11278e2ec) = 1;
    return;
  }
  func_0x00010bed2d00(param_2);
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2ae9a4; end: 10b2ae9b3; -[SCBareboneNavigationController shouldUseNGSSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2ae9a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e2e4);
}



/* Entry: 10b2ae9b4; end: 10b2ae9d3; -[SCBareboneNavigationController presentationDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ae9b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278e2fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2ae9d4; end: 10b2aea0f; -[SCBareboneNavigationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ae9d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278e2fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e2e8,0);
  return;
}



/* Entry: 10b2aea10; end: 10b2af02b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b2aea10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined5 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte bVar11;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined4 uStack_1c8;
  undefined3 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined5 uStack_1a0;
  undefined3 uStack_19b;
  undefined5 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined8 uStack_160;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined8 uStack_14e;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined8 uStack_f0;
  undefined7 uStack_e8;
  undefined4 uStack_e1;
  undefined8 uStack_d0;
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  undefined6 uStack_c0;
  undefined8 uStack_ba;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined3 uStack_68;
  undefined5 uStack_65;
  undefined3 uStack_60;
  undefined8 uStack_5d;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  _class_getInstanceMethod();
  uStack_68 = 0x8daf91;
  uStack_70 = 0xb6939a9c919e9ca0;
  uStack_5d = 0x8f90af8db0978c;
  uStack_65 = 0x8c9a8d9890;
  uStack_60 = 0x8aaf8c;
  bVar11 = 0xa0;
  pbVar10 = (byte *)((ulong)&uStack_70 | 1);
  do {
    pbVar10[-1] = ~bVar11;
    bVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar11 != 0);
  puVar2 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  puVar3 = &uStack_70;
  _sel_registerName(puVar3);
  _method_getImplementation(puVar1);
  _class_addMethod(puVar2,puVar3,puVar1,&UNK_10f55bfd3);
  puVar1 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  _class_getInstanceMethod();
  uStack_a8 = 0x968c919e8d8bc58c;
  uStack_b0 = 0x929a8bb68b9a8ca0;
  uStack_98 = 0x8b9a8c9a8dc58b9a;
  uStack_a0 = 0x8c9a8dc59190968b;
  uStack_88 = 0x978c9190968b9e93;
  uStack_90 = 0x9aad9891969188b0;
  uStack_80 = 0xc58f96;
  bVar11 = 0xa0;
  pbVar10 = (byte *)((ulong)&uStack_b0 | 1);
  do {
    pbVar10[-1] = ~bVar11;
    bVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar11 != 0);
  puVar2 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  puVar3 = &uStack_b0;
  _sel_registerName(puVar3);
  _method_getImplementation(puVar1);
  _class_addMethod(puVar2,puVar3,puVar1,&UNK_10f741275);
  puVar1 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  _class_getInstanceMethod();
  uStack_c8 = 0x8c9a8d999aad;
  uStack_d0 = 0x8c8b8d908f8f8a8c;
  uStack_ba = 0x9891968b8c90b7;
  uStack_c2 = 0xbc97;
  uStack_c0 = 0x93908d8b9190;
  bVar11 = 0x8c;
  pbVar10 = (byte *)((ulong)&uStack_d0 | 1);
  do {
    pbVar10[-1] = ~bVar11;
    bVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar11 != 0);
  puVar2 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  puVar3 = &uStack_d0;
  _sel_registerName(puVar3);
  _method_getImplementation(puVar1);
  _class_addMethod(puVar2,puVar3,puVar1,&DAT_10f74129b);
  puVar1 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  _class_getInstanceMethod();
  uStack_e8 = 0xb793908d8b9190;
  uStack_f0 = 0xbc978c9a8d999a8d;
  uStack_e1 = 0x8b8c90;
  bVar11 = 0x8d;
  pbVar10 = (byte *)((ulong)&uStack_f0 | 1);
  do {
    pbVar10[-1] = ~bVar11;
    bVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar11 != 0);
  puVar2 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  puVar3 = &uStack_f0;
  _sel_registerName(puVar3);
  _method_getImplementation(puVar1);
  _class_addMethod(puVar2,puVar3,puVar1,&DAT_10f7412b2);
  puVar1 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  _class_getInstanceMethod();
  uStack_108 = 0x8d8b9190bc978c;
  uStack_110 = 0x9a8d999aad8b9a8c;
  uStack_101 = 0x90;
  uStack_100 = 0xc58b8c90b793;
  bVar11 = 0x8c;
  pbVar10 = (byte *)((ulong)&uStack_110 | 1);
  do {
    pbVar10[-1] = ~bVar11;
    bVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar11 != 0);
  puVar2 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  puVar3 = &uStack_110;
  _sel_registerName(puVar3);
  _method_getImplementation(puVar1);
  _class_addMethod(puVar2,puVar3,puVar1,&DAT_10f7412cd);
  puVar1 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  _class_getInstanceMethod();
  uStack_138 = 0xb18d90b99a98919e;
  uStack_140 = 0xad8b9798969a97a0;
  uStack_128 = 0x9a8bb691;
  uStack_130 = 0x90968b9e9896899e;
  uStack_11c = 0xc5978b9b96a898;
  uStack_124 = 0x9699c592;
  uStack_120 = 0x91968b8b;
  bVar11 = 0xa0;
  pbVar10 = (byte *)((ulong)&uStack_140 | 1);
  do {
    pbVar10[-1] = ~bVar11;
    bVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar11 != 0);
  puVar2 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  puVar3 = &uStack_140;
  _sel_registerName(puVar3);
  _method_getImplementation(puVar1);
  _class_addMethod(puVar2,puVar3,puVar1,&UNK_10f7412fe);
  puVar1 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  _class_getInstanceMethod();
  uStack_1c4 = 0x949c;
  uStack_1c8 = 0x9e8b8ca0;
  bVar11 = 0xa0;
  pbVar10 = (byte *)((ulong)&uStack_1c8 | 1);
  do {
    pbVar10[-1] = ~bVar11;
    bVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar11 != 0);
  puVar2 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  puVar4 = &uStack_1c8;
  _sel_registerName(puVar4);
  _method_getImplementation(puVar1);
  _class_addMethod(puVar2,puVar4,puVar1,&DAT_10f7412b2);
  puVar1 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  _class_getInstanceMethod();
  uStack_158 = 0x988d;
  uStack_160 = 0x9eb38c8b919e88a0;
  uStack_14e = 0x9b9a869e938f8c;
  uStack_156 = 0x9a938b96ab9a;
  uStack_150 = 0x96bb;
  bVar11 = 0xa0;
  pbVar10 = (byte *)((ulong)&uStack_160 | 1);
  do {
    pbVar10[-1] = ~bVar11;
    bVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar11 != 0);
  puVar2 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  puVar3 = &uStack_160;
  _sel_registerName(puVar3);
  _method_getImplementation(puVar1);
  _class_addMethod(puVar2,puVar3,puVar1,&DAT_10f74129b);
  puVar1 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  _class_getInstanceMethod();
  uStack_188 = 0x9a9ab48c929a8bb6;
  uStack_190 = 0x869e938f8c969ba0;
  uStack_178 = 0x91;
  uStack_180 = 0x969188b09891968f;
  uStack_16f = 0xc58d9ebd919096;
  uStack_177 = 0x9e9896899eb198;
  uStack_170 = 0x8b;
  bVar11 = 0xa0;
  pbVar10 = (byte *)((ulong)&uStack_190 | 1);
  do {
    pbVar10[-1] = ~bVar11;
    bVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar11 != 0);
  puVar2 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  puVar3 = &uStack_190;
  _sel_registerName(puVar3);
  _method_getImplementation(puVar1);
  _class_addMethod(puVar2,puVar3,puVar1,&DAT_10f7412cd);
  puVar1 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  _class_getInstanceMethod();
  uStack_1a0 = 0xaf8d9e9da0;
  uStack_19b = 0x968c90;
  uStack_198 = 0x9190968b;
  bVar11 = 0xa0;
  pbVar10 = (byte *)((ulong)&uStack_1a0 | 1);
  do {
    pbVar10[-1] = ~bVar11;
    bVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar11 != 0);
  puVar2 = PTR_PTR_1126e0118;
  _objc_opt_class(PTR_PTR_1126e0118);
  puVar5 = &uStack_1a0;
  _sel_registerName(puVar5);
  _method_getImplementation(puVar1);
  _class_addMethod(puVar2,puVar5,puVar1,&UNK_10f741359);
  puVar1 = PTR_PTR_1126e0118;
  _objc_opt_class();
  _class_getInstanceMethod();
  uStack_1b8 = 0xc59190968b968c90;
  uStack_1c0 = 0xaf8d9ebd8b9a8ca0;
  uStack_1b0 = 0;
  bVar11 = 0xa0;
  pbVar10 = (byte *)((ulong)&uStack_1c0 | 1);
  do {
    pbVar10[-1] = ~bVar11;
    bVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar11 != 0);
  puVar2 = PTR_PTR_1126e0118;
  _objc_opt_class();
  puVar3 = &uStack_1c0;
  _sel_registerName();
  puVar6 = puVar1;
  _method_getImplementation();
  puVar7 = puVar2;
  _class_addMethod(puVar2,puVar3,puVar6,&UNK_10f74136e);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar7;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_210;
  ppuStack_200 = &PTR_PTR_1126e0000;
  pcStack_1d8 = FUN_10b2af02c;
  puStack_208 = PTR_PTR_112706268;
  puStack_210 = puVar7;
  puStack_1f8 = puVar3;
  puStack_1f0 = puVar2;
  puStack_1e8 = puVar1;
  puStack_1e0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_210,PTR_s_initWithFrame__1125e2948);
  if (ppuVar8 != (undefined **)0x0) {
    *(undefined **)((long)ppuVar8 + (long)_DAT_11278e304) = puVar6;
    puVar9 = (undefined1 *)ppuVar8;
    func_0x00010c22a660(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar9);
    puVar9 = (undefined1 *)ppuVar8;
    func_0x00010c22a660(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc80();
    _objc_release(puVar9);
  }
  return (undefined *)ppuVar8;
}



/* Entry: 10b2af02c; end: 10b2af0df; -[SCBorderOverlayCornerView initWithFrame:corner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b2af02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706268;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e304) = param_3;
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc80();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2af0e0; end: 10b2af277; -[SCBorderOverlayCornerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2af0e0(double param_1,double param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_112706268;
  lStack_70 = param_3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_3);
  dVar4 = param_1;
  func_0x00010bf20c00(param_3);
  _CGRectGetWidth();
  dVar5 = dVar4;
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar3 = *(long *)(param_3 + _DAT_11278e304);
  if (lVar3 == 8) {
    param_1 = param_1 - dVar4;
  }
  else {
    if (lVar3 != 4) {
      if (lVar3 == 2) {
        param_1 = param_1 - dVar4;
        param_2 = param_2 + 0.0;
      }
      goto LAB_10b2af198;
    }
    param_1 = param_1 + 0.0;
  }
  param_2 = param_2 - dVar5;
LAB_10b2af198:
  _CGRectInset(param_1,param_2,dVar4 + dVar4,dVar5 + dVar5,0xbff0000000000000,0xbff0000000000000);
  func_0x00010bf199c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(param_1,param_2,dVar4 + dVar4,dVar5 + dVar5,dVar4,dVar5,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40(puVar1);
  _objc_release(puVar2);
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c22a660(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b2af278; end: 10b2af287; -[SCBorderOverlayCornerView corner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2af278(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e304);
}



/* Entry: 10b2af288; end: 10b2af3d3; -[SCBorderOverlayView pointInside:withEvent:] */

/* WARNING: Possible PIC construction at 0x00010b2af448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af690: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b2af288(double param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong auStack_68 [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_2 + _DAT_11278e308);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11278e30c);
  auStack_68[0] = uVar2;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11278e310);
  auStack_68[1] = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11278e314);
  auStack_68[2] = uVar4;
  _objc_retain(uVar3);
  lVar5 = 0;
  auStack_68[3] = uVar3;
  do {
    uVar2 = *(ulong *)((long)auStack_68 + lVar5);
    _objc_retain(uVar2);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      if ((uVar1 & 1) != 0) {
        _objc_release(uVar2);
        lVar5 = 1;
        goto LAB_10b2af378;
      }
    }
    _objc_release(uVar2);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x20);
  lVar5 = 0;
LAB_10b2af378:
  lVar6 = 0x18;
  do {
    _objc_release(*(undefined8 *)((long)auStack_68 + lVar6));
    lVar6 = lVar6 + -8;
  } while (lVar6 != -8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar5 = (long)_DAT_11278e308;
  if (*(long *)(param_4 + lVar5) == 0) {
    lVar5 = (long)_DAT_11278e30c;
    if (*(long *)(param_4 + lVar5) == 0) {
      lVar5 = (long)_DAT_11278e310;
      if (*(long *)(param_4 + lVar5) == 0) {
        lVar5 = (long)_DAT_11278e314;
        if (*(long *)(param_4 + lVar5) == 0) {
          lVar5 = (long)_DAT_11278e328;
          if (*(long *)(param_4 + lVar5) == 0) {
            lVar5 = (long)_DAT_11278e330;
            if (*(long *)(param_4 + lVar5) == 0) {
              lVar5 = (long)_DAT_11278e338;
              if (*(long *)(param_4 + lVar5) == 0) {
                lVar5 = (long)_DAT_11278e340;
                if (*(long *)(param_4 + lVar5) == 0) {
                  return param_4;
                }
                func_0x00010bf20c00(param_4);
                _CGRectGetMaxX();
                param_1 = param_1 - *(double *)(param_4 + _DAT_11278e324);
                lVar6 = (long)_DAT_11278e344;
                dVar8 = param_1 - *(double *)(param_4 + lVar6);
                func_0x00010bf20c00(param_4);
                _CGRectGetMaxY();
                dVar10 = *(double *)(param_4 + lVar6);
                lVar5 = *(long *)(param_4 + lVar5);
                param_1 = (param_1 - *(double *)(param_4 + _DAT_11278e320)) - dVar10;
                dVar9 = dVar10;
              }
              else {
                func_0x00010bf20c00(param_4);
                _CGRectGetMinX();
                dVar8 = param_1 + *(double *)(param_4 + _DAT_11278e31c);
                func_0x00010bf20c00(param_4);
                _CGRectGetMaxY();
                dVar10 = *(double *)(param_4 + _DAT_11278e33c);
                param_1 = (param_1 - *(double *)(param_4 + _DAT_11278e320)) - dVar10;
                lVar5 = *(long *)(param_4 + lVar5);
                dVar9 = dVar10;
              }
            }
            else {
              func_0x00010bf20c00(param_4);
              _CGRectGetMaxX();
              param_1 = param_1 - *(double *)(param_4 + _DAT_11278e324);
              lVar6 = (long)_DAT_11278e334;
              dVar8 = param_1 - *(double *)(param_4 + lVar6);
              func_0x00010bf20c00(param_4);
              _CGRectGetMinY();
              param_1 = param_1 + *(double *)(param_4 + _DAT_11278e318);
              dVar10 = *(double *)(param_4 + lVar6);
              lVar5 = *(long *)(param_4 + lVar5);
              dVar9 = dVar10;
            }
          }
          else {
            func_0x00010bf20c00(param_4);
            _CGRectGetMinX();
            dVar8 = param_1 + *(double *)(param_4 + _DAT_11278e31c);
            func_0x00010bf20c00(param_4);
            _CGRectGetMinY();
            param_1 = param_1 + *(double *)(param_4 + _DAT_11278e318);
            dVar10 = *(double *)(param_4 + _DAT_11278e32c);
            lVar5 = *(long *)(param_4 + lVar5);
            dVar9 = dVar10;
          }
        }
        else {
          func_0x00010bf20c00(param_4);
          _CGRectGetMaxX();
          lVar6 = (long)_DAT_11278e324;
          dVar8 = param_1 - *(double *)(param_4 + lVar6);
          func_0x00010bf20c00(param_4);
          _CGRectGetMinY();
          dVar10 = *(double *)(param_4 + lVar6);
          dVar9 = param_1;
          func_0x00010bf20c00(param_4);
          _CGRectGetHeight();
          lVar5 = *(long *)(param_4 + lVar5);
        }
      }
      else {
        func_0x00010bf20c00(param_4);
        _CGRectGetMinX();
        dVar10 = param_1;
        func_0x00010bf20c00(param_4);
        _CGRectGetMaxY();
        lVar6 = (long)_DAT_11278e320;
        dVar9 = dVar10 - *(double *)(param_4 + lVar6);
        func_0x00010bf20c00(param_4);
        _CGRectGetWidth();
        lVar5 = *(long *)(param_4 + lVar5);
        dVar8 = param_1;
        param_1 = dVar9;
        dVar9 = *(double *)(param_4 + lVar6);
      }
    }
    else {
      func_0x00010bf20c00(param_4);
      _CGRectGetMinX();
      dVar7 = param_1;
      func_0x00010bf20c00(param_4);
      _CGRectGetMinY();
      dVar10 = *(double *)(param_4 + _DAT_11278e31c);
      dVar9 = dVar7;
      func_0x00010bf20c00(param_4);
      _CGRectGetHeight();
      lVar5 = *(long *)(param_4 + lVar5);
      dVar8 = param_1;
      param_1 = dVar7;
    }
  }
  else {
    func_0x00010bf20c00(param_4);
    _CGRectGetMinX();
    dVar9 = param_1;
    func_0x00010bf20c00(param_4);
    _CGRectGetMinY();
    dVar10 = dVar9;
    func_0x00010bf20c00(param_4);
    _CGRectGetWidth();
    lVar5 = *(long *)(param_4 + lVar5);
    dVar8 = param_1;
    param_1 = dVar9;
    dVar9 = *(double *)(param_4 + _DAT_11278e318);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar8,param_1,dVar10,dVar9,lVar5,PTR_s_setFrame__112645658)
  ;
  return lVar5;
}



/* Entry: 10b2af3d4; end: 10b2af72b; -[SCBorderOverlayView layoutSubviews] */

/* WARNING: Possible PIC construction at 0x00010b2af448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2af690: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2af3d4(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = (long)_DAT_11278e308;
  if (*(long *)(param_2 + lVar2) == 0) {
    lVar2 = (long)_DAT_11278e30c;
    if (*(long *)(param_2 + lVar2) == 0) {
      lVar2 = (long)_DAT_11278e310;
      if (*(long *)(param_2 + lVar2) == 0) {
        lVar2 = (long)_DAT_11278e314;
        if (*(long *)(param_2 + lVar2) == 0) {
          lVar2 = (long)_DAT_11278e328;
          if (*(long *)(param_2 + lVar2) == 0) {
            lVar2 = (long)_DAT_11278e330;
            if (*(long *)(param_2 + lVar2) == 0) {
              lVar2 = (long)_DAT_11278e338;
              if (*(long *)(param_2 + lVar2) == 0) {
                lVar2 = (long)_DAT_11278e340;
                if (*(long *)(param_2 + lVar2) == 0) {
                  return;
                }
                func_0x00010bf20c00(param_2);
                _CGRectGetMaxX();
                param_1 = param_1 - *(double *)(param_2 + _DAT_11278e324);
                lVar3 = (long)_DAT_11278e344;
                dVar5 = param_1 - *(double *)(param_2 + lVar3);
                func_0x00010bf20c00(param_2);
                _CGRectGetMaxY();
                dVar7 = *(double *)(param_2 + lVar3);
                uVar1 = *(undefined8 *)(param_2 + lVar2);
                param_1 = (param_1 - *(double *)(param_2 + _DAT_11278e320)) - dVar7;
                dVar6 = dVar7;
              }
              else {
                func_0x00010bf20c00(param_2);
                _CGRectGetMinX();
                dVar5 = param_1 + *(double *)(param_2 + _DAT_11278e31c);
                func_0x00010bf20c00(param_2);
                _CGRectGetMaxY();
                dVar7 = *(double *)(param_2 + _DAT_11278e33c);
                param_1 = (param_1 - *(double *)(param_2 + _DAT_11278e320)) - dVar7;
                uVar1 = *(undefined8 *)(param_2 + lVar2);
                dVar6 = dVar7;
              }
            }
            else {
              func_0x00010bf20c00(param_2);
              _CGRectGetMaxX();
              param_1 = param_1 - *(double *)(param_2 + _DAT_11278e324);
              lVar3 = (long)_DAT_11278e334;
              dVar5 = param_1 - *(double *)(param_2 + lVar3);
              func_0x00010bf20c00(param_2);
              _CGRectGetMinY();
              param_1 = param_1 + *(double *)(param_2 + _DAT_11278e318);
              dVar7 = *(double *)(param_2 + lVar3);
              uVar1 = *(undefined8 *)(param_2 + lVar2);
              dVar6 = dVar7;
            }
          }
          else {
            func_0x00010bf20c00(param_2);
            _CGRectGetMinX();
            dVar5 = param_1 + *(double *)(param_2 + _DAT_11278e31c);
            func_0x00010bf20c00(param_2);
            _CGRectGetMinY();
            param_1 = param_1 + *(double *)(param_2 + _DAT_11278e318);
            dVar7 = *(double *)(param_2 + _DAT_11278e32c);
            uVar1 = *(undefined8 *)(param_2 + lVar2);
            dVar6 = dVar7;
          }
        }
        else {
          func_0x00010bf20c00(param_2);
          _CGRectGetMaxX();
          lVar3 = (long)_DAT_11278e324;
          dVar5 = param_1 - *(double *)(param_2 + lVar3);
          func_0x00010bf20c00(param_2);
          _CGRectGetMinY();
          dVar7 = *(double *)(param_2 + lVar3);
          dVar6 = param_1;
          func_0x00010bf20c00(param_2);
          _CGRectGetHeight();
          uVar1 = *(undefined8 *)(param_2 + lVar2);
        }
      }
      else {
        func_0x00010bf20c00(param_2);
        _CGRectGetMinX();
        dVar7 = param_1;
        func_0x00010bf20c00(param_2);
        _CGRectGetMaxY();
        lVar3 = (long)_DAT_11278e320;
        dVar6 = dVar7 - *(double *)(param_2 + lVar3);
        func_0x00010bf20c00(param_2);
        _CGRectGetWidth();
        uVar1 = *(undefined8 *)(param_2 + lVar2);
        dVar5 = param_1;
        param_1 = dVar6;
        dVar6 = *(double *)(param_2 + lVar3);
      }
    }
    else {
      func_0x00010bf20c00(param_2);
      _CGRectGetMinX();
      dVar4 = param_1;
      func_0x00010bf20c00(param_2);
      _CGRectGetMinY();
      dVar7 = *(double *)(param_2 + _DAT_11278e31c);
      dVar6 = dVar4;
      func_0x00010bf20c00(param_2);
      _CGRectGetHeight();
      uVar1 = *(undefined8 *)(param_2 + lVar2);
      dVar5 = param_1;
      param_1 = dVar4;
    }
  }
  else {
    func_0x00010bf20c00(param_2);
    _CGRectGetMinX();
    dVar6 = param_1;
    func_0x00010bf20c00(param_2);
    _CGRectGetMinY();
    dVar7 = dVar6;
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    uVar1 = *(undefined8 *)(param_2 + lVar2);
    dVar5 = param_1;
    param_1 = dVar6;
    dVar6 = *(double *)(param_2 + _DAT_11278e318);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar5,param_1,dVar7,dVar6,uVar1,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b2af72c; end: 10b2af817; -[SCBorderOverlayView setTopBorderWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2af72c(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(double *)(param_2 + _DAT_11278e318) == param_1) {
    return;
  }
  *(double *)(param_2 + _DAT_11278e318) = param_1;
  lVar3 = (long)_DAT_11278e308;
  if (0.0 < param_1) {
    if (*(long *)(param_2 + lVar3) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar2 = *(undefined8 *)(param_2 + lVar3);
      *(undefined **)(param_2 + lVar3) = puVar1;
      _objc_release(uVar2);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_2 + lVar3));
      _objc_release(puVar1);
      func_0x00010befbb60(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  func_0x00010c12c960();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined8 *)(param_2 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2af818; end: 10b2af903; -[SCBorderOverlayView setLeftBorderWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2af818(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(double *)(param_2 + _DAT_11278e31c) == param_1) {
    return;
  }
  *(double *)(param_2 + _DAT_11278e31c) = param_1;
  lVar3 = (long)_DAT_11278e30c;
  if (0.0 < param_1) {
    if (*(long *)(param_2 + lVar3) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar2 = *(undefined8 *)(param_2 + lVar3);
      *(undefined **)(param_2 + lVar3) = puVar1;
      _objc_release(uVar2);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_2 + lVar3));
      _objc_release(puVar1);
      func_0x00010befbb60(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  func_0x00010c12c960();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined8 *)(param_2 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2af904; end: 10b2af9ef; -[SCBorderOverlayView setBottomBorderWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2af904(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(double *)(param_2 + _DAT_11278e320) == param_1) {
    return;
  }
  *(double *)(param_2 + _DAT_11278e320) = param_1;
  lVar3 = (long)_DAT_11278e310;
  if (0.0 < param_1) {
    if (*(long *)(param_2 + lVar3) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar2 = *(undefined8 *)(param_2 + lVar3);
      *(undefined **)(param_2 + lVar3) = puVar1;
      _objc_release(uVar2);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_2 + lVar3));
      _objc_release(puVar1);
      func_0x00010befbb60(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  func_0x00010c12c960();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined8 *)(param_2 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2af9f0; end: 10b2afadb; -[SCBorderOverlayView setRightBorderWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2af9f0(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(double *)(param_2 + _DAT_11278e324) == param_1) {
    return;
  }
  *(double *)(param_2 + _DAT_11278e324) = param_1;
  lVar3 = (long)_DAT_11278e314;
  if (0.0 < param_1) {
    if (*(long *)(param_2 + lVar3) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar2 = *(undefined8 *)(param_2 + lVar3);
      *(undefined **)(param_2 + lVar3) = puVar1;
      _objc_release(uVar2);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_2 + lVar3));
      _objc_release(puVar1);
      func_0x00010befbb60(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  func_0x00010c12c960();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined8 *)(param_2 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2afadc; end: 10b2afbcb; -[SCBorderOverlayView setContentBounds:] */

void FUN_10b2afadc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  
  dVar2 = param_1;
  _CGRectGetMinY();
  dVar1 = dVar2;
  func_0x00010bf20c00(param_5);
  _CGRectGetMinY();
  func_0x00010c217340(dVar2 - dVar1,param_5);
  dVar2 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar1 = dVar2;
  func_0x00010bf20c00(param_5);
  _CGRectGetMinX();
  dVar2 = dVar2 - dVar1;
  func_0x00010c1ba1a0(dVar2,param_5);
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxY();
  dVar1 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  dVar2 = dVar2 - dVar1;
  func_0x00010c173540(dVar2,param_5);
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxX();
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c1ee0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar2 - param_1,param_5,PTR_s_setRightBorderWidth__112659260);
  return;
}



/* Entry: 10b2afbcc; end: 10b2afc23; -[SCBorderOverlayView contentBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b2afbcc(double param_1,long param_2)

{
  func_0x00010bf20c00();
  return param_1 + *(double *)(param_2 + _DAT_11278e31c);
}



/* Entry: 10b2afc24; end: 10b2afcd7; -[SCBorderOverlayView setTopLeftCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2afc24(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(double *)(param_2 + _DAT_11278e32c) == param_1) {
    return;
  }
  *(double *)(param_2 + _DAT_11278e32c) = param_1;
  lVar3 = (long)_DAT_11278e328;
  if (0.0 < param_1) {
    if (*(long *)(param_2 + lVar3) == 0) {
      puVar1 = PTR_PTR_1126e0120;
      _objc_alloc();
      func_0x00010c014240(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar2 = *(undefined8 *)(param_2 + lVar3);
      *(undefined **)(param_2 + lVar3) = puVar1;
      _objc_release(uVar2);
      func_0x00010befbb60(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  func_0x00010c12c960();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined8 *)(param_2 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2afcd8; end: 10b2afd8b; -[SCBorderOverlayView setTopRightCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2afcd8(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(double *)(param_2 + _DAT_11278e334) == param_1) {
    return;
  }
  *(double *)(param_2 + _DAT_11278e334) = param_1;
  lVar3 = (long)_DAT_11278e330;
  if (0.0 < param_1) {
    if (*(long *)(param_2 + lVar3) == 0) {
      puVar1 = PTR_PTR_1126e0120;
      _objc_alloc();
      func_0x00010c014240(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar2 = *(undefined8 *)(param_2 + lVar3);
      *(undefined **)(param_2 + lVar3) = puVar1;
      _objc_release(uVar2);
      func_0x00010befbb60(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  func_0x00010c12c960();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined8 *)(param_2 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2afd8c; end: 10b2afe3f; -[SCBorderOverlayView setBottomLeftCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2afd8c(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(double *)(param_2 + _DAT_11278e33c) == param_1) {
    return;
  }
  *(double *)(param_2 + _DAT_11278e33c) = param_1;
  lVar3 = (long)_DAT_11278e338;
  if (0.0 < param_1) {
    if (*(long *)(param_2 + lVar3) == 0) {
      puVar1 = PTR_PTR_1126e0120;
      _objc_alloc();
      func_0x00010c014240(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar2 = *(undefined8 *)(param_2 + lVar3);
      *(undefined **)(param_2 + lVar3) = puVar1;
      _objc_release(uVar2);
      func_0x00010befbb60(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  func_0x00010c12c960();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined8 *)(param_2 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2afe40; end: 10b2afef3; -[SCBorderOverlayView setBottomRightCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2afe40(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(double *)(param_2 + _DAT_11278e344) == param_1) {
    return;
  }
  *(double *)(param_2 + _DAT_11278e344) = param_1;
  lVar3 = (long)_DAT_11278e340;
  if (0.0 < param_1) {
    if (*(long *)(param_2 + lVar3) == 0) {
      puVar1 = PTR_PTR_1126e0120;
      _objc_alloc();
      func_0x00010c014240(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar2 = *(undefined8 *)(param_2 + lVar3);
      *(undefined **)(param_2 + lVar3) = puVar1;
      _objc_release(uVar2);
      func_0x00010befbb60(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  func_0x00010c12c960();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined8 *)(param_2 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2afef4; end: 10b2aff3f; -[SCBorderOverlayView setAllCornerRadii:] */

void FUN_10b2afef4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c217480();
  func_0x00010c2175e0(param_1,param_2);
  func_0x00010c173640(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c173710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s_setBottomRightCornerRadius__11263a7e0);
  return;
}



/* Entry: 10b2aff40; end: 10b2aff4f; -[SCBorderOverlayView topBorderWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2aff40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e318);
}



/* Entry: 10b2aff50; end: 10b2aff5f; -[SCBorderOverlayView leftBorderWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2aff50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e31c);
}



/* Entry: 10b2aff60; end: 10b2aff6f; -[SCBorderOverlayView bottomBorderWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2aff60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e320);
}



/* Entry: 10b2aff70; end: 10b2aff7f; -[SCBorderOverlayView rightBorderWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2aff70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e324);
}



/* Entry: 10b2aff80; end: 10b2aff8f; -[SCBorderOverlayView topLeftCornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2aff80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e32c);
}



/* Entry: 10b2aff90; end: 10b2aff9f; -[SCBorderOverlayView topRightCornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2aff90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e334);
}



/* Entry: 10b2affa0; end: 10b2affaf; -[SCBorderOverlayView bottomLeftCornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2affa0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e33c);
}



/* Entry: 10b2affb0; end: 10b2affbf; -[SCBorderOverlayView bottomRightCornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2affb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e344);
}



/* Entry: 10b2affc0; end: 10b2b005f; -[SCBorderOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2affc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e340,0);
  _objc_storeStrong(param_1 + _DAT_11278e338,0);
  _objc_storeStrong(param_1 + _DAT_11278e330,0);
  _objc_storeStrong(param_1 + _DAT_11278e328,0);
  _objc_storeStrong(param_1 + _DAT_11278e314,0);
  _objc_storeStrong(param_1 + _DAT_11278e310,0);
  _objc_storeStrong(param_1 + _DAT_11278e30c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e308,0);
  return;
}



/* Entry: 10b2b0060; end: 10b2b0127; -[SCBottomBorderedView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b2b0060(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706270;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e348);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e348) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e34c) = 0x3ff0000000000000;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar4 = (long)_DAT_11278e350;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2b0128; end: 10b2b01c3; -[SCBottomBorderedView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b0128(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706270;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar1 = param_1;
  func_0x00010bf1fc40(param_2);
  param_1 = param_1 - dVar1;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar2 = dVar1;
  func_0x00010bf1fc40(param_2);
  func_0x00010c19f0e0(0,param_1,dVar1,dVar2,*(undefined8 *)(param_2 + _DAT_11278e350));
  return;
}



/* Entry: 10b2b01c4; end: 10b2b0233; -[SCBottomBorderedView setBorderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b01c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11278e348;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11278e350),param_2,
                      *(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2b0234; end: 10b2b0263; -[SCBottomBorderedView setBorderThickness:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b0234(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e34c) = param_1;
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10b2b0264; end: 10b2b0273; -[SCBottomBorderedView borderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b0264(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e348);
}



/* Entry: 10b2b0274; end: 10b2b0283; -[SCBottomBorderedView borderThickness] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b0274(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e34c);
}



/* Entry: 10b2b0284; end: 10b2b02c3; -[SCBottomBorderedView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b0284(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e348,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e350,0);
  return;
}



/* Entry: 10b2b02c4; end: 10b2b04e3; -[_SCButton initWithSize:style:color:highlightedColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b2b02c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_112706278;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e354) = param_3;
    lVar4 = (long)_DAT_11278e358;
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e35c) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e360) = param_6;
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdd2280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdd52e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar5 = 0x3ff0000000000000;
    if (*(long *)((long)puVar1 + lVar4) != 1) {
      uVar5 = 0;
    }
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(uVar5);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010becc440(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdf9800(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar1);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be361a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2b04e4; end: 10b2b05d3; -[_SCButton setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b04e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_112706278;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_setHighlighted__112647c38);
  uVar1 = param_1;
  func_0x00010bdd2280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bdd52e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2b05d4; end: 10b2b06cb; -[_SCButton setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b05d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_112706278;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_setSelected__11265c598);
  uVar1 = param_1;
  func_0x00010bdd2280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bdd52e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2b06cc; end: 10b2b07c3; -[_SCButton setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b06cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_112706278;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_setEnabled__112642f38);
  uVar1 = param_1;
  func_0x00010bdd2280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bdd52e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2b07c4; end: 10b2b0803; -[_SCButton _titleFontForSize:] */

void FUN_10b2b07c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    func_0x00010bfb4200(PTR_PTR_1126d3f50,param_2,
                        *(undefined8 *)(&UNK_10e571728 + (param_3 - 1U) * 8),3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2b0804; end: 10b2b0873; -[_SCButton _defaultTitleColorForSize:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b0804(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 2) {
    if (*(long *)(param_1 + _DAT_11278e35c) == 0xd5) {
      uVar1 = 0x7b;
    }
    else {
      uVar1 = 0xd5;
    }
  }
  else {
    if (param_4 != 1) goto LAB_10b2b086c;
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278e35c);
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_10b2b086c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2b0874; end: 10b2b08e3; -[_SCButton _highlightTitleColorForSize:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b0874(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 2) {
    if (*(long *)(param_1 + _DAT_11278e35c) == 0xd5) {
      uVar1 = 0x82;
    }
    else {
      uVar1 = 0xd5;
    }
  }
  else {
    if (param_4 != 1) goto LAB_10b2b08dc;
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278e360);
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_10b2b08dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2b08e4; end: 10b2b091f; -[_SCButton _disabledColorForSize:] */

void FUN_10b2b08e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10e571748 + (param_3 - 1U) * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2b0920; end: 10b2b098b; -[_SCButton _backgroundColorForSize:style:state:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b0920(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  
  if (param_4 == 2) {
    iVar1 = _DAT_11278e35c;
    if (param_5 != 0) {
      iVar1 = _DAT_11278e360;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,*(undefined8 *)(param_1 + iVar1)
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 1) {
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2b098c; end: 10b2b09e7; -[_SCButton _borderColorForSize:style:state:] */

void FUN_10b2b098c(long param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  int *piVar2;
  
  piVar2 = (int *)&DAT_11278e35c;
  if (param_4 != 2) {
    puVar1 = param_2;
    if (param_4 != 1) goto LAB_10b2b09e0;
    if (param_5 != 0) {
      piVar2 = (int *)&DAT_11278e360;
    }
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,*(undefined8 *)(param_1 + *piVar2)
                     );
  _objc_retainAutoreleasedReturnValue();
LAB_10b2b09e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2b09e8; end: 10b2b0a07; +[_SCButton _buttonHeightForSize:] */

undefined8 FUN_10b2b09e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x403e000000000000;
  if (param_3 - 2U < 3) {
    uVar1 = *(undefined8 *)(&UNK_10e571768 + (param_3 - 2U) * 8);
  }
  return uVar1;
}



/* Entry: 10b2b0a08; end: 10b2b0a83; -[_SCButton layoutSubviews] */

void FUN_10b2b0a08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706278;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b2b0a84; end: 10b2b0aef; -[_SCButton sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b2b0a84(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706278;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_sizeThatFits__11266cf90);
  dVar1 = param_1;
  _objc_opt_class(param_2);
  func_0x00010bdd7380();
  auVar2._0_8_ = param_1 + dVar1;
  auVar2._8_8_ = dVar1;
  return auVar2;
}



/* Entry: 10b2b0af0; end: 10b2b0b63; -[_SCButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b2b0af0(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706278;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_intrinsicContentSize_1125f8080);
  dVar1 = param_1;
  _objc_opt_class(param_3);
  func_0x00010bdd7380();
  auVar2._0_8_ = param_1 + dVar1 * 2.0;
  auVar2._8_8_ = param_2;
  return auVar2;
}



/* Entry: 10b2b0b64; end: 10b2b0bb3; +[SCButtonFactory buttonWithSize:style:color:highlightedColor:] */

void FUN_10b2b0b64(void)

{
  _objc_alloc(PTR_PTR_1126e0128);
  func_0x00010c046b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2b0bb4; end: 10b2b0bbf; +[SCButtonFactory buttonHeightWithSize:] */

void FUN_10b2b0bb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd7390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126e0128,PTR_s__buttonHeightForSize__112553680);
  return;
}



/* Entry: 10b2b0bc0; end: 10b2b0bd3; -[SCCircularBadgeView initWithDiameter:badgeColor:] */

void FUN_10b2b0bc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,param_1,param_2,PTR_s_initWithFrame_badgeColor__1125e2990);
  return;
}



/* Entry: 10b2b0bd4; end: 10b2b0ecf; -[SCCircularBadgeView initWithFrame:badgeColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b2b0bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_112706280;
  uStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e36c);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e36c) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(puVar1);
    func_0x00010bf199a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_retainAutorelease(param_7);
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5800();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0x3ff0000000000000,0x4000000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4000000000000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11278e370;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2b0ed0; end: 10b2b0fff; -[SCCircularBadgeView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b0ed0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_112706280;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_2);
  func_0x00010bf199a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  lVar3 = param_2;
  func_0x00010c22a660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(lVar3);
  _objc_release(puVar1);
  lVar3 = param_2;
  func_0x00010c22a660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5800();
  lVar2 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(lVar2);
  _objc_release(lVar3);
  lVar3 = (long)_DAT_11278e370;
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  uVar4 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  func_0x00010c17a6a0(param_1,uVar4,*(undefined8 *)(param_2 + lVar3));
  return;
}



/* Entry: 10b2b1000; end: 10b2b102f; -[SCCircularBadgeView setBadgeText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b1000(long param_1)

{
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11278e370));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b2b1030; end: 10b2b1083; -[SCCircularBadgeView setFontSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b1030(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + _DAT_11278e370));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b2b1084; end: 10b2b10c7; -[SCCircularBadgeView setHasShadow:] */

void FUN_10b2b1084(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x3f000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  func_0x00010c1fe800(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2b10c8; end: 10b2b112f; -[SCCircularBadgeView setTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b10c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278e36c);
  *(undefined8 *)(param_1 + _DAT_11278e36c) = uVar1;
  _objc_release(uVar2);
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11278e370),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2b1130; end: 10b2b113f; -[SCCircularBadgeView fontSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b1130(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e364);
}



/* Entry: 10b2b1140; end: 10b2b114f; -[SCCircularBadgeView hasShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2b1140(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e368);
}



/* Entry: 10b2b1150; end: 10b2b115f; -[SCCircularBadgeView textColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b1150(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e36c);
}



/* Entry: 10b2b1160; end: 10b2b119f; -[SCCircularBadgeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b1160(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e36c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e370,0);
  return;
}



/* Entry: 10b2b11a0; end: 10b2b1203; -[SCDownSwipableViewController viewDidAppear:] */

void FUN_10b2b11a0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112706288;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b2b1204; end: 10b2b1303; -[SCDownSwipableViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b1204(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706288;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == param_1) {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(param_1);
  }
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar3);
  return;
}



/* Entry: 10b2b1304; end: 10b2b1337; -[SCDownSwipableViewController viewDidDisappear:] */

void FUN_10b2b1304(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112706288;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidDisappear__112684c48);
  return;
}



/* Entry: 10b2b1338; end: 10b2b13e3; -[SCDownSwipableViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b1338(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706288;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07f8c0();
  *(char *)(param_1 + _DAT_11278e374) = (char)puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_11278e378) = puVar2;
  _objc_release(puVar1);
  func_0x00010c1cbec0(param_1);
  return;
}


