/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ba12b8; end: 108ba132b; -[SCBitmojiCameraAdaptorPermissionRequesterServices initWithPermissionRequester:] */

undefined1 * FUN_108ba12b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd5f0;
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



/* Entry: 108ba132c; end: 108ba1333; -[SCBitmojiCameraAdaptorPermissionRequesterServices permissionRequester] */

undefined8 FUN_108ba132c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ba1334; end: 108ba133f; -[SCBitmojiCameraAdaptorPermissionRequesterServices .cxx_destruct] */

void FUN_108ba1334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba1340; end: 108ba13b3; -[SCBitmojiCameraAdaptorPreviewViewProviderServices initWithPreviewViewProvider:] */

undefined1 * FUN_108ba1340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd5f8;
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



/* Entry: 108ba13b4; end: 108ba13bb; -[SCBitmojiCameraAdaptorPreviewViewProviderServices previewViewProvider] */

undefined8 FUN_108ba13b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ba13bc; end: 108ba13c7; -[SCBitmojiCameraAdaptorPreviewViewProviderServices .cxx_destruct] */

void FUN_108ba13bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba13c8; end: 108ba13d3; +[SCCBitmojiRegPromptGetPresetBitmojisUrl modulePath] */

undefined ** FUN_108ba13c8(void)

{
  return &PTR____CFConstantStringClassReference_110ee9b38;
}



/* Entry: 108ba13d4; end: 108ba13db; +[SCCBitmojiRegPromptGetPresetBitmojisUrl asyncStrictMode] */

undefined8 FUN_108ba13d4(void)

{
  return 0;
}



/* Entry: 108ba13dc; end: 108ba141f; -[SCCBitmojiRegPromptGetPresetBitmojisUrl getPresetBitmojisUrl] */

void FUN_108ba13dc(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  FUN_108ba1640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108ba1420; end: 108ba14cf; +[SCCBitmojiRegPromptGetPresetBitmojisUrl invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_108ba1420(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108ba14d0;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(lStack_30);
  FUN_108ba1640();
  _objc_release(param_3);
  return;
}



/* Entry: 108ba14d0; end: 108ba1557;  */

void FUN_108ba14d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126daf68;
  func_0x00010bfbc0e0(PTR_PTR_1126daf68,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ba1558; end: 108ba1573; +[SCCBitmojiRegPromptGetPresetBitmojisUrl valdiMarshallableObjectDescriptor] */

void FUN_108ba1558(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ab57f8;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 108ba1574; end: 108ba157f; +[SCCBitmojiRegPromptView componentPath] */

undefined ** FUN_108ba1574(void)

{
  return &PTR____CFConstantStringClassReference_110ee9b58;
}



/* Entry: 108ba1580; end: 108ba15b3; -[SCCBitmojiRegPromptView initWithViewModel:componentContext:runtime:] */

void FUN_108ba1580(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fd600;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 108ba15b4; end: 108ba15ff; -[SCCBitmojiRegPromptView setViewModel:] */

void FUN_108ba15b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_108ba1640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ba1600; end: 108ba163f; -[SCCBitmojiRegPromptView viewModel] */

void FUN_108ba1600(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_108ba1640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108ba1640; end: 108ba1647;  */

void FUN_108ba1640(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108ba1648; end: 108ba16e7; -[SCCBitmojiRegPromptViewContext initWithOnTapContinue:onTapSkip:] */

undefined8 *
FUN_108ba1648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_1126fd608;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 108ba16e8; end: 108ba16ff; +[SCCBitmojiRegPromptViewContext valdiMarshallableObjectDescriptor] */

void FUN_108ba16e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ab5828;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 108ba1700; end: 108ba17a7; -[SCCameraBIPAScope initWithUIContainer:completionBlock:] */

undefined1 *
FUN_108ba1700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd610;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ba17a8; end: 108ba17af; -[SCCameraBIPAScope uiContainer] */

undefined8 FUN_108ba17a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ba17b0; end: 108ba17b7; -[SCCameraBIPAScope completionBlock] */

undefined8 FUN_108ba17b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ba17b8; end: 108ba17e7; -[SCCameraBIPAScope .cxx_destruct] */

void FUN_108ba17b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba17e8; end: 108ba17eb; -[SCBusinessLogic begin] */

void FUN_108ba17e8(void)

{
  return;
}



/* Entry: 108ba17ec; end: 108ba17f3; -[SCBusinessLogic handleAction:] */

void FUN_108ba17ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf879b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_doesNotRecognizeSelector__1125bf810,param_2);
  return;
}



/* Entry: 108ba17f4; end: 108ba17fb; -[SCBusinessLogic onBusinessLogicQueue] */

undefined8 FUN_108ba17f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ba17fc; end: 108ba1803; -[SCBusinessLogic setOnBusinessLogicQueue:] */

void FUN_108ba17fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ba1804; end: 108ba180b; -[SCBusinessLogic emitViewModel] */

undefined8 FUN_108ba1804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ba180c; end: 108ba1813; -[SCBusinessLogic setEmitViewModel:] */

void FUN_108ba180c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ba1814; end: 108ba181b; -[SCBusinessLogic viewModel] */

undefined8 FUN_108ba1814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ba181c; end: 108ba1857; -[SCBusinessLogic .cxx_destruct] */

void FUN_108ba181c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba1858; end: 108ba18d7; -[SCBusinessLogicHarness initWithBusinessLogic:] */

undefined8 FUN_108ba1858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1c3080();
  func_0x00010c1e62c0(puVar1,param_2,0x19);
  func_0x00010bff9ca0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 108ba18d8; end: 108ba1baf; -[SCBusinessLogicHarness initWithBusinessLogic:businessLogicQueue:] */

undefined8 *
FUN_108ba18d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = PTR_PTR_1126fd618;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    _objc_initWeak(auStack_90,puVar1[1]);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108ba1bb0;
    puStack_a0 = &UNK_110841f50;
    _objc_retain(param_4);
    uStack_98 = param_4;
    func_0x00010c1d1740(puVar1[1]);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar2);
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_108ba1bbc;
    puStack_c8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_c0,auStack_88);
    func_0x00010c1943a0(puVar1[1]);
    puVar4 = PTR_PTR_1126daf70;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01de80();
    uVar6 = puVar1[6];
    puVar1[6] = puVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = puVar1[6];
    func_0x00010beef480(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea1900(puVar1);
    _objc_release(uVar2);
    lVar5 = puVar1[1];
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x108ba1be8;
    puStack_f0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_e8,auStack_90);
    (**(code **)(lVar5 + 0x10))(lVar5,&puStack_108);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108ba1bb0; end: 108ba1bbb;  */

void FUN_108ba1bb0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addOperationWithBlock__11259c290,param_2);
  return;
}



/* Entry: 108ba1bbc; end: 108ba1c13;  */

void FUN_108ba1bbc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be08600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ba1c14; end: 108ba1c3b; -[SCBusinessLogicHarness screen] */

void FUN_108ba1c14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ba1c3c; end: 108ba1cd7; -[SCBusinessLogicHarness addChildBusinessLogic:] */

void FUN_108ba1c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aec60;
  _objc_alloc(PTR_PTR_1126aec60);
  func_0x00010bff9ca0();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ba1cd8; end: 108ba1de3; -[SCBusinessLogicHarness _setActions:] */

void FUN_108ba1cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0e0e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108ba1de4; end: 108ba1e2b;  */

void FUN_108ba1de4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ba1e2c; end: 108ba1e6b; -[SCBusinessLogicHarness _emitViewModel] */

void FUN_108ba1e2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ba1e6c; end: 108ba1e73; -[SCBusinessLogicHarness _handleNewAction:] */

void FUN_108ba1e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcfff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_handleAction__1125d19a0)
  ;
  return;
}



/* Entry: 108ba1e74; end: 108ba1ed3; -[SCBusinessLogicHarness .cxx_destruct] */

void FUN_108ba1e74(long param_1)

{
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



/* Entry: 108ba1ed4; end: 108ba1f77; -[SCRouter initWithRouteActions:routingQueue:] */

undefined1 *
FUN_108ba1ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd620;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ba1f78; end: 108ba1feb; -[SCRouter initWithRouteActions:] */

undefined8 FUN_108ba1f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_retain(param_3);
  func_0x00010c0b6ba0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0404e0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 108ba1fec; end: 108ba201b; -[SCRouter startRoute] */

void FUN_108ba1fec(void)

{
  _objc_alloc(PTR_PTR_1126daf78);
  func_0x00010c0404e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ba201c; end: 108ba2073; -[SCRouter runRouteWithAction:] */

void FUN_108ba201c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c250460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  _objc_release(param_3);
  func_0x00010c142680(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ba2074; end: 108ba20a3; -[SCRouter .cxx_destruct] */

void FUN_108ba2074(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba20a4; end: 108ba2163; -[SCRoute initWithRouteActions:routingQueue:] */

undefined1 *
FUN_108ba20a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd628;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ba2164; end: 108ba219b; -[SCRoute addAction:] */

void FUN_108ba2164(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retainBlock(param_3);
  func_0x00010befa120(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ba219c; end: 108ba239b; -[SCRoute run] */

void FUN_108ba219c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x108ba22a0;
  puStack_58 = &UNK_110841f80;
  _objc_retain();
  uStack_50 = uVar1;
  _objc_retain(uVar4);
  uStack_48 = uVar4;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010bf5fce0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = *(undefined **)(param_1 + 0x10);
  _objc_release();
  if (puVar3 == puVar5) {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  else {
    func_0x00010befa3a0(*(undefined8 *)(param_1 + 0x10),param_2,ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar1);
  _objc_release(uVar4);
  return;
}



/* Entry: 108ba239c; end: 108ba23d7; -[SCRoute .cxx_destruct] */

void FUN_108ba239c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba23d8; end: 108ba24b3; -[SCScreen initWithInitialViewModel:viewModels:] */

undefined1 *
FUN_108ba23d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd630;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ba24b4; end: 108ba25cf; -[SCScreen _observeViewModelUpdates] */

void FUN_108ba24b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108ba25d0; end: 108ba2617;  */

void FUN_108ba25d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8e660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ba2618; end: 108ba262f; -[SCScreen _renderViewModel:] */

void FUN_108ba2618(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108ba2628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 108ba2630; end: 108ba2657; -[SCScreen actions] */

void FUN_108ba2630(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ba2658; end: 108ba26a7; -[SCScreen startRenderingViewModels:] */

void FUN_108ba2658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return;
  }
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  func_0x00010be8e660(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be67130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeViewModelUpdates_1125775e8);
  return;
}



/* Entry: 108ba26a8; end: 108ba26af; -[SCScreen emitAction:] */

void FUN_108ba26a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 108ba26b0; end: 108ba2703; -[SCScreen .cxx_destruct] */

void FUN_108ba26b0(long param_1)

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



/* Entry: 108ba2704; end: 108ba2fb3; -[SCPrePromptPermissionCustomDialogView initWithFrame:ghostImage:dialogTitle:dialogDescription:layoutProvider:okButtonTitle:dontAllowButtonTitle:okButtonHandler:dontAllowButtonHandler:shouldShowRingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108ba2704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,char param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_88 = PTR_PTR_1126fd638;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_13;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112777fe0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112777fe0) = uVar2;
    _objc_release(uVar6);
    uVar2 = param_14;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112777fe4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112777fe4) = uVar2;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112777fe8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112777fec);
    *(undefined **)((long)puVar1 + (long)_DAT_112777fec) = puVar3;
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bfb68e0(puVar1);
    func_0x00010c013de0();
    lVar9 = (long)_DAT_112777ff0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf20d00(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010bf41580(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf20d20(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010bf41580(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar2);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar2);
    func_0x00010bf20d40(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1f5ec0(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010bfb68e0(puVar1);
    func_0x00010c013de0();
    lVar7 = (long)_DAT_112777ff4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c271300(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c266f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c26b9a0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010bf41580(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1c83a0(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar9));
    puVar3 = PTR_PTR_1126af270;
    _objc_opt_new();
    lVar7 = (long)_DAT_112777ff8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6e420(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c266f40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar7));
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar4);
    _objc_release(puVar3);
    func_0x00010c1d0560(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
    func_0x00010c166c00();
    func_0x00010c1bdcc0(0x4000000000000000,puVar5);
    func_0x00010c1d0560(puVar4);
    func_0x00010c1bdd60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c162900(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c099980(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar9));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bfb68e0(puVar1);
    func_0x00010c013de0();
    lVar7 = (long)_DAT_112777ffc;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf20d20();
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar9));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bfb68e0(puVar1);
    func_0x00010c013de0();
    lVar7 = (long)_DAT_112778000;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf20d20(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010c070d00();
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar9));
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010bfb68e0(puVar1);
    func_0x00010c013de0();
    lVar7 = (long)_DAT_112778004;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c216260(*(undefined8 *)((long)puVar1 + lVar7));
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010bf00f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar6);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010bf00f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar6);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010bf00f80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar6);
    _objc_release(uVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar9));
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010bfb68e0(puVar1);
    func_0x00010c013de0();
    lVar7 = (long)_DAT_112778008;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c216260(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010bed71e0(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010bf6d880(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb00();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(uVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c070d00();
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar9));
    if (param_15 != '\0') {
      func_0x00010be3ba40(puVar1);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108ba2fb4; end: 108ba31df; -[SCPrePromptPermissionCustomDialogView updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba2fb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108ba31e0;
  puStack_60 = &UNK_1108471b0;
  lStack_58 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112777fec),param_2,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x108ba32f0;
  puStack_88 = &UNK_1108471b0;
  lStack_80 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112777ff0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108ba3500;
  puStack_b0 = &UNK_1108471b0;
  lStack_a8 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112777ff4));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x108ba3740;
  puStack_d8 = &UNK_1108471b0;
  lStack_d0 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112777ff8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x108ba3a60;
  puStack_100 = &UNK_1108471b0;
  lStack_f8 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112777ffc));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_108ba3ca0;
  puStack_128 = &UNK_1108471b0;
  lStack_120 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112778000));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_108ba3e94;
  puStack_150 = &UNK_1108471b0;
  lStack_148 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112778004));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x108ba40d0;
  puStack_178 = &UNK_1108471b0;
  lStack_170 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112778008));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be49560(param_1);
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_108ba42ec;
  puStack_1a0 = &UNK_1108471b0;
  lStack_198 = param_1;
  func_0x00010c0bbfc0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_1c0 = PTR_PTR_1126fd638;
  lStack_1c8 = param_1;
  _objc_msgSendSuper2(&lStack_1c8,PTR_s_updateConstraints_11267ec30);
  return;
}



/* Entry: 108ba31e0; end: 108ba34ff;  */

void FUN_108ba31e0(long param_1,long param_2)

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
  func_0x00010c0bbec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
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
  uVar3 = *(undefined8 *)(param_1 + 0x20);
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



/* Entry: 108ba3500; end: 108ba3c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba3500(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112777ff0;
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar7);
  func_0x00010c0bbf80(uVar3);
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
  lVar8 = (long)_DAT_112777fe8;
  func_0x00010c0baf80(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar8));
  (**(code **)(lVar6 + 0x10))(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar7);
  func_0x00010c0bc040(uVar3);
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
  func_0x00010c0baf80(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar8));
  (**(code **)(lVar6 + 0x10))(-param_1,lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
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



/* Entry: 108ba3ca0; end: 108ba3e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba3ca0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777ffc);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf25560(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777fe8));
  func_0x00010c0df720(puVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777ff0);
  func_0x00010c0bbec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
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



/* Entry: 108ba3e94; end: 108ba42eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba3e94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777ffc);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar6 = (long)_DAT_112777fe8;
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c070d00();
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112777ff0;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
  if ((uVar4 & 1) == 0) {
    func_0x00010c0bbf80(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0bbec0();
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
  func_0x00010c0bc040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf25560(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ba42ec; end: 108ba44eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba42ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777fec);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112777ff0;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c0bbf80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c0bc040(uVar3);
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



/* Entry: 108ba44ec; end: 108ba451f; -[SCPrePromptPermissionCustomDialogView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba44ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + _DAT_11277800c,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bed71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDontAllowButtonColor_112593620);
  return;
}



/* Entry: 108ba4520; end: 108ba4547; -[SCPrePromptPermissionCustomDialogView setEnablePulsingRingAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba4520(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112777fdc) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112777fdc) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec1610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startRingViewAnimation_11258df28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec3850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopRingViewAnimation_11258e7b8);
  return;
}



/* Entry: 108ba4548; end: 108ba46bf; -[SCPrePromptPermissionCustomDialogView _initializeRingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba4548(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_112778010;
  if (*(long *)(param_2 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010bfb68e0(param_2);
  func_0x00010c013de0();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar3));
  _objc_release(puVar1);
  lVar4 = (long)_DAT_112777fe8;
  func_0x00010c141320(*(undefined8 *)(param_2 + lVar4));
  param_1 = param_1 * 0.5;
  func_0x00010c1f5ec0(param_1,*(undefined8 *)(param_2 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c140f00(*(undefined8 *)(param_2 + lVar4));
  func_0x00010bf41580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c1412a0(*(undefined8 *)(param_2 + lVar4));
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(param_1);
  _objc_release(uVar2);
  func_0x00010c21e900(*(undefined8 *)(param_2 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_addSubview__11259c880,*(undefined8 *)(param_2 + lVar3));
  return;
}



/* Entry: 108ba46c0; end: 108ba4727; -[SCPrePromptPermissionCustomDialogView _layoutRingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba46c0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108ba4728;
  puStack_20 = &UNK_1108471b0;
  lStack_18 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112778010),param_2,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 108ba4728; end: 108ba494b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba4728(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar5 = (long)_DAT_112777fe8;
  func_0x00010c141320(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c141320(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
  func_0x00010c0df720(puVar3);
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
  lVar5 = (long)_DAT_112778004;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c0bbec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c0bbee0(uVar4);
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



/* Entry: 108ba494c; end: 108ba4dcb; -[SCPrePromptPermissionCustomDialogView _startRingViewAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba494c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112778010;
  puVar1 = *(undefined **)(param_1 + lVar8);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf03d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    _objc_release();
    if (puVar3 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
      func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                          &PTR____CFConstantStringClassReference_110dbf258);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)_DAT_112777fe8;
      func_0x00010c140ec0(*(undefined8 *)(param_1 + lVar9));
      func_0x00010c192d40(puVar1);
      func_0x00010c1ea580(puVar1,param_2,0);
      uVar7 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78;
      puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
      func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216080(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010c16d4c0(puVar1,param_2,1);
      func_0x00010c1eabe0(0x7f800000,puVar1);
      uStack_f8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
      uStack_100 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
      uStack_e8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
      uStack_f0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
      uStack_d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
      uStack_e0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
      uStack_c8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
      uStack_d0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
      uStack_138 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
      uStack_140 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
      uStack_128 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
      uStack_130 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
      uStack_118 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
      uVar10 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
      uStack_108 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
      uStack_110 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      uStack_120 = uVar10;
      func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_140);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      puStack_90 = puVar3;
      func_0x00010c141260(*(undefined8 *)(param_1 + lVar9));
      uVar5 = uVar10;
      func_0x00010c141260(*(undefined8 *)(param_1 + lVar9));
      _CATransform3DMakeScale(&uStack_140,uVar10,uVar5,0x3ff0000000000000);
      func_0x00010c297140(puVar2,param_2,&uStack_140);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220360(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar3);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185410;
      func_0x00010c140ec0(*(undefined8 *)(param_1 + lVar9));
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_a0,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6d00(puVar1,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar5);
      puVar4 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
      func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                          &PTR____CFConstantStringClassReference_110dbf678);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c140ec0(*(undefined8 *)(param_1 + lVar9));
      func_0x00010c192d40(puVar4);
      func_0x00010c1ea580(puVar4,param_2,0);
      puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
      func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216080(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010c16d4c0(puVar4,param_2,1);
      func_0x00010c1eabe0(0x7f800000,puVar4);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c141280(*(undefined8 *)(param_1 + lVar9));
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_b0 = puVar2;
      func_0x00010c140f40(*(undefined8 *)(param_1 + lVar9));
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220360(puVar4,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185410;
      func_0x00010c140ec0(*(undefined8 *)(param_1 + lVar9));
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b8 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_c0,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6d00(puVar4,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(puVar1 + _DAT_112778010);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108ba4dcc; end: 108ba4e07; -[SCPrePromptPermissionCustomDialogView _stopRingViewAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba4dcc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112778010);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ba4e08; end: 108ba4e63; -[SCPrePromptPermissionCustomDialogView attributedLabel:didSelectLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba4e08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277800c;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7abc0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ba4e64; end: 108ba4e7b; -[SCPrePromptPermissionCustomDialogView _okButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba4e64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000108ba4e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_112777fe0) + 0x10))
            (*(long *)(param_1 + _DAT_112777fe0),param_3);
  return;
}



/* Entry: 108ba4e7c; end: 108ba4e93; -[SCPrePromptPermissionCustomDialogView _dontAllowButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba4e7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000108ba4e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_112777fe4) + 0x10))
            (*(long *)(param_1 + _DAT_112777fe4),param_3);
  return;
}



/* Entry: 108ba4e94; end: 108ba4f1f; -[SCPrePromptPermissionCustomDialogView _updateDontAllowButtonColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba4e94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112778008;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  lVar1 = param_1;
  func_0x00010be05b80(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar2,param_2,lVar1,0);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010be05b80(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar2,param_2,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ba4f20; end: 108ba4fcf; -[SCPrePromptPermissionCustomDialogView _dontAllowButtonColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba4f20(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277800c;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + _DAT_112777fe8);
    func_0x00010bf6d860(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bf88240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108ba4fd0; end: 108ba4fdf; -[SCPrePromptPermissionCustomDialogView enablePulsingRingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ba4fd0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112777fdc);
}



/* Entry: 108ba4fe0; end: 108ba4fff; -[SCPrePromptPermissionCustomDialogView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba4fe0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277800c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ba5000; end: 108ba50eb; -[SCPrePromptPermissionCustomDialogView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba5000(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277800c);
  _objc_storeStrong(param_1 + _DAT_112777fe4,0);
  _objc_storeStrong(param_1 + _DAT_112777fe0,0);
  _objc_storeStrong(param_1 + _DAT_112778010,0);
  _objc_storeStrong(param_1 + _DAT_112778008,0);
  _objc_storeStrong(param_1 + _DAT_112778004,0);
  _objc_storeStrong(param_1 + _DAT_112778000,0);
  _objc_storeStrong(param_1 + _DAT_112777ffc,0);
  _objc_storeStrong(param_1 + _DAT_112777fe8,0);
  _objc_storeStrong(param_1 + _DAT_112777ff8,0);
  _objc_storeStrong(param_1 + _DAT_112777ff4,0);
  _objc_storeStrong(param_1 + _DAT_112777ff0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777fec,0);
  return;
}



/* Entry: 108ba50ec; end: 108ba50f3; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider isDontAllowButtonVisible] */

undefined8 FUN_108ba50ec(void)

{
  return 1;
}



/* Entry: 108ba50f4; end: 108ba50ff; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider boxWidth] */

undefined8 FUN_108ba50f4(void)

{
  return 0x4070e00000000000;
}



/* Entry: 108ba5100; end: 108ba5107; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider boxCornerRadius] */

undefined8 FUN_108ba5100(void)

{
  return 0x4028000000000000;
}



/* Entry: 108ba5108; end: 108ba510f; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider titleFontSize] */

undefined8 FUN_108ba5108(void)

{
  return 0x4031000000000000;
}



/* Entry: 108ba5110; end: 108ba5117; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider descriptionFontSize] */

undefined8 FUN_108ba5110(void)

{
  return 0x402a000000000000;
}



/* Entry: 108ba5118; end: 108ba511f; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider buttonFontSize] */

undefined8 FUN_108ba5118(void)

{
  return 0x4031000000000000;
}



/* Entry: 108ba5120; end: 108ba5127; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider marginSize] */

undefined8 FUN_108ba5120(void)

{
  return 0x4030000000000000;
}



/* Entry: 108ba5128; end: 108ba5133; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider buttonHeight] */

undefined8 FUN_108ba5128(void)

{
  return 0x4046800000000000;
}



/* Entry: 108ba5134; end: 108ba513f; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider ringWidth] */

undefined8 FUN_108ba5134(void)

{
  return 0x404e000000000000;
}



/* Entry: 108ba5140; end: 108ba5147; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider ringScaleFactor] */

undefined8 FUN_108ba5140(void)

{
  return 0x3ff8000000000000;
}



/* Entry: 108ba5148; end: 108ba514f; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider ringAnimationDuration] */

undefined8 FUN_108ba5148(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 108ba5150; end: 108ba5157; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider ringStrokeWidth] */

undefined8 FUN_108ba5150(void)

{
  return 0x4000000000000000;
}



/* Entry: 108ba5158; end: 108ba515f; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider ringStartOpacity] */

undefined8 FUN_108ba5158(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 108ba5160; end: 108ba5167; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider ringEndOpacity] */

undefined8 FUN_108ba5160(void)

{
  return 0;
}



/* Entry: 108ba5168; end: 108ba5173; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider boxBorderColorHexCode] */

undefined8 FUN_108ba5168(void)

{
  return 0xeaedef;
}



/* Entry: 108ba5174; end: 108ba517f; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider boxBackgroundColorHexCode] */

undefined8 FUN_108ba5174(void)

{
  return 0xfcfcfc;
}



/* Entry: 108ba5180; end: 108ba518b; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider textColorHexCode] */

undefined8 FUN_108ba5180(void)

{
  return 0x30303;
}



/* Entry: 108ba518c; end: 108ba5197; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider ringColorHexCode] */

undefined8 FUN_108ba518c(void)

{
  return 0xeadff;
}



/* Entry: 108ba5198; end: 108ba519b; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider allowButtonColorForState:] */

void FUN_108ba5198(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf9250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__defaultButtonColorForState__11255be30);
  return;
}


