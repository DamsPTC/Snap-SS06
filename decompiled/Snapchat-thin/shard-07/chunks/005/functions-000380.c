/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056e8c28; end: 1056e8e6b; -[SCComposerLensIconDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_1056e8c28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puVar1 = PTR_PTR_1126afd78;
  puStack_90 = &uStack_98;
  _objc_alloc(PTR_PTR_1126afd78);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1056e8e6c;
  puStack_a8 = &UNK_110847658;
  puStack_a0 = &uStack_98;
  func_0x00010bffae00();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf68fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0952c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_c8,param_1);
  _objc_retain(param_6);
  puVar7 = auStack_d0;
  _objc_copyWeak(puVar7,auStack_c8);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar6);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_d0);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uVar6);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056e8e6c; end: 1056e8e7f;  */

void FUN_1056e8e6c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1056e8e80; end: 1056e8fbf;  */

void FUN_1056e8e80(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    func_0x00010c0c0760(param_2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1056e8fc0; end: 1056e9177;  */

void FUN_1056e8fc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0)) {
    puVar2 = PTR_PTR_1126b5928;
    _objc_alloc(PTR_PTR_1126b5928);
    uVar3 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bfe5b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bf3ec40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c024560(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0943c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = uVar5;
    _objc_retain(uVar5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1056e9178; end: 1056e9227;  */

void FUN_1056e9178(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      puVar1 = PTR_PTR_1126b27a8;
      func_0x00010bfe9800(PTR_PTR_1126b27a8);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
      _objc_release(puVar1);
    }
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056e9228; end: 1056e9237;  */

void FUN_1056e9228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056e9234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1056e9238; end: 1056e9267; -[SCComposerLensIconDownloader .cxx_destruct] */

void FUN_1056e9238(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e9268; end: 1056e9333; -[SCComposerLensImageDownloaderRequest initWithTargetURL:encryptionKey:lensId:] */

undefined1 *
FUN_1056e9268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9c40;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056e9334; end: 1056e933b; -[SCComposerLensImageDownloaderRequest targetURL] */

undefined8 FUN_1056e9334(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1056e933c; end: 1056e9343; -[SCComposerLensImageDownloaderRequest encryptionKey] */

undefined8 FUN_1056e933c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056e9344; end: 1056e934b; -[SCComposerLensImageDownloaderRequest lensId] */

undefined8 FUN_1056e9344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056e934c; end: 1056e9387; -[SCComposerLensImageDownloaderRequest .cxx_destruct] */

void FUN_1056e934c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e9388; end: 1056e93f3; -[SCComposerLensImageDownloader supportedURLSchemes] */

void FUN_1056e9388(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar1 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110df8258;
  puVar8 = (undefined8 *)0x1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = (undefined1 *)pppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = (undefined1 *)pppuVar1;
  func_0x00010c0e00e0(pppuVar1,param_2,&PTR____CFConstantStringClassReference_110dd51f8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)pppuVar1;
  func_0x00010c0e00e0(pppuVar1,param_2,&PTR____CFConstantStringClassReference_110dc1758);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110df80f8;
LAB_1056e9510:
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *puVar8 = ppuVar7;
  }
  else {
    puVar6 = puVar2;
    func_0x00010c08fa60();
    if (puVar6 == (undefined1 *)0x0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110df8278;
      goto LAB_1056e9510;
    }
    if (puVar5 == (undefined *)0x0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110df8298;
      goto LAB_1056e9510;
    }
    _objc_alloc(PTR_PTR_1126bd470);
    func_0x00010c050ca0();
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(pppuVar1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056e93f4; end: 1056e956b; -[SCComposerLensImageDownloader requestPayloadWithURL:error:] */

void FUN_1056e93f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd51f8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc1758);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110df80f8;
  }
  else {
    lVar5 = lVar1;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110df8278;
    }
    else {
      if (puVar4 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126bd470;
        _objc_alloc(PTR_PTR_1126bd470);
        func_0x00010c050ca0();
        goto LAB_1056e9528;
      }
      ppuVar6 = &PTR____CFConstantStringClassReference_110df8298;
    }
  }
  func_0x000108543ce4();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  puVar7 = (undefined *)0x0;
  *param_4 = ppuVar6;
LAB_1056e9528:
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1056e956c; end: 1056e990b; -[SCComposerLensImageDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_1056e956c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bd478;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c26a220();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bc200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2bbd20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf93ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ad300(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c26a220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c2af9a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2b71c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar11);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf64e40(0x40f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b0820;
  _objc_opt_new(PTR_PTR_1126b0820);
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2b2880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ad7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puVar1 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010bfa4f00(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(param_6);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056e990c; end: 1056e991f;  */

void FUN_1056e990c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1056e9920; end: 1056e99e3;  */

void FUN_1056e9920(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d020(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x20);
  if (puVar1 == (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110df8138;
    func_0x000108543ce4(&PTR____CFConstantStringClassReference_110df8138);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = *(code **)(lVar5 + 0x10);
    ppuVar2 = (undefined **)0x0;
    ppuVar6 = ppuVar3;
  }
  else {
    ppuVar2 = (undefined **)PTR_PTR_1126b27a8;
    func_0x00010bfe9800(PTR_PTR_1126b27a8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = *(code **)(lVar5 + 0x10);
    ppuVar3 = (undefined **)0x0;
    ppuVar6 = ppuVar2;
  }
  (*pcVar4)(lVar5,ppuVar2,ppuVar3);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056e99e4; end: 1056e99ef; -[SCComposerLensImageDownloader .cxx_destruct] */

void FUN_1056e99e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e99f0; end: 1056e99fb; -[SCComposerRemoteImageDownloader supportedURLSchemes] */

undefined ** FUN_1056e99f0(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_11117ef40;
}



/* Entry: 1056e99fc; end: 1056e9bab; -[SCComposerRemoteImageDownloader requestPayloadWithURL:error:] */

void FUN_1056e99fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  puStack_48 = PTR_PTR_1126e9c50;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_contentTtlInMinutes_11252a738);
  func_0x00010c003a80(puVar2);
  puVar4 = PTR_PTR_1126b85a0;
  puVar3 = puVar2;
  func_0x00010bf220e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c900(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_2);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  _objc_release(param_2);
  puVar5 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(param_1,*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1056e9bac; end: 1056e9bb3; -[SCComposerSnapImageDownloader contentTtlInMinutes] */

undefined8 FUN_1056e9bac(void)

{
  return 0x2760;
}



/* Entry: 1056e9bb4; end: 1056e9c13; -[SCComposerSnapImageDownloader requestPayloadWithURL:error:] */

undefined8
FUN_1056e9bb4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw();
  _objc_retain(uVar5);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126b85a8;
  _objc_opt_class(PTR_PTR_1126b85a8);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar2 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  uVar4 = uVar2;
  func_0x00010bfe8c60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfd60();
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(puVar1 + 8);
  _objc_retain(param_6);
  func_0x00010bfa7900(uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  return 0;
}



/* Entry: 1056e9c14; end: 1056e9c67; -[SCComposerSnapImageDownloader supportedURLSchemes] */

undefined8 FUN_1056e9c14(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 in_x5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  _objc_retain(uVar5);
  _objc_retain(in_x5);
  puVar3 = PTR_PTR_1126b85a8;
  _objc_opt_class(PTR_PTR_1126b85a8);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar1 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010bfe8c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfd60();
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(puVar2 + 8);
  _objc_retain(in_x5);
  func_0x00010bfa7900(uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(in_x5);
  _objc_release(in_x5);
  _objc_release(uVar1);
  _objc_release(uVar5);
  return 0;
}



/* Entry: 1056e9c68; end: 1056e9d8b; -[SCComposerSnapImageDownloader loadImageWithRequestPayload:parameters:completion:] */

undefined8
FUN_1056e9c68(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b85a8;
  _objc_opt_class(PTR_PTR_1126b85a8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bfe8c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfd60();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  func_0x00010bfa7900(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1056e9d8c; end: 1056e9d97;  */

void FUN_1056e9d8c(void)

{
  return;
}



/* Entry: 1056e9d98; end: 1056e9e37;  */

void FUN_1056e9d98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1056e9e38;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = param_2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 1056e9e38; end: 1056e9eef;  */

void FUN_1056e9e38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1056e9ef0;
  puStack_50 = &UNK_110891570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  puStack_90 = puVar3;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1056e9f68;
  puStack_78 = &UNK_110859a38;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar4);
  uStack_70 = uVar4;
  func_0x00010c0c0800(uVar1,param_2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_48);
  return;
}



/* Entry: 1056e9ef0; end: 1056e9f67;  */

void FUN_1056e9ef0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b27a8;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056e9f68; end: 1056e9f7b;  */

void FUN_1056e9f68(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001056e9f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_2);
  return;
}



/* Entry: 1056e9f7c; end: 1056e9f87; -[SCComposerSnapImageDownloader .cxx_destruct] */

void FUN_1056e9f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e9f88; end: 1056ea03b; -[SCComposerBitmojiFetchParameters initWithImageParams:feature:contexts:] */

undefined1 *
FUN_1056e9f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9c60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056ea03c; end: 1056ea05f; -[SCComposerBitmojiFetchParameters copyWithZone:] */

undefined8 FUN_1056ea03c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1056ea060; end: 1056ea0d7; -[SCComposerBitmojiFetchParameters hash] */

undefined8 * FUN_1056ea060(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_38 = (long)*(int *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1056ea168:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1056ea174;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)((long)puVar3 + 8) == *(int *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1056ea174;
        }
        goto LAB_1056ea168;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1056ea174:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1056ea0d8; end: 1056ea18f; -[SCComposerBitmojiFetchParameters isEqual:] */

long FUN_1056ea0d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1056ea168:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1056ea174;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1056ea174;
        }
        goto LAB_1056ea168;
      }
    }
    lVar3 = 0;
  }
LAB_1056ea174:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1056ea190; end: 1056ea197; -[SCComposerBitmojiFetchParameters imageParams] */

undefined8 FUN_1056ea190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056ea198; end: 1056ea19f; -[SCComposerBitmojiFetchParameters feature] */

undefined4 FUN_1056ea198(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1056ea1a0; end: 1056ea1a7; -[SCComposerBitmojiFetchParameters contexts] */

undefined8 FUN_1056ea1a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056ea1a8; end: 1056ea1d7; -[SCComposerBitmojiFetchParameters .cxx_destruct] */

void FUN_1056ea1a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1056ea1d8; end: 1056ea28b; -[SCComposerBitmojiSelfieFetchParameters initWithFetchSelfieRequest:feature:contexts:] */

undefined1 *
FUN_1056ea1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9c68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056ea28c; end: 1056ea2af; -[SCComposerBitmojiSelfieFetchParameters copyWithZone:] */

undefined8 FUN_1056ea28c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1056ea2b0; end: 1056ea327; -[SCComposerBitmojiSelfieFetchParameters hash] */

undefined8 * FUN_1056ea2b0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_38 = (long)*(int *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1056ea3b8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1056ea3c4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)((long)puVar3 + 8) == *(int *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1056ea3c4;
        }
        goto LAB_1056ea3b8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1056ea3c4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1056ea328; end: 1056ea3df; -[SCComposerBitmojiSelfieFetchParameters isEqual:] */

long FUN_1056ea328(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1056ea3b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1056ea3c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1056ea3c4;
        }
        goto LAB_1056ea3b8;
      }
    }
    lVar3 = 0;
  }
LAB_1056ea3c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1056ea3e0; end: 1056ea3e7; -[SCComposerBitmojiSelfieFetchParameters fetchSelfieRequest] */

undefined8 FUN_1056ea3e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056ea3e8; end: 1056ea3ef; -[SCComposerBitmojiSelfieFetchParameters feature] */

undefined4 FUN_1056ea3e8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1056ea3f0; end: 1056ea3f7; -[SCComposerBitmojiSelfieFetchParameters contexts] */

undefined8 FUN_1056ea3f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056ea3f8; end: 1056ea427; -[SCComposerBitmojiSelfieFetchParameters .cxx_destruct] */

void FUN_1056ea3f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1056ea428; end: 1056ea51b; -[SCSnapcodeWidgetDataUpdater initWithFileManager:homeScreenWidgetUpdater:] */

undefined1 *
FUN_1056ea428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9c70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056ea51c; end: 1056ea5bf; -[SCSnapcodeWidgetDataUpdater updateSnapcodeAndBitmojiWithSnapcodeScopeExposer:userId:observeAvatarId:isResumed:] */

void FUN_1056ea51c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_6 == 0) || (uVar1 = param_1, func_0x00010be43e00(), (uVar1 & 1) == 0)) {
    func_0x00010bee0520(param_1,param_2,param_3,param_4);
  }
  func_0x00010be5d9a0(param_1);
  func_0x00010be65c20(param_1,param_2,param_5,param_3,param_4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056ea5c0; end: 1056ea697; -[SCSnapcodeWidgetDataUpdater clearStoredResourcesWhenLogoutWithCompletion:] */

void FUN_1056ea5c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1056ea698; end: 1056ea6cb;  */

void FUN_1056ea698(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056ea6cc; end: 1056ea72f; -[SCSnapcodeWidgetDataUpdater _clearStoredResourcesWhenLogoutAsyncWithCompletion:] */

void FUN_1056ea6cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uStack_28 = 0;
  func_0x00010c12cc60(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 8),
                      &uStack_28);
  func_0x00010be652e0(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1056ea730; end: 1056ea7d7; -[SCSnapcodeWidgetDataUpdater _markUserLoggedIn] */

void FUN_1056ea730(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1056ea7d8; end: 1056ea803;  */

void FUN_1056ea7d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdefae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056ea804; end: 1056ea883; -[SCSnapcodeWidgetDataUpdater _createLoggedInFlagFile] */

void FUN_1056ea804(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bdecb20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar1;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 8);
  }
  func_0x00010bdc2c60(lVar1,param_2,&PTR____CFConstantStringClassReference_110df82f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0320(param_1,param_2,lVar1,0,1);
  func_0x00010be652e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056ea884; end: 1056ea99b; -[SCSnapcodeWidgetDataUpdater _updateSnapcodeWithSnapcodeScopeExposer:userId:] */

void FUN_1056ea884(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b0870;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4065200000000000,0x4065200000000000);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b19a8;
    _objc_alloc(PTR_PTR_1126b19a8);
    func_0x00010c0566a0();
    func_0x00010bf9d620(param_3,param_2,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b19a0;
  func_0x00010c2942c0(PTR_PTR_1126b19a0,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056ea99c; end: 1056eaacf; -[SCSnapcodeWidgetDataUpdater _observeAvatarId:snapcodeScopeExposer:userId:] */

void FUN_1056ea99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056eaad0; end: 1056eab03;  */

void FUN_1056eaad0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee0520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056eab04; end: 1056eac3f; -[SCSnapcodeWidgetDataUpdater snapcodeDidLoadWithError:] */

void FUN_1056eab04(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bfe7c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1056eac40; end: 1056eac73;  */

void FUN_1056eac40(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec41c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056eac74; end: 1056ead6b; -[SCSnapcodeWidgetDataUpdater _storeSnapcode:] */

void FUN_1056eac74(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = auStack_38;
    _objc_initWeak(puVar1,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f8240(puVar1);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1056ead6c; end: 1056ead9f;  */

void FUN_1056ead6c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde9520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056eada0; end: 1056eae93; -[SCSnapcodeWidgetDataUpdater _convertSnapcodeFromImage:] */

void FUN_1056eada0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1056eae94; end: 1056eaec7;  */

void FUN_1056eae94(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd7d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056eaec8; end: 1056eaf67; -[SCSnapcodeWidgetDataUpdater _cacheSnapcode:] */

void FUN_1056eaec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bdecb20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar1;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 8);
  }
  func_0x00010bdc2c60(lVar1,param_2,&PTR____CFConstantStringClassReference_110dbe8b8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bed0320(param_1,param_2,lVar1,param_3,0);
  *(char *)(param_1 + 0x10) = (char)lVar2;
  func_0x00010be652e0(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056eaf68; end: 1056eb09b; -[SCSnapcodeWidgetDataUpdater _isSnapcodeCached] */

undefined8 FUN_1056eaf68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf4b0a0(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bdc2c80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = uVar4;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfacbe0(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  if ((int)uVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar7 = uVar4;
    func_0x00010bdc2c60(uVar4,param_2,&PTR____CFConstantStringClassReference_110dbe8b8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = uVar7;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfacbe0(uVar6,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar7);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return uVar6;
}



/* Entry: 1056eb09c; end: 1056eb14b; -[SCSnapcodeWidgetDataUpdater _createDataStorePathIfNecessary] */

void FUN_1056eb09c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf4b0a0(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bdc2c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0320(param_1,param_2,uVar4,0,1);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1056eb14c; end: 1056eb25b; -[SCSnapcodeWidgetDataUpdater _tryCreateUrl:data:isDirectory:] */

ulong FUN_1056eb14c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x38);
    lVar1 = param_3;
    func_0x00010c0f5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == 0) {
      func_0x00010bf561e0(uVar3,param_2,lVar1,param_4,0);
      _objc_release(lVar1);
    }
    else {
      func_0x00010bfacbe0();
      _objc_release(lVar1);
      if ((uVar3 & 1) == 0) {
        uVar3 = *(ulong *)(param_1 + 0x38);
        uStack_48 = 0;
        func_0x00010bf55da0(uVar3,param_2,param_3,1,0,&uStack_48);
      }
      else {
        uVar3 = 1;
      }
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1056eb25c; end: 1056eb263; -[SCSnapcodeWidgetDataUpdater _notifyWidgetExtensionIfNecessary] */

void FUN_1056eb25c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_reloadSnapcodeWidget_112627e18);
  return;
}



/* Entry: 1056eb264; end: 1056eb2cf; -[SCSnapcodeWidgetDataUpdater .cxx_destruct] */

void FUN_1056eb264(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056eb2d0; end: 1056eb4f3; -[SCSnapcodeWidgetEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056eb2d0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  uVar1 = param_1;
  FUN_1056eb4f4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c07c8c0();
  if ((((uVar1 & 1) != 0) || (uVar1 = uVar2, func_0x00010c073c40(), (uVar1 & 1) != 0)) ||
     (uVar1 = uVar2, func_0x00010c073d80(), (int)uVar1 != 0)) {
    uVar1 = param_1;
    FUN_1056eb4f4(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if (param_1 == 0) {
      _objc_retain(0);
      uVar10 = 0;
      lVar12 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + (long)_DAT_112727fbc);
      _objc_retain(uVar10);
      lVar12 = param_1 + (long)_DAT_112727fb4;
      _objc_loadWeakRetained(lVar12);
    }
    lVar5 = lVar12;
    func_0x00010bf13100(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar11;
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar5);
    _objc_release(lVar12);
    puVar7 = PTR_PTR_1126bd480;
    _objc_alloc();
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + (long)_DAT_112727f9c;
    _objc_loadWeakRetained(lVar12);
    lVar5 = lVar12;
    func_0x00010bfe3ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012ce0(puVar7,param_2,puVar8,lVar5);
    lVar11 = (long)_DAT_112727fa0;
    uVar9 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar7;
    _objc_release(uVar9);
    _objc_release(lVar5);
    _objc_release(lVar12);
    _objc_release(puVar8);
    uVar9 = *(undefined8 *)(param_1 + lVar11);
    uVar1 = uVar2;
    func_0x00010c07c8c0(uVar2);
    func_0x00010c28a1e0(uVar9,param_2,uVar10,uVar4,lVar6,uVar1);
    _objc_release(uVar10);
    _objc_release(lVar6);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056eb4f4; end: 1056eb517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056eb4f4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112727fac);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056eb518; end: 1056eb617; -[SCSnapcodeWidgetEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056eb518(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112727fa4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112727fa0);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf3c1e0(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c117720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056eb618; end: 1056eb643;  */

void FUN_1056eb618(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056eb644; end: 1056eb653; -[SCSnapcodeWidgetEntryPoint _finishCleanUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056eb644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112727fa4),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1056eb654; end: 1056eb6eb; -[SCSnapcodeWidgetEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056eb654(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112727fbc,0);
  _objc_destroyWeak(param_1 + _DAT_112727f9c);
  _objc_destroyWeak(param_1 + _DAT_112727fb8);
  _objc_destroyWeak(param_1 + _DAT_112727fb4);
  _objc_destroyWeak(param_1 + _DAT_112727fb0);
  _objc_destroyWeak(param_1 + _DAT_112727fac);
  _objc_destroyWeak(param_1 + _DAT_112727fa8);
  _objc_storeStrong(param_1 + _DAT_112727fa4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112727fa0,0);
  return;
}



/* Entry: 1056eb6ec; end: 1056eb763; -[SCNotificationEncryptionKeyStore initWithCurrentUserId:] */

undefined1 * FUN_1056eb6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9c78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056eb764; end: 1056eb843; -[SCNotificationEncryptionKeyStore retrieveKey] */

void FUN_1056eb764(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _os_unfair_lock_lock(param_1 + 8);
  func_0x00010bde0e20(param_1);
  uVar1 = param_1;
  func_0x00010be22480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010be1a940(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_1;
    func_0x00010be224a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    if ((uVar3 == 0) && (uVar3 = param_1, func_0x00010c14b8e0(), (uVar3 & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      _objc_retain(uVar1);
      uVar3 = uVar1;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056eb844; end: 1056eb883; -[SCNotificationEncryptionKeyStore _clearSavedKeyAndUserIdIfUserMismatch] */

void FUN_1056eb844(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_assert_owner(param_1 + 8);
  lVar1 = param_1;
  func_0x00010beb2d40();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clearSavedKeyAndUserId_1125ac980);
    return;
  }
  return;
}



/* Entry: 1056eb884; end: 1056eb8fb; -[SCNotificationEncryptionKeyStore _getEncryptionKeyForCurrentUser] */

void FUN_1056eb884(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_assert_owner(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1;
  func_0x00010be224a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar2,param_2,lVar1);
  _objc_release(lVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be22480(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056eb8fc; end: 1056eb90f; -[SCNotificationEncryptionKeyStore _getSavedEncryptionKey] */

void FUN_1056eb8fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aef90,PTR_s_dataForKey__1125b6868,
             &PTR____CFConstantStringClassReference_110df8318);
  return;
}



/* Entry: 1056eb910; end: 1056eb9af; -[SCNotificationEncryptionKeyStore _getSavedUserId] */

void FUN_1056eb910(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _os_unfair_lock_assert_owner(param_1 + 8);
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110df8338);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056eb9b0; end: 1056eba23; -[SCNotificationEncryptionKeyStore _generateAndSaveKeyWithUserId] */

void FUN_1056eb9b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _os_unfair_lock_assert_owner(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156da0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 == (undefined *)0x0) ||
     (func_0x00010be99400(param_1,param_2,puVar1), (int)param_1 == 0)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056eba24; end: 1056eba7f; -[SCNotificationEncryptionKeyStore _saveKeyAndUserId:] */

uint FUN_1056eba24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 8);
  lVar1 = param_1;
  func_0x00010c14a460(param_1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c14b8e0(param_1);
  return (uint)lVar1 & (uint)param_1;
}



/* Entry: 1056eba80; end: 1056ebad7; -[SCNotificationEncryptionKeyStore saveEncryptionKey:] */

undefined * FUN_1056eba80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 8);
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010c16e540(PTR_PTR_1126aef90,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110df8318);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1056ebad8; end: 1056ebb3b; -[SCNotificationEncryptionKeyStore savedCurrentUserId] */

undefined * FUN_1056ebad8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _os_unfair_lock_assert_owner(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf64920(uVar1,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aef90;
  func_0x00010c16e540(PTR_PTR_1126aef90,param_2,uVar1,
                      &PTR____CFConstantStringClassReference_110df8338);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 1056ebb3c; end: 1056ebbc7; -[SCNotificationEncryptionKeyStore _shouldClearSavedKeyAndUserId] */

uint FUN_1056ebb3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _os_unfair_lock_assert_owner(param_1 + 8);
  lVar1 = param_1;
  func_0x00010be224a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be22480();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c0720c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x10));
    uVar4 = (uint)lVar3 ^ 1;
    if (lVar2 == 0) {
      uVar4 = 1;
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 1056ebbc8; end: 1056ebc07; -[SCNotificationEncryptionKeyStore clearSavedKeyAndUserId] */

/* WARNING: Possible PIC construction at 0x0001056ebbec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001056ebbf0) */

void FUN_1056ebbc8(long param_1)

{
  _os_unfair_lock_assert_owner(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c12bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aef90,PTR_s_removeDataForKey__112628948,
             &PTR____CFConstantStringClassReference_110df8318);
  return;
}



/* Entry: 1056ebc08; end: 1056ebc13; -[SCNotificationEncryptionKeyStore .cxx_destruct] */

void FUN_1056ebc08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1056ebc14; end: 1056ebc7b; -[SCCameraLoggingQueueEntryPoint begin] */

void FUN_1056ebc14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1056ebc7c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b3ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef6e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056ebc7c; end: 1056ebc9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056ebc7c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112727fd0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056ebca0; end: 1056ebd3b; -[SCCameraLoggingQueueEntryPoint end] */

void FUN_1056ebca0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  FUN_1056ebc7c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b3ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126e9c80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056ebd3c; end: 1056ebd7f; -[SCCameraLoggingQueueEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056ebd3c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727fd0);
  _objc_destroyWeak(param_1 + _DAT_112727fcc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727fc8);
  return;
}



/* Entry: 1056ebd80; end: 1056ebeab; -[SCSpectaclesPagePropertiesResolver pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056ebd80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfdc7e0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)lVar1 != 0) {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f0c0f8;
    lVar1 = param_3;
    func_0x00010c248460();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c141c40();
    func_0x00010c0df760(puVar2,param_2,(uint)lVar9 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(param_4,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_112727fd4;
  lVar1 = param_3 + lVar9;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3 + lVar9;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010bf62120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3 + _DAT_112727fd8;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126bd488;
  _objc_alloc(PTR_PTR_1126bd488);
  lVar1 = param_3 + _DAT_112727fdc;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038fe0(puVar2,param_2,lVar4,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar9 = param_3 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar1 = lVar9;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  puVar3 = PTR_PTR_1126bd490;
  _objc_alloc();
  lVar9 = lVar5;
  func_0x00010c27dd80(lVar5);
  lVar7 = lVar5;
  func_0x00010c079d20(lVar5);
  func_0x00010c0406c0(puVar3,param_2,puVar2,lVar1,lVar6,lVar9 == 7,lVar7);
  lVar9 = (long)_DAT_112727fe0;
  uVar8 = *(undefined8 *)(param_3 + lVar9);
  *(undefined **)(param_3 + lVar9) = puVar3;
  _objc_release(uVar8);
  func_0x00010bf192c0(*(undefined8 *)(param_3 + lVar9));
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1056ebeac; end: 1056ec063; -[SCLeaveCustomStoryEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056ebeac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_112727fd4;
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bf62120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112727fd8;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bd488;
  _objc_alloc(PTR_PTR_1126bd488);
  lVar1 = param_1 + _DAT_112727fdc;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038fe0(puVar5,param_2,lVar2,lVar3,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar1 = lVar9;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  puVar7 = PTR_PTR_1126bd490;
  _objc_alloc();
  lVar9 = lVar3;
  func_0x00010c27dd80(lVar3);
  lVar6 = lVar3;
  func_0x00010c079d20(lVar3);
  func_0x00010c0406c0(puVar7,param_2,puVar5,lVar1,lVar4,lVar9 == 7,lVar6);
  lVar9 = (long)_DAT_112727fe0;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar7;
  _objc_release(uVar8);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar9));
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1056ec064; end: 1056ec0b7; -[SCLeaveCustomStoryEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056ec064(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727fdc);
  _objc_destroyWeak(param_1 + _DAT_112727fd8);
  _objc_destroyWeak(param_1 + _DAT_112727fd4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112727fe0,0);
  return;
}



/* Entry: 1056ec0b8; end: 1056ec183; -[SCLeaveCustomStoryRouterImpl initWithPresentingViewController:customStory:messagingExperimentService:] */

undefined1 *
FUN_1056ec0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9c88;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056ec184; end: 1056ec493; -[SCLeaveCustomStoryRouterImpl presentLeaveCustomStoryOptionsWithDelegate:] */

void FUN_1056ec184(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x18,param_3);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8358;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df8358,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dac8f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dac8f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar10 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar6 = uVar5;
  func_0x000108f57a9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x000108f57ab4();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar8);
  _objc_release(puVar9);
  func_0x00010c18b5e0(puVar8);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bf7ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_didSelectLeaveStory__1125bc470,
             *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x10));
  return;
}



/* Entry: 1056ec494; end: 1056ec52b;  */

void FUN_1056ec494(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf7ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectLeaveStory__1125bc470,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
  return;
}



/* Entry: 1056ec52c; end: 1056ec79f; -[SCLeaveCustomStoryRouterImpl presentLeaveCommunityOptionsWithDelegate:] */

void FUN_1056ec52c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_storeWeak(lVar1,param_3);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108f57acc();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar10 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  uVar5 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf8fac0();
  _objc_release(uVar5);
  if ((uVar6 & 1) == 0) {
    func_0x000108f57ae4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f57afc();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar8 = puVar7;
  func_0x000108f57acc();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c18b5e0(puVar7);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bf7ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_didSelectLeaveStory__1125bc470,
             *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x10));
  return;
}



/* Entry: 1056ec7a0; end: 1056ec803;  */

void FUN_1056ec7a0(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf7ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectLeaveStory__1125bc470,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
  return;
}


