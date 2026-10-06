/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064ba370; end: 1064ba377; -[SCComposerAvatarStoryInfo isStoryMuted] */

undefined1 FUN_1064ba370(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1064ba378; end: 1064ba37f; -[SCComposerAvatarStoryInfo hasUnviewedSnaps] */

undefined1 FUN_1064ba378(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1064ba380; end: 1064ba38b; -[SCComposerAvatarStoryInfo .cxx_destruct] */

void FUN_1064ba380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1064ba38c; end: 1064ba643;  */

void FUN_1064ba38c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  
  _objc_retain();
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar13);
  uVar1 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar13);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar13);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126cb008;
    _objc_alloc();
    uVar4 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c020be0(puVar6);
    _objc_release(uVar3);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar13 = puVar6;
    func_0x000107d227d0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1064ba644; end: 1064ba6c7; -[SCComposerAvatarViewModelBuilder initWithAttributionFeature:networkingContexts:] */

undefined1 *
FUN_1064ba644(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f16e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1064ba6c8; end: 1064ba98f; -[SCComposerAvatarViewModelBuilder viewModelForSnapchatter:storyInfo:inset:] */

void FUN_1064ba6c8(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,int param_5
                  )

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar9 = param_4;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar9 == (undefined *)0x0) {
    if (param_3 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      goto LAB_1064ba95c;
    }
    if (param_5 == 0) {
      puVar9 = PTR_PTR_1126cb010;
      func_0x00010c244820(PTR_PTR_1126cb010);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c25d0;
      _objc_alloc();
      func_0x00010c0462c0();
      puVar7 = PTR_PTR_1126cb018;
      _objc_alloc(PTR_PTR_1126cb018);
      func_0x00010c0494c0();
      puVar8 = puVar7;
      func_0x000108febbc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar9 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_3;
      func_0x00010bf1bae0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010bf1bae0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_1 + 8);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010901cdb0(param_3,puVar4);
      puVar8 = puVar9;
      func_0x000108fec430(puVar9,puVar7,puVar3,uVar10,uVar1,1,puVar5,5,0,3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar9);
    puVar9 = puVar8;
    func_0x000108fec9ec(puVar8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = param_4;
    func_0x00010bfddf00();
    if (((ulong)puVar8 & 1) == 0) {
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108fed29c();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = param_4;
    func_0x00010c26d760(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_4;
    func_0x00010c07fc80(param_4);
    puVar9 = puVar6;
    func_0x000107d0d3c4(puVar6,puVar8,puVar7,0,*(undefined8 *)(param_1 + 0x10),0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar8);
LAB_1064ba95c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1064ba990; end: 1064baad7; -[SCComposerAvatarViewModelBuilder viewModelForGroupParticipants:storyInfo:] */

void FUN_1064ba990(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bdd45e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x000108fecf14();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_4;
    func_0x00010bfddf00();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108fed29c();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = param_4;
    func_0x00010c26d760(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010c07fc80(param_4);
    puVar1 = puVar3;
    func_0x000107d0d3c4(puVar3,puVar2,puVar4,0,*(undefined8 *)(param_1 + 0x10),0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    param_1 = puVar2;
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064baad8; end: 1064baadf; -[SCComposerAvatarViewModelBuilder _bitmojiAvatarViewModelsFromGroupParticipants:] */

void FUN_1064baad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd4610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__bitmojiAvatarViewModelsFromGrou_112552b20,param_3,0);
  return;
}



/* Entry: 1064baae0; end: 1064babc3; -[SCComposerAvatarViewModelBuilder _bitmojiAvatarViewModelsFromGroupParticipants:colorOverride:] */

void FUN_1064baae0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (2 < uVar1) {
    uVar1 = 3;
  }
  uVar2 = param_3;
  func_0x00010c25e980(param_3,param_2,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1064babc4;
  puStack_48 = &UNK_110925628;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  uVar1 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064babc4; end: 1064bac7f;  */

void FUN_1064babc4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  lVar2 = lVar4;
  if (lVar4 == 0) {
    lVar2 = param_2;
    func_0x00010bf40c40(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = lVar1;
  func_0x000108fec62c(lVar1,lVar2,1,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),
                      *(undefined4 *)(*(long *)(param_1 + 0x28) + 8),1,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1064bac80; end: 1064bac8b; -[SCComposerAvatarViewModelBuilder .cxx_destruct] */

void FUN_1064bac80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1064bac8c; end: 1064bac97; +[SCCBusinessAdCodeGetCanUseAdCode modulePath] */

undefined ** FUN_1064bac8c(void)

{
  return &PTR____CFConstantStringClassReference_110e51038;
}



/* Entry: 1064bac98; end: 1064bac9f; +[SCCBusinessAdCodeGetCanUseAdCode asyncStrictMode] */

undefined8 FUN_1064bac98(void)

{
  return 0;
}



/* Entry: 1064baca0; end: 1064bacf7; -[SCCBusinessAdCodeGetCanUseAdCode getCanUseAdCodeWithParams:] */

long FUN_1064baca0(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x0001064baf3c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x20;
  (**(code **)(unaff_x20 + 0x10))();
  func_0x0001064baf34();
  _objc_release(unaff_x20);
  return lVar1;
}



/* Entry: 1064bacf8; end: 1064bae4f; +[SCCBusinessAdCodeGetCanUseAdCode invokeWithJSRuntimeProvider:params:completionHandler:] */

void FUN_1064bacf8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
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
  uStack_58 = 0x1064badd8;
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
  FUN_1064baf34();
  _objc_release(param_3);
  return;
}



/* Entry: 1064bae50; end: 1064bae73; +[SCCBusinessAdCodeGetCanUseAdCode valdiMarshallableObjectDescriptor] */

void FUN_1064bae50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110925658;
  param_1[1] = &PTR_DAT_110925688;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1064bae74; end: 1064bae7f; +[SCCBusinessAdCodeAdCodeTray componentPath] */

undefined ** FUN_1064bae74(void)

{
  return &PTR____CFConstantStringClassReference_110e51058;
}



/* Entry: 1064bae80; end: 1064baeb3; -[SCCBusinessAdCodeAdCodeTray initWithViewModel:componentContext:runtime:] */

void FUN_1064bae80(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f16e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1064baeb4; end: 1064baef3; -[SCCBusinessAdCodeAdCodeTray setViewModel:] */

void FUN_1064baeb4(void)

{
  undefined8 unaff_x20;
  
  func_0x0001064baf3c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x0001064baf34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1064baef4; end: 1064baf33; -[SCCBusinessAdCodeAdCodeTray viewModel] */

void FUN_1064baef4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_1064baf34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1064baf34; end: 1064baf4b;  */

void FUN_1064baf34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1064baf4c; end: 1064bb033; -[SCCBusinessAdCodeAdCodeTrayContext initWithNetworkingClient:webLauncher:notificationPresenter:dismiss:copyToClipboard:] */

undefined8 *
FUN_1064baf4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_58 = PTR_PTR_1126f16f0;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  func_0x0001064bb0f8(puVar2,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_6);
  return puVar2;
}



/* Entry: 1064bb034; end: 1064bb053; +[SCCBusinessAdCodeAdCodeTrayContext valdiMarshallableObjectDescriptor] */

void FUN_1064bb034(undefined8 *param_1)

{
  *param_1 = &PTR_s_networkingClient_110925698;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110925728;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1064bb054; end: 1064bb093; -[SCCBusinessAdCodeAdCodeTrayViewModel initWithProfileId:storyType:] */

void FUN_1064bb054(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f16f8;
  uStack_20 = param_1;
  func_0x0001064bb0f8(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 1064bb094; end: 1064bb0a3; +[SCCBusinessAdCodeAdCodeTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_1064bb094(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_profileId_110925748;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1064bb0a4; end: 1064bb0db; -[SCCBusinessAdCodeGetCanUseAdCodeParams initWithEncodedBusinessProfileAndUserDataList:profileId:] */

void FUN_1064bb0a4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f1700;
  uStack_20 = param_1;
  func_0x0001064bb0f8(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 1064bb0dc; end: 1064bb0ff; +[SCCBusinessAdCodeGetCanUseAdCodeParams valdiMarshallableObjectDescriptor] */

void FUN_1064bb0dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109257c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1064bb100; end: 1064bb21f; -[SCContextOperaLayerV3InteropProvider initWithConfigProvider:pairedMusicDataProvider:] */

undefined1 *
FUN_1064bb100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1708;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064bb220; end: 1064bb273;  */

void FUN_1064bb220(void)

{
  _objc_alloc_init(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064bb274; end: 1064bb2b3; -[SCContextOperaLayerV3InteropProvider tappableOverlayFrameFixEnabled] */

undefined8 FUN_1064bb274(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1064bb2b4; end: 1064bb2f3; -[SCContextOperaLayerV3InteropProvider tappableOverlayFrameFixDeferredEnabled] */

undefined8 FUN_1064bb2b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4f300();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1064bb2f4; end: 1064bb447; -[SCContextOperaLayerV3InteropProvider setPresenter:operaPage:operaEventAnnouncer:] */

/* WARNING: Possible PIC construction at 0x0001064bb400: Changing call to branch */

void FUN_1064bb2f4(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_storeWeak(param_1 + 8,param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x10) = param_4;
  _objc_release(uVar2);
  _objc_storeWeak(param_1 + 0x20,param_5);
  *(undefined1 *)(param_1 + 0x38) = 1;
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 != param_5) {
    _objc_storeWeak(param_1 + 0x28,param_5);
    puVar4 = PTR_PTR_1126b2338;
    func_0x00010c29aaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010bef99a0(param_5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010c06f880();
  if (iVar1 != 0) goto code_r0x00010c11ad80;
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  uVar6 = param_4;
  func_0x00010be62780();
  if ((int)uVar6 != 0) {
    *(undefined1 *)(param_4 + 0x38) = 1;
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  if (uVar7 == uVar6) {
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar6);
LAB_1064bb530:
    _objc_release(uVar7);
  }
  else {
    if (uVar6 == 0) {
      _objc_release();
      _objc_release(uVar7);
LAB_1064bb528:
      uVar7 = *(ulong *)(param_4 + 0x30);
      *(undefined8 *)(param_4 + 0x30) = 0;
      goto LAB_1064bb530;
    }
    uVar8 = uVar7;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar7);
    if ((uVar8 & 1) == 0) goto LAB_1064bb528;
  }
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  *(ulong *)(param_4 + 0x10) = uVar9;
  _objc_release(uVar2);
  param_1 = param_4;
code_r0x00010c11ad80:
                    /* WARNING: Could not recover jumptable at 0x00010c11ad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_publishIfNeccessary_112624580);
  return;
}



/* Entry: 1064bb448; end: 1064bb55b; -[SCContextOperaLayerV3InteropProvider didUpdateOperaPage:] */

void FUN_1064bb448(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be62780();
  if ((int)lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  if (uVar2 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
      _objc_release(uVar2);
    }
    else {
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) != 0) goto LAB_1064bb538;
    }
    uVar2 = *(ulong *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  _objc_release(uVar2);
LAB_1064bb538:
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x10) = param_3;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c11ad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_publishIfNeccessary_112624580);
  return;
}



/* Entry: 1064bb55c; end: 1064bb75f; -[SCContextOperaLayerV3InteropProvider operaViewDidSendEvent:page:params:] */

void FUN_1064bb55c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2338;
  _objc_retain(param_3);
  func_0x00010c29aaa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) goto LAB_1064bb73c;
  uVar5 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) goto LAB_1064bb73c;
  uVar6 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x10);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  _objc_retain(uVar3);
  if (uVar6 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
LAB_1064bb6a0:
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar1);
    uVar3 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar5);
    if (uVar3 != 0) {
      _objc_retain(uVar5);
      uVar6 = *(ulong *)(param_1 + 0x30);
      *(ulong *)(param_1 + 0x30) = uVar3;
      goto LAB_1064bb724;
    }
    uVar5 = 0;
  }
  else {
    if (uVar3 != 0) {
      uVar4 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((uVar4 & 1) == 0) goto LAB_1064bb73c;
      goto LAB_1064bb6a0;
    }
    _objc_release();
LAB_1064bb724:
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
LAB_1064bb73c:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064bb760; end: 1064bb7a7; -[SCContextOperaLayerV3InteropProvider actionParamsWithCurrentPlaybackPosition] */

void FUN_1064bb760(long param_1)

{
  if (*(long *)(param_1 + 0x30) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010beeed40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd760();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1064bb7a8; end: 1064bb9b7; -[SCContextOperaLayerV3InteropProvider _needsPublishWithOperaPage:] */

uint FUN_1064bb7a8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d20;
  func_0x00010c0ffba0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar6 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126b2d20;
  func_0x00010c0ffba0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar6;
  func_0x00010c24b5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar3;
  func_0x00010c0c5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c24b5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c0c5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  _objc_retain(uVar2);
  if (uVar6 == uVar2) {
    uVar7 = 0;
  }
  else if (uVar2 == 0) {
    uVar7 = 1;
  }
  else {
    uVar5 = uVar6;
    func_0x00010c0720c0(uVar6);
    uVar7 = (uint)uVar5 ^ 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  return uVar7;
}



/* Entry: 1064bb9b8; end: 1064bba5b; -[SCContextOperaLayerV3InteropProvider didReceiveViewProperties:] */

void FUN_1064bb9b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bedcb60();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010beeed40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010bf0be80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d8c60(lVar1,param_2,uVar2);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840();
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1064bba5c; end: 1064bbcab; -[SCContextOperaLayerV3InteropProvider publishIfNeccessary] */

void FUN_1064bba5c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar9 = param_1;
  func_0x00010beb51a0();
  *(char *)(param_1 + 0x38) = (char)lVar9;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar2);
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar9 = param_1 + 8;
    _objc_loadWeakRetained();
    if ((lVar9 != 0) && (lVar9 = *(long *)(param_1 + 0x10), _objc_release(), lVar9 != 0)) {
      *(undefined1 *)(param_1 + 0x38) = 0;
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126cb020;
      _objc_alloc(PTR_PTR_1126cb020);
      uVar10 = *(ulong *)(param_1 + 0x10);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar10 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar10 = 0;
      }
      _objc_retain(uVar10);
      _objc_release(uVar5);
      lVar9 = param_1 + 8;
      _objc_loadWeakRetained(lVar9);
      lVar8 = lVar9;
      func_0x00010bf4f500();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c004520(puVar4);
      _objc_release(uVar10);
      func_0x00010c0d9840(uVar2);
      _objc_release(puVar4);
      _objc_release(lVar8);
      _objc_release(lVar9);
      _objc_release(uVar2);
      lVar9 = param_1;
      func_0x00010beeed40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010bf0be80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d8c60(lVar9);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840();
      _objc_release(uVar2);
      _objc_release(lVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1064bbcac; end: 1064bbd5f; -[SCContextOperaLayerV3InteropProvider actionParams] */

void FUN_1064bbcac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_1064bbd44;
    }
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar2 = lVar1;
    func_0x00010beeed60(lVar1,param_2,uVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
LAB_1064bbd44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1064bbd60; end: 1064bbe0b; -[SCContextOperaLayerV3InteropProvider createActionHandler] */

void FUN_1064bbd60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c11ad80();
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4f520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf54580(lVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1064bbe0c; end: 1064bbe4b; -[SCContextOperaLayerV3InteropProvider actionHandlingProvider] */

void FUN_1064bbe0c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf4f520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1064bbe4c; end: 1064bbe7f; -[SCContextOperaLayerV3InteropProvider actionBarParamsObservable] */

void FUN_1064bbe4c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    func_0x00010c11ad80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_target_112678178);
  return;
}



/* Entry: 1064bbe80; end: 1064bbeb3; -[SCContextOperaLayerV3InteropProvider paramsObservable] */

void FUN_1064bbe80(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    func_0x00010c11ad80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_target_112678178);
  return;
}



/* Entry: 1064bbeb4; end: 1064bc073; -[SCContextOperaLayerV3InteropProvider _shouldPublishUpdateWithNewContextData:] */

uint FUN_1064bbeb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf46560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07c500();
  uVar4 = param_3;
  func_0x00010bf46560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c07c500();
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar6 = param_1;
  func_0x00010bdd9100();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bdd9100();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == lVar7) {
    uVar13 = 0;
  }
  else {
    lVar8 = lVar7;
    func_0x00010c071ae0(lVar7);
    uVar13 = (uint)lVar8 ^ 1;
  }
  lVar8 = param_1;
  func_0x00010beb6ee0(param_1);
  uVar9 = *(ulong *)(param_1 + 0x10);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2d20;
  func_0x00010bf8dbe0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(uVar9);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar12 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar10);
  uVar9 = uVar11;
  if ((uVar12 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar11);
  uVar11 = uVar9;
  func_0x00010bf1f3c0(uVar9);
  _objc_release(uVar9);
  bVar1 = *(byte *)(param_1 + 0x38);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_3);
  return (bVar1 | uVar13 | (uint)lVar8 | (uint)uVar3 ^ (uint)uVar5 | (uint)uVar11) & 1;
}



/* Entry: 1064bc074; end: 1064bc17f; -[SCContextOperaLayerV3InteropProvider _cameosParamsFromContextData:] */

void FUN_1064bc074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1064bc180;
  uStack_40 = 0x1064bc190;
  uStack_38 = 0;
  uVar1 = param_3;
  func_0x00010bfa29a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064bc180; end: 1064bc197;  */

void FUN_1064bc180(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064bc198; end: 1064bc1cf;  */

void FUN_1064bc198(long param_1,undefined8 param_2)

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



/* Entry: 1064bc1d0; end: 1064bc313; -[SCContextOperaLayerV3InteropProvider _shouldUpdateForAds:oldContextData:] */

byte FUN_1064bc1d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfa29a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  bVar2 = 0;
  if (lVar1 != 0) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    lVar1 = param_3;
    func_0x00010bfa29a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0bed40(lVar1);
    _objc_release(lVar1);
    bVar2 = *(byte *)(puStack_48 + 3);
    _objc_release(param_4);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar2 & 1;
}



/* Entry: 1064bc314; end: 1064bc387;  */

void FUN_1064bc314(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa29a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa29a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0(uVar1,param_2,uVar2);
  *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (byte)uVar3 ^ 1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064bc388; end: 1064bc793; -[SCContextOperaLayerV3InteropProvider _updatePairedMusicDataFromViewProperties:] */

ulong FUN_1064bc388(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b2d20;
  func_0x00010beee000(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126caaf8;
  _objc_opt_class(PTR_PTR_1126caaf8);
  uVar10 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar10 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c0ce140();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (uVar10 == 0) {
    puVar3 = PTR_PTR_1126b2d20;
    func_0x00010c24c0a0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c93c8;
    _objc_opt_class(PTR_PTR_1126c93c8);
    uVar9 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar3);
    uVar4 = uVar10;
    if ((uVar9 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar10);
    uVar10 = uVar4;
    func_0x00010c24aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf529e0();
    _objc_release(uVar10);
    uVar10 = (ulong)(uVar9 != 0);
    if (uVar9 != 0) {
      uVar5 = uVar4;
      func_0x00010c24aea0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (uVar9 != 0) {
        uVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(uVar5);
          }
          uVar12 = *(undefined8 *)(uVar11 * 8);
          uVar6 = uVar12;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010beeed20();
          _objc_release(uVar6);
          if ((int)uVar7 == 0x1c) {
            func_0x00010beedca0(uVar12);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar12;
            func_0x00010c2472a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c16ac40(*(undefined8 *)(param_1 + 0x68));
            _objc_release(uVar6);
            _objc_release(uVar12);
            _objc_release(uVar5);
            goto LAB_1064bc73c;
          }
          uVar11 = uVar11 + 1;
        } while (uVar9 != uVar11);
        uVar9 = uVar5;
        func_0x00010bf52a60();
      }
      _objc_release(uVar5);
      func_0x00010c16ac40(*(undefined8 *)(param_1 + 0x68));
    }
LAB_1064bc73c:
    _objc_release(uVar4);
  }
  else {
    uVar10 = uVar1;
    func_0x00010c0ce140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(uVar10);
        }
        uVar12 = *(undefined8 *)(uVar9 * 8);
        uVar6 = uVar12;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010beeed20();
        _objc_release(uVar6);
        if ((int)uVar7 == 0x1c) {
          func_0x00010beedca0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar12;
          func_0x00010c2472a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16ac40(*(undefined8 *)(param_1 + 0x68));
          _objc_release(uVar6);
          _objc_release(uVar12);
          _objc_release(uVar10);
          goto LAB_1064bc578;
        }
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
      uVar4 = uVar10;
      func_0x00010bf52a60();
    }
    _objc_release(uVar10);
    func_0x00010c16ac40(*(undefined8 *)(param_1 + 0x68));
LAB_1064bc578:
    uVar10 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return uVar10;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x68,0);
  _objc_storeStrong(param_3 + 0x60,0);
  _objc_storeStrong(param_3 + 0x50,0);
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_destroyWeak(param_3 + 0x28);
  _objc_destroyWeak(param_3 + 0x20);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
  param_3 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_3);
  return param_3;
}



/* Entry: 1064bc794; end: 1064bc823; -[SCContextOperaLayerV3InteropProvider .cxx_destruct] */

void FUN_1064bc794(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1064bc824; end: 1064bc8cf; -[SCContextNetworkingMetadata initWithBaseURL:headers:snapTokenType:] */

undefined1 *
FUN_1064bc824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1710;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064bc8d0; end: 1064bc8d7; -[SCContextNetworkingMetadata baseURL] */

undefined8 FUN_1064bc8d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1064bc8d8; end: 1064bc8df; -[SCContextNetworkingMetadata headers] */

undefined8 FUN_1064bc8d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1064bc8e0; end: 1064bc8e7; -[SCContextNetworkingMetadata snapTokenType] */

undefined8 FUN_1064bc8e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1064bc8e8; end: 1064bc917; -[SCContextNetworkingMetadata .cxx_destruct] */

void FUN_1064bc8e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064bc918; end: 1064bc9c3;  */

void FUN_1064bc918(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e51098;
  if (param_2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e510b8;
  }
  func_0x00010c25d780(param_1,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110e51078,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb028;
  _objc_alloc(PTR_PTR_1126cb028);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff70a0(puVar2);
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064bc9c4; end: 1064bcb63;  */

ulong FUN_1064bc9c4(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_1);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar4 = param_1;
  func_0x00010c25a6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  bVar1 = *(byte *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  if (((bVar1 & 1) == 0) && (uVar4 = param_1, FUN_1064bcb64(), (uVar4 & 1) == 0)) {
    uVar4 = param_1;
    func_0x000108437c68(param_1);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1064bcb64; end: 1064bccfb;  */

bool FUN_1064bcb64(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08bda0();
  if ((uVar1 != 0x12) && (uVar1 = param_1, func_0x00010c08bda0(), uVar1 != 0x13)) {
    uVar1 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar3 == 0) {
      uVar1 = param_1;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c08fa60();
      if (uVar3 != 0) {
        _objc_release(uVar2);
        bVar6 = true;
LAB_1064bcc3c:
        _objc_release(uVar1);
        goto LAB_1064bcbe4;
      }
      uVar3 = param_1;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c281680();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c08fa60();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar5 == 0) {
        uVar1 = param_1;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c297e20();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c08fa60();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (uVar3 == 0) {
          uVar1 = param_1;
          func_0x0001084365e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c15ebe0();
          bVar6 = 1 < uVar2;
          goto LAB_1064bcc3c;
        }
      }
    }
  }
  bVar6 = true;
LAB_1064bcbe4:
  _objc_release(param_1);
  return bVar6;
}



/* Entry: 1064bccfc; end: 1064bcda7;  */

long FUN_1064bccfc(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x00010c243e60();
  if (((param_1 != 4) && (lVar2 = param_2, func_0x00010bf0d6e0(), lVar2 == 0)) &&
     (lVar2 = param_2, func_0x00010c0946a0(), lVar2 == 0)) {
    lVar2 = param_2;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if ((lVar1 == 0) && (lVar2 = param_2, func_0x00010c297e40(), lVar2 == 0)) {
      lVar2 = param_2;
      func_0x00010bfd5c40(param_2);
      goto LAB_1064bcd7c;
    }
  }
  lVar2 = 1;
LAB_1064bcd7c:
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 1064bcda8; end: 1064bce13;  */

void FUN_1064bcda8(void)

{
  return;
}



/* Entry: 1064bce14; end: 1064bcfc7;  */

undefined8 FUN_1064bce14(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar8 = -1;
    lVar7 = -1;
  }
  else {
    lVar8 = lVar2;
    func_0x00010c25b720();
    lVar7 = lVar2;
    func_0x00010c25b7c0();
  }
  lVar3 = param_1;
  func_0x00010c08bda0();
  func_0x0001064bcdf4();
  lVar4 = param_1;
  func_0x00010c08bda0();
  _objc_release(param_1);
  uVar6 = 0;
  if (lVar3 < 3) {
    if (lVar3 != -1) {
      if (lVar3 == 1) {
        if (lVar8 < 6) {
          if (lVar8 == 2) {
            if (lVar7 < 0x17) {
              if (lVar7 == 0) goto LAB_1064bcf7c;
            }
            else {
              if (lVar7 == 0x17) goto LAB_1064bcf60;
              if (lVar7 == 0x24) {
                uVar6 = 0xe;
                goto LAB_1064bcf30;
              }
            }
LAB_1064bcfc0:
            uVar6 = 3;
            goto LAB_1064bcf30;
          }
          if (lVar8 == 5) {
LAB_1064bcf14:
            uVar6 = 6;
            goto LAB_1064bcf30;
          }
        }
        else {
          if (lVar8 == 6) goto LAB_1064bcfc0;
          if (lVar8 == 0xc) {
LAB_1064bcf60:
            uVar6 = 5;
            goto LAB_1064bcf30;
          }
        }
LAB_1064bcf7c:
        uVar6 = 4;
        goto LAB_1064bcf30;
      }
      if (lVar3 != 2) goto LAB_1064bcf30;
    }
  }
  else if (1 < lVar3 - 4U) {
    if (lVar3 != 3) {
      if (lVar3 != 6) goto LAB_1064bcf30;
      if (lVar8 == 6) {
        uVar5 = 10;
        if (lVar7 == 0x10) {
          uVar5 = 0xb;
        }
        bVar1 = lVar7 == 0xd;
        uVar6 = 0xc;
      }
      else {
        if (lVar8 == 5) goto LAB_1064bcf14;
        if (lVar8 != 1) {
          uVar6 = 10;
          goto LAB_1064bcf30;
        }
        bVar1 = lVar7 == 5;
        uVar5 = 0xd;
        uVar6 = 6;
      }
      if (!bVar1) {
        uVar6 = uVar5;
      }
      goto LAB_1064bcf30;
    }
    if (lVar4 == 0x14) {
      uVar6 = 0xf;
      goto LAB_1064bcf30;
    }
  }
  uVar6 = 0xffffffffffffffff;
LAB_1064bcf30:
  _objc_release(lVar2);
  return uVar6;
}



/* Entry: 1064bcfc8; end: 1064bd063; +[SCComposerAddFriendButton bindAttributes:] */

void FUN_1064bcfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a180(param_3,param_2,&PTR____CFConstantStringClassReference_110e510d8,1,
                      &PTR___NSConcreteGlobalBlock_1109259c8,&PTR___NSConcreteGlobalBlock_1109259e8)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e510f8,
                      &PTR___NSConcreteGlobalBlock_110925a28,&PTR___NSConcreteGlobalBlock_110925a68)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e51118,
                      &PTR___NSConcreteGlobalBlock_110925a88,&PTR___NSConcreteGlobalBlock_110925aa8)
  ;
  func_0x00010c1dcc00(param_3,param_2,&PTR___NSConcreteGlobalBlock_110925ac8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064bd064; end: 1064bd0f7;  */

bool FUN_1064bd064(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c21e7c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_3);
  return uVar1 != 0;
}



/* Entry: 1064bd0f8; end: 1064bd0fb;  */

void FUN_1064bd0f8(void)

{
  return;
}



/* Entry: 1064bd0fc; end: 1064bd133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bd0fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748e10);
  *(undefined8 *)(param_2 + _DAT_112748e10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064bd134; end: 1064bd147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bd134(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748e10);
  *(undefined8 *)(param_2 + _DAT_112748e10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064bd148; end: 1064bd17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bd148(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748e14);
  *(undefined8 *)(param_2 + _DAT_112748e14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064bd180; end: 1064bd193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bd180(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748e14);
  *(undefined8 *)(param_2 + _DAT_112748e14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064bd194; end: 1064bd1af;  */

void FUN_1064bd194(void)

{
  _objc_opt_new(PTR_PTR_1126cb030);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064bd1b0; end: 1064bd2e3; -[SCComposerAddFriendButton initWithSnapchatterServices:userSession:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1064bd1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1718;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112748e18;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748e1c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748e20;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c244b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064bd2e4; end: 1064bd41f; -[SCComposerAddFriendButton setUserInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bd2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  lVar3 = (long)_DAT_112748e24;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
  func_0x00010bed85a0(param_1);
  if (*(long *)(param_1 + lVar3) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112748e18);
    func_0x00010c244ac0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1064bd420;
    puStack_50 = &UNK_110855370;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    FUN_1064bf030(uVar2,uVar1,&puStack_68);
    _objc_release(uVar1);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1064bd420; end: 1064bd493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bd420(long param_1,long param_2)

{
  int iVar1;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112748e24);
      func_0x00010c071d00();
      if (iVar1 != 0) {
        func_0x00010bed85a0(param_1);
      }
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064bd494; end: 1064bd5bb; -[SCComposerAddFriendButton _updateForSnapchatter:] */

/* WARNING: Possible PIC construction at 0x0001064bd580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001064bd584) */
/* WARNING: Removing unreachable block (ram,0x00010bedbbe0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bd494(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf51e00();
  lVar4 = (long)_DAT_112748e28;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar3);
  if (*(long *)(param_1 + lVar4) == 0) {
    lVar4 = *(long *)(param_1 + _DAT_112748e2c);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112748e1c);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010beb3f60();
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112748e2c;
    lVar4 = *(long *)(param_1 + lVar5);
    if ((int)lVar1 == 0) {
      if (lVar4 == 0) {
        puVar2 = PTR_PTR_1126b56f8;
        _objc_alloc_init();
        uVar3 = *(undefined8 *)(param_1 + lVar5);
        *(undefined **)(param_1 + lVar5) = puVar2;
        _objc_release(uVar3);
        func_0x00010befbb60(param_1);
        puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
        func_0x00010c050900();
        func_0x00010bef9040(*(undefined8 *)(param_1 + lVar5));
        _objc_release(puVar2);
        lVar4 = *(long *)(param_1 + lVar5);
      }
      uVar3 = 0;
      goto code_r0x00010c1a7f60;
    }
  }
  uVar3 = 1;
code_r0x00010c1a7f60:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 1064bd5bc; end: 1064bd72f; -[SCComposerAddFriendButton _updateModelForSnapchatterWithIsLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bd5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112748e28);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748e24);
  FUN_1064bf414(uVar1);
  FUN_1064bf69c(uVar3,0,param_3,0,0x10,uVar1,0xffffffffddce6c73,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c244760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beed3c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1064bd730;
  uStack_40 = 0x1064bd740;
  uStack_38 = 0;
  func_0x00010c0bccc0();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112748e2c));
  func_0x00010c069fe0(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 1064bd730; end: 1064bd747;  */

void FUN_1064bd730(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064bd748; end: 1064bd787;  */

void FUN_1064bd748(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010beee1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064bd788; end: 1064bd7df; -[SCComposerAddFriendButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bd788(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1718;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112748e2c));
  return;
}



/* Entry: 1064bd7e0; end: 1064bd7f3; -[SCComposerAddFriendButton sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bd7e0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0x403e000000000000,*(undefined8 *)(param_2 + _DAT_112748e2c),
             PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 1064bd7f4; end: 1064bda87; -[SCComposerAddFriendButton _onActionButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bd7f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_112748e28);
  if (lVar1 != 0) {
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1126ae5c0;
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + _DAT_112748e30) = 1;
      puVar4 = PTR_PTR_1126ae5c0;
      puVar3 = PTR_PTR_1126c55c0;
      func_0x00010c12fec0(PTR_PTR_1126c55c0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6ce00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112748e18);
      func_0x00010c244ae0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd2960();
      _objc_release(uVar5);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
    FUN_1064bf414(*(undefined8 *)(param_1 + _DAT_112748e24));
    puVar3 = PTR_PTR_1126c55c0;
    func_0x00010c1300e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befca80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112748e18);
    func_0x00010c244ae0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bef8a80(uVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 1064bda88; end: 1064bdb37;  */

void FUN_1064bda88(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1064bdb38;
  puStack_48 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1064bdb38; end: 1064bdb93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bdb38(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x28) == '\x01')) {
    func_0x00010c0f95a0(*(undefined8 *)(lVar1 + _DAT_112748e10),param_2,
                        PTR____NSArray0__struct_11034ab48);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064bdb94; end: 1064bdc63; -[SCComposerAddFriendButton didStartSnapchattersUpdateDataRequest:] */

void FUN_1064bdb94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1064bdc64;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1064bdc64; end: 1064bdcfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bdc64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0aac0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112748e28);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      func_0x00010bedbbe0(lVar1,param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064bdcfc; end: 1064bddef; -[SCComposerAddFriendButton didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1064bdcfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1064bddf0;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1064bddf0; end: 1064bdef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bddf0(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0aac0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112748e28);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar5 != 0) {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        lVar6 = *(long *)(param_1 + 0x20);
        func_0x00010bf0a620();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) {
          lVar6 = (long)_DAT_112748e30;
          cVar1 = *(char *)(lVar2 + lVar6);
          _objc_release();
          if (cVar1 == '\x01') {
            if (*(long *)(lVar2 + _DAT_112748e14) != 0) {
              func_0x00010c0f95a0(*(long *)(lVar2 + _DAT_112748e14),param_2,
                                  PTR____NSArray0__struct_11034ab48);
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
            *(undefined1 *)(lVar2 + lVar6) = 0;
          }
        }
      }
      func_0x00010c21e7c0(lVar2,param_2,*(undefined8 *)(lVar2 + _DAT_112748e24));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1064bdef8; end: 1064bdfa3; -[SCComposerAddFriendButton _shouldHideButtonForSnapchatter:currentUserId:] */

bool FUN_1064bdef8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (uVar2 = param_3, func_0x00010c06d560(), (uVar2 & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010bfb8280(param_3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar2 != 0;
      _objc_release();
      goto LAB_1064bdf60;
    }
  }
  bVar1 = true;
LAB_1064bdf60:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1064bdfa4; end: 1064bdfb3; -[SCComposerAddFriendButton userInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064bdfa4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748e24);
}



/* Entry: 1064bdfb4; end: 1064be053; -[SCComposerAddFriendButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bdfb4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112748e24,0);
  _objc_storeStrong(param_1 + _DAT_112748e20,0);
  _objc_storeStrong(param_1 + _DAT_112748e14,0);
  _objc_storeStrong(param_1 + _DAT_112748e10,0);
  _objc_storeStrong(param_1 + _DAT_112748e1c,0);
  _objc_storeStrong(param_1 + _DAT_112748e18,0);
  _objc_storeStrong(param_1 + _DAT_112748e2c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112748e28,0);
  return;
}



/* Entry: 1064be054; end: 1064be0ef; +[SCComposerAddFriendButtonContainer bindAttributes:] */

void FUN_1064be054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a180(param_3,param_2,&PTR____CFConstantStringClassReference_110e510d8,1,
                      &PTR___NSConcreteGlobalBlock_110925b08,&PTR___NSConcreteGlobalBlock_110925b28)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e510f8,
                      &PTR___NSConcreteGlobalBlock_110925b68,&PTR___NSConcreteGlobalBlock_110925ba8)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e51118,
                      &PTR___NSConcreteGlobalBlock_110925bc8,&PTR___NSConcreteGlobalBlock_110925be8)
  ;
  func_0x00010c1dcc00(param_3,param_2,&PTR___NSConcreteGlobalBlock_110925c08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064be0f0; end: 1064be183;  */

bool FUN_1064be0f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c21e7c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_3);
  return uVar1 != 0;
}



/* Entry: 1064be184; end: 1064be187;  */

void FUN_1064be184(void)

{
  return;
}



/* Entry: 1064be188; end: 1064be1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064be188(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748e34);
  *(undefined8 *)(param_2 + _DAT_112748e34) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064be1c0; end: 1064be1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064be1c0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748e34);
  *(undefined8 *)(param_2 + _DAT_112748e34) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064be1d4; end: 1064be20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064be1d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748e38);
  *(undefined8 *)(param_2 + _DAT_112748e38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064be20c; end: 1064be21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064be20c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748e38);
  *(undefined8 *)(param_2 + _DAT_112748e38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064be220; end: 1064be23b;  */

void FUN_1064be220(void)

{
  _objc_opt_new(PTR_PTR_1126cad88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064be23c; end: 1064be3e3; -[SCComposerAddFriendButtonContainer initWithSnapchatterDataFetcher:dataMutator:dataTracker:userSession:actionHandlingDelegate:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1064be23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f1720;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112748e3c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112748e40;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112748e44;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112748e48;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112748e4c),param_7);
    lVar3 = (long)_DAT_112748e50;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064be3e4; end: 1064be4ff; -[SCComposerAddFriendButtonContainer setUserInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064be3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  lVar3 = (long)_DAT_112748e54;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar2;
  _objc_release(uVar1);
  func_0x00010bed85a0(param_1);
  if (*(long *)(param_1 + lVar3) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112748e3c);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1064be500;
    puStack_50 = &UNK_110855370;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    FUN_1064bf030(uVar1,uVar2,&puStack_68);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1064be500; end: 1064be573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064be500(long param_1,long param_2)

{
  int iVar1;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112748e54);
      func_0x00010c071d00();
      if (iVar1 != 0) {
        func_0x00010bed85a0(param_1);
      }
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


