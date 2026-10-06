/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fd2314; end: 107fd2353; -[SCAppNotification isSnapPush] */

bool FUN_107fd2314(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c11c420();
  if (lVar2 == 8) {
    bVar1 = true;
  }
  else {
    func_0x00010c11c420(param_1);
    bVar1 = param_1 == 0x2b;
  }
  return bVar1;
}



/* Entry: 107fd2354; end: 107fd23d7; -[SCAppNotification isLocallyScheduledNotification] */

long FUN_107fd2354(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c11c420();
  if (lVar1 == 0xba) {
    lVar2 = 1;
  }
  else {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return lVar2;
}



/* Entry: 107fd23d8; end: 107fd243f; -[SCAppNotification isAddedYouBackFriendPush] */

bool FUN_107fd23d8(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c11c420();
  if (lVar2 == 0xe) {
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110f9ed78);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    FUN_107fd3660();
    bVar1 = lVar2 == 1;
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 107fd2440; end: 107fd2657; -[SCAppNotification shouldSaveOnAppOpen:] */

undefined * FUN_107fd2440(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar11 = param_1;
  func_0x00010c07cda0();
  if ((int)puVar11 == 0) {
    puVar2 = param_1;
    func_0x00010be63f80(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar9 = param_1;
    func_0x00010c11c420(param_1);
    func_0x00010c0df780(puVar11,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    puVar7 = (undefined8 *)puVar11;
    func_0x00010bf4b900();
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010c11c420();
      puVar3 = param_1;
      FUN_107fcc1ec();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      puVar7 = (undefined8 *)puVar4;
      func_0x00010bf4b900();
      _objc_release(puVar4);
      _objc_release(puVar3);
      param_1 = puVar11;
    }
    else {
      puVar9 = (undefined *)0x1;
      param_1 = puVar11;
    }
  }
  else {
    func_0x00010bf3c640();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b1370;
    puVar3 = param_1;
    func_0x00010bde1320();
    puVar2 = param_1;
    if (((ulong)puVar11 & 1) != 0) {
      puVar9 = (undefined *)0x0;
      puVar7 = (undefined8 *)puVar3;
      goto LAB_107fd260c;
    }
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_1);
    puVar11 = param_1;
    func_0x00010bf52a60();
    puVar9 = (undefined *)0x0;
    if (puVar11 != (undefined *)0x0) {
      lVar10 = *plStack_110;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar10) {
            _objc_enumerationMutation(param_1);
          }
          puVar7 = *(undefined8 **)(lStack_118 + (long)puVar9 * 8);
          puVar3 = PTR_PTR_1126b1370;
          func_0x00010bde1340();
          if (((ulong)puVar3 & 1) != 0) {
            puVar9 = (undefined *)0x1;
            goto LAB_107fd2608;
          }
          puVar9 = puVar9 + 1;
        } while (puVar11 != puVar9);
        puVar11 = param_1;
        puVar7 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined *)0x0);
      puVar9 = (undefined *)0x0;
    }
  }
LAB_107fd2608:
  _objc_release(param_1);
LAB_107fd260c:
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_230;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  _objc_retain(puVar7);
  puVar2 = (undefined *)puVar7;
  func_0x00010bf52a60();
  puVar11 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    lVar10 = *plStack_220;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_220 != lVar10) {
          _objc_enumerationMutation(puVar7);
        }
        iVar1 = (int)*(undefined8 *)(lStack_228 + (long)puVar11 * 8);
        func_0x00010c103180();
        if (iVar1 == 1) {
          puVar11 = (undefined *)0x1;
          goto LAB_107fd2724;
        }
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
      puVar2 = (undefined *)puVar7;
      puVar8 = &uStack_230;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    puVar11 = (undefined *)0x0;
  }
LAB_107fd2724:
  _objc_release(puVar7);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar11;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar5 = (undefined1 *)puVar8;
  func_0x00010c103180();
  if ((int)puVar5 == 3) {
    puVar5 = (undefined1 *)puVar8;
    func_0x00010bfa1860(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010beeed20();
    puVar11 = (undefined *)(ulong)((int)puVar6 != 0);
    _objc_release(puVar5);
  }
  else if ((int)puVar5 == 2) {
    puVar5 = (undefined1 *)puVar8;
    func_0x00010bfa2980();
    puVar11 = (undefined *)(ulong)((int)puVar5 != 0 && (int)puVar5 != -0x4524111);
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar8);
  return puVar11;
}



/* Entry: 107fd2658; end: 107fd276b; +[SCAppNotification _clearingPoliciesContainsAppOpen:] */

bool FUN_107fd2658(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  bVar1 = false;
  if (lVar3 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        iVar2 = (int)*(undefined8 *)(lStack_108 + lVar8 * 8);
        func_0x00010c103180();
        if (iVar2 == 1) {
          bVar1 = true;
          goto LAB_107fd2724;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_3;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    bVar1 = false;
  }
LAB_107fd2724:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return bVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar4 = (undefined1 *)puVar6;
  func_0x00010c103180();
  if ((int)puVar4 == 3) {
    puVar4 = (undefined1 *)puVar6;
    func_0x00010bfa1860(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010beeed20();
    bVar1 = (int)puVar5 != 0;
    _objc_release(puVar4);
  }
  else if ((int)puVar4 == 2) {
    puVar4 = (undefined1 *)puVar6;
    func_0x00010bfa2980();
    bVar1 = (int)puVar4 != 0 && (int)puVar4 != -0x4524111;
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar6);
  return bVar1;
}



/* Entry: 107fd276c; end: 107fd280b; +[SCAppNotification _clearingPolicyIsFeaturePageOrAction:] */

bool FUN_107fd276c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c103180();
  if ((int)uVar2 == 3) {
    uVar2 = param_3;
    func_0x00010bfa1860(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010beeed20();
    bVar1 = (int)uVar3 != 0;
    _objc_release(uVar2);
  }
  else if ((int)uVar2 == 2) {
    uVar2 = param_3;
    func_0x00010bfa2980();
    bVar1 = (int)uVar2 != 0 && (int)uVar2 != -0x4524111;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107fd280c; end: 107fd2877; -[SCAppNotification isSDNNotification] */

bool FUN_107fd280c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 107fd2878; end: 107fd28e7; -[SCAppNotification sdnFeatureMetadata] */

void FUN_107fd2878(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010be1dcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfd7000();
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x00010bfa2680(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fd28e8; end: 107fd28f3; -[SCAppNotification markToAddDebugPrefixToBody] */

void FUN_107fd28e8(long param_1)

{
  *(undefined1 *)(param_1 + 0x42) = 1;
  return;
}



/* Entry: 107fd28f4; end: 107fd29cb; -[SCAppNotification _addDebugPrefixMaybe:] */

void FUN_107fd28f4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((puVar1 == (undefined *)0x0) || ((*(byte *)(param_1 + 0x42) & 1) == 0)) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    func_0x00010c07cda0();
    func_0x00010c247620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ecc0b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fd29cc; end: 107fd2a8b; +[SCAppNotification isSilentOrMalformedNotification:] */

bool FUN_107fd29cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ecba78);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    bVar1 = true;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      bVar1 = true;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      if ((uVar4 & 1) == 0) {
        bVar1 = false;
      }
      else {
        uVar4 = uVar2;
        func_0x00010bf529e0(uVar2);
        bVar1 = uVar4 == 0;
      }
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107fd2a8c; end: 107fd2b27; -[SCAppNotification _nonMessagingPushTypesToRevokeBadgeOnFeatureAccessSet:] */

void FUN_107fd2a8c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c226900(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd420);
  return;
}



/* Entry: 107fd2b28; end: 107fd2ba3; -[SCAppNotification _iconChatBubbleFillImage] */

void FUN_107fd2b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,
                      *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar2,param_2,0x77,
                      puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fd2ba4; end: 107fd2c93; -[SCAppNotification _getClientPayload] */

void FUN_107fd2ba4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    lVar5 = param_1;
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20(puVar1,param_2,lVar2,0);
    _objc_release(lVar2);
    _objc_release(lVar5);
    puVar3 = PTR_PTR_1126d8ba0;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    _objc_release(uVar4);
    _objc_release(0);
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107fd2c94; end: 107fd2d3b; -[SCAppNotification _getClientPayloadParser] */

void FUN_107fd2c94(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      lVar1 = param_1;
      func_0x00010be1dcc0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        *(undefined1 *)(param_1 + 0x40) = 1;
      }
      else {
        puVar2 = PTR_PTR_1126d8ba8;
        _objc_alloc();
        func_0x00010bfff180();
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        *(undefined **)(param_1 + 0x38) = puVar2;
        _objc_release(uVar3);
      }
      lVar4 = *(long *)(param_1 + 0x38);
      _objc_retain(lVar4);
      _objc_release(lVar1);
    }
    else {
      lVar4 = 0;
    }
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107fd2d3c; end: 107fd2e2f; -[SCAppNotification _sdnPreferredString:] */

void FUN_107fd2d3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3fb0;
  func_0x00010bf3cca0(PTR_PTR_1126d3fb0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(uVar3);
  _objc_opt_class(puVar2);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar5 = uVar1;
  func_0x00010c08fa60();
  uVar4 = param_3;
  if (uVar5 != 0) {
    uVar4 = uVar1;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107fd2e30; end: 107fd2f6b; -[SCAppNotification imageAttachmentWithCircumstanceEngine:] */

void FUN_107fd2e30(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)puVar1 == 0) {
    puVar1 = PTR_PTR_1126d8bb0;
    _objc_alloc(PTR_PTR_1126d8bb0);
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c400(puVar1,param_2,param_1);
    _objc_release(param_1);
    puVar4 = puVar1;
    func_0x00010bfe6c60(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_1;
    func_0x00010be1dcc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf1f440(param_3,param_2,&PTR____CFConstantStringClassReference_110ecc118,0,0);
    puVar3 = PTR_PTR_1126d8bb0;
    _objc_alloc(PTR_PTR_1126d8bb0);
    func_0x00010c11c460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff1a0(puVar3,param_2,puVar1,param_1,(uint)uVar2 ^ 1);
    _objc_release(param_1);
    puVar4 = puVar3;
    func_0x00010bfe6c60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fd2f6c; end: 107fd30a3; -[SCAppNotification senderInfo] */

void FUN_107fd2f6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    puVar3 = PTR_PTR_1126d3fb8;
    _objc_alloc(PTR_PTR_1126d3fb8);
    uVar1 = param_1;
    func_0x00010c15df60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c15de20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15dba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0447c0(puVar3,param_2,uVar1,uVar4,param_1);
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d3fb8;
    _objc_alloc(PTR_PTR_1126d3fb8);
    uVar4 = param_1;
    func_0x00010c15dba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c15df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c15dba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0447c0(puVar3,param_2,uVar4,uVar2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_1;
    param_1 = uVar2;
  }
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107fd30a4; end: 107fd332f; -[SCAppNotification groupTemplate] */

void FUN_107fd30a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)lVar1 == 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_107fd3310;
  }
  lVar1 = param_1;
  func_0x00010be1dcc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd5cc0();
  if ((int)lVar2 == 0) {
LAB_107fd3180:
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf50660();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_107fd3180;
    lVar3 = lVar2;
    func_0x00010bfd7900();
    if ((int)lVar3 == 0) {
LAB_107fd3188:
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar2;
      func_0x00010bfcf440();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) goto LAB_107fd3188;
      lVar7 = lVar3;
      func_0x00010bfd67a0();
      if ((int)lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        lVar8 = lVar3;
        func_0x00010bf8ad80(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c26b140();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1;
        func_0x00010bdc67e0(param_1,param_2,lVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        _objc_release(lVar8);
      }
      lVar8 = lVar3;
      func_0x00010bfddaa0();
      if ((int)lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar9 = lVar3;
        func_0x00010c27ca00(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar9;
        func_0x00010c26b140();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_1;
        func_0x00010bdc67e0(param_1,param_2,lVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar9);
      }
      lVar9 = lVar3;
      func_0x00010bfd94a0();
      if ((int)lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        lVar4 = lVar3;
        func_0x00010c0d1ae0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c26b140();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_1;
        func_0x00010bdc67e0(param_1,param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      lVar4 = lVar3;
      func_0x00010bfda5e0();
      if ((int)lVar4 == 0) {
        param_1 = 0;
      }
      else {
        lVar4 = lVar3;
        func_0x00010c101e60(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c26b140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc67e0(param_1,param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      puVar6 = PTR_PTR_1126d8bb8;
      _objc_alloc(PTR_PTR_1126d8bb8);
      func_0x00010c00e860();
      _objc_release(param_1);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_107fd3310:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107fd3330; end: 107fd337f; -[SCAppNotification setCategoryIdIfNonEmpty:] */

void FUN_107fd3330(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fd3380; end: 107fd3387; -[SCAppNotification userInfo] */

undefined8 FUN_107fd3380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107fd3388; end: 107fd33b7; -[SCAppNotification setUserInfo:] */

void FUN_107fd3388(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fd33b8; end: 107fd33bf; -[SCAppNotification setNotificationId:] */

void FUN_107fd33b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fd33c0; end: 107fd33c7; -[SCAppNotification creationDate] */

undefined8 FUN_107fd33c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107fd33c8; end: 107fd33cf; -[SCAppNotification categoryIdentifier] */

undefined8 FUN_107fd33c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107fd33d0; end: 107fd33d7; -[SCAppNotification setCategoryIdentifier:] */

void FUN_107fd33d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fd33d8; end: 107fd33df; -[SCAppNotification source] */

undefined8 FUN_107fd33d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107fd33e0; end: 107fd33e7; -[SCAppNotification setSource:] */

void FUN_107fd33e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 107fd33e8; end: 107fd33ef; -[SCAppNotification replacedNotification] */

undefined8 FUN_107fd33e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107fd33f0; end: 107fd341f; -[SCAppNotification setReplacedNotification:] */

void FUN_107fd33f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fd3420; end: 107fd3427; -[SCAppNotification replacesExpiredNotification] */

undefined1 FUN_107fd3420(long param_1)

{
  return *(undefined1 *)(param_1 + 0x43);
}



/* Entry: 107fd3428; end: 107fd342f; -[SCAppNotification setReplacesExpiredNotification:] */

void FUN_107fd3428(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x43) = param_3;
  return;
}



/* Entry: 107fd3430; end: 107fd3437; -[SCAppNotification setTargetScreen:] */

void FUN_107fd3430(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 107fd3438; end: 107fd343f; -[SCAppNotification actionUserDidActOn] */

undefined8 FUN_107fd3438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107fd3440; end: 107fd3447; -[SCAppNotification setActionUserDidActOn:] */

void FUN_107fd3440(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fd3448; end: 107fd344f; -[SCAppNotification textReplyResponse] */

undefined8 FUN_107fd3448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107fd3450; end: 107fd3457; -[SCAppNotification setTextReplyResponse:] */

void FUN_107fd3450(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fd3458; end: 107fd345f; -[SCAppNotification redriveAttempt] */

undefined8 FUN_107fd3458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107fd3460; end: 107fd3467; -[SCAppNotification isRepost] */

undefined1 FUN_107fd3460(long param_1)

{
  return *(undefined1 *)(param_1 + 0x44);
}



/* Entry: 107fd3468; end: 107fd346f; -[SCAppNotification setIsRepost:] */

void FUN_107fd3468(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x44) = param_3;
  return;
}



/* Entry: 107fd3470; end: 107fd3477; -[SCAppNotification cheetahCompositeStoryIdString] */

undefined8 FUN_107fd3470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107fd3478; end: 107fd347f; -[SCAppNotification discoverCompositeStoryIds] */

undefined8 FUN_107fd3478(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107fd3480; end: 107fd3487; -[SCAppNotification isInAppNotification] */

undefined1 FUN_107fd3480(long param_1)

{
  return *(undefined1 *)(param_1 + 0x45);
}



/* Entry: 107fd3488; end: 107fd348f; -[SCAppNotification setIsInAppNotification:] */

void FUN_107fd3488(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x45) = param_3;
  return;
}



/* Entry: 107fd3490; end: 107fd3497; -[SCAppNotification firstTimeDelayedTime] */

undefined8 FUN_107fd3490(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107fd3498; end: 107fd34c7; -[SCAppNotification setFirstTimeDelayedTime:] */

void FUN_107fd3498(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fd34c8; end: 107fd34cf; -[SCAppNotification inAppDisplayPolicyClass] */

undefined8 FUN_107fd34c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107fd34d0; end: 107fd34ff; -[SCAppNotification setInAppDisplayPolicyClass:] */

void FUN_107fd34d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fd3500; end: 107fd3507; -[SCAppNotification wasSwiped] */

undefined1 FUN_107fd3500(long param_1)

{
  return *(undefined1 *)(param_1 + 0x46);
}



/* Entry: 107fd3508; end: 107fd350f; -[SCAppNotification setWasSwiped:] */

void FUN_107fd3508(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x46) = param_3;
  return;
}



/* Entry: 107fd3510; end: 107fd3517; -[SCAppNotification attachmentGenerator] */

undefined8 FUN_107fd3510(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107fd3518; end: 107fd351f; -[SCAppNotification setAttachmentGenerator:] */

void FUN_107fd3518(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fd3520; end: 107fd3527; -[SCAppNotification setAddedParticipants:] */

void FUN_107fd3520(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 107fd3528; end: 107fd360b; -[SCAppNotification .cxx_destruct] */

void FUN_107fd3528(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107fd360c; end: 107fd365f; -[SCAppNotification clearingPolicies] */

void FUN_107fd360c(long param_1)

{
  long lVar1;
  
  func_0x00010be1dce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf3c640(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107fd3660; end: 107fd36f3;  */

undefined8 FUN_107fd3660(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if (lRam0000000113728a68 != -1) {
      func_0x00010002a2fc(0x113728a68,&PTR___NSConcreteGlobalBlock_110a169c0);
    }
    uVar1 = uRam0000000113728a60;
    func_0x00010c0e00e0(uRam0000000113728a60);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2827c0();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107fd36f4; end: 107fd370b;  */

void FUN_107fd36f4(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam0000000113728a60;
  ppuRam0000000113728a60 = &PTR__OBJC_CLASS___NSConstantDictionary_111174d38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fd370c; end: 107fd37bb;  */

void FUN_107fd370c(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  if (lRam0000000113728a78 != -1) {
    func_0x00010002a2fc(0x113728a78,&PTR___NSConcreteGlobalBlock_110a169e0);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuRam0000000113728a70;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db54d8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107fd37bc; end: 107fd389b;  */

long FUN_107fd37bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd8e8;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd900;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110ecc138;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110ecc158;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd918;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd930;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110ecc178;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110ecc198;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd948;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110ecc1b8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_68,5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)puRam0000000113728a70;
  puRam0000000113728a70 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return lVar2;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar5 = lVar2;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    if (lRam00000001138247e0 != -1) {
      func_0x00010002a2fc(0x1138247e0,&PTR___NSConcreteGlobalBlock_110a16a00);
    }
    lVar3 = lRam00000001138247d8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar4 = lRam00000001138247d8;
      func_0x00010c0e00e0(lRam00000001138247d8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c2827c0();
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return lVar5;
}



/* Entry: 107fd389c; end: 107fd3963;  */

long FUN_107fd389c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar3 = param_1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    if (lRam00000001138247e0 != -1) {
      func_0x00010002a2fc(0x1138247e0,&PTR___NSConcreteGlobalBlock_110a16a00);
    }
    lVar1 = lRam00000001138247d8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar2 = lRam00000001138247d8;
      func_0x00010c0e00e0(lRam00000001138247d8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2827c0();
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 107fd3964; end: 107fd397b;  */

void FUN_107fd3964(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001138247d8;
  ppuRam00000001138247d8 = &PTR__OBJC_CLASS___NSConstantDictionary_111174d60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fd397c; end: 107fd3a4b;  */

undefined8 FUN_107fd397c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c22d740();
  if ((int)uVar1 != 1) goto LAB_107fd39e8;
  uVar1 = param_1;
  func_0x00010c267320();
  uVar2 = 4;
  switch(uVar1 & 0xffffffff) {
  case 1:
    break;
  case 2:
    uVar2 = 10;
    break;
  case 3:
    uVar2 = 3;
    break;
  case 4:
    uVar2 = 0xe;
    break;
  case 5:
    uVar2 = 0xd;
    break;
  case 6:
    uVar2 = 5;
    break;
  case 7:
    uVar2 = 2;
    break;
  case 8:
    uVar2 = 0xf;
    break;
  case 9:
    uVar2 = 0xb;
    break;
  case 0xb:
    uVar2 = 0x11;
    break;
  case 0xc:
    uVar2 = 0xc;
    break;
  default:
    if ((int)uVar1 != -0x4524111) break;
  case 0:
  case 10:
LAB_107fd39e8:
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107fd3a4c; end: 107fd3a63;  */

void FUN_107fd3a4c(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam0000000113728a80;
  ppuRam0000000113728a80 = &PTR__OBJC_CLASS___NSConstantDictionary_111174d88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fd3a64; end: 107fd3bef;  */

undefined8 FUN_107fd3a64(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = 5;
  if ((param_1 != 0x94) && (param_1 != 0xe || param_2 == 1)) {
    if (param_3 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      if ((uVar2 & 1) != 0) {
        _objc_retain(param_3);
        if (lRam0000000113728a88 != -1) {
          func_0x00010002a2fc(0x113728a88,&PTR___NSConcreteGlobalBlock_110a16a20);
        }
        uVar3 = uRam0000000113728a80;
        func_0x00010c0e00e0(uRam0000000113728a80);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2827c0();
        _objc_release(uVar3);
        _objc_release(param_3);
        goto LAB_107fd3b18;
      }
    }
    uVar4 = 0;
  }
LAB_107fd3b18:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107fd3bf0; end: 107fd3c07;  */

void FUN_107fd3bf0(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam0000000113728a90;
  ppuRam0000000113728a90 = &PTR__OBJC_CLASS___NSConstantDictionary_111174db0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fd3c08; end: 107fd3c83;  */

undefined * FUN_107fd3c08(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113728ab0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ecd898,
                        &UNK_10deec258,&UNK_10deec2d8,0xd,FUN_107fd3c84,0);
    do {
      if (puRam0000000113728ab0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113728ab0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113728ab0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113728ab0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113728ab0;
}



/* Entry: 107fd3c84; end: 107fd3c8f;  */

bool FUN_107fd3c84(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 107fd3c90; end: 107fd3d1b; +[PLFriendsFeedScreen descriptor] */

undefined * FUN_107fd3c90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728ab8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b91260,
                        &PTR____CFConstantStringClassReference_110ecd8b8,&PTR_DAT_11324f978,
                        &PTR_DAT_11324f990,1,0xc,0x1c);
    func_0x00010c229040();
    puRam0000000113728ab8 = puVar1;
  }
  return puRam0000000113728ab8;
}



/* Entry: 107fd3d1c; end: 107fd3df7; -[SCNotificationServiceExtensionUserDefaults getConfigs] */

void FUN_107fd3d1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar4 = puVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c0940;
  _objc_opt_class(PTR_PTR_1126c0940);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107fd3df8; end: 107fd3e87; -[SCNotificationServiceExtensionUserDefaults setConfigs:] */

void FUN_107fd3df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110ecd9b8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fd3e88; end: 107fd3f63; -[SCNotificationServiceExtensionUserDefaults getNSEGrapheneConfigs] */

void FUN_107fd3e88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar4 = puVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c0948;
  _objc_opt_class(PTR_PTR_1126c0948);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107fd3f64; end: 107fd3ff3; -[SCNotificationServiceExtensionUserDefaults setNSEGrapheneConfigs:] */

void FUN_107fd3f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110ecd9d8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fd3ff4; end: 107fd4107; -[SCNotificationServiceExtensionUserDefaults nseHandlerConfigDict] */

void FUN_107fd3ff4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar4 = puVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
    param_1 = 0;
  }
  else {
    func_0x00010be16020(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107fd4108; end: 107fd4123;  */

ulong FUN_107fd4108(ulong param_1)

{
  func_0x00010c2827c0();
  if (0xc < param_1) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107fd4124; end: 107fd4143;  */

undefined * FUN_107fd4124(ulong param_1)

{
  if (param_1 < 0xd) {
    return (&PTR_PTR_110a16ac8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 107fd4144; end: 107fd4247;  */

void FUN_107fd4144(undefined8 param_1)

{
  switch(param_1) {
  case 0:
    func_0x000107fd4248();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 1:
    func_0x000107fd4260();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    func_0x000107fd4278();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 3:
    func_0x000107fd4290();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 4:
    func_0x000107fd42a8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 5:
    func_0x000107fd42c0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    func_0x000107fd42d8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
    func_0x000107fd42f0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 8:
    func_0x000107fd4308();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 9:
    func_0x000107fd4320();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 10:
    func_0x000107fd4338();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x000107fd4350();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xc:
    func_0x000107fd4368();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fd4248; end: 107fd437f;  */

void FUN_107fd4248(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ecdbd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ecdbd8,
                      &PTR____CFConstantStringClassReference_110ecdbf8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107fd4380; end: 107fd4777; -[SCNotificationServiceExtensionConfigs initWithCoder:] */

undefined1 * FUN_107fd4380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc008;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xf) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x11) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x12) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x13) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x14) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x15) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x16) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x17) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x18) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x19) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x1a) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x1b) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x1c) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x1d) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fd4778; end: 107fd4abb; -[SCNotificationServiceExtensionConfigs initWithIndicateProcessedInTitle:delayNotificationForTesting:showBitmojiEnabled:paddingPercentageForBitmoji:pnsRouteTag:nseProcessingDisabled:nseSimulateUNP:enableNotificationCustomSound:enableGrapheneMetricsLogging:skipSpotlightMediaDownloadInExtension:bypassChatMessageMediaTypeInPrefetch:bypassSnapMessageMediaTypeInPrefetch:skipMediaFetchWhenAppForegrounded:notificationTypeGrapheneAllowList:notificationUsersGrapheneAllowList:modifyTimeLimitInSec:grapheneTimeLimitInSec:fetchGroupBackgroundAvatarTimeoutInMs:fetchMediaTaskTimeLimitInSec:enableExtGrpcLogging:chatNotificationRateLimiterWindowSecs:networkHttpMaxConnectionPerHost:indicateSDNInBody:recoveryMessagingPushTypes:recoveryGrowthPushTypes:ffNotifStoryMetadataCapCount:addDebugPrefix:shouldDecryptTextForReplies:enablePriorityChatNsePreview:hermodNotificationEnabled:nativeAckEnabled:nativeAckCompletionReplayBufferSize:nativeAckWaitCapSecs:nativeSuppressAckingEnabled:nseMediaDbEnabled:widgetSuggestionEnabled:widgetSuggestionKind:widgetSuggestionRelevanceDurationSec:widgetSuggestionFireAndForgetEnabled:widgetSuggestionCooldownSec:] */

undefined8 *
FUN_107fd4778(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined4 param_26,undefined1 param_27,undefined8 param_28,
             undefined8 param_29,undefined4 param_30,undefined4 param_31,undefined8 param_32,
             undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_32);
  puStack_70 = PTR_PTR_1126fc008;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    puVar1[4] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_9._2_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_9._3_1_;
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0x11) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = param_10._2_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_13;
    puVar1[9] = param_14;
    puVar1[10] = param_15;
    puVar1[0xb] = param_16;
    *(undefined1 *)((long)puVar1 + 0x13) = param_17;
    puVar1[0xc] = param_19;
    puVar1[0xd] = param_20;
    *(undefined1 *)((long)puVar1 + 0x14) = param_21;
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x15) = (undefined1)param_26;
    *(undefined1 *)((long)puVar1 + 0x16) = param_26._1_1_;
    *(undefined1 *)((long)puVar1 + 0x17) = param_26._2_1_;
    *(undefined1 *)(puVar1 + 3) = param_26._3_1_;
    *(undefined1 *)((long)puVar1 + 0x19) = param_27;
    puVar1[0x10] = param_25;
    puVar1[0x11] = param_28;
    puVar1[0x12] = param_29;
    *(undefined1 *)((long)puVar1 + 0x1a) = (undefined1)param_30;
    *(undefined1 *)((long)puVar1 + 0x1b) = param_30._1_1_;
    *(undefined1 *)((long)puVar1 + 0x1c) = param_30._2_1_;
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x1d) = param_34;
    puVar1[0x14] = param_33;
    puVar1[0x15] = param_36;
  }
  _objc_release(param_32);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 107fd4abc; end: 107fd4adf; -[SCNotificationServiceExtensionConfigs copyWithZone:] */

undefined8 FUN_107fd4abc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107fd4ae0; end: 107fd4e37; -[SCNotificationServiceExtensionConfigs encodeWithCoder:] */

void FUN_107fd4ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ecdd98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110ecddb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110ecddd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ecddf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ecde18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110ecde38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110ecde58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110ecde78);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110ecde98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xf),
                      &PTR____CFConstantStringClassReference_110ecdeb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ecded8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x11),
                      &PTR____CFConstantStringClassReference_110ecdef8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x12),
                      &PTR____CFConstantStringClassReference_110ecdf18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ecdf38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ecdf58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110ecdf78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110ecdf98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110ecdfb8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110ecdfd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x13),
                      &PTR____CFConstantStringClassReference_110ecdff8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110ece018);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110ece038);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x14),
                      &PTR____CFConstantStringClassReference_110ece058);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110ece078);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110ece098);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110ece0b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x15),
                      &PTR____CFConstantStringClassReference_110ece0d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x16),
                      &PTR____CFConstantStringClassReference_110ece0f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x17),
                      &PTR____CFConstantStringClassReference_110ece118);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e9fe58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x19),
                      &PTR____CFConstantStringClassReference_110ece138);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110ece158);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110ece178);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1a),
                      &PTR____CFConstantStringClassReference_110ece198);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1b),
                      &PTR____CFConstantStringClassReference_110ece1b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1c),
                      &PTR____CFConstantStringClassReference_110ece1d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110ece1f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                      &PTR____CFConstantStringClassReference_110ece218);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1d),
                      &PTR____CFConstantStringClassReference_110ece238);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110ece258);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fd4e38; end: 107fd4fdb; -[SCNotificationServiceExtensionConfigs hash] */

ulong * FUN_107fd4e38(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_178 = (ulong)*(byte *)(param_1 + 8);
  uStack_170 = (ulong)*(byte *)(param_1 + 9);
  uStack_168 = (ulong)*(byte *)(param_1 + 10);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  lStack_160 = -lVar1;
  if (-1 < lVar1) {
    lStack_160 = lVar1;
  }
  func_0x00010bfde980();
  uVar10 = *(undefined4 *)(param_1 + 0xb);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                          (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar7);
  uVar11 = CONCAT44((int)(uVar7 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar11)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_150 = (ulong)uVar2 & 0xff;
  uStack_148 = uVar7 >> 0x10 & 0xff;
  uStack_140 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_138 = (ulong)uVar9;
  uVar10 = *(undefined4 *)(param_1 + 0xf);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar7 = CONCAT44((int)(uVar11 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar7 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar7)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_130 = (ulong)uVar2 & 0xff;
  uStack_128 = uVar7 >> 0x10 & 0xff;
  uStack_120 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_118 = (ulong)uVar9;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_158 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = uVar3;
  func_0x00010bfde980();
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e0 = (ulong)*(byte *)(param_1 + 0x13);
  lVar1 = *(long *)(param_1 + 0x60);
  uStack_d0 = *(undefined8 *)(param_1 + 0x68);
  lStack_d8 = -lVar1;
  if (-1 < lVar1) {
    lStack_d8 = lVar1;
  }
  uStack_c8 = (ulong)*(byte *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uStack_108 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uStack_c0 = uVar3;
  func_0x00010bfde980();
  uStack_b0 = *(undefined8 *)(param_1 + 0x80);
  uVar10 = *(undefined4 *)(param_1 + 0x15);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                          (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar7);
  uVar11 = CONCAT44((int)(uVar7 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar11)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_a8 = (ulong)uVar2 & 0xff;
  uStack_a0 = uVar7 >> 0x10 & 0xff;
  uStack_98 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_90 = (ulong)uVar9;
  uStack_88 = (ulong)*(byte *)(param_1 + 0x19);
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  uStack_70 = (ulong)*(byte *)(param_1 + 0x1a);
  uStack_68 = (ulong)*(byte *)(param_1 + 0x1b);
  uStack_60 = (ulong)*(byte *)(param_1 + 0x1c);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uStack_b8 = uVar4;
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0xa0);
  uStack_40 = *(undefined8 *)(param_1 + 0xa8);
  uStack_48 = (ulong)*(byte *)(param_1 + 0x1d);
  puVar5 = &uStack_178;
  uStack_58 = uVar3;
  func_0x000100505190(puVar5,0x28);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_107fd52dc:
    puVar8 = (ulong *)0x1;
  }
  else {
    puVar8 = (ulong *)0x0;
    if ((puVar5 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_107fd52e8;
    puVar8 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((((ulong)puVar6 & 1) != 0) &&
           (((((char)puVar5[1] == (char)param_3[1] &&
              (*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9))) &&
             (*(char *)((long)puVar5 + 10) == *(char *)((long)param_3 + 10))) &&
            ((puVar5[4] == param_3[4] &&
             (*(char *)((long)puVar5 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
          (*(char *)((long)puVar5 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
         ((((*(char *)((long)puVar5 + 0xd) == *(char *)((long)param_3 + 0xd) &&
            (*(char *)((long)puVar5 + 0xe) == *(char *)((long)param_3 + 0xe))) &&
           ((*(char *)((long)puVar5 + 0xf) == *(char *)((long)param_3 + 0xf) &&
            ((((char)puVar5[2] == (char)param_3[2] &&
              (*(char *)((long)puVar5 + 0x11) == *(char *)((long)param_3 + 0x11))) &&
             (*(char *)((long)puVar5 + 0x12) == *(char *)((long)param_3 + 0x12))))))) &&
          (((puVar5[8] == param_3[8] && (puVar5[9] == param_3[9])) &&
           ((puVar5[10] == param_3[10] &&
            (((((puVar5[0xb] == param_3[0xb] &&
                (*(char *)((long)puVar5 + 0x13) == *(char *)((long)param_3 + 0x13))) &&
               ((puVar5[0xc] == param_3[0xc] &&
                (((puVar5[0xd] == param_3[0xd] &&
                  (*(char *)((long)puVar5 + 0x14) == *(char *)((long)param_3 + 0x14))) &&
                 (puVar5[0x10] == param_3[0x10])))))) &&
              ((*(char *)((long)puVar5 + 0x15) == *(char *)((long)param_3 + 0x15) &&
               (*(char *)((long)puVar5 + 0x16) == *(char *)((long)param_3 + 0x16))))) &&
             (*(char *)((long)puVar5 + 0x17) == *(char *)((long)param_3 + 0x17))))))))))) &&
        ((((char)puVar5[3] == (char)param_3[3] &&
          (*(char *)((long)puVar5 + 0x19) == *(char *)((long)param_3 + 0x19))) &&
         ((puVar5[0x11] == param_3[0x11] &&
          ((((puVar5[0x12] == param_3[0x12] &&
             (*(char *)((long)puVar5 + 0x1a) == *(char *)((long)param_3 + 0x1a))) &&
            (*(char *)((long)puVar5 + 0x1b) == *(char *)((long)param_3 + 0x1b))) &&
           ((*(char *)((long)puVar5 + 0x1c) == *(char *)((long)param_3 + 0x1c) &&
            (puVar5[0x14] == param_3[0x14])))))))))) &&
       ((*(char *)((long)puVar5 + 0x1d) == *(char *)((long)param_3 + 0x1d) &&
        (puVar5[0x15] == param_3[0x15])))) {
      uVar7 = puVar5[5];
      if ((uVar7 == param_3[5]) || (func_0x00010c071ae0(), (int)uVar7 != 0)) {
        uVar7 = puVar5[6];
        if ((uVar7 == param_3[6]) || (func_0x00010c071ae0(), (int)uVar7 != 0)) {
          uVar7 = puVar5[7];
          if ((uVar7 == param_3[7]) || (func_0x00010c071ae0(), (int)uVar7 != 0)) {
            uVar7 = puVar5[0xe];
            if ((uVar7 == param_3[0xe]) || (func_0x00010c071ae0(), (int)uVar7 != 0)) {
              uVar7 = puVar5[0xf];
              if ((uVar7 == param_3[0xf]) || (func_0x00010c071ae0(), (int)uVar7 != 0)) {
                puVar8 = (ulong *)puVar5[0x13];
                if (puVar8 != (ulong *)param_3[0x13]) {
                  func_0x00010c071ae0();
                  goto LAB_107fd52e8;
                }
                goto LAB_107fd52dc;
              }
            }
          }
        }
      }
    }
    puVar8 = (ulong *)0x0;
  }
LAB_107fd52e8:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107fd4fdc; end: 107fd5303; -[SCNotificationServiceExtensionConfigs isEqual:] */

long FUN_107fd4fdc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107fd52dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107fd52e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((((uVar2 & 1) != 0) &&
           ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
              (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
             (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
            ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
             (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
          (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
         ((((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
            (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) &&
           ((*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf) &&
            (((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
              (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
             (*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12))))))) &&
          (((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
            (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
           ((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
            (((((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
                (*(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13))) &&
               ((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
                (((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
                  (*(char *)(param_1 + 0x14) == *(char *)(param_3 + 0x14))) &&
                 (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))))))) &&
              ((*(char *)(param_1 + 0x15) == *(char *)(param_3 + 0x15) &&
               (*(char *)(param_1 + 0x16) == *(char *)(param_3 + 0x16))))) &&
             (*(char *)(param_1 + 0x17) == *(char *)(param_3 + 0x17))))))))))) &&
        (((*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18) &&
          (*(char *)(param_1 + 0x19) == *(char *)(param_3 + 0x19))) &&
         ((*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88) &&
          ((((*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90) &&
             (*(char *)(param_1 + 0x1a) == *(char *)(param_3 + 0x1a))) &&
            (*(char *)(param_1 + 0x1b) == *(char *)(param_3 + 0x1b))) &&
           ((*(char *)(param_1 + 0x1c) == *(char *)(param_3 + 0x1c) &&
            (*(long *)(param_1 + 0xa0) == *(long *)(param_3 + 0xa0))))))))))) &&
       ((*(char *)(param_1 + 0x1d) == *(char *)(param_3 + 0x1d) &&
        (*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8))))) {
      lVar3 = *(long *)(param_1 + 0x28);
      if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x70);
            if ((lVar3 == *(long *)(param_3 + 0x70)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x78);
              if ((lVar3 == *(long *)(param_3 + 0x78)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x98);
                if (lVar3 != *(long *)(param_3 + 0x98)) {
                  func_0x00010c071ae0();
                  goto LAB_107fd52e8;
                }
                goto LAB_107fd52dc;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107fd52e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107fd5304; end: 107fd530b; -[SCNotificationServiceExtensionConfigs indicateProcessedInTitle] */

undefined1 FUN_107fd5304(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107fd530c; end: 107fd5313; -[SCNotificationServiceExtensionConfigs delayNotificationForTesting] */

undefined1 FUN_107fd530c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107fd5314; end: 107fd531b; -[SCNotificationServiceExtensionConfigs showBitmojiEnabled] */

undefined1 FUN_107fd5314(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107fd531c; end: 107fd5323; -[SCNotificationServiceExtensionConfigs paddingPercentageForBitmoji] */

undefined8 FUN_107fd531c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107fd5324; end: 107fd532b; -[SCNotificationServiceExtensionConfigs pnsRouteTag] */

undefined8 FUN_107fd5324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107fd532c; end: 107fd5333; -[SCNotificationServiceExtensionConfigs nseProcessingDisabled] */

undefined1 FUN_107fd532c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107fd5334; end: 107fd533b; -[SCNotificationServiceExtensionConfigs nseSimulateUNP] */

undefined1 FUN_107fd5334(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107fd533c; end: 107fd5343; -[SCNotificationServiceExtensionConfigs enableNotificationCustomSound] */

undefined1 FUN_107fd533c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107fd5344; end: 107fd534b; -[SCNotificationServiceExtensionConfigs enableGrapheneMetricsLogging] */

undefined1 FUN_107fd5344(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107fd534c; end: 107fd5353; -[SCNotificationServiceExtensionConfigs skipSpotlightMediaDownloadInExtension] */

undefined1 FUN_107fd534c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107fd5354; end: 107fd535b; -[SCNotificationServiceExtensionConfigs bypassChatMessageMediaTypeInPrefetch] */

undefined1 FUN_107fd5354(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107fd535c; end: 107fd5363; -[SCNotificationServiceExtensionConfigs bypassSnapMessageMediaTypeInPrefetch] */

undefined1 FUN_107fd535c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107fd5364; end: 107fd536b; -[SCNotificationServiceExtensionConfigs skipMediaFetchWhenAppForegrounded] */

undefined1 FUN_107fd5364(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107fd536c; end: 107fd5373; -[SCNotificationServiceExtensionConfigs notificationTypeGrapheneAllowList] */

undefined8 FUN_107fd536c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107fd5374; end: 107fd537b; -[SCNotificationServiceExtensionConfigs notificationUsersGrapheneAllowList] */

undefined8 FUN_107fd5374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107fd537c; end: 107fd5383; -[SCNotificationServiceExtensionConfigs modifyTimeLimitInSec] */

undefined8 FUN_107fd537c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107fd5384; end: 107fd538b; -[SCNotificationServiceExtensionConfigs grapheneTimeLimitInSec] */

undefined8 FUN_107fd5384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


