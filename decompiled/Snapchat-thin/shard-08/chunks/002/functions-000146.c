/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e86ae4; end: 105e86b2b;  */

void FUN_105e86ae4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar1);
    func_0x00010befe140();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e86b2c; end: 105e86b73;  */

void FUN_105e86b2c(double param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    *(bool *)(param_2 + 0x40) = param_1 <= 2.220446049250313e-16;
    *(undefined1 *)(param_2 + 0x41) = 1;
    *(double *)(param_2 + 0x48) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105e86b74; end: 105e86bb7;  */

void FUN_105e86b74(undefined8 param_1,long param_2,undefined1 param_3,undefined1 param_4)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x40) = param_4;
    *(undefined1 *)(param_2 + 0x41) = param_3;
    *(undefined8 *)(param_2 + 0x48) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105e86bb8; end: 105e86bbb; -[SCAdsPromotedTileAppInstallAttachmentHandler willPresentTileAttachment] */

void FUN_105e86bb8(void)

{
  return;
}



/* Entry: 105e86bbc; end: 105e86c7f; -[SCAdsPromotedTileAppInstallAttachmentHandler buildPromotedStoryTrack] */

void FUN_105e86bbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc2540();
    _objc_release(uVar1);
  }
  puVar2 = PTR_PTR_1126bdcf0;
  _objc_alloc(PTR_PTR_1126bdcf0);
  func_0x00010c0266c0(*(undefined8 *)(param_1 + 0x48));
  puVar3 = PTR_PTR_1126c54e0;
  func_0x00010bf057c0(PTR_PTR_1126c54e0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e86c80; end: 105e86c87; -[SCAdsPromotedTileAppInstallAttachmentHandler attachmentDataModel] */

undefined8 FUN_105e86c80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105e86c88; end: 105e86c9f; -[SCAdsPromotedTileAppInstallAttachmentHandler delegate] */

void FUN_105e86c88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e86ca0; end: 105e86cab; -[SCAdsPromotedTileAppInstallAttachmentHandler setDelegate:] */

void FUN_105e86ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 105e86cac; end: 105e86d2b; -[SCAdsPromotedTileAppInstallAttachmentHandler .cxx_destruct] */

void FUN_105e86cac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 105e86d2c; end: 105e86e9f; -[SCAdsPromotedTileDeeplinkAttachmentHandler initWithAdResponse:deepLink:fallbackHandler:] */

undefined8 *
FUN_105e86d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ed8b8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e86ea0; end: 105e86edf;  */

void FUN_105e86ea0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd5d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e86ee0; end: 105e86ef7; -[SCAdsPromotedTileDeeplinkAttachmentHandler delegate] */

void FUN_105e86ee0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e86ef8; end: 105e86f3b; -[SCAdsPromotedTileDeeplinkAttachmentHandler setDelegate:] */

void FUN_105e86ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x28,param_3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e86f3c; end: 105e870ef; -[SCAdsPromotedTileDeeplinkAttachmentHandler _buildAttachmentDataModel] */

void FUN_105e86f3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126bdc78;
  _objc_alloc(PTR_PTR_1126bdc78);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef2c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15ed20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe5ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef4240(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef27a0();
  func_0x00010bff1740(puVar1,param_2,uVar2,uVar3,uVar4,6,uVar5,
                      &PTR____CFConstantStringClassReference_110dfc558,0,0,uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126c54e8;
  _objc_alloc(PTR_PTR_1126c54e8);
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c28f280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010be0e480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd09a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059e00(puVar7,param_2,puVar8,lVar9,param_1,puVar1);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126bdc88;
  func_0x00010bf683a0(PTR_PTR_1126bdc88,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105e870f0; end: 105e87253; -[SCAdsPromotedTileDeeplinkAttachmentHandler _fallbackAttachment] */

void FUN_105e870f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105e87254;
  uStack_30 = 0x105e87264;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf0cc60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0c1740(uVar2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e87254; end: 105e8726b;  */

void FUN_105e87254(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105e8726c; end: 105e872fb;  */

void FUN_105e8726c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c54f0;
  func_0x00010c2a4560(PTR_PTR_1126c54f0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105e872fc; end: 105e87317;  */

void FUN_105e872fc(void)

{
  return;
}



/* Entry: 105e87318; end: 105e873e7; -[SCAdsPromotedTileDeeplinkAttachmentHandler _attachmentCallbacks] */

void FUN_105e87318(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126c54f8;
  _objc_alloc(PTR_PTR_1126c54f8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0116a0(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e873e8; end: 105e8743f;  */

void FUN_105e873e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e87440; end: 105e87447;  */

void FUN_105e87440(void)

{
  return;
}



/* Entry: 105e87448; end: 105e8744b; -[SCAdsPromotedTileDeeplinkAttachmentHandler willPresentTileAttachment] */

void FUN_105e87448(void)

{
  return;
}



/* Entry: 105e8744c; end: 105e87607; -[SCAdsPromotedTileDeeplinkAttachmentHandler buildPromotedStoryTrack] */

void FUN_105e8744c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar2 = PTR_PTR_1126b9320;
    _objc_alloc(PTR_PTR_1126b9320);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c28f280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c009c00(puVar2);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126c54e0;
    func_0x00010bf683e0(PTR_PTR_1126c54e0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_98 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_105e87254;
    uStack_40 = 0x105e87264;
    puStack_38 = (undefined *)0x0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105e87608;
    puStack_78 = &UNK_1108f0200;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105e876a8;
    puStack_a8 = &UNK_1108f0230;
    lStack_a0 = param_1;
    lStack_70 = param_1;
    puStack_68 = puStack_98;
    puStack_58 = puStack_98;
    func_0x00010c0c1700(*(long *)(param_1 + 0x20),param_2,&puStack_90,&puStack_c0);
    puVar3 = PTR_PTR_1126c54e0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf22540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf683e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    __Block_object_dispose(&uStack_60,8);
    puVar2 = puStack_38;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e87608; end: 105e876a7;  */

void FUN_105e87608(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b9320;
  _objc_alloc();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c28f280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009c00(puVar1,param_2,0,0,1,0,uVar2,0,0,0);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105e876a8; end: 105e8778f;  */

void FUN_105e876a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b9320;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c28f280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf61ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c08fa60(uVar3);
  func_0x00010c009c00();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105e87790; end: 105e87797; -[SCAdsPromotedTileDeeplinkAttachmentHandler attachmentDataModel] */

undefined8 FUN_105e87790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105e87798; end: 105e877f3; -[SCAdsPromotedTileDeeplinkAttachmentHandler .cxx_destruct] */

void FUN_105e87798(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e877f4; end: 105e87947; -[SCAdsPromotedTileAttachmentHandlerFactory initWithGrapheneRegistry:crashLogger:canOpenUrlProvider:configProvider:adConfigProvider:skOverlayParamsBuilder:] */

undefined1 *
FUN_105e877f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ed8c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
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



/* Entry: 105e87948; end: 105e87b47; -[SCAdsPromotedTileAttachmentHandlerFactory createHandlerForAdResponse:tileCtaConfig:interactionType:] */

void FUN_105e87948(undefined *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c26eae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar2 = lVar1;
  }
  func_0x00010bef60a0();
  if (lVar2 == 6) {
    func_0x00010bdf90a0(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar2 == 3) {
    lVar2 = lVar3;
    func_0x00010c242040(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2a4740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar1 == 0) {
      lVar2 = lVar5;
      func_0x00010c2a4740(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      lVar4 = lVar1;
      func_0x00010c2a4980(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = param_1;
    func_0x00010beeab60(param_1,param_2,lVar5,param_4);
    func_0x00010beeabc0(param_1,param_2,param_3,lVar4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar5);
  }
  else if (lVar2 == 1) {
    param_1 = PTR_PTR_1126c5500;
    _objc_alloc(PTR_PTR_1126c5500);
    func_0x00010bff1da0();
  }
  else {
    param_1 = (undefined *)0x0;
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e87b48; end: 105e87bb7; -[SCAdsPromotedTileAttachmentHandlerFactory _webViewAttachmentPresentationForWebview:tileCtaConfig:] */

long FUN_105e87b48(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c26eae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_4 == 0) {
    lVar1 = param_3;
    func_0x00010c2a3520();
    lVar2 = lVar1;
    if (lVar1 != 2) {
      lVar2 = 0;
    }
    if (lVar1 == 3) {
      lVar2 = 1;
    }
  }
  else {
    lVar2 = 0;
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 105e87bb8; end: 105e87cd3; -[SCAdsPromotedTileAttachmentHandlerFactory _webViewHandlerWithAdResponse:url:presentation:] */

void FUN_105e87bb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b46f0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c5508;
  _objc_alloc(PTR_PTR_1126c5508);
  func_0x00010c0456a0();
  puVar3 = PTR_PTR_1126c5510;
  _objc_alloc(PTR_PTR_1126c5510);
  puVar4 = PTR_PTR_1126c5518;
  _objc_opt_new(PTR_PTR_1126c5518);
  puVar5 = PTR_PTR_1126b46f0;
  _objc_opt_new(PTR_PTR_1126b46f0);
  func_0x00010bff1dc0(puVar3,param_2,param_3,param_4,param_5,puVar4,puVar5,puVar2,
                      *(undefined8 *)(param_1 + 0x10));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e87cd4; end: 105e87e0f; -[SCAdsPromotedTileAttachmentHandlerFactory _deeplinkHandlerWithAdResponse:tileCtaConfig:interactionType:] */

void FUN_105e87cd4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010bdf9040(param_1,param_2,lVar4,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c5520;
    _objc_alloc(PTR_PTR_1126c5520);
    func_0x00010bff1d60();
    _objc_release(param_1);
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e87e10; end: 105e87f2f; -[SCAdsPromotedTileAttachmentHandlerFactory _deeplinkFallbackHandler:adResponse:tileCtaConfig:interactionType:] */

void FUN_105e87e10(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf67dc0();
  if ((lVar1 == 1) || (lVar1 == 3)) {
    puVar2 = param_1;
    func_0x00010beeab40(param_1,param_2,param_3,param_5);
    lVar1 = param_3;
    func_0x00010bf68360(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeabc0(param_1,param_2,param_4,lVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else if (lVar1 == 2) {
    param_1 = PTR_PTR_1126c5500;
    _objc_alloc(PTR_PTR_1126c5500);
    func_0x00010bff1da0();
  }
  else {
    param_1 = (undefined *)0x0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e87f30; end: 105e87f4f; -[SCAdsPromotedTileAttachmentHandlerFactory _webViewAttachmentPresentationForDeeplink:tileCtaConfig:] */

bool FUN_105e87f30(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf67dc0(param_3);
  return param_3 == 3;
}



/* Entry: 105e87f50; end: 105e87faf; -[SCAdsPromotedTileAttachmentHandlerFactory .cxx_destruct] */

void FUN_105e87f50(long param_1)

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



/* Entry: 105e87fb0; end: 105e881b7; -[SCAdsPromotedTileWebViewAttachmentHandler initWithAdResponse:url:presentation:webViewViewingStatus:sessionStopWatch:logger:crashLogger:] */

undefined8 *
FUN_105e87fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ed8c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    puVar1[3] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e881b8; end: 105e881f7;  */

void FUN_105e881b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd5d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e881f8; end: 105e88577; -[SCAdsPromotedTileWebViewAttachmentHandler _buildAttachmentDataModel] */

void FUN_105e881f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    puVar2 = PTR_PTR_1126c5528;
    _objc_alloc(PTR_PTR_1126c5528);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105e88578;
    puStack_88 = &UNK_1108f0260;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c010ac0(puVar2);
    puVar3 = PTR_PTR_1126bdc78;
    _objc_alloc(PTR_PTR_1126bdc78);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bef2c20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c15ed20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe5ec0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(*(undefined8 *)(param_1 + 8));
    func_0x00010bef27a0();
    func_0x00010bff1740(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c2a4740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar7);
    puVar9 = PTR_PTR_1126c5530;
    _objc_alloc(PTR_PTR_1126c5530);
    uVar4 = uVar8;
    func_0x00010bf96040(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0fcb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07dde0();
    uVar5 = uVar8;
    func_0x00010bf8ba60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf91b40();
    func_0x00010c059ee0(puVar9);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar10 = PTR_PTR_1126bdc88;
    func_0x00010c2a4560(PTR_PTR_1126bdc88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105e88578; end: 105e885bf;  */

void FUN_105e88578(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e885c0; end: 105e8866f;  */

void FUN_105e885c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010c09c980(param_3);
  func_0x00010c09c9a0(param_3);
  func_0x00010c29ff80(param_3);
  uVar1 = param_3;
  func_0x00010c0640c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be6c840(param_1,param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e88670; end: 105e886bf; -[SCAdsPromotedTileWebViewAttachmentHandler _onWebViewSessionEvent:] */

void FUN_105e88670(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0e7a40(uVar1,param_2,param_3);
  func_0x00010c0b34a0(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e886c0; end: 105e88743; -[SCAdsPromotedTileWebViewAttachmentHandler _onWebViewClosed:pageLoadedOnExit:visibleLoadTimeSec:initialLoadStatusCode:] */

void FUN_105e886c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_6);
  func_0x00010c1bea60(param_1,uVar1,param_3,param_4,param_5,param_6);
  func_0x00010c0b34c0(param_1,*(undefined8 *)(param_2 + 0x30),param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105e88744; end: 105e8884f; -[SCAdsPromotedTileWebViewAttachmentHandler willPresentTileAttachment] */

void FUN_105e88744(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c07cd60();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bef2c20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    _NSStringFromSelector(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar2);
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  func_0x00010c07cd60();
  if ((uVar6 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_start_112671080);
  return;
}



/* Entry: 105e88850; end: 105e888a7; -[SCAdsPromotedTileWebViewAttachmentHandler buildPromotedStoryTrack] */

void FUN_105e88850(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c54e0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2a4420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a4540(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e888a8; end: 105e888af; -[SCAdsPromotedTileWebViewAttachmentHandler attachmentDataModel] */

undefined8 FUN_105e888a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105e888b0; end: 105e888c7; -[SCAdsPromotedTileWebViewAttachmentHandler delegate] */

void FUN_105e888b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e888c8; end: 105e888d3; -[SCAdsPromotedTileWebViewAttachmentHandler setDelegate:] */

void FUN_105e888c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 105e888d4; end: 105e88947; -[SCAdsPromotedTileWebViewAttachmentHandler .cxx_destruct] */

void FUN_105e888d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e88948; end: 105e889eb; -[SCAdsPromotedTileWebViewAttachmentLogger initWithSessionStopWatch:grapheneRegistry:] */

undefined1 *
FUN_105e88948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed8d0;
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



/* Entry: 105e889ec; end: 105e88b47; -[SCAdsPromotedTileWebViewAttachmentLogger logWebBrowserSessionEvent:] */

void FUN_105e889ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x105e88b50;
  puStack_20 = &UNK_1108544b0;
  uStack_18 = param_1;
  func_0x00010c0bf520(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108f02c0,
                      &PTR___NSConcreteGlobalBlock_1108f0300,&puStack_38,
                      &PTR___NSConcreteGlobalBlock_1108f0340,&PTR___NSConcreteGlobalBlock_1108f0360,
                      &PTR___NSConcreteGlobalBlock_1108f0380,&PTR___NSConcreteGlobalBlock_1108f03c0,
                      &PTR___NSConcreteGlobalBlock_1108f0400,&PTR___NSConcreteGlobalBlock_1108f0420,
                      &PTR___NSConcreteGlobalBlock_1108f0440,&PTR___NSConcreteGlobalBlock_1108f0480,
                      &PTR___NSConcreteGlobalBlock_1108f04a0,&PTR___NSConcreteGlobalBlock_1108f04c0,
                      &PTR___NSConcreteGlobalBlock_1108f04e0,&PTR___NSConcreteGlobalBlock_1108f0500,
                      &PTR___NSConcreteGlobalBlock_1108f0520,&PTR___NSConcreteGlobalBlock_1108f0540,
                      &PTR___NSConcreteGlobalBlock_1108f0560,&PTR___NSConcreteGlobalBlock_1108f0580,
                      &PTR___NSConcreteGlobalBlock_1108f05a0,&PTR___NSConcreteGlobalBlock_1108f05c0,
                      &PTR___NSConcreteGlobalBlock_1108f05e0,&PTR___NSConcreteGlobalBlock_1108f0600,
                      &PTR___NSConcreteGlobalBlock_1108f0620,&PTR___NSConcreteGlobalBlock_1108f0640,
                      &PTR___NSConcreteGlobalBlock_1108f0660,&PTR___NSConcreteGlobalBlock_1108f06a0,
                      &PTR___NSConcreteGlobalBlock_1108f06c0);
  return;
}



/* Entry: 105e88b48; end: 105e88bbf;  */

void FUN_105e88b48(void)

{
  return;
}



/* Entry: 105e88bc0; end: 105e88cfb; -[SCAdsPromotedTileWebViewAttachmentLogger _onHtmlResponseStatus:] */

void FUN_105e88bc0(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010c2a3900(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df2578;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dde9d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beed820(*(undefined8 *)(param_1 + 8));
  func_0x00010befc000(uVar6,param_2,puVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105e88cfc; end: 105e88f8f; -[SCAdsPromotedTileWebViewAttachmentLogger logWebViewClosed:loadedOnExit:visiblePageLoadTimeSec:initialPageStatusCode:] */

void FUN_105e88cfc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126b8d98;
  _objc_retain(param_6);
  func_0x00010c2a3740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beed820(*(undefined8 *)(param_2 + 8));
  func_0x00010befc000(uVar4,param_3,puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b8d98;
  func_0x00010c2a3760(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_6;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df2578;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6;
  }
  puVar7 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110dde9d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(ppuVar6);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2ac460(puVar7,param_3,&PTR____CFConstantStringClassReference_110f24ab8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010c2ac460(puVar8,param_3,&PTR____CFConstantStringClassReference_110f24ad8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar5);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105e88f90; end: 105e88fbf; -[SCAdsPromotedTileWebViewAttachmentLogger .cxx_destruct] */

void FUN_105e88f90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e88fc0; end: 105e8964f; -[SCAdsPromotedTileAttachmentImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e88fc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126ed8d8;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_begin_1125a3840);
  lVar1 = param_1;
  FUN_105e89650();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f480();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 == 0) {
    puVar5 = PTR_PTR_1126c5540;
    _objc_alloc();
    lVar1 = param_1;
    func_0x000105e8974c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    FUN_105e89650(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x000105e89770(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c14c1e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff11e0();
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar11 = PTR_PTR_1126c5548;
    _objc_alloc();
    lVar1 = param_1;
    func_0x000105e89698();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x000105e89704(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bef25c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x000105e89728(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf2cf40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x000105e8974c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    FUN_105e89650(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018540();
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar13 = PTR_PTR_1126c5550;
    _objc_alloc();
    lVar1 = param_1;
    func_0x000105e89674();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x000105e896e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)(param_1 + _DAT_1127388a8);
    }
    _objc_retain(uVar16);
    lVar4 = param_1;
    func_0x000105e89794();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x000105e896bc();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x000105e897b8();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bef5d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    FUN_105e89650();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    func_0x00010bff1ba0();
    lVar18 = (long)_DAT_112738878;
    uVar15 = *(undefined8 *)(param_1 + lVar18);
    *(undefined **)(param_1 + lVar18) = puVar13;
    _objc_release(uVar15);
    _objc_release(uVar16);
    _objc_release(puVar14);
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar18));
    _objc_release(puVar11);
    _objc_release(puVar5);
  }
  else {
    puVar5 = PTR_PTR_1126c5538;
    _objc_alloc();
    lVar1 = param_1;
    func_0x000105e89674(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x000105e89698();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x000105e896bc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x000105e896e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x000105e89704();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x000105e89728();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x000105e8974c();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    FUN_105e89650();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x000105e89770();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x000105e89794();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)(param_1 + _DAT_1127388a8);
    }
    _objc_retain(uVar16);
    lVar18 = param_1;
    func_0x000105e897b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7600();
    lVar17 = (long)_DAT_112738874;
    uVar15 = *(undefined8 *)(param_1 + lVar17);
    *(undefined **)(param_1 + lVar17) = puVar5;
    _objc_release(uVar15);
    _objc_release(uVar16);
    _objc_release(lVar18);
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar17));
  }
  return;
}



/* Entry: 105e89650; end: 105e897db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e89650(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112738898);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e897dc; end: 105e89843; -[SCAdsPromotedTileAttachmentImplEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e897dc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_112738874));
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_112738878));
  puStack_28 = PTR_PTR_1126ed8d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e89844; end: 105e89917; -[SCAdsPromotedTileAttachmentImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e89844(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127388a8,0);
  _objc_destroyWeak(param_1 + _DAT_1127388a4);
  _objc_destroyWeak(param_1 + _DAT_1127388a0);
  _objc_destroyWeak(param_1 + _DAT_11273889c);
  _objc_destroyWeak(param_1 + _DAT_112738898);
  _objc_destroyWeak(param_1 + _DAT_112738894);
  _objc_destroyWeak(param_1 + _DAT_112738890);
  _objc_destroyWeak(param_1 + _DAT_11273888c);
  _objc_destroyWeak(param_1 + _DAT_112738888);
  _objc_destroyWeak(param_1 + _DAT_112738884);
  _objc_destroyWeak(param_1 + _DAT_112738880);
  _objc_destroyWeak(param_1 + _DAT_11273887c);
  _objc_storeStrong(param_1 + _DAT_112738874,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738878,0);
  return;
}



/* Entry: 105e89918; end: 105e89ae7; -[SCAdsPromotedTileAttachmentInteractor initWithAdPromotedTileAttachmentScope:promotedStoryLogger:adAttachmentHandlerScopeExposer:adAttachmentHandlerScopeBuilder:applicationLifecycleEvents:handlerFactory:adTrackEventRepository:adConfigProvider:timeProvider:] */

undefined1 *
FUN_105e89918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ed8e0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e89ae8; end: 105e89d53; -[SCAdsPromotedTileAttachmentInteractor begin] */

void FUN_105e89ae8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0ec0c0();
  *(char *)(param_1 + 0x60) = (char)uVar5;
  _objc_release(uVar1);
  func_0x00010c2a6920(*(undefined8 *)(param_1 + 0x50));
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef4a60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf81bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c26ea40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c068940(uVar3);
  func_0x00010bf566e0(uVar6,param_2,uVar1,uVar5,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf0cc60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x50),param_2,param_1);
    puVar4 = PTR_PTR_1126b9308;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar4;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010be65340(param_1);
    func_0x00010c2a89c0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    puVar4 = *(undefined **)(param_1 + 8);
    func_0x00010bf6b020(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1182c0();
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bef4a60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ad1a0(uVar5,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar5);
    if (*(char *)(param_1 + 0x60) == '\x01') {
      func_0x00010be65a20(param_1);
    }
    puVar4 = PTR_PTR_1126c2d50;
    _objc_alloc(PTR_PTR_1126c2d50);
    func_0x00010c032460();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c27ece0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf229e0(uVar1,param_2,uVar2,uVar5,puVar4,param_1,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105e89d54; end: 105e89d83; -[SCAdsPromotedTileAttachmentInteractor end] */

/* WARNING: Possible PIC construction at 0x000105e89d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105e89d6c) */

void FUN_105e89d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x68),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 105e89d84; end: 105e89da7; -[SCAdsPromotedTileAttachmentInteractor _nowInMillis] */

double FUN_105e89d84(double param_1,long param_2)

{
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x48));
  return param_1 * 1000.0;
}



/* Entry: 105e89da8; end: 105e89fbb; -[SCAdsPromotedTileAttachmentInteractor _observeAdTrackEvents] */

void FUN_105e89da8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x68));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x70));
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    uVar4 = uVar3;
    func_0x00010bef3280();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105e89fbc;
    puStack_70 = &UNK_1108f06e0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar2);
    uVar5 = uVar4;
    lStack_68 = lVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010bef3c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_58);
    _objc_retain(lVar2);
    uVar5 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_90);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105e89fbc; end: 105e8a063;  */

void FUN_105e89fbc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be676e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e8a064; end: 105e8a24f; -[SCAdsPromotedTileAttachmentInteractor _onAdLifecycleEvent:adIdentifier:] */

void FUN_105e8a064(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar5 + 0x10);
  }
  _objc_retain(uVar6);
  uVar2 = uVar6;
  func_0x00010c0720c0(uVar6,param_2,param_4);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(lVar5);
  if ((int)uVar2 == 0) goto LAB_105e8a218;
  lVar5 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar5 = 0;
LAB_105e8a244:
    _objc_release(0);
LAB_105e8a1c0:
    lVar4 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      cVar1 = *(char *)(lVar4 + 10);
      _objc_release();
      if (cVar1 == '\x01') {
        if (lVar5 == 8) {
          lVar5 = *(long *)(param_1 + 0x58);
          func_0x00010bf0d600();
          if (lVar5 != 9) {
            func_0x00010be67d60(param_1);
          }
        }
        else if (lVar5 == 10) {
          func_0x00010be67d40(param_1);
        }
      }
      goto LAB_105e8a218;
    }
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x18);
    _objc_release();
    if (lVar5 != 7) goto LAB_105e8a1c0;
    lVar5 = param_3;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      lVar5 = 7;
      goto LAB_105e8a244;
    }
    lVar5 = *(long *)(lVar5 + 0x58);
    _objc_release();
    if (lVar5 != 1) {
      lVar5 = 7;
      goto LAB_105e8a1c0;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bef4a60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0b3ba0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be70680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ad000(uVar6,param_2,uVar2,uVar3,param_1,2,0);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release();
LAB_105e8a218:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e8a250; end: 105e8a337; -[SCAdsPromotedTileAttachmentInteractor _onAdPlayableEvent:adIdentifier:] */

void FUN_105e8a250(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  if ((int)uVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release();
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x10);
      _objc_release();
      if (lVar2 == 4) {
        func_0x00010be67d60(param_1);
      }
      else if (lVar2 == 8) {
        func_0x00010be67d40(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e8a338; end: 105e8a37b; -[SCAdsPromotedTileAttachmentInteractor _parserDerivedTimestamps] */

void FUN_105e8a338(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b9308;
  _objc_opt_new(PTR_PTR_1126b9308);
  puVar2 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e8a37c; end: 105e8a477; -[SCAdsPromotedTileAttachmentInteractor _onAttachmentBackgrounded] */

void FUN_105e8a37c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (((*(byte *)(param_1 + 0x61) & 1) == 0) && ((*(byte *)(param_1 + 0x78) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x61) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf81bc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be70680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf22540(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0b3ba0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c118260();
    func_0x00010c0acfa0(uVar1,param_2,uVar2,lVar3,uVar4,0);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105e8a478; end: 105e8a56b; -[SCAdsPromotedTileAttachmentInteractor _onAttachmentDismissed] */

void FUN_105e8a478(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf81bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be70680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf22540(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3ba0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c118260();
  func_0x00010c0acfc0(uVar1,param_2,uVar2,lVar3,uVar4,(*(byte *)(param_1 + 0x61) ^ 0xff) & 1,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e8a56c; end: 105e8a6ef; -[SCAdsPromotedTileAttachmentInteractor adAttachmentHandlerDidPresent:] */

void FUN_105e8a56c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf0d600();
  _objc_release(param_3);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    lVar2 = param_1;
    func_0x00010be70680(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 != 9) {
      *(undefined8 *)(param_1 + 0x90) = 1;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010be65340(param_1);
    func_0x00010c2a88e0(uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x80);
    func_0x00010bf21f60(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef4a60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3ba0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf81bc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c26ea40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c26eae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad180(uVar3,param_2,uVar4,uVar5,lVar2,uVar7,lVar1,*(undefined8 *)(param_1 + 0x90));
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105e8a6f0; end: 105e8a6f3; -[SCAdsPromotedTileAttachmentInteractor adAttachmentHandlerViewWillFullyAppear:] */

void FUN_105e8a6f0(void)

{
  return;
}



/* Entry: 105e8a6f4; end: 105e8a703; -[SCAdsPromotedTileAttachmentInteractor adAttachmentHandlerViewDidFullyAppear:] */

void FUN_105e8a6f4(long param_1)

{
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be66030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeDidEnterBackground_1125771a8);
  return;
}



/* Entry: 105e8a704; end: 105e8a80f; -[SCAdsPromotedTileAttachmentInteractor _observeDidEnterBackground] */

void FUN_105e8a704(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x88));
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf75dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105e8a810; end: 105e8a83b;  */

void FUN_105e8a810(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e8a83c; end: 105e8a937; -[SCAdsPromotedTileAttachmentInteractor _onDidEnterBackground] */

void FUN_105e8a83c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x61) = 1;
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010be65340();
  func_0x00010c2a88a0(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf81bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf22540(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3ba0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c118260();
  func_0x00010c0acfa0(uVar5,param_2,uVar1,uVar2,uVar3,*(undefined8 *)(param_1 + 0x90));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105e8a938; end: 105e8a93b; -[SCAdsPromotedTileAttachmentInteractor adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_105e8a938(void)

{
  return;
}



/* Entry: 105e8a93c; end: 105e8a93f; -[SCAdsPromotedTileAttachmentInteractor adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_105e8a93c(void)

{
  return;
}



/* Entry: 105e8a940; end: 105e8aa13; -[SCAdsPromotedTileAttachmentInteractor adAttachmentHandlerDidComplete:result:] */

void FUN_105e8a940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105e8aa14;
    puStack_40 = &UNK_1108f0740;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x105e8aa2c;
    puStack_68 = &UNK_110849810;
    lStack_60 = param_1;
    lStack_38 = param_1;
    func_0x00010c0c0800(param_4,param_2,&puStack_58,&puStack_80);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1182c0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e8aa14; end: 105e8aa2f;  */

void FUN_105e8aa14(long param_1,undefined8 param_2)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x60) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be68c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__onDidCompleteWithContext__112577ca8,param_2);
  return;
}



/* Entry: 105e8aa30; end: 105e8ab23; -[SCAdsPromotedTileAttachmentInteractor _onDidCompleteWithContext:] */

void FUN_105e8aa30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010be65340();
  func_0x00010c2a88a0(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf81bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf22540(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3ba0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c118260();
  func_0x00010c0acfc0(uVar5,param_2,uVar1,uVar2,uVar3,(*(byte *)(param_1 + 0x61) ^ 0xff) & 1,
                      *(undefined8 *)(param_1 + 0x90));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105e8ab24; end: 105e8ac13; -[SCAdsPromotedTileAttachmentInteractor adsPromotedTileAttachmentHandlerWillPresentAttachment:] */

void FUN_105e8ab24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010bf0d600();
    if (lVar1 != param_3) {
      *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bef4a60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0b3ba0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010bf21f60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ad000(uVar2,param_2,uVar3,uVar4,uVar5,param_3,*(undefined8 *)(param_1 + 0x90));
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 105e8ac14; end: 105e8acdf; -[SCAdsPromotedTileAttachmentInteractor .cxx_destruct] */

void FUN_105e8ac14(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105e8ace0; end: 105e8aff7; -[SCPromotedStoryShareEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e8ace0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_1127388f8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = (undefined1)lVar3;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c5558;
  _objc_alloc();
  lVar1 = param_1 + _DAT_1127388fc;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112738900;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010be021c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112738904;
  _objc_loadWeakRetained(lVar3);
  lVar10 = lVar3;
  func_0x00010c110fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cf40();
  lVar11 = (long)_DAT_112738908;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar5;
  _objc_release(uVar9);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  func_0x00010c2104c0(*(undefined8 *)(param_1 + lVar11));
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  lVar10 = (long)_DAT_11273890c;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010bfbb120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010c1180e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar3);
  lVar8 = lVar3;
  func_0x00010bf53880();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010bf84e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15be40(uVar9);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105e8aff8; end: 105e8b03f;  */

void FUN_105e8aff8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e8b040; end: 105e8b243; -[SCPromotedStoryShareEntryPoint _createAdLoggerUsingSwiftPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e8b040(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126c5560;
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126c5568;
    _objc_alloc();
    lVar2 = param_1 + _DAT_112738910;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112738914;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112738918;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_11273891c;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010bef25c0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_112738920;
    _objc_loadWeakRetained(param_1);
    lVar10 = param_1;
    func_0x00010bfb2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff5580(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10);
    _objc_release(lVar10);
    _objc_release(param_1);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  else {
    lVar2 = param_1 + _DAT_112738910;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + _DAT_112738914;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_1 + _DAT_112738918;
    _objc_loadWeakRetained(lVar4);
    lVar5 = param_1 + _DAT_11273891c;
    _objc_loadWeakRetained(lVar5);
    lVar6 = param_1 + _DAT_112738920;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c0b6ec0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e8b244; end: 105e8b2cb; -[SCPromotedStoryShareEntryPoint _discoverShareCreationBlock] */

void FUN_105e8b244(undefined8 param_1)

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
  pcStack_40 = FUN_105e8b2cc;
  puStack_38 = &UNK_1108f07a0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105e8b2cc; end: 105e8b4b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e8b2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 == 0) {
    uVar9 = 0;
  }
  else {
    lVar1 = param_5 + _DAT_112738900;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5 + _DAT_112738924;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c08f180();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5 + _DAT_1127388f8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_5 + _DAT_112738928;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c243200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_6;
    FUN_106378d08(param_1,param_2,param_3,param_4,param_6,param_7,param_8,param_9,lVar2,lVar4,lVar6,
                  lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 105e8b4b8; end: 105e8b583; -[SCPromotedStoryShareEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e8b4b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738904);
  _objc_destroyWeak(param_1 + _DAT_112738928);
  _objc_destroyWeak(param_1 + _DAT_11273891c);
  _objc_destroyWeak(param_1 + _DAT_112738920);
  _objc_destroyWeak(param_1 + _DAT_1127388f8);
  _objc_destroyWeak(param_1 + _DAT_112738924);
  _objc_destroyWeak(param_1 + _DAT_11273892c);
  _objc_destroyWeak(param_1 + _DAT_112738918);
  _objc_destroyWeak(param_1 + _DAT_112738900);
  _objc_destroyWeak(param_1 + _DAT_112738910);
  _objc_destroyWeak(param_1 + _DAT_112738914);
  _objc_destroyWeak(param_1 + _DAT_1127388fc);
  _objc_destroyWeak(param_1 + _DAT_11273890c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738908,0);
  return;
}



/* Entry: 105e8b584; end: 105e8b6ab; -[SCPromotedStoryShareSession initWithUserSession:adLogger:notificationPool:discoverShareCreationBlock:previewFilterDataProviderFactory:] */

undefined1 *
FUN_105e8b584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ed8e8;
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
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e8b6ac; end: 105e8b85b; -[SCPromotedStoryShareSession sendFromViewController:promotedStory:coverImage:dismissalCompletionHandler:] */

void FUN_105e8b6ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bef4a60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bef2c20(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar6 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar7 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  func_0x00010bc852e4();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5,uVar1,uVar3,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar4;
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
  uVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  _objc_release(uVar1);
  func_0x00010c22b360(uVar6,uVar7,*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_5);
  func_0x00010c15c4c0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e8b85c; end: 105e8b85f; -[SCPromotedStoryShareSession shareControllerDidBeginSharing:] */

void FUN_105e8b85c(void)

{
  return;
}



/* Entry: 105e8b860; end: 105e8b923; -[SCPromotedStoryShareSession shareController:didCompleteSharing:withParameters:] */

void FUN_105e8b860(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    if (*(char *)(param_1 + 0x50) == '\x01') {
      func_0x00010bec9200(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0900();
      _objc_release(param_1);
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e1f218;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb9dc0(param_1);
      _objc_release(ppuVar1);
      func_0x00010be575a0(param_1);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e8b924; end: 105e8b927; -[SCPromotedStoryShareSession shareControllerDidSaveSnap:parameters:] */

void FUN_105e8b924(void)

{
  return;
}



/* Entry: 105e8b928; end: 105e8b92b; -[SCPromotedStoryShareSession shareControllerDidExitPreview] */

void FUN_105e8b928(void)

{
  return;
}



/* Entry: 105e8b92c; end: 105e8b92f; -[SCPromotedStoryShareSession shareController:didChangeState:] */

void FUN_105e8b92c(void)

{
  return;
}



/* Entry: 105e8b930; end: 105e8b943; -[SCPromotedStoryShareSession shareControllerDidDismiss:] */

void FUN_105e8b930(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e8b93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e8b944; end: 105e8b94b; -[SCPromotedStoryShareSession previewFilterDataProviderWithSnapSource:mediaType:] */

void FUN_105e8b944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc58b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_getFilterDataProviderUnderABWith_1125cefd0);
  return;
}



/* Entry: 105e8b94c; end: 105e8b9a3; -[SCPromotedStoryShareSession _swiftShareSupport] */

void FUN_105e8b94c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c5560;
    _objc_alloc();
    func_0x00010bff18e0();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105e8b9a4; end: 105e8ba03; -[SCPromotedStoryShareSession _showMessageWithText:] */

void FUN_105e8b9a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e8ba04; end: 105e8bb27; -[SCPromotedStoryShareSession _logPromotedStoryShareWithParams:] */

void FUN_105e8ba04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2e758);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0b4ca0();
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126c5570;
  _objc_alloc(PTR_PTR_1126c5570);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bef2c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bef4a60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c099300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf20f80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1700(puVar1,param_2,uVar2,uVar4,uVar5,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad140();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


