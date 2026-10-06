/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071295b8; end: 10712987f;  */

void FUN_1071295b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126ba960;
  _objc_retain(param_2);
  _objc_alloc();
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  func_0x00010c13b540(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_1070c2ed4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c660();
  _objc_release(param_2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126c3d58;
  _objc_opt_new(PTR_PTR_1126c3d58);
  func_0x00010c2aa4a0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0940(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0960(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1340(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0ec0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b01a0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b08c0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfa3600(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066e80(uVar8);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  if (*(char *)(param_1 + 0x54) == '\x01') {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c29ce00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0e0460();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    uVar6 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf86d00(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar6);
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(puVar1);
    _objc_release(uVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  return;
}



/* Entry: 107129880; end: 1071298f7;  */

void FUN_107129880(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071298f8; end: 10712990b;  */

void FUN_1071298f8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateWithItemView__112680c50,param_2);
  return;
}



/* Entry: 10712990c; end: 107129aeb; -[PreviewViewController avatarPickerRequestedWithBitmojiUsers:targetView:friendmojiPickerScopeDelegate:] */

undefined8
FUN_10712990c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf1b760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 == 0) {
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126afea0;
    _objc_opt_class(PTR_PTR_1126afea0);
    lVar1 = lVar2;
    func_0x00010beecc40(lVar2,param_2,puVar3,&PTR___NSConcreteGlobalBlock_11098f858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170f60(param_1,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  func_0x00010c170f40(param_1,param_2,param_5);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar1 = param_1;
  func_0x00010c254bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar3,param_2,lVar1,0);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126d4d00;
  _objc_alloc(PTR_PTR_1126d4d00);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0565c0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar4,param_2,puVar3,
                      param_3,param_4,lVar1,param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010bf1b760(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  return 1;
}



/* Entry: 107129aec; end: 107129af3;  */

void FUN_107129aec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_bitmojiFriendmojiPickerScopeLaun_1125a4780);
  return;
}



/* Entry: 107129af4; end: 107129c2f; -[PreviewViewController friendmojiHintRequestedWithTargetView:friendmojiHintScopeDelegate:] */

undefined8
FUN_107129af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c170f20(param_1,param_2,param_4);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  uVar2 = param_1;
  func_0x00010c254bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d4d08;
  _objc_alloc(PTR_PTR_1126d4d08);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057460(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar3,param_2,puVar1,
                      param_3,uVar2,param_1);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010bf1b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 107129c30; end: 107129da3; -[PreviewViewController friendmojiAvatarPickerClosedWithFriendmojiType:selectedStickerId:] */

void FUN_107129c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126d4ce0;
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c243340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x0001070c4604();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6f40(puVar1,param_2,0,param_4,param_3,uVar8,0,uVar10);
  _objc_release(param_4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107129da4; end: 107129e17; -[PreviewViewController bitmojiFriendmojiPickerComplete] */

void FUN_107129da4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf1b760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf1b740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1b720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107129e18; end: 107129e67; -[PreviewViewController bitmojiFriendmojiPickerUserSelected:] */

void FUN_107129e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1b740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1b780();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107129e68; end: 107129edb; -[PreviewViewController bitmojiFriendmojiHintComplete] */

void FUN_107129e68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf1b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf1b6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1b6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107129edc; end: 107129fcb; -[PreviewViewController updateBitmojiPackagesWithChatGroup:completion:] */

void FUN_107129edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c53a4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcf2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c244de0(uVar3,param_2,uVar4,PTR___dispatch_main_q_11034be20,param_4);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107129fcc; end: 10712a01b; -[PreviewViewController indexOfDefaultCategoryForStickerPicker:] */

undefined8 FUN_107129fcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c253da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254800(param_1);
  uVar2 = uVar1;
  func_0x00010bfaf4e0(uVar1,param_2,param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10712a01c; end: 10712a083; -[PreviewViewController shouldShowSnapcodeStickerStyleTooltip] */

undefined8 FUN_10712a01c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001004fa1d0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c234300();
  if ((int)uVar2 != 0) {
    func_0x00010c201320(uVar1,param_2,0);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10712a084; end: 10712a1af; -[PreviewViewController _subscribeToInfoStickerCompleteEvents] */

void FUN_10712a084(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_1;
  func_0x00010bfede80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfedec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0(uVar3);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10712a1b0; end: 10712a39b;  */

void FUN_10712a1b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10712a274;
  puStack_48 = &UNK_110841fb0;
  uStack_40 = param_2;
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 10712a39c; end: 10712a69b; -[PreviewViewController _doesHometabContainCTPInfoStickerType:] */

undefined8 *
FUN_10712a39c(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 auStack_380 [8];
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined1 uStack_36f;
  undefined1 auStack_368 [8];
  long lStack_2c0;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [256];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c253da0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined8 *)0x3;
  puVar1 = param_2;
  func_0x00010c262b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (puVar1 == (undefined *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    param_1 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    puVar2 = puVar1;
    func_0x00010c253a60();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = &uStack_230;
    param_5 = SUB81(auStack_f0,0);
    param_6 = 0x10;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar20 = *plStack_220;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_220 != lVar20) {
            _objc_enumerationMutation(puVar2);
          }
          lVar19 = *(long *)(lStack_228 + (long)puVar18 * 8);
          _objc_retain(lVar19);
          param_1 = 0;
          lStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          plStack_260 = (long *)0x0;
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          lVar4 = lVar19;
          func_0x00010c085180();
          _objc_retainAutoreleasedReturnValue();
          lStack_2c0 = lVar4;
          func_0x00010bf52a60();
          if (lStack_2c0 != 0) {
            lVar23 = *plStack_260;
            do {
              lVar22 = 0;
              do {
                if (*plStack_260 != lVar23) {
                  _objc_enumerationMutation(lVar4);
                }
                lVar5 = *(long *)(lStack_268 + lVar22 * 8);
                param_1 = 0;
                lStack_2a8 = 0;
                uStack_2b0 = 0;
                uStack_298 = 0;
                plStack_2a0 = (long *)0x0;
                uStack_288 = 0;
                uStack_290 = 0;
                uStack_278 = 0;
                uStack_280 = 0;
                func_0x00010c084fc0();
                _objc_retainAutoreleasedReturnValue();
                puVar13 = &uStack_2b0;
                puVar14 = auStack_1f0;
                uVar15 = 0x10;
                lVar6 = lVar5;
                func_0x00010bf52a60();
                if (lVar6 != 0) {
                  lVar16 = *plStack_2a0;
                  do {
                    lVar21 = 0;
                    do {
                      if (*plStack_2a0 != lVar16) {
                        _objc_enumerationMutation(lVar5);
                      }
                      lVar24 = *(long *)(lStack_2a8 + lVar21 * 8);
                      lVar7 = lVar24;
                      func_0x00010bf96f00();
                      if (lVar7 == 4) {
                        func_0x00010bf96da0();
                        _objc_retainAutoreleasedReturnValue();
                        lVar7 = lVar24;
                        func_0x00010bfee000();
                        _objc_release(lVar24);
                        param_5 = SUB81(puVar14,0);
                        param_6 = (undefined1)uVar15;
                        if (lVar7 == param_4) {
                          _objc_release(lVar5);
                          _objc_release(lVar4);
                          _objc_release(lVar19);
                          puVar17 = (undefined8 *)0x1;
                          goto LAB_10712a644;
                        }
                      }
                      lVar21 = lVar21 + 1;
                    } while (lVar6 != lVar21);
                    puVar13 = &uStack_2b0;
                    puVar14 = auStack_1f0;
                    uVar15 = 0x10;
                    lVar6 = lVar5;
                    func_0x00010bf52a60();
                  } while (lVar6 != 0);
                }
                _objc_release(lVar5);
                lVar22 = lVar22 + 1;
              } while (lVar22 != lStack_2c0);
              lStack_2c0 = lVar4;
              func_0x00010bf52a60();
            } while (lStack_2c0 != 0);
          }
          _objc_release(lVar4);
          _objc_release(lVar19);
          puVar18 = puVar18 + 1;
        } while (puVar18 != puVar3);
        puVar13 = &uStack_230;
        param_5 = SUB81(auStack_f0,0);
        param_6 = 0x10;
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    puVar17 = (undefined8 *)0x0;
LAB_10712a644:
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar17;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  puVar2 = puVar1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar18;
  func_0x00010c255440();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar18);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = puVar9;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb2f0;
  _objc_opt_class(PTR_PTR_1126bb2f0);
  puVar18 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar2 = puVar3;
  if (((ulong)puVar18 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x00010bfa3600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar3;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ad20();
    _objc_release(puVar8);
    _objc_release(puVar18);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bc960;
    func_0x00010c290480();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010c13b540(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar18;
    func_0x0001070c4700();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c29ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar18);
    _objc_initWeak(auStack_368,puVar1);
    puVar18 = puVar12;
    func_0x00010c0e0460(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_380,auStack_368);
    uStack_378 = param_1;
    uStack_370 = param_5;
    _objc_retain(puVar3);
    puVar8 = puVar18;
    uStack_36f = param_6;
    func_0x00010c25ff60(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86d00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(puVar8);
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar18);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_380);
    _objc_destroyWeak(auStack_368);
    _objc_release(puVar12);
  }
  else {
    func_0x00010c28c880(param_1,puVar3);
    func_0x00010bfa3600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220ac0();
    _objc_release(puVar18);
    _objc_release(puVar3);
    puVar3 = puVar1;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar13);
  return puVar13;
}



/* Entry: 10712a69c; end: 10712aa4b; -[PreviewViewController _insertVenueStickerFromItemInstance:venueIsFromSearch:venueDistanceFromSnap:isFromCaption:] */

void FUN_10712a69c(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  puVar1 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c255440();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = puVar5;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bb2f0;
  _objc_opt_class(PTR_PTR_1126bb2f0);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ad20();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126bc960;
    func_0x00010c290480();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c13b540(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x0001070c4700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c29ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_initWeak(auStack_78,param_2);
    puVar3 = puVar8;
    func_0x00010c0e0460(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_78);
    uStack_88 = param_1;
    uStack_80 = param_5;
    _objc_retain(puVar2);
    puVar4 = puVar3;
    uStack_7f = param_6;
    func_0x00010c25ff60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(puVar4);
    _objc_release(param_2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar8);
  }
  else {
    func_0x00010c28c880(param_1,puVar2);
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220ac0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(param_4);
  return;
}



/* Entry: 10712aa4c; end: 10712ab13;  */

void FUN_10712aa4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10712ab14; end: 10712ae8b;  */

void FUN_10712ab14(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126bb2f0;
  _objc_opt_class(PTR_PTR_1126bb2f0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c220920(param_2);
    func_0x00010c220780(*(undefined8 *)(param_1 + 0x30),param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220ac0();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x0001070c5530();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c274120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c22fe80();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    if ((int)uVar8 != 0) {
      func_0x00010c1ae060(param_2);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010becd260(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220ae0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c13b540(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x0001070c5530();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c274120();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190900();
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(uVar8);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2542a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c0846e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c253ee0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ba960;
    _objc_alloc(PTR_PTR_1126ba960);
    func_0x00010c04c640();
    puVar9 = PTR_PTR_1126c3d58;
    _objc_opt_new(PTR_PTR_1126c3d58);
    func_0x00010c2aa4a0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b1340(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b0ec0(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b08c0(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3600(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf21f60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e80(uVar4);
    _objc_release(puVar10);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10712ae8c; end: 10712ae8f;  */

void FUN_10712ae8c(void)

{
  return;
}



/* Entry: 10712ae90; end: 10712af17; -[PreviewViewController _tappedVenueBlock] */

void FUN_10712ae90(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10712af18;
  puStack_38 = &UNK_11098f8f8;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10712af18; end: 10712b097;  */

void FUN_10712af18(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c0da000();
    if ((int)lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010bfa3600(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165580();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    func_0x00010c1cd520(param_2);
    lVar1 = param_2;
    func_0x00010c0fd2e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe1840();
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126b13b0;
    uVar4 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2980a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010be3cb40(param_1,param_2);
    _objc_release(puVar6);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10712b098; end: 10712b75f; -[PreviewViewController showPlacePickerTrayWithOnVenueTapped:sticker:presentationSource:suggestedVenues:venueIDToDistanceStringMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10712b098(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined **ppuStack_160;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bf3ddc0(param_1);
  _objc_initWeak(auStack_70,param_1);
  ppuStack_160 = param_1;
  func_0x00010becaa20();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10712b760;
    puStack_88 = &UNK_11098f928;
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    ppuVar1 = &puStack_a0;
    uStack_80 = param_3;
    _objc_retainBlock();
    _objc_release(ppuStack_160);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_78);
    ppuStack_160 = ppuVar1;
  }
  puVar2 = PTR_PTR_1126d4d10;
  _objc_alloc();
  ppuVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x0001070c2ef8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_1;
  func_0x00010bf30e20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar6 == (undefined **)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_1127641c4);
  }
  _objc_retain();
  ppuVar8 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x0001070c5608();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar14;
  func_0x0001070c5698();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar15;
  func_0x00010bf70a00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar18;
  func_0x0001070c5728();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = ppuVar19;
  func_0x00010c0ec340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = ppuVar21;
  func_0x00010bf448e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05fda0();
  _objc_release(ppuVar22);
  _objc_release(ppuVar21);
  _objc_release(ppuVar20);
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  _objc_release(ppuVar17);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(uVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  puVar23 = PTR_PTR_1126b1f08;
  _objc_alloc(PTR_PTR_1126b1f08);
  puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fc99999a0000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037cc0(*(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0,
                      0x4038000000000000,0x4034000000000000,puVar23);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  puVar24 = PTR_PTR_1126c6008;
  _objc_alloc(PTR_PTR_1126c6008);
  puVar25 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd3333340000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c480(puVar24);
  func_0x00010c1dc520(param_1);
  _objc_release(puVar24);
  _objc_release(puVar25);
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_10712b818;
  uStack_b0 = 0x10712b828;
  ppuVar1 = param_1;
  func_0x00010be74220();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = ppuVar1;
  if (puStack_c8[5] != 0) {
    ppuVar1 = param_1;
    func_0x00010c0fd2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00010c151be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
    func_0x00010c1677c0(0,puStack_c8[5]);
  }
  ppuVar1 = param_1;
  func_0x00010c0fd2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c0687c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,auStack_70);
  ppuVar4 = ppuVar3;
  func_0x00010c25ff60(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc980(param_1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  func_0x00010c0fd2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235840();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(ppuStack_a8);
  _objc_release(puVar23);
  _objc_release(puVar2);
  _objc_release(ppuStack_160);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10712b760; end: 10712b817;  */

void FUN_10712b760(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c0fd2e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe1840();
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))
              (param_1,*(long *)(param_2 + 0x20),param_3,param_4,param_5);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10712b818; end: 10712b82f;  */

void FUN_10712b818(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10712b830; end: 10712b903;  */

void FUN_10712b830(long param_1,undefined8 param_2)

{
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10712b904;
  puStack_40 = &UNK_11098f958;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_60,param_1 + 0x28);
  func_0x00010c0c17e0(param_2);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_2);
  return;
}



/* Entry: 10712b904; end: 10712bbb7;  */

void FUN_10712b904(double param_1,long param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = param_4;
  _objc_retain(param_3);
  if (((param_4 == (undefined *)0x8) &&
      (*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28) != 0)) &&
     (func_0x00010bf01b40(), puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50, param_1 == 0.0
     )) {
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27b360(param_3);
    uVar4 = uVar2;
    func_0x00010bf493c0(-20.0 - param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
    func_0x00010c262ca0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493c0(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010bf493c0(0xc03e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar13;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar16);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c1677c0(0x3ff0000000000000,
                        *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  if (puVar17 == (undefined *)0x2) {
    lVar18 = param_3 + 0x28;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c0da000();
    if ((int)lVar19 != 0) {
      lVar19 = lVar18;
      func_0x00010bfa3600(lVar18);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar19;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165580();
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar19);
    }
    func_0x00010c1cd520(lVar18);
    func_0x00010c1dc520(lVar18);
    if (*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28) != 0) {
      func_0x00010c12c960();
      lVar19 = *(long *)(*(long *)(param_3 + 0x20) + 8);
      uVar16 = *(undefined8 *)(lVar19 + 0x28);
      *(undefined8 *)(lVar19 + 0x28) = 0;
      _objc_release(uVar16);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar18);
    return;
  }
  return;
}



/* Entry: 10712bbb8; end: 10712bc9b;  */

void FUN_10712bbb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_3 == 2) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010c0da000();
    if ((int)lVar5 != 0) {
      lVar5 = lVar1;
      func_0x00010bfa3600(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165580();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar5);
    }
    func_0x00010c1cd520(lVar1,param_2,0);
    func_0x00010c1dc520(lVar1,param_2,0);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) != 0) {
      func_0x00010c12c960();
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = 0;
      _objc_release(uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10712bc9c; end: 10712be6b; -[PreviewViewController _placePickerTooltipIfUnseen] */

void FUN_10712bc9c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c51d0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  func_0x0001004fa1d0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c07be80();
  puVar8 = (undefined *)0x0;
  if (((int)uVar1 != 0) && ((uVar6 & 1) == 0)) {
    uVar1 = uVar2;
    func_0x00010c123120();
    if ((int)uVar1 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126b09c0;
      _objc_alloc(PTR_PTR_1126b09c0);
      puVar7 = puVar8;
      func_0x000108d28b64();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051640(puVar8,param_2,puVar7,0,2);
      _objc_release(puVar7);
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x0001070c51d0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(param_1);
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10712be6c; end: 10712c153; -[PreviewViewController _didAddOrRemoveStickerView:] */

void FUN_10712be6c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    if (lVar3 == 6) {
      uVar4 = param_1;
      func_0x00010c13b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfaeca0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfaee80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf731a0(uVar1);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    uVar4 = param_1;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_78,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10712c154;
    puStack_98 = &UNK_110848218;
    _objc_retain(uVar1);
    uStack_90 = uVar1;
    _objc_retain(param_3);
    lStack_88 = param_3;
    _objc_copyWeak(auStack_80,auStack_78);
    ppuVar7 = &puStack_b0;
    _objc_retainBlock();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c253880(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c271a80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c07faa0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar5);
    if ((int)uVar6 == 0) {
      (*(code *)ppuVar7[2])(ppuVar7);
    }
    else {
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c231f00();
      _objc_release(uVar5);
      if ((uVar6 & 1) == 0) {
        (*(code *)ppuVar7[2])(ppuVar7);
      }
      else {
        uVar5 = uVar4;
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar7);
        func_0x00010c109fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(ppuVar7);
      }
    }
    _objc_release(ppuVar7);
    _objc_destroyWeak(auStack_80);
    _objc_release(lStack_88);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10712c154; end: 10712c193;  */

void FUN_10712c154(long param_1,undefined8 param_2)

{
  func_0x00010bf736e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c242fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10712c194; end: 10712c19f;  */

void FUN_10712c194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010712c19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10712c1a0; end: 10712c1a3; -[PreviewViewController featureStickerContainerDidAddStickerView:] */

void FUN_10712c1a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfc270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didAddOrRemoveStickerView__11255ca38);
  return;
}



/* Entry: 10712c1a4; end: 10712c1a7; -[PreviewViewController featureStickerContainerDidRemoveStickerView:] */

void FUN_10712c1a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfc270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didAddOrRemoveStickerView__11255ca38);
  return;
}



/* Entry: 10712c1a8; end: 10712c1ab; -[PreviewViewController featureStickerContainerInfoStickerDataProvider] */

void FUN_10712c1a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfede90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_infoStickerDataProvider_1125d9168);
  return;
}



/* Entry: 10712c1ac; end: 10712c1db; -[PreviewViewController featureStickerContainerUpdateXButtonAndSnapEditingState] */

void FUN_10712c1ac(undefined8 param_1)

{
  func_0x00010c111180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10712c1dc; end: 10712c31f; -[PreviewViewController featureStickerContainer:didUpdateState:] */

void FUN_10712c1dc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c070a20();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5fac0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0d2440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e500();
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c242fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_snapSegmentStateChangedShouldUpd_11266e610,1)
  ;
  return;
}



/* Entry: 10712c320; end: 10712c337; -[PreviewViewController showPlacePickerTrayForSticker:] */

void FUN_10712c320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2391b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showPlacePickerTrayWithOnVenueTa_11266be90,0,param_3,0,0,0);
  return;
}



/* Entry: 10712c338; end: 10712c37b; -[PreviewViewController controlsView] */

void FUN_10712c338(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10712c37c; end: 10712c40b; -[PreviewViewController venueStickerDidTouchBegin:] */

void FUN_10712c37c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c273f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2980e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f9e0(uVar3,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10712c40c; end: 10712c46f; -[PreviewViewController updateCustomStickerData] */

void FUN_10712c40c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf38dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedcfe0(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10712c470; end: 10712c4eb; -[PreviewViewController _handleFeedsRepositoryUpdate] */

void FUN_10712c470(undefined8 param_1)

{
  func_0x00010bfa42e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0800();
  _objc_release(param_1);
  return;
}



/* Entry: 10712c4ec; end: 10712c6d3;  */

ulong FUN_10712c4ec(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_2;
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27dd80();
  _objc_release(uVar2);
  if (uVar3 == 10) {
    uVar2 = param_2;
    func_0x00010bf38dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x00010bf38dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar2 != 0) {
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar4);
          }
          uVar9 = *(ulong *)(uVar8 * 8);
          func_0x00010bfa3d00();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar9;
          func_0x00010c27dd80();
          _objc_release(uVar9);
          if (uVar5 < 0xe && (1L << (uVar5 & 0x3f) & 0x20bcU) != 0) {
            func_0x00010bed5480(*(undefined8 *)(param_1 + 0x20));
            func_0x00010bedcfe0(*(undefined8 *)(param_1 + 0x20));
          }
          uVar8 = uVar8 + 1;
        } while (uVar2 != uVar8);
        uVar2 = uVar4;
        func_0x00010bf52a60();
      }
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010bfa3d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c27dd80();
  _objc_release(uVar6);
  return (ulong)(uVar2 == 0xb);
}



/* Entry: 10712c6d4; end: 10712c717;  */

bool FUN_10712c6d4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c27dd80();
  _objc_release(param_2);
  return lVar1 == 0xb;
}



/* Entry: 10712c718; end: 10712c71b;  */

void FUN_10712c718(void)

{
  return;
}



/* Entry: 10712c71c; end: 10712c7ab; -[PreviewViewController _updatePickerWithChildFeed:] */

void FUN_10712c71c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10712c7ac;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10712c7ac; end: 10712c88f;  */

void FUN_10712c7ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c253da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28a9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c254bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128c00();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27dd80();
  _objc_release(lVar3);
  if (lVar4 == 3) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c254bc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c0fbbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9940();
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10712c890; end: 10712c917; -[PreviewViewController _updateChildFeedMapWithFeed:supportedType:] */

void FUN_10712c890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf38dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10712c918; end: 10712ca13; -[PreviewViewController reloadHometabPage] */

void FUN_10712c918(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bfede80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfedea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2868c0(lVar1,param_2,lVar3,lVar5 == 0);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c253da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c262b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c128b60(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10712ca14; end: 10712ca17; -[PreviewViewController stickerDataProviderPresentingViewController] */

void FUN_10712ca14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c254bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stickerPickerViewController_112672d18);
  return;
}



/* Entry: 10712ca18; end: 10712cbdb; -[PreviewViewController didFavoriteSticker:indexPath:superCategoryType:error:] */

void FUN_10712ca18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126d4d18;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c56e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c271a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf96f00();
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c271a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar11 = uVar9;
  func_0x00010c06c020(uVar9,param_2,uVar10);
  func_0x00010bf85700(puVar1,param_2,1,param_6,uVar5,
                      &PTR____CFConstantStringClassReference_110db9e38,uVar6,uVar8,0,param_4,0,
                      (char)uVar11);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10712cbdc; end: 10712cd9f; -[PreviewViewController didUnfavoriteSticker:indexPath:superCategoryType:error:] */

void FUN_10712cbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126d4d18;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c56e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c271a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf96f00();
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c271a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar11 = uVar9;
  func_0x00010c06c020(uVar9,param_2,uVar10);
  func_0x00010bf85700(puVar1,param_2,0,param_6,uVar5,
                      &PTR____CFConstantStringClassReference_110db9e38,uVar6,uVar8,0,param_4,0,
                      (char)uVar11);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10712cda0; end: 10712ce5f; -[PreviewViewController didDeleteSticker:] */

void FUN_10712cda0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c27dd80();
  if (param_3 == 5) {
    uVar1 = param_1;
    func_0x00010bf38dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedcfe0(param_1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf38dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedcfe0(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10712ce60; end: 10712ce63; -[PreviewViewController didRemoveFromRecents:error:] */

void FUN_10712ce60(void)

{
  return;
}



/* Entry: 10712ce64; end: 10712d0cf; -[PreviewViewController didUpdateFriendmojiToBitmojiUser:] */

void FUN_10712ce64(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c58b4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb97e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar4;
  func_0x00010c088c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar5 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    if ((uVar6 & 1) != 0) goto LAB_10712d0a0;
  }
  lVar1 = lVar4;
  func_0x00010c088c80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10712d0d0;
  puStack_60 = &UNK_110864588;
  _objc_retain(param_3);
  lVar1 = lVar3;
  uStack_58 = param_3;
  func_0x00010bfece40(lVar3,param_2,&puStack_78);
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010c12d3c0(lVar3,param_2,lVar1);
  }
  lVar1 = lVar4;
  func_0x00010c088c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = lVar4;
    func_0x00010c088c60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(lVar3,param_2,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = lVar3;
  func_0x00010bf51e00(lVar3);
  func_0x00010c28c540(lVar4,param_2,param_3,lVar1,0);
  _objc_release(lVar1);
  func_0x00010bf1bf20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286080(param_1,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uStack_58);
  _objc_release(lVar3);
LAB_10712d0a0:
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10712d0d0; end: 10712d13f;  */

undefined8 FUN_10712d0d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10712d140; end: 10712d147; -[PreviewViewController actionMenuDidDismiss] */

void FUN_10712d140(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStickerActionMenu__112660430,0);
  return;
}



/* Entry: 10712d148; end: 10712d22f; -[PreviewViewController _tooltipForVenueSticker:] */

void FUN_10712d148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double in_d3;
  
  _objc_retain(param_3);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c273f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108edef90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_3);
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010c23a8a0(-(in_d3 + 10.0),uVar2,param_2,uVar3,1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10712d230; end: 10712d3ff; -[PreviewViewController showPlanCreationOnTapped:presentationSource:] */

void FUN_10712d230(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10712d400;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  ppuVar1 = &puStack_90;
  _objc_retainBlock();
  func_0x00010c254bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_1;
    func_0x00010c06d1a0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010bf84b00(param_1);
      goto LAB_10712d398;
    }
  }
  uVar2 = param_1;
  func_0x00010c06d1a0();
  if ((int)uVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    uVar2 = param_1;
    func_0x00010c27a780();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      func_0x0001000d76cc("APPSTORE",ppuVar1);
    }
    else {
      _objc_retain(ppuVar1);
      func_0x00010bf02c20(uVar2);
      _objc_release(ppuVar1);
    }
    _objc_release(uVar2);
  }
LAB_10712d398:
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 10712d400; end: 10712d43b;  */

void FUN_10712d400(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf3ddc0(param_1);
    func_0x00010be7d520(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10712d43c; end: 10712d447;  */

void FUN_10712d43c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010712d444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10712d448; end: 10712d5df; -[PreviewViewController _presentPlanCreationSheet] */

void FUN_10712d448(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c52cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c0f1960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10712d5e0;
    puStack_58 = &UNK_11098fa28;
    _objc_copyWeak(auStack_50,auStack_48);
    ppuVar5 = &puStack_70;
    _objc_retainBlock();
    puVar6 = PTR_PTR_1126d4d20;
    _objc_alloc(PTR_PTR_1126d4d20);
    func_0x00010c007440();
    func_0x00010c10b480(lVar3);
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 10712d5e0; end: 10712d813;  */

void FUN_10712d5e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126bb350;
  func_0x00010bf2f8a0();
  uVar3 = param_2;
  func_0x00010bf51e00();
  uVar4 = param_3;
  func_0x00010bf51e00();
  uVar5 = param_7;
  func_0x00010bf51e00();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10712d814;
  puStack_b0 = &UNK_110958808;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_a8 = uVar3;
  _objc_retain(uVar4);
  uStack_a0 = uVar4;
  puStack_88 = puVar2;
  _objc_retain(uVar5);
  ppuVar6 = &puStack_c8;
  uStack_98 = uVar5;
  uStack_80 = param_5 == 0;
  _objc_retainBlock();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10712d85c;
  puStack_e0 = &UNK_110848708;
  _objc_copyWeak(auStack_d0,param_1 + 0x20);
  _objc_retain(ppuVar6);
  ppuStack_d8 = ppuVar6;
  func_0x0001000d76cc("APPSTORE",&puStack_f8);
  _objc_release(ppuStack_d8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(ppuVar6);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10712d814; end: 10712d85b;  */

void FUN_10712d814(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be3c6a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10712d85c; end: 10712d8df;  */

void FUN_10712d85c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 == 0) || (uVar3 = uVar2, func_0x00010c06d1a0(), (uVar3 & 1) != 0)) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    else {
      func_0x00010bf84b00(uVar1,param_2,1,*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10712d8e0; end: 10712da87; -[PreviewViewController _insertPlanStickerForEventId:eventName:startTimestampMs:locationText:isAllDay:] */

void FUN_10712d8e0(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  func_0x00010bf51e00();
  uVar2 = param_4;
  func_0x00010bf51e00();
  uVar3 = param_6;
  func_0x00010bf51e00();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10712da88;
  puStack_a0 = &UNK_110958808;
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(ppuVar1);
  ppuStack_98 = ppuVar1;
  _objc_retain(uVar2);
  uStack_90 = uVar2;
  uStack_78 = param_5;
  _objc_retain(uVar3);
  uStack_88 = uVar3;
  uStack_70 = param_7;
  func_0x0001000d76cc("APPSTORE",&puStack_b8);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(ppuStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10712da88; end: 10712dddf;  */

void FUN_10712da88(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x0001070c45e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar7 = PTR_PTR_1126b13b0;
    func_0x00010c0fdf00(PTR_PTR_1126b13b0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bc960;
    func_0x00010c290480();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x0001070c2ef8();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = lVar9;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      uStack_a8 = 0;
      uStack_98 = 0x3042000000;
      pcStack_90 = FUN_10712dde0;
      uStack_88 = 0x10712ddec;
      puStack_a0 = &uStack_a8;
      _objc_initWeak(auStack_80,0);
      uStack_d8 = 0;
      uStack_c8 = 0x3042000000;
      pcStack_c0 = FUN_10712dde0;
      uStack_b8 = 0x10712ddec;
      puStack_d0 = &uStack_d8;
      _objc_initWeak(auStack_b0,0);
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_10712ddf4;
      puStack_f8 = &UNK_1108ad760;
      _objc_copyWeak(auStack_e0,param_1 + 0x38);
      ppuVar10 = &puStack_110;
      puStack_f0 = &uStack_a8;
      puStack_e8 = &uStack_d8;
      _objc_retainBlock(ppuVar10);
      puVar1 = PTR_PTR_1126bb350;
      _objc_copyWeak(auStack_118,param_1 + 0x38);
      _objc_retain(puVar8);
      func_0x00010c0fdf80(puVar1);
      _objc_release(puVar8);
      _objc_destroyWeak(auStack_118);
      _objc_release(ppuVar10);
      _objc_destroyWeak(auStack_e0);
      __Block_object_dispose(&uStack_d8,8);
      _objc_destroyWeak(auStack_b0);
      __Block_object_dispose(&uStack_a8,8);
      _objc_destroyWeak(auStack_80);
    }
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar6);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10712dde0; end: 10712ddf3;  */

void FUN_10712dde0(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_moveWeak_11034d280)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 10712ddf4; end: 10712de87;  */

void FUN_10712ddf4(long param_1)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10712de88;
  puStack_40 = &UNK_1108ad760;
  _objc_copyWeak(auStack_28,param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10712de88; end: 10712e00b;  */

void FUN_10712de88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28;
  _objc_loadWeakRetained();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 != 0 && lVar3 != 0)) {
    func_0x00010be7a600(lVar1,param_2,lVar2,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10712e00c; end: 10712e0c7; -[PreviewViewController _onPlanStickerViewBuilt:presentationModelProviderType:onItemViewSet:] */

void FUN_10712e00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10712e0c8;
  puStack_50 = &UNK_11098fab8;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0c0800(param_3,param_2,&puStack_68,&PTR___NSConcreteGlobalBlock_11098fae8);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10712e0c8; end: 10712e2b3;  */

void FUN_10712e0c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0846e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar11;
    func_0x00010c253ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar11);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126ba960;
      _objc_alloc(PTR_PTR_1126ba960);
      func_0x00010c04c640();
      puVar5 = PTR_PTR_1126c3d58;
      _objc_opt_new(PTR_PTR_1126c3d58);
      func_0x00010c2aa4a0(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b1340(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b0ec0(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c13b540(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x0001070c476c();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      puVar10 = puVar5;
      func_0x00010bf21f60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066e80(uVar9);
      _objc_release(puVar10);
      lVar11 = *(long *)(param_1 + 0x30);
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 0x10))(lVar11,param_2,puVar4);
      }
      _objc_release(uVar9);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10712e2b4; end: 10712e2b7;  */

void FUN_10712e2b4(void)

{
  return;
}



/* Entry: 10712e2b8; end: 10712e693; -[PreviewViewController _presentCalendarEditPageForPlanStickerView:previewStickerView:] */

void FUN_10712e2b8(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar2 = param_4;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d4d28;
    _objc_opt_class(PTR_PTR_1126d4d28);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 != 0) {
      puVar3 = PTR_PTR_1126bb350;
      func_0x00010bf8c4c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        lVar5 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x0001070c52cc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        lVar5 = lVar6;
        func_0x00010c0f1960();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        if (lVar7 != 0) {
          _objc_initWeak(auStack_70,param_3);
          _objc_initWeak(auStack_78,param_4);
          _objc_initWeak(auStack_80,uVar2);
          _objc_initWeak(auStack_88,param_1);
          puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c0 = 0xc2000000;
          pcStack_b8 = FUN_10712e694;
          puStack_b0 = &UNK_11098fb08;
          _objc_copyWeak(auStack_a8,auStack_88);
          _objc_copyWeak(auStack_a0,auStack_70);
          _objc_copyWeak(auStack_98,auStack_78);
          _objc_copyWeak(auStack_90,auStack_80);
          ppuVar8 = &puStack_c8;
          _objc_retainBlock();
          puVar9 = PTR_PTR_1126aead8;
          _objc_alloc();
          func_0x00010c038f40();
          puVar10 = PTR_PTR_1126d4d20;
          _objc_alloc(PTR_PTR_1126d4d20);
          puVar11 = puVar3;
          func_0x00010bf99f40();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar3;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar3;
          func_0x00010c251180();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar3;
          func_0x00010c09ea00();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar15 = puVar3;
          func_0x00010bfe4760(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0df760();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c007440(puVar10);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          func_0x00010c10b480(lVar7);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(ppuVar8);
          _objc_destroyWeak(auStack_90);
          _objc_destroyWeak(auStack_98);
          _objc_destroyWeak(auStack_a0);
          _objc_destroyWeak(auStack_a8);
          _objc_destroyWeak(auStack_88);
          _objc_destroyWeak(auStack_80);
          _objc_destroyWeak(auStack_78);
          _objc_destroyWeak(auStack_70);
        }
        _objc_release(lVar7);
        _objc_release(lVar6);
      }
      _objc_release(puVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10712e694; end: 10712e94b;  */

void FUN_10712e694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 in_x6;
  long lVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(in_x6);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf2f8a0();
  uVar1 = param_2;
  func_0x00010bf51e00();
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar3 = in_x6;
  func_0x00010bf51e00();
  _objc_release(in_x6);
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    lVar5 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained();
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar10 = 0;
    if ((lVar5 != 0) && (param_1 != 0)) {
      lVar7 = param_1;
      func_0x00010c271a60();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar7;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar10;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0fdf20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar10);
      if (lVar9 == 0) {
        lVar10 = 0;
      }
      else {
        func_0x00010c197860(lVar9);
        func_0x00010c216240(lVar9);
        func_0x00010c209ae0(lVar9);
        func_0x00010c1bfe20(lVar9);
        func_0x00010c1af220(lVar9);
        func_0x00010c286b60(param_1);
        _objc_retain(lVar7);
        lVar10 = lVar7;
      }
      _objc_release(lVar9);
      _objc_release(lVar7);
    }
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10712e94c;
    puStack_88 = &UNK_11084c4a0;
    lStack_80 = lVar5;
    lStack_78 = lVar10;
    lStack_70 = lVar6;
    lStack_68 = lVar4;
    _objc_retain(lVar6);
    _objc_retain(lVar10);
    _objc_retain(lVar5);
    func_0x0001000d76cc("APPSTORE",&puStack_a0);
    _objc_release(lStack_70);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    _objc_release(lVar6);
    _objc_release(lVar10);
    _objc_release(lVar5);
    _objc_release(param_1);
  }
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10712e94c; end: 10712ea43;  */

void FUN_10712e94c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    func_0x00010c288800(PTR_PTR_1126bb350);
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c13b540(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x0001070c476c();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2552e0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  uVar5 = *(ulong *)(param_1 + 0x38);
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar5 != 0) && (uVar6 = uVar5, func_0x00010c06d1a0(), (uVar6 & 1) == 0)) {
    func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x38),param_2,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10712ea44; end: 10712eacb; -[PreviewViewController previewOpenStickerPickerFromCaptionStickerSuggestions] */

void FUN_10712ea44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165580();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c20b500(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_openToolbarItemType__1126180c8,3);
  return;
}



/* Entry: 10712eacc; end: 10712eb53; -[PreviewViewController previewOpenCutoutFromCaptionStickerSuggestions] */

void FUN_10712eacc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165580();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1891e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_openToolbarItemType__1126180c8,4);
  return;
}



/* Entry: 10712eb54; end: 10712ecdf; -[PreviewViewController previewLogStickerSuggestionFromCaption:] */

void FUN_10712eb54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c2542a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c10f5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c253ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 != 0) {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf30080();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2540c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c27dd80(lVar4);
    func_0x00010916771c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2960(lVar2,param_2,lVar5,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10712ece0; end: 10712ed77; -[PreviewViewController _previewOpenVenuePickerFromCaptionStickerSuggestions] */

void FUN_10712ece0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165580();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1cd520(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2391b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showPlacePickerTrayWithOnVenueTa_11266be90,0,0,0,0,0);
  return;
}



/* Entry: 10712ed78; end: 10712f0db; -[PreviewViewController _previewOpenInfoStickerEditorFromCaptionStickerSuggestionsWithItemInstance:stickerType:] */

void FUN_10712ed78(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165580();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_initWeak(auStack_78,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10712f0dc;
  puStack_88 = &UNK_11085c360;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar4 = &puStack_a0;
  _objc_retainBlock();
  puVar1 = param_1;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c22fe40();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar3 == 0) {
    puVar1 = PTR_PTR_1126bc960;
    func_0x00010c290480(PTR_PTR_1126bc960);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x0001070c4700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c29ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar7;
    func_0x00010c0e0460(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_78);
    uStack_a8 = param_4;
    _objc_retain(ppuVar4);
    puVar3 = puVar2;
    func_0x00010c25ff60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(puVar3);
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_b0);
  }
  else {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066940();
    _objc_release(puVar1);
    puVar1 = param_1;
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 10712f0dc; end: 10712f163;  */

void FUN_10712f0dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165580();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10712f164; end: 10712f23f;  */

void FUN_10712f164(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10712f240; end: 10712f33f;  */

void FUN_10712f240(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c49b8;
  _objc_opt_class(PTR_PTR_1126c49b8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  if (uVar1 == 0) {
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165580();
  }
  else {
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066960();
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10712f340; end: 10712f3af;  */

void FUN_10712f340(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165580();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10712f3b0; end: 10712f50b; -[PreviewViewController _previewOpenPollEditorFromCaptionStickerSuggestions] */

void FUN_10712f3b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165580();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c103780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c10d9c0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10712f50c; end: 10712f593;  */

void FUN_10712f50c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165580();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10712f594; end: 10712f77f; -[PreviewViewController _previewShouldQuickAddVenueStickerSuggestion:] */

uint FUN_10712f594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bfedf40();
  if ((int)uVar2 == 1) {
    uVar2 = uVar1;
    func_0x00010c0fd520();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfda400();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bfede40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c298020();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0846e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0fd520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_1);
      uVar2 = uVar8;
      func_0x00010bfda400();
      if ((int)uVar2 == 0) {
        uVar9 = 1;
      }
      else {
        uVar2 = uVar8;
        func_0x00010c0fd0e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c0fd520(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0fd0e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c071ae0(uVar2,param_2,uVar4);
        uVar9 = (uint)uVar5 ^ 1;
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      _objc_release(uVar8);
      goto LAB_10712f758;
    }
  }
  uVar9 = 0;
LAB_10712f758:
  _objc_release(uVar1);
  return uVar9;
}



/* Entry: 10712f780; end: 10712fa6b; -[PreviewViewController _previewHandleToolEntryStickerSuggestionFromCaption:] */

undefined8 FUN_10712f780(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  _objc_retain(param_3);
  uVar7 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27dd80();
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar6 = PTR_PTR_1126b13b0;
  uVar8 = 0;
  iVar9 = (int)uVar2;
  if (iVar9 < 0x12) {
    if (iVar9 < 8) {
      if (iVar9 == 5) {
        uVar8 = 1;
        func_0x00010c1cd500(param_1,param_2,1);
        func_0x00010c20b500(param_1,param_2,1);
        uVar3 = param_1;
        func_0x00010bfa3600(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0d2940();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c165580();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        func_0x00010c0e9ac0(param_1,param_2,3);
        goto LAB_10712fa2c;
      }
      if (iVar9 != 7) goto LAB_10712fa2c;
      uVar3 = param_1;
      func_0x00010be7fea0(param_1,param_2,param_3);
      if ((uVar3 & 1) != 0) {
        uVar8 = 1;
        func_0x00010be3cb40(0,param_1,param_2,param_3,0,1);
        goto LAB_10712fa2c;
      }
      func_0x00010be7fe60(param_1);
    }
    else {
      if (iVar9 == 8) {
        func_0x00010c0ca620(PTR_PTR_1126b13b0,param_2,
                            &PTR____CFConstantStringClassReference_110daafd8,
                            &PTR____CFConstantStringClassReference_110daafd8,0,2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 8;
        goto LAB_10712fa1c;
      }
      if (iVar9 != 0xf) goto LAB_10712fa2c;
      func_0x00010be7fe40(param_1);
    }
  }
  else {
    if (iVar9 < 0x19) {
      if (iVar9 != 0x12) {
        if (iVar9 != 0x13) goto LAB_10712fa2c;
        func_0x00010c2738a0(param_1,param_2,10);
        goto LAB_10712fa28;
      }
      func_0x000108e73a88();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11dd40(puVar6,param_2,uVar7,&PTR____CFConstantStringClassReference_110daafd8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = 0x10;
    }
    else if (iVar9 == 0x19) {
      func_0x00010c241fe0(PTR_PTR_1126b13b0,param_2,&PTR____CFConstantStringClassReference_110daafd8
                         );
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0x17;
    }
    else {
      if (iVar9 == 0x1a) {
        func_0x00010c239240(param_1,param_2,0,0);
        goto LAB_10712fa28;
      }
      if (iVar9 != 0x1b) goto LAB_10712fa2c;
      func_0x00010c22b4c0(PTR_PTR_1126b13b0,param_2,&PTR____CFConstantStringClassReference_110daafd8
                          ,&PTR____CFConstantStringClassReference_110daafd8,
                          PTR____NSArray0__struct_11034ab48);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0x18;
    }
LAB_10712fa1c:
    func_0x00010be7fe20(param_1,param_2,puVar6,uVar7);
    _objc_release(puVar6);
  }
LAB_10712fa28:
  uVar8 = 1;
LAB_10712fa2c:
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 10712fa6c; end: 10712fdbf; -[PreviewViewController previewInsertStickerSuggestionFromCaption:] */

void FUN_10712fa6c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2542a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10f5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c253ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010be7fd80(param_1,param_2,param_3);
  if (((uVar1 & 1) == 0) && (uVar4 != 0)) {
    uVar1 = param_1;
    func_0x00010c2542a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c06c020();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar6 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf96ee0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c4700();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = uVar10;
    func_0x00010bf2d360(uVar10,param_2,param_3);
    if ((int)uVar1 == 0) {
      puVar11 = PTR_PTR_1126c3d58;
      _objc_opt_new(PTR_PTR_1126c3d58);
      func_0x00010c2aa4a0(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b0940(puVar11,param_2,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b0960(puVar11,param_2,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b1340(puVar11,param_2,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b0ec0(puVar11,param_2,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b01a0(puVar11,param_2,uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b08c0(puVar11,param_2,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf21f60(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066e60(uVar2,param_2,uVar4,puVar12);
      _objc_release(puVar12);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(param_1);
      _objc_release(puVar11);
    }
    else {
      func_0x00010be3c540(param_1,param_2,param_3,uVar4,(int)uVar8 == 2,0,0,uVar5,1);
    }
    _objc_release(uVar10);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10712fdc0; end: 10712fe07; -[PreviewViewController voiceoverFeatureWillAppear:] */

void FUN_10712fdc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d220();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10712fe08; end: 10712fedf; -[PreviewViewController voiceoverFeature:willDisappearWithAudio:] */

void FUN_10712fe08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_4 == 0) {
    lVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == 0) {
      func_0x00010c13b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010bfaeca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9e20();
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10712fee0; end: 10712ff2f; -[PreviewViewController voiceoverFeature:willUpdateAudio:] */

void FUN_10712fee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    func_0x00010c13b420();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d220();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10712ff30; end: 10712ffab; -[PreviewViewController voiceoverFeature:didUpdateAudio:] */

void FUN_10712ff30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0d2440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73860();
  _objc_release(param_4);
  _objc_release(uVar1);
  func_0x00010c242fa0(param_1);
  func_0x00010c283880(param_1);
  func_0x00010bef7be0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf461b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_configPreviewPlaybackLogger_1125af210);
  return;
}



/* Entry: 10712ffac; end: 10712ffdb; -[PreviewViewController voiceoverFeature:userDidSaveAudio:] */

void FUN_10712ffac(undefined8 param_1)

{
  func_0x00010c111180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10712ffdc; end: 107130083; -[PreviewViewController videoTimeRangesForVoiceoverFeature:] */

void FUN_10712ffdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010bf60b20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0d24a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107130084; end: 10713008f; +[PreviewViewController announcerIdentifier] */

undefined ** FUN_107130084(void)

{
  return &PTR____CFConstantStringClassReference_110ea0958;
}



/* Entry: 107130090; end: 10713009f; -[PreviewViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107130090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764468),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1071300a0; end: 1071300af; -[PreviewViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071300a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764468),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1071300b0; end: 10713125f; -[PreviewViewController initWithEntryPoint:snapEditorListeners:resourceProvider:sendDependentTasksHandler:sendflowPreviewLogger:previewSnapSaver:previewToolbarItemProvidersFuture:ucoPreviewInfoProvider:cameraViewfinderRenderTarget:previewABProvider:customAppThemeProvider:currentPageTracker:userLocationPermissionsManager:quotaCheckerServices:memoriesStorageQuotaManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1071300b0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_80 = PTR_PTR_1126f8a50;
  puVar3 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    lVar18 = (long)_DAT_11276446c;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_5;
    _objc_release(uVar4);
    lVar18 = (long)_DAT_112764470;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_6;
    _objc_release(uVar4);
    lVar18 = (long)_DAT_112764474;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_7;
    _objc_release(uVar4);
    lVar18 = (long)_DAT_112764478;
    _objc_retain(param_16);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_16;
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x0001070c5c14();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar3 + (long)_DAT_11276447c);
    *(undefined8 *)((long)puVar3 + (long)_DAT_11276447c) = uVar4;
    _objc_release(uVar17);
    lVar18 = (long)_DAT_112764480;
    _objc_retain(param_13);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_13;
    _objc_release(uVar4);
    lVar18 = (long)_DAT_112764484;
    _objc_retain(param_14);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_14;
    _objc_release(uVar4);
    puVar5 = puVar3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c082560();
    *(char *)((long)puVar3 + (long)_DAT_112764488) = (char)puVar8;
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar9 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_11276448c);
    *(undefined **)((long)puVar3 + (long)_DAT_11276448c) = puVar9;
    _objc_release(uVar4);
    puVar9 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112764490);
    *(undefined **)((long)puVar3 + (long)_DAT_112764490) = puVar9;
    _objc_release(uVar4);
    lVar18 = (long)_DAT_112764494;
    _objc_retain(param_15);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_15;
    _objc_release(uVar4);
    lVar18 = (long)_DAT_112764498;
    _objc_retain(param_17);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_17;
    _objc_release(uVar4);
    puVar5 = puVar3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)((long)puVar5 + (long)_DAT_1127641e4);
    }
    _objc_retain(uVar4);
    uVar17 = *(undefined8 *)((long)puVar3 + (long)_DAT_11276449c);
    *(undefined8 *)((long)puVar3 + (long)_DAT_11276449c) = uVar4;
    _objc_release(uVar17);
    _objc_release(puVar5);
    lVar18 = (long)_DAT_1127644a0;
    _objc_retain(param_18);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_18;
    _objc_release(uVar4);
    lVar18 = (long)_DAT_1127644a4;
    _objc_retain(param_19);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_19;
    _objc_release(uVar4);
    func_0x00010c189400(puVar3);
    func_0x00010be14660(puVar3);
    func_0x00010c1c8b80(puVar3);
    puVar9 = PTR_PTR_1126d4d30;
    _objc_alloc();
    puVar10 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c007280();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127644a8);
    *(undefined **)((long)puVar3 + (long)_DAT_1127644a8) = puVar9;
    _objc_release(uVar4);
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar5 = puVar3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar9 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    puVar6 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar9);
    puVar5 = puVar7;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar7);
    lVar19 = (long)_DAT_1127644ac;
    uVar4 = *(undefined8 *)((long)puVar3 + lVar19);
    *(undefined8 **)((long)puVar3 + lVar19) = puVar5;
    _objc_release(uVar4);
    lVar18 = (long)_DAT_1127644b0;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_8;
    _objc_release(uVar4);
    lVar18 = (long)_DAT_1127644b4;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_9;
    _objc_release(uVar4);
    lVar18 = (long)_DAT_1127644b8;
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_10;
    _objc_release(uVar4);
    puVar5 = puVar3;
    func_0x00010c13b540(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    FUN_1070c4ee8();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf52280();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1fa0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c0c6700(*(undefined8 *)((long)puVar3 + lVar19));
    if (((param_1 != *(double *)PTR__CGSizeZero_110347620) ||
        (param_1 = *(double *)(PTR__CGSizeZero_110347620 + 8), param_2 != param_1)) &&
       (func_0x00010c0c4080(*(undefined8 *)((long)puVar3 + lVar19)), param_1 == 0.0)) {
      func_0x00010c0c6700(*(undefined8 *)((long)puVar3 + lVar19));
      dVar21 = 0.0;
      if (param_1 != 0.0) {
        if (param_2 == 0.0) {
          dVar21 = INFINITY;
        }
        else {
          dVar21 = param_1 / param_2;
        }
      }
      func_0x00010c1c40c0(dVar21,*(undefined8 *)((long)puVar3 + lVar19));
    }
    uVar1 = (undefined1)*(undefined8 *)((long)puVar3 + lVar19);
    func_0x00010c07ba00();
    *(undefined1 *)((long)puVar3 + (long)_DAT_1127644bc) = uVar1;
    puVar5 = puVar3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf6d9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar9 = PTR_PTR_1126c4ce8;
    _objc_opt_class(PTR_PTR_1126c4ce8);
    puVar6 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar9);
    puVar5 = puVar7;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar7);
    func_0x00010c18b5e0(puVar5);
    _objc_release(puVar5);
    _objc_initWeak(auStack_90,puVar3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar19);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107131260;
    puStack_a0 = &UNK_11084dd40;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010befa300(uVar4);
    iVar2 = (int)*(undefined8 *)((long)puVar3 + lVar19);
    func_0x00010c07e920();
    if (iVar2 != 0) {
      puVar9 = PTR_PTR_1126d4be8;
      _objc_alloc();
      func_0x00010c013900();
      uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127644c0);
      *(undefined **)((long)puVar3 + (long)_DAT_1127644c0) = puVar9;
      _objc_release(uVar4);
    }
    puVar9 = PTR_PTR_1126ae810;
    _objc_alloc_init(PTR_PTR_1126ae810);
    func_0x00010c185500(puVar3);
    _objc_release(puVar9);
    puVar5 = puVar3;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf61ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_initWeak(auStack_c0,puVar3);
    puVar5 = puVar7;
    func_0x00010bf61f00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1071313dc;
    puStack_d0 = &UNK_110846320;
    _objc_copyWeak(auStack_c8,auStack_c0);
    puVar6 = puVar5;
    func_0x00010c25ff60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf5a520(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar9 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112764468);
    *(undefined **)((long)puVar3 + (long)_DAT_112764468) = puVar9;
    _objc_release(uVar4);
    puVar5 = puVar3;
    func_0x00010c13b540(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0001070c5cec();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c258780();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010c08d8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980(puVar3);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar9 = PTR_PTR_1126d4d38;
    _objc_alloc();
    func_0x00010c039e00();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127644c4);
    *(undefined **)((long)puVar3 + (long)_DAT_1127644c4) = puVar9;
    _objc_release(uVar4);
    puVar5 = puVar3;
    func_0x00010c13b420(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar10 = PTR_PTR_1126ae720;
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x107131424;
    puStack_f8 = &UNK_11098fb98;
    _objc_copyWeak(auStack_f0,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127644c8);
    *(undefined **)((long)puVar3 + (long)_DAT_1127644c8) = puVar10;
    _objc_release(uVar4);
    puVar10 = PTR_PTR_1126ae720;
    puStack_138 = puVar9;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x107131498;
    puStack_120 = &UNK_11098fbc8;
    _objc_copyWeak(auStack_118,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127644cc);
    *(undefined **)((long)puVar3 + (long)_DAT_1127644cc) = puVar10;
    _objc_release(uVar4);
    puVar5 = puVar3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)((long)puVar5 + (long)_DAT_1127641d0);
    }
    _objc_retain(uVar4);
    uVar17 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127644d0);
    *(undefined8 *)((long)puVar3 + (long)_DAT_1127644d0) = uVar4;
    _objc_release(uVar17);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010bfa3600(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2647e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2105e0();
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010bfa3600(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0c9620();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5880();
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0001070c5d10();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c08da20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf59a80();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = (long)_DAT_1127644d4;
    uVar4 = *(undefined8 *)((long)puVar3 + lVar20);
    *(undefined8 **)((long)puVar3 + lVar20) = puVar13;
    _objc_release(uVar4);
    _objc_release(puVar12);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    lVar14 = *(long *)((long)puVar3 + lVar19);
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar14;
    func_0x00010c2757e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar18;
    func_0x00010bfdedc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar18);
    _objc_release(lVar14);
    lVar18 = lVar15;
    func_0x00010c08fa60();
    if (lVar18 != 0) {
      uVar4 = *(undefined8 *)((long)puVar3 + lVar20);
      puVar5 = puVar3;
      func_0x00010bf46560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c2757e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc580(uVar4);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      uVar4 = *(undefined8 *)((long)puVar3 + lVar20);
      lVar18 = lVar15;
      func_0x00010c25ce40(lVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208680(uVar4);
      _objc_release(lVar18);
    }
    func_0x00010c1abd60(*(undefined8 *)((long)puVar3 + lVar20));
    lVar18 = *(long *)((long)puVar3 + lVar19);
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar18 != 0) {
      puVar5 = puVar3;
      func_0x00010c13b540(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x0001070c5c5c();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bf689a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar3 + lVar19);
      func_0x00010bf680c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28b380(puVar8);
      _objc_release(uVar4);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    puVar9 = PTR_PTR_1126b5900;
    func_0x00010c071800();
    puVar10 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    if ((int)puVar9 == 0) {
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
    }
    else {
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
    }
    _objc_release(puVar10);
    lVar18 = (long)_DAT_1127644d8;
    _objc_retain(param_11);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_11;
    _objc_release(uVar4);
    lVar18 = (long)_DAT_1127644dc;
    _objc_retain(param_12);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar18);
    *(undefined8 *)((long)puVar3 + lVar18) = param_12;
    _objc_release(uVar4);
    puVar9 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127644e0);
    *(undefined **)((long)puVar3 + (long)_DAT_1127644e0) = puVar9;
    _objc_release(uVar4);
    puVar5 = puVar3;
    func_0x00010c13b540(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    FUN_1070c4ee8();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf52280();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95360();
    _objc_release(puVar12);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar9 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127644e4);
    *(undefined **)((long)puVar3 + (long)_DAT_1127644e4) = puVar9;
    _objc_release(uVar4);
    puVar5 = puVar3;
    func_0x00010c13b540(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    FUN_1070c4ee8();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf52280();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf29380();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_140,auStack_c0);
    puVar16 = puVar13;
    func_0x00010c25ff60(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar16);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0001070c47fc();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127644e8);
    *(undefined8 **)((long)puVar3 + (long)_DAT_1127644e8) = puVar8;
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar9 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127644ec);
    *(undefined **)((long)puVar3 + (long)_DAT_1127644ec) = puVar9;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_140);
    _objc_release(lVar15);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  puVar5 = puVar3;
  func_0x00010c13b540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar3;
}


