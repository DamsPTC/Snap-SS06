/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e760b0; end: 106e760d3; -[SCIAPTokenItemOrderConfirmedUpdate copyWithZone:] */

undefined8 FUN_106e760b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e760d4; end: 106e76157; -[SCIAPTokenItemOrderConfirmedUpdate hash] */

void FUN_106e760d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f7860;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e76158; end: 106e7619b; -[SCIAPTokenItemOrderConfirmedUpdate internalInit] */

void FUN_106e76158(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f7860;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e7619c; end: 106e7626b; -[SCIAPTokenItemOrderConfirmedUpdate isEqual:] */

long FUN_106e7619c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e76244:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e76250;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106e76250;
          }
          goto LAB_106e76244;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e76250:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e7626c; end: 106e76293; -[SCIAPTokenItemOrderConfirmedUpdate matchSucceeded:] */

void FUN_106e7626c(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000106e7628c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 106e76294; end: 106e762cf; -[SCIAPTokenItemOrderConfirmedUpdate .cxx_destruct] */

void FUN_106e76294(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e762d0; end: 106e762db; +[SCCGenAICreateSongCoverContentObjectFor modulePath] */

undefined ** FUN_106e762d0(void)

{
  return &PTR____CFConstantStringClassReference_110e894f8;
}



/* Entry: 106e762dc; end: 106e762e3; +[SCCGenAICreateSongCoverContentObjectFor asyncStrictMode] */

undefined8 FUN_106e762dc(void)

{
  return 0;
}



/* Entry: 106e762e4; end: 106e76343; -[SCCGenAICreateSongCoverContentObjectFor coverContentObjectForWithCoverArt:] */

void FUN_106e762e4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_106e76624();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x20;
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e76634();
  _objc_release(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e76344; end: 106e764af; +[SCCGenAICreateSongCoverContentObjectFor invokeWithJSRuntimeProvider:coverArt:completionHandler:] */

void FUN_106e76344(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106e76424;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  func_0x000106e76634();
  _objc_release(param_3);
  return;
}



/* Entry: 106e764b0; end: 106e764d3; +[SCCGenAICreateSongCoverContentObjectFor valdiMarshallableObjectDescriptor] */

void FUN_106e764b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109812d8;
  param_1[1] = &PTR_DAT_110981308;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106e764d4; end: 106e764df; +[SCCGenAICreateSongCreateSongPage componentPath] */

undefined ** FUN_106e764d4(void)

{
  return &PTR____CFConstantStringClassReference_110e89518;
}



/* Entry: 106e764e0; end: 106e76503; -[SCCGenAICreateSongCreateSongPage initWithViewModel:componentContext:runtime:] */

void FUN_106e764e0(void)

{
  func_0x000106e7663c(PTR_PTR_1126f7868);
  return;
}



/* Entry: 106e76504; end: 106e7653b; -[SCCGenAICreateSongCreateSongPage setViewModel:] */

void FUN_106e76504(void)

{
  FUN_106e76624();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e76650();
  func_0x000106e76634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106e7653c; end: 106e7657b; -[SCCGenAICreateSongCreateSongPage viewModel] */

void FUN_106e7653c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e76634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106e7657c; end: 106e76587; +[SCCGenAICreateSongCreateSongStatus componentPath] */

undefined ** FUN_106e7657c(void)

{
  return &PTR____CFConstantStringClassReference_110e89538;
}



/* Entry: 106e76588; end: 106e765ab; -[SCCGenAICreateSongCreateSongStatus initWithViewModel:componentContext:runtime:] */

void FUN_106e76588(void)

{
  func_0x000106e7663c(PTR_PTR_1126f7870);
  return;
}



/* Entry: 106e765ac; end: 106e765e3; -[SCCGenAICreateSongCreateSongStatus setViewModel:] */

void FUN_106e765ac(void)

{
  FUN_106e76624();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e76650();
  func_0x000106e76634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106e765e4; end: 106e76623; -[SCCGenAICreateSongCreateSongStatus viewModel] */

void FUN_106e765e4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e76634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106e76624; end: 106e7665b;  */

void FUN_106e76624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 106e7665c; end: 106e766db; -[SCCGenAICreateSongChatToSongPhase__Enum init] */

void FUN_106e7665c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  
  func_0x000106e76bac();
  puStack_48 = PTR_PTR_113188488;
  puStack_40 = PTR_PTR_113188490;
  puStack_38 = PTR_PTR_113188498;
  puStack_30 = PTR_PTR_1131884a0;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e76b90();
  func_0x000106e76c04();
  func_0x000106e76bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_106e766dc;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000106e76bac();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e895b8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e895d8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e895f8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e89618;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e89638;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e89658;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e89678;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e89698;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e896b8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_c0,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e76b90();
  func_0x000106e76c04();
  func_0x000106e76bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_106e76790;
  ppuStack_d0 = &puStack_60;
  func_0x000106e76bac();
  puStack_138 = PTR_PTR_1131884a8;
  puStack_130 = PTR_PTR_1131884b0;
  puStack_128 = PTR_PTR_1131884b8;
  puStack_120 = PTR_PTR_1131884c0;
  puStack_118 = PTR_PTR_1131884c8;
  puStack_110 = PTR_PTR_1131884d0;
  puStack_108 = PTR_PTR_1131884d8;
  puStack_100 = PTR_PTR_1131884e0;
  puStack_f8 = PTR_PTR_1131884e8;
  puStack_f0 = PTR_PTR_1131884f0;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e76b90();
  func_0x000106e76c04();
  func_0x000106e76bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106e7684c;
  puStack_158 = PTR_PTR_1126f7878;
  puStack_160 = puVar1;
  ppuStack_150 = &ppuStack_d0;
  func_0x000106e76c10();
  func_0x000106e76bfc(&puStack_160);
  return;
}



/* Entry: 106e766dc; end: 106e7678f; -[SCCGenAICreateSongCoverArt__Enum init] */

void FUN_106e766dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  
  func_0x000106e76bac();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e895b8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e895d8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e895f8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e89618;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e89638;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e89658;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e89678;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e89698;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e896b8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_70,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e76b90();
  func_0x000106e76c04();
  func_0x000106e76bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_106e76790;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000106e76bac();
  puStack_e8 = PTR_PTR_1131884a8;
  puStack_e0 = PTR_PTR_1131884b0;
  puStack_d8 = PTR_PTR_1131884b8;
  puStack_d0 = PTR_PTR_1131884c0;
  puStack_c8 = PTR_PTR_1131884c8;
  puStack_c0 = PTR_PTR_1131884d0;
  puStack_b8 = PTR_PTR_1131884d8;
  puStack_b0 = PTR_PTR_1131884e0;
  puStack_a8 = PTR_PTR_1131884e8;
  puStack_a0 = PTR_PTR_1131884f0;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e76b90();
  func_0x000106e76c04();
  func_0x000106e76bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_106e7684c;
  puStack_108 = PTR_PTR_1126f7878;
  puStack_110 = puVar1;
  ppuStack_100 = &puStack_80;
  func_0x000106e76c10();
  func_0x000106e76bfc(&puStack_110);
  return;
}



/* Entry: 106e76790; end: 106e7684b; -[SCCGenAICreateSongGenre__Enum init] */

void FUN_106e76790(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  
  func_0x000106e76bac();
  puStack_78 = PTR_PTR_1131884a8;
  puStack_70 = PTR_PTR_1131884b0;
  puStack_68 = PTR_PTR_1131884b8;
  puStack_60 = PTR_PTR_1131884c0;
  puStack_58 = PTR_PTR_1131884c8;
  puStack_50 = PTR_PTR_1131884d0;
  puStack_48 = PTR_PTR_1131884d8;
  puStack_40 = PTR_PTR_1131884e0;
  puStack_38 = PTR_PTR_1131884e8;
  puStack_30 = PTR_PTR_1131884f0;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e76b90();
  func_0x000106e76c04();
  func_0x000106e76bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106e7684c;
  puStack_98 = PTR_PTR_1126f7878;
  puStack_a0 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000106e76c10();
  func_0x000106e76bfc(&puStack_a0);
  return;
}



/* Entry: 106e7684c; end: 106e7687b; -[SCCGenAICreateSongChatMessageInfo initWithText:isFromMe:] */

void FUN_106e7684c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f7878;
  uStack_20 = param_1;
  func_0x000106e76c10();
  func_0x000106e76bfc(&uStack_20);
  return;
}



/* Entry: 106e7687c; end: 106e7688b; +[SCCGenAICreateSongChatMessageInfo valdiMarshallableObjectDescriptor] */

void FUN_106e7687c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_text_110981318;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e7688c; end: 106e768ab; -[SCCGenAICreateSongChatToSongPlaybackState initWithIsPlaying:remaining:] */

void FUN_106e7688c(void)

{
  func_0x000106e76bdc(PTR_PTR_1126f7880);
  return;
}



/* Entry: 106e768ac; end: 106e768bb; +[SCCGenAICreateSongChatToSongPlaybackState valdiMarshallableObjectDescriptor] */

void FUN_106e768ac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110981360;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e768bc; end: 106e768f3; -[SCCGenAICreateSongCreateSongPageContext initWithNavigator:phaseObservable:playbackStateObservable:inAppBrowserPresenter:] */

void FUN_106e768bc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f7888;
  uStack_20 = param_1;
  func_0x000106e76c10();
  func_0x000106e76bfc(&uStack_20);
  return;
}



/* Entry: 106e768f4; end: 106e76907; +[SCCGenAICreateSongCreateSongPageContext valdiMarshallableObjectDescriptor] */

void FUN_106e768f4(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_1109813a8;
  param_1[1] = &PTR_s_SCValdiINavigator_110981420;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e76908; end: 106e76a13; -[SCCGenAICreateSongCreateSongPageViewModel initWithSeed:onCreateSongTapped:onPlayButtonTapped:onSendButtonTapped:onBackTapped:] */

undefined8 *
FUN_106e76908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar2 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  uVar3 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_58 = PTR_PTR_1126f7890;
  uStack_60 = param_1;
  func_0x000106e76c10();
  puVar4 = &uStack_60;
  func_0x000106e76bfc(puVar4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar4;
}



/* Entry: 106e76a14; end: 106e76a27; +[SCCGenAICreateSongCreateSongPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_106e76a14(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110981450;
  param_1[1] = &PTR_DAT_1109814e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e76a28; end: 106e76a5f; -[SCCGenAICreateSongCreateSongStatusContext initWithUserProvider:] */

void FUN_106e76a28(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f7898;
  uStack_20 = param_1;
  func_0x000106e76c10();
  func_0x000106e76bfc(&uStack_20);
  return;
}



/* Entry: 106e76a60; end: 106e76a73; +[SCCGenAICreateSongCreateSongStatusContext valdiMarshallableObjectDescriptor] */

void FUN_106e76a60(undefined8 *param_1)

{
  *param_1 = &PTR_s_userProvider_1109814f8;
  param_1[1] = &PTR_s_SCComposerPeopleUserProviding_110981558;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e76a74; end: 106e76af7; -[SCCGenAICreateSongCreateSongStatusViewModel initWithIsSelfInitiated:initiatingUserId:onLinkTapped:] */

undefined8 *
FUN_106e76a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126f78a0;
  uStack_40 = param_1;
  func_0x000106e76c10();
  puVar1 = &uStack_40;
  func_0x000106e76bfc(puVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106e76af8; end: 106e76b07; +[SCCGenAICreateSongCreateSongStatusViewModel valdiMarshallableObjectDescriptor] */

void FUN_106e76af8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110981570;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e76b08; end: 106e76b27; -[SCCGenAICreateSongOpenPromptSeed initWithInitialText:maxLength:] */

void FUN_106e76b08(void)

{
  func_0x000106e76bdc(PTR_PTR_1126f78a8);
  return;
}



/* Entry: 106e76b28; end: 106e76b37; +[SCCGenAICreateSongOpenPromptSeed valdiMarshallableObjectDescriptor] */

void FUN_106e76b28(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109815d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e76b38; end: 106e76b6b; -[SCCGenAICreateSongSongSeed init] */

void FUN_106e76b38(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f78b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106e76b6c; end: 106e76c23; +[SCCGenAICreateSongSongSeed valdiMarshallableObjectDescriptor] */

void FUN_106e76b6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110981618;
  param_1[1] = &PTR_DAT_110981660;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e76c24; end: 106e76c97; -[SCUcoSnapEditorAnnouncerServices initWithSnapEditorStateAnnouncer:] */

undefined1 * FUN_106e76c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f78b8;
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



/* Entry: 106e76c98; end: 106e76c9f; -[SCUcoSnapEditorAnnouncerServices snapEditorAnnouncer] */

undefined8 FUN_106e76c98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e76ca0; end: 106e76cab; -[SCUcoSnapEditorAnnouncerServices .cxx_destruct] */

void FUN_106e76ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e76cac; end: 106e76cf7; +[SCUcoSnapEditorStateEvent snapEditorDidExport] */

void FUN_106e76cac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bef58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e76cf8; end: 106e76d43; +[SCUcoSnapEditorStateEvent snapEditorDidInitiateExport] */

void FUN_106e76cf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bef58;
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



/* Entry: 106e76d44; end: 106e76d8f; +[SCUcoSnapEditorStateEvent snapEditorViewDidDisappear] */

void FUN_106e76d44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bef58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e76d90; end: 106e76ddb; +[SCUcoSnapEditorStateEvent snapEditorViewDidLoad] */

void FUN_106e76d90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bef58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e76ddc; end: 106e76e27; +[SCUcoSnapEditorStateEvent snapEditorViewWillAppear] */

void FUN_106e76ddc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bef58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e76e28; end: 106e76e6f; +[SCUcoSnapEditorStateEvent snapEditorWillExport] */

void FUN_106e76e28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bef58;
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



/* Entry: 106e76e70; end: 106e76e93; -[SCUcoSnapEditorStateEvent copyWithZone:] */

undefined8 FUN_106e76e70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e76e94; end: 106e76e9b; -[SCUcoSnapEditorStateEvent hash] */

undefined8 FUN_106e76e94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e76e9c; end: 106e76edf; -[SCUcoSnapEditorStateEvent internalInit] */

void FUN_106e76e9c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f78c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e76ee0; end: 106e76f67; -[SCUcoSnapEditorStateEvent isEqual:] */

bool FUN_106e76ee0(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 106e76f68; end: 106e77093; -[SCUcoSnapEditorStateEvent matchSnapEditorWillExport:snapEditorDidInitiateExport:snapEditorDidExport:snapEditorViewDidDisappear:snapEditorViewDidLoad:snapEditorViewWillAppear:] */

void FUN_106e76f68(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    lVar1 = param_3;
    if (((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) && (lVar1 = param_5, lVar2 != 2))
    goto LAB_106e77038;
  }
  else {
    lVar1 = param_6;
    if (((lVar2 != 3) && (lVar1 = param_7, lVar2 != 4)) && (lVar1 = param_8, lVar2 != 5))
    goto LAB_106e77038;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_106e77038:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e77094; end: 106e7710f;  */

undefined * FUN_106e77094(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7e30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e897f8,
                        &UNK_10ddf0158,&UNK_10ddf0174,4,FUN_106e77110,0);
    do {
      if (puRam00000001136c7e30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7e30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7e30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7e30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7e30;
}



/* Entry: 106e77110; end: 106e7711b;  */

bool FUN_106e77110(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106e7711c; end: 106e77123; -[SCNotificationStartupLoggingServices notificationToMessageReadyLogger] */

undefined8 FUN_106e7711c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e77124; end: 106e7712f; -[SCNotificationStartupLoggingServices .cxx_destruct] */

void FUN_106e77124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e77130; end: 106e7721b; -[SCN2XNotificationData initWithNotificationId:conversationId:messageTrackingId:serverMessageId:pushType:] */

undefined1 *
FUN_106e77130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f78d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e7721c; end: 106e7723f; -[SCN2XNotificationData copyWithZone:] */

undefined8 FUN_106e7721c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e77240; end: 106e772cb; -[SCN2XNotificationData hash] */

undefined8 * FUN_106e77240(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106e77384:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e77390;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106e77390;
          }
          goto LAB_106e77384;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e77390:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e772cc; end: 106e773ab; -[SCN2XNotificationData isEqual:] */

long FUN_106e772cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e77384:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e77390;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106e77390;
          }
          goto LAB_106e77384;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e77390:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e773ac; end: 106e773b3; -[SCN2XNotificationData notificationId] */

undefined8 FUN_106e773ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e773b4; end: 106e773bb; -[SCN2XNotificationData conversationId] */

undefined8 FUN_106e773b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e773bc; end: 106e773c3; -[SCN2XNotificationData messageTrackingId] */

undefined8 FUN_106e773bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e773c4; end: 106e773cb; -[SCN2XNotificationData serverMessageId] */

undefined8 FUN_106e773c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e773cc; end: 106e773d3; -[SCN2XNotificationData pushType] */

undefined8 FUN_106e773cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e773d4; end: 106e7740f; -[SCN2XNotificationData .cxx_destruct] */

void FUN_106e773d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e77410; end: 106e77477; +[SCN2XFeedSyncSubstepMetric cellAppearedWithConversationId:] */

void FUN_106e77410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c29d8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e77478; end: 106e774bf; +[SCN2XFeedSyncSubstepMetric renderedViewModels] */

void FUN_106e77478(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c29d8;
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



/* Entry: 106e774c0; end: 106e774e3; -[SCN2XFeedSyncSubstepMetric copyWithZone:] */

undefined8 FUN_106e774c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e774e4; end: 106e77543; -[SCN2XFeedSyncSubstepMetric hash] */

void FUN_106e774e4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f78d8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e77544; end: 106e77587; -[SCN2XFeedSyncSubstepMetric internalInit] */

void FUN_106e77544(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f78d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e77588; end: 106e77627; -[SCN2XFeedSyncSubstepMetric isEqual:] */

long FUN_106e77588(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e7760c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_106e7760c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106e7760c;
    }
  }
  lVar3 = 1;
LAB_106e7760c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e77628; end: 106e776ab; -[SCN2XFeedSyncSubstepMetric matchRenderedViewModels:cellAppeared:] */

void FUN_106e77628(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e776ac; end: 106e776b7; -[SCN2XFeedSyncSubstepMetric .cxx_destruct] */

void FUN_106e776ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e776b8; end: 106e7771b; +[SCN2XStepMetric enterTargetScreenWithConversationId:] */

void FUN_106e776b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0960;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e7771c; end: 106e777b3; +[SCN2XStepMetric messageReadyWithConversationId:messageTrackingId:] */

void FUN_106e7771c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0960;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e777b4; end: 106e7784b; +[SCN2XStepMetric prefetchWithConversationId:messageTrackingId:] */

void FUN_106e777b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0960;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e7784c; end: 106e778e3; +[SCN2XStepMetric syncWithConversationId:messageTrackingId:] */

void FUN_106e7784c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0960;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e778e4; end: 106e77907; -[SCN2XStepMetric copyWithZone:] */

undefined8 FUN_106e778e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e77908; end: 106e779bb; -[SCN2XStepMetric hash] */

void FUN_106e77908(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126f78e0;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e779bc; end: 106e779ff; -[SCN2XStepMetric internalInit] */

void FUN_106e779bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f78e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e77a00; end: 106e77b2f; -[SCN2XStepMetric isEqual:] */

long FUN_106e77a00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e77b08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e77b14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_106e77b14;
                  }
                  goto LAB_106e77b08;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e77b14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e77b30; end: 106e77c23; -[SCN2XStepMetric matchEnterTargetScreen:sync:prefetch:messageReady:] */

void FUN_106e77b30(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_106e77bf4;
    }
    if ((lVar3 != 1) || (param_4 == 0)) goto LAB_106e77bf4;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    pcVar4 = *(code **)(param_4 + 0x10);
    lVar3 = param_4;
  }
  else if (lVar3 == 2) {
    if (param_5 == 0) goto LAB_106e77bf4;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar3 = param_5;
  }
  else {
    if ((lVar3 != 3) || (param_6 == 0)) goto LAB_106e77bf4;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    pcVar4 = *(code **)(param_6 + 0x10);
    lVar3 = param_6;
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_106e77bf4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e77c24; end: 106e77c8f; -[SCN2XStepMetric .cxx_destruct] */

void FUN_106e77c24(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e77c90; end: 106e77cdb; +[SCNotificationToMessageReadyLifecycleEvent didEnd] */

void FUN_106e77c90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c0968;
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



/* Entry: 106e77cdc; end: 106e77d2f; +[SCNotificationToMessageReadyLifecycleEvent didStartWithFlowTargetScreen:] */

void FUN_106e77cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c0968;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e77d30; end: 106e77d53; -[SCNotificationToMessageReadyLifecycleEvent copyWithZone:] */

undefined8 FUN_106e77d30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e77d54; end: 106e77db3; -[SCNotificationToMessageReadyLifecycleEvent hash] */

void FUN_106e77d54(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_20 = -lVar1;
  if (-1 < lVar1) {
    lStack_20 = lVar1;
  }
  puVar2 = &uStack_28;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f78e8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e77db4; end: 106e77df7; -[SCNotificationToMessageReadyLifecycleEvent internalInit] */

void FUN_106e77db4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f78e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e77df8; end: 106e77e8f; -[SCNotificationToMessageReadyLifecycleEvent isEqual:] */

bool FUN_106e77df8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106e77e90; end: 106e77f13; -[SCNotificationToMessageReadyLifecycleEvent matchDidStart:didEnd:] */

void FUN_106e77e90(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e77f14; end: 106e7800f; -[SCCommunitiesOrgNetworkServices initWithCommunitiesStoryCommentNetworkRequester:communitiesStoryMuteNetworkRequester:communitiesOrgNetworkRequester:communitiesGroupChatNetworkRequester:] */

undefined1 *
FUN_106e77f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f78f0;
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



/* Entry: 106e78010; end: 106e78017; -[SCCommunitiesOrgNetworkServices communitiesStoryCommentNetworkRequester] */

undefined8 FUN_106e78010(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e78018; end: 106e7801f; -[SCCommunitiesOrgNetworkServices communitiesStoryMuteNetworkRequester] */

undefined8 FUN_106e78018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e78020; end: 106e78027; -[SCCommunitiesOrgNetworkServices communitiesOrgNetworkRequester] */

undefined8 FUN_106e78020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e78028; end: 106e7802f; -[SCCommunitiesOrgNetworkServices communitiesGroupChatNetworkRequester] */

undefined8 FUN_106e78028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e78030; end: 106e78077; -[SCCommunitiesOrgNetworkServices .cxx_destruct] */

void FUN_106e78030(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e78078; end: 106e780eb; -[SCChatThreatsScanningServices initWithChatThreatsScanner:] */

undefined1 * FUN_106e78078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f78f8;
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



/* Entry: 106e780ec; end: 106e780f3; -[SCChatThreatsScanningServices chatThreatsScanner] */

undefined8 FUN_106e780ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


