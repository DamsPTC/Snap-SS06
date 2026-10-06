/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10612d4bc; end: 10612d5f3; -[SCFeatureMemoriesPickerLauncher _setSharedPreviewConfigFieldsWithMediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612d4bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126afee0;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004180();
  lVar4 = (long)_DAT_1127400dc;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c1c4ca0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1f5e00(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127400a4);
  func_0x00010c2720a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb140(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar3);
  func_0x00010c1f5e00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1f5d60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c2056c0(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127400d4);
  func_0x00010bfc58a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bea7a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSnapReplyStickerView_112587848);
  return;
}



/* Entry: 10612d5f4; end: 10612d71b; -[SCFeatureMemoriesPickerLauncher _setSnapReplyStickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612d5f4(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar4 = (long)_DAT_1127400a8;
  lVar1 = param_3 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c242d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar4 = param_3 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11ea80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  if (lVar3 != 0) {
    lVar1 = lVar2;
    func_0x00010c111a40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_1127400dc;
    func_0x00010c1e6be0(*(undefined8 *)(param_3 + lVar4),param_4,lVar1);
    _objc_release(lVar1);
    func_0x00010be85140(param_3);
    dVar5 = param_1;
    dVar6 = param_2;
    func_0x00010bf345e0(lVar3);
    func_0x00010bf345e0(lVar3);
    func_0x00010c1e6bc0(dVar5 - param_2,dVar6 - param_1,*(undefined8 *)(param_3 + lVar4));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10612d71c; end: 10612d76b; -[SCFeatureMemoriesPickerLauncher _pvc_mediaAreaInsets] */

/* WARNING: Possible PIC construction at 0x00010612d744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010612d748) */
/* WARNING: Removing unreachable block (ram,0x00010c149020) */

void FUN_10612d71c(void)

{
  func_0x00010c072be0();
                    /* WARNING: Could not recover jumptable at 0x00010c11cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIViewController_1126af898,PTR_s_pvc_mediaAreaInsets_112624cd0);
  return;
}



/* Entry: 10612d76c; end: 10612d8cb; -[SCFeatureMemoriesPickerLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612d76c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127400d4,0);
  _objc_storeStrong(param_1 + _DAT_1127400cc,0);
  _objc_destroyWeak(param_1 + _DAT_1127400c8);
  _objc_storeStrong(param_1 + _DAT_1127400c4,0);
  _objc_storeStrong(param_1 + _DAT_1127400c0,0);
  _objc_storeStrong(param_1 + _DAT_1127400bc,0);
  _objc_destroyWeak(param_1 + _DAT_1127400b8);
  _objc_storeStrong(param_1 + _DAT_1127400b4,0);
  _objc_storeStrong(param_1 + _DAT_1127400b0,0);
  _objc_storeStrong(param_1 + _DAT_1127400ac,0);
  _objc_destroyWeak(param_1 + _DAT_1127400a8);
  _objc_storeStrong(param_1 + _DAT_1127400e0,0);
  _objc_storeStrong(param_1 + _DAT_1127400dc,0);
  _objc_storeStrong(param_1 + _DAT_1127400a4,0);
  _objc_destroyWeak(param_1 + _DAT_1127400d8);
  _objc_storeStrong(param_1 + _DAT_1127400a0,0);
  _objc_destroyWeak(param_1 + _DAT_11274009c);
  _objc_storeStrong(param_1 + _DAT_112740098,0);
  _objc_destroyWeak(param_1 + _DAT_112740094);
  _objc_destroyWeak(param_1 + _DAT_112740090);
  _objc_destroyWeak(param_1 + _DAT_11274008c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740088,0);
  return;
}



/* Entry: 10612d8cc; end: 10612da17; -[SCFeatureSnapReplyImpl initWithQuickStickerViewProvider:conversationId:userSession:conversationManager:conversationIdResolver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10612d8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126efd50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127400e4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127400e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127400e8) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127400ec;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127400f0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127400f4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10612da18; end: 10612da77; -[SCFeatureSnapReplyImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612da18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127400f8;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127400e4);
  func_0x00010bf0c7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10612da78; end: 10612daa7; -[SCFeatureSnapReplyImpl snapReplyStickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612da78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127400f8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10612daa8; end: 10612db43; -[SCFeatureSnapReplyImpl addScreenCaptureNotificationObserver] */

void FUN_10612daa8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10612db44; end: 10612db4b; -[SCFeatureSnapReplyImpl _didScreenShot] */

void FUN_10612db44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea0110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendScreenCaptureNotificationWi_1125859e8,0)
  ;
  return;
}



/* Entry: 10612db4c; end: 10612db53; -[SCFeatureSnapReplyImpl _didScreenRecord] */

void FUN_10612db4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea0110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendScreenCaptureNotificationWi_1125859e8,1)
  ;
  return;
}



/* Entry: 10612db54; end: 10612dbdf; -[SCFeatureSnapReplyImpl removeScreenCaptureNotificationObserver] */

void FUN_10612db54(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10612dbe0; end: 10612dc17; -[SCFeatureSnapReplyImpl setReplyConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612dbe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127400fc);
  *(undefined8 *)(param_1 + _DAT_1127400fc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612dc18; end: 10612df87; -[SCFeatureSnapReplyImpl _sendScreenCaptureNotificationWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612dc18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  if (*(long *)(param_1 + _DAT_1127400fc) == 0) {
    return;
  }
  puStack_300 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_2f8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10612df88;
  uStack_70 = 0x10612df98;
  uStack_68 = 0;
  puStack_308 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_10612df88;
  uStack_a0 = 0x10612df98;
  uStack_98 = 0;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10612dfa0;
  puStack_e0 = &UNK_1109102a8;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x10612e1ac;
  puStack_118 = &UNK_1109102d8;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x10612e3b8;
  puStack_150 = &UNK_110910308;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x10612e5c4;
  puStack_188 = &UNK_110910338;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x10612e7d0;
  puStack_1c0 = &UNK_110910368;
  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_208 = 0xc2000000;
  uStack_200 = 0x10612e9dc;
  puStack_1f8 = &UNK_11090f208;
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  uStack_238 = 0x10612ebe8;
  puStack_230 = &UNK_110910398;
  puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_278 = 0xc2000000;
  uStack_270 = 0x10612edf4;
  puStack_268 = &UNK_1109103c8;
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  uStack_2a8 = 0x10612f000;
  puStack_2a0 = &UNK_1109103f8;
  puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e8 = 0xc2000000;
  uStack_2e0 = 0x10612f20c;
  puStack_2d8 = &UNK_110910428;
  puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_320 = 0xc2000000;
  uStack_318 = 0x10612f418;
  puStack_310 = &UNK_110910458;
  puStack_2d0 = puStack_308;
  puStack_2c8 = puStack_300;
  puStack_2c0 = puStack_2f8;
  puStack_298 = puStack_308;
  puStack_290 = puStack_300;
  puStack_288 = puStack_2f8;
  puStack_260 = puStack_308;
  puStack_258 = puStack_300;
  puStack_250 = puStack_2f8;
  puStack_228 = puStack_308;
  puStack_220 = puStack_300;
  puStack_218 = puStack_2f8;
  puStack_1f0 = puStack_308;
  puStack_1e8 = puStack_300;
  puStack_1e0 = puStack_2f8;
  puStack_1b8 = puStack_308;
  puStack_1b0 = puStack_300;
  puStack_1a8 = puStack_2f8;
  puStack_180 = puStack_308;
  puStack_178 = puStack_300;
  puStack_170 = puStack_2f8;
  puStack_148 = puStack_308;
  puStack_140 = puStack_300;
  puStack_138 = puStack_2f8;
  puStack_110 = puStack_308;
  puStack_108 = puStack_300;
  puStack_100 = puStack_2f8;
  puStack_d8 = puStack_308;
  puStack_d0 = puStack_300;
  puStack_c8 = puStack_2f8;
  puStack_b8 = puStack_308;
  puStack_88 = puStack_2f8;
  puStack_58 = puStack_300;
  func_0x00010c0bcaa0(*(long *)(param_1 + _DAT_1127400fc),param_2,&puStack_f8,&puStack_130,
                      &puStack_168,&puStack_1a0,&puStack_1d8,&puStack_210,&puStack_248,&puStack_280,
                      &puStack_2b8,&puStack_2f0,&puStack_328);
  if (*(long *)(param_1 + _DAT_1127400e8) == 0) {
    if (*(char *)(puStack_58 + 3) != '\x01') {
      lVar2 = puStack_88[5];
      func_0x00010c08fa60();
      if (lVar2 != 0) {
        func_0x00010bea00e0(param_1);
      }
      goto LAB_10612dee4;
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127400f4);
    func_0x00010beee460(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50380();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127400f4);
    func_0x00010beee460(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50380();
  }
  _objc_release(uVar1);
LAB_10612dee4:
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  return;
}



/* Entry: 10612df88; end: 10612df9f;  */

void FUN_10612df88(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10612dfa0; end: 10612e0cf;  */

void FUN_10612dfa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c131c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  NEON_ext(*(undefined1 (*) [16])(param_1 + 0x20),*(undefined1 (*) [16])(param_1 + 0x20),8,1);
  func_0x00010c0c1200();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0ec740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c1322c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612e0d0; end: 10612e14f;  */

void FUN_10612e0d0(long param_1,undefined8 param_2)

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



/* Entry: 10612e150; end: 10612e2db;  */

void FUN_10612e150(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612e2dc; end: 10612e35b;  */

void FUN_10612e2dc(long param_1,undefined8 param_2)

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



/* Entry: 10612e35c; end: 10612e4e7;  */

void FUN_10612e35c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612e4e8; end: 10612e567;  */

void FUN_10612e4e8(long param_1,undefined8 param_2)

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



/* Entry: 10612e568; end: 10612e6f3;  */

void FUN_10612e568(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612e6f4; end: 10612e773;  */

void FUN_10612e6f4(long param_1,undefined8 param_2)

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



/* Entry: 10612e774; end: 10612e8ff;  */

void FUN_10612e774(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612e900; end: 10612e97f;  */

void FUN_10612e900(long param_1,undefined8 param_2)

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



/* Entry: 10612e980; end: 10612eb0b;  */

void FUN_10612e980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612eb0c; end: 10612eb8b;  */

void FUN_10612eb0c(long param_1,undefined8 param_2)

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



/* Entry: 10612eb8c; end: 10612ed17;  */

void FUN_10612eb8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612ed18; end: 10612ed97;  */

void FUN_10612ed18(long param_1,undefined8 param_2)

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



/* Entry: 10612ed98; end: 10612ef23;  */

void FUN_10612ed98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612ef24; end: 10612efa3;  */

void FUN_10612ef24(long param_1,undefined8 param_2)

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



/* Entry: 10612efa4; end: 10612f12f;  */

void FUN_10612efa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612f130; end: 10612f1af;  */

void FUN_10612f130(long param_1,undefined8 param_2)

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



/* Entry: 10612f1b0; end: 10612f33b;  */

void FUN_10612f1b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612f33c; end: 10612f3bb;  */

void FUN_10612f33c(long param_1,undefined8 param_2)

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



/* Entry: 10612f3bc; end: 10612f547;  */

void FUN_10612f3bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612f548; end: 10612f5c7;  */

void FUN_10612f548(long param_1,undefined8 param_2)

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



/* Entry: 10612f5c8; end: 10612f623;  */

void FUN_10612f5c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10612f624; end: 10612f7d3; -[SCFeatureSnapReplyImpl _sendScreenCaptureNotificationToUserId:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612f624(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127400ec);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_68;
  _objc_copyWeak(auStack_78);
  uStack_70 = param_4;
  func_0x00010bf504e0(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar6);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    puVar5 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined1 *)0x0) {
      uVar1 = *(undefined8 *)(param_3 + _DAT_1127400f4);
      func_0x00010beee460(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bfb1920(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf50380(uVar1);
      _objc_release(puVar5);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10612f7d4; end: 10612f893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612f7d4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127400f4);
      func_0x00010beee460(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf50380(uVar2);
      _objc_release(lVar1);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10612f894; end: 10612f8a3; -[SCFeatureSnapReplyImpl quickStickerViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10612f894(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127400e4);
}



/* Entry: 10612f8a4; end: 10612f933; -[SCFeatureSnapReplyImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612f8a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127400e4,0);
  _objc_storeStrong(param_1 + _DAT_1127400f4,0);
  _objc_storeStrong(param_1 + _DAT_1127400f0,0);
  _objc_storeStrong(param_1 + _DAT_1127400f8,0);
  _objc_storeStrong(param_1 + _DAT_1127400ec,0);
  _objc_storeStrong(param_1 + _DAT_1127400fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127400e8,0);
  return;
}



/* Entry: 10612f934; end: 10612f9a7; -[SCMemoriesPickerLogger initWithUserTrackedLogger:] */

undefined1 * FUN_10612f934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efd58;
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



/* Entry: 10612f9a8; end: 10612fadf; -[SCMemoriesPickerLogger logMemoriesPickerActionWithActionType:pageType:pageTypeSpecific:] */

void FUN_10612f9a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c8400;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126b10e0;
  _objc_opt_new(PTR_PTR_1126b10e0);
  func_0x00010c161fe0(puVar1);
  puVar3 = PTR_PTR_1126c8408;
  _objc_alloc_init(PTR_PTR_1126c8408);
  func_0x00010bc9109c(param_4);
  func_0x00010c1d8800(puVar3);
  func_0x00010c1d8820(puVar3);
  func_0x00010c1d8300(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  func_0x00010bafcb18(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f37424(puVar2,param_3,param_4,param_5,1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10612fae0; end: 10612faeb; -[SCMemoriesPickerLogger .cxx_destruct] */

void FUN_10612fae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10612faec; end: 10612fcdf; -[SCDirectorModeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612faec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112740104);
  puVar2 = PTR_PTR_1126c8418;
  _objc_alloc(PTR_PTR_1126c8418);
  func_0x00010c0634a0();
  func_0x00010bf9d660(uVar5);
  _objc_release(puVar2);
  lVar3 = param_1 + _DAT_112740110;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0c6060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_1 + _DAT_112740110;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c0c6060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22ef80();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_112740108);
  param_1 = param_1 + _DAT_11274010c;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf23900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar5);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10612fce0; end: 10613001f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10612fce0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  undefined *puVar28;
  long lVar29;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar28 = (undefined *)0x0;
  }
  else {
    puVar28 = PTR_PTR_1126c8410;
    _objc_alloc();
    lVar2 = lVar1 + _DAT_112740110;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112740110;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c247a20();
    lVar6 = lVar1 + _DAT_112740110;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf7f5c0();
    lVar8 = lVar1 + _DAT_112740110;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + _DAT_112740114;
    _objc_loadWeakRetained();
    lVar11 = lVar1 + _DAT_112740110;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c150700();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1 + _DAT_112740110;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bf895a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar1 + _DAT_112740110;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c15ca00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar1 + _DAT_112740110;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c27a8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar1 + _DAT_112740110;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010c22d580();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar1 + _DAT_112740110;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010c273940();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar1 + _DAT_112740118;
    _objc_loadWeakRetained();
    lVar24 = lVar1 + _DAT_11274011c;
    _objc_loadWeakRetained();
    lVar25 = lVar1 + _DAT_112740120;
    _objc_loadWeakRetained();
    lVar26 = lVar25;
    func_0x00010bf054a0();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar29 = 0;
    }
    else {
      lVar29 = *(long *)(param_1 + 0x20) + (long)_DAT_112740124;
      _objc_loadWeakRetained();
    }
    lVar27 = lVar29;
    func_0x00010c23c800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038e20(puVar28,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar12,lVar14,lVar16,lVar18,
                        lVar20,lVar22,lVar23,lVar24,lVar26,lVar27);
    _objc_release(lVar27);
    _objc_release(lVar29);
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
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return;
}



/* Entry: 106130020; end: 1061300bf; -[SCDirectorModeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106130020(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740104,0);
  _objc_storeStrong(param_1 + _DAT_112740108,0);
  _objc_destroyWeak(param_1 + _DAT_112740128);
  _objc_destroyWeak(param_1 + _DAT_112740124);
  _objc_destroyWeak(param_1 + _DAT_112740120);
  _objc_destroyWeak(param_1 + _DAT_11274011c);
  _objc_destroyWeak(param_1 + _DAT_112740118);
  _objc_destroyWeak(param_1 + _DAT_11274010c);
  _objc_destroyWeak(param_1 + _DAT_112740114);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112740110);
  return;
}



/* Entry: 1061300c0; end: 1061300cb; +[SCDirectorModeCameraCornerView layerClass] */

void FUN_1061300c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 1061300cc; end: 1061300cf; -[SCDirectorModeCameraCornerView shapeLayer] */

void FUN_1061300cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 1061300d0; end: 106130203; -[SCDirectorModeCameraCornerLayoutController initWithOverlayView:directorModeTopLayoutGuide:systemSafeAreaLayoutGuide:cameraViewLayoutGuide:] */

undefined1 *
FUN_1061300d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126efd60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    *(undefined1 *)((long)puVar1 + 0x91) = 1;
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be62e60();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined1 **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be62e60();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined1 **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(param_3);
    func_0x00010befbb60(param_3);
    func_0x00010c266b80(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106130204; end: 10613022b; +[SCDirectorModeCameraCornerLayoutController cornerRadiusForDirectorModeTopInset:displayScale:] */

undefined8 FUN_106130204(double param_1,double param_2)

{
  undefined8 uVar1;
  
  if (param_2 <= 1.0) {
    param_2 = 1.0;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  uVar1 = 0x402a000000000000;
  if (1.0 / param_2 < param_1) {
    uVar1 = 0x4020000000000000;
  }
  return uVar1;
}



/* Entry: 10613022c; end: 106130253; -[SCDirectorModeCameraCornerLayoutController topLeftCornerView] */

void FUN_10613022c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106130254; end: 10613027b; -[SCDirectorModeCameraCornerLayoutController topRightCornerView] */

void FUN_106130254(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10613027c; end: 106130283; -[SCDirectorModeCameraCornerLayoutController cornerRadius] */

undefined8 FUN_10613027c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106130284; end: 1061307a3; -[SCDirectorModeCameraCornerLayoutController synchronize] */

void FUN_106130284(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  
  if ((*(byte *)(param_5 + 0x92) & 1) != 0) {
    return;
  }
  uVar2 = param_5 + 8;
  _objc_loadWeakRetained();
  if (uVar2 == 0) goto LAB_10613071c;
  uVar3 = uVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    *(undefined1 *)(param_5 + 0x91) = 1;
  }
  else {
    func_0x00010bf20c00(uVar2);
    lVar4 = param_5 + 0x18;
    dVar12 = param_1;
    uVar19 = param_2;
    uVar22 = param_3;
    uVar25 = param_4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c08cd20();
    dVar28 = dVar12;
    uVar20 = uVar19;
    uVar23 = uVar22;
    uVar26 = uVar25;
    _objc_release(lVar4);
    lVar4 = param_5 + 0x20;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c08cd20();
    dVar14 = dVar28;
    uVar21 = uVar20;
    uVar24 = uVar23;
    uVar27 = uVar26;
    _objc_release(lVar4);
    uVar5 = param_5 + 0x28;
    _objc_loadWeakRetained();
    func_0x00010c08cd20();
    _objc_release();
    _CGRectIsEmpty(param_1,param_2,param_3,param_4);
    if ((((uVar5 & 1) == 0) && (_CGRectIsNull(param_1,param_2,param_3,param_4), (uVar5 & 1) == 0))
       && (_CGRectIsInfinite(param_1,param_2,param_3,param_4), (uVar5 & 1) == 0)) {
      uVar5 = param_5 + 0x18;
      _objc_loadWeakRetained();
      uVar6 = uVar5;
      func_0x00010c0f0780();
      _objc_retainAutoreleasedReturnValue();
      if (((uVar6 == uVar2) &&
          (uVar7 = uVar6, _CGRectIsNull(dVar12,uVar19,uVar22,uVar25), (uVar7 & 1) == 0)) &&
         ((_CGRectIsInfinite(dVar12,uVar19,uVar22,uVar25), (uVar7 & 1) == 0 &&
          (dVar13 = dVar12, _CGRectGetWidth(dVar12,uVar19,uVar22,uVar25), 0.0 < dVar13)))) {
        uVar7 = param_5 + 0x20;
        _objc_loadWeakRetained();
        uVar8 = uVar7;
        func_0x00010c0f0780();
        _objc_retainAutoreleasedReturnValue();
        if (((uVar8 == uVar2) &&
            (uVar9 = uVar8, _CGRectIsNull(dVar28,uVar20,uVar23,uVar26), (uVar9 & 1) == 0)) &&
           ((_CGRectIsInfinite(dVar28,uVar20,uVar23,uVar26), (uVar9 & 1) == 0 &&
            ((dVar13 = dVar28, _CGRectGetWidth(dVar28,uVar20,uVar23,uVar26), 0.0 < dVar13 &&
             (_CGRectGetHeight(dVar28,uVar20,uVar23,uVar26), 0.0 < dVar28)))))) {
          uVar9 = param_5 + 0x28;
          _objc_loadWeakRetained();
          uVar10 = uVar9;
          func_0x00010c0f0780();
          _objc_retainAutoreleasedReturnValue();
          if ((uVar10 == uVar2) &&
             (((uVar11 = uVar10, _CGRectIsNull(dVar14,uVar21,uVar24,uVar27), (uVar11 & 1) == 0 &&
               (_CGRectIsInfinite(dVar14,uVar21,uVar24,uVar27), (uVar11 & 1) == 0)) &&
              (dVar28 = dVar14, _CGRectGetWidth(dVar14,uVar21,uVar24,uVar27), 0.0 < dVar28)))) {
            _CGRectGetHeight(dVar14,uVar21,uVar24,uVar27);
            dVar28 = dVar14;
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_release(uVar5);
            if (dVar14 <= 0.0) goto LAB_106130714;
            uVar5 = uVar3;
            func_0x00010c279540(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf86320();
            _objc_release(uVar5);
            if (dVar28 <= 1.0) {
              dVar28 = 1.0;
            }
            dVar14 = dVar12;
            _CGRectGetMinY(dVar12,uVar19,uVar22,uVar25);
            dVar13 = param_1;
            _CGRectGetMinY(param_1,param_2,param_3,param_4);
            dVar14 = dVar14 - dVar13;
            if (dVar14 <= 0.0) {
              dVar14 = 0.0;
            }
            _objc_opt_class(param_5);
            func_0x00010bf525c0(dVar14,dVar28);
            dVar13 = param_1;
            _CGRectGetMinX(param_1,param_2,param_3,param_4);
            dVar15 = param_1;
            _CGRectGetMinY(param_1,param_2,param_3,param_4);
            dVar16 = param_1;
            _CGRectGetMaxX(param_1,param_2,param_3,param_4);
            dVar17 = param_1;
            _CGRectGetMinY(param_1,param_2,param_3,param_4);
            if ((*(char *)(param_5 + 0x90) == '\x01') && ((*(byte *)(param_5 + 0x91) & 1) == 0)) {
              uVar5 = param_5 + 0x10;
              _objc_loadWeakRetained();
              if (uVar3 == uVar5) {
                uVar6 = uVar5;
                _CGRectEqualToRect(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x40),
                                   *(undefined8 *)(param_5 + 0x48),*(undefined8 *)(param_5 + 0x50),
                                   *(undefined8 *)(param_5 + 0x58));
                iVar1 = (int)uVar6;
                if (((iVar1 != 0) &&
                    (_CGRectEqualToRect(dVar12,uVar19,uVar22,uVar25,*(undefined8 *)(param_5 + 0x60),
                                        *(undefined8 *)(param_5 + 0x68),
                                        *(undefined8 *)(param_5 + 0x70),
                                        *(undefined8 *)(param_5 + 0x78)), iVar1 != 0)) &&
                   (dVar28 == *(double *)(param_5 + 0x80))) {
                  dVar18 = *(double *)(param_5 + 0x88);
                  _objc_release(uVar5);
                  if (dVar14 == dVar18) goto LAB_106130714;
                  goto LAB_106130688;
                }
              }
              _objc_release(uVar5);
            }
LAB_106130688:
            func_0x00010bed62c0(dVar13,dVar15,dVar14,dVar14,dVar14,param_5);
            func_0x00010bed62c0(dVar16 - dVar14,dVar17,dVar14,dVar14,dVar14,param_5);
            _objc_storeWeak(param_5 + 0x10,uVar3);
            *(double *)(param_5 + 0x40) = param_1;
            *(undefined8 *)(param_5 + 0x48) = param_2;
            *(undefined8 *)(param_5 + 0x50) = param_3;
            *(undefined8 *)(param_5 + 0x58) = param_4;
            *(double *)(param_5 + 0x60) = dVar12;
            *(undefined8 *)(param_5 + 0x68) = uVar19;
            *(undefined8 *)(param_5 + 0x70) = uVar22;
            *(undefined8 *)(param_5 + 0x78) = uVar25;
            *(double *)(param_5 + 0x80) = dVar28;
            *(double *)(param_5 + 0x88) = dVar14;
            *(undefined2 *)(param_5 + 0x90) = 1;
            goto LAB_106130714;
          }
          _objc_release(uVar10);
          _objc_release(uVar9);
        }
        _objc_release(uVar8);
        _objc_release(uVar7);
      }
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
  }
LAB_106130714:
  _objc_release(uVar3);
LAB_10613071c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061307a4; end: 1061307df; -[SCDirectorModeCameraCornerLayoutController setCornersHidden:] */

/* WARNING: Possible PIC construction at 0x0001061307c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061307cc) */

void FUN_1061307a4(long param_1)

{
  if ((*(byte *)(param_1 + 0x92) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_setHidden__1126479f8)
  ;
  return;
}



/* Entry: 1061307e0; end: 1061307e3; -[SCDirectorModeCameraCornerLayoutController invalidate] */

void FUN_1061307e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invalidate_11256cf68);
  return;
}



/* Entry: 1061307e4; end: 106130827; -[SCDirectorModeCameraCornerLayoutController dealloc] */

void FUN_1061307e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be3d720();
  puStack_28 = PTR_PTR_1126efd60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106130828; end: 106130937; -[SCDirectorModeCameraCornerLayoutController _newCornerView] */

undefined * FUN_106130828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c8420;
  _objc_alloc(PTR_PTR_1126c8420);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c21e900();
  func_0x00010c1af000(puVar1,param_2,0);
  func_0x00010c160f00(puVar1,param_2,1);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c22a660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc80();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c22a660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(puVar3);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 106130938; end: 106130af7; -[SCDirectorModeCameraCornerLayoutController _updateCornerView:frame:radius:mirrored:] */

void FUN_106130938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_8);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_a0 = uVar2;
  uStack_98 = uVar4;
  uStack_90 = uVar6;
  uStack_88 = uVar7;
  uStack_80 = uVar3;
  uStack_78 = uVar5;
  func_0x00010c219960(param_8,param_7,&uStack_a0);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,param_8);
  if (param_9 != 0) {
    _CGAffineTransformMakeScale(&uStack_d0,0xbff0000000000000,0x3ff0000000000000);
    uVar2 = uStack_d0;
    uVar4 = uStack_c8;
    uVar6 = uStack_c0;
    uVar7 = uStack_b8;
    uVar3 = uStack_b0;
    uVar5 = uStack_a8;
  }
  uStack_a8 = uVar5;
  uStack_b0 = uVar3;
  uStack_b8 = uVar7;
  uStack_c0 = uVar6;
  uStack_c8 = uVar4;
  uStack_d0 = uVar2;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  func_0x00010c219960(param_8,param_7,&uStack_a0);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(0,param_5);
  func_0x00010bef6d40(param_5,param_5,param_5,0x400921fb54442d18,0x4012d97c7f3321d2,puVar1,param_7,1
                     );
  func_0x00010bef98c0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),puVar1);
  func_0x00010bf3dc80(puVar1);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_7,1);
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  uVar2 = param_8;
  func_0x00010c22a660(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(puVar1);
  _objc_release(param_8);
  return;
}



/* Entry: 106130af8; end: 106130b7b; -[SCDirectorModeCameraCornerLayoutController _invalidate] */

void FUN_106130af8(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x92) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x92) = 1;
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 0x18,0);
  _objc_storeWeak(param_1 + 0x20,0);
  _objc_storeWeak(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,0);
  return;
}



/* Entry: 106130b7c; end: 106130bd3; -[SCDirectorModeCameraCornerLayoutController .cxx_destruct] */

void FUN_106130b7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106130bd4; end: 106130dc3; -[SCDirectorModeCameraViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106130bd4(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126efd68;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewDidLoad_112684cd8);
  uVar5 = param_1;
  _objc_opt_class();
  iVar2 = (int)uVar5;
  uVar5 = param_1;
  func_0x00010bf2a1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee73c0();
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c06f7a0();
  uVar4 = param_1;
  if (iVar2 == 0) {
    func_0x000100478f84();
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    if ((uVar5 & 1) == 0) {
      uVar5 = param_1;
      func_0x00010bf2a1a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf2a1a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010befc540(puVar1);
      _objc_release(uVar3);
      _objc_release(uVar5);
    }
    uVar5 = param_1;
    func_0x00010c22dac0();
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    if ((int)uVar5 == 0) goto LAB_106130d6c;
    func_0x00010bf2a1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bf2a1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bef7280(puVar1);
  }
  else {
    if ((uVar5 & 1) != 0) goto LAB_106130d6c;
    uVar3 = param_1;
    _objc_opt_class();
    func_0x00010bf2a1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be982c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(ulong *)(param_1 + (long)_DAT_112740164);
    *(ulong *)(param_1 + (long)_DAT_112740164) = uVar3;
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_106130d6c:
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e2e0();
  _objc_release(uVar5);
  _objc_release(param_1);
  return;
}



/* Entry: 106130dc4; end: 106130dfb; +[SCDirectorModeCameraViewController _usesRuntimeCornerLayoutForCameraOverlay:] */

bool FUN_106130dc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf2b180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 106130dfc; end: 106130ed3; +[SCDirectorModeCameraViewController _runtimeCornerLayoutControllerForCameraOverlay:] */

void FUN_106130dfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf2b180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf295a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126c8428;
      _objc_alloc(PTR_PTR_1126c8428);
      lVar3 = param_3;
      func_0x00010bf2bb60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0329e0(puVar4,param_2,param_3,lVar2,lVar1,lVar3);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106130ed4; end: 106130f37; +[SCDirectorModeCameraViewController _handleRingFlashActive:cameraOverlay:cornerLayoutController:] */

undefined8
FUN_106130ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bee73c0(param_1,param_2,param_4);
  if ((int)param_1 != 0) {
    func_0x00010c184360(param_5,param_2,param_3);
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 106130f38; end: 106130f87; -[SCDirectorModeCameraViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106130f38(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efd68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010c266b80(*(undefined8 *)(param_1 + _DAT_112740164));
  return;
}



/* Entry: 106130f88; end: 106130fd7; -[SCDirectorModeCameraViewController viewSafeAreaInsetsDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106130f88(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efd68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewSafeAreaInsetsDidChange_11252f568);
  func_0x00010c266b80(*(undefined8 *)(param_1 + _DAT_112740164));
  return;
}



/* Entry: 106130fd8; end: 106131027; -[SCDirectorModeCameraViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106130fd8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efd68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c266b80(*(undefined8 *)(param_1 + _DAT_112740164));
  return;
}



/* Entry: 106131028; end: 1061310bf; -[SCDirectorModeCameraViewController viewWillDisappear:] */

void FUN_106131028(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126efd68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillDisappear__112685438);
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf30b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256760();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 1061310c0; end: 10613110f; -[SCDirectorModeCameraViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061310c0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efd68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c266b80(*(undefined8 *)(param_1 + _DAT_112740164));
  return;
}



/* Entry: 106131110; end: 10613115f; -[SCDirectorModeCameraViewController parentViewControllerForCameraFeature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131110(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112740168;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf7f260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106131160; end: 1061311af; -[SCDirectorModeCameraViewController presentingViewControllerForMusicFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131160(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112740168;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf7f260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061311b0; end: 106131257; -[SCDirectorModeCameraViewController resetAfterSendingSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061311b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126efd68;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_resetAfterSendingSnap_11262ba48);
  lVar1 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e2e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112740168;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7f240();
  _objc_release(param_1);
  return;
}



/* Entry: 106131258; end: 10613125f; -[SCDirectorModeCameraViewController isCoolRecordingEnabled] */

undefined8 FUN_106131258(void)

{
  return 0;
}



/* Entry: 106131260; end: 10613133f; -[SCDirectorModeCameraViewController didChangeRingFlashState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131260(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1410c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141120();
  _objc_release(uVar1);
  uVar2 = param_1;
  _objc_opt_class();
  uVar3 = param_1;
  func_0x00010bf2a1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2f620();
  _objc_release(uVar3);
  if ((uVar2 & 1) == 0) {
    puStack_48 = PTR_PTR_1126efd68;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_didChangeRingFlashState__1125ba700,param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106131340; end: 106131413; -[SCDirectorModeCameraViewController cameraTimerNGSBottomOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131340(long param_1)

{
  int iVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(char *)(param_1 + _DAT_11274016c) == '\x01') {
    puStack_38 = PTR_PTR_1126efd68;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_cameraTimerNGSBottomOffset_1125a8670);
  }
  else {
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf2b180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release();
    iVar1 = (int)param_1;
    if ((lVar2 == 0) && (func_0x000100478f84(), iVar1 != 0)) {
      func_0x0001007f8afc();
    }
  }
  return;
}



/* Entry: 106131414; end: 1061314e3; -[SCDirectorModeCameraViewController updateRuntimeThumbnailOverlapContribution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131414(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2b180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if ((lVar2 != 0) && (*(double *)(param_2 + _DAT_112740170) != param_1)) {
    *(double *)(param_2 + _DAT_112740170) = param_1;
    lVar1 = param_2;
    func_0x00010bf2a1a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285240(param_1);
    _objc_release(lVar1);
    func_0x00010bf2a1a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c138480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1061314e4; end: 1061315cf; -[SCDirectorModeCameraViewController prepareForTransitionIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061314e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_11274016c) = 1;
  lVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf7f820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109820();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c096ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238080();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf2a1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061315d0; end: 106131667; -[SCDirectorModeCameraViewController beginTransitionIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061315d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_11274016c) = 0;
  lVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf7f820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18da0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf2a1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106131668; end: 106131703; -[SCDirectorModeCameraViewController prepareForTransitionOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131668(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_11274016c) = 1;
  lVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf7f820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109860();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf2a1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106131704; end: 10613178f; -[SCDirectorModeCameraViewController beginTransitionOut] */

void FUN_106131704(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18dc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf2a1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106131790; end: 10613181b; -[SCDirectorModeCameraViewController onSetHideableViewContainerHidden:animated:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131790(undefined8 param_1,long param_2)

{
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126efd68;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_onSetHideableViewContainerHidden_1126173b0);
  param_2 = param_2 + _DAT_112740168;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf7f220(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10613181c; end: 106131897; -[SCDirectorModeCameraViewController featureDirectorModeExitMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613181c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e2e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112740168;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7f240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106131898; end: 10613189f; -[SCDirectorModeCameraViewController shouldEnableAutoLayoutOnCameraView] */

undefined8 FUN_106131898(void)

{
  return 1;
}



/* Entry: 1061318a0; end: 1061318a7; -[SCDirectorModeCameraViewController shouldApplyBlurEffectOnStatusBar] */

undefined8 FUN_1061318a0(void)

{
  return 0;
}



/* Entry: 1061318a8; end: 1061318af; -[SCDirectorModeCameraViewController shouldAddBottomCardCorners] */

undefined8 FUN_1061318a8(void)

{
  return 0;
}



/* Entry: 1061318b0; end: 10613191f; -[SCDirectorModeCameraViewController shouldAddTopCardCorners] */

uint FUN_1061318b0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = param_1;
  _objc_opt_class();
  uVar2 = param_1;
  func_0x00010bf2a1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee73c0(uVar1,param_2,uVar2);
  if ((uVar1 & 1) == 0) {
    func_0x00010c06f7a0(param_1);
    uVar3 = (uint)param_1 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 106131920; end: 106131927; -[SCDirectorModeCameraViewController pageViewName] */

undefined8 FUN_106131920(void)

{
  return 0x4b;
}



/* Entry: 106131928; end: 106131947; -[SCDirectorModeCameraViewController directorModeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131928(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112740168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106131948; end: 10613195b; -[SCDirectorModeCameraViewController setDirectorModeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131948(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740168,param_3);
  return;
}



/* Entry: 10613195c; end: 106131997; -[SCDirectorModeCameraViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613195c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112740168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740164,0);
  return;
}



/* Entry: 106131998; end: 106131b3b;  */

void FUN_106131998(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_stack_00000000;
  undefined8 in_stack_00000008;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  func_0x000100c2f018(&dStack_80,param_3,param_4,0x3fe2000000000000,param_5,param_6,param_7,param_8,
                      in_stack_00000008);
  dVar1 = 0.0;
  if (dStack_70 == 0.0) {
    dVar1 = param_5 + 52.0;
  }
  if (dStack_70 != 4.94065645841247e-324) {
    param_5 = dVar1;
  }
  dVar2 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar3 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar1 = dStack_80;
  dVar3 = dVar3 - dStack_80;
  dVar4 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar5 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar7 = in_stack_00000000 * (param_5 + dStack_78);
  dVar6 = -(in_stack_00000000 * (param_5 + dStack_78));
  if (0.0 <= dVar7) {
    dVar6 = dVar7;
  }
  if (dVar6 <= 1.0) {
    dVar6 = 1.0;
  }
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  *param_9 = dVar4 + (double)(long)(in_stack_00000000 * ((dVar2 + dVar3 * 0.5) - dVar5)) /
                     in_stack_00000000;
  param_9[1] = param_1;
  param_9[2] = dVar1;
  param_9[3] = (double)(long)(dVar7 + dVar6 * 2.220446049250313e-16 * 4.0) / in_stack_00000000;
  param_9[5] = dStack_78;
  param_9[4] = dStack_80;
  param_9[6] = dStack_70;
  param_9[7] = dStack_68;
  return;
}



/* Entry: 106131b3c; end: 106131b9b; -[SCDirectorModeMainWindowObservationView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131b3c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efd70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  param_1 = param_1 + _DAT_112740174;
  _objc_loadWeakRetained(param_1);
  func_0x00010be976e0();
  _objc_release(param_1);
  return;
}



/* Entry: 106131b9c; end: 106131bbb; -[SCDirectorModeMainWindowObservationView layoutController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131b9c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112740174);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106131bbc; end: 106131bcf; -[SCDirectorModeMainWindowObservationView setLayoutController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740174,param_3);
  return;
}



/* Entry: 106131bd0; end: 106131bdf; -[SCDirectorModeMainWindowObservationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106131bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112740174);
  return;
}



/* Entry: 106131be0; end: 106131d8b; -[SCDirectorModeMainLayoutController initWithRootView:cameraView:] */

undefined8 *
FUN_106131be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_48 = PTR_PTR_1126efd78;
  puVar2 = &uStack_50;
  uStack_50 = param_5;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar3 = puVar2[1];
    puVar2[1] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    iVar1 = (int)puVar2[2];
    puVar2[2] = param_8;
    _objc_release();
    puVar2[0xe] = 0;
    puVar2[0xc] = 0x3ff0000000000000;
    puVar2[0x14] = 0x3ff0000000000000;
    func_0x00010052b600();
    dVar6 = 60.0;
    if ((double)iVar1 <= 60.0) {
      dVar6 = (double)iVar1;
    }
    if (0x21 < iVar1 - 0x33U) {
      dVar6 = 60.0;
    }
    func_0x000100456ca0();
    uVar3 = 0x3ff8000000000000;
    dVar5 = 1.5;
    if (iVar1 == 0) {
      dVar5 = 1.0;
    }
    dVar5 = dVar5 * dVar6;
    puVar2[0x13] = dVar5;
    func_0x00010bf20c00(param_7);
    puVar2[0x16] = dVar5;
    puVar2[0x17] = uVar3;
    puVar2[0x18] = param_3;
    puVar2[0x19] = param_4;
    func_0x00010bf20c00(param_7);
    FUN_106131998(&uStack_90);
    puVar2[5] = uStack_88;
    puVar2[4] = uStack_90;
    puVar2[7] = uStack_78;
    puVar2[6] = uStack_80;
    *(undefined1 *)(puVar2 + 0x1c) = 1;
    puVar4 = PTR_PTR_1126c8430;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = puVar2[3];
    puVar2[3] = puVar4;
    _objc_release(uVar3);
    func_0x00010c1b9ae0(puVar2[3]);
    func_0x00010c1a7f60(puVar2[3]);
    func_0x00010c21e900(puVar2[3]);
    func_0x00010befbb60(param_7);
    func_0x00010bdcdf40(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar2;
}



/* Entry: 106131d8c; end: 106131d97; -[SCDirectorModeMainLayoutController baseFrame] */

undefined8 FUN_106131d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106131d98; end: 106131da3; -[SCDirectorModeMainLayoutController appliedFrame] */

undefined8 FUN_106131d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


