/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b026494; end: 10b02654f; -[SCCSnapEditorScissorToolCutoutsProvider initWithIsEnabled:getCutouts:cutoutSelected:] */

undefined8
FUN_10b026494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  _objc_retainBlock();
  func_0x00010b026858();
  puStack_48 = PTR_PTR_1127047a0;
  uStack_50 = param_1;
  func_0x00010b026870();
  _objc_msgSendSuper2(&uStack_50,param_2,0);
  func_0x00010b02687c();
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_5;
}



/* Entry: 10b026550; end: 10b02657b; +[SCCSnapEditorScissorToolCutoutsProvider valdiMarshallableObjectDescriptor] */

void FUN_10b026550(undefined8 *param_1)

{
  *param_1 = &PTR_s_isEnabled_110cade30;
  param_1[1] = &PTR_DAT_110cade90;
  param_1[2] = &PTR_s_ol_o_110cadde8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02657c; end: 10b0265cb;  */

void FUN_10b02657c(void)

{
  func_0x00010b026888();
  func_0x00010b026860();
  func_0x00010b026814(FUN_10b026794);
  func_0x00010b0268a4();
  func_0x00010b026840();
  func_0x00010b026858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0265cc; end: 10b0265df;  */

void FUN_10b0265cc(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0265dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2[1],*param_2,param_2[2]);
  return;
}



/* Entry: 10b0265e0; end: 10b02662f;  */

void FUN_10b0265e0(void)

{
  func_0x00010b026888();
  func_0x00010b026860();
  func_0x00010b026814(0x10b0267bc);
  func_0x00010b0268a4();
  func_0x00010b026840();
  func_0x00010b026858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b026630; end: 10b02665f; -[SCCSnapEditorScissorToolExtractedCustomSticker initWithItemInstance:center:] */

void FUN_10b026630(void)

{
  func_0x00010b026870();
  func_0x00010b026834();
  return;
}



/* Entry: 10b026660; end: 10b026673; +[SCCSnapEditorScissorToolExtractedCustomSticker valdiMarshallableObjectDescriptor] */

void FUN_10b026660(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cadea0;
  param_1[1] = &PTR_DAT_110cadee8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026674; end: 10b0266ab; -[SCCSnapEditorScissorToolScissorDependencies initWithSnapCutProvider:] */

void FUN_10b026674(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127047b0;
  uStack_20 = param_1;
  func_0x00010b026870();
  _objc_msgSendSuper2(&uStack_20,param_2,0);
  return;
}



/* Entry: 10b0266ac; end: 10b0266bf; +[SCCSnapEditorScissorToolScissorDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b0266ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cadf00;
  param_1[1] = &PTR_DAT_110cadf60;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0266c0; end: 10b02670b; -[SCCSnapEditorScissorToolSnapCutProvider initWithExtractCut:] */

undefined8 FUN_10b0266c0(undefined8 param_1)

{
  _objc_retainBlock();
  func_0x00010b026870();
  func_0x00010b026834();
  func_0x00010b02687c();
  return param_1;
}



/* Entry: 10b02670c; end: 10b026743; +[SCCSnapEditorScissorToolSnapCutProvider valdiMarshallableObjectDescriptor] */

void FUN_10b02670c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cadfb0;
  param_1[1] = &PTR_DAT_110cadfe0;
  param_1[2] = &PTR_DAT_110cadf80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026744; end: 10b026793;  */

void FUN_10b026744(void)

{
  func_0x00010b026888();
  func_0x00010b026860();
  func_0x00010b026814(0x10b0267e8);
  func_0x00010b0268a4();
  func_0x00010b026840();
  func_0x00010b026858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b026794; end: 10b026813;  */

void FUN_10b026794(long param_1)

{
  func_0x00010b02689c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  return;
}



/* Entry: 10b026814; end: 10b0268b3;  */

void FUN_10b026814(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b0268b4; end: 10b026917; -[SCCSnapEditorSnapModesToolSnapModesAdapter initWithApplySnapModesWithResult:] */

undefined8 * FUN_10b0268b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_1127047c0;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b026918; end: 10b02692b; +[SCCSnapEditorSnapModesToolSnapModesAdapter valdiMarshallableObjectDescriptor] */

void FUN_10b026918(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cae060;
  param_1[1] = &PTR_DAT_110cae090;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02692c; end: 10b02694f; -[SCCSnapEditorSnapModesToolSnapModesToolConfig init] */

void FUN_10b02692c(void)

{
  func_0x00010b0269a0(PTR_PTR_1127047c8);
  return;
}



/* Entry: 10b026950; end: 10b026967; +[SCCSnapEditorSnapModesToolSnapModesToolConfig valdiMarshallableObjectDescriptor] */

void FUN_10b026950(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e54f1c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026968; end: 10b02698b; -[SCCSnapEditorSnapModesToolSnapModesToolDependencies init] */

void FUN_10b026968(void)

{
  func_0x00010b0269a0(PTR_PTR_1127047d0);
  return;
}



/* Entry: 10b02698c; end: 10b0269c3; +[SCCSnapEditorSnapModesToolSnapModesToolDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b02698c(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110cae0a0;
  param_1[1] = &PTR_DAT_110cae0e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0269c4; end: 10b0269f7; -[SCCSnapEditorReverseToolReverseConfig init] */

void FUN_10b0269c4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127047d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b0269f8; end: 10b026a0f; +[SCCSnapEditorReverseToolReverseConfig valdiMarshallableObjectDescriptor] */

void FUN_10b0269f8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e54f1e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026a10; end: 10b026a73; -[SCCSnapEditorReverseToolReverseDependencies initWithGetReverseMedia:] */

undefined8 * FUN_10b026a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_1127047e0;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b026a74; end: 10b026aa7; +[SCCSnapEditorReverseToolReverseDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b026a74(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110cae130;
  param_1[1] = &PTR_DAT_110cae178;
  param_1[2] = &PTR_s_ol_o_110cae100;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026aa8; end: 10b026b27;  */

void FUN_10b026aa8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b026b28;
  puStack_30 = &UNK_11084d0d8;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b026b28; end: 10b026b53;  */

void FUN_10b026b28(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b026b54; end: 10b026b77; -[SCCSnapEditorStoryToolStoryConfig init] */

void FUN_10b026b54(void)

{
  func_0x00010b026bd4(PTR_PTR_1127047e8);
  return;
}



/* Entry: 10b026b78; end: 10b026b8f; +[SCCSnapEditorStoryToolStoryConfig valdiMarshallableObjectDescriptor] */

void FUN_10b026b78(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e54f1f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026b90; end: 10b026bb3; -[SCCSnapEditorStoryToolStoryDependencies init] */

void FUN_10b026b90(void)

{
  func_0x00010b026bd4(PTR_PTR_1127047f0);
  return;
}



/* Entry: 10b026bb4; end: 10b026be7; +[SCCSnapEditorStoryToolStoryDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b026bb4(undefined8 *param_1)

{
  *param_1 = &PTR_s_storyServices_110cae190;
  param_1[1] = &PTR_DAT_110cae1c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026be8; end: 10b026c0b; -[SCCSnapEditorThumbnailToolThumbnailConfig init] */

void FUN_10b026be8(void)

{
  func_0x00010b026c68(PTR_PTR_1127047f8);
  return;
}



/* Entry: 10b026c0c; end: 10b026c23; +[SCCSnapEditorThumbnailToolThumbnailConfig valdiMarshallableObjectDescriptor] */

void FUN_10b026c0c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e54f210;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026c24; end: 10b026c47; -[SCCSnapEditorThumbnailToolThumbnailDependencies init] */

void FUN_10b026c24(void)

{
  func_0x00010b026c68(PTR_PTR_112704800);
  return;
}



/* Entry: 10b026c48; end: 10b026c7b; +[SCCSnapEditorThumbnailToolThumbnailDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b026c48(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110cae1d0;
  param_1[1] = &PTR_DAT_110cae200;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026c7c; end: 10b026cef; -[SCCSnapEditorTimerToolTimerDependencies initWithShowLightning:didTapLightning:] */

undefined8 *
FUN_10b026c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retainBlock();
  puStack_38 = PTR_PTR_112704808;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b026cf0; end: 10b026d0f; +[SCCSnapEditorTimerToolTimerDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b026cf0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cae210;
  param_1[1] = &PTR_s_SCBridgeObservable_110cae288;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026d10; end: 10b026d6f; -[SCCSnapEditorToggleLensToolLensType__Enum init] */

void FUN_10b026d10(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  
  func_0x00010b026f7c();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f4c8d8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f4c8f8;
  func_0x00010b026f4c(&PTR____CFConstantStringClassReference_110f4c918);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b026f3c();
  func_0x00010b026f1c();
  func_0x00010b026f64();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_48 = FUN_10b026d70;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010b026f7c();
    ppuStack_80 = &PTR____CFConstantStringClassReference_110db6dd8;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110de7678;
    func_0x00010b026f4c(&PTR____CFConstantStringClassReference_110dd2398);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b026f3c();
    func_0x00010b026f1c();
    func_0x00010b026f64();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcStack_88 = FUN_10b026dd0;
      puStack_98 = PTR_PTR_112704810;
      uStack_a0 = param_1;
      ppuStack_90 = &puStack_50;
      _objc_msgSendSuper2(&uStack_a0,PTR_s_initWithFieldValues__1125e24b8,0);
      return;
    }
  }
  return;
}



/* Entry: 10b026d70; end: 10b026dcf; -[SCCSnapEditorToggleLensToolSupportedMediaType__Enum init] */

void FUN_10b026d70(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  
  func_0x00010b026f7c();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110db6dd8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110de7678;
  func_0x00010b026f4c(&PTR____CFConstantStringClassReference_110dd2398);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b026f3c();
  func_0x00010b026f1c();
  func_0x00010b026f64();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10b026dd0;
  puStack_58 = PTR_PTR_112704810;
  uStack_60 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b026dd0; end: 10b026e0f; -[SCCSnapEditorToggleLensToolToggleLens initWithLensId:lensType:supportedMediaType:] */

void FUN_10b026dd0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704810;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b026e10; end: 10b026e23; +[SCCSnapEditorToggleLensToolToggleLens valdiMarshallableObjectDescriptor] */

void FUN_10b026e10(undefined8 *param_1)

{
  *param_1 = &PTR_s_lensId_110cae2a0;
  param_1[1] = &PTR_DAT_110cae300;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026e24; end: 10b026e77; -[SCCSnapEditorToggleLensToolToggleLensAdapter initWithApplyLensWithResult:] */

undefined8 FUN_10b026e24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_112704818;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFieldValues__1125e24b8,0);
  func_0x00010b026f1c();
  return param_1;
}



/* Entry: 10b026e78; end: 10b026e8b; +[SCCSnapEditorToggleLensToolToggleLensAdapter valdiMarshallableObjectDescriptor] */

void FUN_10b026e78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cae318;
  param_1[1] = &PTR_DAT_110cae348;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026e8c; end: 10b026eaf; -[SCCSnapEditorToggleLensToolToggleLensToolConfig init] */

void FUN_10b026e8c(void)

{
  func_0x00010b026f28(PTR_PTR_112704820);
  return;
}



/* Entry: 10b026eb0; end: 10b026ec7; +[SCCSnapEditorToggleLensToolToggleLensToolConfig valdiMarshallableObjectDescriptor] */

void FUN_10b026eb0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e54f228;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026ec8; end: 10b026eeb; -[SCCSnapEditorToggleLensToolToggleLensToolDependencies init] */

void FUN_10b026ec8(void)

{
  func_0x00010b026f28(PTR_PTR_112704828);
  return;
}



/* Entry: 10b026eec; end: 10b026f93; +[SCCSnapEditorToggleLensToolToggleLensToolDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b026eec(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110cae358;
  param_1[1] = &PTR_DAT_110cae3a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026f94; end: 10b026fb7; -[SCCSnapEditorTrashCanToolTrashCanConfig init] */

void FUN_10b026f94(void)

{
  func_0x00010b027014(PTR_PTR_112704830);
  return;
}



/* Entry: 10b026fb8; end: 10b026fcf; +[SCCSnapEditorTrashCanToolTrashCanConfig valdiMarshallableObjectDescriptor] */

void FUN_10b026fb8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e54f240;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026fd0; end: 10b026ff3; -[SCCSnapEditorTrashCanToolTrashCanDependencies init] */

void FUN_10b026fd0(void)

{
  func_0x00010b027014(PTR_PTR_112704838);
  return;
}



/* Entry: 10b026ff4; end: 10b027027; +[SCCSnapEditorTrashCanToolTrashCanDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b026ff4(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110cae3b8;
  param_1[1] = &PTR_DAT_110cae3e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b027028; end: 10b02704b; -[SCCSnapEditorVolumeToolVolumeConfig init] */

void FUN_10b027028(void)

{
  func_0x00010b0270a8(PTR_PTR_112704840);
  return;
}



/* Entry: 10b02704c; end: 10b027063; +[SCCSnapEditorVolumeToolVolumeConfig valdiMarshallableObjectDescriptor] */

void FUN_10b02704c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e54f258;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b027064; end: 10b027087; -[SCCSnapEditorVolumeToolVolumeDependencies init] */

void FUN_10b027064(void)

{
  func_0x00010b0270a8(PTR_PTR_112704848);
  return;
}



/* Entry: 10b027088; end: 10b0270bb; +[SCCSnapEditorVolumeToolVolumeDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b027088(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110cae3f8;
  param_1[1] = &PTR_DAT_110cae428;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0270bc; end: 10b0270df; -[SCAudioEffectsToolContext initWithActionHandler:] */

void FUN_10b0270bc(void)

{
  func_0x00010b0271ac(PTR_PTR_112704850);
  func_0x00010b027180();
  return;
}



/* Entry: 10b0270e0; end: 10b0270f3; +[SCAudioEffectsToolContext valdiMarshallableObjectDescriptor] */

void FUN_10b0270e0(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_110cae438;
  param_1[1] = &PTR_DAT_110cae4c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0270f4; end: 10b02711b; -[SCAudioEffectsToolViewModel initWithSelectedEffectId:] */

void FUN_10b0270f4(void)

{
  func_0x00010b0271ac(PTR_PTR_112704858);
  func_0x00010b027180();
  return;
}



/* Entry: 10b02711c; end: 10b02712f; +[SCAudioEffectsToolViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b02711c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cae4e8;
  param_1[1] = &PTR_DAT_110cae590;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b027130; end: 10b027167; -[SCCAudioEffectsMusicMixData initWithVolume:] */

void FUN_10b027130(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b0271ac(PTR_PTR_112704860);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 10b027168; end: 10b0271c3; +[SCCAudioEffectsMusicMixData valdiMarshallableObjectDescriptor] */

void FUN_10b027168(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_trackId_110cae5a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0271c4; end: 10b027203; -[SCCAudioEffectsApiAudioEffectItem initWithTitle:imageUrl:toolbarImageUrl:effectId:] */

void FUN_10b0271c4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704868;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b027204; end: 10b02721b; +[SCCAudioEffectsApiAudioEffectItem valdiMarshallableObjectDescriptor] */

void FUN_10b027204(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_title_110cae630;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02721c; end: 10b027257; -[SCCSnapEditorWallpaperRemixToolWallpaperRemixConfig initWithWallpaperRemixEnabled:conversationId:] */

void FUN_10b02721c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704870;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b027258; end: 10b02726f; +[SCCSnapEditorWallpaperRemixToolWallpaperRemixConfig valdiMarshallableObjectDescriptor] */

void FUN_10b027258(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cae6a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b027270; end: 10b0272a3; -[SCCSnapEditorWallpaperRemixToolWallpaperRemixDependencies init] */

void FUN_10b027270(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704878;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b0272a4; end: 10b0272c3; +[SCCSnapEditorWallpaperRemixToolWallpaperRemixDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b0272a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cae6f0;
  param_1[1] = &PTR_DAT_110cae720;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0272c4; end: 10b0272e7; -[SCCSnapEditorSendToMoreFriendsToolSendToMoreFriendsConfig init] */

void FUN_10b0272c4(void)

{
  func_0x00010b027344(PTR_PTR_112704880);
  return;
}



/* Entry: 10b0272e8; end: 10b0272ff; +[SCCSnapEditorSendToMoreFriendsToolSendToMoreFriendsConfig valdiMarshallableObjectDescriptor] */

void FUN_10b0272e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e54f270;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b027300; end: 10b027323; -[SCCSnapEditorSendToMoreFriendsToolSendToMoreFriendsDependencies init] */

void FUN_10b027300(void)

{
  func_0x00010b027344(PTR_PTR_112704888);
  return;
}



/* Entry: 10b027324; end: 10b027357; +[SCCSnapEditorSendToMoreFriendsToolSendToMoreFriendsDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b027324(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110cae730;
  param_1[1] = &PTR_DAT_110cae760;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b027358; end: 10b02735f; -[SCCSnapEditorCommentsSnapReplyPostingPolicy__Enum init] */

void FUN_10b027358(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b027360; end: 10b027367; -[SCCSnapEditorSpotlightSubmissionButtonAppearance__Enum init] */

void FUN_10b027360(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b027368; end: 10b02736f; -[SCCSnapEditorSpotlightSubmissionButtonVariant__Enum init] */

void FUN_10b027368(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b027370; end: 10b0273af; -[SCCSnapEditorSpotlightSubmissionToolSpotlightSubmissionConfig initWithAppearance:variant:] */

void FUN_10b027370(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704890;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b0273b0; end: 10b0273cf; +[SCCSnapEditorSpotlightSubmissionToolSpotlightSubmissionConfig valdiMarshallableObjectDescriptor] */

void FUN_10b0273b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cae770;
  param_1[1] = &PTR_DAT_110cae7d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0273d0; end: 10b0273f3; -[SCCSnapEditorSendToolSendConfig init] */

void FUN_10b0273d0(void)

{
  func_0x00010b027440(PTR_PTR_112704898);
  return;
}



/* Entry: 10b0273f4; end: 10b027407; +[SCCSnapEditorSendToolSendConfig valdiMarshallableObjectDescriptor] */

void FUN_10b0273f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cae7f0;
  param_1[1] = &PTR_DAT_110cae910;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b027408; end: 10b02742b; -[SCCSnapEditorSendToolSendDependencies init] */

void FUN_10b027408(void)

{
  func_0x00010b027440(PTR_PTR_1127048a0);
  return;
}



/* Entry: 10b02742c; end: 10b027463; +[SCCSnapEditorSendToolSendDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b02742c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cae930;
  param_1[1] = &PTR_DAT_110cae960;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b027464; end: 10b027487; -[SCCSnapEditorSaveToolSaveConfig init] */

void FUN_10b027464(void)

{
  func_0x00010b0274d4(PTR_PTR_1127048a8);
  return;
}



/* Entry: 10b027488; end: 10b02749b; +[SCCSnapEditorSaveToolSaveConfig valdiMarshallableObjectDescriptor] */

void FUN_10b027488(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cae970;
  param_1[1] = &PTR_DAT_110caea00;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02749c; end: 10b0274bf; -[SCCSnapEditorSaveToolSaveDependencies init] */

void FUN_10b02749c(void)

{
  func_0x00010b0274d4(PTR_PTR_1127048b0);
  return;
}



/* Entry: 10b0274c0; end: 10b0274f7; +[SCCSnapEditorSaveToolSaveDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b0274c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caea10;
  param_1[1] = &PTR_DAT_110caea40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0274f8; end: 10b02755b; -[SCCCopyLinkSheetComponentContext initWithDismiss:] */

undefined8 * FUN_10b0274f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_1127048b8;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b02755c; end: 10b027573; +[SCCCopyLinkSheetComponentContext valdiMarshallableObjectDescriptor] */

void FUN_10b02755c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_dismiss_110caea50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b027574; end: 10b02757f; -[SCSnapKitDeeplinkingServices deeplinkUtilitiesProvider] */

void FUN_10b027574(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 10b027580; end: 10b027587; -[SCSnapKitDeeplinkingServices setDeeplinkUtilitiesProvider:] */

void FUN_10b027580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10b027588; end: 10b027593; -[SCSnapKitDeeplinkingServices snapKitStickerHelper] */

void FUN_10b027588(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 10b027594; end: 10b02759b; -[SCSnapKitDeeplinkingServices setSnapKitStickerHelper:] */

void FUN_10b027594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10b02759c; end: 10b0275a3; -[SCSnapKitDeeplinkingServices creativeKitWebDataLoader] */

undefined8 FUN_10b02759c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0275a4; end: 10b0275ab; -[SCSnapKitDeeplinkingServices snapKitDeepLinkFactory] */

undefined8 FUN_10b0275a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0275ac; end: 10b0275b7; -[SCSnapKitDeeplinkingServices oAuthPermissionScopeHandler] */

void FUN_10b0275ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 10b0275b8; end: 10b0275bf; -[SCSnapKitDeeplinkingServices setOAuthPermissionScopeHandler:] */

void FUN_10b0275b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10b0275c0; end: 10b027613; -[SCSnapKitDeeplinkingServices .cxx_destruct] */

void FUN_10b0275c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b027614; end: 10b02771f; -[SCSnapKitStickerStyle initWithAppName:attachmentUrl:type:appId:] */

undefined1 *
FUN_10b027614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127048c8;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b027720; end: 10b027743; -[SCSnapKitStickerStyle copyWithZone:] */

undefined8 FUN_10b027720(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b027744; end: 10b0277cf; -[SCSnapKitStickerStyle hash] */

undefined8 * FUN_10b027744(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b027880:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b02788c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b02788c;
            }
            goto LAB_10b027880;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b02788c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0277d0; end: 10b0278a7; -[SCSnapKitStickerStyle isEqual:] */

long FUN_10b0277d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b027880:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b02788c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b02788c;
            }
            goto LAB_10b027880;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b02788c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0278a8; end: 10b0278af; -[SCSnapKitStickerStyle appName] */

undefined8 FUN_10b0278a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0278b0; end: 10b0278b7; -[SCSnapKitStickerStyle attachmentUrl] */

undefined8 FUN_10b0278b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


