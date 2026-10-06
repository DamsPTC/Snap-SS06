/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d59560; end: 107d595af; -[SCAdComposerDpaLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d59560(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276e6cc,0);
  _objc_storeStrong(param_1 + _DAT_11276e6c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276e6c0,0);
  return;
}



/* Entry: 107d595b0; end: 107d595fb; +[SCAdContentContainerLayer layerWithPage:] */

void FUN_107d595b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca710;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d595fc; end: 107d5986b; -[SCAdContentContainerLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d595fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fae08;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithPage__1125ea568,param_3);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bef2440(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ca4e0;
    _objc_opt_class(PTR_PTR_1126ca4e0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276e6d0);
    *(ulong *)((long)puVar2 + (long)_DAT_11276e6d0) = uVar1;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bef5640(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276e6d4);
    *(ulong *)((long)puVar2 + (long)_DAT_11276e6d4) = uVar1;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bef4360(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276e6d8);
    *(ulong *)((long)puVar2 + (long)_DAT_11276e6d8) = uVar1;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bef53a0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276e6dc);
    *(ulong *)((long)puVar2 + (long)_DAT_11276e6dc) = uVar1;
    _objc_release(uVar7);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107d5986c; end: 107d59b2b; -[SCAdContentContainerLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107d5986c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_60;
  undefined *puStack_58;
  
  iVar2 = (int)&lStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fae08;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_isEqual__1125fa0c8,param_3);
  puVar3 = PTR_PTR_1126ca710;
  if (iVar2 == 0) {
    uVar6 = 0;
    goto LAB_107d59b04;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar5 = *(ulong *)(param_1 + _DAT_11276e6d0);
  uVar4 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  if (uVar5 == uVar4) {
    _objc_release(uVar4);
    _objc_release(uVar5);
LAB_107d59978:
    uVar7 = *(ulong *)(param_1 + _DAT_11276e6d4);
    uVar5 = uVar1;
    func_0x00010bef5640();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar7);
    _objc_retain(uVar5);
    if (uVar7 == uVar5) {
      _objc_release(uVar5);
      _objc_release(uVar7);
LAB_107d599f0:
      uVar8 = *(ulong *)(param_1 + _DAT_11276e6d8);
      uVar7 = uVar1;
      func_0x00010bef4360();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar8);
      _objc_retain(uVar7);
      if (uVar8 == uVar7) {
        _objc_release(uVar7);
        _objc_release(uVar8);
LAB_107d59a68:
        uVar9 = *(ulong *)(param_1 + _DAT_11276e6dc);
        uVar8 = uVar1;
        func_0x00010bef53a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar9);
        _objc_retain(uVar8);
        if (uVar9 == uVar8) {
          uVar6 = 1;
        }
        else if (uVar8 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar9;
          func_0x00010c071ae0(uVar9);
        }
        _objc_release(uVar8);
        _objc_release(uVar9);
      }
      else {
        if (uVar7 != 0) {
          uVar6 = uVar8;
          func_0x00010c071ae0();
          _objc_release(uVar7);
          _objc_release(uVar8);
          if ((int)uVar6 == 0) goto LAB_107d59a50;
          goto LAB_107d59a68;
        }
        uVar6 = 0;
      }
      _objc_release(uVar8);
    }
    else {
      if (uVar5 != 0) {
        uVar6 = uVar7;
        func_0x00010c071ae0();
        _objc_release(uVar5);
        _objc_release(uVar7);
        if ((int)uVar6 == 0) goto LAB_107d599d8;
        goto LAB_107d599f0;
      }
LAB_107d59a50:
      uVar6 = 0;
    }
    _objc_release(uVar7);
LAB_107d59aec:
    _objc_release(uVar5);
  }
  else {
    if (uVar4 == 0) {
LAB_107d599d8:
      uVar6 = 0;
      goto LAB_107d59aec;
    }
    uVar6 = uVar5;
    func_0x00010c071ae0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    if ((int)uVar6 != 0) goto LAB_107d59978;
    uVar6 = 0;
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
LAB_107d59b04:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 107d59b2c; end: 107d59b3b; -[SCAdContentContainerLayer viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d59b2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e6d0);
}



/* Entry: 107d59b3c; end: 107d59b4b; -[SCAdContentContainerLayer adSpecData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d59b3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e6d4);
}



/* Entry: 107d59b4c; end: 107d59b5b; -[SCAdContentContainerLayer adRenderData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d59b4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e6d8);
}



/* Entry: 107d59b5c; end: 107d59b6b; -[SCAdContentContainerLayer adSnapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d59b5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e6dc);
}



/* Entry: 107d59b6c; end: 107d59bcb; -[SCAdContentContainerLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d59b6c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276e6dc,0);
  _objc_storeStrong(param_1 + _DAT_11276e6d8,0);
  _objc_storeStrong(param_1 + _DAT_11276e6d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276e6d0,0);
  return;
}



/* Entry: 107d59bcc; end: 107d59c17; +[SCAdGradientViewLayer layerWithPage:] */

void FUN_107d59bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca728;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d59c18; end: 107d59c4b; -[SCAdGradientViewLayer initWithPage:] */

void FUN_107d59c18(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fae10;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithPage__1125ea568);
  return;
}



/* Entry: 107d59c4c; end: 107d59c7f; -[SCAdGradientViewLayer isEqual:] */

void FUN_107d59c4c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fae10;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_isEqual__1125fa0c8);
  return;
}



/* Entry: 107d59c80; end: 107d59ccb; +[SCAdOperaBaseLayer layerWithPage:] */

void FUN_107d59c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7a30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d59ccc; end: 107d59e7f; -[SCAdOperaBaseLayer initWithPage:] */

undefined8 FUN_107d59ccc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bfe00;
  func_0x00010bef2020(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126bfe00;
  func_0x00010bef21a0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126bfe00;
  func_0x00010bf4dd00(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  func_0x00010c067fc0(uVar4);
  _objc_release(uVar4);
  func_0x00010c01f520(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 107d59e80; end: 107d59f07; -[SCAdOperaBaseLayer initWithIsRecyclable:ctaType:unifiedActionBarBottomOffset:page:] */

undefined1 *
FUN_107d59e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fae18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d59f08; end: 107d59f0f; -[SCAdOperaBaseLayer fixedPosition] */

undefined8 FUN_107d59f08(void)

{
  return 0;
}



/* Entry: 107d59f10; end: 107d59f17; -[SCAdOperaBaseLayer type] */

undefined8 FUN_107d59f10(void)

{
  return 0x19;
}



/* Entry: 107d59f18; end: 107d5a087; -[SCAdOperaBaseLayer isEqual:] */

bool FUN_107d59f18(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  uVar2 = param_3;
  func_0x00010c077980();
  puVar3 = PTR_PTR_1126d7a30;
  if ((int)uVar2 == 0) {
    bVar1 = false;
    goto LAB_107d5a068;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar2 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  if (uVar2 == 0) {
    bVar1 = false;
  }
  else if (param_1 == uVar2) {
    bVar1 = true;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    uVar4 = param_3;
    func_0x00010c07bfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar5);
    _objc_retain(uVar4);
    if (uVar5 == uVar4) {
      _objc_release(uVar4);
      _objc_release(uVar5);
LAB_107d5a020:
      uVar6 = *(ulong *)(param_1 + 0x10);
      uVar5 = param_3;
      func_0x00010bf5d5a0();
      if (uVar6 != uVar5) goto LAB_107d5a054;
      uVar6 = *(ulong *)(param_1 + 0x18);
      uVar5 = param_3;
      func_0x00010c27fd80(param_3);
      bVar1 = uVar6 == uVar5;
    }
    else {
      if (uVar4 == 0) {
        _objc_release(uVar5);
      }
      else {
        uVar6 = uVar5;
        func_0x00010c071ae0();
        _objc_release(uVar4);
        _objc_release(uVar5);
        if ((int)uVar6 != 0) goto LAB_107d5a020;
      }
LAB_107d5a054:
      bVar1 = false;
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
LAB_107d5a068:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107d5a088; end: 107d5a08f; -[SCAdOperaBaseLayer isRecyclable] */

undefined8 FUN_107d5a088(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d5a090; end: 107d5a097; -[SCAdOperaBaseLayer ctaType] */

undefined8 FUN_107d5a090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d5a098; end: 107d5a09f; -[SCAdOperaBaseLayer unifiedActionBarBottomOffset] */

undefined8 FUN_107d5a098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d5a0a0; end: 107d5a0ab; -[SCAdOperaBaseLayer .cxx_destruct] */

void FUN_107d5a0a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d5a0ac; end: 107d5a0f7; +[SCAdOperaInteractiveAreaLayer layerWithPage:] */

void FUN_107d5a0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca720;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d5a0f8; end: 107d5a28b; -[SCAdOperaInteractiveAreaLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d5a0f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fae20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithPage__1125ea568,param_3);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bef3120(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ca7e8;
    _objc_opt_class(PTR_PTR_1126ca7e8);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276e6ec);
    *(ulong *)((long)puVar2 + (long)_DAT_11276e6ec) = uVar1;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126d7a38;
    func_0x00010c264ec0(PTR_PTR_1126d7a38);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    *(char *)((long)puVar2 + (long)_DAT_11276e6f0) = (char)uVar5;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107d5a28c; end: 107d5a3ef; -[SCAdOperaInteractiveAreaLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107d5a28c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lStack_50;
  undefined *puStack_48;
  
  iVar3 = (int)&lStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fae20;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_isEqual__1125fa0c8,param_3);
  puVar5 = PTR_PTR_1126ca720;
  if (iVar3 == 0) {
    bVar4 = false;
    goto LAB_107d5a3cc;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar5);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  uVar1 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar8 = *(ulong *)(param_1 + _DAT_11276e6ec);
  uVar6 = uVar1;
  func_0x00010c068ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar8);
  _objc_retain(uVar6);
  if (uVar8 == uVar6) {
    _objc_release(uVar6);
    _objc_release(uVar8);
LAB_107d5a390:
    bVar2 = *(byte *)(param_1 + _DAT_11276e6f0);
    uVar8 = uVar1;
    func_0x00010c080640(uVar1);
    bVar4 = (uint)bVar2 == (uint)uVar8;
  }
  else {
    if (uVar6 == 0) {
      _objc_release(uVar8);
    }
    else {
      uVar7 = uVar8;
      func_0x00010c071ae0();
      _objc_release(uVar6);
      _objc_release(uVar8);
      if ((int)uVar7 != 0) goto LAB_107d5a390;
    }
    bVar4 = false;
  }
  _objc_release(uVar6);
  _objc_release(uVar1);
LAB_107d5a3cc:
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 107d5a3f0; end: 107d5a3ff; -[SCAdOperaInteractiveAreaLayer interactiveAreaConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5a3f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e6ec);
}



/* Entry: 107d5a400; end: 107d5a40f; -[SCAdOperaInteractiveAreaLayer isSwipeToAttachmentRestricted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d5a400(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276e6f0);
}



/* Entry: 107d5a410; end: 107d5a423; -[SCAdOperaInteractiveAreaLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5a410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276e6ec,0);
  return;
}



/* Entry: 107d5a424; end: 107d5a46f; +[SCAdOperaPlaceLayer layerWithPage:] */

void FUN_107d5a424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca6c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d5a470; end: 107d5a543; -[SCAdOperaPlaceLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d5a470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fae28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithPage__1125ea568,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010c0fd0e0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276e6f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276e6f4) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d5a544; end: 107d5a62f; -[SCAdOperaPlaceLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5a544(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fae28;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  puVar3 = PTR_PTR_1126ca6c8;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276e6f4);
    uVar4 = uVar1;
    func_0x00010c0fd0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c0720c0(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107d5a630; end: 107d5a63f; -[SCAdOperaPlaceLayer placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5a630(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e6f4);
}



/* Entry: 107d5a640; end: 107d5a653; -[SCAdOperaPlaceLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5a640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276e6f4,0);
  return;
}



/* Entry: 107d5a654; end: 107d5a69f; +[SCAdStickersViewLayer layerWithPage:] */

void FUN_107d5a654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca708;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d5a6a0; end: 107d5a90f; -[SCAdStickersViewLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d5a6a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fae30;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithPage__1125ea568,param_3);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bef24e0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ca770;
    _objc_opt_class(PTR_PTR_1126ca770);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276e6f8);
    *(ulong *)((long)puVar2 + (long)_DAT_11276e6f8) = uVar1;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bef5640(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276e6fc);
    *(ulong *)((long)puVar2 + (long)_DAT_11276e6fc) = uVar1;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bef4360(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276e700);
    *(ulong *)((long)puVar2 + (long)_DAT_11276e700) = uVar1;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bef53a0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276e704);
    *(ulong *)((long)puVar2 + (long)_DAT_11276e704) = uVar1;
    _objc_release(uVar7);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107d5a910; end: 107d5abcf; -[SCAdStickersViewLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107d5a910(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_60;
  undefined *puStack_58;
  
  iVar2 = (int)&lStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fae30;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_isEqual__1125fa0c8,param_3);
  puVar3 = PTR_PTR_1126ca708;
  if (iVar2 == 0) {
    uVar6 = 0;
    goto LAB_107d5aba8;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar5 = *(ulong *)(param_1 + _DAT_11276e6f8);
  uVar4 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  if (uVar5 == uVar4) {
    _objc_release(uVar4);
    _objc_release(uVar5);
LAB_107d5aa1c:
    uVar7 = *(ulong *)(param_1 + _DAT_11276e6fc);
    uVar5 = uVar1;
    func_0x00010bef5640();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar7);
    _objc_retain(uVar5);
    if (uVar7 == uVar5) {
      _objc_release(uVar5);
      _objc_release(uVar7);
LAB_107d5aa94:
      uVar8 = *(ulong *)(param_1 + _DAT_11276e700);
      uVar7 = uVar1;
      func_0x00010bef4360();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar8);
      _objc_retain(uVar7);
      if (uVar8 == uVar7) {
        _objc_release(uVar7);
        _objc_release(uVar8);
LAB_107d5ab0c:
        uVar9 = *(ulong *)(param_1 + _DAT_11276e704);
        uVar8 = uVar1;
        func_0x00010bef53a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar9);
        _objc_retain(uVar8);
        if (uVar9 == uVar8) {
          uVar6 = 1;
        }
        else if (uVar8 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar9;
          func_0x00010c071ae0(uVar9);
        }
        _objc_release(uVar8);
        _objc_release(uVar9);
      }
      else {
        if (uVar7 != 0) {
          uVar6 = uVar8;
          func_0x00010c071ae0();
          _objc_release(uVar7);
          _objc_release(uVar8);
          if ((int)uVar6 == 0) goto LAB_107d5aaf4;
          goto LAB_107d5ab0c;
        }
        uVar6 = 0;
      }
      _objc_release(uVar8);
    }
    else {
      if (uVar5 != 0) {
        uVar6 = uVar7;
        func_0x00010c071ae0();
        _objc_release(uVar5);
        _objc_release(uVar7);
        if ((int)uVar6 == 0) goto LAB_107d5aa7c;
        goto LAB_107d5aa94;
      }
LAB_107d5aaf4:
      uVar6 = 0;
    }
    _objc_release(uVar7);
LAB_107d5ab90:
    _objc_release(uVar5);
  }
  else {
    if (uVar4 == 0) {
LAB_107d5aa7c:
      uVar6 = 0;
      goto LAB_107d5ab90;
    }
    uVar6 = uVar5;
    func_0x00010c071ae0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    if ((int)uVar6 != 0) goto LAB_107d5aa1c;
    uVar6 = 0;
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
LAB_107d5aba8:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 107d5abd0; end: 107d5abdf; -[SCAdStickersViewLayer viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5abd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e6f8);
}



/* Entry: 107d5abe0; end: 107d5abef; -[SCAdStickersViewLayer adSpecData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5abe0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e6fc);
}



/* Entry: 107d5abf0; end: 107d5abff; -[SCAdStickersViewLayer adRenderData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5abf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e700);
}



/* Entry: 107d5ac00; end: 107d5ac0f; -[SCAdStickersViewLayer adSnapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5ac00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e704);
}



/* Entry: 107d5ac10; end: 107d5ac6f; -[SCAdStickersViewLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5ac10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276e704,0);
  _objc_storeStrong(param_1 + _DAT_11276e700,0);
  _objc_storeStrong(param_1 + _DAT_11276e6fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276e6f8,0);
  return;
}



/* Entry: 107d5ac70; end: 107d5acbb; +[SCAdTapToSkipLayer layerWithPage:] */

void FUN_107d5ac70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca718;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d5acbc; end: 107d5adc7; -[SCAdTapToSkipLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d5acbc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar4 = PTR_s_initWithPage__1125ea568;
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126fae38;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar4,param_3);
  uVar3 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126bfe00;
  func_0x00010bef58a0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar1 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  *(ulong *)((long)puVar2 + (long)_DAT_11276e708) = uVar5;
  _objc_release(uVar3);
  return (undefined1 *)puVar2;
}



/* Entry: 107d5adc8; end: 107d5ae9b; -[SCAdTapToSkipLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107d5adc8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fae38;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  puVar4 = PTR_PTR_1126ca718;
  if (iVar2 == 0) {
    bVar3 = false;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar6 = *(ulong *)(param_1 + _DAT_11276e708);
    uVar5 = uVar1;
    func_0x00010c23e3c0(uVar1);
    _objc_release(uVar1);
    bVar3 = uVar6 == uVar5;
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 107d5ae9c; end: 107d5aeab; -[SCAdTapToSkipLayer skipRemainingSnapsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5ae9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e708);
}



/* Entry: 107d5aeac; end: 107d5af0f; -[SCAdTopSnapInteractionInfoStore init] */

undefined1 * FUN_107d5aeac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fae40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d5af10; end: 107d5b3d7; -[SCAdTopSnapInteractionInfoStore addInteractionForAdRequestClientId:attachmentTriggered:viewingStatusIndex:collectionItems:tileIndex:collectionItemIndex:defaultAttachmentIndex:interactionSource:interactionTimestamp:sourceRelativeLocation:screenRelativeLocation:screenLocation:scrollDepth:scrollOffset:] */

/* WARNING: Possible PIC construction at 0x000107d5b208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107d5b228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107d5b240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107d5b22c) */
/* WARNING: Removing unreachable block (ram,0x000107d5b20c) */
/* WARNING: Removing unreachable block (ram,0x000107d5b26c) */
/* WARNING: Removing unreachable block (ram,0x000107d5b220) */
/* WARNING: Removing unreachable block (ram,0x000107d5b244) */
/* WARNING: Removing unreachable block (ram,0x000107d5b2f8) */
/* WARNING: Removing unreachable block (ram,0x000107d5b25c) */
/* WARNING: Removing unreachable block (ram,0x000107d5b308) */
/* WARNING: Removing unreachable block (ram,0x000107d5b358) */

void FUN_107d5af10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,long param_12,undefined8 param_13,
                  long param_14,long param_15,long param_16,undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if ((((param_5 == 0) || (param_12 == 0)) || (param_14 == 0)) ||
     ((param_15 == 0 || (param_16 == 0)))) {
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return;
    }
    ___stack_chk_fail();
    uVar8 = *(undefined8 *)(param_5 + 8);
  }
  else {
    _objc_retain();
    _objc_retain(param_17);
    _objc_retain(param_16);
    _objc_retain(param_15);
    _objc_retain(param_14);
    _objc_retain(param_13);
    _objc_retain(param_12);
    _objc_retain(param_9);
    func_0x00010bf529e0();
    if (param_8 != 0) {
      func_0x00010be82bc0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = PTR_PTR_1126d7a40;
    _objc_alloc();
    func_0x00010c2827c0();
    _objc_release(param_12);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bdc1060(param_14);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bdc1060(param_14);
    uVar8 = param_2;
    _objc_release(param_14);
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bdc1060(param_15);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bdc1060(param_15);
    uVar10 = uVar8;
    _objc_release(param_15);
    func_0x00010c0df720(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bdc1060(param_16);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bdc1060(param_16);
    _objc_release(param_16);
    func_0x00010c0df720(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0(param_13);
    _objc_release(param_13);
    func_0x00010c01e760(uVar10,puVar1);
    _objc_release(param_18);
    _objc_release(param_17);
    _objc_release(param_9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar8 = *(undefined8 *)(param_3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar8,PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 107d5b3d8; end: 107d5b3df; -[SCAdTopSnapInteractionInfoStore interactionInfosForAdRequestClientId:] */

void FUN_107d5b3d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 107d5b3e0; end: 107d5b3ef; -[SCAdTopSnapInteractionInfoStore removeInteractionInfosForAdRequestClientId:] */

void FUN_107d5b3e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKeyedSubscript__112651bb8,0,param_3);
  return;
}



/* Entry: 107d5b3f0; end: 107d5b4d7; -[SCAdTopSnapInteractionInfoStore _productIdFromCollectionItems:atIndex:defaultAttachmentIndex:] */

void FUN_107d5b3f0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    lVar1 = param_5;
    func_0x00010c067fc0();
    lVar2 = param_4;
    func_0x00010c067fc0();
    uVar4 = lVar2 - (ulong)(lVar1 < 1);
    if ((-1 < (long)uVar4) &&
       (uVar3 = param_3, func_0x00010bf529e0(), puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570,
       uVar4 < uVar3)) {
      uVar3 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf89540();
      func_0x00010c0df780(puVar5,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      goto LAB_107d5b4a8;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_107d5b4a8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d5b4d8; end: 107d5b4e3; -[SCAdTopSnapInteractionInfoStore .cxx_destruct] */

void FUN_107d5b4d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d5b4e4; end: 107d5b52f; +[SCCameraProductOperaLayer layerWithPage:] */

void FUN_107d5b4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bdd80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d5b530; end: 107d5b78b; -[SCCameraProductOperaLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d5b530(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fae48;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithPage__1125ea568,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class();
    uVar4 = uVar2;
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd9240();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276e710);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11276e710) = puVar3;
    _objc_release(uVar8);
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276e714);
    *(ulong *)((long)puVar1 + (long)_DAT_11276e714) = uVar4;
    _objc_release(uVar8);
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276e718);
    *(ulong *)((long)puVar1 + (long)_DAT_11276e718) = uVar4;
    _objc_release(uVar8);
    puVar5 = PTR_PTR_1126bdd88;
    func_0x00010bf2aee0(PTR_PTR_1126bdd88);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar5);
    uVar4 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    *(char *)((long)puVar1 + (long)_DAT_11276e71c) = (char)uVar6;
    puVar5 = PTR_PTR_1126bdd88;
    func_0x00010bf2af00(PTR_PTR_1126bdd88);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar5);
    uVar4 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    *(char *)((long)puVar1 + (long)_DAT_11276e720) = (char)uVar6;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d5b78c; end: 107d5b8cf; +[SCCameraProductOperaLayer _cameraLensItemsFromItemsProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107d5b78c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar14 = param_3;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar13 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR_PTR_1126d7a28;
        _objc_alloc();
        func_0x00010c03b740();
        func_0x00010befa120(puVar9);
        _objc_release(puVar4);
        lVar13 = lVar13 + 1;
      } while (lVar14 != lVar13);
      lVar14 = param_3;
      puVar8 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  iVar3 = (int)&lStack_180;
  _objc_retain(puVar8);
  puStack_178 = PTR_PTR_1126fae48;
  lStack_180 = param_3;
  _objc_msgSendSuper2(&lStack_180,PTR_s_isEqual__1125fa0c8,puVar8);
  puVar9 = PTR_PTR_1126bdd80;
  if (iVar3 == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_107d5bbe4;
  }
  _objc_retain(puVar8);
  _objc_opt_class(puVar9);
  puVar5 = (undefined1 *)puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar9);
  puVar1 = (undefined1 *)puVar8;
  if (((ulong)puVar5 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar8);
  bVar2 = *(byte *)(param_3 + _DAT_11276e71c);
  puVar5 = puVar1;
  func_0x00010c232fe0();
  if (((uint)bVar2 == (uint)puVar5) &&
     (bVar2 = *(byte *)(param_3 + _DAT_11276e720), puVar5 = puVar1, func_0x00010c233000(),
     (uint)bVar2 == (uint)puVar5)) {
    puVar10 = *(undefined1 **)(param_3 + _DAT_11276e714);
    puVar5 = puVar1;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar10);
    _objc_retain(puVar5);
    if (puVar10 != puVar5) {
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = puVar10;
        func_0x00010c071ae0();
        _objc_release(puVar5);
        _objc_release(puVar10);
        _objc_release(puVar5);
        if ((int)puVar6 == 0) goto LAB_107d5bbd8;
        goto LAB_107d5ba20;
      }
LAB_107d5bbd0:
      _objc_release(puVar10);
      goto LAB_107d5bbd8;
    }
    _objc_release(puVar5);
    _objc_release(puVar10);
    _objc_release(puVar5);
LAB_107d5ba20:
    puVar10 = *(undefined1 **)(param_3 + _DAT_11276e718);
    puVar5 = puVar1;
    func_0x00010bef47c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar10);
    _objc_retain(puVar5);
    if (puVar10 == puVar5) {
      _objc_release(puVar5);
      _objc_release(puVar10);
      _objc_release(puVar5);
    }
    else {
      if (puVar5 == (undefined1 *)0x0) goto LAB_107d5bbd0;
      puVar6 = puVar10;
      func_0x00010c071ae0();
      _objc_release(puVar5);
      _objc_release(puVar10);
      _objc_release(puVar5);
      if ((int)puVar6 == 0) goto LAB_107d5bbd8;
    }
    lVar14 = (long)_DAT_11276e710;
    puVar6 = *(undefined1 **)(param_3 + lVar14);
    func_0x00010bf529e0();
    puVar5 = puVar1;
    func_0x00010c098240();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010bf529e0();
    _objc_release(puVar5);
    if (puVar6 != puVar10) goto LAB_107d5bbd8;
    lVar11 = *(long *)(param_3 + lVar14);
    func_0x00010bf529e0();
    if (lVar11 != 0) {
      uVar12 = 0;
      do {
        puVar10 = *(undefined1 **)(param_3 + lVar14);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010c098240();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_retain(puVar10);
        _objc_retain(puVar6);
        if (puVar10 == puVar6) {
          _objc_release(puVar6);
          _objc_release(puVar10);
          _objc_release(puVar6);
          _objc_release(puVar10);
        }
        else {
          if (puVar6 == (undefined1 *)0x0) {
            _objc_release();
            goto LAB_107d5bbd0;
          }
          puVar5 = puVar10;
          func_0x00010c071ae0();
          _objc_release(puVar6);
          _objc_release(puVar10);
          _objc_release(puVar6);
          _objc_release(puVar10);
          if (((ulong)puVar5 & 1) == 0) goto LAB_107d5bbd8;
        }
        uVar12 = uVar12 + 1;
        uVar7 = *(ulong *)(param_3 + lVar14);
        func_0x00010bf529e0();
      } while (uVar12 < uVar7);
    }
    puVar9 = (undefined *)0x1;
  }
  else {
LAB_107d5bbd8:
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar1);
LAB_107d5bbe4:
  _objc_release(puVar8);
  return puVar9;
}



/* Entry: 107d5b8d0; end: 107d5bc0b; -[SCCameraProductOperaLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5b8d0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lStack_60;
  undefined *puStack_58;
  
  iVar3 = (int)&lStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fae48;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_isEqual__1125fa0c8,param_3);
  puVar4 = PTR_PTR_1126bdd80;
  if (iVar3 == 0) {
    uVar8 = 0;
    goto LAB_107d5bbe4;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar4);
  uVar10 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar10 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  bVar2 = *(byte *)(param_1 + _DAT_11276e71c);
  uVar10 = uVar1;
  func_0x00010c232fe0();
  if (((uint)bVar2 == (uint)uVar10) &&
     (bVar2 = *(byte *)(param_1 + _DAT_11276e720), uVar10 = uVar1, func_0x00010c233000(),
     (uint)bVar2 == (uint)uVar10)) {
    uVar9 = *(ulong *)(param_1 + _DAT_11276e714);
    uVar10 = uVar1;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar9);
    _objc_retain(uVar10);
    if (uVar9 != uVar10) {
      if (uVar10 != 0) {
        uVar5 = uVar9;
        func_0x00010c071ae0();
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar10);
        if ((int)uVar5 == 0) goto LAB_107d5bbd8;
        goto LAB_107d5ba20;
      }
LAB_107d5bbd0:
      _objc_release(uVar9);
      goto LAB_107d5bbd8;
    }
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar10);
LAB_107d5ba20:
    uVar9 = *(ulong *)(param_1 + _DAT_11276e718);
    uVar10 = uVar1;
    func_0x00010bef47c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar9);
    _objc_retain(uVar10);
    if (uVar9 == uVar10) {
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar10);
    }
    else {
      if (uVar10 == 0) goto LAB_107d5bbd0;
      uVar5 = uVar9;
      func_0x00010c071ae0();
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar10);
      if ((int)uVar5 == 0) goto LAB_107d5bbd8;
    }
    lVar11 = (long)_DAT_11276e710;
    uVar5 = *(ulong *)(param_1 + lVar11);
    func_0x00010bf529e0();
    uVar10 = uVar1;
    func_0x00010c098240();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf529e0();
    _objc_release(uVar10);
    if (uVar5 != uVar9) goto LAB_107d5bbd8;
    lVar6 = *(long *)(param_1 + lVar11);
    func_0x00010bf529e0();
    if (lVar6 != 0) {
      uVar10 = 0;
      do {
        uVar9 = *(ulong *)(param_1 + lVar11);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010c098240();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_retain(uVar9);
        _objc_retain(uVar7);
        if (uVar9 == uVar7) {
          _objc_release(uVar7);
          _objc_release(uVar9);
          _objc_release(uVar7);
          _objc_release(uVar9);
        }
        else {
          if (uVar7 == 0) {
            _objc_release();
            goto LAB_107d5bbd0;
          }
          uVar5 = uVar9;
          func_0x00010c071ae0();
          _objc_release(uVar7);
          _objc_release(uVar9);
          _objc_release(uVar7);
          _objc_release(uVar9);
          if ((uVar5 & 1) == 0) goto LAB_107d5bbd8;
        }
        uVar10 = uVar10 + 1;
        uVar9 = *(ulong *)(param_1 + lVar11);
        func_0x00010bf529e0();
      } while (uVar10 < uVar9);
    }
    uVar8 = 1;
  }
  else {
LAB_107d5bbd8:
    uVar8 = 0;
  }
  _objc_release(uVar1);
LAB_107d5bbe4:
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 107d5bc0c; end: 107d5bc1b; -[SCCameraProductOperaLayer lenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5bc0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e710);
}



/* Entry: 107d5bc1c; end: 107d5bc2b; -[SCCameraProductOperaLayer adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5bc1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e714);
}



/* Entry: 107d5bc2c; end: 107d5bc3b; -[SCCameraProductOperaLayer adRequestClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5bc2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e718);
}



/* Entry: 107d5bc3c; end: 107d5bc4b; -[SCCameraProductOperaLayer shouldSelectOurStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d5bc3c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276e71c);
}



/* Entry: 107d5bc4c; end: 107d5bc5b; -[SCCameraProductOperaLayer shouldSelectSpotlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d5bc4c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276e720);
}



/* Entry: 107d5bc5c; end: 107d5bcab; -[SCCameraProductOperaLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5bc5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276e718,0);
  _objc_storeStrong(param_1 + _DAT_11276e714,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276e710,0);
  return;
}



/* Entry: 107d5bcac; end: 107d5bcf7; +[SCOperaAdProgressBarLayer layerWithPage:] */

void FUN_107d5bcac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca6e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d5bcf8; end: 107d5bdcb; -[SCOperaAdProgressBarLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d5bcf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fae50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithPage__1125ea568,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010c117840(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276e724);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276e724) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d5bdcc; end: 107d5bef3; -[SCOperaAdProgressBarLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107d5bdcc(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fae50;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  puVar2 = PTR_PTR_1126ca6e8;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar5 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    uVar4 = *(ulong *)(param_1 + _DAT_11276e724);
    uVar3 = uVar5;
    func_0x00010c117840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_retain(uVar4);
    _objc_retain(uVar3);
    if (uVar4 == uVar3) {
      uVar5 = 1;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar4;
      func_0x00010c071ae0(uVar4);
    }
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107d5bef4; end: 107d5bf03; -[SCOperaAdProgressBarLayer progressBarViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5bef4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e724);
}



/* Entry: 107d5bf04; end: 107d5bf17; -[SCOperaAdProgressBarLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5bf04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276e724,0);
  return;
}



/* Entry: 107d5bf18; end: 107d5bf63; +[SCOperaExpandButtonLayer layerWithPage:] */

void FUN_107d5bf18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca700;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d5bf64; end: 107d5c25b; -[SCOperaExpandButtonLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d5bf64(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fae58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithPage__1125ea568,param_3);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bf9bd60(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276e728);
    *(ulong *)((long)puVar2 + (long)_DAT_11276e728) = uVar1;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bf9bce0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    *(char *)((long)puVar2 + (long)_DAT_11276e72c) = (char)uVar5;
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)((long)puVar2 + (long)_DAT_11276e730) = 0;
    }
    else {
      uVar5 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar4);
      uVar1 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      uVar5 = uVar1;
      func_0x00010bf1f3c0();
      _objc_release(uVar1);
      *(char *)((long)puVar2 + (long)_DAT_11276e730) = (char)uVar5;
    }
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bf9bd00(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    *(char *)((long)puVar2 + (long)_DAT_11276e734) = (char)uVar5;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107d5c25c; end: 107d5c3f7; -[SCOperaExpandButtonLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107d5c25c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lStack_50;
  undefined *puStack_48;
  
  iVar3 = (int)&lStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fae58;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_isEqual__1125fa0c8,param_3);
  puVar5 = PTR_PTR_1126ca700;
  if (iVar3 == 0) {
    bVar4 = false;
    goto LAB_107d5c3d4;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar5);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  uVar1 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar8 = *(ulong *)(param_1 + _DAT_11276e728);
  uVar6 = uVar1;
  func_0x00010bf259e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar8);
  _objc_retain(uVar6);
  if (uVar8 == uVar6) {
    _objc_release(uVar6);
    _objc_release(uVar8);
LAB_107d5c360:
    bVar2 = *(byte *)(param_1 + _DAT_11276e72c);
    uVar8 = uVar1;
    func_0x00010bfe3320();
    if (((uint)bVar2 != (uint)uVar8) ||
       (bVar2 = *(byte *)(param_1 + _DAT_11276e730), uVar8 = uVar1, func_0x00010beeeb00(),
       (uint)bVar2 != (uint)uVar8)) goto LAB_107d5c3c0;
    bVar2 = *(byte *)(param_1 + _DAT_11276e734);
    uVar8 = uVar1;
    func_0x00010c07f340(uVar1);
    bVar4 = (uint)bVar2 == (uint)uVar8;
  }
  else {
    if (uVar6 == 0) {
      _objc_release(uVar8);
    }
    else {
      uVar7 = uVar8;
      func_0x00010c071ae0();
      _objc_release(uVar6);
      _objc_release(uVar8);
      if ((int)uVar7 != 0) goto LAB_107d5c360;
    }
LAB_107d5c3c0:
    bVar4 = false;
  }
  _objc_release(uVar6);
  _objc_release(uVar1);
LAB_107d5c3d4:
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 107d5c3f8; end: 107d5c407; -[SCOperaExpandButtonLayer buttonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d5c3f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e728);
}



/* Entry: 107d5c408; end: 107d5c417; -[SCOperaExpandButtonLayer highlightTapArea] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d5c408(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276e72c);
}



/* Entry: 107d5c418; end: 107d5c427; -[SCOperaExpandButtonLayer actionMenuEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d5c418(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276e730);
}



/* Entry: 107d5c428; end: 107d5c437; -[SCOperaExpandButtonLayer setActionMenuEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5c428(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276e730) = param_3;
  return;
}



/* Entry: 107d5c438; end: 107d5c447; -[SCOperaExpandButtonLayer isSpotlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d5c438(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276e734);
}



/* Entry: 107d5c448; end: 107d5c45b; -[SCOperaExpandButtonLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5c448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276e728,0);
  return;
}



/* Entry: 107d5c45c; end: 107d5c527; -[SCCommerceOperaPluginServices initWithOperaAttachmentPluginProvider:operaScreenshopPluginProvider:operaShopScreenshopPluginProvider:] */

undefined1 *
FUN_107d5c45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fae60;
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



/* Entry: 107d5c528; end: 107d5c52f; -[SCCommerceOperaPluginServices operaAttachmentPluginProvider] */

undefined8 FUN_107d5c528(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d5c530; end: 107d5c537; -[SCCommerceOperaPluginServices operaScreenshopPluginProvider] */

undefined8 FUN_107d5c530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d5c538; end: 107d5c53f; -[SCCommerceOperaPluginServices operaShopScreenshopPluginProvider] */

undefined8 FUN_107d5c538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d5c540; end: 107d5c57b; -[SCCommerceOperaPluginServices .cxx_destruct] */

void FUN_107d5c540(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d5c57c; end: 107d5c587; -[SCCommerceOperaServices .cxx_destruct] */

void FUN_107d5c57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d5c588; end: 107d5c7c7; -[SCOperaShowcaseLayerModel initWithTitle:productSetId:productSetToken:shopNowUrl:shopNowDeepLinkURL:adID:pixelId:serveItemId:calloutText:itemIndex:] */

undefined8 *
FUN_107d5c588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126fae70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d5c7c8; end: 107d5c7eb; -[SCOperaShowcaseLayerModel copyWithZone:] */

undefined8 FUN_107d5c7c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d5c7ec; end: 107d5c7f3; -[SCOperaShowcaseLayerModel title] */

undefined8 FUN_107d5c7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d5c7f4; end: 107d5c7fb; -[SCOperaShowcaseLayerModel productSetId] */

undefined8 FUN_107d5c7f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d5c7fc; end: 107d5c803; -[SCOperaShowcaseLayerModel productSetToken] */

undefined8 FUN_107d5c7fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d5c804; end: 107d5c80b; -[SCOperaShowcaseLayerModel shopNowUrl] */

undefined8 FUN_107d5c804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d5c80c; end: 107d5c813; -[SCOperaShowcaseLayerModel shopNowDeepLinkURL] */

undefined8 FUN_107d5c80c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d5c814; end: 107d5c81b; -[SCOperaShowcaseLayerModel adID] */

undefined8 FUN_107d5c814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d5c81c; end: 107d5c823; -[SCOperaShowcaseLayerModel pixelId] */

undefined8 FUN_107d5c81c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d5c824; end: 107d5c82b; -[SCOperaShowcaseLayerModel serveItemId] */

undefined8 FUN_107d5c824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d5c82c; end: 107d5c833; -[SCOperaShowcaseLayerModel calloutText] */

undefined8 FUN_107d5c82c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d5c834; end: 107d5c83b; -[SCOperaShowcaseLayerModel itemIndex] */

undefined8 FUN_107d5c834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d5c83c; end: 107d5c8cb; -[SCOperaShowcaseLayerModel .cxx_destruct] */

void FUN_107d5c83c(long param_1)

{
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



/* Entry: 107d5c8cc; end: 107d5c93f; -[SCCTChatMessagingServices initWithChatNewMessageProvider:] */

undefined1 * FUN_107d5c8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fae78;
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



/* Entry: 107d5c940; end: 107d5c947; -[SCCTChatMessagingServices chatNewMessageProvider] */

undefined8 FUN_107d5c940(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d5c948; end: 107d5c953; -[SCCTChatMessagingServices .cxx_destruct] */

void FUN_107d5c948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d5c954; end: 107d5cacf; -[SCCTChatNewMessageProviderListenerAnnouncer description] */

void FUN_107d5c954(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_107d5cad0(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d5cad0; end: 107d5cb2f;  */

void FUN_107d5cad0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 107d5cb30; end: 107d5cddb; -[SCCTChatNewMessageProviderListenerAnnouncer addListener:] */

undefined8 FUN_107d5cb30(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110a0afd0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_107d5cddc(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_107d5cf1c(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_107d5cce4:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_107d5cd04;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_107d5cddc(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_107d5cddc(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_107d5cf1c(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_107d5cce4;
    }
  }
  uVar9 = 1;
LAB_107d5cd04:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}


