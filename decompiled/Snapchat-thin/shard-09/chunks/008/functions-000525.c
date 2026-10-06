/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10719e060; end: 10719e0db; -[SCStickerPickerHorizontalIntentGestureRecognizer reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719e060(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8ae8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_reset_11262ba18);
  lVar2 = (long)_DAT_112764bf0;
  uVar3 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uVar1 = *(undefined8 *)PTR__CGPointZero_110347540;
  ((undefined8 *)(param_1 + lVar2))[1] = uVar3;
  *(undefined8 *)(param_1 + lVar2) = uVar1;
  lVar2 = (long)_DAT_112764bf4;
  ((undefined8 *)(param_1 + lVar2))[1] = uVar3;
  *(undefined8 *)(param_1 + lVar2) = uVar1;
  *(undefined1 *)(param_1 + _DAT_112764bf8) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764bfc);
  *(undefined8 *)(param_1 + _DAT_112764bfc) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 10719e0dc; end: 10719e25f; -[SCStickerPickerHorizontalIntentGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719e0dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_5);
  puVar2 = PTR_s_touchesBegan_withEvent__11267b780;
  puStack_58 = PTR_PTR_1126f8ae8;
  lStack_60 = param_3;
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_60,puVar2,param_5,param_6);
  lVar5 = param_6;
  func_0x00010bf00c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar3 = lVar5;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = param_5;
    func_0x00010bf529e0();
  }
  _objc_release(lVar5);
  lVar5 = param_5;
  func_0x00010bf529e0();
  if ((lVar5 == 1) && (lVar3 == 1)) {
    lVar5 = (long)_DAT_112764bfc;
    if ((*(long *)(param_3 + lVar5) == 0) && (lVar3 = param_3, func_0x00010c252440(), lVar3 == 0)) {
      lVar3 = param_5;
      func_0x00010bf04a20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + lVar5);
      *(long *)(param_3 + lVar5) = lVar3;
      _objc_retain();
      _objc_release(uVar4);
      puVar1 = (undefined8 *)(param_3 + _DAT_112764bf0);
      lVar5 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(lVar3);
      _objc_release(lVar3);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      _objc_release(lVar5);
      lVar5 = (long)_DAT_112764bf4;
      uVar4 = *puVar1;
      ((undefined8 *)(param_3 + lVar5))[1] = puVar1[1];
      *(undefined8 *)(param_3 + lVar5) = uVar4;
      goto LAB_10719e1b8;
    }
  }
  func_0x00010be3d900(param_3);
LAB_10719e1b8:
  _objc_release(param_5);
  return;
}



/* Entry: 10719e260; end: 10719e3ef; -[SCStickerPickerHorizontalIntentGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719e260(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f8ae8;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_touchesMoved_withEvent__11252ca58,param_5,param_6);
  lVar3 = param_3;
  func_0x00010c252440();
  if (((lVar3 == 5) || (lVar3 = param_3, func_0x00010c252440(), lVar3 == 4)) ||
     (lVar3 = param_3, func_0x00010c252440(), lVar3 == 3)) goto LAB_10719e3d0;
  lVar3 = (long)_DAT_112764bfc;
  uVar4 = param_5;
  func_0x00010bf4b900();
  if ((int)uVar4 == 0) goto LAB_10719e3d0;
  uVar4 = *(undefined8 *)(param_3 + lVar3);
  _objc_retain(uVar4);
  pdVar1 = (double *)(param_3 + _DAT_112764bf4);
  lVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(uVar4);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  _objc_release(lVar3);
  if ((*(byte *)(param_3 + _DAT_112764bf8) & 1) == 0) {
    dVar5 = ABS(pdVar1[1] - ((double *)(param_3 + _DAT_112764bf0))[1]);
    bVar2 = false;
    if ((ABS(*pdVar1 - *(double *)(param_3 + _DAT_112764bf0)) < 6.0) && (bVar2 = false, !NAN(dVar5))
       ) {
      bVar2 = dVar5 < 6.0;
    }
    if (!bVar2) {
      *(undefined1 *)(param_3 + _DAT_112764bf8) = 1;
      goto LAB_10719e3c0;
    }
  }
  else {
    lVar3 = param_3;
    func_0x00010c252440();
    if ((lVar3 == 1) || (lVar3 = param_3, func_0x00010c252440(), lVar3 == 2)) {
LAB_10719e3c0:
      func_0x00010c209fc0(param_3);
    }
  }
  _objc_release(uVar4);
LAB_10719e3d0:
  _objc_release(param_5);
  return;
}



/* Entry: 10719e3f0; end: 10719e4af; -[SCStickerPickerHorizontalIntentGestureRecognizer touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719e3f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_touchesEnded_withEvent__11267b788;
  puStack_38 = PTR_PTR_1126f8ae8;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3,param_4);
  uVar2 = param_3;
  func_0x00010bf4b900();
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
    lVar3 = param_1;
    func_0x00010c252440();
    if (lVar3 != 1) {
      func_0x00010c252440();
    }
    func_0x00010c209fc0(param_1);
  }
  return;
}



/* Entry: 10719e4b0; end: 10719e53f; -[SCStickerPickerHorizontalIntentGestureRecognizer touchesCancelled:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719e4b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8ae8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_touchesCancelled_withEvent__112526c90,param_3,param_4);
  if ((*(long *)(param_1 + _DAT_112764bfc) == 0) ||
     (uVar1 = param_3, func_0x00010bf4b900(), (int)uVar1 != 0)) {
    func_0x00010c209fc0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10719e540; end: 10719e553; -[SCStickerPickerHorizontalIntentGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719e540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112764bfc,0);
  return;
}



/* Entry: 10719e554; end: 10719e5b7; -[SCStickerPickerLayoutSourceChat init] */

undefined1 * FUN_10719e554(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8af0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d4f10;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10719e5b8; end: 10719e60b; -[SCStickerPickerLayoutSourceChat numberOfColumnsForSuperCategoryType:] */

undefined8 FUN_10719e5b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 & 0xfffffffffffffffd) == 0) {
    return 4;
  }
  func_0x00010bf69aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0deba0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10719e60c; end: 10719e613; -[SCStickerPickerLayoutSourceChat defaultLayoutSource] */

undefined8 FUN_10719e60c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10719e614; end: 10719e61f; -[SCStickerPickerLayoutSourceChat .cxx_destruct] */

void FUN_10719e614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10719e620; end: 10719e64b; -[SCStickerPickerLayoutSourceDefault numberOfColumnsForSuperCategoryType:] */

undefined8 FUN_10719e620(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    if (param_3 == 0xc) {
      return 7;
    }
    if (param_3 != 2) {
      return 4;
    }
  }
  return 5;
}



/* Entry: 10719e64c; end: 10719e6af; -[SCStickerPickerLayoutSourcePreview init] */

undefined1 * FUN_10719e64c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8af8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d4f10;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10719e6b0; end: 10719e6f3; -[SCStickerPickerLayoutSourcePreview numberOfColumnsForSuperCategoryType:] */

undefined8 FUN_10719e6b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf69aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0deba0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10719e6f4; end: 10719e6fb; -[SCStickerPickerLayoutSourcePreview defaultLayoutSource] */

undefined8 FUN_10719e6f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10719e6fc; end: 10719e707; -[SCStickerPickerLayoutSourcePreview .cxx_destruct] */

void FUN_10719e6fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10719e708; end: 10719e70b; -[SCStickerPickerMenuView openAtCategory:stickerOffset:] */

void FUN_10719e708(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_openAtCategory_sticker__112617dd0);
  return;
}



/* Entry: 10719e70c; end: 10719e7e3;  */

void FUN_10719e70c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  puVar2 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_alloc_init();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10719e7e4;
    puStack_40 = &UNK_11086dbb8;
    puVar2 = puVar1;
    puStack_38 = puVar1;
    _objc_retain();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_1,param_2,&puStack_58,puVar2);
    _objc_release(param_1);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_38);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10719e7e4; end: 10719e827;  */

void FUN_10719e7e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe9720(param_2,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10719e828; end: 10719e8d7; +[SCStickerPickerMenuView shouldEnableStickerSearchPretyping] */

undefined * FUN_10719e828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf446a0(PTR__OBJC_CLASS___NSLocale_1126af788,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return puVar4;
}



/* Entry: 10719e8d8; end: 1071a1dc7; -[SCStickerPickerMenuView initWithFrame:sourceType:isQuickSend:hideGiphy:commonLoggingParamsBuilder:userSession:bottomInset:stickerPickerLogger:ctpItemViewService:presentationModelProvider:friendmojiFilteredContainer:stickerSearcher:stickerInjector:customStickerManager:creativeToolsABProvider:aiStickersService:runtime:bitmojiPickerDelegate:bitmoji3DContentFetcher:userBlizzardLogger:avatarProvider:hideCategoryIcons:removeTopInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10719e8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,byte param_10,undefined8 param_11,undefined *param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 *param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined4 param_27)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined8 *puVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  long lVar58;
  undefined8 uVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  undefined8 *puVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  undefined1 auStack_270 [8];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  puStack_258 = PTR_PTR_1126f8b00;
  puVar2 = &uStack_260;
  puVar53 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_260 = param_6;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar2,PTR_s_initWithFrame__1125e2948);
  puVar14 = param_12;
  if (puVar2 == (undefined8 *)0x0) goto LAB_1071a1cd0;
  lVar60 = (long)_DAT_112764c10;
  *(undefined8 *)((long)puVar2 + lVar60) = param_5;
  lVar67 = (long)_DAT_112764c14;
  _objc_retain(param_12);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar67);
  *(undefined **)((long)puVar2 + lVar67) = param_12;
  _objc_release(uVar3);
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c18);
  *(undefined **)((long)puVar2 + (long)_DAT_112764c18) = puVar14;
  _objc_release(uVar3);
  lVar61 = (long)_DAT_112764c1c;
  *(undefined8 *)((long)puVar2 + lVar61) = param_8;
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c20);
  *(undefined ***)((long)puVar2 + (long)_DAT_112764c20) =
       &PTR____CFConstantStringClassReference_110daafd8;
  _objc_release(uVar3);
  puVar14 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c24);
  *(undefined **)((long)puVar2 + (long)_DAT_112764c24) = puVar14;
  _objc_release(uVar3);
  puVar14 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c28);
  *(undefined **)((long)puVar2 + (long)_DAT_112764c28) = puVar14;
  _objc_release(uVar3);
  *(undefined8 *)((long)puVar2 + (long)_DAT_112764c2c) = 0;
  *(undefined8 *)((long)puVar2 + (long)_DAT_112764c30) = 0;
  *(undefined8 *)((long)puVar2 + (long)_DAT_112764c34) = 0;
  *(undefined1 *)((long)puVar2 + (long)_DAT_112764c38) = param_9;
  lVar66 = (long)_DAT_112764c3c;
  *(undefined1 *)((long)puVar2 + lVar66) = (undefined1)param_27;
  uVar3 = 0;
  if (param_27._1_1_ == '\0') {
    uVar3 = 0xbff0000000000000;
  }
  *(undefined8 *)((long)puVar2 + (long)_DAT_112764c40) = uVar3;
  puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c44);
  *(undefined **)((long)puVar2 + (long)_DAT_112764c44) = puVar14;
  _objc_release(uVar3);
  lVar68 = (long)_DAT_112764c48;
  _objc_retain(param_14);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar68);
  *(undefined8 *)((long)puVar2 + lVar68) = param_14;
  _objc_release(uVar3);
  lVar68 = (long)_DAT_112764c4c;
  _objc_retain(param_16);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar68);
  *(undefined8 *)((long)puVar2 + lVar68) = param_16;
  _objc_release(uVar3);
  lVar68 = (long)_DAT_112764c50;
  _objc_retain(param_19);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar68);
  *(undefined8 *)((long)puVar2 + lVar68) = param_19;
  _objc_release(uVar3);
  lVar68 = (long)_DAT_112764c54;
  _objc_retain(param_20);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar68);
  *(undefined8 *)((long)puVar2 + lVar68) = param_20;
  _objc_release(uVar3);
  lVar68 = (long)_DAT_112764c58;
  _objc_retain(param_21);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar68);
  *(undefined8 *)((long)puVar2 + lVar68) = param_21;
  _objc_release(uVar3);
  func_0x00010c1b61e0(puVar2);
  puVar53 = param_23;
  _objc_storeWeak((long)puVar2 + (long)_DAT_112764c5c,param_23);
  lVar68 = (long)_DAT_112764c60;
  _objc_retain(param_22);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar68);
  *(undefined8 *)((long)puVar2 + lVar68) = param_22;
  _objc_release(uVar3);
  lVar68 = (long)_DAT_112764c64;
  _objc_retain(param_24);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar68);
  *(undefined8 *)((long)puVar2 + lVar68) = param_24;
  _objc_release(uVar3);
  lVar68 = (long)_DAT_112764c68;
  _objc_retain(param_25);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar68);
  *(undefined8 *)((long)puVar2 + lVar68) = param_25;
  _objc_release(uVar3);
  lVar68 = (long)_DAT_112764c6c;
  _objc_retain(param_26);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar68);
  *(undefined8 *)((long)puVar2 + lVar68) = param_26;
  _objc_release(uVar3);
  lVar62 = (long)_DAT_112764c70;
  *(byte *)((long)puVar2 + lVar62) = param_10 ^ 1;
  puVar14 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c74);
  *(undefined **)((long)puVar2 + (long)_DAT_112764c74) = puVar14;
  _objc_release(uVar3);
  lVar68 = (long)_DAT_112764c78;
  _objc_retain(param_17);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar68);
  *(undefined8 *)((long)puVar2 + lVar68) = param_17;
  _objc_release(uVar3);
  lVar68 = (long)_DAT_112764c7c;
  _objc_retain(param_18);
  uVar4 = *(undefined8 *)((long)puVar2 + lVar68);
  *(undefined8 *)((long)puVar2 + lVar68) = param_18;
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126beb98);
  uVar3 = uVar4;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c80);
  *(undefined8 *)((long)puVar2 + (long)_DAT_112764c80) = uVar4;
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126baee0);
  uVar4 = uVar54;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar54);
  uVar54 = uVar4;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c84);
  *(undefined8 *)((long)puVar2 + (long)_DAT_112764c84) = uVar54;
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d4e00);
  uVar54 = uVar55;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c88);
  *(undefined8 *)((long)puVar2 + (long)_DAT_112764c88) = uVar54;
  _objc_release(uVar56);
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d4fe8);
  uVar54 = uVar55;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c8c);
  *(undefined8 *)((long)puVar2 + (long)_DAT_112764c8c) = uVar54;
  _objc_release(uVar56);
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126beb98);
  uVar54 = uVar55;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar55);
  puVar14 = PTR_PTR_1126d4e58;
  _objc_alloc();
  func_0x00010c050960();
  uVar55 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c90);
  *(undefined **)((long)puVar2 + (long)_DAT_112764c90) = puVar14;
  _objc_release(uVar55);
  uVar55 = uVar54;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar55;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_11;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar16;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar10;
  func_0x00010c111be0();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c94);
  *(undefined8 *)((long)puVar2 + (long)_DAT_112764c94) = uVar56;
  _objc_release(uVar57);
  _objc_release(uVar59);
  _objc_release(uVar16);
  _objc_release(uVar10);
  _objc_release(uVar55);
  puVar63 = puVar2;
  func_0x00010bedf100();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  puVar5 = puVar63;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar63);
  puVar6 = puVar5;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar63 = puVar7;
  func_0x00010c0b3900();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764c98);
  *(undefined8 **)((long)puVar2 + (long)_DAT_112764c98) = puVar63;
  _objc_release(uVar55);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar14 = PTR_PTR_1126d4e60;
  _objc_alloc_init();
  lVar58 = *(long *)((long)puVar2 + (long)_DAT_112764c9c);
  *(undefined **)((long)puVar2 + (long)_DAT_112764c9c) = puVar14;
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126beb98);
  lVar68 = lVar58;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar58);
  lVar58 = lVar68;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = lVar58;
  _objc_release();
  if (lVar58 != 0) {
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126beb98);
    lVar58 = lVar64;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar64);
    puVar14 = PTR_PTR_1126d4e68;
    _objc_alloc();
    lVar64 = lVar68;
    func_0x00010bfe63a0(lVar68);
    _objc_retainAutoreleasedReturnValue();
    lVar70 = lVar64;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar70;
    func_0x00010bf57360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044fe0();
    _objc_release(lVar8);
    _objc_release(lVar70);
    _objc_release(lVar64);
    puVar9 = puVar14;
    func_0x00010c26c1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar55 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764ca0);
    *(undefined **)((long)puVar2 + (long)_DAT_112764ca0) = puVar9;
    _objc_release(uVar55);
    lVar64 = lVar58;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    lVar70 = lVar64;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar70;
    func_0x00010bf58a80();
    _objc_retainAutoreleasedReturnValue();
    lVar69 = (long)_DAT_112764ca4;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar69);
    *(long *)((long)puVar2 + lVar69) = lVar8;
    _objc_release(uVar55);
    _objc_release(lVar70);
    _objc_release(lVar64);
    _objc_initWeak(&uStack_268,puVar2);
    uVar56 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010c252740();
    _objc_retainAutoreleasedReturnValue();
    puVar53 = &uStack_268;
    _objc_copyWeak(auStack_270,puVar53);
    uVar55 = uVar56;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar59 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764ca8);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112764ca8) = uVar55;
    _objc_release(uVar59);
    _objc_release(uVar56);
    _objc_destroyWeak(auStack_270);
    _objc_destroyWeak(&uStack_268);
    _objc_release(puVar14);
    _objc_release(lVar58);
  }
  puVar14 = PTR_PTR_1126cbde8;
  func_0x00010c07d4e0();
  if ((int)puVar14 != 0) {
    uVar55 = *(undefined8 *)((long)puVar2 + lVar67);
    func_0x00010c2550e0();
    _objc_retainAutoreleasedReturnValue();
    uVar56 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764cac);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112764cac) = uVar55;
    _objc_release(uVar56);
  }
  puVar14 = PTR_PTR_1126d4eb0;
  func_0x00010c22e680();
  if ((int)puVar14 != 0) {
    puVar9 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    puVar14 = PTR_PTR_1126d4eb0;
    puVar63 = puVar2;
    func_0x00010c279540(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e760(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ee20();
    lVar67 = (long)_DAT_112764cb0;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar67);
    *(undefined **)((long)puVar2 + lVar67) = puVar9;
    _objc_release(uVar55);
    _objc_release(puVar14);
    _objc_release(puVar63);
    puVar63 = puVar2;
    func_0x00010bdd2220(0x3ff0000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar67));
    _objc_release(puVar63);
    func_0x00010bf20c00(puVar2);
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar2 + lVar67));
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar2 + lVar67));
    func_0x00010befbb60(puVar2);
  }
  puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  lVar67 = (long)_DAT_112764cb4;
  uVar55 = *(undefined8 *)((long)puVar2 + lVar67);
  *(undefined **)((long)puVar2 + lVar67) = puVar14;
  _objc_release(uVar55);
  func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar67));
  func_0x00010befbb60(puVar2);
  puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)((long)puVar2 + lVar67);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar63 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar55;
  uVar57 = *(undefined8 *)((long)puVar2 + lVar67);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c2793a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar57;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uVar56;
  uVar11 = *(undefined8 *)((long)puVar2 + lVar67);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c274200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar59;
  uVar12 = *(undefined8 *)((long)puVar2 + lVar67);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bf1ff80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar14);
  _objc_release(puVar9);
  _objc_release(uVar16);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar59);
  _objc_release(puVar6);
  _objc_release(uVar11);
  _objc_release(uVar56);
  _objc_release(puVar7);
  _objc_release(uVar57);
  _objc_release(uVar55);
  _objc_release(puVar63);
  _objc_release(uVar10);
  if (*(long *)((long)puVar2 + lVar61) == 0) {
    puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1b87c0(puVar2);
    _objc_release(puVar14);
    puVar14 = PTR_PTR_1126d4ff0;
    _objc_alloc();
    func_0x00010c014c00(param_1,param_2,param_3,param_4,0x4024000000000000);
    lVar58 = (long)_DAT_112764cb8;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar58);
    *(undefined **)((long)puVar2 + lVar58) = puVar14;
    _objc_release(uVar55);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar58));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar67));
  }
  puVar9 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init();
  func_0x00010c1c82c0(0,puVar9);
  func_0x00010c1c8300(0,puVar9);
  func_0x00010c1f7ac0(puVar9);
  puVar14 = PTR_PTR_1126d4fc8;
  _objc_alloc();
  func_0x00010c014040(param_1,param_2,param_3,param_4);
  lVar58 = (long)_DAT_112764cbc;
  uVar55 = *(undefined8 *)((long)puVar2 + lVar58);
  *(undefined **)((long)puVar2 + lVar58) = puVar14;
  _objc_release(uVar55);
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar58));
  _objc_release(puVar14);
  func_0x00010c1fbe00(*(undefined8 *)((long)puVar2 + lVar58));
  func_0x00010c1d8be0(*(undefined8 *)((long)puVar2 + lVar58));
  func_0x00010bee67e0(puVar2);
  func_0x00010c18e220(*(undefined8 *)((long)puVar2 + lVar58));
  func_0x00010c21d7a0(*(undefined8 *)((long)puVar2 + lVar58));
  func_0x00010c21da40(*(undefined8 *)((long)puVar2 + lVar58));
  func_0x00010c189840(*(undefined8 *)((long)puVar2 + lVar58));
  func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar58));
  func_0x00010c2025c0(*(undefined8 *)((long)puVar2 + lVar58));
  uVar55 = *(undefined8 *)((long)puVar2 + lVar58);
  _objc_opt_class(PTR_PTR_1126d4ff8);
  func_0x00010c126000(uVar55);
  uVar55 = *(undefined8 *)((long)puVar2 + lVar58);
  _objc_opt_class(PTR_PTR_1126d4ff8);
  func_0x00010c126000(uVar55);
  uVar55 = *(undefined8 *)((long)puVar2 + lVar58);
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  func_0x00010c126000(uVar55);
  func_0x00010c160fc0(*(undefined8 *)((long)puVar2 + lVar58));
  func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar58));
  func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar67));
  puVar63 = puVar2;
  if (*(long *)((long)puVar2 + lVar61) == 0) {
    puVar63 = *(undefined8 **)((long)puVar2 + (long)_DAT_112764cb8);
  }
  _objc_retain(puVar63);
  uVar56 = *(undefined8 *)((long)puVar2 + lVar58);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar63;
  func_0x00010bf1ff80(puVar63);
  _objc_retainAutoreleasedReturnValue();
  uVar55 = uVar56;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = (long)_DAT_112764cc0;
  uVar59 = *(undefined8 *)((long)puVar2 + lVar64);
  *(undefined8 *)((long)puVar2 + lVar64) = uVar55;
  _objc_release(uVar59);
  _objc_release(puVar7);
  _objc_release(uVar56);
  puVar19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar59 = *(undefined8 *)((long)puVar2 + lVar58);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar63;
  func_0x00010c08de00(puVar63);
  _objc_retainAutoreleasedReturnValue();
  uVar55 = uVar59;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar55;
  puVar14 = *(undefined **)((long)puVar2 + lVar58);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar63;
  func_0x00010c2793a0(puVar63);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar15;
  uVar16 = *(undefined8 *)((long)puVar2 + lVar58);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar63;
  func_0x00010c274200(puVar63);
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar56;
  uStack_c8 = *(undefined8 *)((long)puVar2 + lVar64);
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar56);
  _objc_release(puVar13);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(puVar6);
  _objc_release(puVar14);
  _objc_release(uVar55);
  _objc_release(puVar7);
  _objc_release(uVar59);
  puVar7 = puVar2;
  func_0x00010c07d4e0();
  if ((int)puVar7 != 0) {
    puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar69 = (long)_DAT_112764cc4;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar69);
    *(undefined **)((long)puVar2 + lVar69) = puVar14;
    _objc_release(uVar55);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar69));
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar69));
    _objc_release(puVar14);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar2 + lVar69));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar67));
    puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar55 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar55;
    uVar57 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c2793a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar56 = uVar57;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar56;
    uVar11 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010c274200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar59 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar59;
    uVar12 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar2;
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar14);
    _objc_release(puVar19);
    _objc_release(uVar16);
    _objc_release(puVar18);
    _objc_release(uVar12);
    _objc_release(uVar59);
    _objc_release(puVar13);
    _objc_release(uVar11);
    _objc_release(uVar56);
    _objc_release(puVar6);
    _objc_release(uVar57);
    _objc_release(uVar55);
    _objc_release(puVar7);
    _objc_release(uVar10);
    puVar19 = PTR_PTR_1126c3440;
    func_0x00010c2301e0();
    puVar14 = PTR_PTR_1126d4ff8;
    _objc_alloc();
    func_0x00010c014c80(param_1,param_2,param_3,param_4);
    lVar65 = (long)_DAT_112764cc8;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar65);
    *(undefined **)((long)puVar2 + lVar65) = puVar14;
    _objc_release(uVar55);
    func_0x00010c185a00(*(undefined8 *)((long)puVar2 + lVar65));
    puVar7 = puVar2;
    func_0x00010c0849a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b61e0(*(undefined8 *)((long)puVar2 + lVar65));
    _objc_release(puVar7);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar65));
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar65));
    _objc_release(puVar14);
    func_0x00010c171360(*(undefined8 *)((long)puVar2 + lVar65));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar69));
    puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)puVar2 + lVar65);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar57 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uVar16;
    uVar11 = *(undefined8 *)((long)puVar2 + lVar65);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar59 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar59;
    uVar20 = *(undefined8 *)((long)puVar2 + lVar65);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar56 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar56;
    uVar22 = *(undefined8 *)((long)puVar2 + lVar65);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar55 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_108 = uVar55;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar14);
    _objc_release(puVar15);
    _objc_release(uVar55);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar56);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar59);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar16);
    _objc_release(uVar57);
    _objc_release(uVar10);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar2 + lVar65));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar2 + lVar65));
    puVar14 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar70 = (long)_DAT_112764ccc;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar70);
    *(undefined **)((long)puVar2 + lVar70) = puVar14;
    _objc_release(uVar55);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar70));
    puVar14 = PTR_PTR_1126d4eb0;
    func_0x00010c0da900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar2 + lVar70));
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar2 + lVar70));
    _objc_release(puVar14);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar2 + lVar70));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar2 + lVar70));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar69));
    puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar57 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar59 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uVar59;
    uVar11 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar56 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uVar56;
    uVar20 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = 0x4038000000000000;
    uVar55 = uVar20;
    func_0x00010bf49480(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_128 = uVar55;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar14);
    _objc_release(puVar15);
    _objc_release(uVar55);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar56);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar59);
    _objc_release(uVar57);
    _objc_release(uVar10);
    puVar14 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar70 = (long)_DAT_112764cd0;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar70);
    *(undefined **)((long)puVar2 + lVar70) = puVar14;
    _objc_release(uVar55);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar70));
    func_0x00010c1a8560(*(undefined8 *)((long)puVar2 + lVar70));
    func_0x00010befbb60(puVar2);
    func_0x00010c2558c0(*(undefined8 *)((long)puVar2 + lVar70));
    puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar59 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar56 = uVar59;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar56;
    uVar57 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar2 + lVar69);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar55 = uVar57;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_140 = uVar55;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar14);
    _objc_release(puVar15);
    _objc_release(uVar55);
    _objc_release(uVar11);
    _objc_release(uVar57);
    _objc_release(uVar56);
    _objc_release(uVar10);
    _objc_release(uVar59);
    lVar70 = (long)puVar2 + (long)_DAT_112764cd4;
    _objc_loadWeakRetained();
    lVar8 = lVar70;
    func_0x00010c08d0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar70);
    func_0x00010c0deba0();
    func_0x00010c20ab00(*(undefined8 *)((long)puVar2 + lVar65));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar65));
    if (((ulong)puVar19 & 1) == 0) {
      bVar1 = *(byte *)((long)puVar2 + lVar62);
      *(byte *)((long)puVar2 + (long)_DAT_112764cdc) = bVar1;
      if ((bVar1 & 1) != 0) goto LAB_1071a0520;
    }
    else {
      *(undefined1 *)((long)puVar2 + (long)_DAT_112764cdc) = 1;
LAB_1071a0520:
      puVar14 = PTR_PTR_1126d4ff8;
      _objc_alloc();
      uVar16 = param_1;
      func_0x00010c014c80(param_1,param_2,param_3,param_4);
      lVar62 = (long)_DAT_112764ce0;
      uVar55 = *(undefined8 *)((long)puVar2 + lVar62);
      *(undefined **)((long)puVar2 + lVar62) = puVar14;
      _objc_release(uVar55);
      func_0x00010c185a00(*(undefined8 *)((long)puVar2 + lVar62));
      puVar7 = puVar2;
      func_0x00010c0849a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b61e0(*(undefined8 *)((long)puVar2 + lVar62));
      _objc_release(puVar7);
      func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar62));
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar62));
      _objc_release(puVar14);
      func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar69));
      puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar57 = *(undefined8 *)((long)puVar2 + lVar62);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)puVar2 + lVar69);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar55 = uVar57;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_168 = uVar55;
      uVar12 = *(undefined8 *)((long)puVar2 + lVar62);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)((long)puVar2 + lVar69);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar56 = uVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_160 = uVar56;
      uVar21 = *(undefined8 *)((long)puVar2 + lVar62);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)((long)puVar2 + lVar69);
      func_0x00010c274200(uVar22);
      _objc_retainAutoreleasedReturnValue();
      uVar59 = uVar21;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_158 = uVar59;
      uVar23 = *(undefined8 *)((long)puVar2 + lVar62);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = *(undefined8 *)((long)puVar2 + lVar69);
      func_0x00010bf1ff80(uVar24);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar23;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_150 = uVar10;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar14);
      _objc_release(puVar19);
      _objc_release(uVar10);
      _objc_release(uVar24);
      _objc_release(uVar23);
      _objc_release(uVar59);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar56);
      _objc_release(uVar20);
      _objc_release(uVar12);
      _objc_release(uVar55);
      _objc_release(uVar11);
      _objc_release(uVar57);
      func_0x00010bde5540(puVar2);
      func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar62));
      func_0x00010c1a7f60(*(undefined8 *)((long)puVar2 + lVar62));
    }
    puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar2);
    _CGRectGetWidth();
    func_0x00010c013de0(0,0,uVar16,0x404d000000000000);
    lVar70 = (long)_DAT_112764ce4;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar70);
    *(undefined **)((long)puVar2 + lVar70) = puVar14;
    _objc_release(uVar55);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar70));
    func_0x00010befbb60(puVar2);
    puVar14 = PTR_PTR_1126d5000;
    _objc_alloc();
    puVar19 = puVar14;
    func_0x000109201b68();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154880(puVar2);
    func_0x00010c0368c0();
    lVar62 = (long)_DAT_112764ce8;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar62);
    *(undefined **)((long)puVar2 + lVar62) = puVar14;
    _objc_release(uVar55);
    _objc_release(puVar19);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar62));
    func_0x00010c213320(*(undefined8 *)((long)puVar2 + lVar62));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar62));
    dVar71 = 1.0;
    if (*(long *)((long)puVar2 + lVar61) != 0) {
      dVar71 = 0.4;
    }
    func_0x00010c1dca00(dVar71,*(undefined8 *)((long)puVar2 + lVar62));
    puVar7 = puVar2;
    func_0x00010c154880();
    if (puVar7 == (undefined8 *)0x0) {
      uVar59 = *(undefined8 *)((long)puVar2 + lVar62);
      func_0x00010c153520(uVar59);
      _objc_retainAutoreleasedReturnValue();
      uVar55 = uVar59;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar56 = uVar55;
      func_0x00010c14d100(uVar55);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)((long)puVar2 + lVar62);
      func_0x00010c153520(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(uVar16);
      _objc_release(uVar56);
      _objc_release(puVar14);
      _objc_release(uVar55);
      _objc_release(uVar59);
    }
    func_0x00010c201080(*(undefined8 *)((long)puVar2 + lVar62));
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar2 + lVar62));
    puVar14 = PTR_PTR_1126d4eb0;
    func_0x00010c153440(PTR_PTR_1126d4eb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar62));
    _objc_release(puVar14);
    func_0x00010c201920(*(undefined8 *)((long)puVar2 + lVar62));
    lVar69 = *(long *)((long)puVar2 + lVar61);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar2 + lVar62));
    dVar73 = dVar71;
    if (*(long *)((long)puVar2 + lVar61) == 2) {
      puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010bfb68e0(*(undefined8 *)((long)puVar2 + lVar62));
      _CGRectGetMaxY();
      dVar72 = dVar71;
      func_0x00010bfb68e0(puVar2);
      _CGRectGetWidth();
      dVar73 = 11.0;
      func_0x00010c013de0(0x4026000000000000,dVar71,dVar72 + -22.0,0x3ff0000000000000,puVar14);
      puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar14);
      _objc_release(puVar19);
      func_0x00010befbb60(puVar2);
      _objc_release(puVar14);
    }
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar70));
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar65 = (long)_DAT_112764cec;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar65);
    *(undefined **)((long)puVar2 + lVar65) = puVar14;
    _objc_release(uVar55);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar65));
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fc999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar65));
    _objc_release(puVar14);
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar70));
    puVar19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar11 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar55 = uVar11;
    func_0x00010bf493c0(dVar73);
    _objc_retainAutoreleasedReturnValue();
    uStack_1c8 = uVar55;
    uVar12 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar56 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c0 = uVar56;
    uVar20 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar2;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar59 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b8 = uVar59;
    uVar21 = *(undefined8 *)((long)puVar2 + lVar62);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b0 = uVar16;
    uVar23 = *(undefined8 *)((long)puVar2 + lVar62);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a8 = uVar10;
    uVar26 = *(undefined8 *)((long)puVar2 + lVar62);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar57 = 0x8000000000000000;
    if (lVar69 != 2) {
      uVar57 = 0xc04b800000000000;
    }
    uVar28 = uVar26;
    func_0x00010bf493c0(uVar57);
    _objc_retainAutoreleasedReturnValue();
    uStack_1a0 = uVar28;
    uVar29 = *(undefined8 *)((long)puVar2 + lVar62);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar57 = uVar29;
    func_0x00010bf49420(0x404d000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_198 = uVar57;
    uVar30 = *(undefined8 *)((long)puVar2 + lVar65);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = *(undefined8 *)((long)puVar2 + lVar62);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar30;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_190 = uVar32;
    uVar33 = *(undefined8 *)((long)puVar2 + lVar65);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar33;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = uVar35;
    uVar36 = *(undefined8 *)((long)puVar2 + lVar65);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010c2793a0(uVar37);
    _objc_retainAutoreleasedReturnValue();
    uVar38 = uVar36;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = uVar38;
    uVar39 = *(undefined8 *)((long)puVar2 + lVar65);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar39;
    func_0x00010bf49420(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = uVar40;
    uVar41 = *(undefined8 *)((long)puVar2 + lVar65);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = *(undefined8 *)((long)puVar2 + lVar70);
    func_0x00010bf1ff80(uVar42);
    _objc_retainAutoreleasedReturnValue();
    uVar43 = uVar41;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_170 = uVar43;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar19);
    _objc_release(puVar14);
    _objc_release(uVar43);
    _objc_release(uVar42);
    _objc_release(uVar41);
    _objc_release(uVar40);
    _objc_release(uVar39);
    _objc_release(uVar38);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(uVar57);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar10);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar16);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar59);
    _objc_release(puVar25);
    _objc_release(puVar18);
    _objc_release(uVar20);
    _objc_release(uVar56);
    _objc_release(puVar13);
    _objc_release(puVar6);
    _objc_release(uVar12);
    _objc_release(uVar55);
    _objc_release(puVar7);
    _objc_release(uVar11);
    func_0x00010be85100(puVar2);
    _objc_release(lVar8);
  }
  lVar61 = *(long *)((long)puVar2 + lVar61);
  if (lVar61 == 0) {
    puVar14 = PTR_PTR_1126d5008;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar60 = (long)_DAT_112764cf0;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar60);
    *(undefined **)((long)puVar2 + lVar60) = puVar14;
    _objc_release(uVar55);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar60));
    puVar44 = *(undefined **)((long)puVar2 + lVar60);
    func_0x00010c262bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    func_0x00010befbb60(puVar2);
    puVar19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar15 = puVar44;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764cec);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar45 = puVar44;
    puStack_208 = puVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar46 = puVar45;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar47 = puVar44;
    puStack_200 = puVar46;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar48 = puVar47;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar44;
    puStack_1f8 = puVar48;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar50 = puVar49;
    func_0x00010bf49420(0x404d000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_1f0 = puVar50;
    lVar61 = (long)_DAT_112764cb8;
    uVar57 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar2 + lVar67);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar55 = uVar57;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1e8 = uVar55;
    uVar12 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar2 + lVar67);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar56 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1e0 = uVar56;
    uVar21 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = *(undefined **)((long)puVar2 + lVar60);
    func_0x00010c262bc0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar51 = puVar14;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar59 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d8 = uVar59;
    uVar22 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar2 + lVar67);
    func_0x00010bf1ff80(uVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar52 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1d0 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar19);
    _objc_release(puVar52);
    _objc_release(uVar16);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar59);
    _objc_release(puVar51);
    _objc_release(puVar14);
    _objc_release(uVar21);
    _objc_release(uVar56);
    _objc_release(uVar20);
    _objc_release(uVar12);
    _objc_release(uVar55);
    _objc_release(uVar11);
    _objc_release(uVar57);
    _objc_release(puVar50);
    _objc_release(puVar49);
    _objc_release(puVar48);
    _objc_release(puVar6);
    _objc_release(puVar47);
    _objc_release(puVar46);
    _objc_release(puVar7);
    _objc_release(puVar45);
    _objc_release(puVar17);
    _objc_release(uVar10);
    _objc_release(puVar15);
LAB_1071a1bf0:
    _objc_release(puVar44);
  }
  else if ((*(byte *)((long)puVar2 + lVar66) & 1) == 0) {
    *(undefined8 *)((long)puVar2 + (long)_DAT_112764cf4) = 0x4032000000000000;
    lVar66 = (long)_DAT_112764cf8;
    *(undefined8 *)((long)puVar2 + lVar66) = 0x4040000000000000;
    if (lVar61 == 3) {
LAB_1071a10c4:
      *(undefined8 *)((long)puVar2 + lVar66) = 0x403d000000000000;
      *(undefined8 *)((long)puVar2 + (long)_DAT_112764cfc) = 1;
      uVar55 = 0x403d000000000000;
    }
    else if (lVar61 == 2) {
      *(undefined8 *)((long)puVar2 + lVar66) = 0x4040800000000000;
      uVar55 = 0x4040800000000000;
    }
    else {
      if (lVar61 == 1) goto LAB_1071a10c4;
      uVar55 = 0x4040000000000000;
    }
    *(undefined8 *)((long)puVar2 + (long)_DAT_112764cf4) = uVar55;
    puVar14 = PTR_PTR_1126d5010;
    _objc_alloc();
    uVar56 = *(undefined8 *)((long)puVar2 + lVar66);
    func_0x00010c25e8c0(PTR_PTR_1126d4eb0);
    func_0x00010c01b0a0(uVar56,uVar55,*(undefined8 *)((long)puVar2 + lVar60));
    uVar55 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764d00);
    *(undefined **)((long)puVar2 + (long)_DAT_112764d00) = puVar14;
    _objc_release(uVar55);
    puVar14 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(param_1,param_2,param_3,param_4);
    lVar61 = (long)_DAT_112764d04;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar61);
    *(undefined **)((long)puVar2 + lVar61) = puVar14;
    _objc_release(uVar55);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar61));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar2 + lVar61));
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar61));
    _objc_release(puVar14);
    func_0x00010c189840(*(undefined8 *)((long)puVar2 + lVar61));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar61));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar2 + lVar61));
    uVar55 = *(undefined8 *)((long)puVar2 + lVar61);
    _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    func_0x00010c126000(uVar55);
    uVar55 = *(undefined8 *)((long)puVar2 + lVar61);
    _objc_opt_class(PTR_PTR_1126d5018);
    func_0x00010c126060(uVar55);
    uVar55 = *(undefined8 *)((long)puVar2 + lVar61);
    _objc_opt_class(PTR_PTR_1126d5018);
    func_0x00010c126060(uVar55);
    uVar55 = *(undefined8 *)((long)puVar2 + lVar61);
    _objc_opt_class(PTR_PTR_1126d5018);
    func_0x00010c126060(uVar55);
    uVar55 = *(undefined8 *)((long)puVar2 + lVar61);
    _objc_opt_class(PTR_PTR_1126d5018);
    func_0x00010c126060(uVar55);
    uVar55 = *(undefined8 *)((long)puVar2 + lVar61);
    _objc_opt_class(PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
    func_0x00010c126060(uVar55);
    func_0x00010befbb60(puVar2);
    uVar59 = *(undefined8 *)((long)puVar2 + lVar60);
    func_0x00010c2739e0(uVar59,PTR_PTR_1126d4eb0);
    uVar56 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar55 = uVar56;
    func_0x00010bf49420(uVar59);
    _objc_retainAutoreleasedReturnValue();
    lVar60 = (long)_DAT_112764d08;
    uVar59 = *(undefined8 *)((long)puVar2 + lVar60);
    *(undefined8 *)((long)puVar2 + lVar60) = uVar55;
    _objc_release(uVar59);
    _objc_release(uVar56);
    func_0x00010c162480(*(undefined8 *)((long)puVar2 + lVar64));
    uVar56 = *(undefined8 *)((long)puVar2 + lVar58);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar59 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010c274200(uVar59);
    _objc_retainAutoreleasedReturnValue();
    uVar55 = uVar56;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar2 + lVar64);
    *(undefined8 *)((long)puVar2 + lVar64) = uVar55;
    _objc_release(uVar16);
    _objc_release(uVar59);
    _objc_release(uVar56);
    puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar16 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar55 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_230 = uVar55;
    uVar10 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar59 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_228 = uVar59;
    uVar57 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar56 = uVar57;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_220 = uVar56;
    uStack_218 = *(undefined8 *)((long)puVar2 + lVar60);
    uStack_210 = *(undefined8 *)((long)puVar2 + lVar64);
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar14);
    _objc_release(puVar19);
    _objc_release(uVar56);
    _objc_release(puVar6);
    _objc_release(uVar57);
    _objc_release(uVar59);
    _objc_release(puVar13);
    _objc_release(uVar10);
    _objc_release(uVar55);
    _objc_release(puVar7);
    _objc_release(uVar16);
    puVar19 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    puVar14 = PTR_PTR_1126d4eb0;
    puVar7 = puVar2;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ee20();
    lVar60 = (long)_DAT_112764d0c;
    uVar55 = *(undefined8 *)((long)puVar2 + lVar60);
    *(undefined **)((long)puVar2 + lVar60) = puVar19;
    _objc_release(uVar55);
    _objc_release(puVar14);
    _objc_release(puVar7);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar60));
    puVar14 = PTR_PTR_1126d4eb0;
    func_0x00010bf1e780(PTR_PTR_1126d4eb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar60));
    _objc_release(puVar14);
    func_0x00010c066fe0(puVar2);
    puVar19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)puVar2 + lVar60);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar57 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar59 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_250 = uVar59;
    uVar11 = *(undefined8 *)((long)puVar2 + lVar60);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_248 = uVar16;
    uVar20 = *(undefined8 *)((long)puVar2 + lVar60);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar55 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_240 = uVar55;
    uVar22 = *(undefined8 *)((long)puVar2 + lVar60);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar2 + lVar61);
    func_0x00010bf1ff80(uVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar56 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_238 = uVar56;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar19);
    _objc_release(puVar14);
    _objc_release(uVar56);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar55);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar59);
    _objc_release(uVar57);
    _objc_release(uVar10);
    puVar44 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar2 + lVar61));
    goto LAB_1071a1bf0;
  }
  puVar19 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  lVar60 = (long)_DAT_112764d10;
  uVar55 = *(undefined8 *)((long)puVar2 + lVar60);
  *(undefined **)((long)puVar2 + lVar60) = puVar19;
  _objc_release(uVar55);
  func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar60));
  func_0x00010bef9040(puVar2);
  func_0x00010c160fc0(puVar2);
  lVar60 = (long)_DAT_112764d14;
  _objc_retain(param_13);
  uVar55 = *(undefined8 *)((long)puVar2 + lVar60);
  *(undefined8 *)((long)puVar2 + lVar60) = param_13;
  _objc_release(uVar55);
  lVar60 = (long)_DAT_112764d18;
  _objc_retain(param_11);
  uVar55 = *(undefined8 *)((long)puVar2 + lVar60);
  *(undefined8 *)((long)puVar2 + lVar60) = param_11;
  _objc_release(uVar55);
  _objc_release(puVar63);
  _objc_release(puVar9);
  _objc_release(lVar68);
  _objc_release(puVar5);
  _objc_release(uVar54);
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_1071a1cd0:
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar14 + 0x20);
  _objc_destroyWeak(&uStack_268);
  __Unwind_Resume(param_11);
                    /* WARNING: Could not recover jumptable at 0x00010c153e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar53,PTR_s_searchPreTypeForYou_1126329a8);
  return puVar53;
}



/* Entry: 1071a1dc8; end: 1071a1e07;  */

void FUN_1071a1dc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c153e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_searchPreTypeForYou_1126329a8);
  return;
}



/* Entry: 1071a1e08; end: 1071a1e4f;  */

void FUN_1071a1e08(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071a1e50; end: 1071a1eaf; -[SCStickerPickerMenuView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a1e50(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2569a0(*(undefined8 *)(param_1 + _DAT_112764ca4));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112764ca8));
  puStack_28 = PTR_PTR_1126f8b00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1071a1eb0; end: 1071a1edb; -[SCStickerPickerMenuView isSearchEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1071a1eb0(long param_1)

{
  undefined *puVar1;
  
  if ((*(ulong *)(param_1 + _DAT_112764c1c) & 0xfffffffffffffffd) == 1) {
    return (undefined *)0x0;
  }
  puVar1 = PTR_PTR_1126cbde8;
                    /* WARNING: Could not recover jumptable at 0x00010c07d4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126cbde8,PTR_s_isSearchEnabled_1125fcf48);
  return puVar1;
}



/* Entry: 1071a1edc; end: 1071a1f67; -[SCStickerPickerMenuView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a1edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8b00;
  lStack_40 = param_5;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_112764cbc;
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010c1b6260(param_3,param_4,uVar1);
  func_0x00010c069fe0(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1071a1f68; end: 1071a1f77; -[SCStickerPickerMenuView setupSafeAreaFrame:bottomInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a1f68(long param_1)

{
  undefined8 in_d4;
  
  *(undefined8 *)(param_1 + _DAT_112764c10) = in_d4;
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1071a1f78; end: 1071a1ff3; -[SCStickerPickerMenuView _backgroundColorForBlurViewWithAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a1f78(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_1126d4eb0;
  dVar3 = param_1;
  func_0x00010bfe05e0(PTR_PTR_1126d4eb0,param_3,*(undefined8 *)(param_2 + _DAT_112764c1c));
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGColorGetAlpha();
  puVar2 = puVar1;
  func_0x00010bf414e0(param_1 * dVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1071a1ff4; end: 1071a24cf; -[SCStickerPickerMenuView setGradientWithinSearchCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a1ff4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112764c1c;
  if ((*(ulong *)(param_1 + lVar12) & 0xfffffffffffffffd) == 1) goto LAB_1071a2490;
  lVar13 = (long)_DAT_112764cb4;
  uVar1 = *(ulong *)(param_1 + lVar13);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar11);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    puVar11 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = *(undefined **)(param_1 + lVar13);
    func_0x00010c08c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c19f0e0(puVar11);
  func_0x00010c209760(0x3ff0000000000000,0,puVar11);
  dVar14 = 1.0;
  func_0x00010c196020(0x3ff0000000000000,0x3ff0000000000000,puVar11);
  puVar5 = PTR_PTR_1126cbde8;
  func_0x00010c07d4e0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if ((int)puVar5 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010bf0a120(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(puVar11);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf20c00(param_1);
    _CGRectGetHeight();
    dVar14 = 50.0 / dVar14;
    func_0x00010c0df720(dVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf20c00(param_1);
    _CGRectGetHeight();
    func_0x00010c0df720(59.0 / dVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00(puVar11);
LAB_1071a244c:
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    func_0x00010bf20c00(param_1);
    _CGRectGetHeight();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if (((param_3 & 1) != 0) || (*(long *)(param_1 + lVar12) != 0)) {
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3ff0000000000000,0,PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3ff0000000000000,0x3fa999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3ff0000000000000,0x3fd0000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3ff0000000000000,0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010bf0a120(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60(puVar11);
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(0.0 / dVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(54.0 / dVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(64.0 / dVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(74.0 / dVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bff00(puVar11);
      _objc_release(puVar8);
      _objc_release(puVar7);
      goto LAB_1071a244c;
    }
    _objc_release(puVar11);
    puVar11 = (undefined *)0x0;
  }
  uVar9 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08c0e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar9);
  _objc_release(puVar11);
LAB_1071a2490:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be93170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1071a24d0; end: 1071a24d7; -[SCStickerPickerMenuView reloadDataWithDataSourceUpdateHint:] */

void FUN_1071a24d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be93170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resetLayoutWithUpdateHint_shoul_1125825f8,param_3,1);
  return;
}



/* Entry: 1071a24d8; end: 1071a24db; -[SCStickerPickerMenuView reloadDataWithDataSourceUpdateHint:shouldRefreshSuperCategoryIcons:] */

void FUN_1071a24d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be93170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetLayoutWithUpdateHint_shoul_1125825f8);
  return;
}



/* Entry: 1071a24dc; end: 1071a24e7; -[SCStickerPickerMenuView resetLayout] */

void FUN_1071a24dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be93170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resetLayoutWithUpdateHint_shoul_1125825f8,0,1);
  return;
}



/* Entry: 1071a24e8; end: 1071a2dff; -[SCStickerPickerMenuView _resetLayoutWithUpdateHint:shouldRefreshSuperCategoryIcons:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a24e8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,int param_8)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  double dVar19;
  long lStack_88;
  
  _objc_retain(param_7);
  lVar16 = (long)_DAT_112764cd4;
  lVar10 = param_5 + lVar16;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar10 == 0) goto LAB_1071a2dd8;
  lVar10 = param_5 + lVar16;
  _objc_loadWeakRetained();
  lVar17 = (long)_DAT_112764d1c;
  lVar13 = lVar10;
  func_0x00010c262b60();
  _objc_release(lVar10);
  lStack_88 = *(long *)(param_5 + _DAT_112764cfc);
  if (lVar13 == 0) {
    if (lStack_88 == 0) {
      lStack_88 = 0;
    }
    else {
      lStack_88 = 0;
      *(undefined8 *)(param_5 + _DAT_112764cfc) = 0;
    }
  }
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112764cb0));
  iVar12 = _DAT_112764c44;
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  lVar13 = (long)_DAT_112764c1c;
  lVar10 = *(long *)(param_5 + lVar17);
  if (*(long *)(param_5 + lVar13) == 0) {
    if (lVar10 == 0) goto LAB_1071a2698;
    func_0x00010c1554e0(lVar10);
    func_0x00010bfed020(puVar1);
    _objc_retainAutoreleasedReturnValue();
    iVar12 = _DAT_112764c44;
    lVar10 = *(long *)(param_5 + _DAT_112764c44);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 == 0) {
      dVar19 = 2.2250738585072014e-308;
    }
    else {
      uVar5 = *(undefined8 *)(param_5 + iVar12);
      func_0x00010c0e00e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar19 = (double)param_1;
      _objc_release(uVar5);
    }
LAB_1071a26ac:
    _objc_release(puVar1);
  }
  else {
    if (lVar10 != 0) {
      lVar10 = *(long *)(param_5 + _DAT_112764c44);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 != 0) {
        puVar1 = *(undefined **)(param_5 + iVar12);
        func_0x00010c0e00e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        dVar19 = (double)param_1;
        goto LAB_1071a26ac;
      }
    }
LAB_1071a2698:
    dVar19 = 2.2250738585072014e-308;
  }
  func_0x00010c12adc0(*(undefined8 *)(param_5 + iVar12));
  lVar10 = *(long *)(param_5 + lVar17);
  if (lVar10 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c1554e0();
    lVar14 = param_5 + lVar16;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c0df480();
    if (lVar10 < lVar15) {
      lVar2 = *(long *)(param_5 + lVar17);
      func_0x00010c0840e0();
      lVar10 = param_5 + lVar16;
      _objc_loadWeakRetained();
      func_0x00010c1554e0(*(undefined8 *)(param_5 + lVar17));
      lVar15 = lVar10;
      func_0x00010c254a40();
      _objc_release(lVar10);
      _objc_release(lVar14);
      if (lVar15 <= lVar2) goto LAB_1071a2794;
      puVar1 = *(undefined **)(param_5 + lVar17);
      if ((puVar1 == (undefined *)0x0) || (dVar19 <= 2.2250738585072014e-308)) goto LAB_1071a282c;
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar19,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_5 + iVar12));
LAB_1071a2810:
      _objc_release(puVar1);
    }
    else {
      _objc_release(lVar14);
LAB_1071a2794:
      lVar10 = (long)_DAT_112764d20;
      uVar3 = param_5 + lVar10;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      _objc_opt_respondsToSelector();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        lVar10 = param_5 + lVar10;
        _objc_loadWeakRetained(lVar10);
        func_0x00010bfeccc0();
        _objc_release(lVar10);
        puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fb160(param_5);
        goto LAB_1071a2810;
      }
      func_0x00010c1fb160(param_5);
    }
    puVar1 = *(undefined **)(param_5 + lVar17);
  }
LAB_1071a282c:
  _objc_retain(puVar1);
  func_0x00010c1a41c0(param_5);
  lVar10 = (long)_DAT_112764cbc;
  uVar5 = *(undefined8 *)(param_5 + lVar10);
  func_0x00010bf408e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar10));
  func_0x00010c1b6260(param_3,param_4,uVar5);
  func_0x00010c069fe0(uVar5);
  puVar6 = puVar1;
  if ((param_7 != 0) && (puVar1 != (undefined *)0x0)) {
    func_0x00010c1554e0(puVar1);
    lVar14 = param_7;
    func_0x00010bf6d000(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52e60();
    _objc_release(lVar14);
    lVar14 = param_7;
    func_0x00010c0674e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52e60();
    _objc_release(lVar14);
    puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010c0840e0(puVar1);
    func_0x00010bfed020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  func_0x00010c128b60(*(undefined8 *)(param_5 + lVar10));
  func_0x00010c08cdc0(*(undefined8 *)(param_5 + lVar10));
  func_0x00010c138e60(*(undefined8 *)(param_5 + _DAT_112764cc8));
  func_0x00010c138e60(*(undefined8 *)(param_5 + _DAT_112764ce0));
  if (*(long *)(param_5 + lVar13) == 0) {
    lVar14 = (long)_DAT_112764cf0;
    uVar8 = *(undefined8 *)(param_5 + lVar14);
    func_0x00010c262bc0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(uVar8);
    uVar7 = *(undefined8 *)(param_5 + lVar14);
    func_0x00010c262bc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf408e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_5 + lVar14);
    func_0x00010c262bc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_5 + lVar14);
    func_0x00010c262bc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar7);
    func_0x00010c069fe0(uVar8);
    uVar7 = *(undefined8 *)(param_5 + lVar14);
    lVar17 = *(long *)(param_5 + lVar17);
    func_0x00010c1554e0(lVar17);
    func_0x00010c20fd60((double)lVar17,uVar7);
    _objc_release(uVar8);
  }
  else if ((*(byte *)(param_5 + _DAT_112764c3c) & 1) == 0) {
    lVar17 = (long)_DAT_112764d04;
    lVar14 = (long)_DAT_112764d08;
    func_0x00010c12b8a0(*(undefined8 *)(param_5 + lVar17));
    lVar15 = (long)_DAT_112764c10;
    uVar18 = *(undefined8 *)(param_5 + lVar15);
    func_0x00010c2739e0(uVar18,PTR_PTR_1126d4eb0);
    uVar7 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf49420(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_5 + lVar14);
    *(undefined8 *)(param_5 + lVar14) = uVar8;
    _objc_release(uVar18);
    _objc_release(uVar7);
    func_0x00010c162480(*(undefined8 *)(param_5 + lVar14));
    lVar14 = (long)_DAT_112764cc0;
    func_0x00010c162480(*(undefined8 *)(param_5 + lVar14));
    uVar7 = *(undefined8 *)(param_5 + lVar10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010c274200(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_5 + lVar14);
    *(undefined8 *)(param_5 + lVar14) = uVar8;
    _objc_release(uVar11);
    _objc_release(uVar18);
    _objc_release(uVar7);
    func_0x00010c162480(*(undefined8 *)(param_5 + lVar14));
    func_0x00010c181f80(0,0,0,0,*(undefined8 *)(param_5 + lVar10));
    if (param_8 != 0) {
      func_0x00010c1cbe20(*(undefined8 *)(param_5 + lVar17));
      func_0x00010c08cdc0(*(undefined8 *)(param_5 + lVar17));
      lVar14 = (long)_DAT_112764d00;
      func_0x00010c069fe0(*(undefined8 *)(param_5 + lVar14));
      func_0x00010c138e80(*(undefined8 *)(param_5 + lVar15),*(undefined8 *)(param_5 + lVar14));
      func_0x00010c128b60(*(undefined8 *)(param_5 + lVar17));
    }
  }
  if (puVar6 != (undefined *)0x0) {
    lVar17 = param_5 + lVar16;
    _objc_loadWeakRetained();
    lVar14 = lVar17;
    func_0x00010c262b60();
    if (lStack_88 == lVar14) {
      _objc_release(lVar17);
    }
    else {
      lVar14 = param_5 + lVar16;
      _objc_loadWeakRetained();
      lVar15 = lVar14;
      func_0x00010c254b00();
      _objc_release(lVar14);
      _objc_release(lVar17);
      if ((int)lVar15 != 0) {
        lVar16 = param_5 + lVar16;
        _objc_loadWeakRetained(lVar16);
        func_0x00010bfaf4e0();
        _objc_release(lVar16);
        puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = puVar1;
        if (puVar1 == (undefined *)0x0) goto LAB_1071a2dc8;
      }
    }
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if (*(long *)(param_5 + lVar13) == 0) {
      func_0x00010c1554e0(puVar6);
      func_0x00010bfed020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1525a0(*(undefined8 *)(param_5 + lVar10));
      lVar10 = param_5;
      func_0x00010bddc040(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed3160(param_5);
      _objc_release(lVar10);
      _objc_release(puVar1);
    }
    else {
      puVar9 = puVar6;
      func_0x00010c1554e0();
      lVar16 = *(long *)(param_5 + lVar10);
      func_0x00010c0df2e0();
      puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      if (lVar16 <= (long)puVar9) {
        func_0x00010c0840e0(puVar6);
        func_0x00010bfed020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = puVar1;
      }
      puVar9 = puVar6;
      func_0x00010c0840e0();
      lVar16 = *(long *)(param_5 + lVar10);
      func_0x00010c1554e0(puVar6);
      func_0x00010c0deec0();
      puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      if (lVar16 <= (long)puVar9) {
        func_0x00010c1554e0(puVar6);
        func_0x00010bfed020(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = puVar1;
      }
      func_0x00010c1525a0(*(undefined8 *)(param_5 + lVar10));
    }
    func_0x00010bed6120(param_5);
    func_0x00010be590a0(param_5);
    _objc_release(puVar6);
  }
LAB_1071a2dc8:
  func_0x00010c08cdc0(param_5);
  _objc_release(uVar5);
LAB_1071a2dd8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1071a2e00; end: 1071a2e6b; -[SCStickerPickerMenuView _topInsetForBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1071a2e00(ulong param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (*(long *)(param_1 + (long)_DAT_112764c1c) == 0) {
    dVar1 = 116.0;
    dVar2 = 58.0;
    if (*(char *)(param_1 + (long)_DAT_112764d28) == '\0') {
      dVar2 = 116.0;
    }
    func_0x000100478f84();
    if ((param_1 & 1) == 0) {
      func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
      dVar2 = dVar2 + dVar1;
    }
  }
  return dVar2;
}



/* Entry: 1071a2e6c; end: 1071a3073; -[SCStickerPickerMenuView _configureStickerCategoryIconCell:categoryIcon:defaultAlpha:isHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a2e6c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1071a3074;
  uStack_60 = 0x1071a3084;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1071a3074;
  uStack_90 = 0x1071a3084;
  uStack_88 = 0;
  func_0x00010c0c0ce0(param_5);
  bVar1 = (*(ulong *)(param_2 + _DAT_112764c1c) & 0xfffffffffffffffd) != 1;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_6 == 0) {
    if (bVar1) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (bVar1) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    param_1 = 0x3ff0000000000000;
  }
  func_0x00010c1a9760(param_4);
  func_0x00010c216160(param_4);
  func_0x00010c1a96a0(param_1,param_4);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1071a3074; end: 1071a308b;  */

void FUN_1071a3074(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1071a308c; end: 1071a30cb;  */

void FUN_1071a308c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_10719e70c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071a30cc; end: 1071a31a3;  */

void FUN_1071a30cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_3;
    _objc_release(uVar1);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(long *)(lVar3 + 0x28) == 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  FUN_10719e70c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071a31a4; end: 1071a337f; -[SCStickerPickerMenuView _didDisplayStickerPageAtIndexPath:cell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a31a4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = (long)_DAT_112764cd4;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  func_0x00010c1554e0(param_3);
  lVar2 = lVar1;
  func_0x00010c254ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c27dd80();
  if (lVar1 == 9) {
    puVar3 = PTR_PTR_1126d4ff8;
    _objc_opt_class(PTR_PTR_1126d4ff8);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    if (((uVar4 & 1) != 0) && (*(long *)(param_1 + _DAT_112764c1c) == 0)) {
      param_1 = param_1 + lVar7;
      _objc_loadWeakRetained();
      lVar1 = param_1;
      func_0x00010c254aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c1558c0();
      if (0 < lVar7) {
        func_0x000107d5e624();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c22f560();
        _objc_release(lVar5);
        _objc_release(lVar7);
        _objc_release(lVar1);
        _objc_release(param_1);
        if ((int)lVar6 == 0) goto LAB_1071a332c;
        func_0x0001092018c8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23a820(param_4);
        _objc_release(param_1);
        func_0x000107d5e624();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c190300();
      }
      _objc_release(lVar1);
      _objc_release(param_1);
    }
  }
LAB_1071a332c:
  puVar3 = PTR_PTR_1126d4ff8;
  _objc_opt_class(PTR_PTR_1126d4ff8);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  if ((uVar4 & 1) != 0) {
    func_0x00010c1b0800(param_4);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a3380; end: 1071a342b; -[SCStickerPickerMenuView _checkWillDisplayFriendmojiHintForCell:] */

void FUN_1071a3380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  _objc_retain();
  func_0x000107d5e624();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22f360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((int)uVar3 != 0) && (uVar1 = param_3, func_0x00010c237900(), (int)uVar1 != 0)) {
    func_0x000107d5e624();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1901c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a342c; end: 1071a3603; -[SCStickerPickerMenuView _didEndDisplayingStickerPageAtIndexPath:cell:isDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a342c(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  long param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_6;
  func_0x00010c1554e0();
  lVar6 = (long)_DAT_112764cd4;
  lVar5 = param_4 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar5;
  func_0x00010c0df480();
  _objc_release(lVar5);
  if (lVar1 < lVar2) {
    func_0x00010be59ca0(param_4);
    lVar5 = param_4 + lVar6;
    _objc_loadWeakRetained();
    func_0x00010c1554e0(param_6);
    lVar1 = lVar5;
    func_0x00010c254ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar1;
    func_0x00010c27dd80();
    if (lVar5 == 9) {
      lVar5 = (long)_DAT_112764cbc;
      func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar5));
      func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar5));
      if (*(long *)(param_4 + _DAT_112764c1c) == 0) {
        lVar5 = param_4 + lVar6;
        _objc_loadWeakRetained();
        lVar2 = lVar5;
        func_0x00010c0df480();
        _objc_release(lVar5);
        if ((int)(param_1 / param_3) < lVar2) {
          param_4 = param_4 + lVar6;
          _objc_loadWeakRetained(param_4);
          lVar5 = param_4;
          func_0x00010c254ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_4);
          _objc_release(lVar5);
        }
      }
      puVar3 = PTR_PTR_1126d4ff8;
      _objc_opt_class(PTR_PTR_1126d4ff8);
      uVar4 = param_7;
      _objc_opt_isKindOfClass(param_7,puVar3);
      if ((uVar4 & 1) != 0) {
        func_0x00010bf9f880(param_7);
      }
    }
    puVar3 = PTR_PTR_1126d4ff8;
    _objc_opt_class(PTR_PTR_1126d4ff8);
    uVar4 = param_7;
    _objc_opt_isKindOfClass(param_7,puVar3);
    if ((uVar4 & 1) != 0) {
      func_0x00010c1b0800(param_7);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1071a3604; end: 1071a361b; -[SCStickerPickerMenuView searchViewStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071a3604(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112764c1c);
  if (lVar1 != 2) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1071a361c; end: 1071a364b; -[SCStickerPickerMenuView searchQueryObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a361c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764c24);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071a364c; end: 1071a367b; -[SCStickerPickerMenuView explicitSearchQueryObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a364c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764c28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071a367c; end: 1071a36d7; -[SCStickerPickerMenuView _ctpSearchLoggerSectionForIndexPath:stickerType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071a367c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112764cd8);
  func_0x00010c1554e0(param_3);
  func_0x00010bf5d960(lVar1,param_2,param_3);
  func_0x000108d12e24();
  if ((param_4 != 7) && (lVar1 != 0)) {
    return lVar1;
  }
  if (param_4 < 0xe) {
    return *(long *)(&UNK_10df9fb60 + param_4 * 8);
  }
  return 5;
}



/* Entry: 1071a36d8; end: 1071a3713; -[SCStickerPickerMenuView searchBarFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a36d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764ce4);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_112764ce8));
                    /* WARNING: Could not recover jumptable at 0x00010bf51470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_convertRect_toView__1125b1ec0,param_1);
  return;
}



/* Entry: 1071a3714; end: 1071a3723; -[SCStickerPickerMenuView stickerSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a3714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c254f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764d14),PTR_s_stickerSessionId_112672de8);
  return;
}



/* Entry: 1071a3724; end: 1071a3733; -[SCStickerPickerMenuView enterSearchCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071a3724(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764c2c);
}



/* Entry: 1071a3734; end: 1071a3743; -[SCStickerPickerMenuView pretypeStickerTagSelectCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071a3734(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764c30);
}



/* Entry: 1071a3744; end: 1071a3753; -[SCStickerPickerMenuView prefixMatchStickerTagSelectCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071a3744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764c34);
}



/* Entry: 1071a3754; end: 1071a3853; -[SCStickerPickerMenuView searchViewBackButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a3754(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uVar1 = param_3;
    func_0x00010c071280();
    if (((uVar1 & 1) != 0) || (*(long *)(param_1 + _DAT_112764d24) != 0)) {
      func_0x00010c193b00(param_3);
      func_0x00010be85100(param_1);
      goto LAB_1071a37f0;
    }
    uVar1 = param_1 + _DAT_112764d20;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) goto LAB_1071a37f0;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ddc0();
  }
  else {
    func_0x00010c212f20();
    lVar3 = *(long *)(param_1 + _DAT_112764c20);
    *(undefined8 *)(param_1 + _DAT_112764c20) = 0;
    param_1 = lVar3;
  }
  _objc_release(param_1);
LAB_1071a37f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a3854; end: 1071a390b; -[SCStickerPickerMenuView searchView:didChangeToText:byChangingCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a3854(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  func_0x00010bec3980(param_1);
  lVar3 = (long)_DAT_112764c20;
  uVar1 = param_4;
  func_0x00010c0720c0(param_4,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    if ((param_4 == 0) || (uVar1 = param_4, func_0x00010c08fa60(), uVar1 == 0)) {
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(ulong *)(param_1 + lVar3) = param_4;
      _objc_release(uVar2);
      func_0x00010be85100(param_1,param_2,1);
    }
    else {
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(ulong *)(param_1 + lVar3) = param_4;
      _objc_release(uVar2);
      func_0x00010bec19e0(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
      func_0x00010bfe2aa0(*(undefined8 *)(param_1 + _DAT_112764cc8));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071a390c; end: 1071a3973; -[SCStickerPickerMenuView searchViewDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a390c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *(long *)(param_1 + _DAT_112764c2c) = *(long *)(param_1 + _DAT_112764c2c) + 1;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_112764c20));
  if ((int)puVar1 != 0) {
    func_0x00010beddc00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be85110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__putSearchUIIntoState__11257ede0,1);
    return;
  }
  return;
}



/* Entry: 1071a3974; end: 1071a3977; -[SCStickerPickerMenuView searchViewDidEndEditing:] */

void FUN_1071a3974(void)

{
  return;
}



/* Entry: 1071a3978; end: 1071a397f; -[SCStickerPickerMenuView searchViewShouldReturn:withSearchText:] */

undefined8 FUN_1071a3978(void)

{
  return 1;
}



/* Entry: 1071a3980; end: 1071a3987; -[SCStickerPickerMenuView searchViewShouldDeleteCharacter:] */

undefined8 FUN_1071a3980(void)

{
  return 1;
}



/* Entry: 1071a3988; end: 1071a3be3; -[SCStickerPickerMenuView _updatePretypeSearchView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a3988(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR_PTR_1126c3440;
  func_0x00010c2301e0();
  if ((int)puVar9 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_112764c88);
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010c122980();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(lVar3);
    lVar5 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar5 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar3);
          }
          uVar10 = *(undefined8 *)(lStack_128 + lVar12 * 8);
          puVar9 = puVar4;
          func_0x00010bf4b900(puVar4,param_2,uVar10);
          if (((ulong)puVar9 & 1) == 0) {
            func_0x00010befa120(puVar4,param_2,uVar10);
          }
          lVar12 = lVar12 + 1;
        } while (lVar5 != lVar12);
        lVar5 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar3);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar9 = puVar4;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar6,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = puVar6;
    func_0x00010bf529e0();
    if ((undefined *)0xa < puVar9) {
      func_0x00010c25e980(puVar6,param_2,0,10);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar9 = puVar6;
    func_0x00010bf51e00();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar2);
  }
  puVar4 = puVar9;
  func_0x00010bde5540(param_1,param_2,puVar9);
  func_0x00010bebffc0(param_1);
  func_0x00010bebf920(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126d4ed0;
  lVar8 = *(long *)(puVar9 + _DAT_112764c1c);
  _objc_retain(puVar4);
  _objc_alloc();
  uVar1 = puVar9[_DAT_112764c70];
  puVar6 = puVar9 + _DAT_112764d2c;
  _objc_loadWeakRetained(puVar6);
  func_0x00010bfeea20(puVar7,param_2,uVar1,lVar8 == 0,puVar6);
  lVar8 = (long)_DAT_112764d30;
  uVar10 = *(undefined8 *)(puVar9 + lVar8);
  *(undefined **)(puVar9 + lVar8) = puVar7;
  _objc_release(uVar10);
  _objc_release(puVar6);
  puVar6 = puVar9 + _DAT_112764cd4;
  _objc_loadWeakRetained(puVar6);
  puVar7 = puVar6;
  func_0x00010c08d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010c0deba0(puVar7,param_2,0xb);
  func_0x00010c20ab00(*(undefined8 *)(puVar9 + _DAT_112764ce0),param_2,
                      *(undefined8 *)(puVar9 + lVar8),0,puVar4,0,puVar6,
                      *(undefined8 *)(puVar9 + _DAT_112764c14),puVar9,
                      *(undefined8 *)(puVar9 + _DAT_112764c7c),
                      *(undefined8 *)(puVar9 + _DAT_112764c48));
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1071a3be4; end: 1071a3d1f; -[SCStickerPickerMenuView _configurePreTypeWithQueryKeywords:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a3be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126d4ed0;
  lVar4 = *(long *)(param_1 + _DAT_112764c1c);
  _objc_retain(param_3);
  _objc_alloc();
  uVar1 = *(undefined1 *)(param_1 + _DAT_112764c70);
  lVar3 = param_1 + _DAT_112764d2c;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfeea20(puVar2,param_2,uVar1,lVar4 == 0,lVar3);
  lVar6 = (long)_DAT_112764d30;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar5);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_112764cd4;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c08d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010c0deba0(lVar4,param_2,0xb);
  func_0x00010c20ab00(*(undefined8 *)(param_1 + _DAT_112764ce0),param_2,
                      *(undefined8 *)(param_1 + lVar6),0,param_3,0,lVar3,
                      *(undefined8 *)(param_1 + _DAT_112764c14),param_1,
                      *(undefined8 *)(param_1 + _DAT_112764c7c),
                      *(undefined8 *)(param_1 + _DAT_112764c48));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1071a3d20; end: 1071a3d63; -[SCStickerPickerMenuView stickerPickerCatogoryCellCanSelectSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1071a3d20(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112764cbc;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010c070ea0();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c070400(uVar3);
    uVar1 = (uint)uVar3 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1071a3d64; end: 1071a40cf; -[SCStickerPickerMenuView categoryCell:stickerSelected:center:thumbnail:indexPath:searchSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a3d64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  )

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar9 = (long)_DAT_112764cd4;
  _objc_retain(param_7);
  uVar2 = param_3 + lVar9;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c254b00();
  _objc_release(uVar2);
  lVar9 = param_3;
  func_0x00010bf60380();
  lVar4 = param_5;
  func_0x00010c262b40();
  if (lVar4 == 2) {
    bVar1 = true;
  }
  else {
    lVar4 = param_5;
    func_0x00010c262b40(param_5);
    bVar1 = lVar4 == 1;
  }
  lVar4 = param_3 + _DAT_112764d20;
  _objc_loadWeakRetained(lVar4);
  uVar6 = param_8;
  func_0x00010c0840e0(param_8);
  lVar12 = (long)_DAT_112764d1c;
  uVar5 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c1554e0(uVar5);
  lVar10 = (long)_DAT_112764c20;
  func_0x00010c2549e0(param_1,param_2,lVar4,param_4,param_3,param_6,param_7,uVar6,uVar5,bVar1,
                      *(undefined8 *)(param_3 + lVar10),param_9);
  _objc_release(param_7);
  _objc_release(lVar4);
  lVar4 = param_6;
  func_0x00010c27dd80();
  if (lVar4 == 5) {
    uVar6 = *(undefined8 *)(param_3 + _DAT_112764c50);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_6;
    func_0x00010c271a80(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284da0(uVar6,param_4,lVar4);
    _objc_release(lVar4);
    _objc_release(uVar6);
  }
  puVar8 = PTR_PTR_1126bac28;
  if (((*(byte *)(param_3 + _DAT_112764d34) & 1) != 0) || (*(long *)(param_3 + _DAT_112764c1c) == 0)
     ) {
    lVar4 = param_6;
    func_0x00010c2540c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_6;
    func_0x00010c27dd80(param_6);
    func_0x00010c113fe0(puVar8,param_4,lVar4,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = param_6;
    func_0x00010c27dd80(param_6);
    lVar7 = param_3;
    func_0x00010bdf65c0(param_3,param_4,param_8,lVar4);
    uVar13 = *(undefined8 *)(param_3 + _DAT_112764c98);
    uVar5 = *(undefined8 *)(param_3 + lVar12);
    func_0x00010c1554e0(uVar5);
    uVar6 = param_8;
    func_0x00010c0840e0(param_8);
    func_0x00010c0aede0(param_1,param_2,uVar13,param_4,lVar7,uVar5,puVar8,uVar6);
    _objc_release(puVar8);
  }
  lVar12 = (long)_DAT_112764d14;
  uVar11 = *(undefined8 *)(param_3 + lVar12);
  lVar4 = param_5;
  func_0x00010c247d20(param_5);
  uVar14 = *(undefined8 *)(param_3 + lVar10);
  uVar6 = param_8;
  func_0x00010c0840e0(param_8);
  lVar10 = param_3;
  func_0x00010c254b80();
  uVar13 = *(undefined8 *)(param_3 + _DAT_112764d18);
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar13;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0ae0(uVar11,param_4,param_6,lVar4,uVar14,uVar6,uVar3 & 0xffffffff,lVar9,lVar10,
                      uVar5,0);
  _objc_release(uVar5);
  _objc_release(uVar13);
  if (*(long *)(param_3 + _DAT_112764c1c) == 0) {
    func_0x00010c2547c0(*(undefined8 *)(param_3 + lVar12));
  }
  _objc_release(param_8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1071a40d0; end: 1071a4127; -[SCStickerPickerMenuView categoryCell:metaStickerSelected:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a40d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c27dd80();
  if (param_4 == 7) {
    func_0x00010c193b00(*(undefined8 *)(param_1 + _DAT_112764ce8),param_2,1);
    *(undefined1 *)(param_1 + _DAT_112764d38) = 1;
  }
  return;
}



/* Entry: 1071a4128; end: 1071a4173; -[SCStickerPickerMenuView currentSuperCategoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071a4128(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_112764d24) != 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764d1c);
  func_0x00010c1554e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beca390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tabTypeForIndex__112590288,uVar1);
  return param_1;
}



/* Entry: 1071a4174; end: 1071a41e3; -[SCStickerPickerMenuView _tabTypeForIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071a4174(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112764cd4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c254ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1071a41e4; end: 1071a41eb; -[SCStickerPickerMenuView stickerPickerType] */

undefined8 FUN_1071a41e4(void)

{
  return 0;
}



/* Entry: 1071a41ec; end: 1071a42b3; -[SCStickerPickerMenuView openStickerExplicitSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a41ec(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x00010bf60380();
  lVar3 = (long)_DAT_112764d20;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_showExplicitSearch_11266b790);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(uVar1);
    func_0x00010c2375a0();
  }
  else {
    func_0x00010c2375c0(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071a42b4; end: 1071a432b; -[SCStickerPickerMenuView closeSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a42b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112764d20;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf3b380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071a432c; end: 1071a4403; -[SCStickerPickerMenuView performSearchPillSearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a432c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112764d20;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) goto LAB_1071a43ec;
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0f8e60();
  }
  else {
    func_0x00010bf60380(param_1);
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0f8e80();
  }
  _objc_release(param_1);
LAB_1071a43ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a4404; end: 1071a4433; -[SCStickerPickerMenuView explicitSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4404(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764d3c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071a4434; end: 1071a4473; -[SCStickerPickerMenuView lockScroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4434(long param_1,undefined8 param_2)

{
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112764d10),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764cbc),PTR_s_setScrollEnabled__11265b8f0,0);
  return;
}



/* Entry: 1071a4474; end: 1071a44b3; -[SCStickerPickerMenuView unlockScroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4474(long param_1,undefined8 param_2)

{
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112764d10),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764cbc),PTR_s_setScrollEnabled__11265b8f0,1);
  return;
}



/* Entry: 1071a44b4; end: 1071a4513; -[SCStickerPickerMenuView _useRevertedPreviewStickerPickerScrollBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071a44b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + _DAT_112764c1c) != 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764c54);
  func_0x00010c087020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07b060();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1071a4514; end: 1071a45d7; -[SCStickerPickerMenuView stickerPickerCategoryCellScrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4514(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112764d20;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c254720();
    _objc_release(lVar4);
  }
  if ((*(ulong *)(param_1 + _DAT_112764c1c) & 0xfffffffffffffffd) != 1) {
    puVar3 = PTR_PTR_1126cbde8;
    func_0x00010c07d4e0();
    if ((int)puVar3 != 0) {
      func_0x00010c193b00(*(undefined8 *)(param_1 + _DAT_112764ce8));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a45d8; end: 1071a464f; -[SCStickerPickerMenuView stickerPickerCategoryCellDidTapEmptyScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a45d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c193b00(*(undefined8 *)(param_1 + _DAT_112764ce8),param_2,0);
  lVar1 = *(long *)(param_1 + _DAT_112764c20);
  func_0x00010c08fa60();
  if ((lVar1 == 0) && (*(long *)(param_1 + _DAT_112764c1c) == 0)) {
    puVar2 = PTR_PTR_1126cbde8;
    func_0x00010c07d4e0();
    if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be85110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__putSearchUIIntoState__11257ede0,0);
      return;
    }
  }
  return;
}



/* Entry: 1071a4650; end: 1071a46df; -[SCStickerPickerMenuView stickerPickerCategoryCellScrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4650(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010be98c20(param_1);
  lVar3 = (long)_DAT_112764d20;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c254700();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a46e0; end: 1071a476f; -[SCStickerPickerMenuView stickerPickerCategoryCellScrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a46e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112764d20;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2546e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a4770; end: 1071a4783; -[SCStickerPickerMenuView didUpdateVisibleItemsWithStickers:sourceTab:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4770(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764d14),
             PTR_s_didUpdateVisibleItemsWithSticker_1125bd408,param_3,param_4,0);
  return;
}



/* Entry: 1071a4784; end: 1071a482b; -[SCStickerPickerMenuView createCustomStickerButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4784(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + (long)_DAT_112764c1c);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 & 0xfffffffffffffffd) == 1) {
    uVar2 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_tappedCreateStickerFromChatDrawe_1126780d0);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269aa0();
    uVar1 = param_1;
  }
  else {
    func_0x00010bf3dde0(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071a482c; end: 1071a48a7; -[SCStickerPickerMenuView locationButtonTapped] */

void FUN_1071a482c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071a48a8; end: 1071a4923; -[SCStickerPickerMenuView planButtonTapped] */

void FUN_1071a48a8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071a4924; end: 1071a499f; -[SCStickerPickerMenuView pollButtonTapped] */

void FUN_1071a4924(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071a49a0; end: 1071a4a23; -[SCStickerPickerMenuView updateCustomStickerDataToBeDeleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a49a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764c50);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c271a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12e560(uVar2,param_2,uVar1,0);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071a4a24; end: 1071a4ab3; -[SCStickerPickerMenuView _convertStickerLocation:] */

undefined1  [16]
FUN_1071a4a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(param_5);
  _objc_release(param_5);
  func_0x00010bf512a0(param_1,param_2,uVar1,param_4,param_3);
  _objc_release(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1071a4ab4; end: 1071a4af7; -[SCStickerPickerMenuView stickerPickerCategoryFriendmojiAvatarIdChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4ab4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764c20;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec19f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__startStickerSearch__11258e020,*(undefined8 *)(param_1 + lVar2));
    return;
  }
  return;
}



/* Entry: 1071a4af8; end: 1071a4b93; -[SCStickerPickerMenuView avatarPickerRequestedWithBitmojiUsers:targetView:friendmojiPickerScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071a4af8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112764d20;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf130a0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1071a4b94; end: 1071a4c0f; -[SCStickerPickerMenuView friendmojiHintRequestedWithTargetView:friendmojiHintScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071a4b94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112764d20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfb9800();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1071a4c10; end: 1071a4c6f; -[SCStickerPickerMenuView friendmojiAvatarPickerClosedWithFriendmojiType:selectedStickerId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4c10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112764d20;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb96c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071a4c70; end: 1071a4ca3; -[SCStickerPickerMenuView bitmojiCTAStickerButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4c70(long param_1)

{
  param_1 = param_1 + _DAT_112764d20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08b640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071a4ca4; end: 1071a4d7b; -[SCStickerPickerMenuView stickerSearchQuerySuggestionTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4ca4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 != 0) {
    lVar4 = (long)_DAT_112764ce8;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c26b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar2,param_2,uVar1);
    _objc_release(uVar1);
    lVar3 = 0x20;
    if ((int)puVar2 == 0) {
      lVar3 = 0x24;
    }
    *(long *)(param_1 + *(int *)(&DAT_112764c10 + lVar3)) =
         *(long *)(param_1 + *(int *)(&DAT_112764c10 + lVar3)) + 1;
    lVar3 = (long)_DAT_112764c20;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
    func_0x00010bec19e0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a4d7c; end: 1071a4e67; -[SCStickerPickerMenuView stickerPickerCategoryCell:presentStickerMenuForItem:presentationModelProvider:itemViewService:indexPath:superCategoryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4d7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar3 = (long)_DAT_112764d20;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c254a60();
    _objc_release(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071a4e68; end: 1071a4f37; -[SCStickerPickerMenuView stickerPickerCategoryCell:willDisplayCellWithSticker:indexPath:] */

void FUN_1071a4e68(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c262b40(param_3);
    func_0x00010c254ae0(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a4f38; end: 1071a4fbb; -[SCStickerPickerMenuView stickerPickerCategoryCell:didStartLoadingSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4f38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(ulong *)(param_1 + _DAT_112764c1c) & 0xfffffffffffffffd) == 1) {
    uVar1 = param_3;
    func_0x00010c262b40(param_3);
    func_0x000108d12f1c();
    func_0x00010bf7bbe0(*(undefined8 *)(param_1 + _DAT_112764d14),param_2,param_4,uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a4fbc; end: 1071a51cf; -[SCStickerPickerMenuView stickerPickerCategoryCell:didShowSticker:timeToDisplay:indexPath:downloadSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a4fbc(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c262b40(param_4);
    func_0x00010c254a00(uVar1);
    _objc_release(uVar1);
  }
  lVar5 = param_4;
  func_0x00010c262b40();
  func_0x000108d12f1c();
  func_0x00010bf7b960(param_1,*(undefined8 *)(param_2 + (long)_DAT_112764d14));
  if ((lVar5 == 0) && (*(long *)(param_2 + (long)_DAT_112764d24) == 3)) {
    func_0x00010c27dd80(param_5);
    func_0x00010bdf65c0(param_2);
    lVar5 = (long)_DAT_112764d40;
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    func_0x00010c12d3e0(*(undefined8 *)(param_2 + lVar5));
    puVar4 = PTR_PTR_1126bac28;
    uVar3 = param_5;
    func_0x00010c2540c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80(param_5);
    func_0x00010c113fe0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + (long)_DAT_112764c98);
    func_0x00010c0840e0(param_6);
    func_0x00010c0aee60(uVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071a51d0; end: 1071a51ff; -[SCStickerPickerMenuView currentSearchQueryForStickerPickerCategoryCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a51d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764c20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071a5200; end: 1071a528b; -[SCStickerPickerMenuView venuesInfoToDisplayForVenueStickerInCategoryCell:] */

void FUN_1071a5200(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c298220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071a528c; end: 1071a52bb; -[SCStickerPickerMenuView categoryCellDidTapToReloadVenues:] */

void FUN_1071a528c(undefined8 param_1)

{
  func_0x00010c297fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071a52bc; end: 1071a545b; -[SCStickerPickerMenuView didTapVenueSticker:categoryCell:locationSticker:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a52bc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2391a0();
    _objc_release(uVar1);
    lVar6 = param_1 + (long)_DAT_112764cd4;
    _objc_loadWeakRetained();
    func_0x00010c254b00();
    _objc_release(lVar6);
    lVar6 = (long)_DAT_112764d14;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c247d20(param_4);
    func_0x00010bf60380(param_1);
    func_0x00010c254b80();
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112764d18);
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0ae0(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c2547c0(*(undefined8 *)(param_1 + lVar6));
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071a545c; end: 1071a54e7; -[SCStickerPickerMenuView topicsInfoToDisplayForTopicStickerInCategoryCell:] */

void FUN_1071a545c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c275a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071a54e8; end: 1071a54eb; -[SCStickerPickerMenuView bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_1071a54e8(void)

{
  return;
}



/* Entry: 1071a54ec; end: 1071a581f; -[SCStickerPickerMenuView collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a54ec(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  puVar11 = param_4;
  puVar9 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar13 = (long)_DAT_112764cbc;
  if (param_3 == *(undefined8 **)(param_1 + lVar13)) {
    if (((*(ulong *)(param_1 + _DAT_112764c1c) & 0xfffffffffffffffd) == 1) &&
       (lVar10 = (long)_DAT_112764c40, *(double *)(param_1 + lVar10) != -1.0)) {
      puVar1 = PTR_PTR_1126d4ff8;
      _objc_opt_class(PTR_PTR_1126d4ff8);
      puVar2 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar1);
      if (((ulong)puVar2 & 1) != 0) {
        puVar8 = (undefined8 *)0x0;
        func_0x00010c284620(*(undefined8 *)(param_1 + lVar10),param_4);
      }
    }
    puVar1 = PTR_PTR_1126d4ff8;
    _objc_retain(param_4);
    _objc_opt_class(puVar1);
    puVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    puVar2 = param_4;
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = (undefined1 *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(param_4);
    if (puVar2 != (undefined1 *)0x0) {
      func_0x00010c262b40(param_4);
      func_0x000108d12f1c();
      lVar10 = (long)_DAT_112764d14;
      func_0x00010c262b00(*(undefined8 *)(param_1 + lVar10));
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      puVar3 = param_4;
      func_0x00010c2a00a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = &uStack_130;
      puVar11 = auStack_f0;
      puVar9 = (undefined8 *)0x10;
      puVar4 = puVar3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined1 *)0x0) {
        lVar12 = *plStack_120;
        do {
          puVar11 = (undefined1 *)0x0;
          do {
            if (*plStack_120 != lVar12) {
              _objc_enumerationMutation(puVar3);
            }
            func_0x00010bf7b960(0xbff0000000000000,*(undefined8 *)(param_1 + lVar10));
            puVar11 = puVar11 + 1;
          } while (puVar4 != puVar11);
          puVar8 = &uStack_130;
          puVar11 = auStack_f0;
          puVar9 = (undefined8 *)0x10;
          puVar4 = puVar3;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined1 *)0x0);
      }
      _objc_release(puVar3);
    }
    uVar5 = *(ulong *)(param_1 + lVar13);
    func_0x00010c070ea0();
    if ((uVar5 & 1) == 0) {
      puVar8 = param_5;
      puVar11 = param_4;
      func_0x00010bdfd620(param_1);
    }
    puVar3 = param_4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar6 == (undefined1 *)0x1) {
      puVar3 = param_4;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar1 = PTR_PTR_1126d4ef8;
      _objc_opt_class(PTR_PTR_1126d4ef8);
      puVar3 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar1);
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010c190140(puVar6);
        puVar8 = (undefined8 *)0x5;
        func_0x00010c262b00(*(undefined8 *)(param_1 + _DAT_112764d14));
      }
      _objc_release(puVar6);
    }
    puVar1 = PTR_PTR_1126d4ff8;
    _objc_opt_class(PTR_PTR_1126d4ff8);
    puVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010c2a5f80(param_4);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(puVar11);
  _objc_retain(puVar9);
  puVar7 = *(undefined8 **)(param_4 + _DAT_112764cbc);
  if ((puVar8 == puVar7) && (func_0x00010c070ea0(), ((ulong)puVar7 & 1) == 0)) {
    func_0x00010bdfd740(param_4);
  }
  puVar1 = PTR_PTR_1126d4ff8;
  _objc_opt_class(PTR_PTR_1126d4ff8);
  puVar2 = puVar11;
  _objc_opt_isKindOfClass(puVar11,puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010bf75820(puVar11);
  }
  _objc_release(puVar9);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 1071a5820; end: 1071a58cf; -[SCStickerPickerMenuView collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a5820(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + _DAT_112764cbc);
  if ((param_3 == uVar1) && (func_0x00010c070ea0(), (uVar1 & 1) == 0)) {
    func_0x00010bdfd740(param_1);
  }
  puVar2 = PTR_PTR_1126d4ff8;
  _objc_opt_class(PTR_PTR_1126d4ff8);
  uVar1 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf75820(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a58d0; end: 1071a5917; -[SCStickerPickerMenuView numberOfSectionsInCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071a58d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112764cd4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0df480();
  _objc_release(param_1);
  return lVar1;
}


