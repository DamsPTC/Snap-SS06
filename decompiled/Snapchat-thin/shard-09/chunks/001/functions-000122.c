/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a3f248; end: 106a3f24f; -[SCContactPermissionPlaceholderData subtitle] */

undefined8 FUN_106a3f248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a3f250; end: 106a3f27f; -[SCContactPermissionPlaceholderData setSubtitle:] */

void FUN_106a3f250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a3f280; end: 106a3f2af; -[SCContactPermissionPlaceholderData .cxx_destruct] */

void FUN_106a3f280(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a3f2b0; end: 106a3f333; -[SCContactPermissionResumeiOS18ViewController initWithScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106a3f2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4600;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127563d8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a3f334; end: 106a3f383; -[SCContactPermissionResumeiOS18ViewController viewDidLoad] */

void FUN_106a3f334(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4600;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb0d80(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 106a3f384; end: 106a3fd2f; -[SCContactPermissionResumeiOS18ViewController _setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3f384(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *puVar38;
  long lVar39;
  
  lVar39 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c190b80(puVar1);
  func_0x00010c166c00(puVar1);
  func_0x00010c207380(0x4030000000000000,puVar1);
  func_0x00010c219b60(puVar1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1f7b20();
  puVar4 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar4);
  func_0x00010c18b5e0(puVar3);
  func_0x00010c189840(puVar3);
  func_0x00010c181f80(0xc028000000000000,0,0,0,puVar3);
  func_0x00010c1b9b80(0,0x4028000000000000,0,0x4028000000000000,puVar3);
  func_0x00010bef6d60(puVar1);
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c190b80(puVar5);
  func_0x00010c166c00(puVar5);
  func_0x00010c207380(0x4028000000000000,puVar5);
  func_0x00010c219b60(puVar5);
  func_0x00010bef6d60(puVar1);
  puVar6 = PTR_PTR_1126aea58;
  _objc_opt_new();
  puVar4 = puVar6;
  func_0x00010c165e20();
  func_0x000106a40808();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar6);
  _objc_release(puVar4);
  func_0x00010c213040(puVar6);
  func_0x00010c21ad00(puVar6);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar6);
  _objc_release(puVar4);
  func_0x00010c1cfce0(puVar6);
  func_0x00010bef6d60(puVar5);
  puVar7 = PTR_PTR_1126aea58;
  _objc_opt_new();
  puVar4 = puVar7;
  func_0x00010c165e20();
  func_0x000106a40820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar7);
  _objc_release(puVar4);
  func_0x00010c213040(puVar7);
  func_0x00010c21ad00(puVar7);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar7);
  _objc_release(puVar4);
  func_0x00010c1cfce0(puVar7);
  func_0x00010bef6d60(puVar5);
  puVar8 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c190b80(puVar8);
  func_0x00010c166c00(puVar8);
  func_0x00010c207380(0x4028000000000000,puVar8);
  func_0x00010c219b60(puVar8);
  func_0x00010bef6d60(puVar1);
  puVar9 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  puVar4 = puVar9;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c271420(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar4);
  puVar4 = puVar9;
  func_0x00010c08c0e0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x403a000000000000);
  _objc_release(puVar4);
  puVar4 = puVar9;
  func_0x00010c08c0e0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar4);
  puVar4 = puVar9;
  func_0x00010bdc2860(puVar9);
  func_0x000106a40838();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar9);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar9);
  _objc_release(puVar4);
  func_0x00010befbd60(puVar9);
  func_0x00010bef6d60(puVar8);
  puVar10 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  puVar4 = puVar10;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar10;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar38);
  _objc_release(puVar11);
  _objc_release();
  func_0x000106a40850();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar10);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar10);
  _objc_release(puVar4);
  func_0x00010befbd60(puVar10);
  func_0x00010bef6d60(puVar8);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar12 = puVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf49420(0x4067c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar21;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar28;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar26;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar32;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar31;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar36;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar35;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar11);
  _objc_release(puVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(param_1);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(uVar33);
  _objc_release(uVar2);
  _objc_release(uVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar39) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c250390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + _DAT_1127563d8),PTR_s_startRenderingViewModels__112671b08,
             &PTR___NSConcreteGlobalBlock_110955880);
  return;
}



/* Entry: 106a3fd30; end: 106a3fd4b; -[SCContactPermissionResumeiOS18ViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3fd30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127563d8),PTR_s_startRenderingViewModels__112671b08,
             &PTR___NSConcreteGlobalBlock_110955880);
  return;
}



/* Entry: 106a3fd4c; end: 106a3fd57; -[SCContactPermissionResumeiOS18ViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_106a3fd4c(void)

{
  return 0x4044000000000000;
}



/* Entry: 106a3fd58; end: 106a3fd93; -[SCContactPermissionResumeiOS18ViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_106a3fd58(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_106a40078();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106a3fd94; end: 106a3ffc7; -[SCContactPermissionResumeiOS18ViewController tableView:cellForRowAtIndexPath:] */

void FUN_106a3fd94(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c142240();
  uVar3 = uVar2;
  FUN_106a40078();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  if (uVar2 < uVar4) {
    FUN_106a40078();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c142240(param_4);
    uVar4 = uVar3;
    func_0x00010c0dfd40(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar8 = param_3;
    func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110e67fb8);
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
      _objc_alloc(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
      func_0x00010c04ec80();
      func_0x00010c1fbac0();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar8;
      func_0x00010bf6f720(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    uVar2 = uVar4;
    func_0x00010c2711a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c26c280(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar5);
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010c260dc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf6f720(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar5);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c142240();
    uVar3 = uVar2;
    FUN_106a40078();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    uVar1 = 3;
    if (uVar2 != uVar7 - 1) {
      uVar1 = 0;
    }
    func_0x00010c161260(puVar8,param_2,uVar1);
    _objc_release(uVar4);
  }
  else {
    puVar8 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_opt_new(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106a3ffc8; end: 106a3ffcb; -[SCContactPermissionResumeiOS18ViewController tableView:titleForHeaderInSection:] */

void FUN_106a3ffc8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e68118;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e68118,
                      &PTR____CFConstantStringClassReference_110e67ff8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106a3ffcc; end: 106a40017; -[SCContactPermissionResumeiOS18ViewController _openOSSettingsButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3ffcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127563d8);
  puVar1 = PTR_PTR_1126cfe18;
  func_0x00010c0e9440(PTR_PTR_1126cfe18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a40018; end: 106a40063; -[SCContactPermissionResumeiOS18ViewController _notNowButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a40018(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127563d8);
  puVar1 = PTR_PTR_1126cfe18;
  func_0x00010bf2dba0(PTR_PTR_1126cfe18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a40064; end: 106a40077; -[SCContactPermissionResumeiOS18ViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a40064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127563d8,0);
  return;
}



/* Entry: 106a40078; end: 106a400cb;  */

void FUN_106a40078(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c4848 != -1) {
    func_0x00010002a2fc(0x1136c4848,&PTR___NSConcreteGlobalBlock_1109558a0);
  }
  uVar1 = uRam00000001136c4850;
  _objc_retain(uRam00000001136c4850);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a400cc; end: 106a4025f;  */

undefined * FUN_106a400cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 in_x4;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar12 = &puStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cfe20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106a40778();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053520();
  puVar3 = PTR_PTR_1126cfe20;
  puStack_70 = puVar1;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106a40790();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000106a407c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053520();
  puVar6 = PTR_PTR_1126cfe20;
  puStack_68 = puVar3;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x000106a407a8();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000106a407d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053520();
  uVar13 = 3;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = puRam00000001136c4850;
  puRam00000001136c4850 = puVar9;
  _objc_release(uVar11);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar10 = &puStack_b0;
  pcStack_78 = FUN_106a40260;
  puStack_a0 = puVar5;
  puStack_98 = puVar4;
  puStack_90 = puVar1;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar12);
  _objc_retain(uVar13);
  _objc_retain(in_x4);
  puStack_a8 = PTR_PTR_1126f4608;
  puStack_b0 = puVar3;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar10 != (undefined **)0x0) {
    _objc_retain(ppuVar12);
    uVar11 = *(undefined8 *)((long)ppuVar10 + 8);
    *(undefined ***)((long)ppuVar10 + 8) = ppuVar12;
    _objc_release(uVar11);
    _objc_retain(uVar13);
    uVar11 = *(undefined8 *)((long)ppuVar10 + 0x10);
    *(undefined8 *)((long)ppuVar10 + 0x10) = uVar13;
    _objc_release(uVar11);
    _objc_storeWeak((undefined1 *)((long)ppuVar10 + 0x18),in_x4);
  }
  _objc_release(in_x4);
  _objc_release(uVar13);
  _objc_release(ppuVar12);
  return (undefined *)ppuVar10;
}



/* Entry: 106a40260; end: 106a40323; -[SCContactPermissionResumeWorkflow initWithFlow:router:delegate:] */

undefined1 *
FUN_106a40260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f4608;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a40324; end: 106a4041f; -[SCContactPermissionResumeWorkflow begin] */

void FUN_106a40324(long param_1,undefined8 param_2)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x106a403c8;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106a4046c;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106a404d4;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106a404f0;
  puStack_98 = &UNK_110842e18;
  lStack_90 = param_1;
  lStack_68 = param_1;
  lStack_40 = param_1;
  lStack_18 = param_1;
  func_0x00010c0be240(*(undefined8 *)(param_1 + 8),param_2,&puStack_38,&puStack_60,&puStack_88,
                      &puStack_b0);
  return;
}



/* Entry: 106a40420; end: 106a4046b;  */

void FUN_106a40420(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c239a20(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a4046c; end: 106a404c3;  */

void FUN_106a4046c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a404c4;
  puStack_20 = &UNK_1109558c0;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106a404c4; end: 106a404ef;  */

void FUN_106a404c4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23b1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showiOS18ResumePermissionPageWit_11266c690,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106a404f0; end: 106a40547;  */

void FUN_106a404f0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a40548;
  puStack_20 = &UNK_1109558c0;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106a40548; end: 106a40553;  */

void FUN_106a40548(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showResumePermissionAlertWithDel_11266c0a8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106a40554; end: 106a405ab; -[SCContactPermissionResumeWorkflow contactPermissionResumeCancel] */

void FUN_106a40554(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a405ac;
  puStack_20 = &UNK_1109558c0;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106a405ac; end: 106a405e7;  */

void FUN_106a405ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf83120(param_2);
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4a240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a405e8; end: 106a4063f; -[SCContactPermissionResumeWorkflow contactPermissionResumeOpenOSSettings] */

void FUN_106a405e8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a40640;
  puStack_20 = &UNK_1109558c0;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106a40640; end: 106a40697;  */

void FUN_106a40640(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c0e9440(param_2);
  func_0x00010bf83120(param_2);
  _objc_release(param_2);
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4a220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a40698; end: 106a4069b; -[SCContactPermissionResumeWorkflow tray:positionDidChange:] */

void FUN_106a40698(void)

{
  return;
}



/* Entry: 106a4069c; end: 106a406c7; -[SCContactPermissionResumeWorkflow trayDidDismiss:] */

void FUN_106a4069c(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4a240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a406c8; end: 106a406ff; -[SCContactPermissionResumeWorkflow .cxx_destruct] */

void FUN_106a406c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a40700; end: 106a40897;  */

void FUN_106a40700(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e67fd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e67fd8,
                      &PTR____CFConstantStringClassReference_110e67ff8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106a40898; end: 106a408df; +[SCContactPermissionResumeAction cancel] */

void FUN_106a40898(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cfe18;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a408e0; end: 106a4092b; +[SCContactPermissionResumeAction openOSSettings] */

void FUN_106a408e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cfe18;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a4092c; end: 106a4094f; -[SCContactPermissionResumeAction copyWithZone:] */

undefined8 FUN_106a4092c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a40950; end: 106a40957; -[SCContactPermissionResumeAction hash] */

undefined8 FUN_106a40950(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a40958; end: 106a4099b; -[SCContactPermissionResumeAction internalInit] */

void FUN_106a40958(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f4610;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4099c; end: 106a40a23; -[SCContactPermissionResumeAction isEqual:] */

bool FUN_106a4099c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106a40a24; end: 106a40a9b; -[SCContactPermissionResumeAction matchCancel:openOSSettings:] */

void FUN_106a40a24(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_106a40a6c;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_106a40a6c;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_106a40a6c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a40a9c; end: 106a40bdb; -[SCContactSupportScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a40a9c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  
  puVar1 = PTR_PTR_1126cfe28;
  _objc_alloc(PTR_PTR_1126cfe28);
  lVar2 = param_1 + _DAT_1127563ec;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127563f0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeeb60(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e681b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e681b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1);
  _objc_release(ppuVar6);
  func_0x00010c1fe4c0(puVar1);
  param_1 = param_1 + _DAT_1127563f4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a40bdc; end: 106a40c67; -[SCContactSupportScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a40bdc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_1127563f4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126f4618;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a40c68; end: 106a40cb3; -[SCContactSupportScopeEntryPoint settingFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a40c68(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127563f4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4a4c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a40cb4; end: 106a40cb7; -[SCContactSupportScopeEntryPoint settingDismissed] */

void FUN_106a40cb4(void)

{
  return;
}



/* Entry: 106a40cb8; end: 106a40d07; -[SCContactSupportScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a40cb8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127563f4);
  _objc_destroyWeak(param_1 + _DAT_1127563f0);
  _objc_destroyWeak(param_1 + _DAT_1127563ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127563f8);
  return;
}



/* Entry: 106a40d08; end: 106a40e1b; -[AuthenticatedWebViewToolbarViewController initForWebViewType:usernameProvider:snapTokenProvider:switchboardEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106a40d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f4620;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127563fc) = param_3;
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010be1b8e0(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106a40e1c; end: 106a40e83;  */

void FUN_106a40e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6fea0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a40e84; end: 106a40e8b; -[AuthenticatedWebViewToolbarViewController pageViewName] */

undefined8 FUN_106a40e84(void)

{
  return 0x146;
}



/* Entry: 106a40e8c; end: 106a412cb; -[AuthenticatedWebViewToolbarViewController _generateParametersWithUsernameProvider:snapTokenProvider:completion:] */

void FUN_106a40e8c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfd3880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010c008340();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = puVar5;
    func_0x00010c1d0640(puVar5);
  }
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar10 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_retain(param_5);
  _objc_retain(puVar5);
  _objc_retain(puVar5);
  _objc_retain(param_5);
  func_0x00010bfa48e0(uVar10);
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106a412dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + 0x28) + 0x10))
            (*(long *)(puVar2 + 0x28),*(undefined8 *)(puVar2 + 0x20),param_2);
  return;
}



/* Entry: 106a412cc; end: 106a412f3;  */

void FUN_106a412cc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106a412dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 106a412f4; end: 106a412ff; -[AuthenticatedWebViewToolbarViewController _urlRequestString] */

undefined ** FUN_106a412f4(void)

{
  return &PTR____CFConstantStringClassReference_110e681d8;
}



/* Entry: 106a41300; end: 106a4133b; -[AuthenticatedWebViewToolbarViewController _parametersGenerated:snapToken:] */

void FUN_106a41300(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdf2700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c540(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a4133c; end: 106a4145f; -[AuthenticatedWebViewToolbarViewController _createRequest:snapToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4133c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bee6460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126cfe30;
  _objc_alloc(PTR_PTR_1126cfe30);
  func_0x00010bff7040();
  func_0x00010c1d8f00();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e68218;
  if (*(char *)(param_1 + _DAT_112756400) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e681f8;
  }
  puVar5 = puVar4;
  func_0x00010c1370c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dada18,ppuVar1,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_4 != 0) {
    func_0x00010c2201e0(puVar5,param_2,param_4,&PTR____CFConstantStringClassReference_110dad998);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a41460; end: 106a41467; -[AuthenticatedWebViewToolbarViewController configureWebView] */

void FUN_106a41460(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e95f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRefreshOrStopButtonEnabled__112657fa0,0);
  return;
}



/* Entry: 106a41468; end: 106a414b3; -[AuthenticatedWebViewToolbarViewController viewWillAppear:] */

void FUN_106a41468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf47640();
  puStack_28 = PTR_PTR_1126f4620;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 106a414b4; end: 106a414bf; -[AuthenticatedWebViewToolbarViewController supportedInterfaceOrientations] */

undefined8 FUN_106a414b4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 106a414c0; end: 106a41533; -[AuthenticatedWebViewToolbarViewController rightButtonPressed] */

void FUN_106a414c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076be0();
  _objc_release(uVar1);
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 == 0) {
    func_0x00010c1288e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c256160();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a41534; end: 106a41a07; -[SCSettingsSupportEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a41534(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  uVar1 = param_1 + _DAT_112756404;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf1f440();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e68298;
  if ((int)uVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e682b8;
  }
  func_0x00010bcbeaa8(ppuVar3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  func_0x00010c053ba0();
  puVar5 = PTR_PTR_1126aeae0;
  if ((uVar1 & 1) == 0) {
    func_0x00010c263020();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c262ec0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  ppuVar8 = &PTR____CFConstantStringClassReference_110dcd198;
  ppuVar7 = ppuVar8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcd198,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcd198,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0();
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  puVar9 = PTR_PTR_1126aeae0;
  func_0x00010c263020();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar8 = &PTR____CFConstantStringClassReference_110dcd1b8;
  ppuVar7 = ppuVar8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcd1b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcd1b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar10);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  puVar11 = PTR_PTR_1126aeae0;
  func_0x00010c263020(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar12 = PTR_PTR_1126aeae8;
  _objc_alloc(PTR_PTR_1126aeae8);
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106a41a08;
  puStack_90 = &UNK_110845b80;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c0435e0(puVar12);
  puVar13 = PTR_PTR_1126aeae8;
  _objc_alloc(PTR_PTR_1126aeae8);
  puStack_d0 = puVar14;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106a41a78;
  puStack_b8 = &UNK_110845b80;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c0435e0(puVar13);
  puVar14 = PTR_PTR_1126aeae8;
  _objc_alloc(PTR_PTR_1126aeae8);
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c0435e0(puVar14);
  lVar17 = (long)_DAT_112756408;
  lVar15 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar15);
  lVar16 = lVar15;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar16);
  _objc_release(lVar15);
  if ((uVar1 & 1) == 0) {
    lVar15 = param_1 + lVar17;
    _objc_loadWeakRetained(lVar15);
    lVar16 = lVar15;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar16);
    _objc_release(lVar15);
    param_1 = param_1 + lVar17;
    _objc_loadWeakRetained(param_1);
    lVar15 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar15);
    _objc_release(param_1);
  }
  _objc_release(puVar14);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar13);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar12);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 106a41a08; end: 106a41b97;  */

void FUN_106a41a08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be56d20();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bd00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a41b98; end: 106a41dbf; -[SCSettingsSupportEntryPoint _presentINeedHelpPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a41b98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126c5b30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_112756404;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc();
  func_0x00010c04e820();
  puVar5 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ae560;
  _objc_alloc_init(PTR_PTR_1126ae560);
  puVar7 = puVar5;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a41dc0;
  puStack_60 = &UNK_110842308;
  puVar8 = puVar7;
  puStack_58 = puVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar7,param_2,&puStack_78,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  uVar9 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar8 = puVar7;
  func_0x00010bf22ba0(puVar7,param_2,puVar6,puVar5,uVar9,param_1,0,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(puVar7);
  if (param_1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_11275641c);
  }
  func_0x00010bf9d620(uVar9,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 106a41dc0; end: 106a41dd7;  */

void FUN_106a41dc0(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 106a41dd8; end: 106a41e93; -[SCSettingsSupportEntryPoint _logPageOpen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a41dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11275640c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126cfe38;
  _objc_alloc_init(PTR_PTR_1126cfe38);
  uVar2 = param_3;
  func_0x00010bb165c4(param_3);
  _objc_release(param_3);
  func_0x00010c20fec0(puVar1,param_2,uVar2);
  lVar3 = lVar4;
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106a41e94; end: 106a41f4f; -[SCSettingsSupportEntryPoint _handleWithUrl:withUrl:] */

void FUN_106a41e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  func_0x00010c04e820();
  _objc_release(param_4);
  func_0x00010c057840(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c11c520(uVar3,param_2,puVar1,1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a41f50; end: 106a41fbb; -[SCSettingsSupportEntryPoint webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a41f50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11275641c);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11275641c);
    }
    func_0x00010c12e1c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106a41fbc; end: 106a42033; -[SCSettingsSupportEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a41fbc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275641c,0);
  _objc_destroyWeak(param_1 + _DAT_112756408);
  _objc_destroyWeak(param_1 + _DAT_11275640c);
  _objc_destroyWeak(param_1 + _DAT_112756404);
  _objc_destroyWeak(param_1 + _DAT_112756418);
  _objc_destroyWeak(param_1 + _DAT_112756414);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112756410);
  return;
}



/* Entry: 106a42034; end: 106a420f3; -[SCSimpleSettingsRowProvider initWithSectionRow:rowViewModel:contextHandler:] */

undefined8
FUN_106a42034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae750;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c2468a0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0435c0(param_1,param_2,param_3,puVar2,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106a420f4; end: 106a421c3; -[SCSimpleSettingsRowProvider initWithSectionRow:observableRowViewModel:contextHandler:] */

undefined1 *
FUN_106a420f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f4628;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a421c4; end: 106a421eb; -[SCSimpleSettingsRowProvider sectionRow] */

void FUN_106a421c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a421ec; end: 106a42213; -[SCSimpleSettingsRowProvider rowViewModel] */

void FUN_106a421ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a42214; end: 106a4222b; -[SCSimpleSettingsRowProvider handleWithContext:] */

void FUN_106a42214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a42224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 106a4222c; end: 106a42267; -[SCSimpleSettingsRowProvider .cxx_destruct] */

void FUN_106a4222c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a42268; end: 106a42363; -[SCCollectionViewAutoPlayConfigProvider initWithPlaybackScope:pluginCreator:storiesPlaybackServices:grapheneRegistry:] */

undefined1 *
FUN_106a42268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4630;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a42364; end: 106a42443; -[SCCollectionViewAutoPlayConfigProvider sessionContext] */

void FUN_106a42364(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21420();
  func_0x000108534aa8();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf21420();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ae0(puVar1,param_2,0,uVar3,0,0xffffffffffffffff,0xffffffffffffffff,uVar5,puVar6,
                      0x4c);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a42444; end: 106a42567; -[SCCollectionViewAutoPlayConfigProvider launchingCandidates] */

void FUN_106a42444(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087a0(puVar1,param_2,puVar4,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126b2400);
    func_0x00010c018aa0(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a42568; end: 106a425b7; -[SCCollectionViewAutoPlayConfigProvider presentingConfig] */

void FUN_106a42568(void)

{
  _objc_alloc(PTR_PTR_1126b2400);
  func_0x00010c018aa0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a425b8; end: 106a42837; -[SCCollectionViewAutoPlayConfigProvider plugins] */

void FUN_106a425b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3010000000;
  pcStack_68 = "";
  uStack_58 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uStack_60 = *(undefined8 *)PTR__CGSizeZero_110347620;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_106a42838;
  uStack_90 = 0x106a42848;
  uStack_88 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_106a42838;
  uStack_c0 = 0x106a42848;
  uStack_b8 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_78;
  lVar4 = param_1;
  func_0x00010c0ff0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf40640(puVar1[4],puVar1[5],uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106a42838; end: 106a4287f;  */

void FUN_106a42838(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a42880; end: 106a4290f;  */

void FUN_106a42880(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  lVar1 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a42910; end: 106a42913;  */

void FUN_106a42910(void)

{
  return;
}



/* Entry: 106a42914; end: 106a42a6b; -[SCCollectionViewAutoPlayConfigProvider _discoverFeedStoryToPlay] */

void FUN_106a42914(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106a42838;
  uStack_30 = 0x106a42848;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a42a6c; end: 106a42a9b;  */

void FUN_106a42a6c(void)

{
  return;
}



/* Entry: 106a42a9c; end: 106a42ad3;  */

void FUN_106a42a9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a42ad4; end: 106a42ad7;  */

void FUN_106a42ad4(void)

{
  return;
}



/* Entry: 106a42ad8; end: 106a42c1f; -[SCCollectionViewAutoPlayConfigProvider playbackDataProvider] */

void FUN_106a42ad8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be02100();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010c25b720(), lVar2 != 5)) {
    puVar4 = *(undefined **)(param_1 + 0x18);
    func_0x00010bfb8c00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c2a60;
    _objc_opt_class(PTR_PTR_1126c2a60);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    puVar4 = puVar3;
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar3);
    if (lVar1 == 0) goto LAB_106a42be4;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066720(puVar4);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x18);
    func_0x00010c12a480();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
LAB_106a42be4:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar1 + 0x20,0);
  _objc_storeStrong(lVar1 + 0x18,0);
  _objc_storeStrong(lVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + 8,0);
  return;
}



/* Entry: 106a42c20; end: 106a42c67; -[SCCollectionViewAutoPlayConfigProvider .cxx_destruct] */

void FUN_106a42c20(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a42c68; end: 106a42c8f;  */

uint FUN_106a42c68(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110e68378,0,0);
  return (uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 106a42c90; end: 106a42e2f; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider initWithPlaybackScope:pluginCreator:storiesPlaybackServices:playbackDelegate:circumstanceEngine:discoverFeedEventsController:playlistGenerator:friendingInterstitialPluginService:] */

undefined1 *
FUN_106a42c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f4638;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a42e30; end: 106a42f2b; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider sessionContext] */

void FUN_106a42e30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21420();
  func_0x000108534aa8();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf21420();
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 8);
  func_0x00010c0ffbc0();
  uVar1 = 0xb0;
  if (lVar8 != 1) {
    uVar1 = 0xb8;
  }
  func_0x00010c011ae0(puVar2,param_2,0,uVar4,1,0xffffffffffffffff,0,uVar6,puVar7,uVar1);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a42f2c; end: 106a42fc7; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider launchingCandidates] */

void FUN_106a42f2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  lVar2 = param_1;
  func_0x00010be752a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087a0(puVar1,param_2,lVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a42fc8; end: 106a430b3; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider presentingConfig] */

void FUN_106a42fc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0ea1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6c60();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0ea1c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0d6c60();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0ea1c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27aa00();
  func_0x00010becbd80();
  func_0x00010c018aa0(0,puVar2,param_2,0,0,1,uVar1,0,uVar5,0,(int)param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a430b4; end: 106a43123; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider _thumbnailTransitionDurationMsOverride] */

uint FUN_106a430b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf21420();
  _objc_release(lVar1);
  if (lVar2 == 0x2b) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c067f00(uVar3,&PTR____CFConstantStringClassReference_110e2ebd8,
                        &PTR____CFConstantStringClassReference_110e68378,0,0);
    return (uint)uVar3 & ((int)(uint)uVar3 >> 0x1f ^ 0xffffffffU);
  }
  return 0;
}



/* Entry: 106a43124; end: 106a43edb; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider plugins] */

void FUN_106a43124(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lStack_5a8;
  long lStack_590;
  long lStack_550;
  undefined8 uStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_106a43edc;
  uStack_150 = 0x106a43eec;
  lStack_148 = 0;
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  pcStack_188 = FUN_106a43edc;
  uStack_180 = 0x106a43eec;
  uStack_178 = 0;
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x2020000000;
  uStack_1a8 = 0xffffffffffffffff;
  puStack_1d8 = &uStack_1e0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x2020000000;
  uStack_1c8 = 0xffffffffffffffff;
  puStack_208 = &uStack_210;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_106a43edc;
  uStack_1f0 = 0x106a43eec;
  uStack_1e8 = 0;
  puStack_228 = &uStack_230;
  uStack_230 = 0;
  uStack_220 = 0x2020000000;
  uStack_218 = 0xffffffffffffffff;
  puStack_258 = &uStack_260;
  uStack_260 = 0;
  uStack_250 = 0x3032000000;
  pcStack_248 = FUN_106a43edc;
  uStack_240 = 0x106a43eec;
  uStack_238 = 0;
  puStack_278 = &uStack_280;
  uStack_280 = 0;
  uStack_270 = 0x2020000000;
  uStack_268 = 0;
  puStack_2a8 = &uStack_2b0;
  uStack_2b0 = 0;
  uStack_2a0 = 0x3032000000;
  pcStack_298 = FUN_106a43edc;
  uStack_290 = 0x106a43eec;
  uStack_288 = 0;
  puStack_2d8 = &uStack_2e0;
  uStack_2e0 = 0;
  uStack_2d0 = 0x3032000000;
  pcStack_2c8 = FUN_106a43edc;
  uStack_2c0 = 0x106a43eec;
  uStack_2b8 = 0;
  puStack_2f8 = &uStack_300;
  uStack_300 = 0;
  uStack_2f0 = 0x2020000000;
  uStack_2e8 = 0;
  puStack_328 = &uStack_330;
  uStack_330 = 0;
  uStack_320 = 0x3032000000;
  pcStack_318 = FUN_106a43edc;
  uStack_310 = 0x106a43eec;
  uStack_308 = 0;
  puStack_358 = &uStack_360;
  uStack_360 = 0;
  uStack_350 = 0x3032000000;
  pcStack_348 = FUN_106a43edc;
  uStack_340 = 0x106a43eec;
  uStack_338 = 0;
  puStack_388 = &uStack_390;
  uStack_390 = 0;
  uStack_380 = 0x3032000000;
  pcStack_378 = FUN_106a43edc;
  uStack_370 = 0x106a43eec;
  uStack_368 = 0;
  puStack_3b8 = &uStack_3c0;
  uStack_3c0 = 0;
  uStack_3b0 = 0x3032000000;
  pcStack_3a8 = FUN_106a43edc;
  uStack_3a0 = 0x106a43eec;
  uStack_398 = 0;
  puStack_3d8 = &uStack_3e0;
  uStack_3e0 = 0;
  uStack_3d0 = 0x2020000000;
  uStack_3c8 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  lVar2 = puStack_198[5];
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfb8ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = puStack_198[5];
    puStack_198[5] = uVar1;
    _objc_release(uVar18);
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0ffbc0();
  if (lVar2 != 5) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c0ffbc0();
    if (lVar2 == 2) {
      lVar2 = param_1;
      func_0x00010bdc9d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      _objc_retain(lVar2);
      lVar4 = lVar2;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar5 = *plStack_130;
        do {
          lVar19 = 0;
          do {
            if (*plStack_130 != lVar5) {
              _objc_enumerationMutation(lVar2);
            }
            uVar3 = *(ulong *)(lStack_138 + lVar19 * 8);
            FUN_106a44c90();
            if ((uVar3 & 1) != 0) goto LAB_106a435cc;
            lVar19 = lVar19 + 1;
          } while (lVar4 != lVar19);
          lVar4 = lVar2;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
LAB_106a435cc:
      _objc_release(lVar2);
      _objc_release(lVar2);
      _objc_release(lVar2);
    }
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0ffbc0();
  func_0x00010c0ffbc0();
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c0ffbc0();
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar4 == 1) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_550 = *(long *)(param_1 + 8);
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6c60();
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f1e60();
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b040();
    lVar4 = puStack_2a8[5];
    lStack_590 = lVar4;
    if (lVar4 == 0) {
      lStack_590 = param_1;
      func_0x00010bde21e0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252000();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21420();
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010bf4ed60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010c063e60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bf4d260();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27c4a0();
    lVar2 = lVar5;
    func_0x00010bf82a40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    if (lVar4 == 0) {
      _objc_release(lStack_590);
    }
    _objc_release(uVar18);
    _objc_release(uVar1);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6c60();
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b040();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21420();
    lVar4 = puStack_2a8[5];
    lStack_5a8 = lVar4;
    if (lVar4 == 0) {
      lStack_5a8 = param_1;
      func_0x00010bde21e0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f1e60();
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252000();
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bf4ed60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010c063e60();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27c4a0();
    uVar15 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar15;
    func_0x00010bf4d260();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 8);
    func_0x00010c29d440();
    _objc_retainAutoreleasedReturnValue();
    lStack_550 = lVar5;
    func_0x00010bfb7ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(uVar12);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    if (lVar4 == 0) {
      _objc_release(lStack_5a8);
    }
    _objc_release(uVar6);
    _objc_release(uVar18);
    _objc_release(uVar1);
    _objc_release(lVar5);
    if (lVar2 == 7) {
      lVar4 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126ae820;
      _objc_opt_new();
      lVar2 = lVar4;
      func_0x00010c25a300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      _objc_release(lVar4);
      if (lVar2 != 0) {
        lVar4 = lStack_550;
        func_0x00010bf09f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lStack_550);
        lStack_550 = lVar4;
      }
      _objc_release(lVar2);
    }
    lVar2 = param_1;
    func_0x00010bdd2b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be94b00(param_1);
    _objc_release(lVar2);
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar5 == 0) goto LAB_106a43c94;
    func_0x00010c1019a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lStack_550;
    func_0x00010bf09f60(lStack_550);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lStack_550);
  _objc_release(lVar5);
  lStack_550 = lVar2;
LAB_106a43c94:
  __Block_object_dispose(&uStack_3e0,8);
  __Block_object_dispose(&uStack_3c0,8);
  _objc_release(uStack_398);
  __Block_object_dispose(&uStack_390,8);
  _objc_release(uStack_368);
  __Block_object_dispose(&uStack_360,8);
  _objc_release(uStack_338);
  __Block_object_dispose(&uStack_330,8);
  _objc_release(uStack_308);
  __Block_object_dispose(&uStack_300,8);
  __Block_object_dispose(&uStack_2e0,8);
  _objc_release(uStack_2b8);
  __Block_object_dispose(&uStack_2b0,8);
  _objc_release(uStack_288);
  __Block_object_dispose(&uStack_280,8);
  __Block_object_dispose(&uStack_260,8);
  _objc_release(uStack_238);
  __Block_object_dispose(&uStack_230,8);
  __Block_object_dispose(&uStack_210,8);
  _objc_release(uStack_1e8);
  __Block_object_dispose(&uStack_1e0,8);
  __Block_object_dispose(&uStack_1c0,8);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(uStack_178);
  __Block_object_dispose(&uStack_170,8);
  lVar2 = lStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_3e0,8);
    __Block_object_dispose(&uStack_3c0,8);
    __Block_object_dispose(&uStack_390,8);
    __Block_object_dispose(&uStack_360,8);
    __Block_object_dispose(&uStack_330,8);
    __Block_object_dispose(&uStack_300,8);
    __Block_object_dispose(&uStack_2e0,8);
    __Block_object_dispose(&uStack_2b0,8);
    __Block_object_dispose(&uStack_280,8);
    __Block_object_dispose(&uStack_260,8);
    __Block_object_dispose(&uStack_230,8);
    __Block_object_dispose(&uStack_210,8);
    __Block_object_dispose(&uStack_1e0,8);
    __Block_object_dispose(&uStack_1c0,8);
    __Block_object_dispose(&uStack_1a0,8);
    lVar4 = 8;
    __Block_object_dispose(&uStack_170);
    __Unwind_Resume();
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lStack_550);
  return;
}



/* Entry: 106a43edc; end: 106a43ef3;  */

void FUN_106a43edc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a43ef4; end: 106a44133;  */

void FUN_106a43ef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_6;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_7;
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = param_9;
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_10;
  _objc_retain(param_10);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = param_11;
  lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_13;
  _objc_retain(param_13);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_14;
  _objc_retain(param_14);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_15;
  _objc_retain(param_15);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_16;
  _objc_retain(param_16);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 8) + 0x18) = param_17;
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_3);
  _objc_release(param_10);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106a44134; end: 106a442d3;  */

void FUN_106a44134(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  return;
}



/* Entry: 106a442d4; end: 106a442db;  */

void FUN_106a442d4(void)

{
  return;
}



/* Entry: 106a442dc; end: 106a4443b;  */

void FUN_106a442dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_4;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a4443c; end: 106a44447;  */

void FUN_106a4443c(void)

{
  return;
}



/* Entry: 106a44448; end: 106a4451b;  */

void FUN_106a44448(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = param_5;
  _objc_release(param_4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4451c; end: 106a44553;  */

void FUN_106a4451c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a44554; end: 106a44563;  */

void FUN_106a44554(void)

{
  return;
}



/* Entry: 106a44564; end: 106a44603; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider _resolveInterstitialAugmentationIfNeeded:] */

void FUN_106a44564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x48) == 0) && (lVar3 = *(long *)(param_1 + 0x40), lVar3 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f1e60();
    func_0x00010c071560(lVar3,param_2,uVar2);
    _objc_release(uVar1);
    if ((int)lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf102a0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


