/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105181240; end: 105181247; -[SCOAuth2ApprovalDataModel oauth2ClientName] */

undefined8 FUN_105181240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105181248; end: 10518124f; -[SCOAuth2ApprovalDataModel redirectUrl] */

undefined8 FUN_105181248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105181250; end: 105181257; -[SCOAuth2ApprovalDataModel authServiceConsentRequired] */

undefined1 FUN_105181250(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105181258; end: 10518125f; -[SCOAuth2ApprovalDataModel loginValidateConsentRequired] */

undefined1 FUN_105181258(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105181260; end: 105181267; -[SCOAuth2ApprovalDataModel is1PA] */

undefined1 FUN_105181260(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105181268; end: 10518126f; -[SCOAuth2ApprovalDataModel appIconUrl] */

undefined8 FUN_105181268(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105181270; end: 105181277; -[SCOAuth2ApprovalDataModel scopesRequested] */

undefined8 FUN_105181270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105181278; end: 10518127f; -[SCOAuth2ApprovalDataModel clientId] */

undefined8 FUN_105181278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105181280; end: 105181287; -[SCOAuth2ApprovalDataModel sessionId] */

undefined8 FUN_105181280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105181288; end: 10518128f; -[SCOAuth2ApprovalDataModel codeVerifier] */

undefined8 FUN_105181288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105181290; end: 105181297; -[SCOAuth2ApprovalDataModel isScanFlow] */

undefined1 FUN_105181290(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 105181298; end: 10518129f; -[SCOAuth2ApprovalDataModel phoneNumberVerifyId] */

undefined8 FUN_105181298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1051812a0; end: 1051812a7; -[SCOAuth2ApprovalDataModel snapKitFeatures] */

undefined8 FUN_1051812a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1051812a8; end: 1051812af; -[SCOAuth2ApprovalDataModel requestIdHash] */

undefined8 FUN_1051812a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1051812b0; end: 10518134b; -[SCOAuth2ApprovalDataModel .cxx_destruct] */

void FUN_1051812b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10518134c; end: 10518146f; -[OAuth2PermissionCellViewModel initWithPermissionType:permissionDescription:bitmojiSelfieFetcher:imageProvider:isToggleable:isOn:permissionName:] */

undefined1 *
FUN_10518134c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6988;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105181470; end: 105181493; -[OAuth2PermissionCellViewModel copyWithZone:] */

undefined8 FUN_105181470(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105181494; end: 10518152f; -[OAuth2PermissionCellViewModel hash] */

undefined8 * FUN_105181494(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105181610:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10518161c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)((long)puVar3 + 8) == param_3[8])) && (*(char *)((long)puVar3 + 9) == param_3[9])
        ))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
            if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10518161c;
            }
            goto LAB_105181610;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10518161c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105181530; end: 105181637; -[OAuth2PermissionCellViewModel isEqual:] */

long FUN_105181530(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105181610:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10518161c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10518161c;
            }
            goto LAB_105181610;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10518161c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105181638; end: 10518163f; -[OAuth2PermissionCellViewModel permissionType] */

undefined8 FUN_105181638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105181640; end: 105181647; -[OAuth2PermissionCellViewModel permissionDescription] */

undefined8 FUN_105181640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105181648; end: 10518164f; -[OAuth2PermissionCellViewModel bitmojiSelfieFetcher] */

undefined8 FUN_105181648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105181650; end: 105181657; -[OAuth2PermissionCellViewModel imageProvider] */

undefined8 FUN_105181650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105181658; end: 10518165f; -[OAuth2PermissionCellViewModel isToggleable] */

undefined1 FUN_105181658(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105181660; end: 105181667; -[OAuth2PermissionCellViewModel isOn] */

undefined1 FUN_105181660(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105181668; end: 10518166f; -[OAuth2PermissionCellViewModel permissionName] */

undefined8 FUN_105181668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105181670; end: 1051816b7; -[OAuth2PermissionCellViewModel .cxx_destruct] */

void FUN_105181670(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1051816b8; end: 105181a1f; -[SCSnapKitIdentityWebViewEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051816b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar1 = param_1 + _DAT_11271e30c;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b57c8;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11271e310;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar2,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126b57d0;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11271e314;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c05c720(puVar6,param_2,lVar3,puVar2);
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126b57d8;
  _objc_alloc();
  lVar4 = lVar1;
  func_0x00010c27ece0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + _DAT_11271e318);
  lVar3 = param_1 + _DAT_11271e31c;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0575a0(puVar7,param_2,lVar4,uVar16,lVar5,*(undefined8 *)(param_1 + _DAT_11271e320));
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  puVar8 = PTR_PTR_1126b57e0;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11271e324;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  func_0x00010c241aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018080(puVar8,param_2,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar10 = PTR_PTR_1126b57e8;
  _objc_alloc();
  lVar5 = lVar1;
  func_0x00010c241a60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11271e328;
  _objc_loadWeakRetained();
  lVar11 = lVar3;
  func_0x00010bf8b8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271e32c;
  _objc_loadWeakRetained(lVar4);
  lVar13 = lVar4;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bec0(puVar10,param_2,lVar5,puVar6,lVar9,puVar7,lVar12,lVar14,puVar8);
  lVar15 = (long)_DAT_11271e330;
  uVar16 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar10;
  _objc_release(uVar16);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar5);
  func_0x00010bf192a0(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105181a20; end: 105181ac3; -[SCSnapKitIdentityWebViewEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105181a20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e320,0);
  _objc_storeStrong(param_1 + _DAT_11271e318,0);
  _objc_destroyWeak(param_1 + _DAT_11271e324);
  _objc_destroyWeak(param_1 + _DAT_11271e31c);
  _objc_destroyWeak(param_1 + _DAT_11271e32c);
  _objc_destroyWeak(param_1 + _DAT_11271e314);
  _objc_destroyWeak(param_1 + _DAT_11271e328);
  _objc_destroyWeak(param_1 + _DAT_11271e310);
  _objc_destroyWeak(param_1 + _DAT_11271e30c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e330,0);
  return;
}



/* Entry: 105181ac4; end: 105181b5b; -[SCSnapKitIWVGrapheneMetricsReporter initWithGraphene:] */

undefined1 * FUN_105181ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b57f0;
    func_0x00010c241ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105181b5c; end: 105181ba7; -[SCSnapKitIWVGrapheneMetricsReporter reportWorkflowStatus:] */

void FUN_105181b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2ac460(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8e18,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105181ba8; end: 105181c07; -[SCSnapKitIWVGrapheneMetricsReporter reportOpenUniversalLinkSuccess:] */

void FUN_105181ba8(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
  }
  func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc8e38,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105181c08; end: 105181c67; -[SCSnapKitIWVGrapheneMetricsReporter reportFetchConsentSuccess:] */

void FUN_105181c08(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
  }
  func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc8e58,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105181c68; end: 105181cc7; -[SCSnapKitIWVGrapheneMetricsReporter reportUpdateConsentSuccess:] */

void FUN_105181c68(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
  }
  func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc8e78,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105181cc8; end: 105181d13; -[SCSnapKitIWVGrapheneMetricsReporter reportFetchHeadersStatus:] */

void FUN_105181cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2ac460(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8e98,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105181d14; end: 105181d5f; -[SCSnapKitIWVGrapheneMetricsReporter reportWebBrowserPresentationStatus:] */

void FUN_105181d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2ac460(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8eb8,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105181d60; end: 105181dab; -[SCSnapKitIWVGrapheneMetricsReporter reportAuthModalPresentationStatus:] */

void FUN_105181d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2ac460(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8ed8,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105181dac; end: 105181df7; -[SCSnapKitIWVGrapheneMetricsReporter reportEditNameModalPresentationStatus:] */

void FUN_105181dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2ac460(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8ef8,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105181df8; end: 105181e27; -[SCSnapKitIWVGrapheneMetricsReporter .cxx_destruct] */

void FUN_105181df8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105181e28; end: 105181eab; -[SCSnapKitIdentityWebViewAppStateController initWithDocObjectContext:] */

undefined1 * FUN_105181e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6998;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b57f8;
    _objc_alloc();
    func_0x00010c00d820();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105181eac; end: 105181f63; -[SCSnapKitIdentityWebViewAppStateController isAuthorizedForIdentityWebViewWithAppId:] */

bool FUN_105181eac(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010bfa7800();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar4 = false;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c0883c0(lVar1);
    func_0x00010c052380(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar3);
    bVar4 = param_1 <= 7776000.0;
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return bVar4;
}



/* Entry: 105181f64; end: 1051820db; -[SCSnapKitIdentityWebViewAppStateController authorizeIdentityWebViewForAppId:completion:] */

void FUN_105181f64(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfa7800(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b5800;
    _objc_alloc(PTR_PTR_1126b5800);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010bff39e0(puVar2,param_2,param_3);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1051820dc;
    puStack_50 = &UNK_110842508;
    puStack_48 = param_4;
    _objc_retain(param_4);
    func_0x00010c1a9b60(uVar4,param_2,puVar2,&puStack_68);
    _objc_release(puStack_48);
    puVar3 = param_4;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x1051820e8;
    puStack_78 = &UNK_110842508;
    puStack_70 = param_4;
    _objc_retain(param_4);
    func_0x00010c125360(uVar4,param_2,lVar1,&puStack_90);
    puVar3 = puStack_70;
    puVar2 = param_4;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1051820dc; end: 1051820f3;  */

void FUN_1051820dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001051820e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1051820f4; end: 1051820ff; -[SCSnapKitIdentityWebViewAppStateController .cxx_destruct] */

void FUN_1051820f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105182100; end: 1051821a3; -[SCSnapKitIdentityWebViewService initWithUserNetworkServices:appStateController:] */

undefined1 *
FUN_105182100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e69a0;
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



/* Entry: 1051821a4; end: 1051821ab; -[SCSnapKitIdentityWebViewService hasAuthorizedIdentityWebViewForAppId:] */

void FUN_1051821a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_isAuthorizedForIdentityWebViewWi_1125f8cd0);
  return;
}



/* Entry: 1051821ac; end: 105182243; -[SCSnapKitIdentityWebViewService updateAuthorizedIdentityWebViewForAppId:completion:] */

void FUN_1051821ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105182244;
  puStack_40 = &UNK_110842508;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bf11080(uVar1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 105182244; end: 10518224f;  */

void FUN_105182244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010518224c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105182250; end: 1051823db; -[SCSnapKitIdentityWebViewService fetchIdentityWebBrowserHeadersForAppId:didPresentAuthModal:completion:] */

void FUN_105182250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bdee700(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  func_0x00010c25f600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1051823dc; end: 105182467;  */

void FUN_1051823dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be36d00();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105182468; end: 1051825eb; -[SCSnapKitIdentityWebViewService fetchConsentForAppId:completion:] */

void FUN_105182468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdec460(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  func_0x00010c25f600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051825ec; end: 105182677;  */

void FUN_1051825ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde6460();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105182678; end: 1051827e7; -[SCSnapKitIdentityWebViewService _createHeadersFetchRequestWithAppId:didPresentAuthModal:] */

void FUN_105182678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126b5808;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204980();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c1a61c0(puVar1,param_2,param_4);
  func_0x000108ecef0c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde6b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc0000000;
  pcStack_68 = FUN_1051827e8;
  puStack_60 = &UNK_11086d690;
  uStack_58 = 6;
  uVar6 = uVar4;
  func_0x00010bf225e0(uVar4,param_2,1,puVar2,param_1,puVar5,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1051827e8; end: 1051827f3;  */

void FUN_1051827e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c290a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_useSnapTokenHeaderWithAccessType_112681cb8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1051827f4; end: 1051829fb; -[SCSnapKitIdentityWebViewService _identityHeadersFetchRequestCompleted:data:error:completion:] */

void FUN_1051827f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c252ee0();
  if (param_3 == 200) {
    puVar1 = PTR_PTR_1126b5810;
    _objc_alloc();
    func_0x00010c008360();
    if (puVar1 == (undefined *)0x0) {
      (**(code **)(param_6 + 0x10))(param_6,PTR____NSDictionary0__struct_11034ab58);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      puVar3 = puVar1;
      func_0x00010c124e60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c08fa60();
      _objc_release(puVar3);
      if (puVar4 != (undefined *)0x0) {
        puVar3 = puVar1;
        func_0x00010c124e60(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar2);
        _objc_release(puVar3);
      }
      puVar3 = puVar1;
      func_0x00010beec440();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c08fa60();
      _objc_release(puVar3);
      if (puVar4 != (undefined *)0x0) {
        puVar3 = puVar1;
        func_0x00010beec440(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar2);
        _objc_release(puVar3);
      }
      puVar3 = puVar1;
      func_0x00010bf1ae00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c08fa60();
      _objc_release(puVar3);
      if (puVar4 != (undefined *)0x0) {
        puVar3 = puVar1;
        func_0x00010bf1ae00(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar2);
        _objc_release(puVar3);
      }
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_alloc(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x00010c00c560();
      (**(code **)(param_6 + 0x10))(param_6,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  else {
    (**(code **)(param_6 + 0x10))(param_6,PTR____NSDictionary0__struct_11034ab58);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051829fc; end: 105182b77; -[SCSnapKitIdentityWebViewService _createConsentFetchRequestForAppId:] */

void FUN_1051829fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x000108ecefb4();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde6b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf225e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105182b78; end: 105182bc7;  */

void FUN_105182b78(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105182bc8; end: 105182d23; -[SCSnapKitIdentityWebViewService _consentFetchRequestCompleted:data:error:completion:] */

void FUN_105182bc8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c252ee0();
  if (param_3 == 200) {
    puVar1 = PTR_PTR_1126b5818;
    _objc_alloc();
    func_0x00010c008360();
    if ((puVar1 == (undefined *)0x0) ||
       (puVar2 = puVar1, func_0x00010bfd5a20(), puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770,
       ((ulong)puVar2 & 1) == 0)) {
      (**(code **)(param_6 + 0x10))(param_6,1,0);
    }
    else {
      puVar2 = puVar1;
      func_0x00010c0887c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c1552c0();
      dVar5 = (double)(long)puVar3;
      func_0x00010bf655e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar2);
      (**(code **)(param_6 + 0x10))(param_6,1,dVar5 <= 7776000.0);
      _objc_release(puVar4);
    }
    _objc_release(puVar1);
  }
  else {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105182d24; end: 105182dd3; -[SCSnapKitIdentityWebViewService _constructHeaders] */

void FUN_105182d24(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108ed0900();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105182dd4; end: 105182e03; -[SCSnapKitIdentityWebViewService .cxx_destruct] */

void FUN_105182dd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105182e04; end: 105182eff; -[SCSnapKitIdentityWebViewRouter initWithUIContainer:webBrowserScopeExposer:circumstanceEngine:editDisplayNameScopeExposer:] */

undefined1 *
FUN_105182e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e69a8;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105182f00; end: 105182f4b; -[SCSnapKitIdentityWebViewRouter showRootViewController] */

void FUN_105182f00(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5820;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1c8b80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_attachUI__1125a0c08,*(undefined8 *)(param_1 + 0x20))
  ;
  return;
}



/* Entry: 105182f4c; end: 105182fe7; -[SCSnapKitIdentityWebViewRouter showAuthorizationModalWithIdentityWebViewConfig:delegate:imageSourceProvider:] */

void FUN_105182f4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5828;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01bea0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c10b320(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105182fe8; end: 10518318b; -[SCSnapKitIdentityWebViewRouter showWebBrowserWithWebBrowserConfig:delegate:] */

void FUN_105182fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10518318c;
  puStack_68 = &UNK_11086d6e0;
  uVar3 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar2,param_2,&puStack_80,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar4 = PTR_PTR_1126b5830;
  _objc_alloc(PTR_PTR_1126b5830);
  func_0x00010bffe5c0();
  puVar5 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar6 = puVar5;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 10518318c; end: 10518320b;  */

void FUN_10518318c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (param_3 == 0)) {
    lVar2 = *(long *)(param_1 + 0x20);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x30);
    *(long *)(lVar2 + 0x30) = param_2;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf9c2c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c520(param_2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10518320c; end: 10518338b; -[SCSnapKitIdentityWebViewRouter showErrorMessageWithCompletion:] */

void FUN_10518320c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108ed0710();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000108ed06f8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105183394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 10518338c; end: 105183397;  */

void FUN_10518338c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105183394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105183398; end: 1051835c3; -[SCSnapKitIdentityWebViewRouter showDisplayNameMissingMessageWithDelegate:] */

void FUN_105183398(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126aed70;
  puVar5 = auStack_80;
  _objc_copyWeak(auStack_88,puVar5);
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar1;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  func_0x00010bf84b00(puVar5);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010c2372e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051835c4; end: 10518364b;  */

void FUN_1051835c4(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2372e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518364c; end: 1051836db; -[SCSnapKitIdentityWebViewRouter showEditDisplayNameWithDelegate:] */

void FUN_10518364c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126b4388;
  _objc_alloc(PTR_PTR_1126b4388);
  func_0x00010c056640();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051836dc; end: 1051836e7; -[SCSnapKitIdentityWebViewRouter dismissRootViewController] */

void FUN_1051836dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1051836e8; end: 1051836ef; -[SCSnapKitIdentityWebViewRouter dismissAuthorizationModal] */

void FUN_1051836e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissAuthorizationModal_1125be630);
  return;
}



/* Entry: 1051836f0; end: 105183747; -[SCSnapKitIdentityWebViewRouter dismissWebBrowser] */

void FUN_1051836f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bf843d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissRootViewController_1125bea98);
    return;
  }
  return;
}



/* Entry: 105183748; end: 10518378f; -[SCSnapKitIdentityWebViewRouter dismissEditDisplayName] */

void FUN_105183748(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105183790; end: 1051839ab; -[SCSnapKitIdentityWebViewRouter showInterstitialDeeplinkAlert:url:] */

void FUN_105183790(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc8ff8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc8ff8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc9018;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9018,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dc9038;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9038,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 1051839ac; end: 105183a9f;  */

void FUN_1051839ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105183aa0; end: 105183aaf;  */

void FUN_105183aa0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105183ab0; end: 105183b0f; -[SCSnapKitIdentityWebViewRouter .cxx_destruct] */

void FUN_105183ab0(long param_1)

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



/* Entry: 105183b10; end: 105183bab; -[SCSnapKitIdentityWebViewURLInterceptor initWithCircumstanceEngine:delegate:] */

undefined1 *
FUN_105183b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e69b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105183bac; end: 105183c37; -[SCSnapKitIdentityWebViewURLInterceptor interceptURL:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:completion:] */

long FUN_105183bac(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    param_1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x000108b8fb14(param_3,*(undefined8 *)(param_1 + 8));
    if ((uVar1 & 1) == 0) {
      func_0x00010be45000(param_1);
    }
    func_0x00010be6d820(param_1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105183c38; end: 105183dcf; -[SCSnapKitIdentityWebViewURLInterceptor _openURL:universalLinksOnly:allowAlertView:] */

uint FUN_105183c38(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_5 != 0) {
    uVar1 = param_1;
    func_0x00010bed1400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfe4420(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf4b900(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (((uVar3 & 1) != 0) || ((int)param_4 == 0)) {
      lVar7 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c237f00();
      _objc_release(lVar7);
      uVar8 = 1;
      goto LAB_105183d90;
    }
  }
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  param_4 = param_3;
  func_0x00010c0e9b80(puVar4,param_2,param_3,puVar6,0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar8 = 0;
LAB_105183d90:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar8;
  }
  ___stack_chk_fail();
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110dc8d78);
    uVar8 = (uint)uVar1 ^ 1;
  }
  else {
    uVar8 = 0;
  }
  _objc_release(param_4);
  return uVar8;
}



/* Entry: 105183dd0; end: 105183e33; -[SCSnapKitIdentityWebViewURLInterceptor _isUrlSchemeDeeplink:] */

uint FUN_105183dd0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc8d78);
    uVar2 = (uint)uVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105183e34; end: 105183e97; -[SCSnapKitIdentityWebViewURLInterceptor _universalLinkExceptionList] */

void FUN_105183e34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc9058,
                      &PTR____CFConstantStringClassReference_110dc9078,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105183e98; end: 105183eaf; -[SCSnapKitIdentityWebViewURLInterceptor interceptorDelegate] */

void FUN_105183e98(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105183eb0; end: 105183ebb; -[SCSnapKitIdentityWebViewURLInterceptor setInterceptorDelegate:] */

void FUN_105183eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105183ebc; end: 105183ed3; -[SCSnapKitIdentityWebViewURLInterceptor interceptorDataSource] */

void FUN_105183ebc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105183ed4; end: 105183edf; -[SCSnapKitIdentityWebViewURLInterceptor setInterceptorDataSource:] */

void FUN_105183ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 105183ee0; end: 105183f1b; -[SCSnapKitIdentityWebViewURLInterceptor .cxx_destruct] */

void FUN_105183ee0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105183f1c; end: 105184043; -[SCSnapKitIdentityWebViewAuthPermissionViewController initWithIdentityWebViewConfig:identityWebViewAuthorizationModalDelegate:imageSourceProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105183f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e69b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271e370;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271e374),param_4);
    lVar4 = (long)_DAT_11271e378;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b5838;
    _objc_alloc();
    func_0x00010c01be80();
    lVar4 = (long)_DAT_11271e37c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105184044; end: 105184393; -[SCSnapKitIdentityWebViewAuthPermissionViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105184044(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126e69b8;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  lVar1 = param_1 + _DAT_11271e374;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfe6240();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11271e37c;
  func_0x00010befbb60();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf2dfc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_a8 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  uStack_b8 = uVar2;
  uStack_88 = uVar2;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_c8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  uStack_80 = uVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  uStack_78 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_d0);
  _objc_release(lStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  _objc_release(lStack_b0);
  _objc_release(lStack_a0);
  uVar2 = uStack_a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_105184394;
  puStack_f8 = PTR_PTR_1126e69b8;
  uStack_100 = uVar2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_100,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 105184394; end: 1051843c7; -[SCSnapKitIdentityWebViewAuthPermissionViewController viewDidLoad] */

void FUN_105184394(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e69b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 1051843c8; end: 10518441b; +[SCSnapKitIdentityWebViewAuthPermissionViewController trayHeightPercentage] */

double FUN_1051843c8(void)

{
  undefined *puVar1;
  double in_d3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  return 530.0 / in_d3;
}



/* Entry: 10518441c; end: 10518467b; -[SCSnapKitIdentityWebViewAuthPermissionViewController prepareAuthModalWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518441c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08a8;
  _objc_alloc(PTR_PTR_1126b08a8);
  puVar3 = PTR_PTR_1126b08b0;
  lVar6 = (long)_DAT_11271e370;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf052c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003ac0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271e378);
  puVar3 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf052c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295e0(puVar3);
  func_0x00010bf55f20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11271e380;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = uVar5;
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar6 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  _objc_release(lVar6);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bfa78e0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10518467c; end: 1051846ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518467c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11271e37c);
    func_0x00010bfe5760(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105184700; end: 105184733; -[SCSnapKitIdentityWebViewAuthPermissionViewController _didPressContinueButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105184700(long param_1)

{
  param_1 = param_1 + _DAT_11271e374;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe6200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105184734; end: 105184767; -[SCSnapKitIdentityWebViewAuthPermissionViewController _didPressCancelButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105184734(long param_1)

{
  param_1 = param_1 + _DAT_11271e374;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe6220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105184768; end: 1051847a7; -[SCSnapKitIdentityWebViewAuthPermissionViewController tray:positionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105184768(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
    param_1 = param_1 + _DAT_11271e374;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfe6220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1051847a8; end: 1051847af; -[SCSnapKitIdentityWebViewAuthPermissionViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_1051847a8(void)

{
  return 1;
}



/* Entry: 1051847b0; end: 10518481b; -[SCSnapKitIdentityWebViewAuthPermissionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051847b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e37c,0);
  _objc_storeStrong(param_1 + _DAT_11271e380,0);
  _objc_storeStrong(param_1 + _DAT_11271e378,0);
  _objc_destroyWeak(param_1 + _DAT_11271e374);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e370,0);
  return;
}



/* Entry: 10518481c; end: 1051848ab; -[SCSnapKitIdentityWebViewRootViewController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10518481c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e69c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar4 = (long)_DAT_11271e384;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1a8560(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}


