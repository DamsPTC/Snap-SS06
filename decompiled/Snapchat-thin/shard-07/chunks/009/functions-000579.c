/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ab7b6c; end: 105ab7c03; -[SCSpectaclesPairingViewController _handleVideoForResourceType:video:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab7b6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272eca0);
  lVar1 = param_3;
  FUN_105ab0c58(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_4,lVar1);
  _objc_release(lVar1);
  if (param_3 == *(long *)(param_1 + _DAT_11272eca4)) {
    func_0x00010bea1800(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ab7c04; end: 105ab7d4b; -[SCSpectaclesPairingViewController _requestOnDemandResourcesImageForType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab7c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11272ec68;
  if (*(long *)(param_1 + lVar5) != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    FUN_105ab0c58(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfe7d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_58;
    _objc_copyWeak(puVar4,auStack_48);
    uStack_50 = param_3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105ab7d4c; end: 105ab7db7;  */

void FUN_105ab7d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a9c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab7db8; end: 105ab7e4f; -[SCSpectaclesPairingViewController _handleImageForResourceType:image:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab7db8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272ec9c);
  lVar1 = param_3;
  FUN_105ab0c58(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_4,lVar1);
  _objc_release(lVar1);
  if (param_3 == *(long *)(param_1 + _DAT_11272eca4)) {
    func_0x00010bea4920(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ab7e50; end: 105ab7eeb; -[SCSpectaclesPairingViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab7e50(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ebbd0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272ed14);
  *(undefined **)(param_1 + _DAT_11272ed14) = puVar1;
  _objc_release(uVar2);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(param_1);
  return;
}



/* Entry: 105ab7eec; end: 105ab7f6b; -[SCSpectaclesPairingViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab7eec(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebbd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  if (*(long *)(param_1 + _DAT_11272ed08) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272ed00);
    func_0x00010c100720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
    _objc_release(uVar1);
    func_0x00010bec9100(param_1);
  }
  return;
}



/* Entry: 105ab7f6c; end: 105ab8003; -[SCSpectaclesPairingViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab7f6c(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar1);
  func_0x00010c1d8d80(*(undefined8 *)(param_1 + _DAT_11272ec98));
  func_0x00010c255780(*(undefined8 *)(param_1 + _DAT_11272ed18));
  func_0x00010be03040(param_1);
  puStack_38 = PTR_PTR_1126ebbd0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105ab8004; end: 105ab80e3; -[SCSpectaclesPairingViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab8004(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ebbd0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  lVar2 = (long)_DAT_11272ed1c;
  if (((*(byte *)(param_1 + lVar2) & 1) == 0) && (*(long *)(param_1 + _DAT_11272ec94) != 2)) {
    func_0x00010be6fc00(param_1);
  }
  *(undefined1 *)(param_1 + _DAT_11272ed20) = 1;
  *(undefined1 *)(param_1 + lVar2) = 1;
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  if (*(char *)(param_1 + _DAT_11272ed24) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11272ed24) = 0;
  }
  else {
    func_0x00010c1a9bc0(*(undefined8 *)(param_1 + _DAT_11272ecc8));
  }
  return;
}



/* Entry: 105ab80e4; end: 105ab8153; -[SCSpectaclesPairingViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab80e4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  *(undefined1 *)(param_1 + _DAT_11272ed20) = 0;
  puStack_28 = PTR_PTR_1126ebbd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  if ((*(byte *)(param_1 + _DAT_11272ed24) & 1) == 0) {
    func_0x00010c1a9bc0(*(undefined8 *)(param_1 + _DAT_11272ecc8));
  }
  return;
}



/* Entry: 105ab8154; end: 105ab8227; -[SCSpectaclesPairingViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab8154(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ebbd0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ed00);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5b20();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ed08);
  func_0x00010bf5f0a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0(puVar2);
  _objc_release(uVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 105ab8228; end: 105ab8237; -[SCSpectaclesPairingViewController touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab8228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ecf0),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 105ab8238; end: 105ab82c3; -[SCSpectaclesPairingViewController _pushViewControllerWithUrl:] */

void FUN_105ab8238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_3);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ab82c4; end: 105ab8593; -[SCSpectaclesPairingViewController _refreshViewForOtherConnectedDeviceInAlertFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab82c4(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *unaff_x22;
  undefined **unaff_x28;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_3;
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bf65b40(*(undefined8 *)(param_1 + _DAT_11272ec7c));
    puVar8 = *(undefined **)(param_1 + _DAT_11272ec74);
    func_0x00010c0b8320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47f00();
    _objc_release(puVar8);
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    puVar8 = PTR_PTR_1126af180;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105ab8594;
    puStack_88 = &UNK_110848a18;
    unaff_x28 = &puStack_a0;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e1c098;
    param_2 = 0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c098,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272ec74);
    func_0x00010c0b8300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb0fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1e640();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar5;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(ppuVar1);
    unaff_x22 = PTR_PTR_1126af178;
    func_0x00010c22b900();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = 0;
    func_0x00010c235c40(unaff_x22);
    _objc_release(puVar7);
    _objc_release(unaff_x22);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    param_1 = puVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 4);
  _objc_destroyWeak(auStack_78);
  lVar9 = param_3;
  __Unwind_Resume(param_3);
  pcStack_b8 = FUN_105ab8594;
  puStack_e0 = unaff_x22;
  puStack_d8 = param_1;
  puStack_d0 = puVar8;
  lStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(lVar10);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_105ab8640;
  puStack_f0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_e8,lVar9 + 0x20);
  func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_108);
  _objc_destroyWeak(auStack_e8);
  _objc_release(lVar10);
  _objc_release(param_2);
  return;
}



/* Entry: 105ab8594; end: 105ab863f;  */

void FUN_105ab8594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105ab8640;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105ab8640; end: 105ab86a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab8640(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf65b40(*(undefined8 *)(param_1 + _DAT_11272ec7c));
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272ec74);
    func_0x00010c0b8320(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47f00();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab86a4; end: 105ab8923; -[SCSpectaclesPairingViewController _refreshViewForAlreadyPaired:] */

void FUN_105ab86a4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **unaff_x25;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c083820();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105ab8924;
    puStack_78 = &UNK_110848a18;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e1c0b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c0b8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c06e7e0();
    _objc_release(ppuVar4);
    if ((int)ppuVar5 != 0) {
      func_0x000109026188();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      ppuVar3 = ppuVar4;
    }
    puVar2 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e1c0d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c0d8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar2);
    _objc_release(puVar6);
    _objc_release(ppuVar4);
    _objc_release(puVar2);
    _objc_release(ppuVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    unaff_x25 = &puStack_90;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x20));
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  param_3 = param_3 + 4;
  _objc_loadWeakRetained();
  if (param_3 != (undefined **)0x0) {
    func_0x00010be03040(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ab8924; end: 105ab8957;  */

void FUN_105ab8924(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be03040(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab8958; end: 105ab8aa7; -[SCSpectaclesPairingViewController _refreshViewForPairingFailure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab8958(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  lVar3 = param_3;
  if ((param_3 - 1U < 2) && (lVar3 = 5, *(long *)(param_1 + _DAT_11272ed28) < 1)) {
    lVar3 = param_3;
  }
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c083820();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be2db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePairingFailure__112569060,lVar3);
    return;
  }
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  lStack_50 = lVar3;
  func_0x00010bf83780(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105ab8aa8; end: 105ab8ae3;  */

void FUN_105ab8aa8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be2db00(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ab8ae4; end: 105ab8c1f; -[SCSpectaclesPairingViewController _refreshViewForPairingUserMismatchWithPreviousUserMediaCount:] */

void FUN_105ab8ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c083820();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    func_0x00010bebbb40(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf83780(puVar1);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ab8c20; end: 105ab8c5b;  */

void FUN_105ab8c20(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bebbb40(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ab8c5c; end: 105ab8ddf; -[SCSpectaclesPairingViewController _handlePairingSuccess:alreadyPaired:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab8c5c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined1 auStack_2c0 [8];
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  long lStack_1b0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar14 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + _DAT_11272ec74);
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar16 = *plStack_120;
    do {
      lVar17 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(lVar2);
        }
        puVar14 = *(undefined8 **)(lStack_128 + lVar17 * 8);
        puVar4 = (undefined1 *)puVar14;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = param_3;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c0720c0();
        _objc_release(ppuVar5);
        _objc_release(puVar4);
        if ((int)puVar6 != 0) {
          func_0x00010beefa40(*(undefined8 *)(param_1 + _DAT_11272ec7c));
          goto LAB_105ab8d94;
        }
        lVar17 = lVar17 + 1;
      } while (lVar3 != lVar17);
      lVar3 = lVar2;
      puVar14 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
LAB_105ab8d94:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_2e0;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar14 != (undefined8 *)0x9) {
    uVar7 = *(undefined8 *)((long)param_3 + (long)_DAT_11272ec74);
    func_0x00010c0b8320(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256580();
    _objc_release(uVar7);
  }
  _objc_initWeak(auStack_1e8,param_3);
  puVar9 = PTR_PTR_1126af180;
  ppuVar8 = &PTR____CFConstantStringClassReference_110e1c0f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c0f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_105ab9440;
  puStack_1f8 = &UNK_110848a18;
  _objc_copyWeak(auStack_1f0,auStack_1e8);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  ppuVar8 = param_3;
  func_0x00010be1da60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined *)0x0;
  if ((long)puVar14 < 5) {
    ppuVar15 = param_3;
    if (2 < (long)puVar14) {
      if (puVar14 == (undefined8 *)0x3) {
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_1c8 = ppuVar8;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR____CFConstantStringClassReference_110e1c138;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c138,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be6fce0(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        _objc_opt_class(param_3);
        func_0x00010beb7b60();
        ppuVar5 = (undefined **)&UNK_110848a18;
      }
      else {
        ppuVar15 = (undefined **)0x0;
        ppuVar5 = (undefined **)&UNK_110848a18;
        if (puVar14 == (undefined8 *)0x4) {
          puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
          ppuStack_1d0 = ppuVar8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = &PTR____CFConstantStringClassReference_110e1c158;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c158,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(param_3);
          func_0x00010beb7b60();
        }
      }
      goto LAB_105ab9308;
    }
    ppuVar5 = (undefined **)&UNK_110848a18;
    if ((undefined1 *)((long)puVar14 + -1) < (undefined1 *)0x2) {
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1c0 = puVar9;
      ppuStack_1b8 = ppuVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = &PTR____CFConstantStringClassReference_110e1c118;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c118,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6fce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      _objc_opt_class(param_3);
      func_0x00010beb7b60();
      goto LAB_105ab9308;
    }
    ppuVar15 = (undefined **)0x0;
    if (puVar14 != (undefined8 *)0x0) goto LAB_105ab9308;
    func_0x00010be6fc00(param_3);
  }
  else if ((long)puVar14 < 7) {
    if (puVar14 == (undefined8 *)0x5) {
      _objc_initWeak(auStack_290,param_3);
      puVar11 = PTR_PTR_1126af180;
      ppuVar15 = &PTR____CFConstantStringClassReference_110e1c178;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c178,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_2b8 = puVar1;
      uStack_2b0 = 0xc2000000;
      pcStack_2a8 = FUN_105ab9510;
      puStack_2a0 = &UNK_110848a18;
      _objc_copyWeak(auStack_298,auStack_290);
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      puVar12 = PTR_PTR_1126af180;
      ppuVar15 = &PTR____CFConstantStringClassReference_110e1c198;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c198,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_2e0 = puVar1;
      uStack_2d8 = 0xc2000000;
      pcStack_2d0 = FUN_105ab9594;
      puStack_2c8 = &UNK_110848a18;
      _objc_copyWeak(auStack_2c0,auStack_290);
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1e0 = puVar11;
      puStack_1d8 = puVar12;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = &PTR____CFConstantStringClassReference_110e1c1b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c1b8,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(param_3);
      func_0x00010beb7b60();
      _objc_release(puVar12);
      _objc_destroyWeak(auStack_2c0);
      _objc_release(puVar11);
      _objc_destroyWeak(auStack_298);
      _objc_destroyWeak(auStack_290);
      goto LAB_105ab9308;
    }
    ppuVar15 = (undefined **)0x0;
    ppuVar5 = (undefined **)&UNK_110848a18;
    if (puVar14 != (undefined8 *)0x6) goto LAB_105ab9308;
    puStack_238 = puVar1;
    uStack_230 = 0xc2000000;
    uStack_228 = 0x105ab9474;
    puStack_220 = &UNK_1108434b0;
    _objc_copyWeak(auStack_218,auStack_1e8);
    func_0x00010be88c40(param_3);
    _objc_destroyWeak(auStack_218);
  }
  else if (puVar14 == (undefined8 *)0x7) {
    puStack_260 = puVar1;
    uStack_258 = 0xc2000000;
    uStack_250 = 0x105ab94a8;
    puStack_248 = &UNK_1108434b0;
    _objc_copyWeak(auStack_240,auStack_1e8);
    func_0x00010be88c40(param_3);
    _objc_destroyWeak(auStack_240);
  }
  else if (puVar14 == (undefined8 *)0x8) {
    puStack_288 = puVar1;
    uStack_280 = 0xc2000000;
    uStack_278 = 0x105ab94dc;
    puStack_270 = &UNK_1108434b0;
    _objc_copyWeak(auStack_268,auStack_1e8);
    func_0x00010be88c40(param_3);
    _objc_destroyWeak(auStack_268);
  }
  else {
    ppuVar15 = (undefined **)0x0;
    ppuVar5 = (undefined **)&UNK_110848a18;
    if (puVar14 != (undefined8 *)0x9) goto LAB_105ab9308;
    func_0x00010bebbb40(param_3);
  }
  puVar13 = (undefined *)0x0;
  ppuVar15 = (undefined **)0x0;
  ppuVar5 = (undefined **)&UNK_110848a18;
LAB_105ab9308:
  _objc_release(ppuVar15);
  _objc_release(puVar13);
  _objc_release(ppuVar8);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_1f0);
  puVar4 = auStack_1e8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined *)((long)ppuVar5 + 0x20));
    _objc_destroyWeak(auStack_298);
    _objc_destroyWeak(auStack_290);
    _objc_destroyWeak(auStack_1f0);
    _objc_destroyWeak(auStack_1e8);
    __Unwind_Resume();
    puVar4 = puVar4 + 0x20;
    _objc_loadWeakRetained();
    if (puVar4 != (undefined1 *)0x0) {
      func_0x00010c0f2b20(puVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 105ab8de0; end: 105ab943f; -[SCSpectaclesPairingViewController _handlePairingFailure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab8de0(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
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
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  ppuVar6 = &puStack_1b0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 9) {
    uVar2 = *(undefined8 *)((long)param_1 + (long)_DAT_11272ec74);
    func_0x00010c0b8320(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256580();
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_b8,param_1);
  puVar4 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1c0f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c0f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105ab9440;
  puStack_c8 = &UNK_110848a18;
  _objc_copyWeak(auStack_c0,auStack_b8);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  ppuVar3 = param_1;
  func_0x00010be1da60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined *)0x0;
  if (param_3 < 5) {
    ppuVar11 = param_1;
    if (2 < param_3) {
      if (param_3 == 3) {
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_98 = ppuVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = &PTR____CFConstantStringClassReference_110e1c138;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c138,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be6fce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        _objc_opt_class(param_1);
        func_0x00010beb7b60();
        ppuVar6 = (undefined **)&UNK_110848a18;
      }
      else {
        ppuVar11 = (undefined **)0x0;
        ppuVar6 = (undefined **)&UNK_110848a18;
        if (param_3 == 4) {
          puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
          ppuStack_a0 = ppuVar3;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = &PTR____CFConstantStringClassReference_110e1c158;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c158,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(param_1);
          func_0x00010beb7b60();
        }
      }
      goto LAB_105ab9308;
    }
    ppuVar6 = (undefined **)&UNK_110848a18;
    if (param_3 - 1U < 2) {
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = puVar4;
      ppuStack_88 = ppuVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e1c118;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c118,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6fce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_opt_class(param_1);
      func_0x00010beb7b60();
      goto LAB_105ab9308;
    }
    ppuVar11 = (undefined **)0x0;
    if (param_3 != 0) goto LAB_105ab9308;
    func_0x00010be6fc00(param_1);
  }
  else if (param_3 < 7) {
    if (param_3 == 5) {
      _objc_initWeak(auStack_160,param_1);
      puVar7 = PTR_PTR_1126af180;
      ppuVar11 = &PTR____CFConstantStringClassReference_110e1c178;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c178,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_188 = puVar1;
      uStack_180 = 0xc2000000;
      pcStack_178 = FUN_105ab9510;
      puStack_170 = &UNK_110848a18;
      _objc_copyWeak(auStack_168,auStack_160);
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      puVar8 = PTR_PTR_1126af180;
      ppuVar11 = &PTR____CFConstantStringClassReference_110e1c198;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c198,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_1b0 = puVar1;
      uStack_1a8 = 0xc2000000;
      pcStack_1a0 = FUN_105ab9594;
      puStack_198 = &UNK_110848a18;
      _objc_copyWeak(auStack_190,auStack_160);
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b0 = puVar7;
      puStack_a8 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR____CFConstantStringClassReference_110e1c1b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c1b8,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(param_1);
      func_0x00010beb7b60();
      _objc_release(puVar8);
      _objc_destroyWeak(auStack_190);
      _objc_release(puVar7);
      _objc_destroyWeak(auStack_168);
      _objc_destroyWeak(auStack_160);
      goto LAB_105ab9308;
    }
    ppuVar11 = (undefined **)0x0;
    ppuVar6 = (undefined **)&UNK_110848a18;
    if (param_3 != 6) goto LAB_105ab9308;
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x105ab9474;
    puStack_f0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_e8,auStack_b8);
    func_0x00010be88c40(param_1);
    _objc_destroyWeak(auStack_e8);
  }
  else if (param_3 == 7) {
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x105ab94a8;
    puStack_118 = &UNK_1108434b0;
    _objc_copyWeak(auStack_110,auStack_b8);
    func_0x00010be88c40(param_1);
    _objc_destroyWeak(auStack_110);
  }
  else if (param_3 == 8) {
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x105ab94dc;
    puStack_140 = &UNK_1108434b0;
    _objc_copyWeak(auStack_138,auStack_b8);
    func_0x00010be88c40(param_1);
    _objc_destroyWeak(auStack_138);
  }
  else {
    ppuVar11 = (undefined **)0x0;
    ppuVar6 = (undefined **)&UNK_110848a18;
    if (param_3 != 9) goto LAB_105ab9308;
    func_0x00010bebbb40(param_1);
  }
  puVar10 = (undefined *)0x0;
  ppuVar11 = (undefined **)0x0;
  ppuVar6 = (undefined **)&UNK_110848a18;
LAB_105ab9308:
  _objc_release(ppuVar11);
  _objc_release(puVar10);
  _objc_release(ppuVar3);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_c0);
  puVar9 = auStack_b8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)ppuVar6 + 0x20));
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume();
  puVar9 = puVar9 + 0x20;
  _objc_loadWeakRetained();
  if (puVar9 != (undefined1 *)0x0) {
    func_0x00010c0f2b20(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 105ab9440; end: 105ab950f;  */

void FUN_105ab9440(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0f2b20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab9510; end: 105ab9593;  */

void FUN_105ab9510(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bec8f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be84f60(param_1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab9594; end: 105ab95c7;  */

void FUN_105ab9594(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be03040(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab95c8; end: 105ab95ef; -[SCSpectaclesPairingViewController _pairingFailureDescription:] */

void FUN_105ab95c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105ab95f0; end: 105ab970b; -[SCSpectaclesPairingViewController _getCancelButton:] */

void FUN_105ab95f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  if (1 < param_3 - 3U) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126af180;
  _objc_copyWeak(auStack_58,auStack_48);
  lStack_50 = param_3;
  func_0x00010beef320(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ab970c; end: 105ab9777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab970c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x28) == 9) {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_11272ec74);
      func_0x00010c0b8320(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256580();
      _objc_release(uVar2);
    }
    func_0x00010be03040(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ab9778; end: 105ab9997; -[SCSpectaclesPairingViewController _refreshViewForBTSelectorFailure] */

void FUN_105ab9778(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **unaff_x24;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c083820();
  _objc_release();
  if (((ulong)puVar2 & 1) == 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar1 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105ab9998;
    puStack_68 = &UNK_110848a18;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar2 = PTR_PTR_1126af178;
    func_0x00010c22b900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e1c1d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c1d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e1c1f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c1f8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar2);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_60);
    puVar1 = auStack_58;
    _objc_destroyWeak();
    unaff_x24 = &puStack_80;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x20));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010be03040(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ab9998; end: 105ab99cb;  */

void FUN_105ab9998(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be03040(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab99cc; end: 105ab9ae7; -[SCSpectaclesPairingViewController _refreshViewForUnsupportedCandidateCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab99cc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126b6a50;
  _objc_alloc(PTR_PTR_1126b6a50);
  lVar2 = *(long *)(param_1 + _DAT_11272ecc0);
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0026e0(puVar1);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11272ecc4));
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ab9ae8; end: 105ab9b13;  */

void FUN_105ab9ae8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab9b14; end: 105ab9be7; -[SCSpectaclesPairingViewController _refreshViewForUnsupportedDevice] */

void FUN_105ab9b14(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ab9be8;
  puStack_48 = &UNK_1108482a8;
  _objc_copyWeak(auStack_40,auStack_38);
  FUN_105ac31f4(&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0(param_1);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ab9be8; end: 105ab9c13;  */

void FUN_105ab9be8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab9c14; end: 105ab9edf; -[SCSpectaclesPairingViewController _refreshViewForDetectOverload] */

void FUN_105ab9c14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c083820();
  _objc_release();
  if (((ulong)puVar2 & 1) == 0) {
    _objc_initWeak(auStack_80,param_1);
    puVar2 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e17f18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17f18,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105ab9ee0;
    puStack_90 = &UNK_110848a18;
    unaff_x25 = &puStack_a8;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar4 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e17f38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17f38,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105ab9f94;
    puStack_b8 = &UNK_110848a18;
    _objc_copyWeak(auStack_b0,auStack_80);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar1 = PTR_PTR_1126af178;
    func_0x00010c22b900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e17f58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17f58,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e17f78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17f78,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar2;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar1);
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_b0);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_88);
    puVar1 = auStack_80;
    _objc_destroyWeak();
    unaff_x26 = &puStack_d0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x26 + 0x20));
  _objc_destroyWeak(unaff_x25 + 4);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (puVar1 != (undefined *)0x0) {
    puVar4 = puVar1;
    func_0x00010bec8f40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80();
    _objc_release(puVar4);
    func_0x00010be03040(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ab9ee0; end: 105ab9f93;  */

void FUN_105ab9ee0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bec8f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80();
    _objc_release(puVar3);
    func_0x00010be03040(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab9f94; end: 105ab9fc7;  */

void FUN_105ab9f94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be03040(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab9fc8; end: 105aba2eb; -[SCSpectaclesPairingViewController _refreshViewForPairingCanceled:cancellationSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab9fc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11272ecd8));
  _objc_initWeak(auStack_90,param_1);
  puVar1 = PTR_PTR_1126af180;
  ppuVar7 = &PTR____CFConstantStringClassReference_110e1c198;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c198,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105aba2ec;
  puStack_a8 = &UNK_1108d37a0;
  _objc_copyWeak(auStack_a0,auStack_90);
  uStack_98 = param_4;
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  puVar2 = PTR_PTR_1126af180;
  ppuVar7 = &PTR____CFConstantStringClassReference_110e1b818;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b818,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_90);
  uStack_c8 = param_3;
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  if (*(long *)(param_1 + _DAT_11272ecb0) == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e1c218;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c218,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + _DAT_11272ecb0) == 1) {
    func_0x0001090261a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = (undefined **)0x0;
  }
  puVar5 = PTR_PTR_1126af4d8;
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1c238;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c238,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  puStack_80 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff880(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c00();
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(ppuVar7);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_a0);
  puVar6 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_90);
    __Unwind_Resume();
    puVar6 = puVar6 + 0x20;
    _objc_loadWeakRetained();
    if (puVar6 != (undefined1 *)0x0) {
      func_0x00010c2915c0(*(undefined8 *)(puVar6 + _DAT_11272ecd4));
      func_0x00010be03040(puVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 105aba2ec; end: 105aba38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aba2ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2915c0(*(undefined8 *)(lVar1 + _DAT_11272ecd4),param_2,
                        *(undefined8 *)(param_1 + 0x28));
    func_0x00010be03040(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105aba38c; end: 105aba587; -[SCSpectaclesPairingViewController _refreshViewForInternetConnection:] */

void FUN_105aba38c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000109025138();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar9 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar5;
  func_0x0001090262f0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000109026308();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c211b40(puVar5);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar11);
  func_0x00010bf84b00(uVar9);
  _objc_release(uVar11);
  return;
}



/* Entry: 105aba588; end: 105aba5ff;  */

void FUN_105aba588(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105aba600; end: 105aba623;  */

void FUN_105aba600(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105aba60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105aba624; end: 105aba66b; -[SCSpectaclesPairingViewController _refreshViewForNameTooShort] */

void FUN_105aba624(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000106f18568(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0(param_1,param_2,uVar1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aba66c; end: 105aba6c3; -[SCSpectaclesPairingViewController _refreshViewForNameExisted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aba66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ecb0);
  func_0x000106f185c8(uVar1,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aba6c4; end: 105aba96b; -[SCSpectaclesPairingViewController _refreshViewForLocationPermission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aba6c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **unaff_x25;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c083820();
  _objc_release();
  if (((ulong)puVar2 & 1) == 0) {
    _objc_initWeak(auStack_70,param_1);
    puVar1 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e1c058;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c058,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf2fac0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105aba96c;
    puStack_80 = &UNK_110848a18;
    unaff_x25 = &puStack_98;
    _objc_copyWeak(auStack_78,auStack_70);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    puVar2 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf2fac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    puVar5 = PTR_PTR_1126af178;
    func_0x00010c22b900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e1c258;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c258,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e1c278;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c278,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar5);
    _objc_release(puVar6);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_78);
    puVar1 = auStack_70;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 4);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(puVar1 + _DAT_11272ec74);
    func_0x00010c0b8320(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8ca0();
    _objc_release(uVar7);
    func_0x00010c293980(*(undefined8 *)(puVar1 + _DAT_11272ecd4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105aba96c; end: 105aba9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aba96c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272ec74);
    func_0x00010c0b8320(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8ca0();
    _objc_release(uVar1);
    func_0x00010c293980(*(undefined8 *)(param_1 + _DAT_11272ecd4),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aba9e0; end: 105abaad7; -[SCSpectaclesPairingViewController _factoryResetThenDismissPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aba9e0(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ec74);
  func_0x00010c0b8320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f4e0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0;
  _dispatch_time(0,2000000000);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105abaaac;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010058c530(uVar1,PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105abaad8; end: 105abab3b; -[SCSpectaclesPairingViewController _dismissPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abaad8(long param_1)

{
  undefined *puVar1;
  
  func_0x00010be92cc0();
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  param_1 = param_1 + _DAT_11272ec90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f3080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105abab3c; end: 105ababaf; -[SCSpectaclesPairingViewController _resetForDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abab3c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_11272eca4) = 0;
  func_0x00010bedb740();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ec74);
  func_0x00010c0b8320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256580();
  _objc_release(uVar1);
  func_0x00010c120fe0(*(undefined8 *)(param_1 + _DAT_11272ec7c));
                    /* WARNING: Could not recover jumptable at 0x00010c1a9bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ecc8),PTR_s_setIdleTimerDisabled__112648118,0);
  return;
}



/* Entry: 105ababb0; end: 105abac77; +[SCSpectaclesPairingViewController _showAlertWithDescription:actions:] */

void FUN_105ababb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126af4d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1c1d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c1d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff880(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c00();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105abac78; end: 105abb10b; -[SCSpectaclesPairingViewController _showInactiveAlertView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abac78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af270;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1bdb00();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1);
  func_0x00010c1cfce0(puVar1);
  func_0x00010c21e900(puVar1);
  uStack_90 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd60(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c162900(puVar1);
  func_0x00010c18b5e0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1c298;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c298,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bec8f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(ppuVar4);
  func_0x00010c099980(puVar1);
  puVar6 = PTR_PTR_1126c2068;
  _objc_alloc();
  func_0x00010c021360();
  _objc_initWeak(auStack_b0,param_1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1c2b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c2b8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105abb10c;
  puStack_c0 = &UNK_110848a18;
  _objc_copyWeak(auStack_b8,auStack_b0);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  func_0x00010c160fc0(puVar3);
  puVar7 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1c2d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c2d8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e0,auStack_b0);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar8 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1c2f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c2f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar6;
  puStack_a0 = puVar3;
  puStack_98 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c60(puVar8);
  _objc_release(puVar9);
  _objc_release(ppuVar4);
  _objc_release(puVar8);
  func_0x00010c294200(*(undefined8 *)(param_1 + _DAT_11272ecd4));
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_e0);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar1[_DAT_11272eca8] = 1;
    func_0x00010c293e80(*(undefined8 *)(puVar1 + _DAT_11272ecd4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105abb10c; end: 105abb19f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abb10c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11272eca8) = 1;
    func_0x00010c293e80(*(undefined8 *)(param_1 + _DAT_11272ecd4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105abb1a0; end: 105abb6df; -[SCSpectaclesPairingViewController _showUserMismatchAlertViewIfNeededWithPreviousUserMediaCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abb1a0(long param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11272ec70);
  func_0x00010c06e7e0();
  if (iVar1 == 0) {
    puVar3 = auStack_a8;
    _objc_initWeak(puVar3,param_1);
    puVar4 = PTR_PTR_1126aed70;
    func_0x0001090263e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x105abb7a4;
    puStack_108 = &UNK_1108482a8;
    unaff_x27 = &puStack_120;
    _objc_copyWeak(auStack_100,auStack_a8);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar6 = PTR_PTR_1126aed70;
    ppuVar5 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar7;
    uStack_140 = 0xc2000000;
    uStack_138 = 0x105abb7ec;
    puStack_130 = &UNK_1108482a8;
    unaff_x28 = &puStack_148;
    param_2 = auStack_a8;
    _objc_copyWeak(auStack_128,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar7 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar8 = puVar7;
    func_0x0001090263c8();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x000109026230();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar4;
    puStack_98 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010c211b40(puVar7);
    func_0x00010c10eda0(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_128);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_a8);
  }
  else if ((param_3 == 0) || (lVar2 = param_3, func_0x00010c067fc0(), lVar2 < 1)) {
    uVar11 = *(undefined8 *)(param_1 + _DAT_11272ec74);
    func_0x00010c0b8320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47ee0();
    _objc_release(uVar11);
  }
  else {
    puVar3 = auStack_a8;
    _objc_initWeak(puVar3,param_1);
    puVar4 = PTR_PTR_1126aed70;
    func_0x0001090263e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105abb6e0;
    puStack_b8 = &UNK_1108482a8;
    unaff_x27 = &puStack_d0;
    _objc_copyWeak(auStack_b0,auStack_a8);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar6 = PTR_PTR_1126aed70;
    ppuVar5 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar7;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x105abb748;
    puStack_e0 = &UNK_1108482a8;
    unaff_x28 = &puStack_f8;
    param_2 = auStack_a8;
    _objc_copyWeak(auStack_d8,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x0001090261b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar8 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar9 = puVar8;
    func_0x0001090262a8();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar4;
    puStack_88 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar9);
    func_0x00010c211b40(puVar8);
    func_0x00010c10eda0(param_1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_d8);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 4);
  _objc_destroyWeak(unaff_x27 + 4);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  func_0x00010bf84b00(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    uVar11 = *(undefined8 *)(param_3 + _DAT_11272ec74);
    func_0x00010c0b8320(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47ee0();
    _objc_release(uVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105abb6e0; end: 105abb85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abb6e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272ec74);
    func_0x00010c0b8320(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47ee0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105abb85c; end: 105abb923; -[SCSpectaclesPairingViewController _initPushSound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abb85c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___AVAudioPlayer_1126bdec8;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0040c0(puVar1,param_2,puVar3,0);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11272ed18);
    *(undefined **)(param_1 + _DAT_11272ed18) = puVar1;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105abb924; end: 105abb9f3; -[SCSpectaclesPairingViewController _playSuccessFeedback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abb924(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272ed18);
  _objc_retain(uVar3);
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105abb9f4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar3;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar1,&puStack_48);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar2);
  _objc_release(uStack_28);
  _objc_release(uVar3);
  return;
}



/* Entry: 105abb9f4; end: 105abb9fb;  */

void FUN_105abb9f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 105abb9fc; end: 105abba03; -[SCSpectaclesPairingViewController attributedLabel:didSelectLinkWithURL:] */

void FUN_105abb9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be325f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleURLTapped__11256a318,param_4);
  return;
}



/* Entry: 105abba04; end: 105abba6b; -[SCSpectaclesPairingViewController dismissInformationSettingsView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abba04(long param_1)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + _DAT_11272ed24) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc60();
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c2916d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11272ecd4),PTR_s_userClosedTOS_112681fd8);
    return;
  }
  return;
}



/* Entry: 105abba6c; end: 105abba8f; -[SCSpectaclesPairingViewController textViewShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105abba6c(long param_1)

{
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_11272ecf0));
  return 1;
}



/* Entry: 105abba90; end: 105abba97; -[SCSpectaclesPairingViewController shouldBeginEditing] */

undefined8 FUN_105abba90(void)

{
  return 1;
}



/* Entry: 105abba98; end: 105abbadb; -[SCSpectaclesPairingViewController pairRetryButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abba98(long param_1)

{
  func_0x00010c2934e0(*(undefined8 *)(param_1 + _DAT_11272ecd4));
  *(long *)(param_1 + _DAT_11272ed28) = *(long *)(param_1 + _DAT_11272ed28) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010be6fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pairManually_1125798a0);
  return;
}



/* Entry: 105abbadc; end: 105abbb1f; -[SCSpectaclesPairingViewController retryAuthButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abbadc(long param_1)

{
  func_0x00010c2934e0(*(undefined8 *)(param_1 + _DAT_11272ecd4));
  *(long *)(param_1 + _DAT_11272ed28) = *(long *)(param_1 + _DAT_11272ed28) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010be6fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pairManually_1125798a0);
  return;
}



/* Entry: 105abbb20; end: 105abbb23; -[SCSpectaclesPairingViewController resumePairingFromBluetoothPickerPressed] */

void FUN_105abbb20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pairManually_1125798a0);
  return;
}



/* Entry: 105abbb24; end: 105abbb2f; -[SCSpectaclesPairingViewController cancelButtonPressed] */

void FUN_105abbb24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__refreshViewForPairingCanceled_c_11257fcd8,0,2);
  return;
}



/* Entry: 105abbb30; end: 105abbd67; -[SCSpectaclesPairingViewController termsOkButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abbb30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = (long)_DAT_11272ecd4;
  func_0x00010c291020(*(undefined8 *)(param_1 + lVar9),param_2,
                      *(undefined1 *)(param_1 + _DAT_11272ecb8));
  lVar8 = param_1;
  func_0x00010be40ea0();
  if ((int)lVar8 == 0) {
    lVar8 = (long)_DAT_11272ecf0;
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf60400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c0c78;
    func_0x00010c078700(PTR_PTR_1126c0c78,param_2,uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010be88ca0(param_1);
    }
    else {
      lVar10 = (long)_DAT_11272ec74;
      uVar5 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c0b8300();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c0708a0();
      _objc_release(uVar5);
      if ((int)uVar1 == 0) {
        uVar5 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c0b8320(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar5;
        func_0x00010c0f2ee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        uVar6 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010bf60420(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010bf60400(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        func_0x00010c292e40(*(undefined8 *)(param_1 + lVar9),param_2,uVar6,(uint)uVar5 ^ 1);
        uVar5 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c0b8320(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d8cc0();
        _objc_release(uVar5);
        lVar8 = (long)_DAT_11272ec88;
        uVar2 = *(ulong *)(param_1 + lVar8);
        func_0x00010bfd3980();
        if ((uVar2 & 1) == 0) {
          func_0x00010c160d60(*(undefined8 *)(param_1 + lVar8),param_2,1);
        }
        _objc_release(uVar6);
        _objc_release(uVar1);
      }
      else {
        func_0x00010be88c80(param_1,param_2,uVar3);
      }
    }
  }
  else {
    lVar8 = (long)_DAT_11272ec74;
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0b8320(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0f2ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c292e40(*(undefined8 *)(param_1 + lVar9),param_2,uVar3,0);
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0b8320(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8cc0();
    _objc_release(uVar1);
    lVar8 = (long)_DAT_11272ec88;
    uVar2 = *(ulong *)(param_1 + lVar8);
    func_0x00010bfd3980();
    if ((uVar2 & 1) == 0) {
      func_0x00010c160d60(*(undefined8 *)(param_1 + lVar8),param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105abbd68; end: 105abbdc7; -[SCSpectaclesPairingViewController enableLocationDataPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abbd68(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ec74);
  func_0x00010c0b8320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8ca0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c293990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ecd4),PTR_s_userSetLocationPermissions__112682888,1
            );
  return;
}



/* Entry: 105abbdc8; end: 105abbdcb; -[SCSpectaclesPairingViewController disableLocationDataPressed] */

void FUN_105abbdc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshViewForLocationPermissio_11257fcb8);
  return;
}



/* Entry: 105abbdcc; end: 105abbdcf; -[SCSpectaclesPairingViewController resumeButtonPressed] */

void FUN_105abbdcc(void)

{
  return;
}



/* Entry: 105abbdd0; end: 105abbe57; -[SCSpectaclesPairingViewController _pairManually] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abbdd0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c13bf20(*(undefined8 *)(param_1 + _DAT_11272ecd4));
  lVar2 = (long)_DAT_11272ec74;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c0b8320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256580();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c0b8320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105abbe58; end: 105abbe63; -[SCSpectaclesPairingViewController supportedInterfaceOrientations] */

undefined8 FUN_105abbe58(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105abbe64; end: 105abc047; -[SCSpectaclesPairingViewController pairingSessionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abbe64(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
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
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11272ecd4);
  func_0x00010c0f2ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2070;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11272ecd0);
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_2 + _DAT_11272ec94);
  uVar16 = *(undefined8 *)(param_2 + _DAT_11272ed28);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11272ec74);
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f2b80();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  uVar7 = uVar1;
  func_0x00010bfd38e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bfb0d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010bf700a0();
  uVar13 = uVar1;
  func_0x00010bf1cb20();
  uVar14 = uVar1;
  func_0x00010bf21ac0();
  func_0x00010c033700(param_1,puVar2,param_3,uVar3,uVar15,uVar16,uVar5,uVar8,uVar10,uVar11,uVar12,
                      uVar13,uVar14);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105abc048; end: 105abc213; -[SCSpectaclesPairingViewController connectionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abc048(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ecd4);
  func_0x00010c0f2ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c1888;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272ecd0);
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272ec80);
  func_0x00010c24cc20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf85d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c2a52c0(uVar5,param_2,uVar6);
  uVar8 = uVar1;
  func_0x00010c15e740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bfb0d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010bfd38e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar1;
  func_0x00010bf700a0();
  func_0x00010c045300(puVar2,param_2,uVar3,0,uVar7,uVar8,uVar10,uVar12,uVar13,0);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105abc214; end: 105abc387; -[SCSpectaclesPairingViewController _postPairingOnboardingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abc214(long param_1,undefined8 param_2)

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
  long lVar11;
  
  puVar1 = PTR_PTR_1126b6740;
  _objc_alloc();
  lVar11 = (long)_DAT_11272ecd4;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0f2ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0f2ea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0f2ea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf700a0();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11272ecd0);
  func_0x00010bdc3580(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0f2ea0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019b40(puVar1,param_2,uVar3,uVar5,uVar7,uVar8,uVar10,
                      *(undefined8 *)(param_1 + _DAT_11272eccc));
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105abc388; end: 105abc3cb; -[SCSpectaclesPairingViewController applicationDidEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abc388(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11272ed24) & 1) != 0) {
    return;
  }
  func_0x00010be92cc0();
                    /* WARNING: Could not recover jumptable at 0x00010c2915d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ecd4),PTR_s_userCancelledPairing__112681f98,0);
  return;
}



/* Entry: 105abc3cc; end: 105abc43f; -[SCSpectaclesPairingViewController playerItemDidReachEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abc3cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0dfc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157280();
  func_0x00010c0fe360(*(undefined8 *)(param_1 + _DAT_11272ed08));
  _objc_release(param_3);
  return;
}



/* Entry: 105abc440; end: 105abc4d7; -[SCSpectaclesPairingViewController _suscribeToAVPlayerDidEndPlayingNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abc440(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_playerItemDidReachEnd__11252c4a8;
  uVar4 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272ed08);
  func_0x00010bf5f0a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar2,param_2,param_1,puVar1,uVar4,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105abc4d8; end: 105abc4db; -[SCSpectaclesPairingViewController pairingDidStart] */

void FUN_105abc4d8(void)

{
  return;
}



/* Entry: 105abc4dc; end: 105abc547; -[SCSpectaclesPairingViewController pairingBeganScanning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abc4dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010beaa240(param_1,param_2,1);
  if ((*(byte *)(param_1 + _DAT_11272ec60) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11272ec60) = 1;
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105abc548; end: 105abc56f; -[SCSpectaclesPairingViewController pairingBeganConnectingBLE] */

void FUN_105abc548(undefined8 param_1,undefined8 param_2)

{
  func_0x00010beaa240(param_1,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010be74b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playSuccessFeedback_11257ac70);
  return;
}



/* Entry: 105abc570; end: 105abc573; -[SCSpectaclesPairingViewController pairingDidConnectBLE] */

void FUN_105abc570(void)

{
  return;
}



/* Entry: 105abc574; end: 105abc5cf; -[SCSpectaclesPairingViewController pairingDidSyncBLE] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abc574(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be766a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11272ec78;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c233da0(uVar2,param_2,lVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c2a2000(*(undefined8 *)(param_1 + lVar3),param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105abc5d0; end: 105abc637; -[SCSpectaclesPairingViewController pairingRequestsUnpair] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abc5d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ec74);
  func_0x00010c0b8300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be88cc0(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105abc638; end: 105abc667; -[SCSpectaclesPairingViewController pairingBeganChoosingName] */

void FUN_105abc638(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010be40ea0();
  uVar1 = 5;
  if ((int)uVar2 != 0) {
    uVar1 = 6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beaa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setViewsForPhase__112588238,uVar1);
  return;
}



/* Entry: 105abc668; end: 105abc66f; -[SCSpectaclesPairingViewController pairingBeganRequestingLocation] */

void FUN_105abc668(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setViewsForPhase__112588238,7);
  return;
}



/* Entry: 105abc670; end: 105abc677; -[SCSpectaclesPairingViewController pairingBeganConnectingBTC] */

void FUN_105abc670(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setViewsForPhase__112588238,3);
  return;
}



/* Entry: 105abc678; end: 105abc67f; -[SCSpectaclesPairingViewController pairingBeganSettingUpBTC] */

void FUN_105abc678(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setViewsForPhase__112588238,4);
  return;
}



/* Entry: 105abc680; end: 105abc687; -[SCSpectaclesPairingViewController pairingDidShowBTPicker] */

void FUN_105abc680(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setViewsForPhase__112588238,8);
  return;
}



/* Entry: 105abc688; end: 105abc6f7; -[SCSpectaclesPairingViewController pairingDidFindBTPickerDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abc688(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11272ecd4);
  func_0x00010c0f2ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010be74b40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010beaa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setViewsForPhase__112588238,9);
  return;
}



/* Entry: 105abc6f8; end: 105abc703; -[SCSpectaclesPairingViewController pairingDidCancelBTPicker] */

void FUN_105abc6f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__refreshViewForPairingCanceled_c_11257fcd8,1,7);
  return;
}



/* Entry: 105abc704; end: 105abc8ef; -[SCSpectaclesPairingViewController pairingDidSucceedWithDeviceInformation:alreadyPaired:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abc704(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  if (0 < *(long *)(param_1 + _DAT_11272ed28)) {
    puVar1 = PTR_PTR_1126b3e90;
    _objc_opt_new(PTR_PTR_1126b3e90);
    func_0x00010c207640();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272ecbc);
    puVar2 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133420(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272ec74);
  func_0x00010c0b8320(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256580();
  _objc_release(uVar3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105abc8f0;
  puStack_78 = &UNK_1108488f8;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_3;
  uStack_60 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x105abc99c;
  puStack_a0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_98,auStack_58);
  func_0x000100c749e0(0x400ccccd,"APPSTORE",&puStack_b8);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105abc8f0; end: 105abca3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abc8f0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_105abc988;
  func_0x00010be2db40(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x30))
  ;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074be0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_105abc958;
    func_0x00010be88be0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
LAB_105abc958:
    func_0x00010beaa240(lVar1,param_2,0xb);
  }
  func_0x00010c1a7260(*(undefined8 *)(lVar1 + _DAT_11272ec88),param_2,1);
LAB_105abc988:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105abca40; end: 105abcbb7; -[SCSpectaclesPairingViewController pairingDidFail:] */

void FUN_105abca40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105abcad4;
  puStack_40 = &UNK_110846540;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x000100c749e0(0x3f800000,"APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105abcbb8; end: 105abcbbb; -[SCSpectaclesPairingViewController pairingDidFindMismatchUserWithPreviousUserMediaCount:] */

void FUN_105abcbb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshViewForPairingUserMismat_11257fce8);
  return;
}



/* Entry: 105abcbbc; end: 105abcc9b; -[SCSpectaclesPairingViewController inactivityMonitor:didFireInactivtyWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abcbbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_11272ed20) == '\x01') {
    if (param_4 == 2) {
      func_0x00010beaa240(param_1,param_2,10);
    }
    else {
      puVar1 = PTR_PTR_1126af178;
      func_0x00010c22b900();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c083820();
      _objc_release(puVar1);
      if ((int)puVar2 != 0) {
        puVar1 = PTR_PTR_1126af178;
        func_0x00010c22b900(PTR_PTR_1126af178);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf83740();
        _objc_release(puVar1);
      }
      if (param_4 == 1) {
        func_0x00010c270480(*(undefined8 *)(param_1 + _DAT_11272ecd4));
      }
      else if (param_4 == 0) {
        func_0x00010beb9680(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105abcc9c; end: 105abcd3f; -[SCSpectaclesPairingViewController pairingStatusViewDidTapButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abcc9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + _DAT_11272ece0) != param_3) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11272ed24) = 1;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar1 = param_1;
  func_0x00010bec8f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84f60(param_1);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c293eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ecd4),PTR_s_userTappedNeedHelp_1126829d0);
  return;
}



/* Entry: 105abcd40; end: 105abcd5f; -[SCSpectaclesPairingViewController pairingStatusView:didTapURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abcd40(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (*(long *)(param_1 + _DAT_11272ece0) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be325f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleURLTapped__11256a318,param_4);
  return;
}



/* Entry: 105abcd60; end: 105abce7b; -[SCSpectaclesPairingViewController pairingFooterDidTapConfirmButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abcd60(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + _DAT_11272ecec) == param_3) &&
     (uVar4 = *(ulong *)(param_1 + _DAT_11272ed0c), uVar4 < 0xc)) {
    if ((1L << (uVar4 & 0x3f) & 0xf1eU) == 0) {
      if ((1L << (uVar4 & 0x3f) & 0x60U) == 0) {
        if (uVar4 == 7) {
          func_0x00010bf90b40(param_1);
        }
      }
      else {
        func_0x00010c26b560(param_1);
      }
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11272ec70);
      func_0x00010c06e7e0();
      if (iVar1 != 0) {
        lVar2 = param_1 + _DAT_11272ec90;
        _objc_loadWeakRetained(lVar2);
        uVar5 = *(undefined8 *)(param_1 + _DAT_11272ec78);
        lVar3 = param_1;
        func_0x00010be766a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f3500(lVar2,param_2,uVar5,lVar3,param_1,1);
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105abce7c; end: 105abcf13; -[SCSpectaclesPairingViewController pairingFooterDidTapCancelButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abce7c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + _DAT_11272ecec) == param_3) &&
     (uVar2 = *(ulong *)(param_1 + _DAT_11272ed0c), uVar2 < 0xc)) {
    if ((1L << (uVar2 & 0x3f) & 0xf7eU) == 0) {
      if (uVar2 == 7) {
        func_0x00010bf80340(param_1);
      }
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11272ec70);
      func_0x00010c06e7e0();
      if (iVar1 != 0) {
        func_0x00010bf2dfe0(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


