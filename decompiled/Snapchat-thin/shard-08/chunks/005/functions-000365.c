/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10624ef9c; end: 10624f0b3; -[SCSpotlightRepliesTabsController didTapOnEmoji:withIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624ef9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112743f7c);
  _objc_retain(param_3);
  func_0x00010befbe80(uVar3,param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112743f08);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f43598;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f435b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_58 = param_3;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a20(uVar3,param_2,0x1f,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10624f0b4;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10624f138;
  puStack_90 = &UNK_110842e18;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10624f150;
  puStack_b8 = &UNK_110841f20;
  puStack_b0 = puVar1;
  puStack_88 = puVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_a8,
                      &puStack_d0);
  return;
}



/* Entry: 10624f0b4; end: 10624f137; -[SCSpotlightRepliesTabsController _hideEmojiBarWithKeyboard] */

void FUN_10624f0b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10624f138;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10624f150;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,
                      &puStack_60);
  return;
}



/* Entry: 10624f138; end: 10624f167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624f138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112743f90),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10624f168; end: 10624f1f7; -[SCSpotlightRepliesTabsController _showEmojiBarWithKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624f168(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if ((*(byte *)(param_1 + _DAT_112743fa0) & 1) == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112743f90),param_2,0);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10624f1f8;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  }
  return;
}



/* Entry: 10624f1f8; end: 10624f20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624f1f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112743f90),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10624f210; end: 10624f22f; -[SCSpotlightRepliesTabsController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624f210(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112743fa4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10624f230; end: 10624f243; -[SCSpotlightRepliesTabsController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624f230(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112743fa4,param_3);
  return;
}



/* Entry: 10624f244; end: 10624f253; -[SCSpotlightRepliesTabsController presentingTabType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10624f244(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112743f40);
}



/* Entry: 10624f254; end: 10624f263; -[SCSpotlightRepliesTabsController setPresentingTabType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624f254(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112743f40) = param_3;
  return;
}



/* Entry: 10624f264; end: 10624f4cf; -[SCSpotlightRepliesTabsController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624f264(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112743fa4);
  _objc_storeStrong(param_1 + _DAT_112743f5c,0);
  _objc_storeStrong(param_1 + _DAT_112743f58,0);
  _objc_storeStrong(param_1 + _DAT_112743f98,0);
  _objc_storeStrong(param_1 + _DAT_112743f50,0);
  _objc_storeStrong(param_1 + _DAT_112743f2c,0);
  _objc_storeStrong(param_1 + _DAT_112743ef8,0);
  _objc_storeStrong(param_1 + _DAT_112743f90,0);
  _objc_storeStrong(param_1 + _DAT_112743f4c,0);
  _objc_storeStrong(param_1 + _DAT_112743f48,0);
  _objc_storeStrong(param_1 + _DAT_112743f6c,0);
  _objc_storeStrong(param_1 + _DAT_112743f8c,0);
  _objc_storeStrong(param_1 + _DAT_112743f60,0);
  _objc_storeStrong(param_1 + _DAT_112743f94,0);
  _objc_storeStrong(param_1 + _DAT_112743f78,0);
  _objc_storeStrong(param_1 + _DAT_112743f64,0);
  _objc_storeStrong(param_1 + _DAT_112743f68,0);
  _objc_storeStrong(param_1 + _DAT_112743f04,0);
  _objc_storeStrong(param_1 + _DAT_112743f00,0);
  _objc_storeStrong(param_1 + _DAT_112743f88,0);
  _objc_storeStrong(param_1 + _DAT_112743f44,0);
  _objc_storeStrong(param_1 + _DAT_112743efc,0);
  _objc_storeStrong(param_1 + _DAT_112743f1c,0);
  _objc_storeStrong(param_1 + _DAT_112743f7c,0);
  _objc_storeStrong(param_1 + _DAT_112743f08,0);
  _objc_storeStrong(param_1 + _DAT_112743f3c,0);
  _objc_storeStrong(param_1 + _DAT_112743f38,0);
  _objc_storeStrong(param_1 + _DAT_112743f34,0);
  _objc_storeStrong(param_1 + _DAT_112743f30,0);
  _objc_storeStrong(param_1 + _DAT_112743f28,0);
  _objc_storeStrong(param_1 + _DAT_112743f24,0);
  _objc_storeStrong(param_1 + _DAT_112743f20,0);
  _objc_storeStrong(param_1 + _DAT_112743f10,0);
  _objc_storeStrong(param_1 + _DAT_112743f0c,0);
  _objc_storeStrong(param_1 + _DAT_112743f80,0);
  _objc_storeStrong(param_1 + _DAT_112743f70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743f74,0);
  return;
}



/* Entry: 10624f4d0; end: 10624f5af;  */

void FUN_10624f4d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c91c8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0e1ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c28d600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010befcde0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35460(param_2);
  _objc_release(param_2);
  func_0x00010c0310a0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10624f5b0; end: 10624fd93; -[SCSpotlightRepliesTrayViewController initWithIsCreatorMode:spotlightRepliesRequestSender:spotlightRepliesFetching:snapInteractionInfo:bitmojiSelfieProvider:avatarProvider:webBrowsingScopeExposer:spotlightRepliesViewCountManager:spotlightRepliesUpdateAnnouncer:circumstanceEngine:spotlightRepliesFeatureSettingsManager:userPreferences:repliesActionConfig:repliesLoggingInfo:repliesActionHandler:repliesReactionManager:repliesLogger:valdiRuntimeProvider:mentionsScopeExposer:snapchatterObservableRepository:snapchattersSynchronousDataFetcher:commentPosterThumbnailFetcher:spotlightRepliesDataMutator:storiesConfigProvider:commentsStickerPickerExposer:commentsAttachmentFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10624f5b0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,long param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain();
  puStack_70 = PTR_PTR_1126f0928;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar2);
    func_0x00010c1e14c0(param_17);
    *(char *)((long)puVar2 + (long)_DAT_112743fa8) = (char)param_3;
    uVar3 = param_6;
    func_0x00010c23fc20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_112743fac);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112743fac) = uVar3;
    _objc_release(uVar6);
    uVar3 = param_6;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_112743fb0);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112743fb0) = uVar3;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112743fb4;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_10;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112743fb8;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_14;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112743fbc;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_13;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_112743fc0;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(long *)((long)puVar2 + lVar9) = param_15;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112743fc4;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_16;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112743fc8;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_12;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112743fcc;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_6;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112743fd0;
    _objc_retain(param_28);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_28;
    _objc_release(uVar3);
    uVar3 = param_6;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar10 = (long)_DAT_112743fd4;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined8 *)((long)puVar2 + lVar10) = param_19;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112743fd8;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_17;
    _objc_release(uVar3);
    uVar3 = param_6;
    func_0x00010bf41fc0();
    *(char *)((long)puVar2 + (long)_DAT_112743fdc) = (char)uVar3;
    puVar4 = PTR_PTR_1126c91d0;
    _objc_alloc();
    uVar3 = uVar6;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bde22c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e3e0();
    lVar8 = (long)_DAT_112743fe0;
    uVar7 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined **)((long)puVar2 + lVar8) = puVar4;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar8));
    lVar8 = (long)_DAT_112743fe4;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_9;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    func_0x00010be7f960();
    func_0x00010beef1e0();
    func_0x00010c131900();
    FUN_10623c8ac();
    lVar10 = param_15;
    func_0x00010c10a700();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_15;
    func_0x00010c2621a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3700(uVar3);
    _objc_release(lVar8);
    _objc_release(lVar10);
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + lVar9);
    func_0x00010bf6a840();
    *(undefined1 *)((long)puVar2 + (long)_DAT_112743fe8) = uVar1;
    lVar8 = param_15;
    func_0x00010c10a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 != 0) {
      lVar8 = param_15;
      func_0x00010c10a700(param_15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10a5e0(puVar2);
      _objc_release(lVar8);
    }
    uVar3 = param_12;
    func_0x000108f4b024();
    uVar1 = 0;
    if ((int)uVar3 != 0) {
      func_0x00010c25b720(param_16);
      puVar5 = puVar2;
      func_0x00010beb6620();
      uVar1 = SUB81(puVar5,0);
    }
    *(undefined1 *)((long)puVar2 + (long)_DAT_112743fec) = uVar1;
    lVar8 = (long)_DAT_112743ff0;
    _objc_retain(param_24);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_24;
    _objc_release(uVar3);
    if (param_3 == 0) {
      uVar3 = param_26;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010bf42180();
      *(char *)((long)puVar2 + (long)_DAT_112743ff4) = (char)uVar7;
      _objc_release(uVar3);
    }
    else {
      *(undefined1 *)((long)puVar2 + (long)_DAT_112743ff4) = 0;
    }
    lVar8 = param_15;
    func_0x00010c2621a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112743ff8);
    *(long *)((long)puVar2 + (long)_DAT_112743ff8) = lVar8;
    _objc_release(uVar3);
    _objc_release(uVar6);
  }
  _objc_release(param_28);
  _objc_release(param_27);
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
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 10624fd94; end: 10624fe0f; -[SCSpotlightRepliesTrayViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624fd94(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = *(long *)(param_1 + _DAT_112743fd4);
  if (lVar1 != 0) {
    func_0x00010be7f960(param_1);
    func_0x00010c0a36e0(lVar1);
  }
  puStack_38 = PTR_PTR_1126f0928;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10624fe10; end: 10624febf; -[SCSpotlightRepliesTrayViewController loadView] */

void FUN_10624fe10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c91d8;
  _objc_alloc(PTR_PTR_1126c91d8);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(0x3ff0000000000000);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10624fec0; end: 10624ffef; -[SCSpotlightRepliesTrayViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624fec0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0928;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  func_0x00010beb14e0(param_1);
  lVar5 = (long)_DAT_112743fc0;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010c064300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112743fe0);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c064300(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef1e0(*(undefined8 *)(param_1 + _DAT_112743fc4));
    func_0x00010befaf80(uVar4);
    _objc_release(uVar3);
  }
  func_0x00010be7b540(param_1);
  return;
}



/* Entry: 10624fff0; end: 106250087; -[SCSpotlightRepliesTrayViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624fff0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0928;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  lVar3 = (long)_DAT_112743fc0;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c064300();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + lVar3);
    func_0x00010c22e040();
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  else {
    _objc_release();
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112743fe0);
  func_0x00010beef1e0(*(undefined8 *)(param_1 + _DAT_112743fc4));
  func_0x00010c237f80(uVar4);
  return;
}



/* Entry: 106250088; end: 1062500ef; -[SCSpotlightRepliesTrayViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106250088(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0928;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar1 = (long)_DAT_112743fe8;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x00010c0d6100(*(undefined8 *)(param_1 + _DAT_112743fe0));
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 1062500f0; end: 10625013f; -[SCSpotlightRepliesTrayViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062500f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0928;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c0a8200(*(undefined8 *)(param_1 + _DAT_112743fd4));
  return;
}



/* Entry: 106250140; end: 106250217; -[SCSpotlightRepliesTrayViewController _commentsSnapReplyActionsConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106250140(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112743fcc;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf41fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c23fc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112743fc0;
  func_0x00010bf8fa60(*(undefined8 *)(param_1 + lVar4));
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010bf8fa60();
  if (iVar1 != 0) {
    func_0x0001009703d0(*(undefined8 *)(param_1 + _DAT_112743fc8),0);
  }
  _objc_alloc(PTR_PTR_1126c91e0);
  func_0x00010c00f880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106250218; end: 10625023f; -[SCSpotlightRepliesTrayViewController _presentingCommentTabTypeForLogging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106250218(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112743fe0);
  func_0x00010c10fca0(lVar1);
  return lVar1 != 0;
}



/* Entry: 106250240; end: 106250297; -[SCSpotlightRepliesTrayViewController _viewWillEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106250240(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112743ffc) = 1;
  func_0x00010bf6f360(*(undefined8 *)(param_1 + _DAT_112743fd8));
  param_1 = param_1 + _DAT_112744000;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24bf60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106250298; end: 106250357; -[SCSpotlightRepliesTrayViewController _shouldShowAutoApprovalTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106250298(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + _DAT_112744004) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112743fbc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c24bde0();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uVar3 = *(ulong *)(param_1 + _DAT_112743fb8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c2827c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      return uVar5 < 3;
    }
  }
  return false;
}



/* Entry: 106250358; end: 10625039b; -[SCSpotlightRepliesTrayViewController _dismissAutoApprovalTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106250358(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744004;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf82f40();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10625039c; end: 10625041b; -[SCSpotlightRepliesTrayViewController _resetNewPendingRepliesTooltipIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625039c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_112743fa8) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112743fb4);
    puVar1 = PTR_PTR_1126c0fd8;
    _objc_alloc(PTR_PTR_1126c0fd8);
    func_0x00010c03e3a0();
    func_0x00010c1eae40(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10625041c; end: 1062505eb; -[SCSpotlightRepliesTrayViewController _presentFavByCreatorModalIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625041c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  double in_d3;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + _DAT_112743fb4);
  func_0x00010bf4e4a0(lVar1,param_2,*(undefined8 *)(param_1 + _DAT_112743fac));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  _objc_release(lVar1);
  if ((lVar2 != 0) && (*(char *)(param_1 + _DAT_112743fdc) == '\x01')) {
    uVar3 = *(ulong *)(param_1 + _DAT_112743fbc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfde180();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(puVar5);
      lVar6 = 8;
      if (667.0 < in_d3) {
        lVar6 = 0;
      }
      uVar7 = *(undefined8 *)(&UNK_10ddda440 + lVar6);
      puVar5 = PTR_PTR_1126b5bb8;
      _objc_alloc();
      func_0x00010c038ee0(uVar7);
      lVar6 = (long)_DAT_112744008;
      uVar7 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar5;
      _objc_release(uVar7);
      puVar5 = PTR_PTR_1126c91e8;
      _objc_alloc(PTR_PTR_1126c91e8);
      func_0x00010bfffea0();
      func_0x00010c18b5e0();
      func_0x00010bf0c980(*(undefined8 *)(param_1 + lVar6),param_2,puVar5);
      _objc_release(puVar5);
    }
  }
  return;
}



/* Entry: 1062505ec; end: 1062505f3;  */

void FUN_1062505ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didDismissFavByCreatorModal_11255cec8);
  return;
}



/* Entry: 1062505f4; end: 10625064f; -[SCSpotlightRepliesTrayViewController _didDismissFavByCreatorModal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062505f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743fbc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2899a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bfde550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112743fd4),
             PTR_s_hasViewedFavoritedByCreatorModal_1125d5310);
  return;
}



/* Entry: 106250650; end: 106250663; -[SCSpotlightRepliesTrayViewController modalDidTapDismissButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106250650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744008),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106250664; end: 1062506d7; -[SCSpotlightRepliesTrayViewController _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106250664(long param_1)

{
  func_0x00010beabc00();
  func_0x00010beb03c0(param_1);
  func_0x00010bead8e0(param_1);
  func_0x00010beaf640(param_1);
  func_0x00010beabac0(param_1);
  func_0x00010beb0560(param_1);
  func_0x00010be93540(param_1);
  if (*(char *)(param_1 + _DAT_112743fec) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bea99f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpShareIcon_112588020);
    return;
  }
  return;
}



/* Entry: 1062506d8; end: 106250ab7; -[SCSpotlightRepliesTrayViewController _setupContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062506d8(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  long lStack_260;
  double dStack_250;
  double dStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c91d8;
  _objc_alloc_init();
  puVar28 = (undefined *)(long)_DAT_11274400c;
  uVar23 = *(undefined8 *)(param_5 + (long)puVar28);
  *(undefined **)(param_5 + (long)puVar28) = puVar1;
  _objc_release(uVar23);
  puVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_5 + (long)puVar28));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  func_0x00010bf6a8c0(PTR_PTR_1126b6000);
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar23 = *(undefined8 *)(param_5 + (long)puVar28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_5;
  uStack_b0 = uVar23;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_5 + (long)puVar28);
  uStack_c0 = uVar23;
  uStack_90 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_5;
  uStack_d0 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(param_5 + (long)puVar28);
  uStack_88 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar27);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c0);
  _objc_release(puStack_b8);
  _objc_release(puStack_a8);
  _objc_release(uStack_b0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (param_5[_DAT_112743fa8] == '\x01') {
    param_4 = param_1 * param_4 + -23.0;
    puVar5 = *(undefined **)(param_5 + (long)puVar28);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    param_5 = puVar5;
    func_0x00010bf49420(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = param_5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
  }
  else {
    puVar5 = *(undefined **)(param_5 + (long)puVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar27;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar28);
    _objc_release(puVar27);
  }
  _objc_release(puVar4);
  _objc_release(param_5);
  puVar6 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puStack_100 = puVar1;
  pcStack_d8 = FUN_106250ab8;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar25 = (undefined *)(long)_DAT_112743ff8;
  lVar7 = *(long *)(puVar6 + (long)puVar25);
  uStack_130 = uVar2;
  puStack_128 = puVar9;
  puStack_120 = puVar8;
  puStack_118 = puVar3;
  puStack_110 = puVar28;
  puStack_108 = puVar27;
  puStack_f8 = puVar4;
  puStack_f0 = puVar5;
  puStack_e8 = param_5;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010c08fa60();
  puVar5 = (undefined *)0x0;
  if (lVar7 != 0) {
    puVar1 = PTR_PTR_1126c91f0;
    _objc_alloc();
    func_0x00010c04f640();
    puVar27 = (undefined *)(long)_DAT_112744010;
    uVar23 = *(undefined8 *)(puVar6 + (long)puVar27);
    *(undefined **)(puVar6 + (long)puVar27) = puVar1;
    _objc_release(uVar23);
    func_0x00010c219b60(*(undefined8 *)(puVar6 + (long)puVar27));
    lVar7 = (long)_DAT_11274400c;
    func_0x00010befbb60(*(undefined8 *)(puVar6 + lVar7));
    puStack_180 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(puVar6 + (long)puVar27);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(puVar6 + lVar7);
    uStack_160 = uVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = *(undefined **)(puVar6 + (long)puVar27);
    uStack_170 = uVar2;
    uStack_158 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = *(undefined **)(puVar6 + lVar7);
    puStack_178 = puVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(puVar6 + (long)puVar27);
    puStack_150 = puVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar6 + lVar7);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(puVar6 + (long)puVar27);
    puStack_148 = puVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_140 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_180);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar28);
    _objc_release(puStack_178);
    _objc_release(uStack_170);
    _objc_release(uStack_168);
    _objc_release(uStack_160);
    puVar25 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(puVar6 + (long)puVar27));
    func_0x00010c21e900(*(undefined8 *)(puVar6 + (long)puVar27));
    puVar5 = puVar25;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_106250d64;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1c8 = *(undefined8 *)(puVar5 + _DAT_112743ff8);
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e47198;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e47138;
  ppuStack_1c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c52a8;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1b0 = puVar1;
  puStack_1a8 = puVar4;
  puStack_1a0 = puVar25;
  puStack_198 = puVar6;
  ppuStack_190 = &puStack_e0;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(puVar5 + _DAT_112743fd8));
  _objc_release(puVar1);
  puVar4 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  puStack_210 = &DAT_112743fd8;
  pcStack_1e8 = FUN_106250e5c;
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar30 = (long)_DAT_11274400c;
  uVar26 = *(undefined8 *)(puVar4 + lVar30);
  lVar29 = (long)_DAT_112743fe0;
  uVar23 = *(undefined8 *)(puVar4 + lVar29);
  dStack_250 = param_1;
  dStack_248 = param_4;
  uStack_240 = uVar2;
  puStack_238 = puVar9;
  puStack_230 = puVar8;
  puStack_228 = puVar3;
  puStack_220 = puVar28;
  puStack_218 = puVar27;
  puStack_208 = puVar1;
  puStack_200 = puVar10;
  puStack_1f8 = puVar5;
  ppuStack_1f0 = &ppuStack_190;
  func_0x00010c268060(uVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar26);
  _objc_release(uVar23);
  uVar23 = *(undefined8 *)(puVar4 + lVar29);
  func_0x00010c268060(uVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar7 = (long)_DAT_112743fa8;
  uVar23 = 0x4043000000000000;
  if (puVar4[lVar7] == '\0') {
    uVar23 = 0;
  }
  puVar8 = *(undefined **)(puVar4 + lVar29);
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112744014;
  uVar11 = *(undefined8 *)(puVar4 + lVar24);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010bf493c0(uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar4 + lVar29);
  puStack_280 = puVar5;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar4 + lVar30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = *(undefined ***)(puVar4 + lVar29);
  uStack_278 = uVar2;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar4 + lVar30);
  func_0x00010c08de00(uVar16);
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = ppuVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar4 + lVar29);
  ppuStack_270 = ppuVar22;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(puVar4 + lVar30);
  func_0x00010c2793a0(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_268 = uVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar27);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar26);
  _objc_release(uVar17);
  _objc_release(ppuVar22);
  _objc_release(uVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(uVar2);
  _objc_release(uVar13);
  _objc_release(uVar23);
  _objc_release(uVar12);
  _objc_release(puVar5);
  _objc_release(uVar11);
  _objc_release(puVar9);
  _objc_release();
  if (puVar4[lVar7] == '\x01') {
    uVar2 = *(undefined8 *)(puVar4 + lVar30);
    uVar23 = *(undefined8 *)(puVar4 + lVar29);
    func_0x00010c267660(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar2);
    _objc_release(uVar23);
    uVar2 = *(undefined8 *)(puVar4 + lVar30);
    uVar23 = *(undefined8 *)(puVar4 + lVar29);
    func_0x00010c268060(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300(uVar2);
    _objc_release(uVar23);
    uVar23 = *(undefined8 *)(puVar4 + lVar29);
    func_0x00010c267660(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar23);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)(puVar4 + lVar29);
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar13;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(puVar4 + lVar30);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar4 + lVar29);
    uStack_2a0 = uVar2;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar17;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(puVar4 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar4 + lVar29);
    uStack_298 = uVar19;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar20;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar4 + lVar24);
    func_0x00010bf1ff80(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = *(undefined ***)(puVar4 + lVar29);
    uStack_290 = uVar12;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar22;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar15;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_288 = ppuVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar8);
    _objc_release(ppuVar14);
    _objc_release(ppuVar15);
    _objc_release(ppuVar22);
    _objc_release(uVar12);
    _objc_release(uVar21);
    _objc_release(uVar11);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar26);
    _objc_release(uVar17);
    _objc_release(uVar2);
    _objc_release(uVar16);
    _objc_release(uVar23);
    _objc_release(uVar13);
    puVar8 = puVar4;
    func_0x00010beb5b80();
    if ((int)puVar8 != 0) {
      puVar1 = PTR_PTR_1126b09c0;
      _objc_alloc();
      puVar8 = puVar1;
      func_0x000106261fc8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051640();
      lVar7 = (long)_DAT_112744004;
      uVar23 = *(undefined8 *)(puVar4 + lVar7);
      *(undefined **)(puVar4 + lVar7) = puVar1;
      _objc_release(uVar23);
      _objc_release(puVar8);
      func_0x00010c219b60(*(undefined8 *)(puVar4 + lVar7));
      func_0x00010c213040(*(undefined8 *)(puVar4 + lVar7));
      func_0x00010c18b5e0(*(undefined8 *)(puVar4 + lVar7));
      puVar1 = puVar4;
      func_0x00010c29bf00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar11 = *(undefined8 *)(puVar4 + lVar7);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(puVar4 + lVar29);
      func_0x00010c267660(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar12;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(puVar4 + lVar7);
      uStack_2b0 = uVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(puVar4 + lVar29);
      func_0x00010c267660(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar26 = uVar16;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar13;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_2a8 = uVar19;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar8);
      _objc_release(uVar19);
      _objc_release(uVar26);
      _objc_release(uVar16);
      _objc_release(uVar13);
      _objc_release(uVar2);
      _objc_release(uVar23);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_initWeak(auStack_2b8,puVar4);
      puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2d8 = 0xc2000000;
      pcStack_2d0 = FUN_10625173c;
      puStack_2c8 = &UNK_1108434b0;
      ppuVar22 = &puStack_2e0;
      _objc_copyWeak(auStack_2c0,auStack_2b8);
      func_0x000100c749e0(0x40a00000,"APPSTORE",&puStack_2e0);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar7 = (long)_DAT_112743fb8;
      uVar2 = *(undefined8 *)(puVar4 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      func_0x00010c0df840(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar26 = *(undefined8 *)(puVar4 + lVar7);
      func_0x00010c269d40(uVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(uVar26);
      _objc_release(puVar1);
      _objc_release(uVar23);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_2c0);
      puVar8 = auStack_2b8;
      _objc_destroyWeak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_260) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar22 + 4);
  _objc_destroyWeak(auStack_2b8);
  __Unwind_Resume(puVar8);
  puVar8 = puVar8 + 0x20;
  _objc_loadWeakRetained(puVar8);
  func_0x00010be02600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 106250ab8; end: 106250d63; -[SCSpotlightRepliesTrayViewController _setupSuggestedSearchView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106250ab8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112743ff8);
  func_0x00010c08fa60();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c91f0;
    _objc_alloc();
    func_0x00010c04f640();
    lVar25 = (long)_DAT_112744010;
    uVar22 = *(undefined8 *)(param_1 + lVar25);
    *(undefined **)(param_1 + lVar25) = puVar2;
    _objc_release(uVar22);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25));
    lVar1 = (long)_DAT_11274400c;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar1));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar25);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar25);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar20);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar24);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar22);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar25));
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar25));
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(puVar2 + _DAT_112743fd8));
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
    return;
  }
  ___stack_chk_fail();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = (long)_DAT_11274400c;
  uVar24 = *(undefined8 *)(puVar11 + lVar25);
  lVar21 = (long)_DAT_112743fe0;
  uVar22 = *(undefined8 *)(puVar11 + lVar21);
  func_0x00010c268060(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar24);
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(puVar11 + lVar21);
  func_0x00010c268060(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar22);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = (long)_DAT_112743fa8;
  uVar22 = 0x4043000000000000;
  if (puVar11[lVar1] == '\0') {
    uVar22 = 0;
  }
  puVar12 = *(undefined **)(puVar11 + lVar21);
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112744014;
  uVar3 = *(undefined8 *)(puVar11 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493c0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar11 + lVar21);
  puStack_1b0 = puVar14;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar11 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = *(undefined ***)(puVar11 + lVar21);
  uStack_1a8 = uVar24;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar11 + lVar25);
  func_0x00010c08de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar11 + lVar21);
  ppuStack_1a0 = ppuVar19;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar11 + lVar25);
  func_0x00010c2793a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_198 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar17);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar20);
  _objc_release(uVar7);
  _objc_release(ppuVar19);
  _objc_release(uVar6);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(uVar24);
  _objc_release(uVar5);
  _objc_release(uVar22);
  _objc_release(uVar4);
  _objc_release(puVar14);
  _objc_release(uVar3);
  _objc_release(puVar13);
  _objc_release();
  if (puVar11[lVar1] == '\x01') {
    uVar24 = *(undefined8 *)(puVar11 + lVar25);
    uVar22 = *(undefined8 *)(puVar11 + lVar21);
    func_0x00010c267660(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar24);
    _objc_release(uVar22);
    uVar24 = *(undefined8 *)(puVar11 + lVar25);
    uVar22 = *(undefined8 *)(puVar11 + lVar21);
    func_0x00010c268060(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300(uVar24);
    _objc_release(uVar22);
    uVar22 = *(undefined8 *)(puVar11 + lVar21);
    func_0x00010c267660(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar22);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(puVar11 + lVar21);
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar11 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar11 + lVar21);
    uStack_1d0 = uVar24;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar11 + lVar25);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar11 + lVar21);
    uStack_1c8 = uVar10;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(puVar11 + lVar23);
    func_0x00010bf1ff80(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = *(undefined ***)(puVar11 + lVar21);
    uStack_1c0 = uVar4;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar19;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar16;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_1b8 = ppuVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar12);
    _objc_release(ppuVar15);
    _objc_release(ppuVar16);
    _objc_release(ppuVar19);
    _objc_release(uVar4);
    _objc_release(uVar18);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar20);
    _objc_release(uVar7);
    _objc_release(uVar24);
    _objc_release(uVar6);
    _objc_release(uVar22);
    _objc_release(uVar5);
    puVar12 = puVar11;
    func_0x00010beb5b80();
    if ((int)puVar12 != 0) {
      puVar2 = PTR_PTR_1126b09c0;
      _objc_alloc();
      puVar12 = puVar2;
      func_0x000106261fc8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051640();
      lVar1 = (long)_DAT_112744004;
      uVar22 = *(undefined8 *)(puVar11 + lVar1);
      *(undefined **)(puVar11 + lVar1) = puVar2;
      _objc_release(uVar22);
      _objc_release(puVar12);
      func_0x00010c219b60(*(undefined8 *)(puVar11 + lVar1));
      func_0x00010c213040(*(undefined8 *)(puVar11 + lVar1));
      func_0x00010c18b5e0(*(undefined8 *)(puVar11 + lVar1));
      puVar2 = puVar11;
      func_0x00010c29bf00(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(puVar11 + lVar1);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(puVar11 + lVar21);
      func_0x00010c267660(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar4;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(puVar11 + lVar1);
      uStack_1e0 = uVar24;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(puVar11 + lVar21);
      func_0x00010c267660(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar6;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_1d8 = uVar10;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar12);
      _objc_release(uVar10);
      _objc_release(uVar20);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar24);
      _objc_release(uVar22);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_initWeak(auStack_1e8,puVar11);
      puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_208 = 0xc2000000;
      pcStack_200 = FUN_10625173c;
      puStack_1f8 = &UNK_1108434b0;
      ppuVar19 = &puStack_210;
      _objc_copyWeak(auStack_1f0,auStack_1e8);
      func_0x000100c749e0(0x40a00000,"APPSTORE",&puStack_210);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar1 = (long)_DAT_112743fb8;
      uVar24 = *(undefined8 *)(puVar11 + lVar1);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar24;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      func_0x00010c0df840(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(puVar11 + lVar1);
      func_0x00010c269d40(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(uVar20);
      _objc_release(puVar2);
      _objc_release(uVar22);
      _objc_release(uVar24);
      _objc_destroyWeak(auStack_1f0);
      puVar12 = auStack_1e8;
      _objc_destroyWeak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar19 + 4);
  _objc_destroyWeak(auStack_1e8);
  __Unwind_Resume(puVar12);
  puVar12 = puVar12 + 0x20;
  _objc_loadWeakRetained(puVar12);
  func_0x00010be02600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 106250d64; end: 106250e5b; -[SCSpotlightRepliesTrayViewController _didTapSuggestedSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106250d64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + _DAT_112743ff8);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e47198;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e47138;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c52a8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743fd8));
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = (long)_DAT_11274400c;
  uVar23 = *(undefined8 *)(puVar1 + lVar25);
  lVar24 = (long)_DAT_112743fe0;
  uVar3 = *(undefined8 *)(puVar1 + lVar24);
  func_0x00010c268060(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar23);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar1 + lVar24);
  func_0x00010c268060(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar21 = (long)_DAT_112743fa8;
  uVar3 = 0x4043000000000000;
  if (puVar1[lVar21] == '\0') {
    uVar3 = 0;
  }
  puVar4 = *(undefined **)(puVar1 + lVar24);
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112744014;
  uVar6 = *(undefined8 *)(puVar1 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar1 + lVar24);
  puStack_100 = puVar7;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar1 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = *(undefined ***)(puVar1 + lVar24);
  uStack_f8 = uVar23;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar1 + lVar25);
  func_0x00010c08de00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar1 + lVar24);
  ppuStack_f0 = ppuVar19;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar1 + lVar25);
  func_0x00010c2793a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar20);
  _objc_release(uVar13);
  _objc_release(ppuVar19);
  _objc_release(uVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(uVar23);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release();
  if (puVar1[lVar21] == '\x01') {
    uVar23 = *(undefined8 *)(puVar1 + lVar25);
    uVar3 = *(undefined8 *)(puVar1 + lVar24);
    func_0x00010c267660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar23);
    _objc_release(uVar3);
    uVar23 = *(undefined8 *)(puVar1 + lVar25);
    uVar3 = *(undefined8 *)(puVar1 + lVar24);
    func_0x00010c268060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300(uVar23);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(puVar1 + lVar24);
    func_0x00010c267660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)(puVar1 + lVar24);
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar1 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(puVar1 + lVar24);
    uStack_120 = uVar23;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar1 + lVar25);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar1 + lVar24);
    uStack_118 = uVar15;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(puVar1 + lVar22);
    func_0x00010bf1ff80(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = *(undefined ***)(puVar1 + lVar24);
    uStack_110 = uVar8;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar19;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar11;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_108 = ppuVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    _objc_release(ppuVar10);
    _objc_release(ppuVar11);
    _objc_release(ppuVar19);
    _objc_release(uVar8);
    _objc_release(uVar18);
    _objc_release(uVar6);
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar20);
    _objc_release(uVar13);
    _objc_release(uVar23);
    _objc_release(uVar12);
    _objc_release(uVar3);
    _objc_release(uVar9);
    puVar4 = puVar1;
    func_0x00010beb5b80();
    if ((int)puVar4 != 0) {
      puVar2 = PTR_PTR_1126b09c0;
      _objc_alloc();
      puVar4 = puVar2;
      func_0x000106261fc8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051640();
      lVar21 = (long)_DAT_112744004;
      uVar3 = *(undefined8 *)(puVar1 + lVar21);
      *(undefined **)(puVar1 + lVar21) = puVar2;
      _objc_release(uVar3);
      _objc_release(puVar4);
      func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar21));
      func_0x00010c213040(*(undefined8 *)(puVar1 + lVar21));
      func_0x00010c18b5e0(*(undefined8 *)(puVar1 + lVar21));
      puVar2 = puVar1;
      func_0x00010c29bf00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar6 = *(undefined8 *)(puVar1 + lVar21);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(puVar1 + lVar24);
      func_0x00010c267660(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(puVar1 + lVar21);
      uStack_130 = uVar23;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(puVar1 + lVar24);
      func_0x00010c267660(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar12;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_128 = uVar15;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar4);
      _objc_release(uVar15);
      _objc_release(uVar20);
      _objc_release(uVar12);
      _objc_release(uVar9);
      _objc_release(uVar23);
      _objc_release(uVar3);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_initWeak(auStack_138,puVar1);
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_10625173c;
      puStack_148 = &UNK_1108434b0;
      ppuVar19 = &puStack_160;
      _objc_copyWeak(auStack_140,auStack_138);
      func_0x000100c749e0(0x40a00000,"APPSTORE",&puStack_160);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar21 = (long)_DAT_112743fb8;
      uVar23 = *(undefined8 *)(puVar1 + lVar21);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar23;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      func_0x00010c0df840(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(puVar1 + lVar21);
      func_0x00010c269d40(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(uVar20);
      _objc_release(puVar2);
      _objc_release(uVar3);
      _objc_release(uVar23);
      _objc_destroyWeak(auStack_140);
      puVar4 = auStack_138;
      _objc_destroyWeak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar19 + 4);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume(puVar4);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010be02600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106250e5c; end: 10625173b; -[SCSpotlightRepliesTrayViewController _setupTabView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106250e5c(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = (long)_DAT_11274400c;
  uVar22 = *(undefined8 *)(param_1 + lVar24);
  lVar23 = (long)_DAT_112743fe0;
  uVar1 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c268060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar22);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c268060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar1);
  puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar20 = (long)_DAT_112743fa8;
  uVar1 = 0x4043000000000000;
  if (param_1[lVar20] == '\0') {
    uVar1 = 0;
  }
  puVar2 = *(undefined1 **)(param_1 + lVar23);
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112744014;
  uVar4 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar23);
  puStack_a0 = puVar5;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = *(undefined ***)(param_1 + lVar23);
  uStack_98 = uVar22;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c08de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar23);
  ppuStack_90 = ppuVar17;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c2793a0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar18);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar19);
  _objc_release(uVar11);
  _objc_release(ppuVar17);
  _objc_release(uVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(uVar22);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release();
  if (param_1[lVar20] == '\x01') {
    uVar22 = *(undefined8 *)(param_1 + lVar24);
    uVar1 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c267660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar22);
    _objc_release(uVar1);
    uVar22 = *(undefined8 *)(param_1 + lVar24);
    uVar1 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c268060(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300(uVar22);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c267660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar1);
    puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar23);
    uStack_c0 = uVar22;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar23);
    uStack_b8 = uVar13;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar15;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010bf1ff80(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = *(undefined ***)(param_1 + lVar23);
    uStack_b0 = uVar6;
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar17;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar9;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_a8 = ppuVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar18);
    _objc_release(puVar14);
    _objc_release(ppuVar8);
    _objc_release(ppuVar9);
    _objc_release(ppuVar17);
    _objc_release(uVar6);
    _objc_release(uVar16);
    _objc_release(uVar4);
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar19);
    _objc_release(uVar11);
    _objc_release(uVar22);
    _objc_release(uVar10);
    _objc_release(uVar1);
    _objc_release(uVar7);
    puVar2 = param_1;
    func_0x00010beb5b80();
    if ((int)puVar2 != 0) {
      puVar18 = PTR_PTR_1126b09c0;
      _objc_alloc();
      puVar14 = puVar18;
      func_0x000106261fc8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051640();
      lVar20 = (long)_DAT_112744004;
      uVar1 = *(undefined8 *)(param_1 + lVar20);
      *(undefined **)(param_1 + lVar20) = puVar18;
      _objc_release(uVar1);
      _objc_release(puVar14);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
      func_0x00010c213040(*(undefined8 *)(param_1 + lVar20));
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar20));
      puVar2 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(puVar2);
      puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c267660(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar20);
      uStack_d0 = uVar22;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c267660(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar10;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_c8 = uVar13;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar18);
      _objc_release(puVar14);
      _objc_release(uVar13);
      _objc_release(uVar19);
      _objc_release(uVar10);
      _objc_release(uVar7);
      _objc_release(uVar22);
      _objc_release(uVar1);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_initWeak(auStack_d8,param_1);
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_10625173c;
      puStack_e8 = &UNK_1108434b0;
      ppuVar17 = &puStack_100;
      _objc_copyWeak(auStack_e0,auStack_d8);
      func_0x000100c749e0(0x40a00000,"APPSTORE",&puStack_100);
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar20 = (long)_DAT_112743fb8;
      uVar22 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar22;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      func_0x00010c0df840(puVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c269d40(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(uVar19);
      _objc_release(puVar18);
      _objc_release(uVar1);
      _objc_release(uVar22);
      _objc_destroyWeak(auStack_e0);
      puVar2 = auStack_d8;
      _objc_destroyWeak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar17 + 4);
  _objc_destroyWeak(auStack_d8);
  __Unwind_Resume(puVar2);
  puVar2 = puVar2 + 0x20;
  _objc_loadWeakRetained(puVar2);
  func_0x00010be02600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10625173c; end: 106251767;  */

void FUN_10625173c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106251768; end: 1062519af; -[SCSpotlightRepliesTrayViewController _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106251768(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + _DAT_112744010);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + _DAT_11274400c);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar17 = 0x402c000000000000;
  if (*(char *)(param_1 + _DAT_112743ff4) == '\0') {
    uVar17 = 0x4010000000000000;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_98 = puVar1;
  _objc_alloc();
  lVar16 = (long)_DAT_112744014;
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  uStack_90 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11274400c;
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(uVar17,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  uStack_88 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar8;
  func_0x00010bf493c0(0xc010000000000000,uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar17);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar13 = puVar2;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar2);
  _objc_release(puVar2);
  puVar10 = puStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar10;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_1062519b0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112744018;
  uStack_100 = uVar17;
  uStack_f8 = uVar8;
  uStack_f0 = uVar7;
  uStack_e8 = uVar6;
  puStack_e0 = puVar2;
  uStack_d8 = uVar5;
  uStack_d0 = uVar9;
  uStack_c8 = uVar4;
  uStack_c0 = uVar3;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar10 + lVar14) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uVar17 = *(undefined8 *)(puVar10 + lVar14);
    *(undefined **)(puVar10 + lVar14) = puVar1;
    _objc_release(uVar17);
    func_0x00010c219b60(*(undefined8 *)(puVar10 + lVar14),param_2,0);
    func_0x00010c182220(*(undefined8 *)(puVar10 + lVar14),param_2,1);
    puVar1 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x29,0xce);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(puVar10 + lVar14),param_2,puVar1);
    _objc_release(puVar1);
    lVar15 = (long)_DAT_11274400c;
    lVar16 = (long)_DAT_112744014;
    func_0x00010c066f80(*(undefined8 *)(puVar10 + lVar15),param_2,*(undefined8 *)(puVar10 + lVar14),
                        *(undefined8 *)(puVar10 + lVar16));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(puVar10 + lVar14);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar10 + lVar15);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar5;
    func_0x00010bf493c0(0xc030000000000000,uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar10 + lVar14);
    uStack_128 = uVar17;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar10 + lVar14);
    uStack_120 = uVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar10 + lVar14);
    uStack_118 = uVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar10 + lVar16);
    func_0x00010bf348e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010bf493a0(uVar11,param_2,uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_110 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_128,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar17);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010c21e900(*(undefined8 *)(puVar10 + lVar14),param_2,1);
    uVar17 = *(undefined8 *)(puVar10 + lVar14);
    puVar10 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    puVar13 = puVar10;
    func_0x00010bef9040(uVar17,param_2,puVar10);
    _objc_release(puVar10);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar10;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(puVar13 != (undefined *)0xb);
}



/* Entry: 1062519b0; end: 106251c7b; -[SCSpotlightRepliesTrayViewController _setUpShareIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1062519b0(undefined *param_1,undefined8 param_2,undefined *param_3)

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
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112744018;
  if (*(long *)(param_1 + lVar15) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uVar12 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar1;
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar15),param_2,1);
    puVar1 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x29,0xce);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
    _objc_release(puVar1);
    lVar14 = (long)_DAT_11274400c;
    lVar13 = (long)_DAT_112744014;
    func_0x00010c066f80(*(undefined8 *)(param_1 + lVar14),param_2,*(undefined8 *)(param_1 + lVar15),
                        *(undefined8 *)(param_1 + lVar13));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar2;
    func_0x00010bf493c0(0xc030000000000000,uVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar15);
    uStack_88 = uVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar15);
    uStack_80 = uVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar15);
    uStack_78 = uVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010bf348e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0(uVar8,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar11);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar15),param_2,1);
    uVar12 = *(undefined8 *)(param_1 + lVar15);
    param_1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    param_3 = param_1;
    func_0x00010bef9040(uVar12,param_2,param_1);
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(param_3 != (undefined *)0xb);
}



/* Entry: 106251c7c; end: 106251c87; -[SCSpotlightRepliesTrayViewController _shouldShowShareIconWithStoryType:] */

bool FUN_106251c7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0xb;
}



/* Entry: 106251c88; end: 106251ce7; -[SCSpotlightRepliesTrayViewController _didTapShare] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106251c88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743fd8),param_2,param_1,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106251ce8; end: 106251e77; -[SCSpotlightRepliesTrayViewController _setupRepliesTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106251ce8(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112744014;
  if (*(long *)(param_2 + lVar4) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  func_0x00010c013de0(0x4020000000000000,0,param_1 + -4.0 + -4.0,0x4040000000000000);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar4));
  func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar4));
  func_0x00010c1cfce0(*(undefined8 *)(param_2 + lVar4));
  func_0x00010c213040(*(undefined8 *)(param_2 + lVar4));
  func_0x00010c21ad00(*(undefined8 *)(param_2 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_2 + lVar4));
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x000106261c98();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar3);
  _objc_release(puVar1);
  func_0x00010c21e900(*(undefined8 *)(param_2 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_11274400c),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_2 + lVar4));
  return;
}



/* Entry: 106251e78; end: 106252373; -[SCSpotlightRepliesTrayViewController _setupLegalTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106251e78(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b0ac8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar19 = (long)_DAT_11274401c;
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar2;
  _objc_release(uVar16);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar19));
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar19));
  lVar18 = (long)_DAT_112743fc0;
  lVar3 = *(long *)(param_1 + lVar18);
  func_0x00010bf613c0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar3;
  func_0x00010c08fa60();
  _objc_release();
  if (lVar17 == 0) {
    func_0x000106261f98();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar19);
    lVar17 = lVar3;
    func_0x000106261c08();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = *(long *)(param_1 + lVar18);
    func_0x00010bf613c0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar19);
    lVar17 = lVar3;
    func_0x000106261c08();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212fe0(uVar16);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lVar17);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar19));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar19));
  _objc_release(puVar2);
  dVar21 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,dVar21,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar19));
  func_0x00010c193a00(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar19));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bde80(*(undefined8 *)(param_1 + lVar19));
  _objc_release(puVar4);
  _objc_release(puVar2);
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010bf493c0(0xc043000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493c0(0x4046800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  dVar20 = -45.0;
  uVar11 = uVar10;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar11);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(uVar5);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return lVar3;
  }
  ___stack_chk_fail();
  _objc_retain(uVar14);
  func_0x00010c161020(puVar13);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_retain(uVar14);
  _objc_opt_class(puVar2);
  uVar12 = uVar14;
  _objc_opt_isKindOfClass(uVar14,puVar2);
  uVar1 = uVar14;
  if ((uVar12 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar14);
  if (uVar1 != 0) {
    uVar12 = uVar14;
    func_0x00010c29bf00(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(uVar14);
    _objc_release(uVar12);
    if (ABS(dVar21) < ABS(dVar20)) {
      lVar17 = 0;
      goto LAB_106252434;
    }
  }
  lVar17 = 1;
LAB_106252434:
  _objc_release(uVar1);
  _objc_release(uVar14);
  return lVar17;
}



/* Entry: 106252374; end: 10625245b; -[SCSpotlightRepliesTrayViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8
FUN_106252374(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_6);
  func_0x00010c161020(param_5);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_retain(param_6);
  _objc_opt_class(puVar2);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_6);
  if (uVar1 != 0) {
    uVar3 = param_6;
    func_0x00010c29bf00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_6);
    _objc_release(uVar3);
    if (ABS(param_2) < ABS(param_1)) {
      uVar4 = 0;
      goto LAB_106252434;
    }
  }
  uVar4 = 1;
LAB_106252434:
  _objc_release(uVar1);
  _objc_release(param_6);
  return uVar4;
}



/* Entry: 10625245c; end: 10625246b; -[SCSpotlightRepliesTrayViewController scrollViewForTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625245c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf603d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112743fe0),PTR_s_currentTabScrollView_1125b5a98);
  return;
}



/* Entry: 10625246c; end: 10625246f; -[SCSpotlightRepliesTrayViewController actionHandlerPresentingViewController] */

void FUN_10625246c(void)

{
  return;
}



/* Entry: 106252470; end: 10625247f; -[SCSpotlightRepliesTrayViewController fetchDataWithApprovalState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106252470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa6310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112743fe0),PTR_s_fetchDataWithApprovalState__1125c7268);
  return;
}



/* Entry: 106252480; end: 106252493; -[SCSpotlightRepliesTrayViewController showLegalTextAboveRepliesTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106252480(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274401c),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 106252494; end: 1062524d3; -[SCSpotlightRepliesTrayViewController textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106252494(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000108065c5c(param_4,param_1,1,*(undefined8 *)(param_1 + _DAT_112743fe4),param_1,0x13,0);
  return 0;
}



/* Entry: 1062524d4; end: 10625252b; -[SCSpotlightRepliesTrayViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062524d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112743fe4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10625252c; end: 10625252f; -[SCSpotlightRepliesTrayViewController tooltipDidDismiss:] */

void FUN_10625252c(void)

{
  return;
}



/* Entry: 106252530; end: 106252597; -[SCSpotlightRepliesTrayViewController tooltipTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106252530(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743fd8),param_2,param_1,puVar1,0);
  func_0x00010be02600(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106252598; end: 10625268b; -[SCSpotlightRepliesTrayViewController prependComments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106252598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e47098;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010bf72080(puVar1,param_2,&uStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743fd8),param_2,param_1,puVar2,0);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar1 + _DAT_112744000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10625268c; end: 1062526ab; -[SCSpotlightRepliesTrayViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625268c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062526ac; end: 1062526bf; -[SCSpotlightRepliesTrayViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062526ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744000,param_3);
  return;
}



/* Entry: 1062526c0; end: 10625285b; -[SCSpotlightRepliesTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062526c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112744000);
  _objc_storeStrong(param_1 + _DAT_112743fcc,0);
  _objc_storeStrong(param_1 + _DAT_112744010,0);
  _objc_storeStrong(param_1 + _DAT_112743ff8,0);
  _objc_storeStrong(param_1 + _DAT_112743fd0,0);
  _objc_storeStrong(param_1 + _DAT_112743ff0,0);
  _objc_storeStrong(param_1 + _DAT_112743fc8,0);
  _objc_storeStrong(param_1 + _DAT_112744008,0);
  _objc_storeStrong(param_1 + _DAT_112743fac,0);
  _objc_storeStrong(param_1 + _DAT_112743fb0,0);
  _objc_storeStrong(param_1 + _DAT_112743fc4,0);
  _objc_storeStrong(param_1 + _DAT_112743fc0,0);
  _objc_storeStrong(param_1 + _DAT_112743fb8,0);
  _objc_storeStrong(param_1 + _DAT_112743fe4,0);
  _objc_storeStrong(param_1 + _DAT_112743fd4,0);
  _objc_storeStrong(param_1 + _DAT_112743fbc,0);
  _objc_storeStrong(param_1 + _DAT_112743fb4,0);
  _objc_storeStrong(param_1 + _DAT_112743fd8,0);
  _objc_storeStrong(param_1 + _DAT_112744018,0);
  _objc_storeStrong(param_1 + _DAT_112744004,0);
  _objc_storeStrong(param_1 + _DAT_11274401c,0);
  _objc_storeStrong(param_1 + _DAT_112744014,0);
  _objc_storeStrong(param_1 + _DAT_112743fe0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274400c,0);
  return;
}



/* Entry: 10625285c; end: 1062531fb; -[SCSpotlightCommentsAttachmentPreviewView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10625285c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 **ppuVar11;
  undefined8 uVar12;
  undefined8 unaff_x20;
  long lVar13;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar14;
  undefined8 unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar16;
  undefined8 unaff_x26;
  long lVar17;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined8 *puStack_448;
  undefined1 **ppuStack_440;
  code *pcStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 *puStack_408;
  long lStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  long lStack_310;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = PTR_PTR_1126f0930;
  puVar1 = &uStack_130;
  uStack_130 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar14 = (long)_DAT_112744020;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar2;
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar15 = (long)_DAT_112744024;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010befbb60(puVar1);
    func_0x00010c24dbc0(*(undefined8 *)((long)puVar1 + lVar15));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar16 = (long)_DAT_112744028;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar12);
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4028000000000000,0x4028000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar16));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar17 = (long)_DAT_11274402c;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar12);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08c0e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar17));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar13 = (long)_DAT_112744030;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    puStack_138 = puVar2;
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befbb60(puVar1);
    puStack_1e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    uStack_140 = uVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uVar12;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_150 = uVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    uStack_158 = uVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar5;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_168 = uVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    uStack_170 = uVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar12;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_180 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    uStack_188 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uVar5;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_198 = uVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a0 = uVar12;
    func_0x00010bf49420(0x4056800000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar12;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_1a8 = uVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b0 = uVar5;
    func_0x00010bf49420(0x4056800000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar5;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_1b8 = uVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    uStack_1c0 = uVar12;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar12;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_1d0 = uVar12;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    uStack_1d8 = uVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar5;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_1f0 = uVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_1f8 = uVar12;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar12;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_200 = uVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_208 = uVar5;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar17);
    uStack_210 = uVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_218 = uVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_220 = uVar12;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar6;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar17);
    uStack_228 = uVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_230 = uVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_238 = uVar12;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar5;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar17);
    uStack_240 = uVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_248 = uVar12;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar12;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar17);
    uStack_250 = uVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_258 = uVar5;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_260 = uVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar17);
    uStack_268 = uVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_270 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar6;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_278 = uVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar17);
    uStack_280 = uVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_288 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar5;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_290 = uVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_298 = uVar12;
    func_0x00010bf49420(0x4041800000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar12;
    unaff_x20 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_2a0 = uVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x00010bf49420(0x4041800000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = unaff_x21;
    unaff_x22 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = unaff_x24;
    unaff_x25 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = unaff_x25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = unaff_x27;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = unaff_x28;
    func_0x00010beef8c0(puStack_1e8);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    _objc_release(uStack_2a0);
    _objc_release(uStack_298);
    _objc_release(uStack_290);
    _objc_release(uStack_288);
    _objc_release(uStack_280);
    _objc_release(uStack_278);
    _objc_release(uStack_270);
    _objc_release(uStack_268);
    _objc_release(uStack_260);
    _objc_release(uStack_258);
    _objc_release(uStack_250);
    _objc_release(uStack_248);
    _objc_release(uStack_240);
    _objc_release(uStack_238);
    _objc_release(uStack_230);
    _objc_release(uStack_228);
    _objc_release(uStack_220);
    _objc_release(uStack_218);
    _objc_release(uStack_210);
    _objc_release(uStack_208);
    _objc_release(uStack_200);
    _objc_release(uStack_1f8);
    _objc_release(uStack_1f0);
    _objc_release(puStack_1e0);
    _objc_release(uStack_1d8);
    _objc_release(uStack_1d0);
    _objc_release(puStack_1c8);
    _objc_release(uStack_1c0);
    _objc_release(uStack_1b8);
    _objc_release(uStack_1b0);
    _objc_release(uStack_1a8);
    _objc_release(uStack_1a0);
    _objc_release(uStack_198);
    _objc_release(puStack_190);
    _objc_release(uStack_188);
    _objc_release(uStack_180);
    _objc_release(puStack_178);
    _objc_release(uStack_170);
    _objc_release(uStack_168);
    _objc_release(puStack_160);
    _objc_release(uStack_158);
    _objc_release(uStack_150);
    _objc_release(puStack_148);
    _objc_release(uStack_140);
    puVar2 = puStack_138;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_1062531fc;
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_300 = unaff_x28;
  uStack_2f8 = unaff_x27;
  uStack_2f0 = unaff_x26;
  uStack_2e8 = unaff_x25;
  uStack_2e0 = unaff_x24;
  uStack_2d8 = unaff_x23;
  uStack_2d0 = unaff_x22;
  uStack_2c8 = unaff_x21;
  uStack_2c0 = unaff_x20;
  puStack_2b8 = puVar1;
  puStack_2b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  if (param_3 != (undefined8 *)0x0) {
    lStack_3f8 = (long)_DAT_112744034;
    func_0x00010bf75820(*(undefined8 *)(puVar2 + lStack_3f8));
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    lStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    plStack_3e0 = (long *)0x0;
    lVar15 = (long)_DAT_112744020;
    lVar14 = *(long *)(puVar2 + lVar15);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar14;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      lVar16 = *plStack_3e0;
      do {
        lVar17 = 0;
        do {
          if (*plStack_3e0 != lVar16) {
            _objc_enumerationMutation(lVar14);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_3e8 + lVar17 * 8));
          lVar17 = lVar17 + 1;
        } while (lVar13 != lVar17);
        lVar13 = lVar14;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(lVar14);
    func_0x00010c219b60(param_3);
    func_0x00010befbb60(*(undefined8 *)(puVar2 + lVar15));
    puStack_430 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = param_3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar2 + lVar15);
    puStack_408 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_410 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    puStack_418 = puVar1;
    puStack_3b0 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar2 + lVar15);
    puStack_420 = puVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_428 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    puStack_3a8 = puVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar2 + lVar15);
    func_0x00010c08de00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    puStack_3a0 = puVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar2 + lVar15);
    lStack_400 = lVar15;
    func_0x00010c2793a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_398 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_430);
    _objc_release(puVar3);
    _objc_release(puVar9);
    _objc_release(uVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar12);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(uStack_428);
    _objc_release(puStack_420);
    _objc_release(puStack_418);
    _objc_release(uStack_410);
    _objc_release(puStack_408);
    _objc_retain(param_3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar4 = param_3;
      func_0x00010010fab4(param_3,PTR_DAT_1126a52d8);
      puVar1 = param_3;
      if ((int)puVar4 == 0) {
        puVar1 = (undefined8 *)0x0;
      }
    }
    lVar13 = lStack_3f8;
    _objc_retain(puVar1);
    _objc_release(param_3);
    uVar12 = *(undefined8 *)(puVar2 + lVar13);
    *(undefined8 **)(puVar2 + lVar13) = puVar1;
    _objc_release(uVar12);
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lStack_400));
    func_0x00010c2a5f80(*(undefined8 *)(puVar2 + lVar13));
    lVar13 = (long)_DAT_112744024;
    uVar10 = *(ulong *)(puVar2 + lVar13);
    func_0x00010c074c20();
    if ((uVar10 & 1) == 0) {
      func_0x00010c2558c0(*(undefined8 *)(puVar2 + lVar13));
      func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar13));
      func_0x00010c12c960(*(undefined8 *)(puVar2 + lVar13));
    }
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_310) {
    ___stack_chk_fail();
    ppuVar11 = &puStack_460;
    pcStack_438 = FUN_1062535b8;
    puStack_450 = puVar2;
    puStack_448 = param_3;
    ppuStack_440 = &puStack_2b0;
    func_0x00010bf75820(*(undefined8 *)((long)puVar1 + (long)_DAT_112744034));
    puStack_458 = PTR_PTR_1126f0930;
    puStack_460 = puVar1;
    _objc_msgSendSuper2(&puStack_460,PTR_s_dealloc_112525b20);
    return ppuVar11;
  }
  return puVar1;
}



/* Entry: 1062531fc; end: 1062535b7; -[SCSpotlightCommentsAttachmentPreviewView setAttachmentPreviewView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062531fc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    lStack_158 = (long)_DAT_112744034;
    func_0x00010bf75820(*(undefined8 *)(param_1 + lStack_158));
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    lVar13 = (long)_DAT_112744020;
    lVar1 = *(long *)(param_1 + lVar13);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar11 = *plStack_140;
      do {
        lVar12 = 0;
        do {
          if (*plStack_140 != lVar11) {
            _objc_enumerationMutation(lVar1);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_148 + lVar12 * 8));
          lVar12 = lVar12 + 1;
        } while (lVar10 != lVar12);
        lVar10 = lVar1;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(lVar1);
    func_0x00010c219b60(param_3);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar13));
    puStack_190 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = param_3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar13);
    uStack_168 = uVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    uStack_178 = uVar9;
    uStack_110 = uVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar13);
    uStack_180 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    uStack_108 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c08de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    uStack_100 = uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar13);
    lStack_160 = lVar13;
    func_0x00010c2793a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f8 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_190);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(uStack_188);
    _objc_release(uStack_180);
    _objc_release(uStack_178);
    _objc_release(uStack_170);
    _objc_release(uStack_168);
    _objc_retain(param_3);
    puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar9 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((uVar9 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      uVar3 = param_3;
      func_0x00010010fab4(param_3,PTR_DAT_1126a52d8);
      uVar9 = param_3;
      if ((int)uVar3 == 0) {
        uVar9 = 0;
      }
    }
    lVar10 = lStack_158;
    _objc_retain(uVar9);
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    *(ulong *)(param_1 + lVar10) = uVar9;
    _objc_release(uVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lStack_160));
    func_0x00010c2a5f80(*(undefined8 *)(param_1 + lVar10));
    lVar10 = (long)_DAT_112744024;
    uVar9 = *(ulong *)(param_1 + lVar10);
    func_0x00010c074c20();
    if ((uVar9 & 1) == 0) {
      func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar10));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10));
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar10));
    }
  }
  uVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_198 = FUN_1062535b8;
    lStack_1b0 = param_1;
    uStack_1a8 = param_3;
    puStack_1a0 = &stack0xfffffffffffffff0;
    func_0x00010bf75820(*(undefined8 *)(uVar9 + (long)_DAT_112744034));
    puStack_1b8 = PTR_PTR_1126f0930;
    uStack_1c0 = uVar9;
    _objc_msgSendSuper2(&uStack_1c0,PTR_s_dealloc_112525b20);
    return;
  }
  return;
}



/* Entry: 1062535b8; end: 106253607; -[SCSpotlightCommentsAttachmentPreviewView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062535b8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf75820(*(undefined8 *)(param_1 + _DAT_112744034));
  puStack_28 = PTR_PTR_1126f0930;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106253608; end: 10625367f; -[SCSpotlightCommentsAttachmentPreviewView pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106253608(long param_1)

{
  ulong uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = 0;
  puStack_38 = PTR_PTR_1126f0930;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_pointInside_withEvent__11261e4e8);
  if ((uVar1 & 1) == 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_112744030));
    _CGRectContainsPoint();
  }
  return;
}



/* Entry: 106253680; end: 1062536bb; -[SCSpotlightCommentsAttachmentPreviewView _didTapCancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106253680(long param_1)

{
  param_1 = param_1 + _DAT_112744038;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12b380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062536bc; end: 1062536db; -[SCSpotlightCommentsAttachmentPreviewView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062536bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062536dc; end: 1062536ef; -[SCSpotlightCommentsAttachmentPreviewView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062536dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744038,param_3);
  return;
}



/* Entry: 1062536f0; end: 10625377b; -[SCSpotlightCommentsAttachmentPreviewView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062536f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112744038);
  _objc_storeStrong(param_1 + _DAT_112744030,0);
  _objc_storeStrong(param_1 + _DAT_11274402c,0);
  _objc_storeStrong(param_1 + _DAT_112744028,0);
  _objc_storeStrong(param_1 + _DAT_112744034,0);
  _objc_storeStrong(param_1 + _DAT_112744020,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744024,0);
  return;
}



/* Entry: 10625377c; end: 1062537d3; -[SCSpotlightCommentsEmojiBarTapGestureRecognizer initWithTarget:action:emojiPositionIndex:] */

undefined1 * FUN_10625377c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0938;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithTarget_action__1125f1c48);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c194680(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062537d4; end: 1062537e3; -[SCSpotlightCommentsEmojiBarTapGestureRecognizer emojiPositionIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062537d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274403c);
}



/* Entry: 1062537e4; end: 1062537f3; -[SCSpotlightCommentsEmojiBarTapGestureRecognizer setEmojiPositionIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062537e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11274403c) = param_3;
  return;
}



/* Entry: 1062537f4; end: 1062538af; -[SCSpotlightCommentsEmojiBarView initWithEmojiArray:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062537f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f0940;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112744040;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112744044),param_4);
    func_0x00010c21c3a0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062538b0; end: 106253c87; -[SCSpotlightCommentsEmojiBarView setUpViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062538b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
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
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar18 = (long)_DAT_112744048;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar15);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar18),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar18),param_2,0);
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar18),param_2,1);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  lVar16 = *(long *)(param_1 + _DAT_112744040);
  _objc_retain(lVar16);
  lVar2 = lVar16;
  func_0x00010bf52a60(lVar16,param_2,&uStack_160,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar17 = 0;
    lVar19 = *plStack_150;
    do {
      lVar20 = 0;
      do {
        if (*plStack_150 != lVar19) {
          _objc_enumerationMutation(lVar16);
        }
        lVar3 = param_1;
        func_0x00010be8e2a0(param_1,param_2,*(undefined8 *)(lStack_158 + lVar20 * 8),lVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar18),param_2,lVar3);
        lVar17 = lVar17 + 1;
        _objc_release(lVar3);
        lVar20 = lVar20 + 1;
      } while (lVar2 != lVar20);
      lVar2 = lVar16;
      func_0x00010bf52a60(lVar16,param_2,&uStack_160,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar16);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  uStack_118 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  uStack_110 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  uStack_108 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  uStack_100 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf49420(0x404e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f8 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_118,5);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010beef8c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar19);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar17);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar16);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(lVar2);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aea58;
  _objc_retain(puVar14);
  _objc_alloc(puVar1);
  func_0x00010c013de0(0,0,0x404e000000000000,0x404e000000000000);
  func_0x00010c212f20();
  _objc_release(puVar14);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c21e900(puVar1,param_2,1);
  func_0x00010c21ad00(puVar1,param_2,2);
  puVar13 = PTR_PTR_1126c91f8;
  _objc_alloc(PTR_PTR_1126c91f8);
  func_0x00010c050920();
  func_0x00010bef9040(puVar1,param_2,puVar13);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106253c88; end: 106253d57; -[SCSpotlightCommentsEmojiBarView _renderLabelForEmoji:atIndex:] */

void FUN_106253c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(0,0,0x404e000000000000,0x404e000000000000);
  func_0x00010c212f20();
  _objc_release(param_3);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c21e900(puVar1,param_2,1);
  func_0x00010c21ad00(puVar1,param_2,2);
  puVar2 = PTR_PTR_1126c91f8;
  _objc_alloc(PTR_PTR_1126c91f8);
  func_0x00010c050920();
  func_0x00010bef9040(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106253d58; end: 106253ed7; -[SCSpotlightCommentsEmojiBarView _didSelectEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106253d58(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aea58;
  _objc_opt_class(PTR_PTR_1126aea58);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar4 = uVar2;
    func_0x00010c26b700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e760(param_3);
    param_1 = param_1 + _DAT_112744044;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7cee0();
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_retain(uVar2);
    _objc_retain(uVar2);
    func_0x00010bf03420(0x3f847ae147ae147b,puVar3);
    _objc_release(uVar1);
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106253ed8; end: 106253f5b;  */

void FUN_106253ed8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _CGAffineTransformMakeScale(auStack_50,0x3feccccccccccccd,0x3feccccccccccccd);
  func_0x00010c219960(uVar1,param_2,auStack_50);
  return;
}



/* Entry: 106253f5c; end: 106253fcb; -[SCSpotlightCommentsEmojiBarView fadeEmojiViewFromVisible:] */

void FUN_106253f5c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  double dStack_18;
  
  dStack_18 = (double)(param_3 ^ 1);
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106253fcc;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_40);
  return;
}



/* Entry: 106253fcc; end: 106253fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106253fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744048),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106253fe4; end: 106254013; -[SCSpotlightCommentsEmojiBarView stackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106253fe4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744048);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106254014; end: 10625405f; -[SCSpotlightCommentsEmojiBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106254014(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112744044);
  _objc_storeStrong(param_1 + _DAT_112744048,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744040,0);
  return;
}



/* Entry: 106254060; end: 10625498f; -[SCSpotlightCommentsFavByCreatorIconView initWithFrame:] */

/* WARNING: Possible PIC construction at 0x000106254204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106254270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106254208) */
/* WARNING: Removing unreachable block (ram,0x000106254274) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106254060(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_108 = PTR_PTR_1126f0948;
  puVar1 = &uStack_110;
  uStack_110 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return 0;
    }
    ___stack_chk_fail();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744050);
  }
  else {
    func_0x00010c219b60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_11274404c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar5 = (long)_DAT_112744050;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar4 = (long)_DAT_112744054;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bfe7b00(0x4028000000000000,0x4028000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setImage__1126481e8);
  return uVar3;
}



/* Entry: 106254990; end: 10625499f; -[SCSpotlightCommentsFavByCreatorIconView setCreatorProfileImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106254990(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744050),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 1062549a0; end: 1062549ff; -[SCSpotlightCommentsFavByCreatorIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062549a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744054,0);
  _objc_storeStrong(param_1 + _DAT_112744058,0);
  _objc_storeStrong(param_1 + _DAT_112744050,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274404c,0);
  return;
}



/* Entry: 106254a00; end: 106254ac3; -[SCSpotlightCommentsInputAttachmentView initWithAttachmentObservable:attachmentFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106254a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f0950;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274405c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744060;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010bea8e20(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106254ac4; end: 106254d3b; -[SCSpotlightCommentsInputAttachmentView _setUpPreviewView] */

/* WARNING: Possible PIC construction at 0x000106254b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106254b4c) */
/* WARNING: Removing unreachable block (ram,0x000106254d38) */
/* WARNING: Removing unreachable block (ram,0x000106254d18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106254ac4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c9200;
  _objc_alloc_init();
  lVar3 = (long)_DAT_112744064;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + lVar3),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106254d3c; end: 106254d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106254d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744064),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106254d54; end: 106254e97; -[SCSpotlightCommentsInputAttachmentView _setUpAttachmentListening] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106254d54(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744068);
  *(undefined **)(param_1 + _DAT_112744068) = puVar1;
  _objc_release(uVar3);
  puVar2 = auStack_48;
  _objc_initWeak(puVar2,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274405c);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106254e98; end: 106254eeb;  */

void FUN_106254e98(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010be8b6c0();
  }
  else {
    func_0x00010bed33a0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106254eec; end: 106255003; -[SCSpotlightCommentsInputAttachmentView _updateAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106254eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11274406c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_112744064) == 0) {
    func_0x00010bea98a0(param_1);
  }
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744060);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfa7820(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106255004; end: 106255083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106255004(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != 0)) &&
     (*(long *)(lVar1 + _DAT_11274406c) == *(long *)(param_1 + 0x20))) {
    func_0x00010c16b220(*(undefined8 *)(lVar1 + _DAT_112744064));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106255084; end: 106255183; -[SCSpotlightCommentsInputAttachmentView _removeAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106255084(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar5 = (long)_DAT_112744064;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274406c);
  *(undefined8 *)(param_1 + _DAT_11274406c) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106255184;
  puStack_50 = &UNK_110842e18;
  _objc_retain(uVar4);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x106255190;
  puStack_78 = &UNK_110841f20;
  uStack_70 = uVar4;
  uStack_48 = uVar4;
  _objc_retain(uVar4);
  func_0x00010bf03420(0x3fa999999999999a,puVar2,param_2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(uVar4);
  return;
}



/* Entry: 106255184; end: 106255197;  */

void FUN_106255184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106255198; end: 106255213; -[SCSpotlightCommentsInputAttachmentView currentAttachments] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106255198(long param_1,undefined8 param_2)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_11274406c) != 0) {
    lStack_20 = *(long *)(param_1 + _DAT_11274406c);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_20,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be8b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106255214; end: 106255217; -[SCSpotlightCommentsInputAttachmentView clearAttachments] */

void FUN_106255214(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeAttachment_112580750);
  return;
}



/* Entry: 106255218; end: 10625527b; -[SCSpotlightCommentsInputAttachmentView removeAttachmentPreviewView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106255218(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11274406c);
  _objc_retain(lVar1);
  func_0x00010be8b6c0(param_1);
  if (lVar1 != 0) {
    param_1 = param_1 + _DAT_112744070;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7d2a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10625527c; end: 10625529b; -[SCSpotlightCommentsInputAttachmentView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625527c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744070);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10625529c; end: 1062552af; -[SCSpotlightCommentsInputAttachmentView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625529c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744070,param_3);
  return;
}



/* Entry: 1062552b0; end: 10625532b; -[SCSpotlightCommentsInputAttachmentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062552b0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112744070);
  _objc_storeStrong(param_1 + _DAT_11274406c,0);
  _objc_storeStrong(param_1 + _DAT_112744068,0);
  _objc_storeStrong(param_1 + _DAT_112744064,0);
  _objc_storeStrong(param_1 + _DAT_112744060,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274405c,0);
  return;
}



/* Entry: 10625532c; end: 10625556b; -[SCSpotlightCommentsStickerDrawerContainer hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10625532c(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5
                    )

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  double dVar7;
  ulong uStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar7 = param_1;
  _objc_retain(param_5);
  uVar3 = param_3;
  func_0x00010c074c20();
  if ((((uVar3 & 1) == 0) && (func_0x00010bf01b40(param_3), dVar7 != 0.0)) &&
     (uVar3 = param_3, func_0x00010c082800(), (int)uVar3 != 0)) {
    puStack_f0 = PTR_PTR_1126f0958;
    puVar5 = &uStack_f8;
    uStack_f8 = param_3;
    _objc_msgSendSuper2(param_1,param_2,puVar5,PTR_s_pointInside_withEvent__11261e4e8,param_5);
    if ((int)puVar5 != 0) {
      puStack_100 = PTR_PTR_1126f0958;
      puVar5 = &uStack_108;
      uStack_108 = param_3;
      _objc_msgSendSuper2(param_1,param_2,puVar5,PTR_s_hitTest_withEvent__1125d6850,param_5);
      _objc_retainAutoreleasedReturnValue();
      dVar7 = param_1;
      goto LAB_106255514;
    }
    dVar7 = *(double *)(param_3 + (long)_DAT_112744074);
    if (0.0 < dVar7) {
      uVar3 = param_3;
      func_0x00010bf20c00();
      iVar2 = (int)uVar3;
      _CGRectContainsPoint();
      if (iVar2 != 0) {
        dVar7 = 0.0;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c140180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        uVar3 = uVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (uVar3 != 0) {
          uVar6 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(uVar4);
            }
            puVar5 = *(ulong **)(uVar6 * 8);
            dVar7 = param_1;
            func_0x00010bf51200(param_1,param_2,puVar5);
            func_0x00010bfe3a40();
            _objc_retainAutoreleasedReturnValue();
            if (puVar5 != (ulong *)0x0) {
              _objc_release(uVar4);
              goto LAB_106255514;
            }
            uVar6 = uVar6 + 1;
          } while (uVar3 != uVar6);
          uVar3 = uVar4;
          func_0x00010bf52a60();
        }
        _objc_release(uVar4);
      }
    }
  }
  puVar5 = (ulong *)0x0;
LAB_106255514:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return dVar7;
  }
  ___stack_chk_fail();
  return *(double *)(param_5 + _DAT_112744074);
}



/* Entry: 10625556c; end: 10625557b; -[SCSpotlightCommentsStickerDrawerContainer topHitTestExtension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10625556c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744074);
}



/* Entry: 10625557c; end: 10625558b; -[SCSpotlightCommentsStickerDrawerContainer setTopHitTestExtension:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625557c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112744074) = param_1;
  return;
}



/* Entry: 10625558c; end: 10625562f; -[SCSpotlightCommentsSuggestedSearchView initWithSuggestedSearchTerm:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10625558c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0960;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112744078;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010bea9ce0(puVar1);
    func_0x00010bea9040(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106255630; end: 1062558e3; -[SCSpotlightCommentsSuggestedSearchView _setUpViews] */

/* WARNING: Possible PIC construction at 0x0001062556f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010625576c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062557e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010625584c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062557e4) */
/* WARNING: Removing unreachable block (ram,0x000106255770) */
/* WARNING: Removing unreachable block (ram,0x0001062556f4) */
/* WARNING: Removing unreachable block (ram,0x000106255850) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106255630(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c219b60(param_1,param_2,0);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11274407c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x0001062621d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1062558e4; end: 106255efb; -[SCSpotlightCommentsSuggestedSearchView _setUpConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062558e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
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
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined *puVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar41 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar44 = (long)_DAT_11274407c;
  lVar2 = *(long *)(param_1 + lVar44);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar44);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = (long)_DAT_112744080;
  uVar8 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar44);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = (long)_DAT_112744084;
  uVar13 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf49420(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bf49420(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar43 = (long)_DAT_112744088;
  uVar23 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bf493c0(0xc02c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar46 = (long)_DAT_11274408c;
  uVar31 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x00010bf49420(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar35;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar38;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar40);
  _objc_release(uVar39);
  _objc_release(param_1);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(lVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(lVar43);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(lVar45);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(lVar42);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar44);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar41) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + _DAT_11274408c,0);
  _objc_storeStrong(lVar2 + _DAT_112744088,0);
  _objc_storeStrong(lVar2 + _DAT_112744084,0);
  _objc_storeStrong(lVar2 + _DAT_112744080,0);
  _objc_storeStrong(lVar2 + _DAT_11274407c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_112744078,0);
  return;
}



/* Entry: 106255efc; end: 106255f7b; -[SCSpotlightCommentsSuggestedSearchView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106255efc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274408c,0);
  _objc_storeStrong(param_1 + _DAT_112744088,0);
  _objc_storeStrong(param_1 + _DAT_112744084,0);
  _objc_storeStrong(param_1 + _DAT_112744080,0);
  _objc_storeStrong(param_1 + _DAT_11274407c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744078,0);
  return;
}



/* Entry: 106255f7c; end: 10625605b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106255f7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_a0;
  undefined *puStack_98;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bf51e00();
  uVar7 = 1;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  uVar5 = param_2;
  puVar6 = puVar1;
  func_0x00010c01b460();
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_a0;
  _objc_retain(uVar5);
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  puStack_98 = PTR_PTR_1126f0968;
  puStack_a0 = puVar1;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    lVar8 = (long)_DAT_112744090;
    _objc_retain(puVar6);
    uVar4 = *(undefined8 *)((long)ppuVar3 + lVar8);
    *(undefined **)((long)ppuVar3 + lVar8) = puVar6;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_112744094;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + lVar8);
    *(undefined8 *)((long)ppuVar3 + lVar8) = uVar5;
    _objc_release(uVar4);
    uVar4 = uVar7;
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar4);
    func_0x00010beb1160(ppuVar3);
    func_0x00010beabac0(ppuVar3);
  }
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  return (undefined1 *)ppuVar3;
}



/* Entry: 10625605c; end: 10625615f; -[SCSpotlightRepliesApproveRejectAllButtonView initWithRepliesDataFetcher:actionHandler:spotlightRepliesUpdateAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10625605c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f0968;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112744090;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744094;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    func_0x00010beb1160(puVar1);
    func_0x00010beabac0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


