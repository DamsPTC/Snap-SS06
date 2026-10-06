/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051654e4; end: 1051656b7;  */

void FUN_1051654e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_2);
  func_0x00010bdc3460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137160(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1a4fc0(puVar2);
  func_0x00010befc820(puVar2);
  _objc_release(param_2);
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4f00(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b5548;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c03ec20();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 200);
  *(undefined **)(*(long *)(param_1 + 0x20) + 200) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar3);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(*(long *)(param_1 + 0x20) + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1051656b8; end: 105165817; -[SCSettingsLegacySubscreensPresenter .cxx_destruct] */

void FUN_1051656b8(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105165818; end: 1051658d3; -[SCChangeLanguageInSettingsViewController initWithChangeLanguageInSettingsActionRecorder:plusCustomAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105165818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e6800;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271db8c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271db90;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051658d4; end: 105165927; -[SCChangeLanguageInSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051658d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6800;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  return;
}



/* Entry: 105165928; end: 10516596f; -[SCChangeLanguageInSettingsViewController viewDidLoad] */

void FUN_105165928(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6800;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  return;
}



/* Entry: 105165970; end: 105165973; -[SCChangeLanguageInSettingsViewController getTitle] */

void FUN_105165970(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7fd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc7fd8,
                      &PTR____CFConstantStringClassReference_110dc7fb8,0);
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



/* Entry: 105165974; end: 105165a3b; -[SCChangeLanguageInSettingsViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105165974(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6800;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_leftButtonPressed_112601348);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271db8c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2915a0(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105165a3c; end: 1051661b7; -[SCChangeLanguageInSettingsViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105165a3c(undefined8 param_1,undefined8 param_2)

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
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
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
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  uVar33 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar34 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar35 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar36 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar33,uVar34,uVar35,uVar36);
  puVar2 = puVar1;
  func_0x0001051662f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar1,param_2,0x14);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c1cfce0(puVar1,param_2,0);
  uVar32 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar32);
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar33,uVar34,uVar35,uVar36);
  puVar2 = puVar3;
  func_0x000105166310();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar3,param_2,0x16);
  func_0x00010c213040(puVar3,param_2,1);
  func_0x00010c1cfce0(puVar3,param_2,0);
  uVar32 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar32);
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x000105166328();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar4,param_2,puVar2,0);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c271420(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar4,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x00010befbd60(puVar4,param_2,param_1,PTR_s__handleTouchUpInsideForButton__1125280b0,0x40);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c23d620(puVar4);
  puVar2 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(puVar2);
  uVar32 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar32);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c219b60(puVar3,param_2,0);
  func_0x00010c219b60(puVar4,param_2,0);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar32;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493c0(0xc051400000000000,puVar5,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_e0 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar34;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493c0(0x4044000000000000,puVar7,param_2,uVar35);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_d8 = puVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar36;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493c0(0xc044000000000000,puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  puStack_d0 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493a0(puVar12,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  puStack_c8 = puVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493a0(puVar15,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar3;
  puStack_c0 = puVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bf493c0(0x4034000000000000,puVar18,param_2,puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar4;
  puStack_b8 = puVar20;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010bf493a0(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar4;
  puStack_b0 = puVar23;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar4;
  puStack_a8 = puVar25;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010bf494e0(0x4066e00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar4;
  puStack_a0 = puVar27;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010bf493c0(0x4030000000000000,puVar28,param_2,puVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar30;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar31);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(param_1);
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
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar36);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  uVar32 = *(undefined8 *)(puVar1 + _DAT_11271db8c);
  func_0x00010c269d40(uVar32);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c293e00(uVar32,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar32);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1051661b8; end: 105166277; -[SCChangeLanguageInSettingsViewController _handleTouchUpInsideForButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051661b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271db8c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c293e00(uVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105166278; end: 10516627f; -[SCChangeLanguageInSettingsViewController shouldPopToRootViewController] */

undefined8 FUN_105166278(void)

{
  return 0;
}



/* Entry: 105166280; end: 105166287; -[SCChangeLanguageInSettingsViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_105166280(void)

{
  return 1;
}



/* Entry: 105166288; end: 1051662c7; -[SCChangeLanguageInSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105166288(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271db90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271db8c,0);
  return;
}



/* Entry: 1051662c8; end: 10516633f;  */

void FUN_1051662c8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7f98;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc7f98,
                      &PTR____CFConstantStringClassReference_110dc7fb8,0);
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



/* Entry: 105166340; end: 1051663b3; -[SCChangeLanguageInSettingsActionRecordingServices initWithActionRecorder:] */

undefined1 * FUN_105166340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6808;
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



/* Entry: 1051663b4; end: 1051663bb; -[SCChangeLanguageInSettingsActionRecordingServices actionRecorder] */

undefined8 FUN_1051663b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051663bc; end: 1051663c7; -[SCChangeLanguageInSettingsActionRecordingServices .cxx_destruct] */

void FUN_1051663bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051663c8; end: 10516640f;  */

bool FUN_1051663c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  return (undefined *)0x1 < puVar2;
}



/* Entry: 105166410; end: 1051664ab; -[SCAppAppearanceSettingsScope initWithNavigationController:delegate:] */

undefined1 *
FUN_105166410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6810;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051664ac; end: 1051664b3; -[SCAppAppearanceSettingsScope navigationController] */

undefined8 FUN_1051664ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051664b4; end: 1051664cb; -[SCAppAppearanceSettingsScope delegate] */

void FUN_1051664b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051664cc; end: 1051664f7; -[SCAppAppearanceSettingsScope .cxx_destruct] */

void FUN_1051664cc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051664f8; end: 105166587; -[SCCameraSettingsViewController initWithFeatureSettingsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1051664f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e6818;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11271dba0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105166588; end: 1051668cf; -[SCCameraSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105166588(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126e6818;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_loadView_112604be0);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_f0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_b8 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_c8 = lVar1;
  lStack_90 = lVar1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  lStack_e0 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  lStack_f8 = lVar2;
  lStack_88 = lVar2;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  lStack_80 = lVar4;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_f0);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lStack_100);
  _objc_release(lStack_f8);
  _objc_release(lStack_e8);
  _objc_release(lStack_d8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d0);
  _objc_release(lStack_c8);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  _objc_release(lStack_b8);
  lVar3 = lStack_a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_1051668d0;
  puStack_138 = PTR_PTR_1126e6818;
  lStack_140 = lVar3;
  lStack_130 = lVar2;
  lStack_128 = lVar1;
  puStack_120 = puVar9;
  lStack_118 = lVar8;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_140,PTR_s_viewWillAppear__1126853f0);
  uVar10 = *(undefined8 *)(lVar3 + _DAT_11271dba0);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ad60();
  lVar1 = lVar3;
  func_0x00010c23b540(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a80();
  _objc_release(lVar1);
  _objc_release(uVar10);
  func_0x00010c267f00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(lVar3);
  return;
}



/* Entry: 1051668d0; end: 105166987; -[SCCameraSettingsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051668d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6818;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271dba0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ad60();
  lVar2 = param_1;
  func_0x00010c23b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a80();
  _objc_release(lVar2);
  _objc_release(uVar1);
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(param_1);
  return;
}



/* Entry: 105166988; end: 1051669df; -[SCCameraSettingsViewController generalSettingsTags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105166988(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271dba4;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    *(undefined ***)(param_1 + lVar2) = &PTR__OBJC_CLASS___NSConstantArray_11117e598;
    _objc_release(0);
    lVar1 = *(long *)(param_1 + lVar2);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1051669e0; end: 105166b2f; -[SCCameraSettingsViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051669e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271dba8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
    _objc_alloc();
    func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c189840(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
    func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c167a20(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c167740(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c1974c0(0x404e000000000000,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                        *(undefined8 *)(param_1 + lVar4));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105166b30; end: 105166c8f; -[SCCameraSettingsViewController shutterSoundCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105166b30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271dbac;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b5550;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c17a3a0(uVar2,param_2,param_1);
    FUN_1051670c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    func_0x0001051670dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar2,param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2ae0(uVar2,param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9060(uVar2,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c210a20(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110dc8058);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105166c90; end: 105166c9b; -[SCCameraSettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_105166c90(void)

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



/* Entry: 105166c9c; end: 105166cab; -[SCCameraSettingsViewController getTitle] */

void FUN_105166c9c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad4b8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110dad4b8,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105166cac; end: 105166dd7; -[SCCameraSettingsViewController leftButtonPressed] */

void FUN_105166cac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == param_1) {
    lVar4 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf84b00();
      _objc_release(lVar1);
      goto LAB_105166dc0;
    }
  }
  else {
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_105166dc0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105166dd8; end: 105166ddf; -[SCCameraSettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_105166dd8(void)

{
  return 1;
}



/* Entry: 105166de0; end: 105166def; -[SCCameraSettingsViewController tableView:heightForHeaderInSection:] */

void FUN_105166de0(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfe0830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0710,PTR_s_heightForTableHeaderInSection__1125d5bc8,in_x3);
  return;
}



/* Entry: 105166df0; end: 105166df7; -[SCCameraSettingsViewController tableView:viewForHeaderInSection:] */

undefined8 FUN_105166df0(void)

{
  return 0;
}



/* Entry: 105166df8; end: 105166e3f; -[SCCameraSettingsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_105166df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    return 0;
  }
  func_0x00010bfbede0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105166e40; end: 105166e4f; -[SCCameraSettingsViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_105166e40(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 105166e50; end: 105166f0b; -[SCCameraSettingsViewController tableView:cellForRowAtIndexPath:] */

void FUN_105166e50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c1554e0();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bfbede0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c142240(param_4);
    lVar3 = lVar1;
    func_0x00010c0dfd40(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010c23b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105166ed4;
    }
  }
  param_1 = 0;
LAB_105166ed4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105166f0c; end: 105166fa3; -[SCCameraSettingsViewController settingsSwitchTableViewCell:didToggleSwitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105166f0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c23b540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_3 != lVar1) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271dba0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105166fa4; end: 105166fe3; -[SCCameraSettingsViewController setGeneralSettingsTags:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105166fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271dba4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105166fe4; end: 105167023; -[SCCameraSettingsViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105166fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271dba8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105167024; end: 105167063; -[SCCameraSettingsViewController setShutterSoundCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105167024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271dbac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105167064; end: 1051670c3; -[SCCameraSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105167064(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271dbac,0);
  _objc_storeStrong(param_1 + _DAT_11271dba8,0);
  _objc_storeStrong(param_1 + _DAT_11271dba4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271dba0,0);
  return;
}



/* Entry: 1051670c4; end: 1051670f3;  */

void FUN_1051670c4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc8078;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc8078,
                      &PTR____CFConstantStringClassReference_110dc8098,0);
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



/* Entry: 1051670f4; end: 1051671f7; -[SCDataSaverPageLaunchHandler initWithUserSession:userBlizzardLogger:featureSettingsService:settingsEventLogger:] */

undefined1 *
FUN_1051670f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6820;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x28) = 0x1d;
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



/* Entry: 1051671f8; end: 105167287; -[SCDataSaverPageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_1051671f8(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  long in_x4;
  
  _objc_retain(in_x4);
  puVar1 = PTR_PTR_1126b5558;
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c05eac0();
  func_0x00010bf0c980(in_x3);
  _objc_release(in_x3);
  if (in_x4 != 0) {
    (**(code **)(in_x4 + 0x10))(in_x4,0);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 105167288; end: 10516728f; -[SCDataSaverPageLaunchHandler screen] */

undefined4 FUN_105167288(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 105167290; end: 1051672d7; -[SCDataSaverPageLaunchHandler .cxx_destruct] */

void FUN_105167290(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051672d8; end: 10516740b; -[SCDataSaverPageLauncherPlugin initWithUserSession:userBlizzardLogger:featureSettingsService:settingsEventLogger:] */

undefined1 *
FUN_1051672d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e6828;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b5560;
    _objc_alloc();
    func_0x00010c05eac0();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  return *(undefined1 **)(param_3 + 8);
}



/* Entry: 10516740c; end: 105167413; -[SCDataSaverPageLauncherPlugin handlers] */

undefined8 FUN_10516740c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105167414; end: 105167443; -[SCDataSaverPageLauncherPlugin setHandlers:] */

void FUN_105167414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105167444; end: 10516744f; -[SCDataSaverPageLauncherPlugin .cxx_destruct] */

void FUN_105167444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105167450; end: 105167617; -[SCDataSaverPageLauncherPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105167450(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126b5568;
  _objc_alloc();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11271dbd0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar6;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11271dbd4;
    _objc_loadWeakRetained(lVar8);
  }
  lVar3 = lVar8;
  func_0x00010c293fc0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11271dbd8;
    _objc_loadWeakRetained(lVar9);
  }
  lVar4 = lVar9;
  func_0x00010bfa2b80(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11271dbdc;
    _objc_loadWeakRetained(lVar10);
  }
  lVar5 = lVar10;
  func_0x00010c2280e0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05eac0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271dbc8);
  *(undefined **)(param_1 + _DAT_11271dbc8) = puVar1;
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar6);
  param_1 = param_1 + _DAT_11271dbcc;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105167618; end: 105167683; -[SCDataSaverPageLauncherPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105167618(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271dbdc);
  _objc_destroyWeak(param_1 + _DAT_11271dbd8);
  _objc_destroyWeak(param_1 + _DAT_11271dbd4);
  _objc_destroyWeak(param_1 + _DAT_11271dbd0);
  _objc_destroyWeak(param_1 + _DAT_11271dbcc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271dbc8,0);
  return;
}



/* Entry: 105167684; end: 10516768b; -[SCManageAdditionalServicesViewController pageViewName] */

undefined8 FUN_105167684(void)

{
  return 0x92;
}



/* Entry: 10516768c; end: 105167697; -[SCManageAdditionalServicesViewController defaultProjectNameV3] */

void FUN_10516768c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c227f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_settings_112667a08);
  return;
}



/* Entry: 105167698; end: 1051676a3; -[SCManageAdditionalServicesViewController defaultProjectNameV2] */

void FUN_105167698(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c227f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_settings_112667a08);
  return;
}



/* Entry: 1051676a4; end: 10516781b; -[SCManageAdditionalServicesViewController initWithUserSession:userBlizzardLogger:featureSettingsService:settingsEventLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1051676a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e6830;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_11271dbe0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271dbe4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c27b040();
    *(char *)((long)puVar1 + (long)_DAT_11271dbe8) = (char)uVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf642e0();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271dbec) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11271dbf0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271dbf4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10516781c; end: 105167b1f; -[SCManageAdditionalServicesViewController loadView] */

void FUN_10516781c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6830;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2116c0(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9a0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167740();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1974c0(0x404e000000000000);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 105167b20; end: 105167c8f;  */

void FUN_105167b20(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105167c90; end: 105167d53; -[SCManageAdditionalServicesViewController viewDidLoad] */

void FUN_105167c90(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6830;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  return;
}



/* Entry: 105167d54; end: 105167d57; -[SCManageAdditionalServicesViewController viewWillResignActive] */

void FUN_105167d54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c285b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateFeatureSettingsIfNecessary_11267f100);
  return;
}



/* Entry: 105167d58; end: 105167dcf; -[SCManageAdditionalServicesViewController viewWillAppear:] */

void FUN_105167d58(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6830;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c139c80(param_1);
  func_0x00010be3f760(param_1);
  func_0x00010c27b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a80();
  _objc_release(param_1);
  return;
}



/* Entry: 105167dd0; end: 105167df3; -[SCManageAdditionalServicesViewController _isDataSaverOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105167dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf642d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b5570,PTR_s_dataSaverEnabledWithTravelModeEn_1125b6a58,
             *(undefined1 *)(param_1 + _DAT_11271dbe8),*(undefined8 *)(param_1 + _DAT_11271dbec));
  return;
}



/* Entry: 105167df4; end: 105167e3b; -[SCManageAdditionalServicesViewController viewWillDisappear:] */

void FUN_105167df4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6830;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010c285b60(param_1);
  return;
}



/* Entry: 105167e3c; end: 105167e6b; -[SCManageAdditionalServicesViewController resetView] */

void FUN_105167e3c(undefined8 param_1)

{
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105167e6c; end: 105167e77; -[SCManageAdditionalServicesViewController supportedInterfaceOrientations] */

undefined8 FUN_105167e6c(void)

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



/* Entry: 105167e78; end: 105167e87; -[SCManageAdditionalServicesViewController getTitle] */

void FUN_105167e78(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc80d8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110dc80d8,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105167e88; end: 105167fb3; -[SCManageAdditionalServicesViewController leftButtonPressed] */

void FUN_105167e88(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == param_1) {
    lVar4 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf84b00();
      _objc_release(lVar1);
      goto LAB_105167f9c;
    }
  }
  else {
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_105167f9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105167fb4; end: 10516815b; -[SCManageAdditionalServicesViewController updateFeatureSettingsIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105167fb4(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  byte bStack_97;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lVar6 = (long)_DAT_11271dbe4;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27b040();
  bVar1 = *(byte *)(param_1 + _DAT_11271dbe8);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf642a0();
  lVar5 = param_1;
  func_0x00010be3f760();
  _objc_release(uVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10516815c;
  puStack_78 = &UNK_110842e18;
  lStack_70 = param_1;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_a0,auStack_68);
  uStack_98 = (uint)bVar1 != (uint)uVar3;
  bStack_97 = (byte)uVar2 ^ (byte)lVar5;
  func_0x00010c0f8520(uVar4);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10516815c; end: 1051681eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10516815c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)_DAT_11271dbe4;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219cc0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1051681ec; end: 1051682bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051681ec(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar2 = *(undefined8 *)(uVar1 + (long)_DAT_11271dbf4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b1f40();
      _objc_release(uVar2);
    }
    if ((*(char *)(param_1 + 0x29) == '\x01') &&
       (uVar3 = uVar1, func_0x00010be3f760(), (uVar3 & 1) == 0)) {
      puVar4 = PTR_PTR_1126b5578;
      _objc_opt_new(PTR_PTR_1126b5578);
      func_0x00010c1897a0();
      uVar2 = *(undefined8 *)(uVar1 + (long)_DAT_11271dbf0);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar2);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051682c0; end: 1051682c7; -[SCManageAdditionalServicesViewController numberOfSectionsInTableView:] */

undefined8 FUN_1051682c0(void)

{
  return 1;
}



/* Entry: 1051682c8; end: 1051682cf; -[SCManageAdditionalServicesViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_1051682c8(void)

{
  return 1;
}



/* Entry: 1051682d0; end: 1051682df; -[SCManageAdditionalServicesViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_1051682d0(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 1051682e0; end: 10516831f; -[SCManageAdditionalServicesViewController tableView:cellForRowAtIndexPath:] */

void FUN_1051682e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c1554e0();
  if (param_4 == 0) {
    func_0x00010c27b020(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105168320; end: 10516832f; -[SCManageAdditionalServicesViewController tableView:heightForHeaderInSection:] */

void FUN_105168320(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfe0830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0710,PTR_s_heightForTableHeaderInSection__1125d5bc8,in_x3);
  return;
}



/* Entry: 105168330; end: 105168337; -[SCManageAdditionalServicesViewController tableView:viewForHeaderInSection:] */

undefined8 FUN_105168330(void)

{
  return 0;
}



/* Entry: 105168338; end: 105168347; -[SCManageAdditionalServicesViewController tableView:didSelectRowAtIndexPath:] */

void FUN_105168338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_deselectRowAtIndexPath_animated__1125b93c8,param_4,1);
  return;
}



/* Entry: 105168348; end: 1051683ff; -[SCManageAdditionalServicesViewController travelModeCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105168348(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11271dbf8;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc80d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc80d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc80f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc80f8,0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c14c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = lVar4;
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105168400; end: 1051684f7; -[SCManageAdditionalServicesViewController scSettingSwitchTableCell:secondaryText:tag:] */

void FUN_105168400(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5550;
  func_0x00010c13fda0(PTR_PTR_1126b5550);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf6e060(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b5550;
    _objc_alloc_init(PTR_PTR_1126b5550);
  }
  func_0x00010c17a3a0(puVar3,param_2,param_1);
  func_0x00010c1e2a80(puVar3,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1f9020(puVar3,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c211780(puVar3,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051684f8; end: 10516859b; -[SCManageAdditionalServicesViewController settingsSwitchTableViewCell:didToggleSwitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051684f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271dbe0);
  func_0x00010bf64360(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_11271dbf0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2727e0();
  _objc_release(uVar1);
  return;
}



/* Entry: 10516859c; end: 105168613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10516859c(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271dbe8;
  *(char *)(*(long *)(param_1 + 0x20) + lVar3) = (char)param_2;
  lVar2 = (long)_DAT_11271dbec;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2) = param_3;
  func_0x00010bf642c0(PTR_PTR_1126b5570,param_2,*(undefined1 *)(*(long *)(param_1 + 0x20) + lVar3),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105168614; end: 105168623; -[SCManageAdditionalServicesViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105168614(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271dbfc);
}



/* Entry: 105168624; end: 105168663; -[SCManageAdditionalServicesViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105168624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271dbfc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105168664; end: 1051686e3; -[SCManageAdditionalServicesViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105168664(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271dbfc,0);
  _objc_storeStrong(param_1 + _DAT_11271dbf4,0);
  _objc_storeStrong(param_1 + _DAT_11271dbe4,0);
  _objc_storeStrong(param_1 + _DAT_11271dbf0,0);
  _objc_storeStrong(param_1 + _DAT_11271dbe0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271dbf8,0);
  return;
}



/* Entry: 1051686e4; end: 105169053; -[SCSettingsAdditionalServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051686e4(long param_1)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
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
  
  _objc_initWeak(auStack_80,param_1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbc0f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc0f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105169054;
  puStack_90 = &UNK_110845b80;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010be89280(param_1);
  _objc_release(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc8178;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc8178,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar10;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10516909c;
  puStack_b8 = &UNK_110845b80;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010be89280(param_1);
  _objc_release(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad498;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad498,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar10;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x1051690e4;
  puStack_e0 = &UNK_110845b80;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010be89280(param_1);
  _objc_release(ppuVar2);
  func_0x00010af470c4();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar10;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x10516912c;
  puStack_108 = &UNK_110845b80;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010be89280(param_1);
  _objc_release(ppuVar2);
  func_0x00010af472a4();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar10;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x105169174;
  puStack_130 = &UNK_110845b80;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010be89280(param_1);
  _objc_release(ppuVar2);
  func_0x000107bba064();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar10;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x1051691bc;
  puStack_158 = &UNK_110845b80;
  _objc_copyWeak(auStack_150,auStack_80);
  func_0x00010be89280(param_1);
  _objc_release(ppuVar2);
  func_0x00010af47184();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar10;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x105169204;
  puStack_180 = &UNK_110845b80;
  _objc_copyWeak(auStack_178,auStack_80);
  func_0x00010be89280(param_1);
  _objc_release(ppuVar2);
  func_0x000105c65f44();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = puVar10;
  uStack_1b8 = 0xc2000000;
  uStack_1b0 = 0x10516924c;
  puStack_1a8 = &UNK_110845b80;
  _objc_copyWeak(auStack_1a0,auStack_80);
  func_0x00010be89280(param_1);
  _objc_release(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc8278;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc8278,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = puVar10;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x105169294;
  puStack_1d0 = &UNK_110845b80;
  _objc_copyWeak(auStack_1c8,auStack_80);
  func_0x00010be89280(param_1);
  _objc_release(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc80d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc80d8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = puVar10;
  uStack_208 = 0xc2000000;
  uStack_200 = 0x1051692dc;
  puStack_1f8 = &UNK_110845b80;
  _objc_copyWeak(auStack_1f0,auStack_80);
  func_0x00010be89280(param_1);
  _objc_release(ppuVar2);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,3,0);
  if (iVar1 != 0) {
    lVar3 = param_1 + _DAT_11271dc00;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf69040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0704a0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((int)lVar5 != 0) {
      func_0x000105c611f0();
      _objc_retainAutoreleasedReturnValue();
      puStack_238 = puVar10;
      uStack_230 = 0xc2000000;
      uStack_228 = 0x105169324;
      puStack_220 = &UNK_110845b80;
      _objc_copyWeak(auStack_218,auStack_80);
      func_0x00010be89280(param_1);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_218);
    }
  }
  uVar6 = param_1 + _DAT_11271dc04;
  _objc_loadWeakRetained();
  uVar7 = uVar6;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = uVar8;
  func_0x00010c07fee0();
  if ((((uVar6 & 1) != 0) || (uVar6 = uVar8, func_0x00010c0736e0(), (uVar6 & 1) != 0)) ||
     (uVar6 = uVar8, func_0x00010c081ee0(), (int)uVar6 != 0)) {
    FUN_10516a85c();
    _objc_retainAutoreleasedReturnValue();
    puStack_260 = puVar10;
    uStack_258 = 0xc2000000;
    uStack_250 = 0x10516936c;
    puStack_248 = &UNK_110845b80;
    _objc_copyWeak(auStack_240,auStack_80);
    func_0x00010be89280(param_1);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_240);
  }
  uVar6 = param_1 + _DAT_11271dc08;
  _objc_loadWeakRetained();
  uVar7 = uVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar7;
  func_0x00010bf1f440();
  if ((uVar6 & 1) == 0) {
    puVar9 = PTR_PTR_1126b1278;
    func_0x00010bfeb180(PTR_PTR_1126b1278);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be40620();
    _objc_release(puVar9);
    if ((int)lVar3 != 0) goto LAB_105168ce4;
  }
  else {
LAB_105168ce4:
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc8338;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc8338,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_288 = puVar10;
    uStack_280 = 0xc2000000;
    uStack_278 = 0x1051693b4;
    puStack_270 = &UNK_110845b80;
    _objc_copyWeak(auStack_268,auStack_80);
    func_0x00010be89280(param_1);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_268);
  }
  uVar6 = uVar7;
  func_0x00010bf1f440();
  if ((uVar6 & 1) == 0) {
    puVar10 = PTR_PTR_1126b1278;
    func_0x00010c26f8c0(PTR_PTR_1126b1278);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be40620();
    _objc_release(puVar10);
    if ((int)lVar3 == 0) goto LAB_105168e0c;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc8398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc8398,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_290,auStack_80);
  func_0x00010be89280(param_1);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_290);
LAB_105168e0c:
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 105169054; end: 105169453;  */

void FUN_105169054(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29fa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105169454; end: 1051694e3; -[SCSettingsAdditionalServicesEntryPoint _isFeatureRestricted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105169454(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271dc0c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010bfb2400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x00010bf926c0(lVar3);
    uVar2 = (uint)lVar1 ^ 1;
  }
  _objc_release(lVar3);
  return uVar2;
}



/* Entry: 1051694e4; end: 105169597; -[SCSettingsAdditionalServicesEntryPoint _handleFriendEmojisWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051694e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b5580;
  _objc_alloc(PTR_PTR_1126b5580);
  func_0x00010c0582c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271dc10),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105169598; end: 10516964b; -[SCSettingsAdditionalServicesEntryPoint _handleEmojiSkinToneWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105169598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b5588;
  _objc_alloc(PTR_PTR_1126b5588);
  func_0x00010c0582c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271dc14),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10516964c; end: 1051696ff; -[SCSettingsAdditionalServicesEntryPoint _handlePermissionsWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10516964c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b5590;
  _objc_alloc(PTR_PTR_1126b5590);
  func_0x00010c0582c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271dc18),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105169700; end: 1051697db; -[SCSettingsAdditionalServicesEntryPoint _handleAdPreferencesWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105169700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11271dc58;
    _objc_loadWeakRetained(lVar4);
  }
  lVar3 = lVar4;
  func_0x00010bf24220(lVar4,param_2,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271dc1c),param_2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051697dc; end: 1051698b7; -[SCSettingsAdditionalServicesEntryPoint _handleLifeStyleAndInterestsWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051697dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11271dc5c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar3 = lVar4;
  func_0x00010bf24220(lVar4,param_2,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271dc20),param_2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051698b8; end: 105169997; -[SCSettingsAdditionalServicesEntryPoint _handleBookmarksAndBrowserHistoryWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051698b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c038f40(puVar1,param_2,uVar2,1);
  _objc_release(uVar2);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11271dc70;
    _objc_loadWeakRetained(lVar4);
  }
  lVar3 = lVar4;
  func_0x00010bf24220(lVar4,param_2,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271dc24),param_2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105169998; end: 105169a73; -[SCSettingsAdditionalServicesEntryPoint _handleAutofillWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105169998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11271dc64;
    _objc_loadWeakRetained(lVar4);
  }
  lVar3 = lVar4;
  func_0x00010bf24220(lVar4,param_2,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271dc28),param_2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105169a74; end: 105169b47; -[SCSettingsAdditionalServicesEntryPoint _handleContactsWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105169a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = param_1 + _DAT_11271dc2c;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf23ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271dc30),param_2,lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105169b48; end: 105169c23; -[SCSettingsAdditionalServicesEntryPoint _handleLensStudioWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105169b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11271dc60;
    _objc_loadWeakRetained(lVar4);
  }
  lVar3 = lVar4;
  func_0x00010bf24220(lVar4,param_2,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271dc34),param_2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105169c24; end: 105169cfb; -[SCSettingsAdditionalServicesEntryPoint _handleDefaultAppsWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105169c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c038f40(puVar1,param_2,uVar2,1);
  _objc_release(uVar2);
  lVar3 = param_1 + _DAT_11271dc38;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf23ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271dc3c),param_2,lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105169cfc; end: 105169e73; -[SCSettingsAdditionalServicesEntryPoint _handleManageWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105169cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b5558;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_11271dc40;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271dc44;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271dc48;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271dc4c;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c2280e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05eac0(puVar1,param_2,lVar3,lVar5,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar9 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c11c520(uVar9,param_2,puVar1,1);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105169e74; end: 105169f27; -[SCSettingsAdditionalServicesEntryPoint _handleStreakSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105169e74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b5598;
  _objc_alloc(PTR_PTR_1126b5598);
  func_0x00010c0582c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271dc50),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105169f28; end: 105169fe7; -[SCSettingsAdditionalServicesEntryPoint _handleWithContext:url:] */

void FUN_105169f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
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


