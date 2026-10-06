/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067ffb7c; end: 1067ffccb; -[SCActiveUserNGSNavigationRouter _routeActivityFeedWithNotification:] */

void FUN_1067ffb7c(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  lVar6 = *(long *)(param_1 + 0x318);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar7;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = uVar2;
    func_0x00010c0720c0();
    iVar1 = (int)uVar3;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0dbde0();
  _objc_release(uVar8);
  if (((int)uVar9 == 0) || (iVar1 == 0)) {
    func_0x00010be97a80(param_1);
  }
  else {
    func_0x00010beba0a0(param_1);
  }
  _objc_release(lVar7);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067ffccc; end: 1067ffd6b; -[SCActiveUserNGSNavigationRouter _routeToProfileManagementPageWithNotification:] */

void FUN_1067ffccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc130;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  _CACurrentMediaTime();
  func_0x00010c04ac20(puVar1,param_2,&PTR____CFConstantStringClassReference_110f5a2b8,0xc);
  func_0x00010be048a0(param_1,param_2,1,param_3,puVar1,0,0,0,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067ffd6c; end: 1067ffe73; -[SCActiveUserNGSNavigationRouter showProfileManagementWithProfile] */

void FUN_1067ffd6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  uVar2 = *(undefined8 *)(param_1 + 0x318);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108f04d74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030320(puVar1,param_2,uVar4,2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126cc130;
  _objc_alloc(PTR_PTR_1126cc130);
  _CACurrentMediaTime();
  func_0x00010c04ac20(puVar5,param_2,&PTR____CFConstantStringClassReference_110f5a2b8,0xc);
  func_0x00010be048a0(param_1,param_2,1,puVar1,puVar5,0,0,0,0);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067ffe74; end: 1067fffab; -[SCActiveUserNGSNavigationRouter routeForInteractiveStickersWithNotification:] */

void FUN_1067ffe74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + 0x460;
  _objc_loadWeakRetained(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x290);
  param_1 = param_1 + 0x468;
  _objc_loadWeakRetained(param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1067fffac;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  FUN_10684adfc(param_3,lVar1,lVar2,lVar3,uVar4,param_1,&puStack_80);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1067fffac; end: 1067fffeb;  */

void FUN_1067fffac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be048c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067fffec; end: 106800087; -[SCActiveUserNGSNavigationRouter showSettingsDeepLinkURL:] */

void FUN_1067fffec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ce518;
  func_0x00010c13af00();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106800088;
  puStack_40 = &UNK_110844b80;
  uStack_38 = param_1;
  uStack_30 = param_3;
  puStack_28 = puVar1;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 106800088; end: 1068002df;  */

void FUN_106800088(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x140);
  func_0x000108fab270();
  lVar6 = *(long *)(param_1 + 0x30);
  if (iVar1 == 0) {
    switch(lVar6) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00010bebbbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showUsernameSettings_11258c890);
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x00010beba450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showPasswordSettings_11258c2b8);
      return;
    case 2:
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = 0;
      break;
    case 3:
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = 1;
      break;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x00010beb8790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showContactSupportSettings_11258bb88);
      return;
    case 5:
                    /* WARNING: Could not recover jumptable at 0x00010bebad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showSessionManagementSettings_11258c508);
      return;
    case 6:
                    /* WARNING: Could not recover jumptable at 0x00010bebb530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showSupportSettings_11258c6f0);
      return;
    case 7:
                    /* WARNING: Could not recover jumptable at 0x00010beba490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showPendingInvitationsSettings_11258c2c8);
      return;
    case 8:
                    /* WARNING: Could not recover jumptable at 0x00010beba530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showPhoneSettings_11258c2f0);
      return;
    case 9:
code_r0x0001068000c4:
                    /* WARNING: Could not recover jumptable at 0x00010beba3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showPasskeyManagementSettings_11258c2a0);
      return;
    case 10:
code_r0x000106800144:
                    /* WARNING: Could not recover jumptable at 0x00010beb7f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showBirthdaySettings_11258b970);
      return;
    case 0xb:
                    /* WARNING: Could not recover jumptable at 0x00010bebadb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showSettings_11258c510);
      return;
    default:
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bebb370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar3,PTR_s__showStickersExtensionSettingsWi_11258c680,uVar5);
    return;
  }
  if (lVar6 == 10) {
    lVar6 = *(long *)(param_1 + 0x20) + 0xa8;
    _objc_loadWeakRetained();
    lVar2 = lVar6;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar2 != 0) goto code_r0x000106800144;
    lVar6 = *(long *)(param_1 + 0x30);
  }
  else if (lVar6 == 9) goto code_r0x0001068000c4;
  puVar4 = PTR_PTR_1126ce4f8;
  if (lVar6 == 7) {
    func_0x00010c0f7740();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfa1820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2281c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  func_0x00010be048a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1068002e0; end: 1068003bf; -[SCActiveUserNGSNavigationRouter _showSettings] */

void FUN_1068002e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  func_0x00010be048c0(param_1,param_2,0,0,0,0,0);
  lVar1 = param_1;
  func_0x00010be5c5c0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bf22f40(uVar3,param_2,param_1,0,lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0xa8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068003c0; end: 1068005b3; -[SCActiveUserNGSNavigationRouter _showPasskeyManagementSettings] */

void FUN_1068003c0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar1 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  uVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (uVar4 != 0) {
    uVar5 = uVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar4 = uVar5;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar3 = uVar5;
  }
  uVar4 = uVar3;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    puVar9 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar9);
    if (((uVar4 & 1) == 0) || (_objc_retain(uVar3), uVar4 = uVar3, uVar3 == 0)) goto LAB_106800598;
  }
  puVar9 = PTR_PTR_1126aead0;
  _objc_alloc();
  func_0x00010c02e500();
  if (puVar9 != (undefined *)0x0) {
    puVar6 = PTR_PTR_1126aeae0;
    func_0x00010c15f9e0(PTR_PTR_1126aeae0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b3e80;
    func_0x00010c27c3a0(PTR_PTR_1126b3e80);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bf22f40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0xa8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar9);
  _objc_release(uVar4);
LAB_106800598:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1068005b4; end: 1068005bb;  */

undefined8 FUN_1068005b4(void)

{
  return 1;
}



/* Entry: 1068005bc; end: 106800683; -[SCActiveUserNGSNavigationRouter _showUsernameSettings] */

void FUN_1068005bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  func_0x00010bebada0(param_1);
  lVar1 = param_1;
  func_0x00010be5c5c0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126aeb00;
    _objc_alloc(PTR_PTR_1126aeb00);
    func_0x00010c00afc0();
    param_1 = param_1 + 0xb8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106800684; end: 10680074b; -[SCActiveUserNGSNavigationRouter _showPasswordSettings] */

void FUN_106800684(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0xc0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  func_0x00010bebada0(param_1);
  lVar1 = param_1;
  func_0x00010be5c5c0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 200);
    func_0x00010bf24220(uVar3,param_2,lVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0xc0;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10680074c; end: 106800827; -[SCActiveUserNGSNavigationRouter _showStickersExtensionSettingsWithType:] */

void FUN_10680074c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x410) != 0) {
    return;
  }
  func_0x00010bebada0();
  lVar1 = param_1;
  func_0x00010be5c5c0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b4550;
    _objc_alloc(PTR_PTR_1126b4550);
    func_0x00010c058340();
    lVar3 = param_1 + 0xd0;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x410);
    *(long *)(param_1 + 0x410) = lVar5;
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c10ae00(*(undefined8 *)(param_1 + 0x410));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106800828; end: 1068008ff; -[SCActiveUserNGSNavigationRouter _showContactSupportSettings] */

void FUN_106800828(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  func_0x00010bebada0(param_1);
  lVar1 = param_1;
  func_0x00010be5c5c0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0xe0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf24220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    param_1 = param_1 + 0xd8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106800900; end: 1068009d7; -[SCActiveUserNGSNavigationRouter _showSessionManagementSettings] */

void FUN_106800900(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0xe8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  func_0x00010bebada0(param_1);
  lVar1 = param_1;
  func_0x00010be5c5c0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0xf0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf24220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    param_1 = param_1 + 0xe8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068009d8; end: 106800aff; -[SCActiveUserNGSNavigationRouter _showSupportSettings] */

void FUN_1068009d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1 + 0xf8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010bebada0(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x140);
    func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110dc3ef8,0,0);
    if ((int)uVar3 != 0) {
      lVar1 = param_1;
      func_0x00010be5c5c0(param_1,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        puVar4 = PTR_PTR_1126b4558;
        _objc_alloc(PTR_PTR_1126b4558);
        lVar2 = param_1 + 0x20;
        _objc_loadWeakRetained(lVar2);
        lVar5 = lVar2;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c056fe0(puVar4,param_2,lVar1,lVar5,param_1);
        _objc_release(lVar5);
        _objc_release(lVar2);
        param_1 = param_1 + 0xf8;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf9d620();
        _objc_release(param_1);
        _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar1);
        return;
      }
    }
  }
  return;
}



/* Entry: 106800b00; end: 106800c33; -[SCActiveUserNGSNavigationRouter _showPendingInvitationsSettings] */

void FUN_106800b00(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x2d0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x2d0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bebada0(param_1);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2a14c0(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106800c34; end: 106800c83;  */

void FUN_106800c34(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beba4a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106800c84; end: 106800e87; -[SCActiveUserNGSNavigationRouter _showPendingInvitationsWithHandlers:] */

void FUN_106800c84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be5c5c0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = param_3;
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    uVar9 = 0;
    if (lVar3 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar2);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar4 = uVar9;
          func_0x00010bf25020();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c291840();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c074e40();
          _objc_release(uVar5);
          _objc_release(uVar4);
          if ((int)uVar6 != 0) {
            func_0x00010bf25020(uVar9);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106800dcc;
          }
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar3 != 0);
      uVar9 = 0;
    }
LAB_106800dcc:
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126b0f38;
    _objc_alloc();
    func_0x00010c0581c0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x2d0),param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar9);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_3 + 0x128;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010bebada0(param_3);
    lVar1 = param_3;
    func_0x00010be5c5c0(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar9 = *(undefined8 *)(param_3 + 0x130);
      func_0x00010bf24220(uVar9,param_2,lVar1,param_3);
      _objc_retainAutoreleasedReturnValue();
      param_3 = param_3 + 0x128;
      _objc_loadWeakRetained(param_3);
      func_0x00010bf9d620();
      _objc_release(param_3);
      _objc_release(uVar9);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106800e88; end: 106800f4f; -[SCActiveUserNGSNavigationRouter _showPhoneSettings] */

void FUN_106800e88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x128;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  func_0x00010bebada0(param_1);
  lVar1 = param_1;
  func_0x00010be5c5c0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010bf24220(uVar3,param_2,lVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x128;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106800f50; end: 10680108f; -[SCActiveUserNGSNavigationRouter _showBirthdaySettings] */

void FUN_106800f50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be6f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pageLaunchBirthdaySettingsOnPro_112579670)
    ;
    return;
  }
  func_0x00010be048c0(param_1);
  lVar1 = param_1;
  func_0x00010be5c5c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126aeae0;
    func_0x00010beed6c0(PTR_PTR_1126aeae0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3e80;
    func_0x00010c27c3a0(PTR_PTR_1126b3e80);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bf22f40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0xa8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106801090; end: 106801137; -[SCActiveUserNGSNavigationRouter _pageLaunchBirthdaySettingsOnProfileNavigation] */

void FUN_106801090(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010be5c5c0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b0ea8;
    _objc_opt_new(PTR_PTR_1126b0ea8);
    puVar3 = PTR_PTR_1126b5510;
    _objc_opt_new(PTR_PTR_1126b5510);
    func_0x00010c170540(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x340);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c020();
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106801138; end: 106801247; -[SCActiveUserNGSNavigationRouter _makeUIContainerForProfileNavigation:] */

void FUN_106801138(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126aead0;
    _objc_alloc(PTR_PTR_1126aead0);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e500(puVar5);
    _objc_release(lVar4);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106801248; end: 10680124f;  */

undefined1 FUN_106801248(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 106801250; end: 10680131b; -[SCActiveUserNGSNavigationRouter showPlusDeepLinkURL:] */

void FUN_106801250(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x2e8) != 0) {
    return;
  }
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5e4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  lVar3 = param_1 + 0x2e0;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf23cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x2e8);
  *(long *)(param_1 + 0x2e8) = lVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  func_0x00010bfcff40(*(undefined8 *)(param_1 + 0x2e8));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10680131c; end: 106801443; -[SCActiveUserNGSNavigationRouter showMapInteractivelyWithAttribution:destination:completion:] */

void FUN_10680131c(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == (undefined *)0x0) {
    param_4 = PTR_PTR_1126b5c58;
    func_0x00010bf6a9e0(PTR_PTR_1126b5c58);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = param_4;
  FUN_106875498(param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x340);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  uVar3 = uVar2;
  func_0x00010c08b960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106801444; end: 106801457;  */

void FUN_106801444(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106801450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106801458; end: 10680148b;  */

void FUN_106801458(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec0b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10680148c; end: 106801617; -[SCActiveUserNGSNavigationRouter _startObservingMapTabTooltipIfNeeded] */

void FUN_10680148c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 1000;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0ba300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c081ca0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + 0x3f0;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0b9560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c273fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 106801618; end: 10680166f;  */

void FUN_106801618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010bf1f3c0(), (int)uVar1 != 0)) {
    func_0x00010be7c5c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106801670; end: 106801783; -[SCActiveUserNGSNavigationRouter _presentMapTabTooltip] */

void FUN_106801670(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126aeec0;
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126bf070;
  func_0x00010c0d68e0(PTR_PTR_1126bf070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf0cac0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106801784; end: 1068017b7;  */

void FUN_106801784(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb9ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068017b8; end: 1068018eb; -[SCActiveUserNGSNavigationRouter _showMapTabTooltip] */

void FUN_1068017b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 400);
  func_0x00010c0e00e0(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c71b0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c0d6580(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x3f0;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0b9560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c274060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c10e960(0x4008000000000000,lVar2,param_2,lVar6,0,0,param_1);
    param_1 = param_1 + 0x3f0;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c0b9560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123b20();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar6);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068018ec; end: 10680193f; -[SCActiveUserNGSNavigationRouter tooltipDidDismiss:] */

void FUN_1068018ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 400);
  func_0x00010c0e00e0(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c71b0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d6580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84800();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106801940; end: 10680194f; -[SCActiveUserNGSNavigationRouter plusDeeplinkDidDismiss] */

void FUN_106801940(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106801950; end: 106801aef; -[SCActiveUserNGSNavigationRouter showCommunityOnboardingWithOnboardingLaunchPreset:orgId:groupId:additionalInfo:] */

void FUN_106801950(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x2f0);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x2f0);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010bf5e4c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar4 = PTR_PTR_1126b3e50;
      _objc_alloc(PTR_PTR_1126b3e50);
      uVar5 = 0x4f;
      func_0x000100c6f294(0x4f);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0569a0(puVar4,param_2,puVar3,param_1,uVar5,uVar6,param_3,param_5,param_4);
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar6 = param_6;
      func_0x00010c0e00e0(param_6,param_2,&PTR____CFConstantStringClassReference_110e68ad8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c067fc0();
      func_0x00010c1701a0(puVar4,param_2,uVar5);
      _objc_release(uVar6);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x2f0),param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106801af0; end: 106801bf3; -[SCActiveUserNGSNavigationRouter showCommunityProfileWithGroupId:additionalInfo:] */

void FUN_106801af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x2f8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf5e4c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126b1450;
    _objc_alloc(PTR_PTR_1126b1450);
    uVar4 = 0x8c;
    func_0x00010bc9107c(0x8c);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0190a0(puVar3,param_2,param_3,puVar2,param_1,uVar4,0);
    _objc_release(uVar4);
    param_1 = param_1 + 0x2f8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c08b7c0();
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106801bf4; end: 106801cff; -[SCActiveUserNGSNavigationRouter showCommunityProfileMembersWithGroupId:additionalInfo:] */

void FUN_106801bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x2f8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf5e4c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126b1450;
    _objc_alloc(PTR_PTR_1126b1450);
    uVar4 = 0x8c;
    func_0x00010bc9107c(0x8c);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0190a0(puVar3,param_2,param_3,puVar2,param_1,uVar4,PTR_PTR_1133ba4c0);
    _objc_release(uVar4);
    param_1 = param_1 + 0x2f8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c08b7c0();
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106801d00; end: 106801d93; -[SCActiveUserNGSNavigationRouter showCommunityPostToGroupStoryPageWithGroupId:] */

void FUN_106801d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5e4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ce520;
  _objc_alloc(PTR_PTR_1126ce520);
  func_0x00010c039120();
  _objc_release(param_3);
  param_1 = param_1 + 0x120;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106801d94; end: 106801d97; -[SCActiveUserNGSNavigationRouter verifiedCommunitiesOnboardingDidFinishWithComplete:] */

void FUN_106801d94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissCommunitiesOnboarding_11255e3a8);
  return;
}



/* Entry: 106801d98; end: 106801dcb; -[SCActiveUserNGSNavigationRouter verifiedCommunitiesOnboardingDidDismissToLaunchTray] */

void FUN_106801d98(undefined8 param_1)

{
  func_0x00010be02820();
                    /* WARNING: Could not recover jumptable at 0x00010c236a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showCommunityOnboardingWithOnboa_11266b4a8,0,0,0,0);
  return;
}



/* Entry: 106801dcc; end: 106801e13; -[SCActiveUserNGSNavigationRouter _dismissCommunitiesOnboarding] */

void FUN_106801dcc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2f0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x2f0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106801e14; end: 106801e1f; -[SCActiveUserNGSNavigationRouter forceAppOpenNavigationWithDeepLink] */

void FUN_106801e14(long param_1)

{
  *(undefined1 *)(param_1 + 0x1a9) = 1;
  return;
}



/* Entry: 106801e20; end: 106801e3f; -[SCActiveUserNGSNavigationRouter dismissPresentedSubscreens] */

void FUN_106801e20(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x1a0) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bebb570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__showSwipeViewType_from_fromUser_11258c700,*(long *)(param_1 + 0x1a0),
               param_2,0,0);
    return;
  }
  return;
}



/* Entry: 106801e40; end: 106801ef3; -[SCActiveUserNGSNavigationRouter _prepareToDismissCurrentViewControllerWithStyle:] */

void FUN_106801e40(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c198340();
  _objc_release(lVar2);
  uVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010010fab4();
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_mightDismissWithStyle__112610ef0);
  if ((uVar3 & 1) != 0) {
    func_0x00010c0cd360(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106801ef4; end: 10680200b; -[SCActiveUserNGSNavigationRouter _dismissViewControllerFromParent:caller:animated:completion:] */

void FUN_106801ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = param_4;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10680200c;
  puStack_68 = &UNK_110845188;
  uStack_60 = uVar2;
  uStack_58 = param_4;
  uStack_50 = param_7;
  uStack_48 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(uVar2);
  func_0x00010bf84b00(param_4,param_3,param_6,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 10680200c; end: 106802063;  */

void FUN_10680200c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106802054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106802064; end: 10680250f; -[SCActiveUserNGSNavigationRouter interactionControllerForSwipeViewContainer:direction:isEdgePan:] */

void FUN_106802064(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x188);
  func_0x00010bf00320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c071f40();
  if ((int)uVar1 == 0) {
LAB_106802160:
    if (((((param_6 & 1) == 0) && (*(long *)(param_2 + 800) == 1)) &&
        (uVar1 = uVar2, func_0x00010c071f40(), param_5 == 2)) && ((int)uVar1 != 0)) {
      func_0x00010be79520(param_2);
      puVar4 = param_2 + 0x20;
      _objc_loadWeakRetained();
      puVar3 = puVar4;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar4);
      if ((puVar3 != (undefined *)0x0) || ((param_2[0x1a8] & 1) != 0)) {
LAB_106802280:
        param_2 = (undefined *)0x0;
        goto LAB_1068024b0;
      }
      param_2[0x1a8] = 1;
      puVar4 = PTR_PTR_1126b5c50;
      _objc_alloc(PTR_PTR_1126b5c50);
      func_0x00010c031b80();
      _objc_initWeak(auStack_80,param_2);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106802510;
      puStack_90 = &UNK_11084fd28;
      _objc_copyWeak(auStack_88,auStack_80);
      func_0x00010c238480(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    else {
      puVar4 = param_2;
      func_0x00010be3f820();
      if (((ulong)puVar4 & 1) != 0) goto LAB_106802280;
      puVar4 = param_2;
      func_0x00010bde76a0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar4 == (undefined *)0x0) || ((param_2[0x1a8] & 1) != 0)) {
        param_2 = (undefined *)0x0;
      }
      else {
        param_2[0x1a8] = 1;
        uVar1 = *(undefined8 *)(param_2 + 0x1a0);
        lVar5 = *(long *)(param_2 + 0x188);
        func_0x00010bf00320();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        if (lVar6 == 0) {
          lVar5 = -1;
        }
        else {
          lVar5 = lVar6;
          func_0x00010c067fc0();
        }
        func_0x00010be79520(param_2);
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        _objc_release(puVar3);
        uVar7 = *(undefined8 *)(param_2 + 0x198);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecde0(uVar7);
        _objc_release(puVar3);
        uVar8 = *(undefined8 *)(param_2 + 0x188);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        uVar7 = uVar8;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_80,param_2);
        param_2 = *(undefined **)(param_2 + 0x180);
        uStack_c0 = param_1;
        _objc_retain(puVar4);
        _objc_retain(puVar3);
        _objc_copyWeak(auStack_c8,auStack_80);
        uStack_b8 = uVar1;
        lStack_b0 = lVar5;
        func_0x00010c10ee60(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_destroyWeak(auStack_c8);
        _objc_release(puVar3);
        _objc_release(puVar4);
        _objc_destroyWeak(auStack_80);
        _objc_release(puVar3);
        _objc_release(uVar7);
        _objc_release(uVar8);
        _objc_release(lVar6);
      }
    }
  }
  else {
    puVar4 = param_2 + 0x20;
    _objc_loadWeakRetained();
    puVar3 = puVar4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    if (puVar3 != (undefined *)0x0) goto LAB_106802280;
    puVar4 = *(undefined **)(param_2 + 0x438);
    func_0x00010c068480();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      if (param_5 != 8) goto LAB_106802160;
      func_0x00010be3d220(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar4);
      param_2 = puVar4;
    }
  }
  _objc_release(puVar4);
LAB_1068024b0:
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106802510; end: 10680252f;  */

void FUN_106802510(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106802530; end: 10680259f;  */

void FUN_106802530(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7f500(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068025a0; end: 106802627; -[SCActiveUserNGSNavigationRouter mapScopeDidEnd:] */

void FUN_1068025a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 800) == 1) {
    lVar1 = param_1 + 0x80;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      param_1 = param_1 + 0x80;
      _objc_loadWeakRetained(param_1);
      func_0x00010c12e1c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106802628; end: 106802637; -[SCActiveUserNGSNavigationRouter mapScopeWantsToPresentSearch:source:] */

void FUN_106802628(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showSearchWithDelegate_source__11266c120,param_1,param_4 == 1);
  return;
}



/* Entry: 106802638; end: 10680263b; -[SCActiveUserNGSNavigationRouter myProfileAskedLogOnScrollEventsForScrollViewDelegagte:] */

void FUN_106802638(void)

{
  return;
}



/* Entry: 10680263c; end: 10680263f; -[SCActiveUserNGSNavigationRouter myProfileWillAppear] */

void FUN_10680263c(void)

{
  return;
}



/* Entry: 106802640; end: 1068026d3; -[SCActiveUserNGSNavigationRouter myProfileDidDismiss] */

void FUN_106802640(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x288;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x288;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    param_1 = param_1 + 0x420;
    _objc_loadWeakRetained(param_1);
    func_0x00010c291c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1068026d4; end: 1068026e7; -[SCActiveUserNGSNavigationRouter legacy_visiblePageType] */

undefined8 FUN_1068026d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(long *)(param_1 + 0x1a0) == 2) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 1068026e8; end: 1068027e3; -[SCActiveUserNGSNavigationRouter legacy_handleDeepLinkVCInfo:] */

void FUN_1068026e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c08f9a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207240(param_3);
  puVar1 = PTR_DAT_1126a5030;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010010fab4(param_1,puVar1);
  _objc_release(param_1);
  puVar1 = PTR_DAT_1126a52d0;
  if ((param_1 == 0) || ((int)lVar2 == 0)) {
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00010010fab4(param_1,puVar1);
    _objc_release(param_1);
    lVar3 = 0;
    if ((param_1 != 0) && ((int)lVar2 != 0)) {
      lVar3 = param_1;
      func_0x00010bf68420(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(param_1);
    lVar3 = param_1;
  }
  func_0x00010c29c7a0(lVar3);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068027e4; end: 106802947; -[SCActiveUserNGSNavigationRouter _onScreenPresenterInWindow:] */

void FUN_1068027e4(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010c074c20();
  if (((uVar4 & 1) != 0) ||
     (func_0x00010c2a72a0(param_4), param_1 != *(double *)PTR__UIWindowLevelNormal_110345e88)) {
    uVar4 = 0;
    goto LAB_106802830;
  }
  uVar1 = param_4;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  while (uVar4 != 0) {
    uVar2 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06d1a0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    if ((uVar3 & 1) != 0) break;
    uVar2 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar4 = uVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
  }
  uVar4 = uVar1;
  func_0x00010c0834c0();
  if ((int)uVar4 == 0) {
LAB_106802938:
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    if (uVar2 == 0) goto LAB_106802938;
    _objc_retain(uVar1);
    uVar4 = uVar1;
  }
  _objc_release(uVar1);
LAB_106802830:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106802948; end: 106802c9f; -[SCActiveUserNGSNavigationRouter _onScreenForegroundTopmostPresenter] */

void FUN_106802948(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  double dVar23;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf48a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar4 != (undefined *)0x0) {
    dVar23 = *(double *)PTR__UIWindowLevelNormal_110345e88;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        uVar10 = *(ulong *)((long)puVar14 * 8);
        puVar6 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
        _objc_opt_class(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
        uVar7 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar6);
        if (((uVar7 & 1) != 0) && (uVar7 = uVar10, func_0x00010bef0360(), uVar7 == 0)) {
          func_0x00010c2a7380();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = 0;
          uVar16 = 0;
          uVar17 = 0;
          uVar18 = 0;
          uVar19 = 0;
          uVar20 = 0;
          uVar21 = 0;
          uVar22 = 0;
          _objc_retain();
          uVar7 = uVar10;
          func_0x00010bf52a60();
          lVar12 = lRam0000000000000000;
          while (uVar7 != 0) {
            uVar13 = 0;
            do {
              if (lRam0000000000000000 != lVar12) {
                _objc_enumerationMutation(uVar10);
              }
              uVar11 = *(ulong *)(uVar13 * 8);
              uVar8 = uVar11;
              func_0x00010c075e80();
              if (((int)uVar8 != 0) && (uVar8 = uVar11, func_0x00010c074c20(), (uVar8 & 1) == 0)) {
                func_0x00010c2a72a0(uVar11);
                bVar3 = false;
                if (!NAN((double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,
                                                  CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,
                                                  uVar15)))))))) && !NAN(dVar23)) {
                  bVar3 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,
                                                  CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,
                                                  uVar15))))))) == dVar23;
                }
                if (bVar3) {
                  _objc_retain(uVar11);
                  _objc_release(uVar10);
                  if (uVar11 == 0) goto LAB_106802b44;
                  lVar12 = param_1;
                  func_0x00010be6b3c0();
                  _objc_retainAutoreleasedReturnValue();
                  if (lVar12 == 0) goto LAB_106802b44;
                  goto LAB_106802c3c;
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar7 != uVar13);
            uVar7 = uVar10;
            func_0x00010bf52a60();
          }
          _objc_release(uVar10);
          uVar11 = 0;
LAB_106802b44:
          _objc_retain(uVar10);
          uVar7 = uVar10;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (uVar7 != 0) {
            uVar13 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(uVar10);
              }
              if (*(ulong *)(uVar13 * 8) != uVar11) {
                lVar12 = param_1;
                func_0x00010be6b3c0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar12 != 0) {
                  _objc_release(uVar10);
LAB_106802c3c:
                  _objc_release(uVar11);
                  _objc_release(uVar10);
                  goto LAB_106802c4c;
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar7 != uVar13);
            uVar7 = uVar10;
            func_0x00010bf52a60();
          }
          _objc_release(uVar10);
          _objc_release(uVar11);
          _objc_release(uVar10);
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar4);
      puVar4 = puVar5;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  lVar12 = 0;
LAB_106802c4c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar5 + 0x158),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e60778,0,0);
  return;
}



/* Entry: 106802ca0; end: 106802cb7; -[SCActiveUserNGSNavigationRouter _isOnScreenPresenterRedirectEnabled] */

void FUN_106802ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x158),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e60778,0,0);
  return;
}



/* Entry: 106802cb8; end: 106802cbb; -[SCActiveUserNGSNavigationRouter _logOnScreenPresenterRedirect] */

void FUN_106802cb8(void)

{
  return;
}



/* Entry: 106802cbc; end: 106802d03; -[SCActiveUserNGSNavigationRouter _isApplicationActive] */

bool FUN_106802cbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x0;
}



/* Entry: 106802d04; end: 106802e67; -[SCActiveUserNGSNavigationRouter currentContainerPresentingViewController] */

void FUN_106802d04(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  while (uVar2 != 0) {
    uVar3 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06d1a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) break;
    uVar3 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar2 = uVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
  }
  uVar2 = uVar1;
  func_0x00010c0834c0();
  if ((int)uVar2 != 0) {
    uVar2 = uVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      uVar3 = param_1;
      func_0x00010be3e2e0();
      _objc_release(uVar2);
      if (((int)uVar3 == 0) || (uVar2 = param_1, func_0x00010be42660(), (int)uVar2 == 0))
      goto LAB_106802e3c;
      uVar2 = param_1;
      func_0x00010be6b3a0();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar2 != 0) && (uVar2 != uVar1)) {
        func_0x00010be56960(param_1);
        goto LAB_106802e48;
      }
    }
    else {
      _objc_release();
    }
    _objc_release(uVar2);
  }
LAB_106802e3c:
  _objc_retain(uVar1);
  uVar2 = uVar1;
LAB_106802e48:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106802e68; end: 106802e6f; -[SCActiveUserNGSNavigationRouter _presentViewControllerCompletion:fromSwipeViewType:toSwipeViewType:] */

void FUN_106802e68(long param_1)

{
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  return;
}



/* Entry: 106802e70; end: 106802eb7; -[SCActiveUserNGSNavigationRouter _refreshLocalizedTabBarLabels] */

/* WARNING: Possible PIC construction at 0x000106802e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106802e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106802ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106802e98) */
/* WARNING: Removing unreachable block (ram,0x000106802e88) */
/* WARNING: Removing unreachable block (ram,0x000106802ea8) */

void FUN_106802e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c125410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x430),PTR_s_refreshLocalizedTabBarLabels_112626f20);
  return;
}



/* Entry: 106802eb8; end: 106802f2b; -[SCActiveUserNGSNavigationRouter _showSwipeViewType:from:fromUserInteraction:completion:] */

void FUN_106802eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_6);
  func_0x00010bf098c0(puVar1);
  func_0x00010bebb580(param_1,param_2,param_3,param_4,param_5,puVar1,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106802f2c; end: 106802f6b;  */

void FUN_106802f2c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebb580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106802f6c; end: 10680305b;  */

void FUN_106802f6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x1a8) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10680305c; end: 106803193; -[SCActiveUserNGSNavigationRouter _containerNextToContainer:direction:] */

void FUN_10680305c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  lVar1 = *(long *)(param_1 + 0x188);
  func_0x00010bf00320();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x198);
    func_0x00010bfecde0(lVar3,param_2,lVar2);
    lVar1 = -(param_4 >> 1 & 1);
    if ((param_4 & 1) != 0) {
      lVar1 = 1;
    }
    uVar5 = lVar3 + lVar1;
    if (-1 < (long)uVar5) {
      uVar4 = *(ulong *)(param_1 + 0x198);
      func_0x00010bf529e0();
      if (uVar5 < uVar4) {
        uVar4 = *(ulong *)(param_1 + 0x198);
        func_0x00010c0dfd40(uVar4,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x328);
        uVar5 = uVar4;
        func_0x00010c067fc0();
        if (uVar5 < 6) {
          ppuVar7 = *(undefined ***)(&PTR_PTR_1109415a0)[uVar5];
          _objc_retain(ppuVar7);
        }
        else {
          ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        func_0x00010c291fc0(uVar6,param_2,ppuVar7);
        _objc_release(ppuVar7);
        uVar5 = uVar4;
        func_0x00010c067fc0(uVar4);
        func_0x00010bdd0740(param_1,param_2,uVar5);
        uVar6 = *(undefined8 *)(param_1 + 0x188);
        func_0x00010c0e00e0(uVar6,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        goto LAB_106803120;
      }
    }
  }
  uVar6 = 0;
LAB_106803120:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106803194; end: 1068031eb;  */

void FUN_106803194(long param_1,undefined8 param_2)

{
  func_0x00010c282760(param_2);
  func_0x00010c16eb80(*(undefined8 *)(param_1 + 0x28));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068031ec; end: 1068032c3;  */

void FUN_1068031ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c282760(uVar1);
  func_0x00010bf1f3c0(uVar2);
  func_0x00010c16eb80(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c201760(*(undefined8 *)(param_1 + 0x28));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb080();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068032c4; end: 10680336b; -[SCActiveUserNGSNavigationRouter _updateLoggingWithNavigateionItemType:badgeCount:] */

void FUN_1068032c4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      func_0x00010c1a0820();
    }
    else {
      if (param_3 != 1) {
        return;
      }
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      func_0x00010c18ef60();
    }
  }
  else {
    if ((param_3 != 2) && (param_3 != 3)) {
      return;
    }
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2085a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10680336c; end: 106803373; -[SCActiveUserNGSNavigationRouter _impalaHandlerDataReadyForBusinessProfileId:defaultTab:] */

void FUN_10680336c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be37a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__impalaHandlerDataReadyForBusine_11256b830,param_3,param_4,0);
  return;
}



/* Entry: 106803374; end: 1068034c7; -[SCActiveUserNGSNavigationRouter _impalaHandlerDataReadyForBusinessProfileId:defaultTab:deeplinkAction:] */

void FUN_106803374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b7ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_60 = param_5;
  func_0x00010bfd3240(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068034c8; end: 10680354b;  */

void FUN_1068034c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf25020(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beba780(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10680354c; end: 10680370f; -[SCActiveUserNGSNavigationRouter _showPublicProfileManagementWithBusinessProfileAndUserData:notification:animated:defaultTab:deeplinkURL:deeplinkAction:] */

void FUN_10680354c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  
  lVar4 = *(long *)(param_1 + 0x2d0);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x2d0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_4 == 0) {
    lVar2 = param_1;
    func_0x00010be5c5c0(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x2d8);
    *(long *)(param_1 + 0x2d8) = lVar2;
  }
  else {
    puVar1 = PTR_PTR_1126aead0;
    _objc_alloc();
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc0000000;
    pcStack_78 = FUN_106803710;
    puStack_70 = &UNK_110864618;
    uStack_68 = param_5;
    func_0x00010c02e500(puVar1,param_2,lVar4,&puStack_88);
    uVar3 = *(undefined8 *)(param_1 + 0x2d8);
    *(undefined **)(param_1 + 0x2d8) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126b0f38;
  _objc_alloc(PTR_PTR_1126b0f38);
  func_0x00010c0581c0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x2d0),param_2,puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106803710; end: 106803717;  */

undefined1 FUN_106803710(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 106803718; end: 10680372f; -[SCActiveUserNGSNavigationRouter _showPublicProfileManagementWithBusinessProfileAndUserData:defaultTab:deeplinkAction:] */

void FUN_106803718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showPublicProfileManagementWith_11258c388,param_3,0,1,param_4,0,param_5)
  ;
  return;
}



/* Entry: 106803730; end: 106803763; -[SCActiveUserNGSNavigationRouter _usernameChangeRemoveScope] */

void FUN_106803730(long param_1)

{
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106803764; end: 106803773; -[SCActiveUserNGSNavigationRouter locationSharingSettingsScopeDidDismiss] */

void FUN_106803764(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x418);
  *(undefined8 *)(param_1 + 0x418) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106803774; end: 10680377f; -[SCActiveUserNGSNavigationRouter defaultTabDismissed] */

void FUN_106803774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x308,0);
  return;
}



/* Entry: 106803780; end: 106803783; -[SCActiveUserNGSNavigationRouter addFriendsWorkflowSkipped:] */

void FUN_106803780(void)

{
  return;
}



/* Entry: 106803784; end: 10680378b; -[SCActiveUserNGSNavigationRouter addFriendsWorkflowCompleted:] */

void FUN_106803784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x278),PTR_s_setNeedsCustomStatusBarStyleCont_112650970);
  return;
}



/* Entry: 10680378c; end: 106803793; -[SCActiveUserNGSNavigationRouter bareboneNavigationControllerDidPresentViewController] */

void FUN_10680378c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x278),PTR_s_setNeedsCustomStatusBarStyleCont_112650970);
  return;
}



/* Entry: 106803794; end: 10680379b; -[SCActiveUserNGSNavigationRouter bareboneNavigationControllerDidDismissViewController] */

void FUN_106803794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x278),PTR_s_setNeedsCustomStatusBarStyleCont_112650970);
  return;
}



/* Entry: 10680379c; end: 106803817; -[SCActiveUserNGSNavigationRouter settingsScopeDidDismiss] */

void FUN_10680379c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0xa8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106803818; end: 10680390f; -[SCActiveUserNGSNavigationRouter settingsScopeWantsDismiss] */

void FUN_106803818(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6f440(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106803910; end: 10680398f;  */

void FUN_106803910(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1 + 0xa8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c12e1c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106803990; end: 106803993; -[SCActiveUserNGSNavigationRouter usernameChangeComplete] */

void FUN_106803990(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__usernameChangeRemoveScope_112597650);
  return;
}



/* Entry: 106803994; end: 106803997; -[SCActiveUserNGSNavigationRouter usernameChangeShareComplete] */

void FUN_106803994(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__usernameChangeRemoveScope_112597650);
  return;
}



/* Entry: 106803998; end: 10680399b; -[SCActiveUserNGSNavigationRouter usernameChangeCanceled] */

void FUN_106803998(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__usernameChangeRemoveScope_112597650);
  return;
}



/* Entry: 10680399c; end: 10680399f; -[SCActiveUserNGSNavigationRouter usernameChangeDismissed] */

void FUN_10680399c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__usernameChangeRemoveScope_112597650);
  return;
}



/* Entry: 1068039a0; end: 1068039d3; -[SCActiveUserNGSNavigationRouter passwordSettingsDidCompleteChange] */

void FUN_1068039a0(long param_1)

{
  param_1 = param_1 + 0xc0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068039d4; end: 106803a07; -[SCActiveUserNGSNavigationRouter passwordSettingsDidExitWithoutCompletion] */

void FUN_1068039d4(long param_1)

{
  param_1 = param_1 + 0xc0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106803a08; end: 106803ac3; -[SCActiveUserNGSNavigationRouter showTopicWithHashtag:] */

void FUN_106803a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5e4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar3 = *(undefined8 *)(param_1 + 0x3c8);
  func_0x00010bf231a0(uVar3,param_2,param_3,&PTR____CFConstantStringClassReference_110daafd8,
                      0xffffffffffffffff,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x3c0),param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106803ac4; end: 106803bdf; -[SCActiveUserNGSNavigationRouter showMusicWithMusicId:] */

void FUN_106803ac4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bf5e4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar3 = PTR_PTR_1126c5600;
  _objc_alloc(PTR_PTR_1126c5600);
  func_0x00010c054ca0();
  puVar4 = PTR_PTR_1126c5608;
  _objc_alloc(PTR_PTR_1126c5608);
  func_0x00010c01f360();
  uVar5 = *(undefined8 *)(param_1 + 0x3d8);
  func_0x00010bf23440(uVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_110daafd8,0x91,0,
                      puVar2,0,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x3d0),param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106803be0; end: 106803bef; -[SCActiveUserNGSNavigationRouter didDismissBitmojiExtensionSettings] */

void FUN_106803be0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x410);
  *(undefined8 *)(param_1 + 0x410) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106803bf0; end: 106803c23; -[SCActiveUserNGSNavigationRouter contactSupportDidComplete] */

void FUN_106803bf0(long param_1)

{
  param_1 = param_1 + 0xd8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106803c24; end: 106803c57; -[SCActiveUserNGSNavigationRouter sessionManagementPageDismissed] */

void FUN_106803c24(long param_1)

{
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106803c58; end: 106803c8b; -[SCActiveUserNGSNavigationRouter bugsAndSuggestionsScopeDidDismiss] */

void FUN_106803c58(long param_1)

{
  param_1 = param_1 + 0xf8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


