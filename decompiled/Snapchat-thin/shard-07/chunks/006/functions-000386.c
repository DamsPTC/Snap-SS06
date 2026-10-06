/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057030ec; end: 10570312f; -[SCAvatarComposerBuilderPreviewLensViewController viewDidDisappear:] */

void FUN_1057030ec(undefined8 param_1)

{
  func_0x00010570320c();
  func_0x000105703250(param_1,PTR_s_viewDidDisappear__112684c48);
  func_0x0001057031f0();
  func_0x00010c29c8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105703220();
  func_0x000105703248();
  return;
}



/* Entry: 105703130; end: 105703173; -[SCAvatarComposerBuilderPreviewLensViewController viewWillDisappear:] */

void FUN_105703130(undefined8 param_1)

{
  func_0x00010570320c();
  func_0x000105703250(param_1,PTR_s_viewWillDisappear__112685438);
  func_0x0001057031f0();
  func_0x00010c29e8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105703220();
  func_0x000105703248();
  return;
}



/* Entry: 105703174; end: 105703183; -[SCAvatarComposerBuilderPreviewLensViewController onFatalErrorObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105703174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127283ac);
}



/* Entry: 105703184; end: 1057031ef; -[SCAvatarComposerBuilderPreviewLensViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105703184(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127283c0,0);
  _objc_destroyWeak(param_1 + _DAT_1127283bc);
  func_0x00010570323c((long)_DAT_1127283b4);
  func_0x00010570323c((long)_DAT_1127283b0);
  func_0x00010570323c((long)_DAT_1127283ac);
  func_0x00010570323c((long)_DAT_1127283a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127283a4,0);
  return;
}



/* Entry: 1057031f0; end: 10570327b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1057031f0(void)

{
  return PTR_PTR_1126bd5f8;
}



/* Entry: 10570327c; end: 105704197; -[SCAvatarComposerBuilderViewController initWithValdiRuntimeProvider:composerCoreUIServices:networkingClient:performerProvider:bitmojiFriendAvatarProvider:flowMode:gender:avatarType:avatarBuilderPage:source:isFromLiveMirror:alertPresenterUIContainer:sessionId:dropId:category:sectionId:bitmojiAvatarBuilderReferrer:granularSource:dropFetcher:avatarBuilderLogger:bitmojiAvatarProvider:preferences:glbFetcher:initialAvatarOptionIds:avatarStateHistoryJson:outfitTryOnInfo:subscriptionInfoProvider:generativeContentReportScopeExposer:modalPresentationStyle:previewViewProvider:cameraManager:composerAnimatedImageViewFactory:bitmojiFlatlandInfoProvider:isLiveMirrorSupported:bitmojiAvatarBuilderLensScopeExposer:bitmojiAvatarBuilderLensScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10570327c(double param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined1 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 *puStack_2f8;
  long lStack_280;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105704c00();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000048);
  func_0x000105704bdc();
  func_0x000105704bf8();
  _objc_retain(in_stack_00000060);
  _objc_retain(in_stack_00000068);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000078);
  _objc_retain(in_stack_00000080);
  _objc_retain(in_stack_00000088);
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_00000098);
  _objc_retain(in_stack_000000a0);
  _objc_retain(in_stack_000000a8);
  _objc_retain(in_stack_000000b8);
  _objc_retain(in_stack_000000c0);
  _objc_retain(in_stack_000000c8);
  _objc_retain(in_stack_000000d0);
  _objc_retain(in_stack_000000e0);
  _objc_retain(in_stack_000000e8);
  puStack_a8 = PTR_PTR_1126e9e10;
  puVar28 = &uStack_b0;
  puVar3 = PTR_s_init_1125d9248;
  uStack_b0 = param_2;
  _objc_msgSendSuper2(puVar28,PTR_s_init_1125d9248);
  if (puVar28 != (undefined8 *)0x0) {
    lVar29 = (long)_DAT_1127283c4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar28 + lVar29);
    *(undefined8 *)((long)puVar28 + lVar29) = param_8;
    _objc_release(uVar2);
    *(long *)((long)puVar28 + (long)_DAT_1127283c8) = in_stack_00000008;
    lVar29 = (long)_DAT_1127283cc;
    func_0x000105704bdc();
    uVar2 = *(undefined8 *)((long)puVar28 + lVar29);
    *(long *)((long)puVar28 + lVar29) = in_stack_00000070;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar28 + (long)_DAT_1127283d0);
    *(undefined **)((long)puVar28 + (long)_DAT_1127283d0) = puVar3;
    _objc_release(uVar2);
    lVar29 = (long)_DAT_1127283d4;
    func_0x000105704bdc();
    uVar2 = *(undefined8 *)((long)puVar28 + lVar29);
    *(undefined8 *)((long)puVar28 + lVar29) = in_stack_000000a8;
    _objc_release(uVar2);
    lVar31 = (long)_DAT_1127283d8;
    func_0x000105704bf8();
    uVar2 = *(undefined8 *)((long)puVar28 + lVar31);
    *(undefined8 *)((long)puVar28 + lVar31) = in_stack_000000c0;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar28 + (long)_DAT_1127283dc) = in_stack_000000d8;
    lVar30 = (long)_DAT_1127283e0;
    func_0x000105704bf8();
    uVar2 = *(undefined8 *)((long)puVar28 + lVar30);
    *(undefined8 *)((long)puVar28 + lVar30) = in_stack_000000d0;
    _objc_release(uVar2);
    lVar29 = (long)_DAT_1127283e4;
    func_0x000105704bdc();
    uVar2 = *(undefined8 *)((long)puVar28 + lVar29);
    *(undefined8 *)((long)puVar28 + lVar29) = in_stack_000000e0;
    _objc_release(uVar2);
    lVar29 = (long)_DAT_1127283e8;
    func_0x000105704bf8();
    uVar2 = *(undefined8 *)((long)puVar28 + lVar29);
    *(undefined8 *)((long)puVar28 + lVar29) = in_stack_00000080;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar2 = *(undefined8 *)((long)puVar28 + (long)_DAT_1127283ec);
    *(undefined **)((long)puVar28 + (long)_DAT_1127283ec) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126bd600;
    _objc_alloc();
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040b80();
    func_0x000105704c38();
    func_0x000105704b94();
    func_0x00010c1c1bc0(puVar4);
    puVar3 = PTR_PTR_1126bd608;
    _objc_alloc();
    func_0x00010bde3d40(puVar28);
    func_0x00010bc9107c(in_stack_00000018);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c013980();
    func_0x000105704bd4();
    func_0x000105704c94();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704c18();
    func_0x00010c1a2620();
    func_0x000105704b94();
    func_0x000105704c94();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704c18();
    func_0x00010c1d7e80();
    func_0x000105704b94();
    func_0x00010c192020(puVar5);
    func_0x00010c1a4260(puVar5);
    if (in_stack_00000098 != 0) {
      puVar3 = PTR_PTR_1126bd610;
      _objc_alloc_init();
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_105704198;
      puStack_c0 = &UNK_1108450c8;
      _objc_retain();
      puStack_100 = puVar6;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_1057041a4;
      puStack_e8 = &UNK_110850398;
      puStack_e0 = puVar3;
      puStack_b8 = puVar3;
      func_0x000105704bf8();
      func_0x00010c0bdf20(in_stack_00000098);
      func_0x00010c1d6e20(puVar5);
      _objc_release(puStack_e0);
      _objc_release(puStack_b8);
      func_0x000105704b94();
    }
    if (in_stack_00000040 != 0) {
      func_0x000105704ca0();
      func_0x0001056ff5b8();
      func_0x00010c0df760(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000105704c18();
      func_0x00010c17a060();
      func_0x000105704b94();
      func_0x00010c181f40(puVar5);
    }
    func_0x000105704c94();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704c18();
    func_0x00010c1b1480();
    func_0x000105704b94();
    func_0x00010c1708a0(puVar5);
    lVar29 = in_stack_00000070;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704b94();
    uVar2 = param_5;
    func_0x00010beff660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7600();
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704bb0();
    func_0x000105704b94();
    puVar6 = PTR_PTR_1126bd618;
    _objc_alloc_init();
    func_0x00010c18b5e0(puVar6);
    _objc_initWeak(auStack_108,puVar28);
    lVar7 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704b94();
    lVar31 = *(long *)((long)puVar28 + lVar31);
    if (lVar31 == 0) {
      lStack_280 = 0;
    }
    else {
      param_1 = 1.60807493534087e-314;
      _objc_copyWeak(auStack_110,auStack_108);
      func_0x000105704bdc();
      uStack_118 = in_stack_000000b8;
      _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
      lStack_280 = lVar7;
      func_0x00010c0b7ac0();
      _objc_retainAutoreleasedReturnValue();
      puStack_2f8 = &uStack_118;
    }
    func_0x00010c269d40(in_stack_000000b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    func_0x000105704b94();
    puVar8 = PTR_PTR_1126bd620;
    _objc_alloc();
    func_0x00010bde3b40(puVar28);
    func_0x00010be00fc0(puVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    puVar3 = PTR_PTR_1126bd628;
    _objc_alloc();
    func_0x00010c0564a0();
    uVar9 = param_5;
    func_0x00010beef000();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7620();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar28;
    func_0x00010be482a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02eea0(param_1 * 1000.0);
    _objc_release(puVar10);
    func_0x000105704c38();
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(puVar3);
    func_0x000105704bd4();
    func_0x000105704bb0();
    func_0x000105704b94();
    func_0x00010c1fb340(puVar8);
    lVar11 = in_stack_00000090;
    func_0x00010c08fa60();
    if (lVar11 != 0) {
      func_0x00010c16dbe0(puVar8);
    }
    lVar11 = lVar29;
    func_0x00010c08fa60();
    if ((in_stack_00000008 == 0) && (lVar11 != 0)) {
      func_0x00010c1ac8a0(puVar8);
    }
    func_0x00010c269d40(in_stack_000000a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b4840(puVar8);
    func_0x000105704c38();
    func_0x000105704bd4();
    func_0x000105704bb0();
    func_0x000105704b94();
    func_0x00010c269d40(in_stack_000000a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a5e00(puVar8);
    func_0x000105704c38();
    func_0x000105704bd4();
    func_0x000105704bb0();
    func_0x000105704b94();
    func_0x00010c177720(puVar8);
    uVar12 = *(undefined8 *)((long)puVar28 + lVar30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar12;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14fa80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704bb0();
    func_0x000105704b94();
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704ca0();
    func_0x00010bf4bb00(uVar9);
    func_0x00010c0df6e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704c08();
    func_0x00010c21dc80();
    func_0x000105704b94();
    func_0x00010c269d40(in_stack_000000c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704c08();
    func_0x00010c167ec0();
    func_0x000105704b94();
    func_0x000105704bf8();
    func_0x00010c178d60(puVar8);
    func_0x000105704c94();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704c08();
    func_0x00010c1be440();
    func_0x000105704b94();
    puVar14 = PTR_PTR_1126bd630;
    _objc_alloc();
    func_0x00010c011540();
    puVar3 = puVar14;
    FUN_1056ff5dc(lVar7,puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704c08();
    func_0x00010c16db60();
    func_0x000105704b94();
    puVar15 = PTR_PTR_1126bd638;
    _objc_alloc();
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    func_0x000105704bd4();
    func_0x000105704bb0();
    func_0x00010c219b60(puVar15);
    func_0x00010c29bf00(puVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704cac();
    func_0x00010befbb60();
    func_0x000105704bb0();
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar16 = puVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar28;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar15;
    puStack_a0 = puVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar28;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar15;
    puStack_98 = puVar22;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar28;
    func_0x00010c29bf00(puVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar25;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar28;
    func_0x00010c29bf00(puVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar27);
    _objc_release(puVar15);
    func_0x000105704bd4();
    _objc_release(puVar26);
    func_0x000105704bb0();
    _objc_release(puVar25);
    func_0x000105704c38();
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar10);
    _objc_release(puVar16);
    func_0x000105704b94();
    _objc_release(puVar14);
    _objc_release(in_stack_000000c0);
    _objc_release(puVar13);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(lStack_280);
    if (lVar31 != 0) {
      _objc_release(*puStack_2f8);
      func_0x000105704c74();
    }
    _objc_release(lVar7);
    _objc_destroyWeak(auStack_108);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(lVar29);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  func_0x00010c1c8b80(puVar28);
  _objc_release(in_stack_000000e8);
  _objc_release(in_stack_000000e0);
  _objc_release(in_stack_000000d0);
  _objc_release(in_stack_000000c8);
  _objc_release(in_stack_000000c0);
  _objc_release(in_stack_000000b8);
  _objc_release(in_stack_000000a8);
  _objc_release(in_stack_000000a0);
  _objc_release(in_stack_00000098);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000088);
  _objc_release(in_stack_00000080);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000068);
  _objc_release(in_stack_00000060);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar28;
  }
  ___stack_chk_fail();
  func_0x000105704c74();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  puVar28 = *(undefined8 **)(param_4 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010c19fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar28,PTR_s_setFriendAvatarId__1126458a8,puVar3);
  return puVar28;
}



/* Entry: 105704198; end: 1057041a3;  */

void FUN_105704198(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setFriendAvatarId__1126458a8,param_2);
  return;
}



/* Entry: 1057041a4; end: 1057041eb;  */

void FUN_1057041a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000105704c00();
  func_0x00010c1957a0(uVar1);
  func_0x00010c219300(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057041ec; end: 10570422f;  */

void FUN_1057041ec(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1ac80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105704bb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105704230; end: 105704233;  */

void FUN_105704230(void)

{
  return;
}



/* Entry: 105704234; end: 1057042d7;  */

void FUN_105704234(undefined8 param_1,undefined8 param_2)

{
  func_0x000105704ca0(param_2);
  func_0x00010c080120();
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1057042d8; end: 10570438b; -[SCAvatarComposerBuilderViewController viewDidLoad] */

void FUN_1057042d8(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e9e10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  func_0x000105704bd4();
  func_0x000105704bb0();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  func_0x000105704b94();
  return;
}



/* Entry: 10570438c; end: 105704393; -[SCAvatarComposerBuilderViewController shouldPopToRootViewController] */

undefined8 FUN_10570438c(void)

{
  return 0;
}



/* Entry: 105704394; end: 10570439f; -[SCAvatarComposerBuilderViewController timeBeforeReturningToCamera] */

undefined8 FUN_105704394(void)

{
  return 0x4082c00000000000;
}



/* Entry: 1057043a0; end: 1057043af; -[SCAvatarComposerBuilderViewController _composerFlowModeForFlowMode:] */

undefined4 FUN_1057043a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)param_3;
  if (3 < param_3) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 1057043b0; end: 1057043bb; -[SCAvatarComposerBuilderViewController _composerAvatarTypeForAvatarType:] */

bool FUN_1057043b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 1057043bc; end: 10570443f; -[SCAvatarComposerBuilderViewController nativeBuilderServiceDidSaveOutfitChange:avatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057043bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = (long)_DAT_1127283f0;
  uVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_opt_respondsToSelector();
  func_0x000105704bd4();
  if ((uVar1 & 1) != 0) {
    _objc_loadWeakRetained(param_1 + lVar2);
    func_0x00010bf12d40();
    func_0x000105704bd4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105704440; end: 1057044d3; -[SCAvatarComposerBuilderViewController _didTapOnDismissButton] */

void FUN_105704440(void)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  puVar1 = auStack_50;
  func_0x000105704bb8();
  func_0x000105704b64();
  uStack_48 = 0xc2000000;
  func_0x000105704b74(0x105704498);
  _objc_retainBlock(auStack_50);
  func_0x000105704c40();
  func_0x000105704c28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057044d4; end: 1057045ff; -[SCAvatarComposerBuilderViewController _didTapOnDismissButtonWithAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057044d4(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000105704bc4();
  func_0x00010c08fa60();
  if (unaff_x19 == 0) {
    func_0x00010be290a0();
  }
  else if (*(long *)(unaff_x20 + _DAT_1127283c8) == 0) {
    func_0x00010c269d40(*(undefined8 *)(unaff_x20 + _DAT_1127283cc));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283ac0();
    func_0x000105704bd4();
    func_0x00010be288c0();
  }
  else if (*(long *)(unaff_x20 + _DAT_1127283c8) == 1) {
    func_0x000105704c7c(auStack_38);
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1127283c4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105704b64();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c287e60(uVar1);
    func_0x000105704bb0();
    _objc_destroyWeak(auStack_40);
    func_0x000105704c8c();
  }
  func_0x000105704b94();
  return;
}



/* Entry: 105704600; end: 105704623;  */

void FUN_105704600(undefined8 param_1)

{
  func_0x000105704c30();
  func_0x00010be288c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105704624; end: 10570468f; -[SCAvatarComposerBuilderViewController _handleDismissWithSuccess] */

void FUN_105704624(void)

{
  long unaff_x19;
  
  func_0x000105704bb8();
  func_0x000105704b64();
  func_0x000105704b9c(0x10570466c,0xc2000000);
  func_0x000105704c48();
  func_0x000105704b54();
  _objc_destroyWeak(unaff_x19 + 0x20);
  func_0x000105704c28();
  return;
}



/* Entry: 105704690; end: 1057046df; -[SCAvatarComposerBuilderViewController _handleDismissWithSuccessHelper] */

void FUN_105704690(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000105704cb8();
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105704c84();
  if (unaff_x20 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(unaff_x19 + unaff_x21));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x000105704c58();
  func_0x000105704cac();
  func_0x00010bf12d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1057046e0; end: 10570474b; -[SCAvatarComposerBuilderViewController _handleExit] */

void FUN_1057046e0(void)

{
  long unaff_x19;
  
  func_0x000105704bb8();
  func_0x000105704b64();
  func_0x000105704b9c(0x105704728,0xc2000000);
  func_0x000105704c48();
  func_0x000105704b54();
  _objc_destroyWeak(unaff_x19 + 0x20);
  func_0x000105704c28();
  return;
}



/* Entry: 10570474c; end: 10570479b; -[SCAvatarComposerBuilderViewController _handleExitHelper] */

void FUN_10570474c(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000105704cb8();
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105704c84();
  if (unaff_x20 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(unaff_x19 + unaff_x21));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x000105704c58();
  func_0x000105704cac();
  func_0x00010bf12d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10570479c; end: 105704833; -[SCAvatarComposerBuilderViewController _generateCaptureVideoPreviewViewWithPreviewViewProvider:] */

void FUN_10570479c(void)

{
  undefined8 unaff_x19;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000105704bc4();
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbf200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105704bd4();
  func_0x000105704c7c(auStack_38);
  func_0x000105704b64();
  func_0x000105704b9c(FUN_105704834,0xc2000000);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000105704b54();
  func_0x000105704c40();
  func_0x000105704c8c();
  func_0x000105704b94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 105704834; end: 105704857;  */

void FUN_105704834(undefined8 param_1)

{
  func_0x000105704c30();
  func_0x00010bebf9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105704858; end: 105704867; -[SCAvatarComposerBuilderViewController _startCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105704858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127283d8),PTR_s_startCamera_1126712a8);
  return;
}



/* Entry: 105704868; end: 105704877; -[SCAvatarComposerBuilderViewController _stopCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105704868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127283d8),PTR_s_stopCamera_1126730f8);
  return;
}



/* Entry: 105704878; end: 1057048cf; -[SCAvatarComposerBuilderViewController _launchReportFlow] */

void FUN_105704878(void)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  puVar1 = auStack_50;
  func_0x000105704bb8();
  func_0x000105704b64();
  uStack_48 = 0xc2000000;
  func_0x000105704b74(FUN_1057048d0);
  _objc_retainBlock(auStack_50);
  func_0x000105704c40();
  func_0x000105704c28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057048d0; end: 10570491f;  */

void FUN_1057048d0(long param_1)

{
  func_0x000105704c00();
  func_0x000105704bdc();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be482c0();
  func_0x000105704b94();
  func_0x000105704bb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105704920; end: 1057049c7; -[SCAvatarComposerBuilderViewController _launchReportFlowWithUrl:prompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105704920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bd640;
  _objc_retain(param_4);
  func_0x000105704bdc();
  _objc_alloc(puVar1);
  func_0x00010c003f20();
  func_0x000105704b94();
  func_0x000105704bb0();
  puVar2 = PTR_PTR_1126bd648;
  _objc_alloc(PTR_PTR_1126bd648);
  func_0x00010c0338e0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127283d4),param_2,puVar2);
  func_0x000105704b94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057049c8; end: 105704a1b; -[SCAvatarComposerBuilderViewController generativeContentReportDidCompleteWithCancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057049c8(long param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = (long)_DAT_1127283d4;
  func_0x00010c150520(*(undefined8 *)(param_1 + lVar1));
  _objc_retainAutoreleasedReturnValue();
  func_0x000105704c84();
  if (unaff_x20 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar1));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105704a1c; end: 105704a97; -[SCAvatarComposerBuilderViewController viewFinderDidDetach:] */

void FUN_105704a1c(void)

{
  undefined1 auStack_28 [8];
  
  func_0x000105704bc4();
  func_0x000105704c7c(auStack_28);
  func_0x000105704b64();
  func_0x000105704b74(0x105704a74);
  func_0x000105704b54();
  func_0x000105704c40();
  func_0x000105704c28();
  func_0x000105704b94();
  return;
}



/* Entry: 105704a98; end: 105704ab7; -[SCAvatarComposerBuilderViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105704a98(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127283f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105704ab8; end: 105704acb; -[SCAvatarComposerBuilderViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105704ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127283f0,param_3);
  return;
}



/* Entry: 105704acc; end: 105704b47; -[SCAvatarComposerBuilderViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105704acc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127283f0);
  FUN_105704b48((long)_DAT_1127283e8);
  FUN_105704b48((long)_DAT_1127283ec);
  FUN_105704b48((long)_DAT_1127283e4);
  FUN_105704b48((long)_DAT_1127283e0);
  FUN_105704b48((long)_DAT_1127283d8);
  FUN_105704b48((long)_DAT_1127283d0);
  FUN_105704b48((long)_DAT_1127283d4);
  FUN_105704b48((long)_DAT_1127283cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127283c4,0);
  return;
}



/* Entry: 105704b48; end: 105704ccb;  */

void FUN_105704b48(long param_1)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(unaff_x19 + param_1,0);
  return;
}



/* Entry: 105704ccc; end: 105704de7; -[SCAvatarComposerBuilderPreviewLensView initWithFrame:onFatalErrorObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105704ccc(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000105705390();
  func_0x000105705324();
  puVar1 = &stack0xffffffffffffffb0;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_alloc_init(PTR_PTR_1126ae820);
    func_0x000105705378();
    _objc_opt_new(PTR_PTR_1126ae810);
    func_0x000105705378();
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(puVar1 + _DAT_1127283fc);
    *(undefined **)(puVar1 + _DAT_1127283fc) = puVar2;
    _objc_release(uVar3);
    func_0x0001057053c4();
    func_0x000105705334(FUN_105704de8);
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    func_0x0001057053ac();
    func_0x000105705358();
    func_0x000105705388();
  }
  func_0x00010570532c();
  return puVar1;
}



/* Entry: 105704de8; end: 105704e1b;  */

void FUN_105704de8(undefined8 param_1)

{
  func_0x000105705368();
  func_0x0001057053a4();
  func_0x00010c0e41c0();
  func_0x00010570532c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105704e1c; end: 105704e23; -[SCAvatarComposerBuilderPreviewLensView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_105704e1c(void)

{
  return 1;
}



/* Entry: 105704e24; end: 105704e33; -[SCAvatarComposerBuilderPreviewLensView loadAvatarConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105704e24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127283f4),PTR_s_next__112614028);
  return;
}



/* Entry: 105704e34; end: 105704ed3; -[SCAvatarComposerBuilderPreviewLensView onLensPreviewRenderCompleteValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105704e34(void)

{
  long unaff_x21;
  long unaff_x22;
  
  func_0x000105705314();
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057052b8();
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105705304();
  if (unaff_x22 == 0) {
    func_0x00010b97f424();
    func_0x00010570539c();
    func_0x0001057053d0(*(undefined8 *)(unaff_x21 + _DAT_112728400));
    func_0x0001057052a8();
  }
  func_0x0001057053b4();
  func_0x0001057053bc();
  func_0x000105705360();
  func_0x00010570532c();
  return;
}



/* Entry: 105704ed4; end: 105704f73; -[SCAvatarComposerBuilderPreviewLensView onLensMetricValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105704ed4(void)

{
  long unaff_x21;
  long unaff_x22;
  
  func_0x000105705314();
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057052b8();
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105705304();
  if (unaff_x22 == 0) {
    func_0x00010b97f424();
    func_0x00010570539c();
    func_0x0001057053d0(*(undefined8 *)(unaff_x21 + _DAT_112728404));
    func_0x0001057052a8();
  }
  func_0x0001057053b4();
  func_0x0001057053bc();
  func_0x000105705360();
  func_0x00010570532c();
  return;
}



/* Entry: 105704f74; end: 10570500f; -[SCAvatarComposerBuilderPreviewLensView onFatalErrorValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105704f74(void)

{
  long unaff_x21;
  
  func_0x000105705314();
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057052b8();
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105705304();
  func_0x00010b97f424();
  func_0x00010570539c();
  func_0x0001057053d0(*(undefined8 *)(unaff_x21 + _DAT_112728408));
  func_0x0001057052a8();
  func_0x0001057053b4();
  func_0x0001057053bc();
  func_0x000105705360();
  func_0x00010570532c();
  return;
}



/* Entry: 105705010; end: 1057050eb; -[SCAvatarComposerBuilderPreviewLensView setIncomingComposerMessageObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105705010(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x000105705390();
  func_0x000105705324();
  func_0x0001057053c4();
  func_0x00010bf86d80(*(undefined8 *)(unaff_x20 + _DAT_1127283f8));
  lVar1 = (long)_DAT_11272840c;
  _objc_retain();
  func_0x0001057053d8();
  _objc_release();
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  func_0x000105705334(FUN_1057050ec);
  func_0x00010c25ff60(uVar2,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  func_0x0001057053ac();
  func_0x000105705358();
  func_0x000105705388();
  func_0x00010570532c();
  return;
}



/* Entry: 1057050ec; end: 10570517f;  */

void FUN_1057050ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000105705368();
  lVar1 = unaff_x19;
  func_0x00010c0cba00();
  if (lVar1 == 2) {
    func_0x0001057053a4();
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e4d80(lVar1,param_2,unaff_x19);
  }
  else {
    if (lVar1 != 1) goto LAB_105705174;
    func_0x0001057053a4();
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e4da0(lVar1,param_2,unaff_x19);
  }
  func_0x0001057053ac();
  func_0x000105705360();
LAB_105705174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105705180; end: 10570518b; -[SCAvatarComposerBuilderPreviewLensView avatarBuilderAvatarConfigObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105705180(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127283f4);
}



/* Entry: 10570518c; end: 105705197; -[SCAvatarComposerBuilderPreviewLensView onLensPreviewRenderComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10570518c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728400);
}



/* Entry: 105705198; end: 1057051c3; -[SCAvatarComposerBuilderPreviewLensView setOnLensPreviewRenderComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105705198(void)

{
  func_0x000105705390();
  func_0x000105705324();
  func_0x0001057053d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1057051c4; end: 1057051cf; -[SCAvatarComposerBuilderPreviewLensView onLensMetric] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057051c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728404);
}



/* Entry: 1057051d0; end: 1057051fb; -[SCAvatarComposerBuilderPreviewLensView setOnLensMetric:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057051d0(void)

{
  func_0x000105705390();
  func_0x000105705324();
  func_0x0001057053d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1057051fc; end: 105705207; -[SCAvatarComposerBuilderPreviewLensView onFatalError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057051fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728408);
}



/* Entry: 105705208; end: 105705233; -[SCAvatarComposerBuilderPreviewLensView setOnFatalError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105705208(void)

{
  func_0x000105705390();
  func_0x000105705324();
  func_0x0001057053d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105705234; end: 10570523f; -[SCAvatarComposerBuilderPreviewLensView incomingComposerMessageObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105705234(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272840c);
}



/* Entry: 105705240; end: 1057052a7; -[SCAvatarComposerBuilderPreviewLensView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105705240(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112728408,0);
  func_0x0001057052d8((long)_DAT_112728404);
  func_0x0001057052d8((long)_DAT_112728400);
  func_0x0001057052d8((long)_DAT_1127283fc);
  func_0x0001057052d8((long)_DAT_1127283f8);
  func_0x0001057052d8((long)_DAT_11272840c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127283f4,0);
  return;
}



/* Entry: 1057052a8; end: 1057053e3;  */

void FUN_1057052a8(void)

{
  long *unaff_x24;
  
                    /* WARNING: Could not recover jumptable at 0x0001057052b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x24 + 8))();
  return;
}



/* Entry: 1057053e4; end: 10570548b; -[SCAvatarBuilderMirrorResult initWithStatus:avatar:debugCroppedImage:] */

undefined1 *
FUN_1057053e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  func_0x000105706470();
  puStack_38 = PTR_PTR_1126e9e20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x0001057064a8();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    func_0x000105706470();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  func_0x000105706450();
  func_0x00010570643c();
  return (undefined1 *)puVar1;
}



/* Entry: 10570548c; end: 105705493; -[SCAvatarBuilderMirrorResult status] */

undefined8 FUN_10570548c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105705494; end: 10570549b; -[SCAvatarBuilderMirrorResult avatar] */

undefined8 FUN_105705494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10570549c; end: 1057054a3; -[SCAvatarBuilderMirrorResult debugCroppedImage] */

undefined8 FUN_10570549c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057054a4; end: 1057054cf; -[SCAvatarBuilderMirrorResult .cxx_destruct] */

void FUN_1057054a4(long param_1)

{
  func_0x000105706480(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1057054d0; end: 10570573f; -[SCAvatarBuilderMirrorClassifier initWithModelData:configData:circumstanceEngine:] */

undefined8 *
FUN_1057054d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 auStack_120 [8];
  undefined4 uStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_5;
  func_0x000105706498();
  func_0x000105706470();
  _objc_retain(param_5);
  puStack_70 = PTR_PTR_1126e9e28;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  lVar4 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be20880(&uStack_80,PTR_PTR_1126bd5c8);
    uVar7 = uStack_80;
    uStack_80 = 0;
    FUN_105706414(puVar1 + 1,uVar7);
    func_0x0001057063f0(&uStack_80);
    puVar2 = PTR_PTR_1126bd650;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___CIDetector_1126bd658;
    uStack_68 = *(undefined8 *)PTR__CIDetectorAccuracy_11034ac30;
    uStack_60 = *(undefined8 *)PTR__CIDetectorAccuracyLow_11034ac40;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0115c0();
    uVar7 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar7);
    _objc_release(puVar3);
    func_0x000105706460();
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0x19;
    puVar6 = (undefined8 *)0x0;
    func_0x00010c021520();
    uVar7 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar7);
    func_0x000105706460();
    _objc_retain(param_5);
    lVar4 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release();
  }
  func_0x0001057064b8();
  func_0x000105706450();
  func_0x00010570643c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000105706460();
  func_0x0001057064b8();
  func_0x000105706450();
  func_0x00010570643c();
  func_0x000105706458();
  __Unwind_Resume();
  func_0x000105706498();
  func_0x000105706470();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_105705900;
  puStack_f0 = &UNK_1108abf58;
  func_0x000105706470();
  ppuVar5 = &puStack_108;
  puStack_e8 = puVar6;
  _objc_retainBlock();
  if (param_4 == 0) {
    puVar3 = PTR_PTR_1126bd660;
    _objc_alloc(PTR_PTR_1126bd660);
    func_0x000105706444();
    (*(code *)ppuVar5[2])(ppuVar5,puVar3);
    _objc_release(puVar3);
  }
  else {
    if (param_4 == 1) {
      uVar8 = 1;
    }
    else {
      uVar8 = 2;
    }
    _objc_initWeak(auStack_110,lVar4);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    _objc_copyWeak(auStack_120,auStack_110);
    func_0x0001057064a8();
    uStack_118 = uVar8;
    _objc_retain(ppuVar5);
    func_0x00010c0f7fc0(uVar7);
    func_0x000105706490();
    func_0x000105706488();
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_110);
  }
  func_0x000105706458();
  puVar1 = puStack_e8;
  _objc_release(puStack_e8);
  func_0x000105706450();
  func_0x00010570643c();
  return puVar1;
}



/* Entry: 105705740; end: 1057058ff; -[SCAvatarBuilderMirrorClassifier classifySelfie:gender:completion:] */

void FUN_105705740(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x000105706498();
  func_0x000105706470();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105705900;
  puStack_70 = &UNK_1108abf58;
  func_0x000105706470();
  ppuVar1 = &puStack_88;
  uStack_68 = param_5;
  _objc_retainBlock();
  if (param_4 == 0) {
    puVar2 = PTR_PTR_1126bd660;
    _objc_alloc(PTR_PTR_1126bd660);
    func_0x000105706444();
    (*(code *)ppuVar1[2])(ppuVar1,puVar2);
    _objc_release(puVar2);
  }
  else {
    if (param_4 == 1) {
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
    }
    _objc_initWeak(auStack_90,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_a0,auStack_90);
    func_0x0001057064a8();
    uStack_98 = uVar4;
    _objc_retain(ppuVar1);
    func_0x00010c0f7fc0(uVar3);
    func_0x000105706490();
    func_0x000105706488();
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_90);
  }
  func_0x000105706458();
  _objc_release(uStack_68);
  func_0x000105706450();
  func_0x00010570643c();
  return;
}



/* Entry: 105705900; end: 1057059c7;  */

void FUN_105705900(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(*(undefined8 *)(param_1 + 0x20));
  func_0x0001057064a8();
  func_0x00010c0f7fc0(param_2);
  func_0x000105706450();
  func_0x000105706488();
  func_0x000105706490();
  func_0x00010570643c();
  return;
}



/* Entry: 1057059c8; end: 1057059d7;  */

void FUN_1057059c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057059d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1057059d8; end: 105705a53;  */

void FUN_1057059d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  func_0x00010bde3300();
  _objc_retainAutoreleasedReturnValue();
  FUN_10570643c();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105705a54; end: 105705ceb; -[SCAvatarBuilderMirrorClassifier _completeSelfieClassificationWithImage:gender:] */

void FUN_105705a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  double unaff_d12;
  double unaff_d13;
  double unaff_d14;
  double unaff_d15;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [24];
  long lStack_110;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined1 auStack_f0 [96];
  
  func_0x000105706498();
  if (param_7 == 0) {
    puVar2 = PTR_PTR_1126bd660;
    _objc_alloc(PTR_PTR_1126bd660);
    func_0x000105706444();
  }
  else {
    func_0x00010be79aa0(auStack_f0,param_5);
    func_0x00010bf6f9e0(*(undefined8 *)(param_5 + 0x10));
    func_0x00010bf961c0(*(undefined8 *)(param_5 + 0x10));
    func_0x0001057064c0();
    puVar2 = PTR_PTR_1126bd650;
    func_0x00010bfe8380(param_7);
    func_0x0001057064a0();
    func_0x0001057064a0();
    func_0x00010c27a520();
    iVar1 = (int)puVar2;
    func_0x0001057064c0();
    _CGRectIsEmpty();
    if (iVar1 == 0) {
      iStack_100 = (int)unaff_d12;
      iStack_fc = (int)unaff_d13;
      iStack_f8 = (int)unaff_d14;
      iStack_f4 = (int)unaff_d15;
      func_0x000109375168(auStack_130,*(undefined8 *)(param_5 + 8),auStack_f0,&iStack_100,param_8);
      puVar2 = PTR_PTR_1126bd660;
      if (lStack_110 == 0) {
        _objc_alloc(PTR_PTR_1126bd660);
        func_0x00010bec2900(param_5);
        func_0x000105706444(puVar2);
      }
      else {
        _objc_alloc();
        func_0x00010bec2900(param_5);
        func_0x00010bed1bc0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be5e020(param_1,param_2,param_3,param_4,param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04c1c0(puVar2);
        func_0x000105706460();
        func_0x000105706458();
      }
      FUN_1057061b4(auStack_128);
    }
    else {
      puVar2 = PTR_PTR_1126bd660;
      _objc_alloc(PTR_PTR_1126bd660);
      func_0x000105706444();
    }
    FUN_105706254(auStack_f0);
  }
  func_0x00010570643c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105705cec; end: 105705d9f; -[SCAvatarBuilderMirrorClassifier _preprocessImage:] */

void FUN_105705cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000105706498();
  func_0x00010bfe8380(param_4);
  func_0x0001057064a0();
  func_0x00010b690f98(auStack_60,param_4);
  func_0x00010c271ac0(param_1,PTR__OBJC_CLASS___UIImage_1126aea68);
  uStack_50 = 0;
  auStack_60[0] = 0x1010000;
  auStack_78[0] = 0x2010000;
  uStack_68 = 0;
  uStack_70 = param_1;
  uStack_58 = param_1;
  func_0x000109ac9fc8(auStack_60,auStack_78,1,0);
  func_0x00010570643c();
  return;
}



/* Entry: 105705da0; end: 105705eef; +[SCAvatarBuilderMirrorClassifier _getMirrorWithModelData:configData:] */

void FUN_105705da0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_x3;
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [256];
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126bd668;
  func_0x00010bf67800(PTR_PTR_1126bd668);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057064b8();
  puVar2 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bf25f00();
  func_0x00010c08fa60(puVar1);
  FUN_105705ef0(auStack_140,puVar2,puVar1);
  uVar3 = in_x3;
  _objc_retainAutorelease(in_x3);
  func_0x00010bf25f00();
  func_0x00010c08fa60(in_x3);
  FUN_105705ef0(auStack_240,uVar3,in_x3);
  uVar3 = 8;
  __Znwm();
  func_0x0001093750d4();
  *param_1 = uVar3;
  FUN_105705fe0(auStack_240);
  FUN_105705fe0(auStack_140);
  func_0x000105706450();
  func_0x00010570643c();
  return;
}



/* Entry: 105705ef0; end: 105705fdf;  */

long * FUN_105705ef0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  param_1[0xd] = (long)(PTR___ZTVNSt3__19basic_iosIcNS_11char_traitsIcEEEE_110346b40 + 0x10);
  param_1[0x13] = 0;
  func_0x0001000daf80(param_1,&PTR_PTR_1108ac010,0);
  *param_1 = (long)&PTR_FUN_1108abfd0;
  param_1[0xd] = (long)&PTR_FUN_1108abff8;
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEEC2Ev(param_1 + 2);
  param_1[2] = (long)&PTR_FUN_1108ac0a0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[4] = param_2;
  param_1[5] = param_2;
  param_1[6] = param_2 + param_3;
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  *(long **)(lVar1 + 0x28) = param_1 + 2;
  __ZNSt3__18ios_base5clearEj(lVar1,0);
  return param_1;
}



/* Entry: 105705fe0; end: 105706037;  */

undefined8 * FUN_105705fe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108abfd0;
  param_1[0xd] = &PTR_FUN_1108abff8;
  FUN_1057063bc(param_1 + 2);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(param_1,&PTR_PTR_1108ac010);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0xd);
  return param_1;
}



/* Entry: 105706038; end: 10570604f; -[SCAvatarBuilderMirrorClassifier _statusToMirrorClassicationStatus:] */

undefined1 FUN_105706038(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 105706050; end: 10570616b; -[SCAvatarBuilderMirrorClassifier _unorderedMapToNSDictionary:] */

void FUN_105706050(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined1 auStack_68 [24];
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  plVar3 = (long *)(param_3 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_68,plVar3 + 2);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c25d8e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar2);
    func_0x000105706458();
    func_0x000105706450();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10570616c; end: 105706173; -[SCAvatarBuilderMirrorClassifier _maybeGetDebugCroppedImageWithSelfie:faceBoundingBox:headBoundingBox:] */

undefined8 FUN_10570616c(void)

{
  return 0;
}



/* Entry: 105706174; end: 1057061ab; -[SCAvatarBuilderMirrorClassifier .cxx_destruct] */

long FUN_105706174(long param_1)

{
  func_0x000105706480(param_1 + 0x20);
  func_0x000105706480(param_1 + 0x18);
  func_0x000105706480(param_1 + 0x10);
  FUN_105706414(param_1 + 8,0);
  return param_1 + 8;
}



/* Entry: 1057061ac; end: 1057061b3; -[SCAvatarBuilderMirrorClassifier .cxx_construct] */

void FUN_1057061ac(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1057061b4; end: 10570623b;  */

long FUN_1057061b4(long param_1)

{
  func_0x0001057061dc(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10570623c(param_1,0);
  return param_1;
}



/* Entry: 10570623c; end: 105706253;  */

void FUN_10570623c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105706254; end: 10570628b;  */

long FUN_105706254(long param_1)

{
  FUN_10570628c();
  if (*(long *)(param_1 + 0x48) != param_1 + 0x50) {
    func_0x000109a27728();
  }
  return param_1;
}



/* Entry: 10570628c; end: 1057062fb;  */

void FUN_10570628c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  for (lVar5 = 0; lVar5 < *(int *)(param_1 + 4); lVar5 = lVar5 + 1) {
    *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar5 * 4) = 0;
  }
  return;
}



/* Entry: 1057062fc; end: 1057062ff;  */

void FUN_1057062fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108ac0a0;
  func_0x000100100fec(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev_110346568)(param_1);
  return;
}



/* Entry: 105706300; end: 105706313;  */

void FUN_105706300(void)

{
  FUN_105705fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105706314; end: 105706333;  */

undefined8 * FUN_105706314(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_1108abfd0;
  puVar1[0xd] = &PTR_FUN_1108abff8;
  FUN_1057063bc(puVar1 + 2);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(puVar1,&PTR_PTR_1108ac010);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(puVar1 + 0xd);
  return puVar1;
}



/* Entry: 105706334; end: 105706347;  */

void FUN_105706334(void)

{
  FUN_1057063bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105706348; end: 1057063bb;  */

void FUN_105706348(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_4 == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
  }
  else if (param_4 == 1) {
    lVar1 = *(long *)(param_2 + 0x18);
  }
  else {
    if (param_4 != 2) {
      lVar1 = *(long *)(param_2 + 0x18);
      goto LAB_105706380;
    }
    lVar1 = *(long *)(param_2 + 0x20);
  }
  lVar1 = lVar1 + param_3;
  *(long *)(param_2 + 0x18) = lVar1;
LAB_105706380:
  lVar2 = *(long *)(param_2 + 0x10);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = lVar1 - lVar2;
  return;
}



/* Entry: 1057063bc; end: 105706413;  */

void FUN_1057063bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108ac0a0;
  func_0x000100100fec(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev_110346568)(param_1);
  return;
}



/* Entry: 105706414; end: 10570643b;  */

void FUN_105706414(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000109375134();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10570643c; end: 1057064d3;  */

void FUN_10570643c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1057064d4; end: 105706547; -[SCBitmojiAvatarBuilderMetricsServices initWithAvatarBuilderLogger:] */

undefined1 * FUN_1057064d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9e30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105706548; end: 10570654f; -[SCBitmojiAvatarBuilderMetricsServices avatarBuilderLogger] */

undefined8 FUN_105706548(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105706550; end: 10570655b; -[SCBitmojiAvatarBuilderMetricsServices .cxx_destruct] */

void FUN_105706550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10570655c; end: 1057065af; -[SCBoltDownloadableContent boltURL] */

undefined * FUN_10570655c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 1057065b0; end: 105706603; -[SCBoltDownloadableContent contentType] */

undefined * FUN_1057065b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 105706604; end: 105706627; -[SCDownloadableContent copyWithZone:] */

undefined8 FUN_105706604(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105706628; end: 10570667b; -[SCDownloadableContent directoryName] */

void FUN_105706628(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf4c360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c181df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_setContentDownloaded__11263e198,0);
  return;
}



/* Entry: 10570667c; end: 1057066cf; -[SCDownloadableContent fileNames] */

void FUN_10570667c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf4c360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c181df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_setContentDownloaded__11263e198,0);
  return;
}



/* Entry: 1057066d0; end: 105706723; -[SCDownloadableContent resourceName] */

void FUN_1057066d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf4c360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c181df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_setContentDownloaded__11263e198,0);
  return;
}



/* Entry: 105706724; end: 105706777; -[SCDownloadableContent eventUniqueId] */

void FUN_105706724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf4c360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c181df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_setContentDownloaded__11263e198,0);
  return;
}



/* Entry: 105706778; end: 1057067ef; -[SCDownloadableContent remove] */

void FUN_105706778(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4c360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c181df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setContentDownloaded__11263e198,0);
  return;
}



/* Entry: 1057067f0; end: 10570685b; -[SCDownloadableContent pathForResource:] */

void FUN_1057067f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf4c360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


