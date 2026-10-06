/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108dd0e10; end: 108dd0e4f;  */

void FUN_108dd0e10(long param_1)

{
  long lVar1;
  
  func_0x00010becaf20(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c114220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd0e50; end: 108dd0ef7; -[SCGalleryPrivateGalleryReauthenticateFlow _showErrorMessage:] */

void FUN_108dd0e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x49) = 1;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c14c440(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c087500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c087500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108dd0ef8; end: 108dd0f97; -[SCGalleryPrivateGalleryReauthenticateFlow _clearErrorMessage] */

void FUN_108dd0ef8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 0;
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c087500(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c087500(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 108dd0f98; end: 108dd1037; -[SCGalleryPrivateGalleryReauthenticateFlow _reauthenticateWithPassword:successBlock:failureBlock:] */

void FUN_108dd0f98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108dd1038;
  puStack_40 = &UNK_110ac53c8;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010c121fc0(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 108dd1038; end: 108dd1093;  */

void FUN_108dd1038(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef7e18;
  if (param_2 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e50bb8;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 108dd1094; end: 108dd10e3; -[SCGalleryPrivateGalleryReauthenticateFlow memoriesInformationWebViewControllerDidPressBack:] */

void FUN_108dd1094(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dd10e4; end: 108dd10fb; -[SCGalleryPrivateGalleryReauthenticateFlow delegate] */

void FUN_108dd10e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dd10fc; end: 108dd1107; -[SCGalleryPrivateGalleryReauthenticateFlow setDelegate:] */

void FUN_108dd10fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 108dd1108; end: 108dd1177; -[SCGalleryPrivateGalleryReauthenticateFlow .cxx_destruct] */

void FUN_108dd1108(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dd1178; end: 108dd1247; -[SCGalleryPrivateGalleryConfirmPassphraseViewController initForPasscodeWithTitle:passcode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108dd1178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe838;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b964) = 1;
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b968);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b968) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b96c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b96c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108dd1248; end: 108dd1317; -[SCGalleryPrivateGalleryConfirmPassphraseViewController initForPassphraseWithTitle:passphrase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108dd1248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe838;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b970) = 1;
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b968);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b968) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b974);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b974) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108dd1318; end: 108dd1db7; -[SCGalleryPrivateGalleryConfirmPassphraseViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd1318(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined **ppuStack_228;
  undefined8 uStack_220;
  long lStack_a8;
  undefined *puStack_a0;
  
  puStack_a0 = PTR_PTR_1126fe838;
  lStack_a8 = param_1;
  _objc_msgSendSuper2(&lStack_a8,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar14 = (long)_DAT_11277b978;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  func_0x00010bf470a0(PTR_PTR_1126dbe88);
  lVar16 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar14));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((*(byte *)(param_1 + _DAT_11277b964) & 1) == 0) {
    piVar15 = (int *)&DAT_11277b974;
    if (*(char *)(param_1 + _DAT_11277b970) != '\x01') {
      ppuStack_228 = (undefined **)0x0;
      uStack_220 = 0;
      ppuVar18 = (undefined **)0x0;
      ppuVar17 = (undefined **)0x0;
      uVar13 = 0;
      goto LAB_108dd15c0;
    }
    uVar13 = 0x4030000000000000;
    ppuStack_228 = &PTR____CFConstantStringClassReference_110ef7e98;
    ppuVar4 = &PTR____CFConstantStringClassReference_110e29bf8;
    ppuVar17 = &PTR____CFConstantStringClassReference_110ef7e78;
  }
  else {
    piVar15 = (int *)&DAT_11277b96c;
    ppuStack_228 = &PTR____CFConstantStringClassReference_110ef7e58;
    ppuVar4 = &PTR____CFConstantStringClassReference_110e29bd8;
    uVar13 = 0x4050000000000000;
    ppuVar17 = &PTR____CFConstantStringClassReference_110ef7e38;
  }
  func_0x00010bcbeaa8(ppuVar17,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar4;
  func_0x00010c28eda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  uStack_220 = *(undefined8 *)(param_1 + *piVar15);
  _objc_retain();
  func_0x00010bcbeaa8(ppuStack_228,0);
  _objc_retainAutoreleasedReturnValue();
LAB_108dd15c0:
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar5);
  _objc_release(puVar6);
  func_0x00010c212f20(puVar5);
  puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar5);
  _objc_release(puVar6);
  func_0x00010c213040(puVar5);
  func_0x00010c165e20(puVar5);
  func_0x00010c16f5a0(puVar5);
  func_0x00010c1c83a0(0x3fe0000000000000,puVar5);
  func_0x00010c1cfce0(puVar5);
  func_0x00010c160fc0(puVar5);
  lVar16 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  func_0x00010c0bbfc0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c181cc0(0x443b4000,puVar5);
  puVar6 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar6);
  _objc_release(puVar7);
  func_0x00010c212f20(puVar6);
  puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar6);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar6);
  _objc_release(puVar7);
  func_0x00010c213040(puVar6);
  func_0x00010c1cfce0(puVar6);
  lVar16 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  func_0x00010c0bbfc0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar7);
  _objc_release(puVar8);
  func_0x00010c212f20(puVar7);
  puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(uVar13,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar7);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar7);
  _objc_release(puVar8);
  func_0x00010c213040(puVar7);
  func_0x00010c1cfce0(puVar7);
  lVar16 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  _objc_retain(puVar6);
  func_0x00010c0bbfc0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c3288;
  _objc_alloc();
  func_0x00010bffa0e0();
  lVar14 = (long)_DAT_11277b97c;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar8;
  _objc_release(uVar13);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar14));
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf898;
  ppuVar9 = ppuVar4;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf898,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar13);
  _objc_release(ppuVar9);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar14));
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf898,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar14));
  _objc_release(ppuVar4);
  lVar16 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar14));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  puVar8 = PTR_PTR_1126dbe90;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar16 = (long)_DAT_11277b980;
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar8;
  _objc_release(uVar13);
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef7e58;
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar16));
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef7e58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar16));
  _objc_release(ppuVar4);
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  func_0x00010bf46ac0(PTR_PTR_1126dbe88);
  lVar16 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  func_0x00010c0bbfc0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar16 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  func_0x00010c0bbfc0(puVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(puVar12);
  _objc_retain(puVar10);
  _objc_retain(puVar7);
  func_0x00010c0bbfc0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuStack_228);
  _objc_release(uStack_220);
  _objc_release(ppuVar18);
  _objc_release(ppuVar17);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 108dd1db8; end: 108dd1f43;  */

void FUN_108dd1db8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar5 + 0x10))(lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd1f44; end: 108dd22e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd1f44(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d460();
  if ((int)puVar2 != 0) {
    puVar2 = puVar1;
    func_0x00010c14d280();
    uVar11 = 0x4030000000000000;
    if (((ulong)puVar2 & 1) != 0) goto LAB_108dd1fb0;
  }
  uVar11 = 0x4040000000000000;
LAB_108dd1fb0:
  lVar3 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b978);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  (**(code **)(lVar8 + 0x10))(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  (**(code **)(lVar8 + 0x10))(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd22e8; end: 108dd236f;  */

void FUN_108dd22e8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd2370; end: 108dd2667;  */

void FUN_108dd2370(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd2668; end: 108dd2aab;  */

void FUN_108dd2668(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c14d460();
  if (((int)puVar5 == 0) || (puVar5 = puVar4, func_0x00010c14d280(), ((ulong)puVar5 & 1) == 0)) {
    puVar5 = puVar4;
    func_0x00010c14d460();
    if (((int)puVar5 == 0) || (puVar5 = puVar4, func_0x00010c14d2a0(), ((ulong)puVar5 & 1) == 0)) {
      uVar3 = 0xc04e000000000000;
    }
    else {
      uVar3 = 0xc04a000000000000;
    }
  }
  else {
    uVar3 = 0xc046000000000000;
  }
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd2aac; end: 108dd2f27;  */

void FUN_108dd2aac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd2f28; end: 108dd2f63; -[SCGalleryPrivateGalleryConfirmPassphraseViewController _didPressBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd2f28(long param_1)

{
  param_1 = param_1 + _DAT_11277b984;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf47f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dd2f64; end: 108dd2f9f; -[SCGalleryPrivateGalleryConfirmPassphraseViewController _didPressQuestionMarkButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd2f64(long param_1)

{
  param_1 = param_1 + _DAT_11277b984;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf47f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dd2fa0; end: 108dd2fdb; -[SCGalleryPrivateGalleryConfirmPassphraseViewController _didPressContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd2fa0(long param_1)

{
  param_1 = param_1 + _DAT_11277b984;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf47f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dd2fdc; end: 108dd3057; -[SCGalleryPrivateGalleryConfirmPassphraseViewController _handleTapAcknowledgeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd2fdc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c252440();
  if (param_3 == 3) {
    lVar2 = (long)_DAT_11277b980;
    func_0x00010c159240(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c1fadc0(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c159240(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11277b97c),PTR_s_setEnabled__112642f38,uVar1);
    return;
  }
  return;
}



/* Entry: 108dd3058; end: 108dd3077; -[SCGalleryPrivateGalleryConfirmPassphraseViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd3058(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277b984);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dd3078; end: 108dd308b; -[SCGalleryPrivateGalleryConfirmPassphraseViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd3078(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b984,param_3);
  return;
}



/* Entry: 108dd308c; end: 108dd3117; -[SCGalleryPrivateGalleryConfirmPassphraseViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd308c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b984);
  _objc_storeStrong(param_1 + _DAT_11277b980,0);
  _objc_storeStrong(param_1 + _DAT_11277b97c,0);
  _objc_storeStrong(param_1 + _DAT_11277b978,0);
  _objc_storeStrong(param_1 + _DAT_11277b974,0);
  _objc_storeStrong(param_1 + _DAT_11277b96c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b968,0);
  return;
}



/* Entry: 108dd3118; end: 108dd31f7; -[SCGalleryPrivateGalleryEnterPasscodeViewController initForCreatingWithTitle:showsPassphraseOption:soundEffects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108dd3118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fe840;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b988) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b98c) = param_4;
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b990);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b990) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11277b994;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108dd31f8; end: 108dd32fb; -[SCGalleryPrivateGalleryEnterPasscodeViewController initForConfirmingWithTitle:passcode:soundEffects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108dd31f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fe840;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b998) = 1;
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b990);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b990) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b99c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b99c) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11277b994;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108dd32fc; end: 108dd342b; -[SCGalleryPrivateGalleryEnterPasscodeViewController initForUnlockingWithPassphrasePromptRequester:title:text:soundEffects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108dd32fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126fe840;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b9a0) = 1;
    lVar4 = (long)_DAT_11277b9a4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b990);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b990) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9a8) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11277b994;
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



/* Entry: 108dd342c; end: 108dd4033; -[SCGalleryPrivateGalleryEnterPasscodeViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd342c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_248 [32];
  double dStack_228;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  
  puStack_a0 = PTR_PTR_1126fe840;
  lStack_a8 = param_5;
  _objc_msgSendSuper2(&lStack_a8,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  lVar9 = (long)_DAT_11277b9ac;
  if (*(char *)(param_5 + lVar9) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1 + 20.0,param_2 + 50.0,param_3 + -40.0,param_4 + -100.0);
    lVar12 = (long)_DAT_11277b9b0;
    uVar10 = *(undefined8 *)(param_5 + lVar12);
    *(undefined **)(param_5 + lVar12) = puVar1;
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_5 + lVar12);
    func_0x00010c08c0e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4020000000000000);
    _objc_release(uVar10);
    lVar2 = *(long *)(param_5 + lVar12);
    func_0x00010c08c0e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c013de0();
    lVar12 = (long)_DAT_11277b9b0;
    uVar10 = *(undefined8 *)(param_5 + lVar12);
    *(undefined **)(param_5 + lVar12) = puVar1;
    _objc_release(uVar10);
  }
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  dVar13 = *(double *)PTR__CGRectZero_110347608;
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(dVar13,uVar14,uVar15,uVar16);
  lVar2 = (long)_DAT_11277b9b4;
  uVar10 = *(undefined8 *)(param_5 + lVar2);
  *(undefined **)(param_5 + lVar2) = puVar1;
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(dVar13,uVar14,uVar15,uVar16);
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf470c0(PTR_PTR_1126dbe88);
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12));
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_108dd4034;
  puStack_b8 = &UNK_1108471b0;
  lStack_b0 = param_5;
  func_0x00010c0bbfc0(*(undefined8 *)(param_5 + lVar2));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar4);
  _objc_release(ppuVar5);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar4);
  _objc_release(puVar6);
  puVar6 = puVar4;
  func_0x00010c271420(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1eda0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126d27a8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126d27b0;
  func_0x00010bf690c0(PTR_PTR_1126d27b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001e60();
  lVar2 = (long)_DAT_11277b9b8;
  uVar10 = *(undefined8 *)(param_5 + lVar2);
  *(undefined **)(param_5 + lVar2) = puVar6;
  _objc_release(uVar10);
  _objc_release(puVar7);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + lVar2));
  _objc_release(puVar6);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12));
  lVar11 = (long)_DAT_11277b988;
  if (((*(byte *)(param_5 + lVar11) & 1) != 0) || (*(char *)(param_5 + _DAT_11277b998) == '\x01')) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110ef7ed8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef7ed8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(dVar13,uVar14,uVar15,uVar16);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar6);
    _objc_release(puVar7);
    func_0x00010c212f20(puVar6);
    puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar6);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar6);
    _objc_release(puVar7);
    func_0x00010c213040(puVar6);
    func_0x00010c16f5a0(puVar6);
    func_0x00010c1cfce0(puVar6);
    func_0x00010c160fc0(puVar6);
    lVar8 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar8);
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_108dd4190;
    puStack_e0 = &UNK_1108471b0;
    lStack_d8 = param_5;
    func_0x00010c0bbfc0(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c181cc0(0x443b4000,puVar6);
    uVar10 = *(undefined8 *)(param_5 + _DAT_11277b9bc);
    *(undefined **)(param_5 + _DAT_11277b9bc) = puVar6;
    _objc_retain(puVar6);
    _objc_release(uVar10);
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    if (*(char *)(param_5 + lVar11) == '\x01') {
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_108dd44e4;
      puStack_108 = &UNK_1108471b0;
      lStack_100 = param_5;
      func_0x00010c0bbfc0(*(undefined8 *)(param_5 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (*(char *)(param_5 + _DAT_11277b98c) == '\x01') {
        puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x00010c013de0(dVar13,uVar14,uVar15,uVar16);
        puVar6 = PTR_PTR_1126dbe90;
        _objc_alloc();
        func_0x00010c013de0(dVar13,uVar14,uVar15,uVar16);
        uVar10 = *(undefined8 *)(param_5 + _DAT_11277b9c0);
        *(undefined **)(param_5 + _DAT_11277b9c0) = puVar6;
        _objc_release(uVar10);
        puVar6 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_alloc();
        func_0x00010c013de0(dVar13,uVar14,uVar15,uVar16);
        uVar10 = *(undefined8 *)(param_5 + _DAT_11277b9c4);
        *(undefined **)(param_5 + _DAT_11277b9c4) = puVar6;
        _objc_release(uVar10);
        puVar6 = PTR_PTR_1126dbe88;
        ppuVar5 = &PTR____CFConstantStringClassReference_110ef7f18;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef7f18,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf474e0(puVar6);
        _objc_release(ppuVar5);
        func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12));
        puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_140 = 0xc2000000;
        pcStack_138 = FUN_108dd4558;
        puStack_130 = &UNK_1108471b0;
        lStack_128 = param_5;
        func_0x00010c0bbfc0(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
    }
  }
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(char *)(param_5 + _DAT_11277b998) == '\x01') {
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_108dd4688;
    puStack_158 = &UNK_1108471b0;
    lStack_150 = param_5;
    func_0x00010c0bbfc0(*(undefined8 *)(param_5 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(dVar13,uVar14,uVar15,uVar16);
    lVar11 = (long)_DAT_11277b9c8;
    uVar10 = *(undefined8 *)(param_5 + lVar11);
    *(undefined **)(param_5 + lVar11) = puVar7;
    _objc_release(uVar10);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + lVar11));
    _objc_release(puVar7);
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar11));
    ppuVar5 = &PTR____CFConstantStringClassReference_110ef7f38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef7f38,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_5 + lVar11));
    _objc_release(ppuVar5);
    puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_5 + lVar11));
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + lVar11));
    _objc_release(puVar7);
    func_0x00010c213040(*(undefined8 *)(param_5 + lVar11));
    func_0x00010c165e20(*(undefined8 *)(param_5 + lVar11));
    func_0x00010c1c83a0(0x3fe8000000000000,*(undefined8 *)(param_5 + lVar11));
    func_0x00010c1cfce0(*(undefined8 *)(param_5 + lVar11));
    func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12));
    puStack_198 = puVar6;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_108dd46fc;
    puStack_180 = &UNK_1108471b0;
    lStack_178 = param_5;
    func_0x00010c0bbfc0(*(undefined8 *)(param_5 + lVar11));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(char *)(param_5 + _DAT_11277b9a0) == '\x01') {
    if ((*(byte *)(param_5 + lVar9) & 1) == 0) {
      puVar7 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(dVar13,uVar14,uVar15,uVar16);
      func_0x00010bf47100(PTR_PTR_1126dbe88);
      func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12));
      puStack_1c0 = puVar6;
      uStack_1b8 = 0xc2000000;
      pcStack_1b0 = FUN_108dd4ac0;
      puStack_1a8 = &UNK_1108471b0;
      lStack_1a0 = param_5;
      func_0x00010c0bbfc0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_5 + lVar2);
      puStack_1f0 = puVar6;
      uStack_1e8 = 0xc2000000;
      uStack_1e0 = 0x108dd4e18;
      puStack_1d8 = &UNK_11084fc58;
      lStack_1d0 = param_5;
      puStack_1c8 = puVar7;
      _objc_retain(puVar7);
      func_0x00010c0bbfc0(uVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puStack_1c8);
      _objc_release(puVar7);
    }
    else {
      puStack_218 = puVar6;
      uStack_210 = 0xc2000000;
      pcStack_208 = FUN_108dd50e8;
      puStack_200 = &UNK_1108471b0;
      lStack_1f8 = param_5;
      func_0x00010c0bbfc0(*(undefined8 *)(param_5 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
      _CGAffineTransformMakeScale(auStack_248,0x3fee666666666666,0x3fee666666666666);
      func_0x00010c219960(*(undefined8 *)(param_5 + lVar2));
      dVar13 = dStack_228;
    }
    puVar6 = PTR_PTR_1126d2798;
    _objc_alloc_init();
    lVar2 = (long)_DAT_11277b9cc;
    uVar10 = *(undefined8 *)(param_5 + lVar2);
    *(undefined **)(param_5 + lVar2) = puVar6;
    _objc_release(uVar10);
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar2));
    func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12));
    func_0x00010c0bbfc0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a7f60(puVar3);
    func_0x00010c1a7f60(puVar4);
    lVar9 = *(long *)(param_5 + _DAT_11277b9a4);
    func_0x00010bf01800();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar9 != 0) && (func_0x00010c26f3a0(lVar9), 0.0 < dVar13)) {
      func_0x00010c1673c0(*(undefined8 *)(param_5 + lVar2));
      uVar10 = *(undefined8 *)(param_5 + lVar2);
      func_0x00010c29bf00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12));
      func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12));
      func_0x00010c0bbfe0(uVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c24dbc0(*(undefined8 *)(param_5 + lVar2));
      _objc_release(uVar10);
    }
    _objc_release(lVar9);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 108dd4034; end: 108dd418f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd4034(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar4 + 0x10))(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd4190; end: 108dd44e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd4190(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9b8);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd44e4; end: 108dd4557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd44e4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd4558; end: 108dd4687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd4558(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd4688; end: 108dd46fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd4688(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd46fc; end: 108dd4abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd46fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9bc);
  if (lVar7 == 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9b8);
  }
  func_0x00010c0bc020(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9b4);
  func_0x00010c0bbea0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(uVar8);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd4ac0; end: 108dd50e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd4ac0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d460();
  if ((int)puVar2 != 0) {
    puVar2 = puVar1;
    func_0x00010c14d280();
    uVar11 = 0x4030000000000000;
    if (((ulong)puVar2 & 1) != 0) goto LAB_108dd4b2c;
  }
  uVar11 = 0x4040000000000000;
LAB_108dd4b2c:
  lVar3 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9b4);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  (**(code **)(lVar8 + 0x10))(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  (**(code **)(lVar8 + 0x10))(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd50e8; end: 108dd539f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd50e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c0699c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9b8));
  func_0x00010c2971c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c14d460();
  lVar1 = param_2;
  if (((int)puVar4 == 0) || (puVar4 = puVar3, func_0x00010c14d280(), (int)puVar4 == 0)) {
    func_0x00010c274140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9b4);
    func_0x00010c0bbea0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = 0xc034000000000000;
  }
  else {
    func_0x00010c274140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar8 = 0xc024000000000000;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd53a0; end: 108dd54cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd53a0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd54d0; end: 108dd5633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd54d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd5634; end: 108dd5697; -[SCGalleryPrivateGalleryEnterPasscodeViewController galleryPasscodeViewPasscodeDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd5634(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (((*(byte *)(param_1 + _DAT_11277b988) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_11277b998) == '\x01')) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277b9c8),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108dd5698; end: 108dd59f7; -[SCGalleryPrivateGalleryEnterPasscodeViewController galleryPasscodeViewPasscodeEntered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd5698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_11277b988) == '\x01') {
    lVar5 = (long)_DAT_11277b9d0;
    uVar2 = param_1 + lVar5;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_108dd58dc;
    lVar5 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar5);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277b9b8);
    func_0x00010c0f4d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96ae0(lVar5);
    _objc_release(uVar1);
  }
  else if (*(char *)(param_1 + _DAT_11277b998) == '\x01') {
    iVar4 = (int)*(undefined8 *)(param_1 + _DAT_11277b99c);
    lVar5 = (long)_DAT_11277b9b8;
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0f4d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if (iVar4 == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11277b994);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299140();
      _objc_release(uVar1);
      func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277b9c8));
      goto LAB_108dd58dc;
    }
    lVar5 = (long)_DAT_11277b9d0;
    uVar2 = param_1 + lVar5;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_108dd58dc;
    lVar5 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bf96b00();
  }
  else {
    if (*(char *)(param_1 + _DAT_11277b9a0) != '\x01') goto LAB_108dd58dc;
    lVar5 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar5);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277b9a4);
    lVar5 = *(long *)(param_1 + _DAT_11277b9b8);
    func_0x00010c0f4d80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c134a80(uVar1);
  }
  _objc_release(lVar5);
LAB_108dd58dc:
  _objc_release(param_3);
  return;
}



/* Entry: 108dd59f8; end: 108dd5b03; -[SCGalleryPrivateGalleryEnterPasscodeViewController lockedRateLimitControllerDidReachAllowedFutureDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd59f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277b9cc);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108dd5b04;
  puStack_50 = &UNK_110842e18;
  _objc_retain(uVar3);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108dd5b10;
  puStack_80 = &UNK_110848bd8;
  lStack_78 = param_1;
  uStack_70 = uVar3;
  uStack_48 = uVar3;
  _objc_retain(uVar3);
  func_0x00010bf03420(0x3fd3333333333333,puVar2,param_2,&puStack_68,&puStack_98);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  return;
}



/* Entry: 108dd5b04; end: 108dd5b0f;  */

void FUN_108dd5b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108dd5b10; end: 108dd5b53;  */

void FUN_108dd5b10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 108dd5b54; end: 108dd5bff; -[SCGalleryPrivateGalleryEnterPasscodeViewController reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd5b54(long param_1)

{
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_11277b9b8));
  if ((*(char *)(param_1 + _DAT_11277b988) == '\x01') &&
     (*(char *)(param_1 + _DAT_11277b98c) == '\x01')) {
    func_0x00010c1fadc0(*(undefined8 *)(param_1 + _DAT_11277b9c0));
    func_0x00010c1a8860(*(undefined8 *)(param_1 + _DAT_11277b9c4));
  }
  if (*(char *)(param_1 + _DAT_11277b998) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11277b9c8),PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 108dd5c00; end: 108dd5dd7; -[SCGalleryPrivateGalleryEnterPasscodeViewController _showLockedRateLimitViewIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd5c00(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf01820();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar3 != 0) && (func_0x00010c26f3a0(lVar3), 0.0 < param_1)) {
    lVar7 = (long)_DAT_11277b9cc;
    func_0x00010c1673c0(*(undefined8 *)(param_2 + lVar7),param_3,lVar3);
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar7);
    lVar5 = param_4;
    func_0x00010bf3ec40(param_4);
    func_0x00010c2162e0(uVar6,param_3,lVar5,0);
    func_0x00010c066f80(*(undefined8 *)(param_2 + _DAT_11277b9b0),param_3,uVar4,
                        *(undefined8 *)(param_2 + _DAT_11277b9b8));
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108dd5dd8;
    puStack_70 = &UNK_1108471b0;
    lStack_68 = param_2;
    func_0x00010c0bbfe0(uVar4,param_3,&puStack_88);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1677c0(0,uVar4);
    lVar5 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar5);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108dd5f3c;
    puStack_98 = &UNK_110842e18;
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_108dd5f48;
    puStack_c0 = &UNK_110841f20;
    lStack_b8 = param_2;
    uStack_90 = uVar4;
    _objc_retain(uVar4);
    func_0x00010bf03420(0x3fd3333333333333,puVar2,param_3,&puStack_b0,&puStack_d8);
    func_0x00010c24dbc0(*(undefined8 *)(param_2 + lVar7));
    _objc_release(uStack_90);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 108dd5dd8; end: 108dd5f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd5dd8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd5f3c; end: 108dd5f47;  */

void FUN_108dd5f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108dd5f48; end: 108dd5f7f;  */

void FUN_108dd5f48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108dd5f80; end: 108dd5fbb; -[SCGalleryPrivateGalleryEnterPasscodeViewController _didPressBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd5f80(long param_1)

{
  param_1 = param_1 + _DAT_11277b9d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf96b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dd5fbc; end: 108dd6023; -[SCGalleryPrivateGalleryEnterPasscodeViewController setPopupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd5fbc(long param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + _DAT_11277b9ac) = 1;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108dd6024; end: 108dd60b7; -[SCGalleryPrivateGalleryEnterPasscodeViewController _handleTapUsePassphraseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd6024(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c252440();
  if (param_3 == 3) {
    func_0x00010c1fadc0(*(undefined8 *)(param_1 + _DAT_11277b9c0),param_2,1);
    func_0x00010c1a8860(*(undefined8 *)(param_1 + _DAT_11277b9c4),param_2,1);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108dd60b8;
    puStack_30 = &UNK_110841f20;
    lStack_28 = param_1;
    FUN_108de5f78(&puStack_48);
  }
  return;
}



/* Entry: 108dd60b8; end: 108dd6177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd60b8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((int)param_2 == 0) {
    func_0x00010c1fadc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9c0),param_2,0)
    ;
                    /* WARNING: Could not recover jumptable at 0x00010c1a8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9c4),
               PTR_s_setHighlighted__112647c38,0);
    return;
  }
  lVar3 = (long)_DAT_11277b9d0;
  uVar1 = *(long *)(param_1 + 0x20) + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x20) + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf96b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 108dd6178; end: 108dd6197; -[SCGalleryPrivateGalleryEnterPasscodeViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd6178(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277b9d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dd6198; end: 108dd61ab; -[SCGalleryPrivateGalleryEnterPasscodeViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd6198(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b9d0,param_3);
  return;
}



/* Entry: 108dd61ac; end: 108dd62a7; -[SCGalleryPrivateGalleryEnterPasscodeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd61ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b9d0);
  _objc_storeStrong(param_1 + _DAT_11277b994,0);
  _objc_storeStrong(param_1 + _DAT_11277b9c8,0);
  _objc_storeStrong(param_1 + _DAT_11277b9c4,0);
  _objc_storeStrong(param_1 + _DAT_11277b9c0,0);
  _objc_storeStrong(param_1 + _DAT_11277b9bc,0);
  _objc_storeStrong(param_1 + _DAT_11277b9cc,0);
  _objc_storeStrong(param_1 + _DAT_11277b9b8,0);
  _objc_storeStrong(param_1 + _DAT_11277b9b4,0);
  _objc_storeStrong(param_1 + _DAT_11277b9b0,0);
  _objc_storeStrong(param_1 + _DAT_11277b9a8,0);
  _objc_storeStrong(param_1 + _DAT_11277b9a4,0);
  _objc_storeStrong(param_1 + _DAT_11277b99c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b990,0);
  return;
}



/* Entry: 108dd62a8; end: 108dd63ef; -[SCGalleryPrivateGalleryEnterPassphraseViewController initForCreatingWithTitle:text:passphrasePlaceholder:showsPasscodeOption:effects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108dd62a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fe848;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b9d4) = 1;
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9d8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9dc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9dc) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9e0) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b9e4) = param_6;
    lVar4 = (long)_DAT_11277b9e8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108dd63f0; end: 108dd6557; -[SCGalleryPrivateGalleryEnterPassphraseViewController initForUnlockingWithPassphrasePromptRequester:title:text:passphrasePlaceholder:effects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108dd63f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fe848;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b9ec) = 1;
    lVar4 = (long)_DAT_11277b9f0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9d8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9dc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9dc) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b9e0) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11277b9e8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108dd6558; end: 108dd682b; -[SCGalleryPrivateGalleryEnterPassphraseViewController _createPassphraseAlertView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd6558(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126af4e0;
  puVar7 = auStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11277b9f4;
  if (*(long *)(param_1 + lVar11) == 0) {
    puVar1 = PTR_PTR_1126af4d8;
    func_0x00010bf547e0(PTR_PTR_1126af4d8,param_2,*(undefined8 *)(param_1 + _DAT_11277b9d8),0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c880(0,0,0x4020000000000000,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108dd682c;
    puStack_80 = &UNK_11084fd58;
    puStack_78 = param_1;
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar4 = PTR_PTR_1126d27d0;
    _objc_alloc();
    func_0x00010c014400(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar10 = (long)_DAT_11277b9f8;
    uVar9 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
    _objc_release(puVar4);
    lVar5 = *(long *)(param_1 + _DAT_11277b9e0);
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar10));
    }
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar10));
    _objc_initWeak(auStack_a0,param_1);
    puVar4 = PTR_PTR_1126af4f8;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_loadWeakRetained();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar7;
    puStack_68 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003660();
    uVar9 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar4;
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_a0);
    _objc_release(puVar1);
    _objc_release();
    param_1 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdfee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didPressBackButton_11255d520);
  return;
}



/* Entry: 108dd682c; end: 108dd6843;  */

void FUN_108dd682c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didPressBackButton_11255d520);
  return;
}



/* Entry: 108dd6844; end: 108dd70e7; -[SCGalleryPrivateGalleryEnterPassphraseViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd6844(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_a8;
  undefined *puStack_a0;
  
  puStack_a0 = PTR_PTR_1126fe848;
  lStack_a8 = param_1;
  _objc_msgSendSuper2(&lStack_a8,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  dVar15 = *(double *)PTR__CGRectZero_110347608;
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(dVar15,uVar16,uVar17,uVar18);
  lVar11 = (long)_DAT_11277b9fc;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar2;
  _objc_release(uVar10);
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(dVar15,uVar16,uVar17,uVar18);
  func_0x00010bf470c0(PTR_PTR_1126dbe88);
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar13);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar11));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(dVar15,uVar16,uVar17,uVar18);
  func_0x00010bf47100(PTR_PTR_1126dbe88);
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar13);
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c14d460();
  if (((int)puVar5 == 0) || (puVar5 = puVar1, func_0x00010c14d280(), (int)puVar5 == 0)) {
    lVar13 = (long)_DAT_11277b9e4;
    uVar10 = 0x4051000000000000;
    if (*(char *)(param_1 + lVar13) == '\0') {
      uVar10 = 0x4040000000000000;
    }
  }
  else {
    lVar13 = (long)_DAT_11277b9e4;
    uVar10 = 0x4046000000000000;
    if (*(char *)(param_1 + lVar13) == '\0') {
      uVar10 = 0x4030000000000000;
    }
  }
  *(undefined8 *)(param_1 + _DAT_11277ba00) = uVar10;
  puVar5 = PTR_PTR_1126c3288;
  _objc_alloc();
  func_0x00010bffa0e0();
  lVar12 = (long)_DAT_11277ba04;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar5;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  ppuVar6 = &PTR____CFConstantStringClassReference_110daf898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf898,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar10);
  _objc_release(ppuVar6);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar12));
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar12));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(char *)(param_1 + lVar13) == '\x01') {
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(dVar15,uVar16,uVar17,uVar18);
    puVar5 = PTR_PTR_1126dbe90;
    _objc_alloc();
    func_0x00010c013de0(dVar15,uVar16,uVar17,uVar18);
    uVar10 = *(undefined8 *)(param_1 + _DAT_11277ba08);
    *(undefined **)(param_1 + _DAT_11277ba08) = puVar5;
    _objc_release(uVar10);
    puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(dVar15,uVar16,uVar17,uVar18);
    uVar10 = *(undefined8 *)(param_1 + _DAT_11277ba0c);
    *(undefined **)(param_1 + _DAT_11277ba0c) = puVar5;
    _objc_release(uVar10);
    puVar5 = PTR_PTR_1126dbe88;
    ppuVar6 = &PTR____CFConstantStringClassReference_110ef7f58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef7f58,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf474e0(puVar5);
    _objc_release(ppuVar6);
    lVar13 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar13);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar7);
  }
  puVar5 = PTR_PTR_1126d27d0;
  _objc_alloc();
  dVar14 = dVar15;
  func_0x00010c014400(dVar15,uVar16,uVar17,uVar18);
  lVar11 = (long)_DAT_11277b9f8;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar5;
  _objc_release(uVar10);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar5);
  lVar13 = *(long *)(param_1 + _DAT_11277b9e0);
  func_0x00010c08fa60();
  if (lVar13 != 0) {
    func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar11));
  }
  if (*(char *)(param_1 + _DAT_11277b9ec) == '\x01') {
    func_0x00010c1d9680(*(undefined8 *)(param_1 + lVar11));
    puVar5 = PTR_PTR_1126d2798;
    _objc_alloc_init();
    lVar12 = (long)_DAT_11277ba10;
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar5;
    _objc_release(uVar10);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar12));
    lVar13 = *(long *)(param_1 + _DAT_11277b9f0);
    func_0x00010bf01800();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar13 != 0) && (func_0x00010c26f3a0(lVar13), 0.0 < dVar14)) {
      func_0x00010c1673c0(*(undefined8 *)(param_1 + lVar12));
      uVar10 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c29bf00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2162e0(*(undefined8 *)(param_1 + lVar12));
      lVar8 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar8);
      func_0x00010c0bbfe0(uVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar12));
      _objc_release(uVar10);
    }
    _objc_release(lVar13);
  }
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar11));
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar13);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar11));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(dVar15,uVar16,uVar17,uVar18);
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(dVar15,uVar16,uVar17,uVar18);
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar13);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  _objc_retain(puVar4);
  func_0x00010c0bbfc0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  func_0x00010c0bbfc0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 108dd70e8; end: 108dd7273;  */

void FUN_108dd70e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar4 + 0x10))(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd7274; end: 108dd75ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd7274(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c14d460();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c14d280();
    uVar11 = 0x4030000000000000;
    if ((uVar2 & 1) != 0) goto LAB_108dd72c8;
  }
  uVar11 = 0x4040000000000000;
LAB_108dd72c8:
  lVar3 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11277b9fc);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  (**(code **)(lVar8 + 0x10))(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  (**(code **)(lVar8 + 0x10))(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd75f0; end: 108dd77bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd75f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(-*(double *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ba00));
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd77bc; end: 108dd7953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd77bc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c14d460();
  if (iVar1 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    func_0x00010c14d280();
    uVar4 = 0x4028000000000000;
    if ((uVar5 & 1) != 0) goto LAB_108dd7870;
  }
  uVar4 = 0x4034000000000000;
LAB_108dd7870:
  lVar2 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ba04);
  func_0x00010c0bbea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd7954; end: 108dd7b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd7954(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9fc);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd7b10; end: 108dd80bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd7b10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c0699c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9f8));
  func_0x00010c2971c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd80c0; end: 108dd810f; -[SCGalleryPrivateGalleryEnterPassphraseViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd80c0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe848;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c24eac0(*(undefined8 *)(param_1 + _DAT_11277b9f8));
  return;
}



/* Entry: 108dd8110; end: 108dd821b; -[SCGalleryPrivateGalleryEnterPassphraseViewController lockedRateLimitControllerDidReachAllowedFutureDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd8110(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277ba10);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108dd821c;
  puStack_50 = &UNK_110842e18;
  _objc_retain(uVar3);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108dd8228;
  puStack_80 = &UNK_110848bd8;
  lStack_78 = param_1;
  uStack_70 = uVar3;
  uStack_48 = uVar3;
  _objc_retain(uVar3);
  func_0x00010bf03420(0x3fd3333333333333,puVar2,param_2,&puStack_68,&puStack_98);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  return;
}



/* Entry: 108dd821c; end: 108dd8227;  */

void FUN_108dd821c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108dd8228; end: 108dd826b;  */

void FUN_108dd8228(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 108dd826c; end: 108dd8293; -[SCGalleryPrivateGalleryEnterPassphraseViewController galleryPassphraseViewDidChangePassphrase:] */

void FUN_108dd826c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be42880();
                    /* WARNING: Could not recover jumptable at 0x00010bea3090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setContinueButtonAndDoneKeyEnab_1125865c8,uVar1);
  return;
}



/* Entry: 108dd8294; end: 108dd82eb; -[SCGalleryPrivateGalleryEnterPassphraseViewController galleryPassphraseViewDidBeginEditingPassphrase:] */

void FUN_108dd8294(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108dd82ec;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000107c312d0("APPSTORE",&puStack_38);
  return;
}



/* Entry: 108dd82ec; end: 108dd8317;  */

void FUN_108dd82ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010be42880(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bea3090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s__setContinueButtonAndDoneKeyEnab_1125865c8,uVar1);
  return;
}



/* Entry: 108dd8318; end: 108dd831b; -[SCGalleryPrivateGalleryEnterPassphraseViewController galleryPassphraseViewDidEndEditingPassphrase:] */

void FUN_108dd8318(void)

{
  return;
}



/* Entry: 108dd831c; end: 108dd831f; -[SCGalleryPrivateGalleryEnterPassphraseViewController galleryPassphraseViewDidPressDoneKey:] */

void FUN_108dd831c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didPressContinueButtonOrDoneKey_11255d528);
  return;
}



/* Entry: 108dd8320; end: 108dd832f; -[SCGalleryPrivateGalleryEnterPassphraseViewController galleryPassphraseViewShouldLimitLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108dd8320(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277b9d4);
}



/* Entry: 108dd8330; end: 108dd839f; -[SCGalleryPrivateGalleryEnterPassphraseViewController reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd8330(long param_1)

{
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_11277b9f8));
  if (*(char *)(param_1 + _DAT_11277b9e4) == '\x01') {
    func_0x00010c1fadc0(*(undefined8 *)(param_1 + _DAT_11277ba08));
                    /* WARNING: Could not recover jumptable at 0x00010c1a8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11277ba0c),PTR_s_setHighlighted__112647c38,0);
    return;
  }
  return;
}



/* Entry: 108dd83a0; end: 108dd854f; -[SCGalleryPrivateGalleryEnterPassphraseViewController _keyboardWillChangeFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd83a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(uVar1);
  _objc_release(param_7);
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar3);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  if ((0.0 < param_1) && (lVar3 = (long)_DAT_11277ba14, *(double *)(param_5 + lVar3) != param_1)) {
    *(double *)(param_5 + lVar3) = param_1;
    uVar2 = *(undefined8 *)(param_5 + _DAT_11277ba04);
    func_0x00010c14df20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0bc0(-*(double *)(param_5 + lVar3) - *(double *)(param_5 + _DAT_11277ba00));
    _objc_release(uVar1);
    _objc_release(uVar2);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108dd8550;
    puStack_70 = &UNK_110842e18;
    lStack_68 = param_5;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_88);
  }
  return;
}



/* Entry: 108dd8550; end: 108dd8583;  */

void FUN_108dd8550(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108dd8584; end: 108dd85bf; -[SCGalleryPrivateGalleryEnterPassphraseViewController _didPressBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd8584(long param_1)

{
  param_1 = param_1 + _DAT_11277ba18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf96ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dd85c0; end: 108dd85c3; -[SCGalleryPrivateGalleryEnterPassphraseViewController _didPressContinueButton] */

void FUN_108dd85c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didPressContinueButtonOrDoneKey_11255d528);
  return;
}



/* Entry: 108dd85c4; end: 108dd871b; -[SCGalleryPrivateGalleryEnterPassphraseViewController _didPressContinueButtonOrDoneKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd85c4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010be42880();
  if ((int)lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277b9f8);
    func_0x00010c0f5140(uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(param_1 + _DAT_11277b9d4) == '\x01') {
      lVar4 = (long)_DAT_11277ba18;
      uVar2 = param_1 + lVar4;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        param_1 = param_1 + lVar4;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf96b80();
        _objc_release(param_1);
      }
    }
    else if (*(char *)(param_1 + _DAT_11277b9ec) == '\x01') {
      if ((*(byte *)(param_1 + _DAT_11277ba1c) & 1) == 0) {
        lVar4 = param_1;
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e900();
        _objc_release(lVar4);
      }
      func_0x00010c134a80(*(undefined8 *)(param_1 + _DAT_11277b9f0));
    }
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 108dd871c; end: 108dd88d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd871c(double param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x20);
  lVar5 = (long)_DAT_11277ba1c;
  if ((*(byte *)(lVar1 + lVar5) & 1) == 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar1);
    lVar1 = *(long *)(param_2 + 0x20);
  }
  if (param_3 != 0) {
    if (*(char *)(lVar1 + _DAT_11277b9ec) == '\x01') {
      lVar6 = (long)_DAT_11277ba18;
      uVar2 = lVar1 + lVar6;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      lVar1 = *(long *)(param_2 + 0x20);
      if ((uVar3 & 1) != 0) {
        lVar1 = lVar1 + lVar6;
        _objc_loadWeakRetained(lVar1);
        func_0x00010bf96be0();
        _objc_release(lVar1);
        lVar1 = *(long *)(param_2 + 0x20);
      }
    }
    if (*(char *)(lVar1 + lVar5) == '\x01') {
      puVar4 = PTR_PTR_1126af178;
      func_0x00010c22b900(PTR_PTR_1126af178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf83740();
      _objc_release(puVar4);
    }
    goto LAB_108dd88b8;
  }
  FUN_108de5da8(lVar1,param_4);
  func_0x00010beb9b40(*(undefined8 *)(param_2 + 0x20));
  lVar1 = param_4;
  func_0x00010bf01820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_108dd8898:
    func_0x00010c138ac0(*(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277b9f8));
  }
  else {
    lVar5 = param_4;
    func_0x00010bf01820(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    _objc_release(lVar5);
    _objc_release(lVar1);
    if (param_1 <= 0.0) goto LAB_108dd8898;
    func_0x00010c137fe0(*(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277b9f8));
  }
  func_0x00010bea3080(*(undefined8 *)(param_2 + 0x20));
LAB_108dd88b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108dd88d4; end: 108dd8b13; -[SCGalleryPrivateGalleryEnterPassphraseViewController _showLockedRateLimitViewIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd88d4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf01820();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) && (func_0x00010c26f3a0(lVar2), 0.0 < param_1)) {
    lVar7 = (long)_DAT_11277ba10;
    func_0x00010c1673c0(*(undefined8 *)(param_2 + lVar7),param_3,lVar2);
    if (*(char *)(param_2 + _DAT_11277ba1c) == '\x01') {
      puVar3 = PTR_PTR_1126af178;
      func_0x00010c22b900(PTR_PTR_1126af178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf83740();
      _objc_release(puVar3);
      func_0x00010beba820(param_2,param_3,lVar2);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_2 + lVar7);
      lVar5 = param_4;
      func_0x00010bf3ec40(param_4);
      func_0x00010c2162e0(uVar6,param_3,lVar5,1);
      lVar5 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar5);
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_108dd8b14;
      puStack_70 = &UNK_1108471b0;
      lStack_68 = param_2;
      func_0x00010c0bbfe0(uVar4,param_3,&puStack_88);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c08cdc0(uVar4);
      func_0x00010c1677c0(0,uVar4);
      lVar5 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(lVar5);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_b0 = puVar3;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_108dd8cd0;
      puStack_98 = &UNK_110842e18;
      puStack_d8 = puVar3;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_108dd8cdc;
      puStack_c0 = &UNK_110841f20;
      lStack_b8 = param_2;
      uStack_90 = uVar4;
      _objc_retain(uVar4);
      func_0x00010bf03420(0x3fd3333333333333,puVar1,param_3,&puStack_b0,&puStack_d8);
      func_0x00010c255f00(*(undefined8 *)(param_2 + _DAT_11277b9f8));
      func_0x00010c24dbc0(*(undefined8 *)(param_2 + lVar7));
      _objc_release(uStack_90);
      _objc_release(uVar4);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 108dd8b14; end: 108dd8ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd8b14(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9fc);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dd8cd0; end: 108dd8cdb;  */

void FUN_108dd8cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108dd8cdc; end: 108dd8d13;  */

void FUN_108dd8cdc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108dd8d14; end: 108dd8da7; -[SCGalleryPrivateGalleryEnterPassphraseViewController _handleTapUsePasscodeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd8d14(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c252440();
  if (param_3 == 3) {
    func_0x00010c1fadc0(*(undefined8 *)(param_1 + _DAT_11277ba08),param_2,1);
    func_0x00010c1a8860(*(undefined8 *)(param_1 + _DAT_11277ba0c),param_2,1);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108dd8da8;
    puStack_30 = &UNK_110841f20;
    lStack_28 = param_1;
    FUN_108de6224(&puStack_48);
  }
  return;
}



/* Entry: 108dd8da8; end: 108dd8e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd8da8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((int)param_2 == 0) {
    func_0x00010c1fadc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ba08),param_2,0)
    ;
    func_0x00010c1a8860(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ba0c));
                    /* WARNING: Could not recover jumptable at 0x00010c24ead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b9f8),
               PTR_s_startEditingPassphrase_1126714d8);
    return;
  }
  lVar3 = (long)_DAT_11277ba18;
  uVar1 = *(long *)(param_1 + 0x20) + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x20) + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf96bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 108dd8e78; end: 108dd906f; -[SCGalleryPrivateGalleryEnterPassphraseViewController _showRateLimitAlert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd8e78(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_60,param_1);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae6f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae6f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_60);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af4f8;
  _objc_alloc(PTR_PTR_1126af4f8);
  uStack_58 = *(undefined8 *)(param_1 + _DAT_11277ba10);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003660(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236180();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdfee00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108dd9070; end: 108dd909b;  */

void FUN_108dd9070(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfee00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dd909c; end: 108dd90ab;  */

void FUN_108dd909c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,0);
  return;
}



/* Entry: 108dd90ac; end: 108dd9117; -[SCGalleryPrivateGalleryEnterPassphraseViewController setPopupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd90ac(long param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + _DAT_11277ba1c) = 1;
  func_0x00010bdf10e0();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108dd9118; end: 108dd9153; -[SCGalleryPrivateGalleryEnterPassphraseViewController applicationDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd9118(long param_1)

{
  param_1 = param_1 + _DAT_11277ba18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf96ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dd9154; end: 108dd9237; -[SCGalleryPrivateGalleryEnterPassphraseViewController showPassphraseAlertView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd9154(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c1d9680(*(undefined8 *)(param_2 + _DAT_11277b9f8),param_3,1);
  puVar1 = PTR_PTR_1126d2798;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11277ba10;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar4),param_3,param_2);
  lVar2 = *(long *)(param_2 + _DAT_11277b9f0);
  func_0x00010bf01800();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (func_0x00010c26f3a0(lVar2), param_1 <= 0.0)) {
    puVar1 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c236180();
    _objc_release(puVar1);
  }
  else {
    func_0x00010c1673c0(*(undefined8 *)(param_2 + lVar4),param_3,lVar2);
    func_0x00010beba820(param_2,param_3,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108dd9238; end: 108dd9357; -[SCGalleryPrivateGalleryEnterPassphraseViewController _isPassphraseValid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108dd9238(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11277b9f8);
  func_0x00010c0f5140();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_11277b9d4) == '\x01') {
    uVar5 = uVar2;
    func_0x00010c08fa60();
    if ((0xf < uVar5) && (uVar5 = uVar2, func_0x00010c08fa60(), uVar5 < 0x21)) {
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c0989a0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c11f340(uVar2,param_2,puVar3);
      if (uVar5 == 0x7fffffffffffffff) {
        bVar1 = false;
      }
      else {
        uVar5 = uVar2;
        func_0x00010c11f340(uVar2,param_2,puVar4);
        bVar1 = uVar5 != 0x7fffffffffffffff;
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_108dd9314;
    }
  }
  else if (*(char *)(param_1 + _DAT_11277b9ec) == '\x01') {
    uVar5 = uVar2;
    func_0x00010c08fa60(uVar2);
    bVar1 = uVar5 != 0;
    goto LAB_108dd9314;
  }
  bVar1 = false;
LAB_108dd9314:
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 108dd9358; end: 108dd939f; -[SCGalleryPrivateGalleryEnterPassphraseViewController _setContinueButtonAndDoneKeyEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd9358(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_11277ba04));
                    /* WARNING: Could not recover jumptable at 0x00010c190f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b9f8),PTR_s_setDoneKeyEnabled__112641e00,param_3);
  return;
}



/* Entry: 108dd93a0; end: 108dd93b3; -[SCGalleryPrivateGalleryEnterPassphraseViewController actionViewSize] */

undefined1  [16] FUN_108dd93a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4046000000000000;
  auVar1._0_8_ = 0x7fefffffffffffff;
  return auVar1;
}



/* Entry: 108dd93b4; end: 108dd93e3; -[SCGalleryPrivateGalleryEnterPassphraseViewController actionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd93b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b9f8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


