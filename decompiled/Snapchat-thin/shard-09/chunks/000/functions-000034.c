/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068679d4; end: 1068679db; -[SCAllContactsScope uiContainer] */

undefined8 FUN_1068679d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068679dc; end: 1068679f3; -[SCAllContactsScope allContactsWorkflowDelegate] */

void FUN_1068679dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068679f4; end: 1068679fb; -[SCAllContactsScope configuration] */

undefined8 FUN_1068679f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068679fc; end: 106867a33; -[SCAllContactsScope .cxx_destruct] */

void FUN_1068679fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106867a34; end: 106867a7b; -[SCAllContactsConfiguration initWithContextSource:] */

void FUN_106867a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3868;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106867a7c; end: 106867a9f; -[SCAllContactsConfiguration copyWithZone:] */

undefined8 FUN_106867a7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106867aa0; end: 106867aa7; -[SCAllContactsConfiguration hash] */

undefined8 FUN_106867aa0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106867aa8; end: 106867b2f; -[SCAllContactsConfiguration isEqual:] */

bool FUN_106867aa8(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 106867b30; end: 106867b37; -[SCAllContactsConfiguration contextSource] */

undefined8 FUN_106867b30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106867b38; end: 106867bd3; -[SCChangeUsernameScope initWithDelegate:uiContainer:] */

undefined1 *
FUN_106867b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3870;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106867bd4; end: 106867beb; -[SCChangeUsernameScope delegate] */

void FUN_106867bd4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106867bec; end: 106867bf3; -[SCChangeUsernameScope uiContainer] */

undefined8 FUN_106867bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106867bf4; end: 106867c1f; -[SCChangeUsernameScope .cxx_destruct] */

void FUN_106867bf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106867c20; end: 106867cc3; -[SCMapDeepLinkHandler initWithDeepLinkHandling:browserScopeExposer:] */

undefined1 *
FUN_106867c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3878;
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



/* Entry: 106867cc4; end: 106867f8b; -[SCMapDeepLinkHandler handleURL:presentingViewController:sourceType:] */

undefined8 FUN_106867cc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c082da0();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ad780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac300();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae560;
    _objc_alloc_init(PTR_PTR_1126ae560);
    puVar4 = puVar3;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c297260(puVar4);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    uVar9 = 1;
    func_0x00010c038f40();
    puVar5 = PTR_PTR_1126ae638;
    _objc_opt_new(PTR_PTR_1126ae638);
    puVar7 = puVar5;
    func_0x00010bf22ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_release(puVar3);
  }
  else {
    puVar6 = PTR_PTR_1126b1068;
    _objc_alloc();
    func_0x00010c057c40();
    puVar3 = puVar6;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126afca8;
    if ((int)puVar4 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110dc34d8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar3);
      _objc_release(ppuVar8);
      uVar9 = 0;
    }
    else {
      func_0x00010bfd1bc0(uVar1);
      uVar9 = 2;
    }
  }
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 106867f8c; end: 106867f97;  */

void FUN_106867f8c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106867f98; end: 106867fdf; -[SCMapDeepLinkHandler webBrowserDidDismiss:] */

void FUN_106867f98(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106867fe0; end: 10686800f; -[SCMapDeepLinkHandler .cxx_destruct] */

void FUN_106867fe0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106868010; end: 10686807b; -[SCMapDeepLinkProcessor initWithNavigationDelegate:] */

undefined1 * FUN_106868010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3880;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10686807c; end: 1068680f3; -[SCMapDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

undefined8
FUN_10686807c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d420();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 1068680f4; end: 1068680fb; -[SCMapDeepLinkProcessor needsNavigationDelegate] */

undefined8 FUN_1068680f4(void)

{
  return 0;
}



/* Entry: 1068680fc; end: 106868103; -[SCMapDeepLinkProcessor .cxx_destruct] */

void FUN_1068680fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106868104; end: 10686814b;  */

undefined8 FUN_106868104(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10686814c; end: 106868cbb;  */

void FUN_10686814c(double param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  uint uVar14;
  undefined *puVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  undefined *puStack_88;
  
  _objc_retain();
  uVar3 = param_2;
  FUN_106868104();
  if ((int)uVar3 == 0) {
    puVar15 = (undefined *)0x0;
    goto LAB_106868c88;
  }
  uVar3 = param_2;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010bc92e28();
  _objc_release(uVar16);
  _objc_release(uVar3);
  uVar3 = 8;
  if (uVar4 != 0xffffffffffffffff) {
    uVar3 = uVar4;
  }
  *param_3 = uVar3;
  uVar16 = param_2;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_10724346c();
  _objc_release(uVar4);
  _objc_release(uVar16);
  *param_4 = uVar5;
  uVar16 = param_2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010bf4bb00();
  if ((int)uVar4 == 0) {
    uVar4 = param_2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4bb00();
    _objc_release(uVar4);
    _objc_release(uVar16);
    if ((int)uVar5 != 0) goto LAB_1068682ac;
    uVar16 = param_2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar16;
    func_0x00010bf4bb00();
    _objc_release(uVar16);
    if ((int)uVar4 != 0) {
      uVar4 = param_2;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x000107243330(uVar3);
      puVar15 = PTR_PTR_1126b5c58;
      func_0x00010bfb92a0(PTR_PTR_1126b5c58);
      _objc_retainAutoreleasedReturnValue();
LAB_106868c84:
      _objc_release(uVar16);
      goto LAB_106868c88;
    }
    uVar16 = param_2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar16;
    func_0x00010bf4bb00();
    _objc_release(uVar16);
    if ((int)uVar4 != 0) {
      uVar16 = param_2;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c25cf40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c08fa60();
      puStack_88 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (uVar5 == 0) {
        puStack_88 = (undefined *)0x0;
      }
      else {
        func_0x00010c067fc0(uVar3);
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar5 = uVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar16;
      func_0x00010c0e00e0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar16;
      func_0x00010c0e00e0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar18 = param_1;
      _objc_release(uVar11);
      uVar11 = uVar16;
      func_0x00010c0e00e0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar11);
      _CLLocationCoordinate2DMake();
      _objc_retain(uVar9);
      _objc_retain(uVar12);
      _objc_retain(uVar4);
      uVar11 = uVar12;
      func_0x00010c0720c0();
      if ((uVar11 & 1) == 0) {
        uVar11 = uVar12;
        func_0x00010c0720c0();
        uVar14 = (uint)uVar11;
        uVar2 = uVar14;
      }
      else {
        uVar14 = 1;
        uVar2 = (uint)uVar11;
      }
      if ((((ABS(dVar18) <= 1.1920928955078125e-07) || (ABS(param_1) <= 1.1920928955078125e-07)) ||
          (_CLLocationCoordinate2DIsValid(param_1,dVar18), uVar2 == 0)) ||
         (uVar11 = uVar9, func_0x00010c08fa60(), uVar11 == 0)) {
        _objc_release(uVar4);
        _objc_release(uVar12);
        _objc_release(uVar9);
LAB_1068689c4:
        puVar15 = PTR_PTR_1126b5c58;
        func_0x00010bf6a9e0(PTR_PTR_1126b5c58);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar11 = uVar4;
        func_0x00010c08fa60();
        _objc_release(uVar4);
        _objc_release(uVar12);
        _objc_release(uVar9);
        if ((uVar11 != 0 & uVar14) != 1) goto LAB_1068689c4;
        puVar15 = PTR_PTR_1126b5c58;
        func_0x00010c0fd000(param_1,dVar18,PTR_PTR_1126b5c58);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar12);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puStack_88);
      _objc_release(uVar3);
      _objc_release(uVar4);
      goto LAB_106868c84;
    }
    uVar16 = param_2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar16;
    func_0x00010bf4bb00();
    _objc_release(uVar16);
    if ((int)uVar4 != 0) {
      uVar4 = param_2;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar5;
      func_0x00010c08fa60();
      if (uVar16 == 0) goto LAB_106868a80;
      uVar16 = uVar7;
      func_0x00010bf529e0();
      if (uVar16 == 4) {
        uVar16 = uVar7;
        func_0x00010c0dfd40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        unaff_d9 = param_1;
        _objc_release(uVar16);
        uVar16 = uVar7;
        func_0x00010c0dfd40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar16);
        _CLLocationCoordinate2DMake();
        uVar16 = uVar7;
        unaff_d10 = unaff_d9;
        func_0x00010c0dfd40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        unaff_d11 = unaff_d10;
        _objc_release(uVar16);
        uVar16 = uVar7;
        func_0x00010c0dfd40();
        iVar1 = (int)uVar16;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release();
        _CLLocationCoordinate2DMake();
        if (ABS(param_1) <= 1.1920928955078125e-07) {
LAB_106868bbc:
          uVar16 = 0;
          bVar13 = false;
        }
        else {
          bVar13 = false;
          uVar16 = 0;
          if (1.1920928955078125e-07 < ABS(unaff_d9)) {
            _CLLocationCoordinate2DIsValid(unaff_d9,param_1);
            unaff_d8 = param_1;
            if (iVar1 == 0) {
LAB_106868a80:
              param_1 = unaff_d8;
              uVar16 = 0;
              bVar13 = false;
            }
            else {
              if (ABS(unaff_d10) <= 1.1920928955078125e-07) goto LAB_106868bbc;
              bVar13 = false;
              uVar16 = 0;
              if (1.1920928955078125e-07 < ABS(unaff_d11)) {
                _CLLocationCoordinate2DIsValid(unaff_d11,unaff_d10);
                if (iVar1 == 0) goto LAB_106868a80;
                uVar16 = 0;
                if (unaff_d11 < unaff_d9) goto LAB_106868bbc;
                bVar13 = false;
                if (param_1 <= unaff_d10) goto LAB_106868aa4;
              }
            }
          }
        }
      }
      else {
        unaff_d9 = *(double *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
        param_1 = *(double *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
        unaff_d10 = param_1;
        unaff_d11 = unaff_d9;
LAB_106868aa4:
        uVar16 = uVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar16;
        func_0x00010c08fa60();
        if (((uVar12 != 0) && (uVar12 = uVar16, func_0x00010c067fc0(), 0 < (long)uVar12)) &&
           (uVar12 = uVar16, func_0x00010c067fc0(), uVar12 - 1 < 2)) {
          func_0x00010c067fc0();
        }
        _objc_retainAutorelease(uVar5);
        _objc_release(uVar16);
        bVar13 = true;
        uVar16 = uVar5;
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_retain(uVar16);
      _objc_release(uVar4);
      puVar15 = PTR_PTR_1126b5c58;
      if (bVar13) {
        func_0x000100c6f294(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0fd700(unaff_d11,unaff_d10,unaff_d9,param_1,puVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
      }
      else {
        func_0x00010bf6a9e0(PTR_PTR_1126b5c58);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_106868c84;
    }
    uVar3 = param_2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf4bb00();
    _objc_release(uVar3);
    if ((int)uVar16 != 0) {
      puVar15 = PTR_PTR_1126b5c58;
      func_0x00010bf0a1a0(PTR_PTR_1126b5c58);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106868c88;
    }
    uVar3 = param_2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf4bb00();
    _objc_release(uVar3);
    if ((int)uVar16 != 0) {
      puVar15 = PTR_PTR_1126b5c58;
      func_0x00010bf9e460(PTR_PTR_1126b5c58);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106868c88;
    }
    uVar3 = param_2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf4bb00();
    _objc_release(uVar3);
    if ((int)uVar16 != 0) {
      uVar3 = param_2;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar16;
      func_0x00010c08fa60();
      if (uVar3 != 0) {
        func_0x00010c188000(0);
      }
      goto LAB_106868b98;
    }
  }
  else {
    _objc_release(uVar16);
LAB_1068682ac:
    uVar16 = param_2;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar16;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar18 = param_1;
    _objc_release(uVar3);
    uVar3 = uVar16;
    func_0x00010c0e00e0();
    iVar1 = (int)uVar3;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release();
    _CLLocationCoordinate2DMake();
    if (((1.1920928955078125e-07 < ABS(dVar18)) && (1.1920928955078125e-07 < ABS(param_1))) &&
       (dVar17 = param_1, _CLLocationCoordinate2DIsValid(param_1,dVar18), iVar1 != 0)) {
      uVar3 = uVar16;
      func_0x00010c0e00e0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar3);
      _objc_release(uVar16);
      puVar15 = PTR_PTR_1126b5c58;
      func_0x00010bf51d40(param_1,dVar18,dVar17,PTR_PTR_1126b5c58);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106868c88;
    }
LAB_106868b98:
    _objc_release(uVar16);
  }
  puVar15 = PTR_PTR_1126b5c58;
  func_0x00010bf6a9e0(PTR_PTR_1126b5c58);
  _objc_retainAutoreleasedReturnValue();
LAB_106868c88:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106868cbc; end: 106868fc3; -[SCMapCarouselGroupRowController initWithCurrentUserId:delegate:group:imageDownloader:mapPeopleFriendsProvider:mapPeopleGroupsProvider:mapPersonLocationsProvider:displayNameProvider:bitmojiFeature:] */

undefined8 *
FUN_106868cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126f3888;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0xc) = param_11;
    _objc_initWeak(auStack_88,puVar1);
    uVar3 = puVar1[6];
    func_0x00010bfba660();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106868fc4;
    puStack_98 = &UNK_1108b7300;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar2 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010c09fa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[10];
    puVar1[10] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
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



/* Entry: 106868fc4; end: 106869077;  */

void FUN_106868fc4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd7c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106869078; end: 1068690a3;  */

void FUN_106869078(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068690a4; end: 1068690ab;  */

void FUN_1068690a4(void)

{
  return;
}



/* Entry: 1068690ac; end: 1068690d7;  */

void FUN_1068690ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068690d8; end: 1068690eb; -[SCMapCarouselGroupRowController reuseIdentifier] */

void FUN_1068690d8(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1068690ec; end: 1068690f7; -[SCMapCarouselGroupRowController cellClass] */

void FUN_1068690ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126ce820);
  return;
}



/* Entry: 1068690f8; end: 106869123; -[SCMapCarouselGroupRowController updateCell:] */

void FUN_1068690f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + 0x58,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bee2a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateUI_112596448);
  return;
}



/* Entry: 106869124; end: 10686912f; -[SCMapCarouselGroupRowController heightForWidth:] */

undefined8 FUN_106869124(void)

{
  return 0x4049000000000000;
}



/* Entry: 106869130; end: 10686913b; -[SCMapCarouselGroupRowController didEndDisplayingCell:] */

void FUN_106869130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,0);
  return;
}



/* Entry: 10686913c; end: 1068695e3; -[SCMapCarouselGroupRowController _updateUI] */

void FUN_10686913c(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined **unaff_x23;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)(param_1 + 0x58);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf4bc60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9b20();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c26e580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1a08;
    _objc_opt_class(PTR_PTR_1126b1a08);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    puVar2 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126b1a08;
      _objc_alloc_init();
      func_0x00010c1aa200();
      func_0x00010c18b5e0(puVar3);
      puVar2 = puVar1;
      func_0x00010bf4bc60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214540();
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010c0b85e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar16 = (undefined8 *)(param_1 + 0x18);
    uVar5 = *puVar16;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(uVar5);
    uVar6 = *puVar16;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1068695e4;
    puStack_98 = &UNK_110925628;
    _objc_retain(puVar4);
    uVar6 = uVar5;
    puStack_90 = puVar4;
    lStack_88 = param_1;
    func_0x00010c0b8620(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000108fecf14();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(puVar3);
    _objc_release(uVar7);
    uVar17 = *puVar16;
    uVar18 = *(undefined8 *)(param_1 + 8);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108ef3728(uVar17,uVar18,uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf4bc60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(uVar17);
    _objc_release(uVar7);
    _objc_release(uVar8);
    lVar10 = param_1;
    func_0x00010be653e0();
    ppuVar11 = &PTR____CFConstantStringClassReference_110e62658;
    if (lVar10 != 1) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110e62678;
    }
    func_0x00010bcbeaa8(ppuVar11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf4bc60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010c260f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_initWeak(auStack_b8,param_1);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_106869684;
    puStack_c8 = &UNK_1108434b0;
    unaff_x23 = &puStack_e0;
    param_2 = auStack_b8;
    _objc_copyWeak(auStack_c0,param_2);
    puVar2 = puVar1;
    func_0x00010bf4bc60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d3960();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(ppuVar11);
    _objc_release(uVar6);
    _objc_release(puStack_90);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume();
  _objc_retain(param_2);
  puVar13 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_2;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar15 = puVar13;
  func_0x000108fec62c(puVar13,puVar14,1,*(undefined8 *)(puVar1 + 0x20),
                      *(undefined4 *)(*(long *)(puVar1 + 0x28) + 0x60),0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1068695e4; end: 106869683;  */

void FUN_1068695e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x000108fec62c(uVar1,uVar2,1,*(undefined8 *)(param_1 + 0x20),
                      *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x60),0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106869684; end: 1068696cb;  */

void FUN_106869684(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf327e0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068696cc; end: 106869857; -[SCMapCarouselGroupRowController _numFriendsSharingLocation] */

long FUN_1068696cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar3 = uVar6;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          lVar7 = *(long *)(param_1 + 0x28);
          func_0x00010c2923e0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0fa5c0(lVar7,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar6);
          _objc_release(uVar3);
          if (lVar7 != 0) {
            lVar5 = lVar5 + 1;
          }
        }
        else {
          _objc_release(uVar3);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    return lVar1;
  }
  return lVar5;
}



/* Entry: 106869858; end: 10686985b; -[SCMapCarouselGroupRowController handleTapOnBitmojiFromAvatarView:] */

void FUN_106869858(void)

{
  return;
}



/* Entry: 10686985c; end: 10686985f; -[SCMapCarouselGroupRowController handleTapOnStoryIconFromAvatarView:] */

void FUN_10686985c(void)

{
  return;
}



/* Entry: 106869860; end: 106869863; -[SCMapCarouselGroupRowController handleLongPressOnStoryIconFromAvatarView:] */

void FUN_106869860(void)

{
  return;
}



/* Entry: 106869864; end: 1068698f7; -[SCMapCarouselGroupRowController .cxx_destruct] */

void FUN_106869864(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068698f8; end: 106869bab; -[SCMapCarouselPersonRowController initWithCurrentUserId:imageDownloader:mapPeopleFriendsProvider:mapPersonLocationsProvider:person:bitmojiFeature:] */

undefined8 *
FUN_1068698f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126f3890;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ce828;
    func_0x00010c106a00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 10) = param_8;
    _objc_initWeak(auStack_88,puVar1);
    uVar4 = puVar1[3];
    func_0x00010bfba660();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106869bac;
    puStack_98 = &UNK_1108b7300;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar2 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = puVar1[4];
    func_0x00010c09fa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar2 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106869bac; end: 106869c1f;  */

void FUN_106869bac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106869c20; end: 10686a437; -[SCMapCarouselPersonRowController _updateUI] */

void FUN_106869c20(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  undefined *puVar22;
  undefined8 in_stack_ffffffffffffff10;
  uint uVar23;
  
  uVar23 = (uint)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06fc80();
  _objc_release();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    goto LAB_10686a3f0;
  }
  puVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if ((puVar1 == (undefined *)0x0) || (*(long *)(param_2 + 0x28) == 0)) goto LAB_10686a3f0;
  puVar2 = puVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c26e580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1a08;
  _objc_opt_class(PTR_PTR_1126b1a08);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar2 = puVar3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b1a08;
    _objc_alloc_init();
    func_0x00010c1aa200();
    puVar2 = puVar1;
    func_0x00010bf4bc60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214540();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar20 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d380(uVar20);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf85d80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c294420(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf1acc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf1c0a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x000108feb5c8(uVar5,uVar6,uVar7,uVar8,uVar9,1,uVar20,puVar4,*(undefined4 *)(param_2 + 0x50),
                      uVar23 & 0xffffff00,0,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar20 = uVar10;
  func_0x000108fec9ec(uVar10,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(puVar3);
  lVar11 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar12 = *(ulong *)(param_2 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c0720c0();
  _objc_release(uVar12);
  puVar2 = puVar1;
  func_0x00010bf4bc60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9b20();
  puVar22 = puVar2;
  _objc_release(puVar2);
  iVar21 = (int)uVar13;
  if (iVar21 == 0) {
    puVar14 = *(undefined **)(param_2 + 0x28);
    func_0x00010bf85d80(puVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106874f5c();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar22;
    func_0x00010c09e420();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar22;
  }
  puVar22 = puVar1;
  func_0x00010bf4bc60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar22;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar15);
  _objc_release(puVar22);
  if (iVar21 != 0) {
    _objc_release(puVar14);
    puVar14 = puVar2;
  }
  _objc_release(puVar14);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(lVar11);
  _objc_retain(uVar5);
  func_0x00010bfe4080(lVar11);
  ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (iVar21 == 0) {
    if (lVar11 != 0) {
      lVar16 = lVar11;
      func_0x00010bf64de0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb5a60(0x404e000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (100.0 <= param_1) {
        puVar2 = PTR_PTR_1126ce828;
        func_0x00010c089d20(param_1,PTR_PTR_1126ce828);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar18 = &PTR____CFConstantStringClassReference_110e626b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e626b8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar18);
      }
      puVar22 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar14 = puVar22;
      func_0x00010686a690();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar22);
      _objc_release(puVar14);
      goto LAB_10686a1d4;
    }
    puVar22 = (undefined *)0x0;
  }
  else {
    ppuVar18 = &PTR____CFConstantStringClassReference_110e62698;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e62698,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar18;
    if (100.0 < param_1) {
      ppuVar17 = (undefined **)PTR_PTR_1126ce828;
      func_0x00010c09eae0(param_1,PTR_PTR_1126ce828);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar18);
    }
    puVar22 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar2 = puVar22;
    func_0x00010686a690();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar22);
LAB_10686a1d4:
    _objc_release(puVar2);
    _objc_release(ppuVar17);
  }
  _objc_release(uVar5);
  _objc_release(lVar11);
  puVar2 = puVar1;
  func_0x00010bf4bc60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  func_0x00010c260f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(puVar14);
  _objc_release(puVar2);
  _objc_release(puVar22);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fa999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar3;
  func_0x00010bf1c640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar22);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf4bc60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar2;
  func_0x00010c26e580();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar22;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x403a000000000000);
  _objc_release(puVar14);
  _objc_release(puVar22);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf4bc60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214560(0x404a000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar1;
  func_0x00010bf4bc60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar22;
  func_0x00010c260f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(puVar14);
  _objc_release(puVar22);
  _objc_release(puVar2);
  if ((uVar13 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010bf4bc60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f740();
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010bf4bc60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf4bc60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(puVar2);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar20);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_10686a3f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bee2a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 0x20),PTR_s__updateUI_112596448);
  return;
}



/* Entry: 10686a438; end: 10686a43f;  */

void FUN_10686a438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__updateUI_112596448);
  return;
}



/* Entry: 10686a440; end: 10686a4b7; -[SCMapCarouselPersonRowController _handleFriendUpdate:] */

void FUN_10686a440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10686a4b8;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10686a530;
  puStack_48 = &UNK_110842e18;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bd7c0(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110944930,&puStack_60
                     );
  return;
}



/* Entry: 10686a4b8; end: 10686a52b;  */

void FUN_10686a4b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b96e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee2a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__updateUI_112596448);
  return;
}



/* Entry: 10686a52c; end: 10686a537;  */

void FUN_10686a52c(void)

{
  return;
}



/* Entry: 10686a538; end: 10686a54b; -[SCMapCarouselPersonRowController reuseIdentifier] */

void FUN_10686a538(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 10686a54c; end: 10686a557; -[SCMapCarouselPersonRowController cellClass] */

void FUN_10686a54c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126ce820);
  return;
}



/* Entry: 10686a558; end: 10686a583; -[SCMapCarouselPersonRowController updateCell:] */

void FUN_10686a558(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + 0x38,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bee2a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateUI_112596448);
  return;
}



/* Entry: 10686a584; end: 10686a58f; -[SCMapCarouselPersonRowController didEndDisplayingCell:] */

void FUN_10686a584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,0);
  return;
}



/* Entry: 10686a590; end: 10686a59b; -[SCMapCarouselPersonRowController heightForWidth:] */

undefined8 FUN_10686a590(void)

{
  return 0x4049000000000000;
}



/* Entry: 10686a59c; end: 10686a5db; -[SCMapCarouselPersonRowController setContentHidden:] */

void FUN_10686a59c(long param_1,undefined8 param_2,uint param_3)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1677c0((double)(param_3 ^ 1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10686a5dc; end: 10686a5f3; -[SCMapCarouselPersonRowController heightUpdatesObserver] */

void FUN_10686a5dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10686a5f4; end: 10686a5ff; -[SCMapCarouselPersonRowController setHeightUpdatesObserver:] */

void FUN_10686a5f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 10686a600; end: 10686a607; -[SCMapCarouselPersonRowController person] */

undefined8 FUN_10686a600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10686a608; end: 10686a7d3; -[SCMapCarouselPersonRowController .cxx_destruct] */

void FUN_10686a608(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 10686a7d4; end: 10686a84f;  */

double FUN_10686a7d4(double param_1,long param_2)

{
  double dVar1;
  
  _objc_retain();
  dVar1 = 18000.0;
  if ((param_2 != 0) && (func_0x00010bf01f00(param_2), param_1 < 30000.0)) {
    func_0x00010bf01f00(param_2);
    dVar1 = 500.0;
    if (500.0 <= param_1) {
      func_0x00010bf01f00(param_2);
      dVar1 = param_1;
    }
  }
  _objc_release(param_2);
  return dVar1;
}



/* Entry: 10686a850; end: 10686abc3; -[SCMapDeviceLocationController initWithLocationProvider:viewport:startAtDefaultAltitude:animationDuration:] */

undefined8 *
FUN_10686a850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_88 = PTR_PTR_1126f3898;
  puVar1 = &uStack_90;
  uStack_90 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_5);
    _objc_initWeak(auStack_98,puVar1);
    puVar4 = puVar1 + 4;
    _objc_loadWeakRetained();
    puVar5 = puVar4;
    func_0x00010c29f500();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10686abc4;
    puStack_a8 = &UNK_110858ee0;
    _objc_copyWeak(auStack_a0,auStack_98);
    puVar6 = puVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[6] = param_1;
    uVar10 = 0;
    uVar11 = 0;
    _CLLocationCoordinate2DMake(0,0);
    lVar7 = puVar1[1];
    uVar2 = uVar10;
    uVar9 = uVar11;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar8 = uVar2;
    if (lVar7 != 0) {
      uVar10 = puVar1[1];
      func_0x00010c09ea00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      uVar8 = uVar2;
      _objc_release(uVar10);
      uVar10 = uVar2;
      uVar11 = uVar9;
    }
    if ((param_6 & 1) == 0) {
      puVar4 = puVar1 + 4;
      _objc_loadWeakRetained(puVar4);
      puVar5 = puVar4;
      func_0x00010bf28e60();
      _objc_retainAutoreleasedReturnValue();
      FUN_10686a7d4();
      uVar2 = uVar8;
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    else {
      uVar2 = uVar8;
      uVar8 = 0x40d1940000000000;
    }
    puVar3 = PTR_PTR_1126c5a00;
    _objc_alloc();
    puVar4 = puVar1 + 4;
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fc7c0();
    func_0x00010bffd4e0(uVar10,uVar11,0,uVar2,uVar8);
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar8 = puVar1[1];
    func_0x00010c09f820();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c8,auStack_98);
    uVar2 = uVar8;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10686abc4; end: 10686ac0b;  */

void FUN_10686abc4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be333a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10686ac0c; end: 10686acb7;  */

void FUN_10686ac0c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10686acb8; end: 10686ace3;  */

void FUN_10686acb8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10686ace4; end: 10686ad0b; -[SCMapDeviceLocationController viewportTargetObservable] */

void FUN_10686ace4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10686ad0c; end: 10686ad33; -[SCMapDeviceLocationController camera] */

void FUN_10686ad0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10686ad34; end: 10686ad67; -[SCMapDeviceLocationController transition] */

void FUN_10686ad34(long param_1)

{
  _objc_alloc(PTR_PTR_1126b1e20);
  func_0x00010c00eb00(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10686ad68; end: 10686add7; -[SCMapDeviceLocationController shouldBeOverriddenByGestureRecognizer:] */

uint FUN_10686ad68(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
    _objc_opt_class(PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar3 = (uint)uVar2;
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_3);
  return uVar3 & 1;
}



/* Entry: 10686add8; end: 10686aed7; -[SCMapDeviceLocationController locationProviderDidUpdateLocation] */

void FUN_10686add8(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = auStack_38;
    _objc_initWeak(puVar2,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10686aed8; end: 10686b04f;  */

void FUN_10686aed8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x28) & 1) == 0)) {
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(lVar1 + 0x18);
    _objc_release();
    _objc_release(lVar2);
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == lVar7) {
      FUN_10686a7d4();
    }
    else {
      func_0x00010bf01f00();
    }
    uVar6 = param_1;
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126c5a00;
    _objc_alloc();
    func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x20));
    lVar2 = lVar1 + 0x20;
    uVar8 = uVar6;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fc7c0();
    func_0x00010bffd4e0(uVar6,param_2,0,uVar8,param_1);
    uVar6 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined **)(lVar1 + 0x18) = puVar5;
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x10),param_4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10686b050; end: 10686b0ff; -[SCMapDeviceLocationController _handleViewportChange:] */

void FUN_10686b050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x10686b108;
  puStack_20 = &UNK_1109449b0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10686b118;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bec60(param_3,param_2,&PTR___NSConcreteGlobalBlock_110944970,
                      &PTR___NSConcreteGlobalBlock_110944990,&puStack_38,&puStack_60,
                      &PTR___NSConcreteGlobalBlock_1109449e0,&PTR___NSConcreteGlobalBlock_110944a00,
                      &PTR___NSConcreteGlobalBlock_110944a20,&PTR___NSConcreteGlobalBlock_110944a40)
  ;
  return;
}



/* Entry: 10686b100; end: 10686b133;  */

void FUN_10686b100(void)

{
  return;
}



/* Entry: 10686b134; end: 10686b18f; -[SCMapDeviceLocationController .cxx_destruct] */

void FUN_10686b134(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10686b190; end: 10686b1db; +[SCMapCarouselSimpleSection sectionWithRows:] */

void FUN_10686b190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7380;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1eeb80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10686b1dc; end: 10686b22f; -[SCMapCarouselSimpleSection setRows:] */

void FUN_10686b1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10686b230; end: 10686b247; -[SCMapCarouselSimpleSection delegate] */

void FUN_10686b230(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10686b248; end: 10686b253; -[SCMapCarouselSimpleSection setDelegate:] */

void FUN_10686b248(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10686b254; end: 10686b25b; -[SCMapCarouselSimpleSection rows] */

undefined8 FUN_10686b254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10686b25c; end: 10686b287; -[SCMapCarouselSimpleSection .cxx_destruct] */

void FUN_10686b25c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10686b288; end: 10686b493; -[SCMapCarouselItemView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10686b288(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f38a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar4 = (long)_DAT_11275218c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4028000000000000);
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112752190);
    *(undefined **)((long)puVar1 + (long)_DAT_112752190) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112752194);
    *(undefined **)((long)puVar1 + (long)_DAT_112752194) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1b9b20(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112752198);
    *(undefined **)((long)puVar1 + (long)_DAT_112752198) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c202680(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10686b494; end: 10686b543; -[SCMapCarouselItemView resetToDefaults] */

void FUN_10686b494(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1734c0(param_1,param_2,0);
  func_0x00010c2194c0(param_1);
  func_0x00010c2165e0(param_1);
  func_0x00010c20f740(param_1);
  func_0x00010c214540(param_1);
  uVar1 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c260f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar1);
  func_0x00010c1d3960(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d29f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setOnLongPress__1126524a0,0);
  return;
}



/* Entry: 10686b544; end: 10686b553; -[SCMapCarouselItemView setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686b544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275218c),PTR_s_setBackgroundColor__112639330);
  return;
}



/* Entry: 10686b554; end: 10686b5e7; -[SCMapCarouselItemView setShowsShadow:] */

void FUN_10686b554(undefined *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b08d8;
  if (param_3 == 0) {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010085b3c8(0x4034000000000000,0x3fbeb851e0000000,0,0x3ff0000000000000,puVar1,param_1,
                        puVar2);
    param_1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10686b5e8; end: 10686b627; -[SCMapCarouselItemView showsShadow] */

bool FUN_10686b5e8(float param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a040();
  _objc_release(param_2);
  return 0.0 < param_1;
}



/* Entry: 10686b628; end: 10686b853; -[SCMapCarouselItemView setBottomAccessoryViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686b628(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar2 = &uStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar5 = (long)_DAT_11275219c;
  lVar3 = *(long *)(param_1 + lVar5);
  _objc_retain(lVar3);
  lVar7 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar7 != 0) {
    lVar6 = *plStack_1a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_1a8 + lVar8 * 8);
        uVar1 = param_3;
        func_0x00010bf4b900(param_3,param_2,uVar4);
        if ((uVar1 & 1) == 0) {
          func_0x00010c12c960(uVar4);
        }
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      lVar7 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(lVar3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(ulong *)(param_1 + lVar5) = uVar1;
  _objc_release(uVar4);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    lVar7 = *plStack_1e0;
    do {
      uVar9 = 0;
      do {
        if (*plStack_1e0 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar5 = *(long *)(lStack_1e8 + uVar9 * 8);
        lVar3 = lVar5;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = (long)_DAT_11275218c;
        lVar8 = *(long *)(param_1 + lVar6);
        _objc_release();
        if (lVar3 != lVar8) {
          func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6),param_2,lVar5);
        }
        func_0x00010c23d620(lVar5);
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar9);
      uVar1 = param_3;
      puVar2 = &uStack_1f0;
      func_0x00010bf52a60();
    } while (uVar1 != 0);
  }
  _objc_release(param_3);
  func_0x00010c23d620(*(undefined8 *)(param_1 + _DAT_11275218c));
  func_0x00010c1cbe20(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  lVar7 = (long)_DAT_1127521a0;
  func_0x00010c12c960(*(undefined8 *)(param_3 + lVar7));
  _objc_retain(puVar2);
  uVar4 = *(undefined8 *)(param_3 + lVar7);
  *(undefined8 **)(param_3 + lVar7) = puVar2;
  _objc_release(uVar4);
  if (*(long *)(param_3 + lVar7) != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_3 + (long)_DAT_11275218c));
  }
  func_0x00010c1cbe20(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10686b854; end: 10686b8cb; -[SCMapCarouselItemView setTrailingAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686b854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127521a0;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11275218c));
  }
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10686b8cc; end: 10686b943; -[SCMapCarouselItemView setThumbnailView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686b8cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127521a4;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11275218c),param_2,param_3);
  }
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10686b944; end: 10686b9bb; -[SCMapCarouselItemView setTitleTrailingAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686b944(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127521a8;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11275218c),param_2,
                        *(undefined8 *)(param_1 + lVar2));
  }
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10686b9bc; end: 10686ba33; -[SCMapCarouselItemView setSubtitleLeadingAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686b9bc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127521ac;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11275218c),param_2,param_3);
  }
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10686ba34; end: 10686bb0b; -[SCMapCarouselItemView setLayoutDensity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ba34(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(long *)(param_1 + _DAT_1127521b0) = param_3;
  uVar3 = 0x402c000000000000;
  if (param_3 != 1) {
    uVar3 = 0x4030000000000000;
  }
  uVar4 = 0x4024000000000000;
  if (param_3 != 1) {
    uVar4 = 0x4028000000000000;
  }
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(uVar3,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + _DAT_112752190));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(uVar4,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112752194;
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar2));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10686bb0c; end: 10686bb4b; -[SCMapCarouselItemView setStretchableBottomAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686bb0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127521b4);
  *(undefined8 *)(param_1 + _DAT_1127521b4) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10686bb4c; end: 10686bb5b; -[SCMapCarouselItemView setMainContentDefaultHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686bb4c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127521b8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10686bb5c; end: 10686bb97; -[SCMapCarouselItemView setBottomAccessoryView:isCollapsed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686bb5c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_112752198));
  }
  else {
    func_0x00010befa120();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10686bb98; end: 10686bcd7; -[SCMapCarouselItemView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10686bb98(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = param_1;
  func_0x00010be5b340();
  dVar7 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(param_3 + _DAT_11275219c);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_4,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        if (*(long *)(lStack_128 + lVar6 * 8) != *(long *)(param_3 + _DAT_1127521b4)) {
          dVar7 = param_1;
          func_0x00010be34fa0(param_3);
          dVar8 = dVar8 + dVar7;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      puVar3 = &uStack_130;
      func_0x00010bf52a60(lVar4,param_4,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar9._8_8_ = dVar8;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  uVar2 = *(ulong *)(lVar4 + _DAT_112752198);
  func_0x00010bf4b900(uVar2,param_4,puVar3);
  dVar8 = 0.0;
  if ((uVar2 & 1) == 0) {
    dVar8 = 3.4028234663852886e+38;
    func_0x00010c23d5a0(dVar7,0x47efffffe0000000,puVar3);
    func_0x00010b816218();
    param_2 = (double)(long)(dVar8 * dVar7);
    dVar8 = param_2 / dVar7;
  }
  _objc_release(puVar3);
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = dVar8;
  return auVar10;
}



/* Entry: 10686bcd8; end: 10686bd5b; -[SCMapCarouselItemView _heightForBottomAccessoryView:width:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10686bcd8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double dVar2;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_2 + _DAT_112752198);
  func_0x00010bf4b900(uVar1,param_3,param_4);
  dVar2 = 0.0;
  if ((uVar1 & 1) == 0) {
    dVar2 = 3.4028234663852886e+38;
    func_0x00010c23d5a0(param_1,0x47efffffe0000000,param_4);
    func_0x00010b816218();
    dVar2 = (double)(long)(dVar2 * param_1) / param_1;
  }
  _objc_release(param_4);
  return dVar2;
}



/* Entry: 10686bd5c; end: 10686bd9b; -[SCMapCarouselItemView _mainContentDefaultHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10686bd5c(long param_1)

{
  double dVar1;
  
  if (*(double *)(param_1 + _DAT_1127521b8) != 0.0) {
    return *(double *)(param_1 + _DAT_1127521b8);
  }
  dVar1 = 50.0;
  if (*(long *)(param_1 + _DAT_1127521b0) != 1) {
    dVar1 = 75.0;
  }
  return dVar1;
}



/* Entry: 10686bd9c; end: 10686c5d3; -[SCMapCarouselItemView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686bd9c(undefined8 param_1,undefined8 param_2,double param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_270 [48];
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined *puStack_1b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1b8 = PTR_PTR_1126f38a0;
  uStack_1c0 = param_4;
  _objc_msgSendSuper2(&uStack_1c0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  lVar9 = (long)_DAT_11275218c;
  func_0x00010c19f0e0(*(undefined8 *)(param_4 + lVar9));
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0(*(undefined8 *)(param_4 + (long)_DAT_1127521bc));
  dVar14 = 0.0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  lVar8 = (long)_DAT_11275219c;
  lVar7 = *(long *)(param_4 + lVar8);
  _objc_retain(lVar7);
  lVar10 = lVar7;
  func_0x00010bf52a60();
  dVar18 = 0.0;
  dVar19 = 0.0;
  if (lVar10 != 0) {
    lVar11 = *plStack_1f0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1f0 != lVar11) {
          _objc_enumerationMutation(lVar7);
        }
        if (*(long *)(lStack_1f8 + lVar12 * 8) != *(long *)(param_4 + (long)_DAT_1127521b4)) {
          func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar9));
          _CGRectGetWidth();
          func_0x00010be34fa0(param_4);
          dVar19 = dVar19 + dVar14;
        }
        lVar12 = lVar12 + 1;
      } while (lVar10 != lVar12);
      lVar10 = lVar7;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(lVar7);
  dVar14 = 0.0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  lVar7 = *(long *)(param_4 + lVar8);
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar8 = *plStack_230;
    dVar18 = 0.0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_230 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        lVar12 = *(long *)(lStack_238 + lVar11 * 8);
        uVar4 = *(ulong *)(param_4 + (long)_DAT_112752198);
        func_0x00010bf4b900();
        if (lVar12 == *(long *)(param_4 + (long)_DAT_1127521b4)) {
          dVar17 = 0.0;
          if ((uVar4 & 1) == 0) {
            func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar9));
            _CGRectGetHeight();
            dVar17 = dVar14;
            func_0x00010be5b340(param_4);
            dVar14 = dVar14 - dVar17;
            dVar17 = dVar14 - dVar19;
          }
        }
        else {
          func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar9));
          _CGRectGetWidth();
          func_0x00010be34fa0(param_4);
          dVar17 = dVar14;
        }
        func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar9));
        _CGRectGetWidth();
        dVar15 = 3.4028234663852886e+38;
        func_0x00010c23d5a0(lVar12);
        func_0x00010b816218();
        dVar16 = dVar14;
        func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar9));
        _CGRectGetHeight();
        dVar13 = dVar16;
        func_0x00010b816218();
        param_3 = (double)(long)(dVar16 * dVar13) / dVar13 - dVar18;
        dVar16 = param_3 - dVar17;
        func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar9));
        _CGRectGetWidth();
        if ((uint)uVar4 == 0) {
          func_0x00010c19f0e0(0,dVar16,param_3,dVar17,lVar12);
        }
        else {
          dVar13 = 0.0;
          func_0x00010c1739e0(0,0,param_3,(double)(long)(dVar15 * dVar14) / dVar14,lVar12);
          func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar9));
          _CGRectGetWidth();
          func_0x00010c17a6a0(dVar13 * 0.5,dVar16,lVar12);
          _CGAffineTransformMakeScale(auStack_270,0x3ff0000000000000,0x3fb999999999999a);
        }
        func_0x00010c219960(lVar12);
        dVar14 = (double)((uint)uVar4 ^ 1);
        func_0x00010c1677c0(lVar12);
        dVar18 = dVar18 + dVar17;
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
      lVar10 = lVar7;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(lVar7);
  dVar14 = 10.0;
  dVar19 = 6.0;
  if (*(long *)(param_4 + (long)_DAT_1127521b0) != 1) {
    dVar19 = 10.0;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar9));
  _CGRectGetWidth();
  dVar17 = (double)(ulong)(uint)(float)dVar14;
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar9));
  _CGRectGetHeight();
  dVar17 = (double)(float)(int)(dVar17 - dVar18);
  lVar10 = (long)_DAT_1127521a4;
  dVar18 = dVar19;
  if (*(long *)(param_4 + lVar10) != 0) {
    dVar16 = dVar17 + dVar19 * -2.0;
    dVar18 = *(double *)(param_4 + (long)_DAT_1127521c0);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (dVar18 < dVar16) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar18)) {
        bVar1 = dVar18 < 0.0;
        bVar2 = dVar18 == 0.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      dVar18 = dVar16;
    }
    param_3 = dVar18;
    func_0x00010c19f0e0(dVar19,(dVar17 - dVar18) * 0.5,dVar18,dVar18);
    dVar18 = dVar19 + dVar19 + dVar18;
  }
  lVar7 = (long)_DAT_1127521a0;
  dVar16 = dVar19;
  if (*(long *)(param_4 + lVar7) != 0) {
    func_0x00010bf20c00();
    func_0x00010c17a6a0(((double)(float)(int)dVar14 - dVar19) - param_3 * 0.5,dVar17 * 0.5,
                        *(undefined8 *)(param_4 + lVar7));
    dVar16 = param_3 + dVar19 * 2.0;
    if (dVar16 <= dVar19) {
      dVar16 = dVar19;
    }
  }
  dVar19 = (double)(float)(int)dVar14 - dVar18;
  dVar16 = dVar19 - dVar16;
  lVar8 = (long)_DAT_1127521a8;
  dVar14 = dVar16;
  if (*(long *)(param_4 + lVar8) != 0) {
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar14 = dVar16 - dVar19;
  }
  lVar9 = (long)_DAT_112752190;
  dVar15 = 0.0;
  dVar19 = dVar14;
  func_0x00010c23d5a0(dVar14,0,*(undefined8 *)(param_4 + lVar9));
  dVar13 = dVar19;
  if (dVar14 <= dVar19) {
    dVar13 = dVar14;
  }
  lVar11 = (long)_DAT_1127521ac;
  if (*(long *)(param_4 + lVar11) != 0) {
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar16 = dVar16 - (dVar19 + 4.0);
  }
  lVar12 = (long)_DAT_112752194;
  dVar19 = 0.0;
  dVar14 = dVar16;
  func_0x00010c23d5a0(dVar16,0,*(undefined8 *)(param_4 + lVar12));
  if (dVar16 <= dVar14) {
    dVar14 = dVar16;
  }
  dVar16 = dVar18;
  func_0x00010c19f0e0(dVar18,((dVar17 - dVar15) - dVar19) * 0.5,dVar13,dVar15,
                      *(undefined8 *)(param_4 + lVar9));
  if (*(long *)(param_4 + lVar8) != 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar9));
    _CGRectGetMaxX();
    dVar17 = dVar16;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar8));
    _CGRectGetWidth();
    dVar17 = dVar17 * 0.5;
    dVar16 = dVar16 + dVar17;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar9));
    _CGRectGetMidY();
    func_0x00010c17a6a0(dVar16,dVar17,*(undefined8 *)(param_4 + lVar8));
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar9));
  _CGRectGetMaxY();
  dVar13 = dVar16 + 2.0;
  dVar17 = dVar18;
  if (*(long *)(param_4 + lVar11) != 0) {
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar17 = dVar18 + dVar16 + 4.0;
  }
  func_0x00010c19f0e0(dVar17,dVar13,dVar14,dVar19,*(undefined8 *)(param_4 + lVar12));
  if (*(long *)(param_4 + lVar11) != 0) {
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar17 = dVar17 * 0.5;
    dVar18 = dVar18 + dVar17;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar12));
    _CGRectGetMidY();
    func_0x00010c17a6a0(dVar18,dVar17 + -1.0,*(undefined8 *)(param_4 + lVar11));
  }
  lVar9 = *(long *)(param_4 + lVar9);
  if (lVar9 != 0) {
    _objc_retain(lVar9);
    lVar5 = lVar9;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(lVar9);
    func_0x00010b816528();
    func_0x00010b8166f8(lVar5);
    func_0x00010c19f0e0(lVar9);
    _objc_release(lVar9);
    _objc_release(lVar5);
  }
  lVar9 = *(long *)(param_4 + lVar12);
  if (lVar9 != 0) {
    _objc_retain(lVar9);
    lVar12 = lVar9;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(lVar9);
    func_0x00010b816528();
    func_0x00010b8166f8(lVar12);
    func_0x00010c19f0e0(lVar9);
    _objc_release(lVar9);
    _objc_release(lVar12);
  }
  lVar10 = *(long *)(param_4 + lVar10);
  if (lVar10 != 0) {
    _objc_retain(lVar10);
    lVar9 = lVar10;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(lVar10);
    func_0x00010b816528();
    func_0x00010b8166f8(lVar9);
    func_0x00010c19f0e0(lVar10);
    _objc_release(lVar10);
    _objc_release(lVar9);
  }
  lVar10 = *(long *)(param_4 + lVar8);
  if (lVar10 != 0) {
    _objc_retain(lVar10);
    lVar8 = lVar10;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(lVar10);
    func_0x00010b816528();
    func_0x00010b8166f8(lVar8);
    func_0x00010c19f0e0(lVar10);
    _objc_release(lVar10);
    _objc_release(lVar8);
  }
  lVar10 = *(long *)(param_4 + lVar11);
  if (lVar10 != 0) {
    _objc_retain(lVar10);
    lVar8 = lVar10;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(lVar10);
    func_0x00010b816528();
    func_0x00010b8166f8(lVar8);
    func_0x00010c19f0e0(lVar10);
    _objc_release(lVar10);
    _objc_release(lVar8);
  }
  lVar10 = *(long *)(param_4 + lVar7);
  if (lVar10 != 0) {
    _objc_retain(lVar10);
    lVar7 = lVar10;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(lVar10);
    func_0x00010b816528();
    func_0x00010b8166f8(lVar7);
    func_0x00010c19f0e0(lVar10);
    _objc_release(lVar10);
    _objc_release(lVar7);
  }
  func_0x00010c23b340(param_4);
  func_0x00010c202680();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = param_4;
  func_0x00010be1c960();
  uVar6 = param_4;
  func_0x00010c0e6fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar6 == 0) || ((int)uVar4 == 0)) {
    uVar6 = param_4;
    func_0x00010c0e6ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar6 == 0 || (uVar4 & 1) != 0) {
      return;
    }
    func_0x00010c0e6ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0e6fc0();
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(param_4 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10686c5d4; end: 10686c687; -[SCMapCarouselItemView _tapped:] */

void FUN_10686c5d4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010be1c960();
  uVar2 = param_1;
  func_0x00010c0e6fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar2 == 0) || ((int)uVar1 == 0)) {
    uVar2 = param_1;
    func_0x00010c0e6ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 == 0 || (uVar1 & 1) != 0) {
      return;
    }
    func_0x00010c0e6ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0e6fc0();
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10686c688; end: 10686c71b; -[SCMapCarouselItemView _longPressed:] */

void FUN_10686c688(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 1) {
    uVar2 = param_1;
    func_0x00010c0e5040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((uVar2 != 0) &&
       (uVar2 = param_1, func_0x00010be1c960(param_1,param_2,param_3), (uVar2 & 1) == 0)) {
      func_0x00010c0e5040();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_1 + 0x10))();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10686c71c; end: 10686c7a7; -[SCMapCarouselItemView _gestureWithinBottomAccessory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10686c71c(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  
  _objc_retain(param_5);
  lVar4 = (long)_DAT_11275219c;
  lVar1 = *(long *)(param_3 + lVar4);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09f140(param_5,param_4,0,uVar2);
    bVar3 = 0.0 < param_2;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return bVar3;
}


