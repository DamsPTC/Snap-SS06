/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a00694; end: 107a00863; -[SCComposerCompositeImageLoader loadImageWithURL:parameters:completion:] */

void FUN_107a00694(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      uVar9 = 0;
LAB_107a0080c:
      _objc_release(lVar7);
      _objc_release(param_6);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar9 = *(ulong *)(lVar8 * 8);
      uVar3 = uVar9;
      func_0x00010c263340();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c1504a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf4b900();
      _objc_release(lVar4);
      _objc_release(uVar3);
      if ((uVar5 & 1) != 0) {
        uVar3 = uVar9;
        func_0x00010c136160(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09b720(uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        goto LAB_107a0080c;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar7;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107a00864; end: 107a0086f; -[SCComposerCompositeImageLoader .cxx_destruct] */

void FUN_107a00864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a00870; end: 107a008e3; -[SCComposerRemoteAnimatedImageDownloader initWithContentFetcher:] */

undefined1 * FUN_107a00870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9430;
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



/* Entry: 107a008e4; end: 107a00963; -[SCComposerRemoteAnimatedImageDownloader supportedURLSchemes] */

void FUN_107a008e4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar6 = &ppuStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110dc8d58;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dc8d78;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110ea9758;
  puVar7 = (undefined8 *)0x3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(pppuVar6);
    puVar1 = (undefined1 *)pppuVar6;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    puVar8 = PTR_PTR_1126b08b0;
    puVar1 = (undefined1 *)pppuVar6;
    if ((int)puVar2 == 0) {
      func_0x00010beec820(pppuVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar6);
      func_0x00010bf33760(puVar8,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108543f0c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar6);
      puVar2 = puVar1;
      func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc1738);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c08fa60();
      if (puVar3 == (undefined1 *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar4 = puVar8;
      func_0x00010c08fa60();
      if (puVar4 == (undefined *)0x0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110ea9778;
        func_0x000108543ce4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *puVar7 = ppuVar5;
      }
      else {
        func_0x00010bf4cd80(PTR_PTR_1126b08b0,param_2,puVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar8);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a00964; end: 107a00ad7; -[SCComposerRemoteAnimatedImageDownloader requestPayloadWithURL:error:] */

void FUN_107a00964(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b08b0;
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bf33760(puVar6,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108543f0c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar2 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dc1738);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = puVar5;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110ea9778;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar6 = (undefined *)0x0;
      *param_4 = ppuVar4;
    }
    else {
      puVar6 = PTR_PTR_1126b08b0;
      func_0x00010bf4cd80(PTR_PTR_1126b08b0,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107a00ad8; end: 107a00c1f; -[SCComposerRemoteAnimatedImageDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_107a00ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ea9798;
    func_0x000108543ce4(&PTR____CFConstantStringClassReference_110ea9798);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,ppuVar3);
    _objc_release(ppuVar3);
    lVar4 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    func_0x00010c003a80();
    _objc_retain(param_6);
    lVar4 = lVar1;
    func_0x00010c13e600(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107a00c20; end: 107a00d67;  */

void FUN_107a00c20(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  code *pcVar5;
  undefined **ppuVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x00010bfcaaa0();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_2;
  if (lVar7 == 0) {
    func_0x00010c13e900(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    ppuVar2 = (undefined **)PTR_PTR_1126d5d68;
    _objc_alloc();
    func_0x00010c008240();
    lVar7 = *(long *)(param_1 + 0x20);
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = (undefined **)PTR_PTR_1126b27a8;
      func_0x00010bfe9800(PTR_PTR_1126b27a8);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = *(code **)(lVar7 + 0x10);
      ppuVar4 = (undefined **)0x0;
      ppuVar6 = ppuVar3;
      goto LAB_107a00d30;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110ea97b8;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
    func_0x00010bfcaaa0();
    _objc_release(param_2);
    func_0x00010b7f5470();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
  }
  func_0x000108543ce4();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = *(code **)(lVar7 + 0x10);
  ppuVar3 = (undefined **)0x0;
  ppuVar6 = ppuVar4;
LAB_107a00d30:
  (*pcVar5)(lVar7,ppuVar3,ppuVar4);
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a00d68; end: 107a00d73; -[SCComposerRemoteAnimatedImageDownloader .cxx_destruct] */

void FUN_107a00d68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a00d74; end: 107a00dfb; -[SCAttributedBitmojiParams initWithBitmojiParams:featureAttribution:] */

undefined1 *
FUN_107a00d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9438;
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



/* Entry: 107a00dfc; end: 107a00e1f; -[SCAttributedBitmojiParams copyWithZone:] */

undefined8 FUN_107a00dfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a00e20; end: 107a00e8b; -[SCAttributedBitmojiParams hash] */

undefined8 * FUN_107a00e20(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_30 = (long)*(int *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107a00f10;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(int *)(puVar2 + 1) != *(int *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107a00f10;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107a00f10;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107a00f10:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107a00e8c; end: 107a00f2b; -[SCAttributedBitmojiParams isEqual:] */

long FUN_107a00e8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a00f10;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107a00f10;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107a00f10;
    }
  }
  lVar3 = 1;
LAB_107a00f10:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a00f2c; end: 107a00f33; -[SCAttributedBitmojiParams bitmojiParams] */

undefined8 FUN_107a00f2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a00f34; end: 107a00f3b; -[SCAttributedBitmojiParams featureAttribution] */

undefined4 FUN_107a00f34(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107a00f3c; end: 107a00f47; -[SCAttributedBitmojiParams .cxx_destruct] */

void FUN_107a00f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a00f48; end: 107a010d7; -[SCComposerImpalaBaseViewController initWithBundleName:viewName:owner:viewModel:valdiRuntimeProvider:componentContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a00f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126f9440;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112767c90;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112767c94;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112767c98;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112767c9c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112767ca0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112767ca4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
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



/* Entry: 107a010d8; end: 107a010e7; -[SCComposerImpalaBaseViewController initWithValdiView:valdiRuntimeProvider:] */

void FUN_107a010d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0602b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValdiView_viewModel_comp_1125f5ab8,param_3,0,0,param_4);
  return;
}



/* Entry: 107a010e8; end: 107a0122f; -[SCComposerImpalaBaseViewController initWithValdiView:viewModel:componentContext:valdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a010e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_58 = PTR_PTR_1126f9440;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112767ca8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf24b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767c90);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767c90) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112767c9c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112767ca4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112767ca0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a01230; end: 107a01403; -[SCComposerImpalaBaseViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a01230(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9440;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22e660();
  if ((int)lVar1 == 0) {
    func_0x00010be4ee80(param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ee20();
    lVar5 = (long)_DAT_112767cb0;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar5));
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010beb8180(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 107a01404; end: 107a01437;  */

void FUN_107a01404(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be4ee80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a01438; end: 107a0167f; -[SCComposerImpalaBaseViewController _loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a01438(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_x7;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_48;
  
  lVar8 = (long)_DAT_112767ca8;
  if (*(long *)(param_1 + lVar8) == 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112767ca0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112767c90);
    uVar7 = *(undefined8 *)(param_1 + _DAT_112767c94);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db2d78);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = 0;
    uVar3 = uVar1;
    func_0x00010c09c7c0(uVar1,param_2,puVar2,param_1,0,*(undefined8 *)(param_1 + _DAT_112767ca4),
                        &uStack_48,in_x7,uVar6,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uStack_48;
    _objc_retain(uStack_48);
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar3;
    _objc_release(uVar7);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar1);
  }
  else {
    func_0x00010be89020(param_1);
  }
  lVar4 = *(long *)(param_1 + lVar8);
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f06c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 == 0) {
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c295200(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0();
    _objc_release(uVar6);
  }
  lVar4 = *(long *)(param_1 + lVar8);
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 == 0) {
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c295200(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161980();
    _objc_release(uVar6);
  }
  if (*(long *)(param_1 + _DAT_112767c9c) != 0) {
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c295200(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar6);
  }
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(lVar5);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  return;
}



/* Entry: 107a01680; end: 107a01727; -[SCComposerImpalaBaseViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a01680(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9440;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillLayoutSubviews_112526958);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112767cb0));
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112767ca8));
  _objc_release(lVar1);
  return;
}



/* Entry: 107a01728; end: 107a0176b; -[SCComposerImpalaBaseViewController setShowsNavigationBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a01728(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112767cac) = param_3;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0176c; end: 107a01a5b; -[SCComposerImpalaBaseViewController _registerActionsToView:] */

void FUN_107a0176c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c295200(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010beef480();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010beee600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010beef480();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010beee220();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    puVar6 = puVar5;
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110dd24d8);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110e1b618);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110ea97f8);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbe218);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110ea9818);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110ea9838);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110ea9858);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d98;
  _objc_alloc(PTR_PTR_1126d5d98);
  func_0x00010bff00a0();
  puVar2 = param_3;
  func_0x00010c295200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162140();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a01a5c; end: 107a01e5b; -[SCComposerImpalaBaseViewController _makeNewViewControllerWithJSArgs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a01a5c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 == 1) {
    uVar2 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar12 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar13);
    uVar1 = uVar2;
    if ((uVar12 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar12 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar3 = uVar12;
    _objc_opt_isKindOfClass(uVar12,puVar13);
    uVar2 = uVar12;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar12);
    uVar4 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar13);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar13);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    if (uVar2 == 0) {
      uVar12 = *(ulong *)(param_1 + _DAT_112767c90);
      _objc_retain(uVar12);
    }
    if (uVar3 == 0 && uVar4 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      uVar5 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar7 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar13);
      uVar2 = uVar6;
      if ((uVar7 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain();
      _objc_release(uVar6);
      uVar8 = *(undefined8 *)(param_1 + _DAT_112767ca0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar10 = PTR_PTR_1126d5c90;
      _objc_alloc(PTR_PTR_1126d5c90);
      if (uVar4 == 0) {
        func_0x00010bff9b20(puVar10);
      }
      else {
        puVar13 = PTR_PTR_1126afcc8;
        _objc_alloc(PTR_PTR_1126afcc8);
        func_0x00010c000640();
        func_0x00010c060260(puVar10);
        _objc_release(puVar13);
      }
      func_0x00010c202620(puVar10);
      _objc_retain(puVar10);
      if (uVar2 != 0) {
        func_0x00010c216240(puVar10);
      }
      uVar7 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar11 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar13);
      uVar6 = uVar7;
      if ((uVar11 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar7);
      uVar7 = uVar6;
      func_0x00010bf1f3c0();
      _objc_release(uVar6);
      puVar13 = puVar10;
      if ((int)uVar7 != 0) {
        puVar13 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
        _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
        func_0x00010c0402e0();
        _objc_release(puVar10);
      }
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(uVar2);
      _objc_release(uVar5);
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar12);
    _objc_release(uVar1);
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107a01e5c; end: 107a01f63; -[SCComposerImpalaBaseViewController shouldAnimateForArguments:] */

ulong FUN_107a01e5c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 == 0) {
      uVar4 = 1;
    }
    else {
      func_0x00010bf1f3c0(uVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107a01f64; end: 107a01fdb; -[SCComposerImpalaBaseViewController _showBlurView:completion:] */

void FUN_107a01f64(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_107a01fdc;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bf03440(0x3fbeb851eb851eb8,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20005,
                      &puStack_40,param_4);
  return;
}



/* Entry: 107a01fdc; end: 107a02003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a01fdc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112767cb0),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107a02004; end: 107a020eb; -[SCComposerImpalaBaseViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a02004(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112767ca8;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0) {
    func_0x00010c29bf00(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + lVar4);
  }
  func_0x00010bf24b00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010bf44480();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    if ((lVar3 == 0) && (lVar4 = *(long *)(param_1 + _DAT_112767c90), lVar4 == 0)) {
      lVar4 = *(long *)(param_1 + _DAT_112767c94);
    }
    _objc_retain(lVar4);
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010c0720c0(lVar4,param_2,&PTR____CFConstantStringClassReference_110ea98f8);
  uVar1 = 0x133;
  if ((int)lVar2 == 0) {
    uVar1 = 0x87;
  }
  _objc_release(lVar4);
  return uVar1;
}



/* Entry: 107a020ec; end: 107a020f7; -[SCComposerImpalaBaseViewController defaultProjectNameV2] */

void FUN_107a020ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_creators_1125b48c0);
  return;
}



/* Entry: 107a020f8; end: 107a0220b; -[SCComposerImpalaBaseViewController back:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a020f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112767cb0) == 0) {
    lVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22de80(param_1);
    func_0x00010c103a00(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010beb8180(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a0220c; end: 107a02263;  */

void FUN_107a0220c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a02264; end: 107a0237b; -[SCComposerImpalaBaseViewController popToSelf:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a02264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112767cb0) == 0) {
    func_0x00010c22de80(param_1);
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1039c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010beb8180(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a0237c; end: 107a023d7;  */

void FUN_107a0237c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1039c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a023d8; end: 107a024cb; -[SCComposerImpalaBaseViewController dismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a023d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112767cb0) == 0) {
    func_0x00010c22de80(param_1);
    func_0x00010bf84b00(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010beb8180(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a024cc; end: 107a02507;  */

void FUN_107a024cc(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84b00(param_1,param_2,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a02508; end: 107a025b3; -[SCComposerImpalaBaseViewController push:] */

void FUN_107a02508(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c22de80(param_1,param_2,param_3);
    lVar1 = param_1;
    func_0x00010be5bee0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11c520();
      _objc_release(param_1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a025b4; end: 107a0262f; -[SCComposerImpalaBaseViewController present:] */

void FUN_107a025b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c22de80(param_1,param_2,param_3);
  lVar2 = param_1;
  func_0x00010be5bee0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 != 0) {
    func_0x00010c10eda0(param_1,param_2,lVar2,lVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107a02630; end: 107a0271f; -[SCComposerImpalaBaseViewController setNavigationTitle:] */

void FUN_107a02630(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010c216240(param_1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a02720; end: 107a027df; -[SCComposerImpalaBaseViewController setSwipeToDismissEnabled:] */

void FUN_107a02720(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010bf1f3c0(uVar1);
    _objc_release(uVar1);
    func_0x00010c08e9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a027e0; end: 107a02847; -[SCComposerImpalaBaseViewController didAwakeViewFromValdi:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a027e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010be89020(param_1);
  lVar2 = (long)_DAT_112767c98;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_didAwakeViewFromValdi__1125ba388);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf72780(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a02848; end: 107a028a3; -[SCComposerImpalaBaseViewController didRenderValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a02848(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112767c98;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_didRenderValdiView__1125bc0d8);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf79cc0(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a028a4; end: 107a02963; -[SCComposerImpalaBaseViewController _previousViewController] */

void FUN_107a028a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfecde0();
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = 0;
  if ((lVar2 != 0) && (lVar2 != 0x7fffffffffffffff)) {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107a02964; end: 107a029bb; -[SCComposerImpalaBaseViewController shouldDismissViewControllerWhenEnterBackground] */

ulong FUN_107a02964(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be800e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c22f1c0(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107a029bc; end: 107a02a13; -[SCComposerImpalaBaseViewController shouldDismissViewControllerLater] */

ulong FUN_107a029bc(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be800e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c22f1a0(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107a02a14; end: 107a02a6b; -[SCComposerImpalaBaseViewController shouldPopToRootViewController] */

ulong FUN_107a02a14(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be800e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c231d80(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107a02a6c; end: 107a02ac3; -[SCComposerImpalaBaseViewController shouldPopToRootViewControllerLater] */

ulong FUN_107a02a6c(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be800e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c231da0(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107a02ac4; end: 107a02ad3; -[SCComposerImpalaBaseViewController shouldBlur] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107a02ac4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112767c8c);
}



/* Entry: 107a02ad4; end: 107a02ae3; -[SCComposerImpalaBaseViewController setShouldBlur:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a02ad4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112767c8c) = param_3;
  return;
}



/* Entry: 107a02ae4; end: 107a02af3; -[SCComposerImpalaBaseViewController showsNavigationBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107a02ae4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112767cac);
}



/* Entry: 107a02af4; end: 107a02b03; -[SCComposerImpalaBaseViewController valdiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a02af4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767ca8);
}



/* Entry: 107a02b04; end: 107a02ba3; -[SCComposerImpalaBaseViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a02b04(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112767ca0,0);
  _objc_storeStrong(param_1 + _DAT_112767cb0,0);
  _objc_storeStrong(param_1 + _DAT_112767ca8,0);
  _objc_storeStrong(param_1 + _DAT_112767ca4,0);
  _objc_storeStrong(param_1 + _DAT_112767c9c,0);
  _objc_storeStrong(param_1 + _DAT_112767c98,0);
  _objc_storeStrong(param_1 + _DAT_112767c94,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767c90,0);
  return;
}



/* Entry: 107a02ba4; end: 107a02d33; -[SCCreatorsComposerBaseViewController initWithBundleName:viewName:owner:viewModel:componentContext:runtime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a02ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126f9448;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112767cb8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112767cbc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112767cc0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112767cc4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112767cc8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112767ccc;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
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



/* Entry: 107a02d34; end: 107a02d3f; -[SCCreatorsComposerBaseViewController initWithValdiView:] */

void FUN_107a02d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValdiView_viewModel_comp_1125f5ab0,param_3,0,0);
  return;
}



/* Entry: 107a02d40; end: 107a02e53; -[SCCreatorsComposerBaseViewController initWithValdiView:viewModel:componentContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a02d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f9448;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112767cd0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf24b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767cb8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767cb8) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112767cc4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112767cc8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a02e54; end: 107a03027; -[SCCreatorsComposerBaseViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a02e54(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9448;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22e660();
  if ((int)lVar1 == 0) {
    func_0x00010be4ee80(param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ee20();
    lVar5 = (long)_DAT_112767cd8;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar5));
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010beb8180(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 107a03028; end: 107a0305b;  */

void FUN_107a03028(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be4ee80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0305c; end: 107a0326b; -[SCCreatorsComposerBaseViewController _loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a0305c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_x7;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_48;
  
  lVar7 = (long)_DAT_112767cd0;
  if (*(long *)(param_1 + lVar7) == 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112767cb8);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112767cbc);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db2d78);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112767ccc);
    uStack_48 = 0;
    func_0x00010c09c7c0(uVar2,param_2,puVar1,param_1,0,*(undefined8 *)(param_1 + _DAT_112767cc8),
                        &uStack_48,in_x7,uVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uStack_48;
    _objc_retain(uStack_48);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar2;
    _objc_release(uVar6);
    _objc_release(puVar1);
    _objc_release(uVar5);
  }
  else {
    func_0x00010be89020(param_1);
  }
  lVar3 = *(long *)(param_1 + lVar7);
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f06c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c295200(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0();
    _objc_release(uVar5);
  }
  lVar3 = *(long *)(param_1 + lVar7);
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c295200(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161980();
    _objc_release(uVar5);
  }
  if (*(long *)(param_1 + _DAT_112767cc4) != 0) {
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c295200(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar5);
  }
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar7));
  _objc_release(lVar4);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  return;
}



/* Entry: 107a0326c; end: 107a03313; -[SCCreatorsComposerBaseViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a0326c(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9448;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillLayoutSubviews_112526958);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112767cd8));
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112767cd0));
  _objc_release(lVar1);
  return;
}



/* Entry: 107a03314; end: 107a03357; -[SCCreatorsComposerBaseViewController setShowsNavigationBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a03314(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112767cd4) = param_3;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a03358; end: 107a03647; -[SCCreatorsComposerBaseViewController _registerActionsToView:] */

void FUN_107a03358(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c295200(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010beef480();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010beee600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010beef480();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010beee220();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    puVar6 = puVar5;
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110dd24d8);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110e1b618);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110ea97f8);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbe218);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110ea9818);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110ea9838);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d90;
  _objc_alloc(PTR_PTR_1126d5d90);
  func_0x00010c044120();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110ea9858);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d98;
  _objc_alloc(PTR_PTR_1126d5d98);
  func_0x00010bff00a0();
  puVar2 = param_3;
  func_0x00010c295200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162140();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a03648; end: 107a03a03; -[SCCreatorsComposerBaseViewController _makeNewViewControllerWithJSArgs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a03648(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 == 1) {
    uVar2 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar10 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar11);
    uVar1 = uVar2;
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar10 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar3 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar11);
    uVar2 = uVar10;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar10);
    uVar4 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar11);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar11);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    if (uVar2 == 0) {
      uVar10 = *(ulong *)(param_1 + _DAT_112767cb8);
      _objc_retain(uVar10);
    }
    if (uVar3 == 0 && uVar4 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      uVar5 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar7 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar11);
      uVar2 = uVar6;
      if ((uVar7 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain();
      _objc_release(uVar6);
      puVar8 = PTR_PTR_1126d5da0;
      _objc_alloc(PTR_PTR_1126d5da0);
      if (uVar4 == 0) {
        func_0x00010bff9b00(puVar8);
      }
      else {
        puVar11 = PTR_PTR_1126afcc8;
        _objc_alloc(PTR_PTR_1126afcc8);
        func_0x00010c000640();
        func_0x00010c0601e0(puVar8);
        _objc_release(puVar11);
      }
      func_0x00010c202620(puVar8);
      _objc_retain(puVar8);
      if (uVar2 != 0) {
        func_0x00010c216240(puVar8);
      }
      uVar7 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar9 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar11);
      uVar6 = uVar7;
      if ((uVar9 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar7);
      uVar7 = uVar6;
      func_0x00010bf1f3c0();
      _objc_release(uVar6);
      puVar11 = puVar8;
      if ((int)uVar7 != 0) {
        puVar11 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
        _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
        func_0x00010c0402e0();
        _objc_release(puVar8);
      }
      _objc_release(puVar8);
      _objc_release(uVar2);
      _objc_release(uVar5);
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar10);
    _objc_release(uVar1);
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107a03a04; end: 107a03b0b; -[SCCreatorsComposerBaseViewController shouldAnimateForArguments:] */

ulong FUN_107a03a04(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 == 0) {
      uVar4 = 1;
    }
    else {
      func_0x00010bf1f3c0(uVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107a03b0c; end: 107a03b83; -[SCCreatorsComposerBaseViewController _showBlurView:completion:] */

void FUN_107a03b0c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_107a03b84;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bf03440(0x3fbeb851eb851eb8,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20005,
                      &puStack_40,param_4);
  return;
}



/* Entry: 107a03b84; end: 107a03bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a03b84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112767cd8),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107a03bac; end: 107a03c93; -[SCCreatorsComposerBaseViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a03bac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112767cd0;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0) {
    func_0x00010c29bf00(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + lVar4);
  }
  func_0x00010bf24b00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010bf44480();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    if ((lVar3 == 0) && (lVar4 = *(long *)(param_1 + _DAT_112767cb8), lVar4 == 0)) {
      lVar4 = *(long *)(param_1 + _DAT_112767cbc);
    }
    _objc_retain(lVar4);
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010c0720c0(lVar4,param_2,&PTR____CFConstantStringClassReference_110ea98f8);
  uVar1 = 0x133;
  if ((int)lVar2 == 0) {
    uVar1 = 0x87;
  }
  _objc_release(lVar4);
  return uVar1;
}



/* Entry: 107a03c94; end: 107a03da7; -[SCCreatorsComposerBaseViewController back:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a03c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112767cd8) == 0) {
    lVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22de80(param_1);
    func_0x00010c103a00(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010beb8180(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a03da8; end: 107a03dff;  */

void FUN_107a03da8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a03e00; end: 107a03f17; -[SCCreatorsComposerBaseViewController popToSelf:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a03e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112767cd8) == 0) {
    func_0x00010c22de80(param_1);
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1039c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010beb8180(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a03f18; end: 107a03f73;  */

void FUN_107a03f18(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1039c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a03f74; end: 107a04067; -[SCCreatorsComposerBaseViewController dismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a03f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112767cd8) == 0) {
    func_0x00010c22de80(param_1);
    func_0x00010bf84b00(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010beb8180(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a04068; end: 107a040a3;  */

void FUN_107a04068(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84b00(param_1,param_2,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a040a4; end: 107a0414f; -[SCCreatorsComposerBaseViewController push:] */

void FUN_107a040a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c22de80(param_1,param_2,param_3);
    lVar1 = param_1;
    func_0x00010be5bee0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11c520();
      _objc_release(param_1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a04150; end: 107a041cb; -[SCCreatorsComposerBaseViewController present:] */

void FUN_107a04150(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c22de80(param_1,param_2,param_3);
  lVar2 = param_1;
  func_0x00010be5bee0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 != 0) {
    func_0x00010c10eda0(param_1,param_2,lVar2,lVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107a041cc; end: 107a042bb; -[SCCreatorsComposerBaseViewController setNavigationTitle:] */

void FUN_107a041cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010c216240(param_1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a042bc; end: 107a04363; -[SCCreatorsComposerBaseViewController setSwipeToDismissEnabled:] */

void FUN_107a042bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010bf1f3c0(uVar1);
    _objc_release(uVar1);
    func_0x00010c1ba2c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a04364; end: 107a043cb; -[SCCreatorsComposerBaseViewController didAwakeViewFromValdi:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a04364(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010be89020(param_1);
  lVar2 = (long)_DAT_112767cc0;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_didAwakeViewFromValdi__1125ba388);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf72780(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a043cc; end: 107a04427; -[SCCreatorsComposerBaseViewController didRenderValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a043cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112767cc0;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_didRenderValdiView__1125bc0d8);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf79cc0(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a04428; end: 107a044e7; -[SCCreatorsComposerBaseViewController _previousViewController] */

void FUN_107a04428(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfecde0();
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = 0;
  if ((lVar2 != 0) && (lVar2 != 0x7fffffffffffffff)) {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107a044e8; end: 107a0453f; -[SCCreatorsComposerBaseViewController shouldDismissViewControllerWhenEnterBackground] */

ulong FUN_107a044e8(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be800e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c22f1c0(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107a04540; end: 107a04597; -[SCCreatorsComposerBaseViewController shouldDismissViewControllerLater] */

ulong FUN_107a04540(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be800e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c22f1a0(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107a04598; end: 107a045ef; -[SCCreatorsComposerBaseViewController shouldPopToRootViewController] */

ulong FUN_107a04598(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be800e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c231d80(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107a045f0; end: 107a04647; -[SCCreatorsComposerBaseViewController shouldPopToRootViewControllerLater] */

ulong FUN_107a045f0(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be800e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c231da0(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107a04648; end: 107a04657; -[SCCreatorsComposerBaseViewController shouldBlur] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107a04648(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112767cb4);
}



/* Entry: 107a04658; end: 107a04667; -[SCCreatorsComposerBaseViewController setShouldBlur:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a04658(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112767cb4) = param_3;
  return;
}



/* Entry: 107a04668; end: 107a04677; -[SCCreatorsComposerBaseViewController showsNavigationBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107a04668(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112767cd4);
}



/* Entry: 107a04678; end: 107a04687; -[SCCreatorsComposerBaseViewController composerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a04678(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767cd0);
}



/* Entry: 107a04688; end: 107a04697; -[SCCreatorsComposerBaseViewController runtime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a04688(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767ccc);
}



/* Entry: 107a04698; end: 107a04737; -[SCCreatorsComposerBaseViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a04698(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112767ccc,0);
  _objc_storeStrong(param_1 + _DAT_112767cd8,0);
  _objc_storeStrong(param_1 + _DAT_112767cd0,0);
  _objc_storeStrong(param_1 + _DAT_112767cc8,0);
  _objc_storeStrong(param_1 + _DAT_112767cc4,0);
  _objc_storeStrong(param_1 + _DAT_112767cc0,0);
  _objc_storeStrong(param_1 + _DAT_112767cbc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767cb8,0);
  return;
}



/* Entry: 107a04738; end: 107a0478b; -[SCCreatorsPageContainerViewController initWithValdiView:] */

undefined1 * FUN_107a04738(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9450;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a0478c; end: 107a047cb;  */

void FUN_107a0478c(void)

{
  if (lRam0000000113727350 != -1) {
    func_0x00010002a2fc(0x113727350,&PTR___NSConcreteGlobalBlock_1109f4e38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727358,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 107a047cc; end: 107a04833;  */

void FUN_107a047cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf460;
  _objc_opt_class(PTR_PTR_1126cf460);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_1109f4e78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727358;
  uRam0000000113727358 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a04834; end: 107a0483b;  */

void FUN_107a04834(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_myStoriesDataCoordinator_112612cd8);
  return;
}



/* Entry: 107a0483c; end: 107a0487b;  */

void FUN_107a0483c(void)

{
  if (lRam0000000113727360 != -1) {
    func_0x00010002a2fc(0x113727360,&PTR___NSConcreteGlobalBlock_1109f4e98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727368,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 107a0487c; end: 107a048e3;  */

void FUN_107a0487c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cafe0;
  _objc_opt_class(PTR_PTR_1126cafe0);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_1109f4eb8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727368;
  uRam0000000113727368 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a048e4; end: 107a048eb;  */

void FUN_107a048e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf27550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cachedSummaryInfoProvider_1125a76f8);
  return;
}



/* Entry: 107a048ec; end: 107a048f3; -[SCChatReactionServices composerChatReactionMetadataProvider] */

undefined8 FUN_107a048ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a048f4; end: 107a048fb; -[SCChatReactionServices chatReactionSearcher] */

undefined8 FUN_107a048f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a048fc; end: 107a04903; -[SCChatReactionServices chatReactionAssetWarmer] */

undefined8 FUN_107a048fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a04904; end: 107a0494b; -[SCChatReactionServices .cxx_destruct] */

void FUN_107a04904(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


