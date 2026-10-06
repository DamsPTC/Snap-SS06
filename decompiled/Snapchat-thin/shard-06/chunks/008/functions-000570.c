/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104eeb67c; end: 104eeb68f;  */

void FUN_104eeb67c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7f590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentWebBrowserWithURL__11257d700,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104eeb690; end: 104eeb77f; -[SCMapPlaceProfileV2Router openCallForPlacePhoneNumberWithPhoneNumber:] */

void FUN_104eeb690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  func_0x00010be57420(param_1);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104eeb780;
  puStack_40 = &UNK_110842e18;
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(puStack_38);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104eeb780; end: 104eeb7cb;  */

void FUN_104eeb780(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104eeb7cc; end: 104eeb8b3; -[SCMapPlaceProfileV2Router _logPromotedPlaceActionIfNeeded:] */

void FUN_104eeb7cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0b97c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07b500();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0b97c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11acc0(uVar4,param_2,param_3,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 104eeb8b4; end: 104eeb9bf; -[SCMapPlaceProfileV2Router openDirectionsForPlaceWithPlaceName:formattedAddress:lat:lng:travelMode:] */

void FUN_104eeb8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010be57420(param_3);
  _objc_initWeak(auStack_48,param_3);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104eeb9c0;
  puStack_80 = &UNK_110859cb8;
  _objc_copyWeak(auStack_68,auStack_48);
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_retain(param_6);
  uStack_70 = param_6;
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_7;
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 104eeb9c0; end: 104eeba03;  */

void FUN_104eeb9c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be79e80(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar1,
                        param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined4 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eeba04; end: 104eebad3; -[SCMapPlaceProfileV2Router openActionSheetForPlaceWithPlaceId:placeName:lat:lng:] */

void FUN_104eeba04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104eebad4;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104eebad4; end: 104eebb0f;  */

void FUN_104eebad4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be6d940(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eebb10; end: 104eebb9b; -[SCMapPlaceProfileV2Router openOrderActionSheetForPlaceWithPartnerInfo:] */

void FUN_104eebb10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104eebb9c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  _objc_retain(param_3);
  uStack_28 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104eebb9c; end: 104eebbef;  */

void FUN_104eebb9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000106879724();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6cd60(uVar1,param_2,uVar2,param_1,1,1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eebbf0; end: 104eebc7b; -[SCMapPlaceProfileV2Router openReservationsActionSheetForPlaceWithPartnerInfo:] */

void FUN_104eebbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104eebc7c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  _objc_retain(param_3);
  uStack_28 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104eebc7c; end: 104eebccf;  */

void FUN_104eebc7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000106879754();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6cd60(uVar1,param_2,uVar2,param_1,2,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eebcd0; end: 104eebdd7; -[SCMapPlaceProfileV2Router openShopDeeplinkWithStoreUrl:placeId:sessionId:] */

void FUN_104eebcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104eebdd8;
  puStack_68 = &UNK_110841f80;
  uStack_60 = param_1;
  puStack_58 = puVar2;
  _objc_retain();
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(puStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104eebdd8; end: 104eebe23;  */

void FUN_104eebdd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eebe24; end: 104eebf37; -[SCMapPlaceProfileV2Router copyAddressForPlaceWithPlaceName:formattedAddress:] */

void FUN_104eebe24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104eebeac;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_4;
  uStack_28 = param_1;
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_4);
  return;
}



/* Entry: 104eebf38; end: 104eec3bb; -[SCMapPlaceProfileV2Router _openActionSheetForPartnerInfo:title:metricType:allowNativeApp:skipSheetIfOnlyOneOption:] */

void FUN_104eebf38(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined **ppuStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined1 uStack_153;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1b4 = param_5;
  uStack_1b0 = param_6;
  iStack_1ac = param_7;
  _objc_retain(param_3);
  uStack_1d8 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d0 = param_1;
  puStack_1c8 = puVar1;
  _objc_initWeak(auStack_108,param_1);
  puVar2 = (undefined1 *)(lStack_1d0 + 0x18);
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c0ccb00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_initWeak(auStack_110);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lStack_1c0 = *plStack_140;
    do {
      unaff_x23 = (undefined **)0x0;
      do {
        if (*plStack_140 != lStack_1c0) {
          _objc_enumerationMutation(param_3);
        }
        puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
        puVar10 = *(undefined1 **)(lStack_148 + (long)unaff_x23 * 8);
        puVar4 = puVar10;
        func_0x00010c28f340(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar3 = puVar10;
        func_0x00010c0f4ca0();
        _objc_retainAutoreleasedReturnValue();
        puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a0 = 0xc2000000;
        pcStack_198 = FUN_104eec3bc;
        puStack_190 = &UNK_110859ce8;
        uStack_154 = (undefined1)iStack_1ac;
        _objc_retain(param_3);
        puStack_188 = param_3;
        _objc_copyWeak(auStack_168,auStack_110);
        uStack_158 = uStack_1b4;
        puStack_180 = puVar10;
        _objc_retain(puVar3);
        uStack_153 = (undefined1)uStack_1b0;
        puStack_178 = puVar3;
        _objc_retain(puVar1);
        puVar4 = (undefined1 *)0x0;
        puStack_170 = puVar1;
        _objc_copyWeak(auStack_160);
        ppuVar5 = &puStack_1a8;
        _objc_retainBlock();
        if ((iStack_1ac == 0) ||
           (puVar6 = param_3, func_0x00010bf529e0(), puVar6 != (undefined1 *)0x1)) {
          unaff_x24 = PTR_PTR_1126b2098;
          puVar6 = puVar10;
          func_0x00010c0ec2e0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
          func_0x00010bfe5be0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ec5c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar10);
          _objc_release(puVar6);
          func_0x00010befa120(puStack_1c8);
          _objc_release(unaff_x24);
          uVar9 = 1;
        }
        else {
          (*(code *)ppuVar5[2])(ppuVar5);
          uVar9 = 0;
        }
        _objc_release(ppuVar5);
        _objc_destroyWeak(auStack_160);
        _objc_release(puStack_170);
        _objc_release(puStack_178);
        _objc_destroyWeak(auStack_168);
        _objc_release(puStack_188);
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar3 = param_3;
        if ((int)uVar9 == 0) goto LAB_104eec2e8;
        unaff_x23 = (undefined **)((long)unaff_x23 + 1);
      } while ((undefined **)puVar2 != unaff_x23);
      puVar2 = param_3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  uVar9 = *(undefined8 *)(lStack_1d0 + 0x10);
  puVar3 = (undefined1 *)(lStack_1d0 + 0x18);
  _objc_loadWeakRetained();
  puVar10 = puVar3;
  func_0x00010c27b740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10afc0(uVar9);
  _objc_release(puVar10);
LAB_104eec2e8:
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(puStack_1c8);
  _objc_release(uStack_1d8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  puVar2 = param_3;
  __Unwind_Resume();
  pcStack_1e8 = FUN_104eec3bc;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = unaff_x24;
  puStack_218 = (undefined1 *)unaff_x23;
  puStack_210 = puVar10;
  uStack_208 = uVar9;
  puStack_200 = puVar3;
  puStack_1f8 = param_3;
  puStack_1f0 = &stack0xfffffffffffffff0;
  if (puVar2[0x54] == '\x01') {
    uVar8 = *(ulong *)(puVar2 + 0x20);
    func_0x00010bf529e0();
    if (1 < uVar8) goto LAB_104eec404;
  }
  else {
LAB_104eec404:
    puVar3 = puVar2 + 0x40;
    _objc_loadWeakRetained(puVar3);
    uVar9 = *(undefined8 *)(puVar2 + 0x28);
    func_0x00010c0f4ca0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd00c0(puVar3);
    _objc_release(uVar9);
    _objc_release(puVar3);
  }
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar9 = *(undefined8 *)(puVar2 + 0x30);
  ppuStack_230 = &PTR____CFConstantStringClassReference_110dba1f8;
  _objc_retain(uVar9);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf4b900();
  _objc_release(uVar9);
  _objc_release(puVar1);
  if ((((uint)(byte)puVar2[0x55] | (uint)puVar7) & 1) == 0) {
    puVar1 = puVar2 + 0x48;
    _objc_loadWeakRetained();
    if (puVar1 == (undefined *)0x0) goto LAB_104eec5a8;
    func_0x00010be7f580(puVar1);
  }
  else {
    uStack_240 = *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
    puStack_238 = PTR____kCFBooleanTrue_11034ab68;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_268 = 0xc2000000;
    pcStack_260 = FUN_104eec5f8;
    puStack_258 = &UNK_11084b7a0;
    puVar4 = puVar2 + 0x48;
    _objc_copyWeak(auStack_248);
    uVar9 = *(undefined8 *)(puVar2 + 0x38);
    _objc_retain(uVar9);
    uStack_250 = uVar9;
    func_0x00010c0e9b80(puVar7);
    _objc_release(puVar7);
    _objc_release(uStack_250);
    _objc_destroyWeak(auStack_248);
    unaff_x23 = &puStack_270;
  }
  _objc_release();
LAB_104eec5a8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x28));
  __Unwind_Resume();
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = puVar1 + 0x28;
    _objc_loadWeakRetained();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010be7f580(puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104eec3bc; end: 104eec5f7;  */

void FUN_104eec3bc(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **unaff_x23;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x54) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (1 < uVar1) goto LAB_104eec404;
  }
  else {
LAB_104eec404:
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f4ca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd00c0(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dba1f8;
  _objc_retain(uVar3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  _objc_release(puVar4);
  if ((((uint)*(byte *)(param_1 + 0x55) | (uint)puVar5) & 1) == 0) {
    puVar4 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained();
    if (puVar4 == (undefined *)0x0) goto LAB_104eec5a8;
    func_0x00010be7f580(puVar4);
  }
  else {
    uStack_60 = *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
    puStack_58 = PTR____kCFBooleanTrue_11034ab68;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104eec5f8;
    puStack_78 = &UNK_11084b7a0;
    param_2 = param_1 + 0x48;
    _objc_copyWeak(auStack_68);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar3);
    uStack_70 = uVar3;
    func_0x00010c0e9b80(puVar5);
    _objc_release(puVar5);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_68);
    unaff_x23 = &puStack_90;
  }
  _objc_release();
LAB_104eec5a8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x28));
  __Unwind_Resume();
  if ((param_2 & 1) != 0) {
    return;
  }
  puVar4 = puVar4 + 0x28;
  _objc_loadWeakRetained();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010be7f580(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104eec5f8; end: 104eec6d7;  */

void FUN_104eec5f8(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7f580(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eec6d8; end: 104eec7df; -[SCMapPlaceProfileV2Router _openVenueEditorWithPlaceId:] */

void FUN_104eec6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010c12f020(param_1);
  puVar1 = PTR_PTR_1126b20a0;
  _objc_alloc(PTR_PTR_1126b20a0);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c15ffa0(uVar2);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0fd4a0();
  func_0x00010c028640(puVar1,param_2,uVar2,lVar4);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126b20a8;
  _objc_alloc(PTR_PTR_1126b20a8);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c27b740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0392c0(puVar5,param_2,lVar4,param_3,puVar1,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be420,param_1);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104eec7e0; end: 104eec8a3; -[SCMapPlaceProfileV2Router launchTicketmasterEventWithUrl:eventId:] */

void FUN_104eec7e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      FUN_104ef1314(puVar2,*(undefined8 *)(param_1 + 0x40),param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38));
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eec8a4; end: 104eec9bb; -[SCMapPlaceProfileV2Router launchBusinessProfileWithBusinessId:placeId:] */

void FUN_104eec8a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be57420(param_1);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104eec9bc;
    puStack_58 = &UNK_110848218;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104eec9bc; end: 104eec9f7;  */

void FUN_104eec9bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be475e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eec9f8; end: 104eecc4b; -[SCMapPlaceProfileV2Router openPlaceProfileWithPlaceId:boundingBox:placeType:] */

void FUN_104eec9f8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010c0d6e60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar2 = param_5;
  dVar10 = param_1;
  func_0x00010c0d6e60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  _CLLocationCoordinate2DMake(param_1,dVar10);
  dVar9 = param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c264480(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar2 = param_5;
  dVar8 = dVar9;
  func_0x00010c264480(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  _CLLocationCoordinate2DMake(dVar9,dVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  dVar9 = (param_1 + dVar9) * 0.5;
  dVar10 = (dVar10 + dVar8) * 0.5;
  _CLLocationCoordinate2DMake(dVar9,dVar10);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = param_2 + 0x18;
  _objc_loadWeakRetained();
  func_0x00010c0fd4a0();
  func_0x00010c14de00(puVar4,param_3,&PTR____CFConstantStringClassReference_110daea58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126b20b0;
  _objc_alloc(PTR_PTR_1126b20b0);
  lVar3 = param_2 + 0x18;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010c27b200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c29f680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b5a0(dVar9,dVar10,puVar5,param_3,param_4,param_5,
                      &PTR____CFConstantStringClassReference_110dba178,puVar4,0,0,lVar7,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  param_2 = param_2 + 0x90;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0e9880();
  _objc_release(param_2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104eecc4c; end: 104eeced3; -[SCMapPlaceProfileV2Router sendPlaceProfileWithPlaceId:placeName:boundingBox:placeType:] */

void FUN_104eecc4c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c264480(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar9 = param_1;
  func_0x00010c09abe0(uVar1);
  _CLLocationCoordinate2DMake(param_1,uVar9);
  uVar2 = param_6;
  uVar10 = param_1;
  func_0x00010c0d6e60(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c08aca0(uVar2);
  uVar11 = uVar10;
  func_0x00010c09abe0(uVar2);
  _CLLocationCoordinate2DMake(uVar10,uVar11);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b1e58;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ba3a0(uVar10,uVar11,param_1,uVar9,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1e58;
  func_0x00010c0baca0(PTR_PTR_1126b1e58);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar6 = param_2 + 0x18;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c27b740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar8 = PTR_PTR_1126b1e60;
  _objc_alloc();
  func_0x00010c057500();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104eeced4;
  puStack_98 = &UNK_110841f80;
  lStack_90 = param_2;
  puStack_88 = puVar8;
  _objc_retain();
  func_0x000100162d98("APPSTORE",&puStack_b0);
  _objc_release(puStack_88);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104eeced4; end: 104eecedf;  */

void FUN_104eeced4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104eecee0; end: 104eed137; -[SCMapPlaceProfileV2Router handlePlacePivotTapWithPivot:placeSessionId:] */

void FUN_104eecee0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b97c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar9 = PTR_PTR_1126b1e58;
  uVar3 = param_4;
  func_0x00010c0fc8e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0fd320(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf0de60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c0fc860(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c09e700(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bfe5ec0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(lVar2);
  func_0x00010bf51c80(lVar2);
  func_0x00010c0ba320(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_78,param_2);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104eed138;
  puStack_90 = &UNK_110841fb0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(puVar9);
  puStack_88 = puVar9;
  func_0x000100162d98("APPSTORE",&puStack_a8);
  _objc_release(puStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar9);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104eed138; end: 104eed19f;  */

void FUN_104eed138(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1bc0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eed1a0; end: 104eed23b; -[SCMapPlaceProfileV2Router handlePlacePivotLongPressWithPivot:placeSessionId:] */

void FUN_104eed1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010c0fc8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104eed23c;
    puStack_40 = &UNK_110842e18;
    uStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 104eed23c; end: 104eed5af;  */

void FUN_104eed23c(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0b97c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = auStack_90;
    _objc_initWeak(puVar3,*(undefined8 *)(param_1 + 0x20));
    puVar4 = PTR_PTR_1126b10a0;
    func_0x0001068752ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104eed5b0;
    puStack_a0 = &UNK_110852cd0;
    unaff_x27 = &puStack_b8;
    _objc_copyWeak(auStack_98,auStack_90);
    puVar5 = puVar4;
    func_0x00010bf1d200(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b10a0;
    func_0x000106875304();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puStack_e8 = puVar7;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_104eed5fc;
    puStack_d0 = &UNK_110852d00;
    _objc_retain(lVar2);
    unaff_x28 = &puStack_e8;
    param_2 = auStack_90;
    lStack_c8 = lVar2;
    _objc_copyWeak(auStack_c0,param_2);
    puVar5 = puVar6;
    func_0x00010bf1d200(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b10a0;
    func_0x000106874f8c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010bf1d200(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b10a8;
    _objc_alloc(PTR_PTR_1126b10a8);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar4;
    puStack_80 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c019f40(puVar5);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = *(long *)(param_1 + 0x20) + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar9 = lVar1;
    func_0x00010c27b740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar8);
    _objc_release(lVar9);
    _objc_release(lVar1);
    func_0x00010c10c360(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_c0);
    _objc_release(lStack_c8);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 5);
  _objc_destroyWeak(unaff_x27 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(lVar2);
  _objc_retain(param_2);
  lVar2 = lVar2 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bde12e0();
  _objc_release(lVar2);
  func_0x00010bf82fe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104eed5b0; end: 104eed5fb;  */

void FUN_104eed5b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde12e0();
  _objc_release(param_1);
  func_0x00010bf82fe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104eed5fc; end: 104eed707;  */

void FUN_104eed5fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_4);
  func_0x00010bf51c80(uVar5);
  puVar1 = PTR_PTR_1126b1d80;
  _objc_alloc(PTR_PTR_1126b1d80);
  func_0x00010c0219a0(param_1,param_2);
  puVar2 = PTR_PTR_1126b1eb8;
  _objc_alloc(PTR_PTR_1126b1eb8);
  func_0x00010c04faa0();
  lVar3 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar3);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bfe5ec0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0d4f60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c3a0(lVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(lVar3);
  func_0x00010bf82fe0(param_4);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104eed708; end: 104eed70f;  */

void FUN_104eed708(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 104eed710; end: 104eed81f; -[SCMapPlaceProfileV2Router handleAttributeEditorTapWithInitialAttributes:placeId:] */

void FUN_104eed710(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104eed820;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104eed820; end: 104eed92f;  */

void FUN_104eed820(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar5 = lVar3 + 0x18;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c27b740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar4,param_2,lVar6,1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    puVar7 = PTR_PTR_1126b20b8;
    _objc_alloc(PTR_PTR_1126b20b8);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(lVar3 + 0x80);
    func_0x00010c15ffa0(uVar8);
    lVar5 = lVar3 + 0x18;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c0fd4a0();
    func_0x00010c00b120(puVar7,param_2,lVar3,puVar4,uVar1,uVar2,uVar8,lVar6);
    _objc_release(lVar5);
    func_0x00010bf9d620(*(undefined8 *)(lVar3 + 0x70),param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104eed930; end: 104eed937; -[SCMapPlaceProfileV2Router onFavoriteTappedWithWillBeFavorited:] */

void FUN_104eed930(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be57430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logPromotedPlaceActionIfNeeded__1125736a8,3)
  ;
  return;
}



/* Entry: 104eed938; end: 104eeda33; -[SCMapPlaceProfileV2Router handlePlaceLoyaltyShareTapWithStickerData:] */

void FUN_104eed938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c27ca20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be06300(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104eeda34; end: 104eedb57;  */

void FUN_104eeda34(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1041c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(param_2);
    func_0x00010be10000(lVar1);
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_release(param_2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104eedb58; end: 104eedbab;  */

void FUN_104eedb58(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eedbac; end: 104eedc57; -[SCMapPlaceProfileV2Router _fetchBitmojiImageWithPoseId:completion:] */

void FUN_104eedbac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x78);
  if ((lVar1 == 0) || (func_0x00010c08fa60(), lVar1 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4,0,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa5480();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eedc58; end: 104eedcef; -[SCMapPlaceProfileV2Router _downloadTrophyImageWithImageUrl:completion:] */

void FUN_104eedc58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_4);
  func_0x00010bdc3460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b20c0;
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106879d48(puVar1,puVar2,uVar3,param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104eedcf0; end: 104eeddfb; -[SCMapPlaceProfileV2Router _launchCameraWithPlaceLoyaltySticker:bitmojiImage:trophyImage:] */

void FUN_104eedcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104eeddfc;
  puStack_60 = &UNK_110850cf8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_retain(param_5);
  uStack_48 = param_5;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104eeddfc; end: 104eee03f;  */

void FUN_104eeddfc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b20c8;
    func_0x00010c0fd220(PTR_PTR_1126b20c8,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(lVar1 + 0xb8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(lVar1 + 0xb8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126ae6d0;
    _objc_alloc(PTR_PTR_1126ae6d0);
    func_0x00010c03e5a0();
    puVar5 = PTR_PTR_1126b1bb0;
    func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b20d0;
    _objc_alloc(PTR_PTR_1126b20d0);
    func_0x00010c03c940();
    puVar7 = PTR_PTR_1126b20d8;
    _objc_alloc(PTR_PTR_1126b20d8);
    puVar8 = puVar7;
    func_0x00010c2a9d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010c2ac700(puVar8,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = lVar1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar9 = lVar3;
    func_0x00010c27b740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar7,param_2,lVar9,1);
    _objc_release(lVar9);
    _objc_release(lVar3);
    uVar11 = *(undefined8 *)(lVar1 + 0xc0);
    func_0x0001091f3d04();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23800(uVar11,param_2,puVar5,puVar7,0,lVar3,1,puVar10,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0xb8),param_2,uVar11);
    _objc_release(uVar11);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eee040; end: 104eee0f7; -[SCMapPlaceProfileV2Router _clearVisitationForCurrentPlace] */

void FUN_104eee040(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c12f200(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104eee0f8; end: 104eee13f;  */

void FUN_104eee0f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beea2c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eee140; end: 104eee1c7; -[SCMapPlaceProfileV2Router _visitRemovalCompletedWithError:] */

void FUN_104eee140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104eee1c8;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 104eee1c8; end: 104eee31b;  */

void FUN_104eee1c8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = PTR_PTR_1126afde0;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x68);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      return;
    }
    puVar4 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x68);
    func_0x00010bf6b020(puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x28) + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar5 = lVar1;
    func_0x00010c0b97c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b9880(puVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  else {
    lVar1 = param_1;
    func_0x00010687531c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104eee31c; end: 104eee3b7; -[SCMapPlaceProfileV2Router _presentWebBrowserWithURL:] */

void FUN_104eee31c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    lVar1 = param_3;
    FUN_104ef1314(param_3,*(undefined8 *)(param_1 + 0x40),param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18eb00();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38));
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eee3b8; end: 104eee88f; -[SCMapPlaceProfileV2Router _presentActionSheetForDirectionsWithName:address:lat:lng:travelMode:] */

void FUN_104eee3b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_104eefa10();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3 + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0ccb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_90,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126b2098;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dba278;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dba278,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010be36b00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_104eee890;
  puStack_c0 = &UNK_110849dd0;
  _objc_copyWeak(auStack_a8,auStack_90);
  _objc_retain(param_7);
  uStack_b8 = param_7;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  func_0x00010c0ec5c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(ppuVar4);
  func_0x00010befa120(puVar1);
  puVar6 = PTR_PTR_1126b2098;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dba2d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dba2d8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010be36b00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_104eee9f0;
  puStack_100 = &UNK_11084d6b8;
  _objc_copyWeak(auStack_f0,auStack_90);
  uStack_e8 = param_1;
  uStack_e0 = param_2;
  _objc_retain(param_7);
  uStack_f8 = param_7;
  func_0x00010c0ec5c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(ppuVar4);
  func_0x00010befa120(puVar1);
  puVar7 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_6;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b2098;
  if (lVar3 != 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dba338;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dba338,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010be36b00(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_120,auStack_90);
    _objc_retain(param_6);
    func_0x00010c0ec5c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(ppuVar4);
    func_0x00010befa120(puVar1);
    _objc_release(puVar7);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_120);
  }
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  param_3 = param_3 + 0x18;
  _objc_loadWeakRetained(param_3);
  lVar2 = param_3;
  func_0x00010c27b740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010687970c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10afc0(uVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(uStack_f8);
  _objc_destroyWeak(auStack_f0);
  _objc_release(puVar5);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 104eee890; end: 104eee9ef;  */

void FUN_104eee890(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfd00c0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    _objc_retain(uVar4);
  }
  else {
    func_0x00010c260c20(uVar4,param_2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25cda0(uVar5,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dba2b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104eee9f0; end: 104eeeb4f;  */

void FUN_104eee9f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd00c0();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dba318);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104eeeb50; end: 104eeedb7; -[SCMapPlaceProfileV2Router _loadDirectionsIconUrls] */

void FUN_104eeeb50(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [136];
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dba198;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dba1b8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dba1d8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110daafd8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_98,&ppuStack_b0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  plVar8 = (long *)(param_1 + 0x28);
  lVar7 = *plVar8;
  *plVar8 = (long)puVar2;
  _objc_release(lVar7);
  _objc_release(puVar1);
  puVar6 = param_1;
  _objc_initWeak(auStack_138,param_1);
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  puVar3 = (undefined1 *)*plVar8;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    lVar7 = *plStack_170;
    do {
      puVar9 = (undefined1 *)0x0;
      puVar5 = puVar4;
      do {
        if (*plStack_170 != lVar7) {
          puVar5 = puVar3;
          _objc_enumerationMutation(puVar3);
        }
        uVar10 = *(undefined8 *)(param_1 + 8);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = auStack_138;
        _objc_copyWeak(auStack_188,puVar6);
        func_0x00010c25d760(uVar10);
        _objc_release(puVar5);
        puVar5 = auStack_188;
        _objc_destroyWeak();
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release(puVar3);
  puVar4 = auStack_138;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar6);
  puVar4 = puVar4 + 0x28;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bea9e20();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104eeedb8; end: 104eeee0b;  */

void FUN_104eeedb8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea9e20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eeee0c; end: 104eeee13; -[SCMapPlaceProfileV2Router _setUrlString:forIconKey:] */

void FUN_104eeee0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setObject_forKeyedSubscript__112651bb8);
  return;
}



/* Entry: 104eeee14; end: 104eeeec3; -[SCMapPlaceProfileV2Router _iconUrlForKey:] */

void FUN_104eeee14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104eeeec4; end: 104eeeec7; -[SCMapPlaceProfileV2Router venueEditorScreenDidDismiss] */

void FUN_104eeeec4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeVenueEditorScope_112629628);
  return;
}



/* Entry: 104eeeec8; end: 104eeef0f; -[SCMapPlaceProfileV2Router removeVenueEditorScope] */

void FUN_104eeeec8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104eeef10; end: 104eeef57; -[SCMapPlaceProfileV2Router webBrowserDidDismiss:] */

void FUN_104eeef10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104eeef58; end: 104eef0e7; -[SCMapPlaceProfileV2Router _launchBusinessProfile:placeId:] */

void FUN_104eeef58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b0f10;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033440();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c117fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b0f18;
  _objc_alloc(PTR_PTR_1126b0f18);
  uVar5 = uVar2;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9dc0(puVar3);
  _objc_release(param_3);
  _objc_release(uVar5);
  func_0x00010c1cd960(puVar3);
  func_0x00010c1cd9a0(puVar3);
  puVar4 = PTR_PTR_1126b0f20;
  _objc_alloc();
  func_0x00010c001da0();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar4;
  _objc_release(uVar5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104eef0e8;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104eef0e8; end: 104eef0f3;  */

void FUN_104eef0e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),
             PTR_s_launchFeatureWithScope_owner__112600800,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  return;
}



/* Entry: 104eef0f4; end: 104eef12b; -[SCMapPlaceProfileV2Router unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_104eef0f4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x50));
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104eef12c; end: 104eef16b; -[SCMapPlaceProfileV2Router presentingViewControllerForUnifiedPublicProfilesPresenterScope] */

void FUN_104eef12c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27b740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104eef16c; end: 104eef1b3; -[SCMapPlaceProfileV2Router mapPlaceShareEnded] */

void FUN_104eef16c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104eef1b4; end: 104eef1fb; -[SCMapPlaceProfileV2Router mapPlaceSuggestAttributeTrayScopeDidDismiss:] */

void FUN_104eef1b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104eef1fc; end: 104eef32b; -[SCMapPlaceProfileV2Router .cxx_destruct] */

void FUN_104eef1fc(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eef32c; end: 104eef3a3;  */

void FUN_104eef32c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _CLLocationCoordinate2DIsValid();
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b20e0;
    _objc_alloc(PTR_PTR_1126b20e0);
    func_0x00010c021a60(param_1,param_2);
    puVar2 = PTR_PTR_1126b20e8;
    _objc_alloc(PTR_PTR_1126b20e8);
    func_0x00010c026580();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104eef3a4; end: 104eef4ff;  */

void FUN_104eef3a4(double param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  iVar3 = (int)(param_1 / 3600.0);
  if (iVar3 == 1) {
    func_0x000106875034();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_3,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    if (iVar3 < 2) {
      iVar3 = (int)(param_1 / 60.0);
      if (iVar3 < 1) {
        if (param_1 <= 0.0) {
          param_2 = (undefined *)0x0;
        }
        else {
          func_0x00010687507c();
          _objc_retainAutoreleasedReturnValue();
        }
        goto LAB_104eef4c4;
      }
      func_0x00010687504c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010687501c();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,iVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_3,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  param_2 = puVar2;
LAB_104eef4c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 104eef500; end: 104eef603;  */

void FUN_104eef500(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  if (param_3 == 0) {
    lVar4 = param_2;
    func_0x00010c0b95c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar1 != 0) {
      lVar4 = param_2;
      func_0x00010c0b95c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08eb20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c262900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f000();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar4);
      if (0.0 < param_1) {
        FUN_104eef3a4(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104eef52c;
      }
    }
  }
  lVar4 = 0;
LAB_104eef52c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104eef604; end: 104eef957;  */

void FUN_104eef604(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

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
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1e10;
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0(param_2);
  uVar10 = param_1;
  func_0x00010c09abe0(param_2);
  uVar3 = param_2;
  func_0x00010bf20ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c09e640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c09e480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c09e400(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bfe5be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072ac0();
  uVar8 = param_2;
  func_0x00010c119ba0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar9 = param_2;
    func_0x00010c259320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036460(param_1,uVar10,puVar1);
    _objc_release(uVar9);
  }
  else {
    func_0x00010c036460(param_1,uVar10,puVar1);
  }
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_5 == 0) {
    uVar2 = param_2;
    func_0x00010c25b5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20dd00(puVar1);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c20dd00(puVar1);
  }
  if (param_4 == 0) {
    uVar2 = param_2;
    func_0x00010c0fd340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc620(puVar1);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c1dc620(puVar1);
  }
  uVar2 = param_2;
  func_0x00010c0870c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7020(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c112bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2920(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c0e9e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d52c0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf44500(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17fe00(puVar1);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eef958; end: 104eefa0f;  */

void FUN_104eef958(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b20f0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bf44540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c156600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c000680(puVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eefa10; end: 104eefa3b;  */

undefined ** FUN_104eefa10(int param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dba398;
  if (param_1 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dba378;
  if (param_1 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 104eefa3c; end: 104eefaf7;  */

void FUN_104eefa3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0x21);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0001008522a8();
  uVar3 = 0;
  if ((int)puVar2 != 0) {
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar3 = param_3;
  }
  puVar2 = PTR_PTR_1126b1f08;
  _objc_alloc(PTR_PTR_1126b1f08);
  func_0x00010c037cc0(*(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0,
                      0x4038000000000000,uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104eefaf8; end: 104eefb4f;  */

void FUN_104eefaf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1f18;
  _objc_alloc(PTR_PTR_1126b1f18);
  puVar2 = PTR_PTR_1126b1f10;
  func_0x00010bfdf380(PTR_PTR_1126b1f10);
  puVar3 = PTR_PTR_1126b1f10;
  func_0x00010c0fd340(PTR_PTR_1126b1f10);
  func_0x00010c01ed80(puVar1,param_2,0,(ulong)puVar2 & ((ulong)puVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eefb50; end: 104eefbbf;  */

undefined1  [16]
FUN_104eefb50(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = param_3;
  dVar2 = param_4;
  _objc_retain();
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  _objc_release(param_5);
  auVar3._8_8_ = (dVar2 - param_3) - param_1;
  auVar3._0_8_ = (dVar1 - param_2) - param_4;
  return auVar3;
}



/* Entry: 104eefbc0; end: 104eefc8b; -[SCMapPlaceProfileV2ViewController initWithValdiRootView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104eefbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4e68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1931e0(puVar1);
    lVar4 = (long)_DAT_1127166f8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1e38;
    _objc_alloc();
    func_0x00010c05fb60();
    lVar4 = (long)_DAT_1127166fc;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eefc8c; end: 104eefc9b; -[SCMapPlaceProfileV2ViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eefc8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_1127166fc));
  return;
}



/* Entry: 104eefc9c; end: 104eefce7; -[SCMapPlaceProfileV2ViewController viewDidLoad] */

void FUN_104eefc9c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4e68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c189400(param_1);
  return;
}



/* Entry: 104eefce8; end: 104eefd67; -[SCMapPlaceProfileV2ViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eefce8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4e68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + _DAT_1127166f8));
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + _DAT_1127166fc));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(param_1);
  return;
}



/* Entry: 104eefd68; end: 104eefd77; -[SCMapPlaceProfileV2ViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eefd68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127166fc),PTR_s_innerScrollView_1125f6f70);
  return;
}



/* Entry: 104eefd78; end: 104eefdc3; -[SCMapPlaceProfileV2ViewController handleGripperAreaTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eefd78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127166fc);
  func_0x00010c065580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eefdc4; end: 104eefdcb; -[SCMapPlaceProfileV2ViewController autoSizingEnabled] */

undefined8 FUN_104eefdc4(void)

{
  return 0;
}



/* Entry: 104eefdcc; end: 104eefdd3; -[SCMapPlaceProfileV2ViewController autoSizingFullishEnabled] */

undefined8 FUN_104eefdcc(void)

{
  return 0;
}



/* Entry: 104eefdd4; end: 104eefddf; -[SCMapPlaceProfileV2ViewController trayFeatureName] */

undefined ** FUN_104eefdd4(void)

{
  return &PTR____CFConstantStringClassReference_110dba178;
}



/* Entry: 104eefde0; end: 104eefe1f; -[SCMapPlaceProfileV2ViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eefde0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127166f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127166fc,0);
  return;
}



/* Entry: 104eefe20; end: 104ef0ae3; -[SCMapPlaceProfileV2EntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eefe20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined8 uVar42;
  long lVar43;
  undefined8 uVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined8 uVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  undefined8 uVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  undefined *puVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110859d88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2100;
  _objc_alloc();
  func_0x00010c03b5c0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112716700),param_2,puVar2);
  lVar3 = param_1 + _DAT_112716704;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126ae728;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112716744;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x000104ef0b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar10 = PTR_PTR_1126b2108;
  _objc_alloc();
  lVar11 = param_1;
  func_0x000104ef0b00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x000104ef0b24();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112716738;
  _objc_loadWeakRetained();
  lVar15 = lVar3;
  func_0x00010c2609c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271673c;
  _objc_loadWeakRetained();
  lVar17 = lVar4;
  func_0x00010c28f5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x000104ef0b48();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x000104ef0b6c();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x000104ef0b90();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x000104ef0bb4();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112716778;
  _objc_loadWeakRetained();
  lVar28 = lVar7;
  func_0x00010c29e0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112716788;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02f740(puVar10,param_2,lVar13,lVar5,0,lVar9,lVar14,lVar16,lVar17,lVar20,lVar23,lVar25
                      ,lVar27,lVar28,lVar30);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar7);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar3);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  puVar31 = PTR_PTR_1126b2110;
  _objc_alloc();
  lVar7 = param_1;
  func_0x000104ef0bd8();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x000104ef0b24();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000104ef0bfc();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x000104ef0c20();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000104ef0bb4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11271677c;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c028920(puVar31,param_2,lVar7,lVar29,lVar11,lVar12,lVar4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar29);
  _objc_release(lVar7);
  lVar3 = param_1 + _DAT_112716708;
  _objc_loadWeakRetained();
  lVar32 = lVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar69 = PTR_PTR_1126b2118;
  _objc_alloc();
  lVar33 = param_1;
  func_0x000104ef0c20();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x000104ef0b90();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar35;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x000104ef0b48();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112716754;
  _objc_loadWeakRetained();
  lVar40 = lVar3;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112716750;
  _objc_loadWeakRetained();
  lVar41 = lVar4;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  uVar71 = *(undefined8 *)(param_1 + _DAT_112716798);
  uVar42 = *(undefined8 *)(param_1 + _DAT_1127167a0);
  _objc_retain();
  _objc_retain(uVar71);
  lVar7 = param_1 + _DAT_112716760;
  _objc_loadWeakRetained();
  lVar43 = lVar7;
  func_0x00010c2802a0();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_1 + _DAT_1127167a4);
  _objc_retain();
  lVar29 = param_1 + _DAT_112716764;
  _objc_loadWeakRetained();
  lVar45 = lVar29;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1;
  func_0x000104ef0bfc();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112716740;
  _objc_loadWeakRetained();
  lVar47 = param_1;
  func_0x000104ef0c44();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010c0b9f40();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_1 + _DAT_11271679c);
  _objc_retain();
  lVar12 = param_1 + _DAT_112716794;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_112716768;
  _objc_loadWeakRetained();
  lVar14 = param_1 + _DAT_11271676c;
  _objc_loadWeakRetained();
  lVar50 = lVar14;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = lVar50;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = lVar51;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  func_0x000104ef0b24();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1;
  func_0x000104ef0c44();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar54;
  func_0x00010c110e20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112716720;
  _objc_loadWeakRetained();
  lVar56 = lVar15;
  func_0x00010c0d6ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112716730;
  _objc_loadWeakRetained();
  lVar57 = lVar16;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1;
  func_0x000104ef0b6c();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = lVar58;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = lVar59;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1;
  func_0x000104ef0b48();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar61;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x000104ef0bd8();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x000104ef0b48();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar62 = *(undefined8 *)(param_1 + _DAT_1127167a8);
  _objc_retain();
  lVar17 = param_1 + _DAT_112716774;
  _objc_loadWeakRetained();
  lVar63 = lVar17;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1;
  func_0x000104ef0bb4();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = lVar64;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = param_1;
  func_0x000104ef0bd8();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = lVar66;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = lVar67;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar68;
  func_0x00010bf218e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112716784;
  _objc_loadWeakRetained();
  lVar21 = lVar18;
  func_0x00010c134280();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11271678c;
  _objc_loadWeakRetained();
  lVar22 = lVar19;
  func_0x00010bf1aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar72 = *(undefined8 *)(param_1 + _DAT_1127167ac);
  _objc_retain(uVar72);
  lVar20 = param_1 + _DAT_112716790;
  _objc_loadWeakRetained();
  func_0x00010c02cc20(puVar69,param_2,lVar33,puVar10,lVar36,lVar39,lVar40,lVar41,uVar71,uVar42,
                      lVar32,lVar43,uVar44,lVar45,lVar46,lVar11,lVar48,uVar49,lVar12,lVar13,lVar52,
                      puVar31,lVar53,lVar55,lVar56,lVar57,lVar60,lVar23,lVar24,lVar28,uVar62,lVar63,
                      lVar65,lVar30,puVar1,lVar21,lVar22,uVar72,lVar20);
  uVar70 = *(undefined8 *)(param_1 + _DAT_11271670c);
  *(undefined **)(param_1 + _DAT_11271670c) = puVar69;
  _objc_release(uVar70);
  _objc_release(uVar72);
  _objc_release(lVar20);
  _objc_release(uVar62);
  _objc_release(lVar22);
  _objc_release(lVar19);
  _objc_release(lVar21);
  _objc_release(lVar18);
  _objc_release(lVar30);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar17);
  _objc_release(uVar49);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar16);
  _objc_release(lVar56);
  _objc_release(lVar15);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar44);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar11);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar29);
  _objc_release(uVar42);
  _objc_release(lVar43);
  _objc_release(lVar7);
  _objc_release(uVar71);
  _objc_release(lVar41);
  _objc_release(lVar4);
  _objc_release(lVar40);
  _objc_release(lVar3);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(puVar31);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ef0ae4; end: 104ef0c67;  */

void FUN_104ef0ae4(void)

{
  _objc_alloc_init(PTR_PTR_1126b20f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ef0c68; end: 104ef0cf3; -[SCMapPlaceProfileV2EntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef0c68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112716710);
  *(undefined **)(param_1 + _DAT_112716710) = puVar1;
  _objc_retain();
  _objc_release(uVar3);
  func_0x00010bf3a220(*(undefined8 *)(param_1 + _DAT_11271670c),param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010c117720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ef0cf4; end: 104ef0f47; -[SCMapPlaceProfileV2EntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef0cf4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127167ac,0);
  _objc_storeStrong(param_1 + _DAT_112716700,0);
  _objc_storeStrong(param_1 + _DAT_1127167a8,0);
  _objc_storeStrong(param_1 + _DAT_1127167a4,0);
  _objc_storeStrong(param_1 + _DAT_1127167a0,0);
  _objc_storeStrong(param_1 + _DAT_11271679c,0);
  _objc_storeStrong(param_1 + _DAT_112716798,0);
  _objc_destroyWeak(param_1 + _DAT_112716794);
  _objc_destroyWeak(param_1 + _DAT_112716790);
  _objc_destroyWeak(param_1 + _DAT_11271678c);
  _objc_destroyWeak(param_1 + _DAT_112716788);
  _objc_destroyWeak(param_1 + _DAT_112716784);
  _objc_destroyWeak(param_1 + _DAT_112716780);
  _objc_destroyWeak(param_1 + _DAT_11271677c);
  _objc_destroyWeak(param_1 + _DAT_112716778);
  _objc_destroyWeak(param_1 + _DAT_112716774);
  _objc_destroyWeak(param_1 + _DAT_112716770);
  _objc_destroyWeak(param_1 + _DAT_11271676c);
  _objc_destroyWeak(param_1 + _DAT_112716768);
  _objc_destroyWeak(param_1 + _DAT_112716764);
  _objc_destroyWeak(param_1 + _DAT_112716760);
  _objc_destroyWeak(param_1 + _DAT_11271675c);
  _objc_destroyWeak(param_1 + _DAT_112716758);
  _objc_destroyWeak(param_1 + _DAT_112716754);
  _objc_destroyWeak(param_1 + _DAT_112716750);
  _objc_destroyWeak(param_1 + _DAT_11271674c);
  _objc_destroyWeak(param_1 + _DAT_112716748);
  _objc_destroyWeak(param_1 + _DAT_112716744);
  _objc_destroyWeak(param_1 + _DAT_112716740);
  _objc_destroyWeak(param_1 + _DAT_11271673c);
  _objc_destroyWeak(param_1 + _DAT_112716738);
  _objc_destroyWeak(param_1 + _DAT_112716704);
  _objc_destroyWeak(param_1 + _DAT_112716734);
  _objc_destroyWeak(param_1 + _DAT_112716730);
  _objc_destroyWeak(param_1 + _DAT_11271672c);
  _objc_destroyWeak(param_1 + _DAT_112716728);
  _objc_destroyWeak(param_1 + _DAT_112716724);
  _objc_destroyWeak(param_1 + _DAT_112716720);
  _objc_destroyWeak(param_1 + _DAT_11271671c);
  _objc_destroyWeak(param_1 + _DAT_112716718);
  _objc_destroyWeak(param_1 + _DAT_112716714);
  _objc_destroyWeak(param_1 + _DAT_112716708);
  _objc_storeStrong(param_1 + _DAT_112716710,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271670c,0);
  return;
}



/* Entry: 104ef0f48; end: 104ef0fc3; -[SCMapPromotedPlaceProfileActionPublisher init] */

undefined1 * FUN_104ef0f48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4e70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ef0fc4; end: 104ef0feb; -[SCMapPromotedPlaceProfileActionPublisher promotedPlacePinTapObservable] */

void FUN_104ef0fc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ef0fec; end: 104ef1013; -[SCMapPromotedPlaceProfileActionPublisher promotedPlaceProfileActionObservable] */

void FUN_104ef0fec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ef1014; end: 104ef107f; -[SCMapPromotedPlaceProfileActionPublisher publishActionWithType:forPlace:] */

void FUN_104ef1014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2120;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c0362c0();
  _objc_release(param_4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ef1080; end: 104ef1153; -[SCMapPromotedPlaceProfileActionPublisher publishPinTapEventForPlaceID:baseView:uiContainer:adWillDismissHandler:adDidDismissHandler:] */

void FUN_104ef1080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2128;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c036320();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ef1154; end: 104ef1183; -[SCMapPromotedPlaceProfileActionPublisher .cxx_destruct] */

void FUN_104ef1154(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ef1184; end: 104ef120b; -[SCMapPlaceProfileV2ETAData initWithLocalizedVenueEtaText:venueNavigationMode:] */

undefined1 *
FUN_104ef1184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4e78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ef120c; end: 104ef122f; -[SCMapPlaceProfileV2ETAData copyWithZone:] */

undefined8 FUN_104ef120c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ef1230; end: 104ef1237; -[SCMapPlaceProfileV2ETAData localizedVenueEtaText] */

undefined8 FUN_104ef1230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104ef1238; end: 104ef123f; -[SCMapPlaceProfileV2ETAData venueNavigationMode] */

undefined4 FUN_104ef1238(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 104ef1240; end: 104ef124b; -[SCMapPlaceProfileV2ETAData .cxx_destruct] */

void FUN_104ef1240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104ef124c; end: 104ef12d3; -[SCMapPlaceProfileV2StoryCarouselData initWithRankedStoryThumbnails:hasImportantSnaps:] */

undefined1 *
FUN_104ef124c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4e80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ef12d4; end: 104ef12f7; -[SCMapPlaceProfileV2StoryCarouselData copyWithZone:] */

undefined8 FUN_104ef12d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


